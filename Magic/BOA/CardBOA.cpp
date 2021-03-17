#include "stdafx.h"
#include "CardBOA.h"

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

		DEFINE_CARD(CAEtherPortalCard);
		DEFINE_CARD(CGiveAndTakeCard);
		DEFINE_CARD(CGuardianOfTheStarsCard);
		DEFINE_CARD(CMoldeazaLordOfTheSporesCard);
		DEFINE_CARD(CMoldSporeCard);
		DEFINE_CARD(CNamelessDesolationCard);
		DEFINE_CARD(CPlagueOfDamnationCard);
		DEFINE_CARD(CReflectingMoxCard);
		DEFINE_CARD(CSheilaRecyclerofDreamsCard);
		DEFINE_CARD(CSilenciateCard);
		DEFINE_CARD(CSurvivalOfTheSickestCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CPlagueOfDamnationCard::CPlagueOfDamnationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Plague of Damnation"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell5> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell5>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("artifacts, creatures or enchantments"))));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CGuardianOfTheStarsCard::CGuardianOfTheStarsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guardian of the Stars"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, 
								&CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetSacrificeResolutionCost(1, CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Plains")));
	cpAbility->SetToZone(ZoneId::Battlefield);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAEtherPortalCard::CAEtherPortalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Æther Portal"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T("4"),
				new CardTypeComparer(CardType::_Permanent, false),
			ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CReflectingMoxCard::CReflectingMoxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Reflecting Mox"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	SetIntoPlayTapped();

	{
		counted_ptr<CManaProductionAbility3> cpAbility(::CreateObject<CManaProductionAbility3>(this,
			_T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::BasicLand, false),
			CManaPool::Color::Black));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(::CreateObject<CManaProductionAbility3>(this,
			_T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::BasicLand, false),
			CManaPool::Color::Blue));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(::CreateObject<CManaProductionAbility3>(this,
			_T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::BasicLand, false),
			CManaPool::Color::Red));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(::CreateObject<CManaProductionAbility3>(this,
			_T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::BasicLand, false),
			CManaPool::Color::Green));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(::CreateObject<CManaProductionAbility3>(this,
			_T(""), AbilityType::Activated,
			new CardTypeComparer(CardType::BasicLand, false),
			CManaPool::Color::White));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSilenciateCard::CSilenciateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Silenciate"), CardType::Instant, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		AbilityType::Instant,
		new TrueCardComparer)
{
	GetCardKeyword()->AddSplitSecond(FALSE);
}

//____________________________________________________________________________
//
CNamelessDesolationCard::CNamelessDesolationCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nameless Desolation"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfDamageDealt,
			CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextUntapStep, FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGiveAndTakeCard::CGiveAndTakeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Give and Take"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetPlayerSacrificeSpell2>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerSacrificeSpell2>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
// Mold Spore\n{2BG}\nEnchantment\nBOA,R\n{BG}: Put a 1/1 black and green Saproling token onto the battlefield.\r{XBG}: Put X 1/1 black and green Saproling token onto the battlefield. X can't be greater than the number of Saprolings you control. Activate this ability only during your upkeep.
//
CMoldSporeCard::CMoldSporeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mold Spore"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				_T("Saproling A"), 2722,
				1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				BLACK_MANA_TEXT GREEN_MANA_TEXT,
				_T("Saproling A"), 2722,
				0));

		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep,
			FALSE, // opponent's turn
			TRUE); // your turn

		cpAbility->GetCost().SetExtraManaCost();
		cpAbility->SetExtraActionValueVector();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMoldSporeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMoldSporeCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = m_CardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	ContextValue Context(pAction->GetValue());
	if (Context.nValue1 > nCreatures)
	{
		Context.nValue1 = nCreatures;
		pAction->SetValue(Context);
	}

	return true;
}

//____________________________________________________________________________
//
// Survival of the Sickest\n{4BG}\nInstant\nBOA,R\nCreatures you control get +3/+3 and gain trample, reach, deathtouch and
// "{B}/{G}: Regenerate this creature"" until end of turn.\rAt the beginning of the next end step, destroy those creatures if they attacked or blocked this turn.
//
CSurvivalOfTheSickestCard::CSurvivalOfTheSickestCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Survival of the Sickest"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT GREEN_MANA_TEXT, 
			new AnyCreatureComparer,
			Power(+3), Life(+3),	// power delta, life delta
			CreatureKeyword::Trample | CreatureKeyword::Reach));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSurvivalOfTheSickestCard::CreateRegenerationAbility1)));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSurvivalOfTheSickestCard::CreateRegenerationAbility2)));

	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures attacked or blocked this turn")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
		GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, 
		CScheduledPlayerModifier::Operation::ApplyToLater);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSurvivalOfTheSickestCard::CreateRegenerationAbility1(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(::CreateObject<CRegenerationAbility>(pCard, BLACK_MANA_TEXT));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CSurvivalOfTheSickestCard::CreateRegenerationAbility2(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(::CreateObject<CRegenerationAbility>(pCard, GREEN_MANA_TEXT));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
// Moldeaza, Lord of the Spores\n{X2BBG}\nLegendary Creature - Fungus\nBOA,R\nWhen Moldeaza, Lord of the Spores enters the battlefield,
// sacrifice X Saprolings.\rMoldeaza's power and toughness are each equal to the number of Saprolings sacrificed this way.\r
// {2}, Sacrifice a Saproling: Moldeaza gets +2/+1 and gains "{B}: Regenerate this creature" until end of turn.\nX/X
//
CMoldeazaLordOfTheSporesCard::CMoldeazaLordOfTheSporesCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Moldeaza, Lord of the Spores"), CardType::_LegendaryCreature, CREATURE_TYPE(Skeleton), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0),
		_T("2"), Power(+2), Life(+1))
	, m_CardFilter(new CreatureTypeComparer(CREATURE_TYPE(Saproling), false))
{
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	m_pPumpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
	m_pPumpAbility->AddAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CMoldeazaLordOfTheSporesCard::CreateRegenerationAbility));


	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Saproling), false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMoldeazaLordOfTheSporesCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMoldeazaLordOfTheSporesCard::BeforeResolveSelection));

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CMoldeazaLordOfTheSporesCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	int nExtraCost = GetLastCastingExtraValue();
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(nExtraCost, nExtraCost, TRUE);

	return true;
}

bool CMoldeazaLordOfTheSporesCard::BeforeResolveSelection(CMoldeazaLordOfTheSporesCard::TriggeredAbility::TriggeredActionType* pAction)
{
	int nSacrificedCount = ((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetSubjectCount();

	CPowerModifier modifier1(Power(nSacrificedCount), false);
	CLifeModifier modifier2(Life(nSacrificedCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, false);

	modifier1.ApplyTo(this);
	modifier2.ApplyTo(this);

	return TRUE;
}

counted_ptr<CAbility> CMoldeazaLordOfTheSporesCard::CreateRegenerationAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(::CreateObject<CRegenerationAbility>(pCard, BLACK_MANA_TEXT));
	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSheilaRecyclerofDreamsCard::CSheilaRecyclerofDreamsCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Sheila, Recycler of Dreams"), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
		PlaneswalkerType::Sheila, 0)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSheilaRecyclerofDreamsCard::OnResolutionCompleted))
{
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//hybrid mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("casts"));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("Retrace - Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("Retrace - Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				BLACK_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("Retrace - Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Retrace cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));

		cpSpell->SetGraveyardOnly(); 
		cpSpell->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		cpSpell->SetAbilityText(_T("Retrace - Casts"));
		
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetSubjectCount(0, 3, FALSE);
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		CZoneModifier* pModifier2 = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
		pModifier2->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier2->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier2->AddSelection(MinimumValue(3), MaximumValue(3), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier2);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -1);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Worm"), TOKEN_ID_BY_NAME,
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
				_T(""),
				0));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE, FALSE);

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -10);
		
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));
		cpAbility->GetGatherer().SetSubjectCount(1, SpecialNumber::Any, FALSE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSheilaRecyclerofDreamsCard::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSheilaRecyclerofDreamsCard::BeforeResolveSelection(CSheilaRecyclerofDreamsCard::TriggeredAbility::TriggeredActionType* pAction)
{
	int nSacrificedCount = ((TriggeredAbility::SubjectActionType*)pAction)->GetSubjectGroup().GetSubjectCount();
	CCardCounterModifier pModifier = CCardCounterModifier(LOYALTY_COUNTER, +nSacrificedCount, true);
	pModifier.ApplyTo(this);
	
	return true;
}

void CSheilaRecyclerofDreamsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int reveal=0;
	int stop=0;
	for (int i = 0; i < pLib->GetSize(); i++)

	{
		CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
//		if ((!ppCard->GetCardType().IsCreature()) && (stop<4))
		if ((stop<4))
			++reveal;
		if (ppCard->GetCardType().IsCreature())
			++stop;
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
												CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to reorder
	CZoneModifier::RoleType::PrimaryPlayer, // select by 
	CZoneModifier::RoleType::PrimaryPlayer, // reveal to
	CCardFilter::GetFilter(_T("creatures")), // what cards
	ZoneId::Battlefield, // if selected, move cards to
	CZoneModifier::RoleType::PrimaryPlayer, // select by this player
	CardPlacement::Top, // put selected cards on 
	MoveType::Others, // move type
	CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.SetReorderInformation(
		false, 
		ZoneId::Library,	
		CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
		CardPlacement::Bottom);
	pmodifier2.ApplyTo(GetController());
	pLib->Shuffle();
}

//____________________________________________________________________________
//
