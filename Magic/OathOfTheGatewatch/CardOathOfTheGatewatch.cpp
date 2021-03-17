#include "stdafx.h"
#include "CardOathOfTheGatewatch.h"

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
		DEFINE_CARD(CAffaProtectorCard);
		DEFINE_CARD(CAlliedReinforcementsCard);
		DEFINE_CARD(CAncientCrabCard);
		DEFINE_CARD(CCallTheGatewatchCard);
		DEFINE_CARD(CCinderBarrensCard);
		DEFINE_CARD(CCanopyGorgerCard);
		DEFINE_CARD(CExpeditionRaptorCard);
		DEFINE_CARD(CImmolatingGlareCard);
		DEFINE_CARD(CIsolationZoneCard);
		DEFINE_CARD(CKorScythemasterCard);
		DEFINE_CARD(CKorSkyClimberCard);
		DEFINE_CARD(CMakeAStandCard);
		DEFINE_CARD(CMakindiAeronautCard);
		DEFINE_CARD(CMeanderingRiverCard);
		DEFINE_CARD(CMundasVanguardCard);
		DEFINE_CARD(COnduWarClericCard);
		DEFINE_CARD(CReliefCaptainCard);
		DEFINE_CARD(CSearingLightCard);
		DEFINE_CARD(CShoulderToShoulderCard);
		DEFINE_CARD(CSpawnbinderMageCard);
		DEFINE_CARD(CSteppeGliderCard);
		DEFINE_CARD(CStoneforgeAcolyteCard);
		DEFINE_CARD(CSubmergedBoneyardCard);
		DEFINE_CARD(CTimberGorgeCard);
		DEFINE_CARD(CTranquilExpanseCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CMeanderingRiverCard::CMeanderingRiverCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Meandering River"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

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
CSubmergedBoneyardCard::CSubmergedBoneyardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Submerged Boneyard"), nID)
{
	SetIntoPlayTapped();
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
CCinderBarrensCard::CCinderBarrensCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Cinder Barrens"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTimberGorgeCard::CTimberGorgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Timber Gorge"), nID)
{
	SetIntoPlayTapped();

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
CTranquilExpanseCard::CTranquilExpanseCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tranquil Expanse"), nID)
{
	SetIntoPlayTapped();
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

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
CAffaProtectorCard::CAffaProtectorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Affa Protector"), CardType::Creature, CREATURE_TYPE3(Human, Soldier, Ally), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CCanopyGorgerCard::CCanopyGorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Canopy Gorger"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
}

//____________________________________________________________________________
//
CMakindiAeronautCard::CMakindiAeronautCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Makindi Aeronaut"), CardType::Creature, CREATURE_TYPE3(Kor, Scout, Ally), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CKorSkyClimberCard::CKorSkyClimberCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Kor Sky Climber"), CardType::Creature, CREATURE_TYPE3(Kor, Soldier, Ally), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(2),
		_T("1") WHITE_MANA_TEXT, Power(+0), Life(+0), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CSearingLightCard::CSearingLightCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Searing Light"), CardType::Instant, nID,
		WHITE_MANA_TEXT, AbilityType::Instant,
		new CreaturePowerComparer<std::less<int>>(3),		//with power 2 or less
		ZoneId::Battlefield, ZoneId::Graveyard,	TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new AttackingBlockingCreatureComparer);
}

//____________________________________________________________________________
//
CShoulderToShoulderCard::CShoulderToShoulderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shoulder to Shoulder"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			true, PreventableType::NotPreventable));
	ATLASSERT(cpSpell);

	cpSpell->GetTargeting()->SetSubjectCount(0, 2); // Support 2 on each of up to two target creatures
	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCallTheGatewatchCard::CCallTheGatewatchCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Call the Gatewatch"), CardType::Sorcery, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Sorcery,
		&m_CardFilter,
		ZoneId::Hand, TRUE, TRUE, FALSE)
	, m_CardFilter(_T("a planeswalker"), _T("planeswalkers"), new CardTypeComparer(CardType::Planeswalker, false)) //must declare filter this way for cards involved in the search to be filtered
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CMakeAStandCard::CMakeAStandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Make a Stand"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+1), Life(+0)));

    cpSpell->SetAffectControllerCardsOnly();
	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKorScythemasterCard::CKorScythemasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kor Scythemaster"), CardType::Creature, CREATURE_TYPE3(Kor, Soldier, Ally), nID,
		_T("2") WHITE_MANA_TEXT, Power(3), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+0), Life(+0)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetConditionFilter().AddComparer(new AttackingCreatureComparer);
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpawnbinderMageCard::CSpawnbinderMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spawnbinder Mage"), CardType::Creature, CREATURE_TYPE3(Human, Wizard, Ally), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{	
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, FALSE,
			new CardTypeComparer(CardType::Creature, false)));
	
	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter); // Cohort

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
COnduWarClericCard::COnduWarClericCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ondu War Cleric"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Ally), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
{	
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+2), PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter); // Cohort

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CStoneforgeAcolyteCard::CStoneforgeAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stoneforge Acolyte"), CardType::Creature, CREATURE_TYPE3(Human, Artificer, Ally), nID,
		WHITE_MANA_TEXT, Power(1), Life(2))
	, m_CardFilter1(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
	, m_CardFilter2(_T("an Equipment card"), _T("Equipment cards"), new CardTypeComparer(CardType::Equipment, false)) //must declare filter this way for cards involved in the search to be filtered
{	
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T(""),
			4));
	
	ATLASSERT(cpAbility);

	cpAbility->SetSelectionOptions(MinimumValue(0), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, &m_CardFilter2);
	cpAbility->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpAbility->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		TRUE);	// reveal only selected cards

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter1); // Cohort

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMundasVanguardCard::CMundasVanguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Munda's Vanguard"), CardType::Creature, CREATURE_TYPE3(Kor, Knight, Ally), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
	, m_CardFilter(_T("an Ally"), _T("Allies"), new CreatureTypeComparer(CREATURE_TYPE(Ally), false))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CMundasVanguardCard::OnResolutionCompleted))
{	
	counted_ptr<CActivatedAbility<CPwrTghAttrEnchantment>> cpAbility(
			::CreateObject<CActivatedAbility<CPwrTghAttrEnchantment>>(this,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter); // Cohort

	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on each creature you control. Activates"));

	AddAbility(cpAbility.GetPointer());
}

void CMundasVanguardCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattle =  pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);

	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);
	for (int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pOppCard = pBattle->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
			pModifier.ApplyTo(pOppCard);
	}
}
//____________________________________________________________________________
//
CSteppeGliderCard::CSteppeGliderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Steppe Glider"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying | CreatureKeyword::Vigilance, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardCounterComparer<std::greater_equal<int>>(_T("+1/+1"), 1)));
		
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CReliefCaptainCard::CReliefCaptainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Relief Captain"), CardType::Creature, CREATURE_TYPE3(Kor, Knight, Ally), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(2))
{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card
		cpAbility->GetTargeting().SetSubjectCount(0, 3); // Support 3 on each of up to three target creatures

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExpeditionRaptorCard::CExpeditionRaptorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Expedition Raptor"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));
		
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card
		cpAbility->GetTargeting().SetSubjectCount(0, 2); // Support 2 on each of up to two target creatures

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIsolationZoneCard::CIsolationZoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Isolation Zone"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature | CardType::_Enchantment, false));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1);							// link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2);							   // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);			   // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData());							   // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer);							   // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);										   // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);									   // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CAncientCrabCard::CAncientCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancient Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(5))
{
}

//____________________________________________________________________________
//
CAlliedReinforcementsCard::CAlliedReinforcementsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Allied Reinforcements"), CardType::Sorcery, nID)
{
	counted_ptr<CTokenProductionSpell> cpSpell(
		::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
			_T("3") WHITE_MANA_TEXT,
			_T("Knight Ally A"), 55060,
			2));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CImmolatingGlareCard::CImmolatingGlareCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Immolating Glare"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new AttackingCreatureComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
