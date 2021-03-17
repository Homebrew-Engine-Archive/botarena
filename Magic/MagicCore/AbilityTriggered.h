#pragma once

/*
	Post-selection:
	===============

		Trigger
			|
			v
		TriggerToPlayer - - -> player
			|	Skip stack? N	|		^ At trigger
	--------v--------------------------------------------- STACK
			|Skip stack?		|		v At resolution
			v	Y				|
		ResolveImpl <- - - - - -+
			|
			v
		GetTriggeredPlayers				)
			|							)
			v							)
		GetSelections					) PlayerSelections
			|							)
			v							)
		add selections- - - - - -> game	)
									|
	-------------------------------------------------------
									|
		OnTriggeredSelectionDone <- +
			|				| (null action)
			v				v
		ResolveSelection	OnOptional


	=================================================================

	Pre-selection (targeted triggers):
	==================================

		Trigger
			|
			v
		GetTriggeredPlayers				)
			|							)
			v							)
		GetSelections					) PlayerSelections
			|							)
			v							)
		add selections- - - - - -> game	)
									|
	-------------------------------------------------------
									|
		OnTriggeredSelectionDone <- +
			|				| (null action)
			|				v
			|				OnOptional
			v
		TriggerToPlayer - - -> player
			|	Skip stack? N	|		^ At trigger
	--------v--------------------------------------------- STACK
			|Skip stack?		|		v At resolution
			v	Y				|
		ResolveImpl <- - - - - -+
			|
			v
		ResolveSelection
*/

//____________________________________________________________________________
//
template <class T = ContextValue>
class CTriggeredAbility : public CStackAbility			// Inherited from CStackAbility because the triggered effect will eventually go to the stack
{
protected:
	CTriggeredAbility(CCard* pCard, LPCTSTR strAbilityName = _T("triggered ability"))
		: CStackAbility(pCard, strAbilityName,
					AbilityType::Triggered)	// Used in stack to prevent other slower abilities to response to triggered ability actions
		, m_OptionalType(OptionalType::Optional)
		, m_TriggerToPlayerOption(TriggerToPlayerOption::TriggerToController)
		, m_TriggeredSelection(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTriggeredAbility::OnTriggeredSelectionDone))
		, m_bSkipStack(FALSE)
		, m_bSelectByControllerOnly(FALSE)
		, m_bSelectAtResolution(TRUE) // true -> post-selection; false -> pre-selection
		, m_nRevealCardCount(0)
		, m_nSacrificeCardCount(0)
		, m_nExileGraveyardCardCount(0)
		, m_nDiscardCardCount(0)
		, m_nLifeCost(Life(0))
		, m_nManaSourcesBeforeSelection(FALSE)
		, m_bSkipStackPayment(FALSE)
	{
	}

	virtual ~CTriggeredAbility() {}

public:
	typedef T TriggerContextType;
	typedef TTriggeredAction<TriggerContextType> TriggeredActionType;
	typedef FastDelegate< bool ( TriggeredActionType* ) > BeforeResolveSelectionCallback;

	SEALED_OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const { return FALSE; }

	void SetTriggerToPlayerOption(TriggerToPlayerOption option)		{ m_TriggerToPlayerOption = option; }

	CPlayerModifiers& GetTriggeredPlayerModifiers()					{ return m_TriggeredPlayerModifiers; }
	const CPlayerModifiers& GetTriggeredPlayerModifiers() const		{ return m_TriggeredPlayerModifiers; }

	CCardModifiers& GetTriggeredCardModifiers()						{ return m_TriggeredCardModifiers; }
	const CCardModifiers& GetTriggeredCardModifiers() const			{ return m_TriggeredCardModifiers; }

	struct OptionalType
	{
		enum Enum
		{
			Required,
			Optional,
			OptionalTrick,
			OptionalHide
		};

		DEFINE_DISTINCT_ENUM_OPS(OptionalType);
	};

	void SetOptionalType(OptionalType optionalType)					{ m_OptionalType = optionalType; } // default: Optional
	CSubjectModifier& GetOptionalModifier()								{ return m_OptionalModifier; }
	void SetOptionalContext(const ContextValue& optionalContext)	{ m_OptionalContext = optionalContext; }

	void SetSkipStack(BOOL bSkipStack) // default: FALSE (TRUE -> not a triggered ability anymore) 
	{ 
		m_bSkipStack = bSkipStack; 

		if (m_bSkipStack)
			SetAbilityName(_T("effect"));
		else
			SetAbilityName(_T("triggered ability"));
	} 

	void SetReplacementEffect(BOOL bSkipStack) // default: FALSE (TRUE -> not a triggered ability anymore) 
	{ 
		m_bSkipStack = bSkipStack; 
	} 

	void SetSkipStackPayment(BOOL bSkipStackPayment) 
	{ 
		m_bSkipStackPayment = bSkipStackPayment; 		
	} 

	void SetManaSourcesBeforeSelection(BOOL ManaSourcesBeforeSelection)
	{
		m_nManaSourcesBeforeSelection = ManaSourcesBeforeSelection;
	}

	void SetSelectByControllerOnly(BOOL bSelectByControllerOnly)	{ m_bSelectByControllerOnly = bSelectByControllerOnly; } // default: FALSE
	void SetSelectAtResolution(BOOL bSelectAtResolution)			{ m_bSelectAtResolution = bSelectAtResolution; } // default: TRUE

	void SetBeforeResolveSelectionCallback(BeforeResolveSelectionCallback beforeResolveSelectionCallback)
	{
		m_BeforeResolveSelectionCallback = beforeResolveSelectionCallback;
	}

	void SetResolutionCost(LPCTSTR strResolutionCost) // possible to support CCost
	{ 
		m_strResolutionCost = strResolutionCost; 
		SetOptionalType(OptionalType::Required);
	}

	void SetResolutionCost1(LPCTSTR strResolutionCost) // possible to support CCost
	{ 
		m_strResolutionCost1 = strResolutionCost; 		
	}

	void SetRevealResolutionCost(int nRevealCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pRevealCardFilter) // possible to support CCost
	{ 
		m_nRevealCardCount = nRevealCardCount;
		m_pRevealCardFilter = pRevealCardFilter;
	}

	void SetSacrificeResolutionCost(int nSacrificeCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pSacrificeCardFilter) // possible to support CCost
	{ 
		m_nSacrificeCardCount = nSacrificeCardCount;
		m_pSacrificeCardFilter = pSacrificeCardFilter;
	}

	void SetPayLifeResolutionCost(Life nPayLifeCost)									
	{ 
		m_nLifeCost = nPayLifeCost;
		
	}

	void SetExileGraveyardResolutionCost(int nExileGraveyardCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pExileGraveyardCardFilter) // possible to support CCost
	{ 
		m_nExileGraveyardCardCount = nExileGraveyardCardCount;
		m_pExileGraveyardCardFilter = pExileGraveyardCardFilter;
	}

	void SetDiscardResolutionCost(int nDiscardCardCount,			// SpecialNumber::Any for any, SpecialNumber::All for all
							const CCardFilter* pDiscardCardFilter) // possible to support CCost
	{ 
		m_nDiscardCardCount = nDiscardCardCount;
		m_pDiscardCardFilter = pDiscardCardFilter;
	}

	VIRTUAL(BOOL, ResolveSelection)(CPlayer* pPlayer, CTriggeredAction* pAction) 
	{
		if (!m_BeforeResolveSelectionCallback.empty())
		{
			TriggeredActionType* pAction1 = (TriggeredActionType*)pAction;
			if (!m_BeforeResolveSelectionCallback(pAction1))
				return FALSE;
		}		

		if (!__super::ResolveImpl(pAction))
			return FALSE;

		m_TriggeredPlayerModifiers.ApplyTo(pPlayer);
		m_TriggeredCardModifiers.ApplyTo(GetCard());
		return TRUE; 
	}

protected:
	VIRTUAL(BOOL, IsTriggerable)() const
	{
		if (m_pGame && m_pGame->IsThinking() &&
			!m_pGame->IsCardVisible(m_pCard))
			return FALSE;

		return TRUE;
	}

	VIRTUAL(counted_ptr<TriggeredActionType>, CreateTriggeredAction)(const TriggerContextType& triggerContext, const TriggerInfo& info) const
	{
		counted_ptr<TriggeredActionType> cpAction(::CreateObject<TriggeredActionType>(m_pGame));
		cpAction->SetAbility(const_cast<CTriggeredAbility*>(this));
		cpAction->SetTriggerContext(triggerContext);
		cpAction->SetTriggerInfo(info);
		return cpAction;
	}

	VIRTUAL(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
								 const TriggerContextType& triggerContext,
								 const TriggerInfo& info,
								 BOOL bSetNames) const
	{
		counted_ptr<TriggeredActionType> cpAction(CreateTriggeredAction(triggerContext, info));

		if (bSetNames)
			if (m_bSelectAtResolution)
				cpAction->SetActionName(_T("resolves ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName());
			else
				cpAction->SetActionName(_T("put ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName() + _T(" on the stack"));

		actions.Add(cpAction.GetPointer());

	}

	VIRTUAL(void, OnOptional)(CPlayer* pTriggeredPlayer, const ContextValue& optionalContext)
	{
		m_OptionalModifier.CPlayerModifiers::ApplyTo(pTriggeredPlayer);
		m_OptionalModifier.CCardModifiers::ApplyTo(m_pCard);
		if (m_pCard->GetCardType().IsCreature())
			m_OptionalModifier.CCreatureModifiers::ApplyTo((CCreatureCard*)m_pCard);
	}

	VIRTUAL(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(); }

	void Trigger(const TriggerContextType& triggerContext,
				 const TriggerInfo& info = TriggerInfo()) const
	{
		if (m_bSelectAtResolution)
		{
			BOOL bIsThinking = m_pGame->IsThinking();
			BOOL bSetNames = 
#ifndef _MY_DEBUG
				!bIsThinking;
#else
				TRUE;
#endif
			counted_ptr<TriggeredActionType> cpAction(CreateTriggeredAction(triggerContext, info));

			if (bSetNames)
				cpAction->SetActionName(_T("put ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName() + _T(" on the stack"));

			TriggerToPlayer(GetController(), cpAction.GetPointer());			
		}
		else
		{
			PlayerSelections(GetController(), triggerContext, info);
		}
	}

	void TriggerToPlayer(CPlayer* pPlayer, TriggeredActionType* pAction) const
	{
		pAction->SetTriggeredPlayer(pPlayer);

		if (m_bSkipStack)
		{
			const_cast<CTriggeredAbility*>(this)->ResolveImpl(pAction);
			return;
		}		

		pAction->SetCanBeDenied(TRUE);
		pAction->GetDenialCost().AddManaCost(m_DenialCost.GetManaCost());
		
		pPlayer->GetTriggeredActionContainer()->Add(pAction);
	}

	void GetTriggeredPlayers(const TriggerInfo& info, CPlayerContainer& players) const
	{
		if (!IsTriggerable())
			return;

		CPlayer* pController = GetController();

		switch (m_TriggerToPlayerOption.Get())
		{
		case TriggerToPlayerOption::TriggerToAllPlayers:
			players.Add(m_pGame->GetPlayerContainer());
			break;

		case TriggerToPlayerOption::TriggerToController:
			players.Add(pController);
			break;

		case TriggerToPlayerOption::TriggerToOpponents:
			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CPlayer* pPlayer = m_pGame->GetPlayer(i);
				if (pPlayer != pController)
					players.Add(pPlayer);
			}
			break;

		case TriggerToPlayerOption::TriggerToParameter1:
			if (!info.GetPlayer1())
				return;
			players.Add(info.GetPlayer1());
			break;

		case TriggerToPlayerOption::TriggerToParameter2:
			if (!info.GetPlayer2())
				return;
			players.Add(info.GetPlayer2());
			break;

		case TriggerToPlayerOption::TriggerToParameter3:
			if (!info.GetPlayer3())
				return;
			players.Add(info.GetPlayer3());
			break;

		case TriggerToPlayerOption::TriggerToParameter4:
			if (!info.GetPlayer4())
				return;
			players.Add(info.GetPlayer4());
			break;
		}
	}

	SEALED_OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction)
	{
		//if (!__super::ResolveImpl(pAction))
		//	return FALSE;

		const TriggeredActionType* pTriggeredAction((const TriggeredActionType*)pAction);

		if (m_bSelectAtResolution)
		{
			counted_ptr<TriggeredActionType> cpAction((TriggeredActionType*)(pAction->Clone().GetPointer()));
			
			(cpAction.GetPointer())->SetTriggeredPlayer(pTriggeredAction->GetController());

			if (m_nManaSourcesBeforeSelection)
			{
			//m_pGame->SetTriggeredResolutionPlayer(pTriggeredAction->GetController());

			ProcessCost(pTriggeredAction->GetController(), cpAction.GetPointer());
			}	

			if (m_bSkipStackPayment)
			{
				if (ProcessCumulativeCost(pTriggeredAction->GetTriggeredPlayer(), cpAction.GetPointer()))
					return TRUE;			
			}

			
			PlayerSelections(pTriggeredAction->GetController(),
				pTriggeredAction->GetTriggerContext(),
				pTriggeredAction->GetTriggerInfo());
		}
		else
		{
			ATLASSERT(pTriggeredAction->GetTriggeredPlayer());

			counted_ptr<TriggeredActionType> cpAction((TriggeredActionType*)(pAction->Clone().GetPointer()));

			if (ProcessResolutionCost(pTriggeredAction->GetTriggeredPlayer(), cpAction.GetPointer()))
				return TRUE;

			if (ProcessDenialCost(pTriggeredAction->GetTriggeredPlayer(), cpAction.GetPointer()))
				return TRUE;

			return ResolveSelection(pTriggeredAction->GetTriggeredPlayer(), cpAction.GetPointer());
		}

		return TRUE;
	}

	bool ProcessCost(CPlayer* pPlayer, CTriggeredAction* pAction)
	{
		
		counted_ptr<CNonStackAbility> cpTemporaryAbility(
			::CreateObject<CNonStackAbility>(GetCard(), _T("triggered ability"), 
			AbilityType::_ConsumeMana | AbilityType::Triggered |  AbilityType::_FastestSpeed));
		cpTemporaryAbility->SetAbilityText(_T("pays triggered ability cost of"));
		cpTemporaryAbility->GetCost().SetManaCost(_T("99999"));				
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetPlayableFrom(ZoneId::_AllZones);
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		CString strActionName;
		strActionName.Format(_T("passes on using the triggered ability of %s"), GetCard()->GetCardName());

		counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
			::CreateObject<CCreateTempTriggeredAbilityAbility>(
				cpTemporaryAbility->GetCard(),
				strActionName,
				cpTemporaryAbility.GetPointer(),
				pPlayer));
		cpRemoveAbility->SetPlayableFrom(ZoneId::_AllZones);
		cpRemoveAbility->SetAbilityType(AbilityType::_ConsumeMana | AbilityType::Triggered | AbilityType::_FastestSpeed);

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
			cpRemoveAbility.GetPointer(),
			pAction));

		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

		cpTemporaryAbility->GetCard()->AddAbility(cpTemporaryAbility.GetPointer());
		cpTemporaryAbility->GetCard()->AddAbility(cpRemoveAbility.GetPointer());

		m_pGame->SetTriggeredResolutionPlayer(pPlayer);

		return true;
	}

	bool ProcessResolutionCost(CPlayer* pPlayer, CTriggeredAction* pAction)
	{
		if (m_strResolutionCost.IsEmpty() && m_nRevealCardCount==0 && m_nSacrificeCardCount==0 && m_nExileGraveyardCardCount==0 && m_nDiscardCardCount==0 && m_nLifeCost == Life(0))
			return false;

		counted_ptr<CNonStackAbility> cpTemporaryAbility(
			::CreateObject<CNonStackAbility>(GetCard(), _T("triggered ability"), 
				AbilityType::Triggered | AbilityType::_ConsumeMana));
		cpTemporaryAbility->SetAbilityText(_T("pays triggered ability cost of"));
		cpTemporaryAbility->GetCost().SetManaCost(m_strResolutionCost);
		cpTemporaryAbility->GetCost().AddRevealCardCost(m_nRevealCardCount, m_pRevealCardFilter);
		cpTemporaryAbility->GetCost().AddSacrificeCardCost(m_nSacrificeCardCount, m_pSacrificeCardFilter);			
		cpTemporaryAbility->GetCost().AddExileGraveyardCardCost(m_nExileGraveyardCardCount, m_pExileGraveyardCardFilter);			
		cpTemporaryAbility->GetCost().AddDiscardCardCost(m_nDiscardCardCount, m_pDiscardCardFilter);			
		cpTemporaryAbility->AddPayLifeDeltaCost(m_nLifeCost);
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetPlayableFrom(ZoneId::_AllZones);
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		CString strActionName;
		strActionName.Format(_T("passes on using the triggered ability of %s"), GetCard()->GetCardName());

		counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
			::CreateObject<CCreateTempTriggeredAbilityAbility>(
				cpTemporaryAbility->GetCard(),
				strActionName,
				cpTemporaryAbility.GetPointer(),
				pPlayer));
		cpRemoveAbility->SetPlayableFrom(ZoneId::_AllZones);


		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
			cpRemoveAbility.GetPointer(),
			pAction));

		if (!m_strResolutionCost1.IsEmpty())
		{
		counted_ptr<CNonStackAbility> cpTemporaryAbility1(
			::CreateObject<CNonStackAbility>(GetCard(), _T("triggered ability"), 
				AbilityType::Triggered | AbilityType::_ConsumeMana));
		cpTemporaryAbility1->SetAbilityText(_T("pays triggered ability cost of"));
		cpTemporaryAbility1->GetCost().SetManaCost(m_strResolutionCost1);
		cpTemporaryAbility1->DefineGameClassID();
		cpTemporaryAbility1->SetPlayableFrom(ZoneId::_AllZones);
		cpTemporaryAbility1->SetMaxTurnUsageCount(1);

		counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility1(
			::CreateObject<CCreateTempTriggeredAbilityAbility>(
				cpTemporaryAbility->GetCard(),
				strActionName,
				cpTemporaryAbility1.GetPointer(),
				pPlayer));
		cpRemoveAbility1->SetPlayableFrom(ZoneId::_AllZones);


		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait2(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility1.GetPointer(), 
			cpRemoveAbility1.GetPointer()));

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait1(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility1.GetPointer(), 
			cpRemoveAbility1.GetPointer()));
		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait1.GetPointer());
		cpTemporaryAbility1->CTraitContainer::Add(cpCreateTemporaryAbilityTrait1.GetPointer());
		cpTemporaryAbility1->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());
		cpTemporaryAbility1->GetCard()->AddAbility(cpTemporaryAbility1.GetPointer());
		cpRemoveAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait2.GetPointer());
		}


		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());
		
		cpTemporaryAbility->GetCard()->AddAbility(cpTemporaryAbility.GetPointer());
		
		cpTemporaryAbility->GetCard()->AddAbility(cpRemoveAbility.GetPointer());

		m_pGame->SetTriggeredResolutionPlayer(pPlayer);

		return true;
	}

	bool ProcessCumulativeCost(CPlayer* pPlayer, CTriggeredAction* pAction)
	{
		if (m_strResolutionCost.IsEmpty() && m_nRevealCardCount==0 && m_nSacrificeCardCount==0 && m_nExileGraveyardCardCount==0 && m_nDiscardCardCount==0 && m_nLifeCost == Life(0))
			return false;

		counted_ptr<CNonStackAbility> cpTemporaryAbility(
			::CreateObject<CNonStackAbility>(GetCard(), _T("triggered ability"), 
				AbilityType::Triggered | AbilityType::_ConsumeMana));
		cpTemporaryAbility->SetAbilityText(_T("pays triggered ability cost of"));
		cpTemporaryAbility->GetCost().SetManaCost(m_strResolutionCost);
		cpTemporaryAbility->GetCost().AddRevealCardCost(m_nRevealCardCount, m_pRevealCardFilter);
		cpTemporaryAbility->GetCost().AddSacrificeCardCost(m_nSacrificeCardCount, m_pSacrificeCardFilter);			
		cpTemporaryAbility->GetCost().AddExileGraveyardCardCost(m_nExileGraveyardCardCount, m_pExileGraveyardCardFilter);			
		cpTemporaryAbility->GetCost().AddDiscardCardCost(m_nDiscardCardCount, m_pDiscardCardFilter);			
		cpTemporaryAbility->AddPayLifeDeltaCost(m_nLifeCost);
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetPlayableFrom(ZoneId::_AllZones);
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		CString strActionName;
		strActionName.Format(_T("passes on using the triggered ability of %s"), GetCard()->GetCardName());

		counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
			::CreateObject<CCreateTempTriggeredAbilityAbility>(
				cpTemporaryAbility->GetCard(),
				strActionName,
				cpTemporaryAbility.GetPointer(),
				pPlayer));
		cpRemoveAbility->SetPlayableFrom(ZoneId::_AllZones);

		cpRemoveAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pPlayer));

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpRemoveAbility.GetPointer(), 
			cpTemporaryAbility.GetPointer(),
			pAction));

		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

		cpTemporaryAbility->GetCard()->AddAbility(cpTemporaryAbility.GetPointer());
		cpTemporaryAbility->GetCard()->AddAbility(cpRemoveAbility.GetPointer());

		m_pGame->SetTriggeredResolutionPlayer(pPlayer);

		return true;
	}


	bool ProcessDenialCost(CPlayer* pPlayer, CTriggeredAction* pAction)
	{
		// Should be granted to source card (should be changed when abilities activated by opponent is added)
		// Cost configurations should be added (but I don't know how)
		
		return false;
		/*

		if (m_DenialCost.GetManaCost().GetTotal() == 0)
			return false;

		CCard* oppCard = pPlayer->GetZoneById(ZoneId::Battlefield)->GetTopCard();

		if (!oppCard) oppCard = pPlayer->GetZoneById(ZoneId::Graveyard)->GetTopCard();
		if (!oppCard) oppCard = pPlayer->GetZoneById(ZoneId::Exile)->GetTopCard();
		if (!oppCard) oppCard = pPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

		counted_ptr<CNonStackAbility> cpTemporaryAbility(
			::CreateObject<CNonStackAbility>(oppCard, _T("triggered ability"), 
				AbilityType::Triggered | AbilityType::_ConsumeMana));
		cpTemporaryAbility->SetAbilityText(_T("pass triggered ability denial cost"));
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetPlayableFrom(ZoneId::_AllZones);
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		CString strActionName;
		strActionName.Format(_T("denial cost payment"));

		counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
			::CreateObject<CCreateTempTriggeredAbilityAbility>(
				oppCard,
				strActionName,
				cpTemporaryAbility.GetPointer(),
				m_pGame->GetNextPlayer(pPlayer)));

		cpRemoveAbility->SetAbilityText(_T("pays denial cost to"));
		cpRemoveAbility->DefineGameClassID();
		cpRemoveAbility->SetPlayableFrom(ZoneId::_AllZones);
		cpRemoveAbility->SetMaxTurnUsageCount(1);
		cpRemoveAbility->GetCost().SetManaCost(m_DenialCost.GetManaCost().ToString());

		//counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
		//	::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
		//	cpRemoveAbility.GetPointer(),
		//	pAction));

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
			cpRemoveAbility.GetPointer(),
			pAction));		

		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

		oppCard->AddAbility(cpTemporaryAbility.GetPointer());
		oppCard->AddAbility(cpRemoveAbility.GetPointer());

		m_pGame->SetTriggeredResolutionPlayer(pPlayer);

		return true;*/
	}

	void PlayerSelections(CPlayer* pController, 
						  const TriggerContextType& triggerContext,
						  const TriggerInfo& info) const
	{		
		BOOL bIsThinking = m_pGame->IsThinking();
		BOOL bSetNames = 
#ifndef _MY_DEBUG
			!bIsThinking;
#else
			TRUE;
#endif

		CPlayerContainer players;
		GetTriggeredPlayers(info, players);

		for (int i = 0; i < players.GetSize(); ++i)
		{
			CPlayer* pPlayer = players.GetAt(i);

			ATLASSERT(pPlayer);
			if (!pPlayer)
				continue;

			if (m_bSelectByControllerOnly)
			{
				// Ref: Pithing Needle

				if (pPlayer != pController)
					continue;
			}

			CActionContainer actions;
			GetSelections(actions, pPlayer, triggerContext, info, bSetNames);			

			int nTrickCount = 0;
			std::vector<SelectionEntry> entries;
				
			for (int j = 0; j < actions.GetSize(); ++j)
			{
				CTriggeredAction* pSelectionAction = (CTriggeredAction*)actions.GetAt(j).GetPointer();

				CPlayerContainer triggeredPlayers;

				if (m_bSelectByControllerOnly)
				{
					triggeredPlayers = players;
				}
				else
				{
					triggeredPlayers.Add(pPlayer);
				}

				pSelectionAction->SetTriggeredPlayers(triggeredPlayers);
				pSelectionAction->SetTriggeredPlayer(pPlayer);

				SelectionEntry entry;
				entry.cpAssociatedAction = pSelectionAction;

				if (pSelectionAction->IsTrick())
				{
					entry.bTrick = TRUE;
					++nTrickCount;
					entries.push_back(entry);
				}
				else
					entries.insert(entries.begin(), entry);	// Non-tricks must be in the front to make strategies work
			}

			if (m_OptionalType != OptionalType::Required)
			{
				if (m_OptionalType != OptionalType::OptionalHide ||
					!entries.size())
				{
					SelectionEntry entry;
					entry.strText.Format(_T("ignores triggered ability of %s"), CAbility::m_pCard->GetCardName()) ;

					if (m_OptionalType == OptionalType::OptionalTrick)
					{
						++nTrickCount;
						entry.bTrick = TRUE;

						entries.push_back(entry);
					}
					else
						entries.insert(entries.begin(), entry);	// Non-tricks must be in the front to make strategies work
				}
			}

			if (nTrickCount == entries.size())
			{
				// Cannot be all tricks

				for (size_t j = 0; j < entries.size(); ++j)
				{
					entries[j].bTrick = FALSE;
					if (entries[j].cpAssociatedAction.GetPointer())
						entries[j].cpAssociatedAction->SetTrick(FALSE);
				}
			}
			else
			if (bIsThinking || pPlayer->IsComputer())
			{
				// Remove tricks

				for (std::vector<SelectionEntry>::iterator j = entries.begin(); j != entries.end();)
					if (j->bTrick)
						j = entries.erase(j);
					else
						++j;

				ATLASSERT(entries.size());
			}			

			if (entries.size() >= 1)
			{
				m_TriggeredSelection.AddSelectionRequest(entries, 1, 1, GetCard(), pPlayer);
			}
		}
	}

	template <class A> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T("")));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	// Helper to reuse resolution code in ordinary abilities in triggered resolutions
	template <class A, typename P1> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3, typename P4> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3, P4 p4) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3, p4));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3, typename P4, typename P5> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3, p4, p5));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3, p4, p5, p6));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3, p4, p5, p6, p7));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3, p4, p5, p6, p7, p8));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	template <class A, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9> // A must be an ability, not a spell
	counted_ptr<A> CreateResolutionAbility(CPlayer* pPlayer, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
	{
		counted_ptr<A> cpAbility(::CreateObject<A>(GetCard(), 
			_T(""), // should be the mana cost
			p1, p2, p3, p4, p5, p6, p7, p8, p9));
		cpAbility->SetAbilityType(AbilityType::Triggered);
		cpAbility->SkipPlayableCheck();
		cpAbility->SetController(pPlayer);
		return cpAbility;
	}

	BOOL m_bSelectAtResolution;
	BeforeResolveSelectionCallback m_BeforeResolveSelectionCallback;

private:
	SEALED_OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const
	{
		VERIFY(FALSE);
		return NULL;
	}

	void OnTriggeredSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
	{
		ATLASSERT(nSelectedCount == 1);

		for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
			if (it->bSelected)
			{
				TriggeredActionType* pAction = reinterpret_cast<TriggeredActionType*>(it->cpAssociatedAction.GetPointer());
				if (pAction)
				{
					const CPlayerContainer& triggeredPlayers(pAction->GetTriggeredPlayers());

					ATLASSERT(m_bSelectByControllerOnly || triggeredPlayers.GetSize() == 1);

					BOOL bIsThinking = m_pGame->IsThinking();
					BOOL bSetNames = 
#ifndef _MY_DEBUG
						!bIsThinking;
#else
						TRUE;
#endif

					for (int i = 0; i < triggeredPlayers.GetSize(); ++i)
					{
						if (m_bSelectAtResolution)
						{
							counted_ptr<TriggeredActionType> cpAction((TriggeredActionType*)(pAction->Clone().GetPointer()));

							if (!ProcessResolutionCost(triggeredPlayers.GetAt(i), cpAction.GetPointer()) && !ProcessDenialCost(triggeredPlayers.GetAt(i), cpAction.GetPointer()) )
								ResolveSelection(triggeredPlayers.GetAt(i), cpAction.GetPointer());
						}
						else
						{
							counted_ptr<TriggeredActionType> cpAction((TriggeredActionType*)pAction->Clone().GetPointer());
							cpAction->SetSelectionIndex(-2); // must set to let the action resolve
							if (bSetNames)
								cpAction->SetActionName(_T("put ") + GetAbilityName() + _T(" of ") + GetCard()->GetCardName() + _T(" on the stack"));
							TriggerToPlayer(triggeredPlayers.GetAt(i), cpAction.GetPointer());
						}
					}
				}
				else
					OnOptional(pSelectionPlayer, m_OptionalContext);
				break;
			}
	}

	TriggerToPlayerOption	m_TriggerToPlayerOption;

	OptionalType	m_OptionalType;
	ContextValue	m_OptionalContext;
	CSubjectModifier		m_OptionalModifier;
	BOOL			m_bSkipStack;
	BOOL            m_bSkipStackPayment;
	BOOL            m_nManaSourcesBeforeSelection;

	CPlayerModifiers	m_TriggeredPlayerModifiers;
	CCardModifiers	m_TriggeredCardModifiers;

	mutable CSelectionSupport	m_TriggeredSelection;

	BOOL m_bSelectByControllerOnly;

	CString m_strResolutionCost;
	CString m_strResolutionCost1;
	int					m_nRevealCardCount;
	const CCardFilter*	m_pRevealCardFilter;
	int					m_nSacrificeCardCount;
	const CCardFilter*	m_pSacrificeCardFilter;
	int					m_nExileGraveyardCardCount;
	const CCardFilter*	m_pExileGraveyardCardFilter;
	int					m_nDiscardCardCount;
	const CCardFilter*	m_pDiscardCardFilter;
	Life                m_nLifeCost;
};



