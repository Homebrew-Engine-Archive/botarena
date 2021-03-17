#include "stdafx.h"
#include "CardCommander.h"

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

		// Add new card class names here:
		// For example:
			DEFINE_CARD(CAcornCatapultCard);
			DEFINE_CARD(CAnimarSoulofElementsCard);
			DEFINE_CARD(CArchangelOfStrifeCard);
			DEFINE_CARD(CAvatarOfSlaughterCard);
			DEFINE_CARD(CBasandraBattleSeraphCard);
			DEFINE_CARD(CCelestialForceCard);
		 	DEFINE_CARD(CChaosWarpCard);
		 	DEFINE_CARD(CCommanderCard);
			DEFINE_CARD(CCommandTowerCard);
			//DEFINE_CARD(CCrescendoOfWarCard);
			DEFINE_CARD(CDamiaSageofStoneCard);
			DEFINE_CARD(CDeathbyDragonsCard);
			DEFINE_CARD(CDreadCacodemonCard);
			DEFINE_CARD(CEdricSpymasterofTrestCard);
			DEFINE_CARD(CFlusterstormCard);
			DEFINE_CARD(CGhaveGuruOfSporesCard);
			DEFINE_CARD(CKaaliaOfTheVastCard);
			DEFINE_CARD(CHomewardPathCard);
			DEFINE_CARD(CHornetQueenCard);
			DEFINE_CARD(CHydraOmnivoreCard);
			DEFINE_CARD(CKaradorGhostChieftainCard);
			DEFINE_CARD(CMagmaticForceCard);
			DEFINE_CARD(CMartyrsBondCard);
			DEFINE_CARD(CNinThePainArtistCard);
			DEFINE_CARD(CRiddlekeeperCard);
			DEFINE_CARD(CRikuOfTwoReflectionsCard);
			DEFINE_CARD(CSkullbriartheWalkingGraveCard);
			DEFINE_CARD(CSoulSnareCard);
			DEFINE_CARD(CSpellCrumpleCard);
			DEFINE_CARD(CSyphonFleshCard);
			DEFINE_CARD(CTarielReckonerofSoulsCard);
			DEFINE_CARD(CTrenchGorgerCard);
			DEFINE_CARD(CTributeToTheWildCard);
			DEFINE_CARD(CVishKalBloodArbiterCard);
			DEFINE_CARD(CZedruutheGreatheartedCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here
CCommanderCard::CCommanderCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Commander"), CardType::Null,nID)
	,CastingTimes(0)
	,DamageDealtByOtherCommander(0)	
	,m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCommanderCard::OnZoneChanged))
	,m_cpPListener(VAR_NAME(m_cpPListener), CastSpellEventSource::Listener::EventCallback(
					this, &CCommanderCard::OnSpellCasted))
	,m_cpDListener(VAR_NAME(m_cpDListener), 
					DamageDealEventSource::Listener::EventCallback(this, &CCommanderCard::OnDamageDealt))
	,m_cpZListener(VAR_NAME(m_cpAListener), 
					CardMovementEventSource::Listener::EventCallback(this, &CCommanderCard::OnCardMoved))
	,m_cpMListener(VAR_NAME(m_cpMListener), 
					ManaAddEventSource::Listener::EventCallback(this, &CCommanderCard::OnManaAdd))
	,set(FALSE)
	,black(FALSE)
	,green(FALSE)
	,red(FALSE)
	,white(FALSE)
	,blue(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

/*{
		counted_ptr<CCommanderCastEnchantment> cpAbility(
			::CreateObject<CCommanderCastEnchantment>(this,
			new CardReplacementKeywordComparer(ReplacementKeyword::Commander, false)));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetAffectCardsInTheseZones(ZoneId::_Effects | ZoneId::Stack);

		AddAbility(cpAbility.GetPointer());
	}*/
	{
		counted_ptr<CConsExtraManaEnchantment> cpAbility(
		::CreateObject<CConsExtraManaEnchantment>(this,
			new CardReplacementKeywordComparer(ReplacementKeyword::Commander, false),
			_T("")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectCardsInTheseZones(ZoneId::_Effects);

		m_pAbility = cpAbility;

		AddAbility(cpAbility.GetPointer());
	}
}
void CCommanderCard::OnZoneChanged(CCard*, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pFromZone && pToZone->GetZoneId() == ZoneId::_Effects)
	{
		CGame* pGame = GetGame();
		pGame->GetStack().GetCastSpellEventSource()->AddListener(m_cpPListener.GetPointer());
		GetOwner()->GetManaAddEventSource()->AddListener(m_cpMListener.GetPointer());

		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpDListener.GetPointer());

		GetOwner()->GetZoneById(ZoneId::_Effects)->GetCardMovedEventSource()->AddListener(m_cpZListener.GetPointer());
	}
}
void CCommanderCard::OnSpellCasted(CCard* pCard)
{
	if (pCard->GetReplacementKeyword()->HasCommanderFlag() && pCard->GetOwner() == GetController())
		CastingTimes = CastingTimes+1;
}
void CCommanderCard::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	if (pFromCard->GetReplacementKeyword()->HasCommanderFlag() && pToPlayer == GetController() && GetController() != pFromCard->GetOwner())
	{
		DamageDealtByOtherCommander = DamageDealtByOtherCommander-GET_INTEGER(damage.m_nLifeDelta);

		if (DamageDealtByOtherCommander >= 21) 
			GetController()->SetLostByOtherReasons();
	}
}
void CCommanderCard::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pCard->GetReplacementKeyword()->HasCommanderFlag() && pFromZone && pToZone == GetOwner()->GetZoneById(ZoneId::_Effects))
	{
		m_pAbility->EndEnchantment();

			CManaCost mCost;
			mCost.AddCost(CManaCost::Color::Generic, 0);
			mCost.AddCost(CManaCost::Color::Generic, (2*(CastingTimes)));

		int time = CastingTimes*2;

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();

	}
	if (set == FALSE && pCard->GetReplacementKeyword()->HasCommanderFlag() && pFromZone && pToZone == GetOwner()->GetZoneById(ZoneId::_Effects))
	{
		if ((pCard->GetCardType() & CardType::Green).Any()) green = TRUE;
		if ((pCard->GetCardType() & CardType::Red).Any()) red = TRUE;
		if ((pCard->GetCardType() & CardType::White).Any()) white = TRUE;
		if ((pCard->GetCardType() & CardType::Blue).Any()) blue = TRUE;
		if ((pCard->GetCardType() & CardType::Black).Any()) black = TRUE;

		for (int i=0; i<pCard->GetAbilities().GetSize(); i++)
		{
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Red))
				red = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Green))
				green = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Blue))
				blue = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::White))
				white = TRUE;
			if (pCard->GetAbilities().GetAt(i)->GetCost().GetOriginalManaCost().GetCost(CManaCost::Color::Black))
				black = TRUE;
		}
		set = TRUE;
	}
}
void CCommanderCard::OnManaAdd(CPlayer* pPlayer, const CManaPool pPool)
{
	if (pPool.GetMana(CManaPoolBase::Color::Green) && pPlayer == GetOwner() && green == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Green);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(GREEN_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::Red) && pPlayer == GetOwner() && red == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Red);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(RED_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::Blue) && pPlayer == GetOwner() && blue == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Blue);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(BLUE_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::Black) && pPlayer == GetOwner() && black == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::Black);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(BLACK_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}

	if (pPool.GetMana(CManaPoolBase::Color::White) && pPlayer == GetOwner() && white == FALSE)
	{
		int n = pPool.GetMana(CManaPoolBase::Color::White);

		CManaPoolModifier pModifier =  CManaPoolModifier(
			CManaPoolModifier::Operation::Remove, CManaPool::CManaPool(WHITE_MANA_TEXT)); // mana color
		CManaPoolModifier pModifier2 =  CManaPoolModifier(
			CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1"))); // mana color

		if (n!=0) for (int i=0; i<n; i++) { pModifier.ApplyTo(GetController()); pModifier2.ApplyTo(GetController());}
	}
}

//____________________________________________________________________________
//
CSkullbriartheWalkingGraveCard::CSkullbriartheWalkingGraveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skullbriar, the Walking Grave"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Elemental), nID,
		BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddHaste(FALSE);

	//GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetCounterContainer()->SetActiveZones(ZoneId::_ActiveCounterZones);

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
CKaradorGhostChieftainCard::CKaradorGhostChieftainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Karador, Ghost Chieftain"), CardType::_LegendaryCreature, CREATURE_TYPE2(Centaur, Spirit), nID,
		_T("5") BLACK_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
		, m_CardFilter(_T("creature card"), _T("creatures"), new CardTypeComparer(CardType::Creature, false))
{
	{
		counted_ptr<CTriggeredAffinityAbility> cpAbility(
			::CreateObject<CTriggeredAffinityAbility>(this,
				 &m_CardFilter));

		cpAbility->SetManaReductionColor(CManaCostBase::Color::Generic);
		cpAbility->SetCountingZone(ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::PlayOneCardFromGraveyard, (int)CCardFilter::GetFilter(_T("creatures")));
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
				GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	
		pModifier->LinkPlayerModifier(pModifier2);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::PlayOneCardFromGraveyard, (int)CCardFilter::GetFilter(_T("creatures")));
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
				GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	
		pModifier->LinkPlayerModifier(pModifier2);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDeathbyDragonsCard::CDeathbyDragonsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death by Dragons"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT RED_MANA_TEXT ,
				0, MoveType::Others, ZoneId::Graveyard, TRUE, TRUE, CCardFilter::GetFilter(_T("cards"))));

		cpSpell->SetAbilityText(_T("Each player other than target player puts a 5/5 red Dragon creature token with flying onto the battlefield."));
		cpSpell->GetTargetModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CTokenCreationModifier(GetGame(), _T("Dragon C"), 2714, 1)));
		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CEdricSpymasterofTrestCard::CEdricSpymasterofTrestCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Edric, Spymaster of Trest"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Rogue), nID,
		_T("1") GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
			typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAnimarSoulofElementsCard::CAnimarSoulofElementsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Animar, Soul of Elements"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		RED_MANA_TEXT GREEN_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
	counted_ptr<CTriggeredCounterAffinityAbility> cpAbility(
		::CreateObject<CTriggeredCounterAffinityAbility>(this,
			new AnyCreatureComparer, _T("+1/+1")));

	AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	
}

//____________________________________________________________________________
//
CTarielReckonerofSoulsCard::CTarielReckonerofSoulsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tariel, Reckoner of Souls"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(4), Life(7))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CActivatedAbility<CGenericTargetPlayerSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CGenericTargetPlayerSpell>>(this,
			_T("")));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTarielReckonerofSoulsCard::BeforeResolution));		
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
}

bool CTarielReckonerofSoulsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CGainControlModifier modifier = CGainControlModifier(GetGame(),(CCard*)this);

	CZone* pBattlefield = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Graveyard);
	CCountedCardContainer cards;
	if (CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pBattlefield, cards))
		modifier.ApplyTo(cards.GetAt(pAction->GetController()->GetRand() % cards.GetSize()));

	return true;
}

//____________________________________________________________________________
//
CDamiaSageofStoneCard::CDamiaSageofStoneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Damia, Sage of Stone"), CardType::_LegendaryCreature, CREATURE_TYPE2(Gorgon, Wizard), nID,
		_T("4") GREEN_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddDeathtouch(FALSE);

	{
		//Skip your draw step
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);	

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDamiaSageofStoneCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDamiaSageofStoneCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
	}
}
bool CDamiaSageofStoneCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CNode* pToNode) 
{
	if (GetController()->GetZoneById(ZoneId::Hand)->GetSize()<7)
	return true;
	
	return false;
}
bool CDamiaSageofStoneCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	if (pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize()<7)
	{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = 7-pAction->GetController()->GetZoneById(ZoneId::Hand)->GetSize();
	pAction->SetTriggerContext(triggerContext);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CZedruutheGreatheartedCard::CZedruutheGreatheartedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Zedruu the Greathearted"), CardType::_LegendaryCreature, CREATURE_TYPE2(Minotaur, Monk), nID,
		_T("1") RED_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(4))
{
	{
	counted_ptr<CActivatedAbility<CDonateSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDonateSpell>>(this,
			 RED_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT));

	cpAbility->GetTargeting2()->SetIncludeOpponentPlayersOnly();

	AddAbility(cpAbility.GetPointer());
	}
	{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);	
	
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CZedruutheGreatheartedCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
	}
}
bool CZedruutheGreatheartedCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardOwnerComparer(pAction->GetController()));

	int n = m_CardFilter_temp.CountIncluded(m_pGame->GetNextPlayer(pAction->GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = n;
	pAction->SetTriggerContext(triggerContext);

	CLifeModifier pModifier = CLifeModifier(Life(+n), this);
	
	pModifier.ApplyTo(pAction->GetController());

	return TRUE;
}

//____________________________________________________________________________
//
CSpellCrumpleCard::CSpellCrumpleCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Spell Crumple"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetToZone(ZoneId::Library, TRUE, CardPlacement::Bottom);
	m_pCounterSpell->SetToZoneIfSuccess(ZoneId::Library, TRUE, CardPlacement::Bottom);
}

//____________________________________________________________________________
//
CCommandTowerCard::CCommandTowerCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Command Tower"), nID)	
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCommandTowerCard::CanPlayWhite)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCommandTowerCard::CanPlayBlack)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCommandTowerCard::CanPlayRed)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCommandTowerCard::CanPlayGreen)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCommandTowerCard::CanPlayBlue)));

		cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

BOOL CCommandTowerCard::CanPlayWhite(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::_Effects);

	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetPrintedCardName() == _T("Commander"))
		{
			return ((CCommanderCard*)pInplay->GetAt(i))->IdentityWhite() == TRUE;
		}


	return false;
}
BOOL CCommandTowerCard::CanPlayRed(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::_Effects);

	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetPrintedCardName() == _T("Commander"))
		{
			return ((CCommanderCard*)pInplay->GetAt(i))->IdentityRed() == TRUE;
		}


	return false;
}
BOOL CCommandTowerCard::CanPlayGreen(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::_Effects);

	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetPrintedCardName() == _T("Commander"))
		{
			return ((CCommanderCard*)pInplay->GetAt(i))->IdentityGreen() == TRUE;
		}


	return false;
}
BOOL CCommandTowerCard::CanPlayBlue(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::_Effects);

	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetPrintedCardName() == _T("Commander"))
		{
			return ((CCommanderCard*)pInplay->GetAt(i))->IdentityBlue() == TRUE;
		}


	return false;
}
BOOL CCommandTowerCard::CanPlayBlack(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::_Effects);

	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetPrintedCardName() == _T("Commander"))
		{
			return ((CCommanderCard*)pInplay->GetAt(i))->IdentityBlack() == TRUE;
		}


	return false;
}
//____________________________________________________________________________
//
CHomewardPathCard::CHomewardPathCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Homeward Path"), nID)	
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CHomewardPathCard::OnResolutionCompleted))
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
				_T("")));

		cpAbility->AddTapCost();	
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

void CHomewardPathCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pToMove;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if (pCard->GetCardType().IsCreature() && (pCard->GetOwner() != pCard->GetController()))
				pToMove.AddCard(pCard, CardPlacement::Top);
		}
	}

	for (int i = 0; i < pToMove.GetSize(); ++i)
	{
		CCard* pCard = pToMove.GetAt(i);
		pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Battlefield), pCard->GetOwner(), MoveType::Others);
	}
}

//____________________________________________________________________________
//
CGhaveGuruOfSporesCard::CGhaveGuruOfSporesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghave, Guru of Spores"), CardType::_LegendaryCreature, CREATURE_TYPE2(Fungus, Shaman), nID,
		_T("2") WHITE_MANA_TEXT BLACK_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 5, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Saproling J"), 62001,
				1));

		cpAbility->GetCost().AddAnyCardCounterCost(_T("+1/+1"), -1, 1, CCardFilter::GetFilter(_T("creatures")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, FALSE));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKaaliaOfTheVastCard::CKaaliaOfTheVastCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kaalia of the Vast"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CMoveAttackingAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon) | CREATURE_TYPE(Angel) | CREATURE_TYPE(Dragon) ,false));
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->SetFromZoneId(ZoneId::Hand);	

	AddAbility(cpAbility.GetPointer());
	
}

//____________________________________________________________________________
//
CCelestialForceCard::CCelestialForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Celestial Force"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(7), Life(7))

{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	//cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	//cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//______________________________________________________________________________
//
CFlusterstormCard::CFlusterstormCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Flusterstorm"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Sorcery | CardType::Instant, false))
{
	{
		m_pCounterSpell->SetCanBeDenied();
		m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));
	}

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFlusterstormCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlusterstormCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CFlusterstormCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CFlusterstormCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CFlusterstormCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CFlusterstormCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTributeToTheWildCard::CTributeToTheWildCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tribute to the Wild"), CardType::Instant, nID)
{
    counted_ptr<CGlobalChgLifeSpell3> cpSpell(
        ::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Instant, _T("1") GREEN_MANA_TEXT, Life(0),
                                FALSE_CARD_COMPARER, PreventableType::Preventable,
                                1,
                                new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false)));

	cpSpell->SetSacrificeOpponentCardsOnly();

    AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHydraOmnivoreCard::CHydraOmnivoreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hydra Omnivore"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))

{
	//NOTE: Coded as vanilla because BA doesn't support multiplayer yet. (08-Jul-2011)
}

//______________________________________________________________________________
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
CMagmaticForceCard::CMagmaticForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Magmatic Force"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//______________________________________________________________________________
//
CVishKalBloodArbiterCard::CVishKalBloodArbiterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vish Kal, Blood Arbiter"), CardType::_LegendaryCreature, CREATURE_TYPE(Vampire), nID,
		_T("4") WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CVishKalBloodArbiterCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddLifelink(false);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetAbilityText(_T("Put X +1/+1 counters on"));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(0), Life(0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), SpecialNumber::All);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVishKalBloodArbiterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

void CVishKalBloodArbiterCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	int nCounters = 0;

	CCreatureCard* pCard = dynamic_cast<CCreatureCard*>(pAbilityAction->GetSacrificeCards()->GetAt(0));
	if (pCard) nCounters = GET_INTEGER(pCard->GetLastKnownPower());

	CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), nCounters, false);
	if (bResult) pModifier->ApplyTo(this);
}

bool CVishKalBloodArbiterCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCounters = pAction->GetCostConfigEntry().GetExtraValue();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nCounters;
	Context.nValue2 = nCounters;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
	it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//______________________________________________________________________________
//
CNinThePainArtistCard::CNinThePainArtistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nin, the Pain Artist"), CardType::_LegendaryCreature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		BLUE_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			BLUE_MANA_TEXT RED_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(0), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().SetExtraManaCost();

	cpAbility->SetExtraActionValueVector(ContextValue(-1));
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNinThePainArtistCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CNinThePainArtistCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetExtraValue();
	CDrawCardModifier modifier = CDrawCardModifier(GetGame(), MinimumValue(nCount), MaximumValue(nCount));
	modifier.ApplyTo(pAction->GetAssociatedCard()->GetController());

	return true;
}

//______________________________________________________________________________
//

CAvatarOfSlaughterCard::CAvatarOfSlaughterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avatar of Slaughter"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT, Power(8), Life(8))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
			
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::DoubleStrike);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));
			
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::MustAttack);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	
		AddAbility(cpAbility.GetPointer());
	}
}

//______________________________________________________________________________
//
CChaosWarpCard::CChaosWarpCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Chaos Warp"), CardType::Instant, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CChaosWarpCard::OnResolutionCompleted))

{
	m_pTargetMoveCardSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CChaosWarpCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetAssociatedCard();
	CPlayer* pPlayer = pCard->GetController();
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	if (bResult)
	{
		pLibrary->Shuffle();

		if (pLibrary->GetSize() > 0)
		{
			CCard* pRevealedCard = pLibrary->GetTopCard();
			if (pRevealedCard->GetCardType().IsPermanent())
			{
				CZoneModifier pmodifier_con1 = CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pmodifier_con1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Battlefield, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Bottom, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer);
				pmodifier_con1.ApplyTo(pPlayer);
			}
			else
			{
				CZoneModifier pmodifier_con1 = CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pmodifier_con1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // what cards
					ZoneId::Library, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer);
				pmodifier_con1.ApplyTo(pPlayer);
			}
		}
	}
}
//____________________________________________________________________________
//
CAcornCatapultCard::CAcornCatapultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Acorn Catapult"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CAcornCatapultCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("1"),
			new AnyCreatureComparer, TRUE, 
			Life(-1),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

void CAcornCatapultCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* tCreature = pAbilityAction->GetAssociatedCard();
	CPlayer* tPlayer = pAbilityAction->GetAssociatedPlayer();
	CPlayer* pPlayer;

	if (tCreature) pPlayer = tCreature->GetController();
	else pPlayer = tPlayer;

	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Squirrel A"), 2769, 1);
	pModifier.ApplyTo(pPlayer);
}
//____________________________________________________________________________
//
CRikuOfTwoReflectionsCard::CRikuOfTwoReflectionsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riku of Two Reflections"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRikuOfTwoReflectionsCard::SetTriggerContext1));

		cpAbility->SetResolutionCost(BLUE_MANA_TEXT RED_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
				ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		
		cpAbility->GetCardModifiers().Add(new CCardCopyModifier(GetGame(), this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRikuOfTwoReflectionsCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetResolutionCost(GREEN_MANA_TEXT BLUE_MANA_TEXT);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRikuOfTwoReflectionsCard::SetTriggerContext1(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;

	const CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						triggerContext.m_pStackAction = const_cast<CStackAbilityAction*>(stack.GetStackAction(l).GetPointer());
						if (triggerContext.m_pStackAction->IsSpell() && (triggerContext.m_pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}

	return true;
}

bool CRikuOfTwoReflectionsCard::SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}
//______________________________________________________________________________
//
CDreadCacodemonCard::CDreadCacodemonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dread Cacodemon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("7") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(8), Life(8))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDreadCacodemonCard::OnZoneChanged))
	, m_bHandStack(false)
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDreadCacodemonCard::SetTriggerContext));
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDreadCacodemonCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CDreadCacodemonCard::SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (pFromZone->GetPlayer() == pByPlayer && pFromZone->GetZoneId() == ZoneId::Stack &&
			moveType == MoveType::Cast && m_bHandStack);
}

void CDreadCacodemonCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;
	if (pToZone->GetZoneId() != ZoneId::Stack) return;

	if (pFromZone->GetZoneId() == ZoneId::Hand && moveType == MoveType::Cast)
		m_bHandStack = true;
	else
		m_bHandStack = false;
}

bool CDreadCacodemonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
					std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		if (GetGame()->GetPlayer(ip) != pAction->GetController())
		{
			CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
		}
	}

	return true;
}

//____________________________________________________________________________
//
CRiddlekeeperCard::CRiddlekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Riddlekeeper"), CardType::Creature, CREATURE_TYPE(Homunculus), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRiddlekeeperCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRiddlekeeperCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CRiddlekeeperCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.nValue1 = (int)pCreature;
	return true;
}

bool CRiddlekeeperCard::BeforeResolution(CRiddlekeeperCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCard* pCard = (CCard*)triggerContext.nValue1;

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 2, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier.ApplyTo(pCard->GetController());

	return true;
}

//____________________________________________________________________________
//
CSoulSnareCard::CSoulSnareCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Soul Snare"), CardType::GlobalEnchantment, nID,
		WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			WHITE_MANA_TEXT,
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTrenchGorgerCard::CTrenchGorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trench Gorger"), CardType::Creature, CREATURE_TYPE(Leviathan), nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
   , m_ActionSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTrenchGorgerCard::OnActionSelected))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTrenchGorgerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CTrenchGorgerCard::BeforeResolution(CAbilityAction* pAction)
{
		std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't search your library"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Search your library"));

		entries.push_back(selectionEntry);
	}

	m_ActionSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return true;
}

void CTrenchGorgerCard::OnActionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new CardTypeComparer(CardType::_Land, false));
	
				CCountedCardContainer pSelectedCards;

				CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(pSelectionPlayer,
					MinimumValue(0), MaximumValue(SpecialNumber::Any),
					pSelectionPlayer, ZoneId::Library,
					&m_CardFilter, 
					ZoneId::Exile, TRUE, CardPlacement::Top,
					FALSE, FALSE, FALSE,
					&pSelectedCards);

				pModifier1.ApplyTo(pSelectionPlayer);

				int nValue = pSelectedCards.GetSize();

				CPowerModifier* pModifier2 = new CPowerModifier;
				pModifier2->SetPowerDelta(Power(nValue));
				pModifier2->SetToBase(TRUE);
				pModifier2->SetReplacement(TRUE);
				pModifier2->SetOneTurnOnly(FALSE);

				CLifeModifier* pModifier3 = new CLifeModifier;
				pModifier3->SetLifeDelta(Life(nValue));
				pModifier3->SetPreventable(PreventableType::NotPreventable);
				pModifier3->SetDamageType(DamageType::NotDealingDamage);
				pModifier3->SetToBase(TRUE);
				pModifier3->SetReplacement(TRUE);
				pModifier3->SetOneTurnOnly(FALSE);

				pModifier2->ApplyTo(this);
				pModifier3->ApplyTo(this);
			}
		}
}
//____________________________________________________________________________
//
CSyphonFleshCard::CSyphonFleshCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Syphon Flesh"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("4") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSyphonFleshCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CSyphonFleshCard::BeforeResolution(CAbilityAction* pAction) const
{
	int PrevPermanents = 0;
	int NewPermanents = 0;
	int Tokens = 0;
	CPlayer* pController = pAction->GetController();

	CCardFilter temp;
	temp.SetComparer(new AnyCreatureComparer);

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		&temp, // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Sacrifice, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
		if (pPlayer != pController)
		{
			PrevPermanents = pBattlefield->GetSize();
			pModifier1.ApplyTo(pPlayer);
			NewPermanents = pBattlefield->GetSize();
			if (NewPermanents < PrevPermanents)
				Tokens += PrevPermanents - NewPermanents;
		}
	}

	if (Tokens > 0)
	{
		CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Zombie G"), 2889, Tokens);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CMartyrsBondCard::CMartyrsBondCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Martyr's Bond"), CardType::GlobalEnchantment, nID, 
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMartyrsBondCard::OnCardSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMartyrsBondCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMartyrsBondCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CMartyrsBondCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	if (pCard == this) return true;
	if (!pCard->GetCardType().IsLand()) return true;
	return false;
}

bool CMartyrsBondCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pOriginalCard = pAction->GetTriggerContext().m_pCard;
	
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	int n = 0;
	while (GetGame()->GetPlayer(n) != pActivePlayer) ++n;

	Opponents.RemoveAll();
	if (GetGame()->GetPlayer(n) != pController)
		Opponents.Add(GetGame()->GetPlayer(n));
	n = (n + 1) % GetGame()->GetPlayerCount();

	while (GetGame()->GetPlayer(n) != pActivePlayer)
	{
		if (GetGame()->GetPlayer(n) != pController)
			Opponents.Add(GetGame()->GetPlayer(n));
		n = (n + 1) % GetGame()->GetPlayerCount();
	}

	Sacrifice(0, pOriginalCard);
	return true;
}

void CMartyrsBondCard::Sacrifice(int nOpponent, CCard* pOriginalCard)
{
	if (nOpponent < Opponents.GetSize())
	{
		CPlayer* pOpponent = Opponents.GetAt(nOpponent);
		CZone* pBattlefield = pOpponent->GetZoneById(ZoneId::Battlefield);

		bool bLegal = false;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			if ((pOriginalCard->GetCardType().IsArtifact() && pCard->GetCardType().IsArtifact()) ||
				(pOriginalCard->GetCardType().IsCreature() && pCard->GetCardType().IsCreature()) ||
				(pOriginalCard->GetCardType().IsEnchantment() && pCard->GetCardType().IsEnchantment()) ||
				(pOriginalCard->GetCardType().IsLand() && pCard->GetCardType().IsLand()) ||
				(pOriginalCard->GetCardType().IsPlaneswalker() && pCard->GetCardType().IsPlaneswalker()) ||
				(pOriginalCard->GetCardType().IsTribal() && pCard->GetCardType().IsTribal()))
			{
				bLegal = true;
				break;
			}
		}
		
		if (bLegal)
		{
			std::vector<SelectionEntry> entries;
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if ((pOriginalCard->GetCardType().IsArtifact() && pCard->GetCardType().IsArtifact()) ||
					(pOriginalCard->GetCardType().IsCreature() && pCard->GetCardType().IsCreature()) ||
					(pOriginalCard->GetCardType().IsEnchantment() && pCard->GetCardType().IsEnchantment()) ||
					(pOriginalCard->GetCardType().IsLand() && pCard->GetCardType().IsLand()) ||
					(pOriginalCard->GetCardType().IsPlaneswalker() && pCard->GetCardType().IsPlaneswalker()) ||
					(pOriginalCard->GetCardType().IsTribal() && pCard->GetCardType().IsTribal()))
				{
					SelectionEntry entry;

					entry.dwContext = (DWORD)pCard;
					entry.cpAssociatedCard = pCard;
									
					entry.strText.Format(_T("Sacrifice %s."),
						pCard->GetCardName(TRUE));

					entries.push_back(entry);
				}
			}
			m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pOpponent, (DWORD)nOpponent, (DWORD)pOriginalCard);
		}
		else
			Sacrifice(nOpponent + 1, pOriginalCard);
	}
}

void CMartyrsBondCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;
			int nOpponent = (int)dwContext1;
			CCard* pOriginalCard = (CCard*)dwContext2;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

			pModifier.ApplyTo(pCard);

			Sacrifice(nOpponent + 1, pOriginalCard);
				
			return;
		}
}

//____________________________________________________________________________
//
/*
CCrescendoOfWarCard::CCrescendoOfWarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crescendo of War"), CardType::GlobalEnchantment, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(STRIFE_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
		::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, STRIFE_COUNTER));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new AttackingCreatureComparer);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CTriggeredCounterPwrTghEnchantAbility> cpAbility(
		::CreateObject<CTriggeredCounterPwrTghEnchantAbility>(this, STRIFE_COUNTER));

		cpAbility->GetEnchantment()->GetEnchantmentCardFilter().AddComparer(new BlockingCreatureComparer);
		cpAbility->GetEnchantment()->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
*/
//____________________________________________________________________________
//
CArchangelOfStrifeCard::CArchangelOfStrifeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archangel of Strife"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CArchangelOfStrifeCard::OnSelectionDone))
	, m_nChoices(2)
{
}

void CArchangelOfStrifeCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

		int pActivePlayerID;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (pActivePlayer == GetGame()->GetPlayer(ip))
			{
				pActivePlayerID = ip;
				break;
			}

		SelectorFunction(pActivePlayerID);

	}

	if	(GetZoneId() == ZoneId::_PhasedOut && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		CCountedCardContainer pCreated;
		CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Archangel of Strife War Effect"), 61038, 1, FALSE, ZoneId::_Effects, &pCreated);
		CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Archangel of Strife Peace Effect"), 61039, 1, FALSE, ZoneId::_Effects, &pCreated);

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pCreated.RemoveAll();

			if (m_nChoices[ip] == 0)
				pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
			else
				pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

			for (int i = 0; i < pCreated.GetSize(); ++i)
				Effects.AddCard(pCreated.GetAt(i), CardPlacement::Top);
		}
	}
	
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, true, MoveType::Others, GetController());

		for (int i = 0; i < Effects.GetSize(); ++i)
			pModifier.ApplyTo(Effects.GetAt(i));

		Effects.RemoveAll();
	}
}

void CArchangelOfStrifeCard::SelectorFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Choose war"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Choose peace"));

		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
}

void CArchangelOfStrifeCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		SelectorFunction(NextPlayer);
	else
	{
		CCountedCardContainer pCreated;
		CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Archangel of Strife War Effect"), 61038, 1, FALSE, ZoneId::_Effects, &pCreated);
		CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Archangel of Strife Peace Effect"), 61039, 1, FALSE, ZoneId::_Effects, &pCreated);

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			pCreated.RemoveAll();

			if (m_nChoices[ip] == 0)
				pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
			else
				pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

			for (int i = 0; i < pCreated.GetSize(); ++i)
				Effects.AddCard(pCreated.GetAt(i), CardPlacement::Top);
		}
	}
}

void CArchangelOfStrifeCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;
			
			if (nSelectedIndex == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s chooses war"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				m_nChoices[dwContext1] = 0;

				Advance(dwContext1);

				return;
			}
			if (nSelectedIndex == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s chooses peace"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				m_nChoices[dwContext1] = 1;

				Advance(dwContext1);

				return;
			}
		}
}

//____________________________________________________________________________
//
CBasandraBattleSeraphCard::CBasandraBattleSeraphCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Basandra, Battle SEraph"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("3") RED_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::BasandraEffect));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				RED_MANA_TEXT,	// No mana cost
				Power(+0), Life(+0),
				CreatureKeyword::MustAttack, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());	
	}
}

//____________________________________________________________________________
//
