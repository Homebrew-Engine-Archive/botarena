#pragma once

//____________________________________________________________________________
//
class TriggerInfo
{
public:
	TriggerInfo(CPlayer* pPlayer1 = NULL, 
				CPlayer* pPlayer2 = NULL,
				CPlayer* pPlayer3 = NULL, 
				CPlayer* pPlayer4 = NULL,
				CPlayer* pPlayer5 = NULL)
		: m_pPlayer1(pPlayer1)
		, m_pPlayer2(pPlayer2)
		, m_pPlayer3(pPlayer3)
		, m_pPlayer4(pPlayer4)
		, m_pPlayer5(pPlayer5)
	{}

	CPlayer* GetPlayer1() const	{ return m_pPlayer1; }
	CPlayer* GetPlayer2() const	{ return m_pPlayer2; }
	CPlayer* GetPlayer3() const	{ return m_pPlayer3; }
	CPlayer* GetPlayer4() const	{ return m_pPlayer4; }
	CPlayer* GetPlayer5() const	{ return m_pPlayer5; }

	bool operator==(const TriggerInfo& info) const 
	{
		return m_pPlayer1 == info.m_pPlayer1 &&
			m_pPlayer2 == info.m_pPlayer2 &&
			m_pPlayer3 == info.m_pPlayer3 &&
			m_pPlayer4 == info.m_pPlayer4 &&
			m_pPlayer5 == info.m_pPlayer5;
	}

	bool operator!=(const TriggerInfo& info) const
	{
		return !operator==(info);
	}

private:
	CPlayer*	m_pPlayer1;
	CPlayer*	m_pPlayer2;
	CPlayer*	m_pPlayer3;
	CPlayer*	m_pPlayer4;
	CPlayer*	m_pPlayer5;
};

/*
//____________________________________________________________________________
//
class CTriggeredStackAction : public CStackAbilityAction
{
	DECLARE_COUNTED_CSTOR(CTriggeredStackAction);
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTriggeredStackAction>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetTriggeredPlayer(CPlayer* pTriggeredPlayer) { m_pTriggeredPlayer = pTriggeredPlayer; }
	CPlayer* GetTriggeredPlayer() const	{ return m_pTriggeredPlayer; }

	void SetTriggerInfo(const TriggerInfo& triggerInfo) { m_TriggerInfo = triggerInfo; }
	const TriggerInfo& GetTriggerInfo() const { return m_TriggerInfo; }
	
protected:
	OVERRIDE(BOOL, PerformActionImpl)() const;

	TriggerInfo m_TriggerInfo;

	CPlayer* m_pTriggeredPlayer;
	//bool m_bAddToStack;
};

//____________________________________________________________________________
//
template <class C>
class TTriggeredStackAction : public CTriggeredStackAction
{
	DEFINE_COUNTED_CSTOR(TTriggeredStackAction);
public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredStackAction* pThisAction = dynamic_cast<const TTriggeredStackAction*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_TriggerContext = ((const TTriggeredStackAction*)pAction)->m_TriggerContext;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!__super::Equals(pAction))
			return FALSE;

		const TTriggeredStackAction* pTriggeredStackAction = dynamic_cast<const TTriggeredStackAction*>(pAction);
		if (!pTriggeredStackAction)
			return FALSE;

		if (pTriggeredStackAction == this)
			return TRUE;

		return m_TriggerContext == pTriggeredStackAction->m_TriggerContext;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredStackAction>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }
	
	const C& GetTriggerContext() const { return m_TriggerContext; }
	void SetTriggerContext(const C& c) { m_TriggerContext = c; }

protected:
	C m_TriggerContext;
};

//____________________________________________________________________________
//
class CTriggeredSelection : public CStackAbilityAction
{
	DECLARE_COUNTED_CSTOR(CTriggeredSelection);
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTriggeredStackAction>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetTriggeredPlayers(const CPlayerContainer& triggeredPlayers) { m_TriggeredPlayers = triggeredPlayers; }
	const CPlayerContainer& GetTriggeredPlayers() const	{ return m_TriggeredPlayers; }
	
	void SetTriggerInfo(const TriggerInfo& triggerInfo) { m_TriggerInfo = triggerInfo; }
	const TriggerInfo& GetTriggerInfo() const { return m_TriggerInfo; }

protected:
	OVERRIDE(BOOL, PerformActionImpl)() const;

	CPlayerContainer m_TriggeredPlayers;

	TriggerInfo m_TriggerInfo;
};

//____________________________________________________________________________
//
template <class C>
class TTriggeredSelection : public CTriggeredSelection
{
	DEFINE_COUNTED_CSTOR(TTriggeredSelection);
public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredSelection* pThisAction = dynamic_cast<const TTriggeredSelection*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_TriggerContext = ((const TTriggeredSelection*)pAction)->m_TriggerContext;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!__super::Equals(pAction))
			return FALSE;

		const TTriggeredSelection* pTriggeredStackAction = dynamic_cast<const TTriggeredSelection*>(pAction);
		if (!pTriggeredStackAction)
			return FALSE;

		if (pTriggeredStackAction == this)
			return TRUE;

		return m_TriggerContext == pTriggeredStackAction->m_TriggerContext;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredSelection>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	const C& GetTriggerContext() const { return m_TriggerContext; }
	void SetTriggerContext(const C& c) { m_TriggerContext = c; }

protected:
	C m_TriggerContext;
};

//____________________________________________________________________________
//
template <class C, class A>
class TTriggeredTargetSelection : 
	public TTriggeredSelection<C>, 
	public CTargetActionCommon
{
	DEFINE_CREATE_TO_CPTR_ONLY0; 

	TTriggeredTargetSelection()
	{
		SetTargeting();
	}

public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredTargetSelection* pThisAction = dynamic_cast<const TTriggeredTargetSelection*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_TargetGroup = ((const TTriggeredTargetSelection*)pAction)->m_TargetGroup;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!TTriggeredSelection::Equals(pAction))
			return FALSE;

		const TTriggeredTargetSelection* pTriggeredAction = dynamic_cast<const TTriggeredTargetSelection*>(pAction);
		if (!pTriggeredAction)
			return FALSE;

		if (pTriggeredAction == this)
			return TRUE;

		return m_TargetGroup == pTriggeredAction->m_TargetGroup;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredTargetSelection>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	OVERRIDE(BOOL, CanDeflectTargetToCard)(const CCard* pCard) const
	{
		return (dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().CanDeflectTargetToCard(this, pCard);
	}

	OVERRIDE(BOOL, CanDeflectTargetToSpell)(const CCard* pSource) const
	{
		return FALSE;
	}

	OVERRIDE(BOOL, CanDeflectTargetToPlayer)(const CPlayer* pPlayer) const
	{
		return (dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().CanDeflectTargetToPlayer(this, pPlayer);
	}

	OVERRIDE(void, DeflectTargetToCard)(CCard* pCard)
	{
		(dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().DeflectTargetToCard(this, pCard);
	}

	OVERRIDE(void, DeflectTargetToSpell)(CCard* pSource)
	{
		ATLASSERT(false);
	}

	OVERRIDE(void, DeflectTargetToPlayer)(CPlayer* pPlayer)
	{
		(dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().DeflectTargetToPlayer(this, pPlayer);
	}
};

//____________________________________________________________________________
//
template <class C>
class TTriggeredSubjectSelection : 
	public TTriggeredSelection<C>
{
	DEFINE_COUNTED_CSTOR(TTriggeredSubjectSelection);

public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredSubjectSelection* pThisAction = dynamic_cast<const TTriggeredSubjectSelection*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_SubjectGroup = ((const TTriggeredSubjectSelection*)pAction)->m_SubjectGroup;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!TTriggeredSelection::Equals(pAction))
			return FALSE;

		const TTriggeredSubjectSelection* pTriggeredAction = dynamic_cast<const TTriggeredSubjectSelection*>(pAction);
		if (!pTriggeredAction)
			return FALSE;

		if (pTriggeredAction == this)
			return TRUE;

		return m_SubjectGroup == pTriggeredAction->m_SubjectGroup;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredSubjectSelection>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	const CSubjectGroup& GetSubjectGroup() const { return m_SubjectGroup; }
	CSubjectGroup& GetSubjectGroup() { return m_SubjectGroup; }

protected:
	CSubjectGroup	m_SubjectGroup;
};
*/

/* deprecated: use CCreateTempTriggeredAbilityAbility
//____________________________________________________________________________
//
// See comment in CCreateTempTriggeredAbilityTrait
class CCreateTemporaryAbilityAction : public TTriggeredStackAction<ContextValue>
{
protected:
	DEFINE_CREATE_TO_CPTR_ONLY0; 

	CCreateTemporaryAbilityAction()
		: m_nTemporaryAbilityCLSID(0)
	{
		m_bAddToStack = false;
	}

public:
	typedef FastDelegate< counted_ptr<CAbility> () > CreateAbilityCallback;
	typedef FastDelegate< CCard* () > CreateAbilityCallback2;
	typedef FastDelegate< void (CCard*, CPlayer*) > ActionCallback;

	OVERRIDE(void, Copy)(const CAction* pAction)
	{
		const CCreateTemporaryAbilityAction* pThisAction = dynamic_cast<const CCreateTemporaryAbilityAction*>(pAction);
		if (!pThisAction)
			return;

		__super::Copy(pAction);

		m_cpTemporaryAbility = pThisAction->m_cpTemporaryAbility;
		m_nTemporaryAbilityCLSID = pThisAction->m_nTemporaryAbilityCLSID;
		m_strManaCost = pThisAction->m_strManaCost;
		m_ActionCallback = pThisAction->m_ActionCallback;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!__super::Equals(pAction))
			return FALSE;

		const CCreateTemporaryAbilityAction* pCreateTemporaryAbilityAction =
			dynamic_cast<const CCreateTemporaryAbilityAction*>(pAction);

		if (!pCreateTemporaryAbilityAction)
			return FALSE;

		if (pCreateTemporaryAbilityAction == this)
			return TRUE;	

		return m_nTemporaryAbilityCLSID == pCreateTemporaryAbilityAction->m_nTemporaryAbilityCLSID &&
			m_strManaCost == pCreateTemporaryAbilityAction->m_strManaCost &&
			m_ActionCallback == pCreateTemporaryAbilityAction->m_ActionCallback;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CCreateTemporaryAbilityAction>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)		{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const	{ return Equals(&action); }

	void CreateTemporaryAbility(CreateAbilityCallback callback, CPlayer* pPlayer, ActionCallback actionCallback = ActionCallback())
	{
		m_ActionCallback = actionCallback;

		counted_ptr<CAbility> cpTemporaryAbility(callback());
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetAbilityType((cpTemporaryAbility->GetAbilityType() & AbilityType::_ManaAbilityMask) | AbilityType::Triggered);
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(
				cpTemporaryAbility.GetPointer(), pPlayer->GetTriggeredActionContainer()));

		cpCreateTemporaryAbilityTrait->SetTriggeredAction(this);

		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

		cpTemporaryAbility->GetCard()->CAbilityContainer::Add(cpTemporaryAbility.GetPointer());

		SetTemporaryAbility(cpTemporaryAbility.GetPointer());

		SetTriggeredPlayer(pPlayer);
	}

	void CreateTemporaryAbility(CCard* pOnCard, CPlayer* pPlayer, ActionCallback actionCallback = ActionCallback())
	{
		m_ActionCallback = actionCallback;

		counted_ptr<CSpell> cpTemporaryAbility(::CreateObject<CSpell>(pOnCard, AbilityType::Triggered, m_strManaCost, FALSE));
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetToActivatedAbility();
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
			pPlayer->GetTriggeredActionContainer()));

		cpCreateTemporaryAbilityTrait->SetTriggeredAction(this);

		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

		cpTemporaryAbility->GetCard()->CAbilityContainer::Add(cpTemporaryAbility.GetPointer());

		SetTemporaryAbility(cpTemporaryAbility.GetPointer());

		SetTriggeredPlayer(pPlayer);
	}

	void CreateTemporaryAbility(CreateAbilityCallback2 callback, CPlayer* pPlayer, ActionCallback actionCallback = ActionCallback())
	{
		m_ActionCallback = actionCallback;

		counted_ptr<CSpell> cpTemporaryAbility(::CreateObject<CSpell>(callback(), AbilityType::Triggered, m_strManaCost, FALSE));
		cpTemporaryAbility->DefineGameClassID();
		cpTemporaryAbility->SetToActivatedAbility();
		cpTemporaryAbility->SetMaxTurnUsageCount(1);

		counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
			::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
			pPlayer->GetTriggeredActionContainer()));

		cpCreateTemporaryAbilityTrait->SetTriggeredAction(this);

		cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

		cpTemporaryAbility->GetCard()->CAbilityContainer::Add(cpTemporaryAbility.GetPointer());

		SetTemporaryAbility(cpTemporaryAbility.GetPointer());

		SetTriggeredPlayer(pPlayer);
	}

	OVERRIDE(void, ReleaseResources)()										
	{ 
		m_cpTemporaryAbility.Detach(); 
		__super::ReleaseResources();
	}

	void SetManaCost(LPCTSTR strManaCost) { m_strManaCost = strManaCost; }

protected:
	void SetTemporaryAbility(CAbility* pAbility)
	{
		m_cpTemporaryAbility = counted_ptr<CAbility>(pAbility);
		m_nTemporaryAbilityCLSID = m_cpTemporaryAbility->GetGameClassID();

		SetAbility(pAbility);
	}

	OVERRIDE(BOOL, PerformActionImpl)() const
	{
		// When this action is performed, the dynamic ability will be removed

		ATLASSERT(!m_bAddToStack);

		if (!__super::PerformActionImpl())
			return FALSE;

		ATLASSERT(m_cpTemporaryAbility);
		if (!m_cpTemporaryAbility)
			return FALSE;

		CCard* pCard = m_cpTemporaryAbility->GetCard();

		if (!m_ActionCallback.empty())
			m_ActionCallback(pCard, GetTriggeredPlayer());

		int nIndex = pCard->CAbilityContainer::FindIndex(m_cpTemporaryAbility.GetPointer());
		ATLASSERT(nIndex != -1);
		if (nIndex != -1)
			pCard->CAbilityContainer::RemoveAt(nIndex);

		return TRUE;
	}

	CString					m_strManaCost;
	counted_ptr<CAbility>	m_cpTemporaryAbility;
	USHORT					m_nTemporaryAbilityCLSID;
	ActionCallback			m_ActionCallback;
};
*/

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredAction : public CStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	/*
	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTriggeredAction>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}
	*/

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetTriggeredPlayer(CPlayer* pTriggeredPlayer) { m_pTriggeredPlayer = pTriggeredPlayer; }
	CPlayer* GetTriggeredPlayer() const	{ return m_pTriggeredPlayer; }

	void SetTriggeredPlayers(const CPlayerContainer& triggeredPlayers) { m_TriggeredPlayers = triggeredPlayers; }
	const CPlayerContainer& GetTriggeredPlayers() const	{ return m_TriggeredPlayers; }

	void SetTriggerInfo(const TriggerInfo& triggerInfo) { m_TriggerInfo = triggerInfo; }
	const TriggerInfo& GetTriggerInfo() const { return m_TriggerInfo; }

	virtual void ResolveSelection() = 0;
	
protected:
	CTriggeredAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;

	TriggerInfo m_TriggerInfo;

	CPlayer* m_pTriggeredPlayer;
	CPlayerContainer m_TriggeredPlayers;
};

//____________________________________________________________________________
//
template <class C>
class TTriggeredAction : public CTriggeredAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredAction* pThisAction = dynamic_cast<const TTriggeredAction*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_TriggerContext = ((const TTriggeredAction*)pAction)->m_TriggerContext;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!__super::Equals(pAction))
			return FALSE;

		const TTriggeredAction* pTriggeredAction = dynamic_cast<const TTriggeredAction*>(pAction);
		if (!pTriggeredAction)
			return FALSE;

		if (pTriggeredAction == this)
			return TRUE;

		return m_TriggerContext == pTriggeredAction->m_TriggerContext;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }
	
	const C& GetTriggerContext() const { return m_TriggerContext; }
	void SetTriggerContext(const C& c) { m_TriggerContext = c; }

	virtual void ResolveSelection()
	{
		((CTriggeredAbility<C>*)GetAbility())->ResolveSelection(m_pTriggeredPlayer, this);
	}

protected:
	TTriggeredAction(CGame* pGame)
		: CTriggeredAction(pGame)
	{}

	C m_TriggerContext;
};

//____________________________________________________________________________
//
template <class C, class A>
class TTriggeredTargetAction : 
	public TTriggeredAction<C>, 
	public CTargetActionCommon
{
	DEFINE_CREATE_TO_CPTR_ONLY;

	TTriggeredTargetAction(CGame* pGame)
		: TTriggeredAction<C>(pGame)
	{
		SetTargeting();
	}

public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredTargetAction* pThisAction = dynamic_cast<const TTriggeredTargetAction*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_TargetGroup = ((const TTriggeredTargetAction*)pAction)->m_TargetGroup;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!__super::Equals(pAction))
			return FALSE;

		const TTriggeredTargetAction* pTriggeredAction = dynamic_cast<const TTriggeredTargetAction*>(pAction);
		if (!pTriggeredAction)
			return FALSE;

		if (pTriggeredAction == this)
			return TRUE;

		return m_TargetGroup == pTriggeredAction->m_TargetGroup;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredTargetAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	OVERRIDE(BOOL, CanDeflectTargetToCard)(const CCard* pCard) const
	{
		return (dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().CanDeflectTargetToCard(this, pCard);
	}

	OVERRIDE(BOOL, CanDeflectTargetToSpell)(const CCard* pSource) const
	{
		return FALSE;
	}

	OVERRIDE(BOOL, CanDeflectTargetToPlayer)(const CPlayer* pPlayer) const
	{
		return (dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().CanDeflectTargetToPlayer(this, pPlayer);
	}

	OVERRIDE(void, DeflectTargetToCard)(CCard* pCard)
	{
		(dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().DeflectTargetToCard(this, pCard);
	}

	OVERRIDE(void, DeflectTargetToSpell)(CCard* pSource)
	{
		ATLASSERT(false);
	}

	OVERRIDE(void, DeflectTargetToPlayer)(CPlayer* pPlayer)
	{
		(dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().DeflectTargetToPlayer(this, pPlayer);
	}
};

//____________________________________________________________________________
//
template <class C>
class TTriggeredSubjectAction : 
	public TTriggeredAction<C>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

	TTriggeredSubjectAction(CGame* pGame)
		: TTriggeredAction<C>(pGame)
	{}

public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredSubjectAction* pThisAction = dynamic_cast<const TTriggeredSubjectAction*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_SubjectGroup = ((const TTriggeredSubjectAction*)pAction)->m_SubjectGroup;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!TTriggeredAction::Equals(pAction))
			return FALSE;

		const TTriggeredSubjectAction* pTriggeredAction = dynamic_cast<const TTriggeredSubjectAction*>(pAction);
		if (!pTriggeredAction)
			return FALSE;

		if (pTriggeredAction == this)
			return TRUE;

		return m_SubjectGroup == pTriggeredAction->m_SubjectGroup;
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredSubjectAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	const CSubjectGroup& GetSubjectGroup() const { return m_SubjectGroup; }
	CSubjectGroup& GetSubjectGroup() { return m_SubjectGroup; }

protected:
	CSubjectGroup	m_SubjectGroup;
};
//____________________________________________________________________________
//
template <class C, class A>
class TTriggeredDoubleTargetAction : 
	public TTriggeredAction<C>, 
	public CDoubleTargetActionCommon
{
	DEFINE_CREATE_TO_CPTR_ONLY;

	TTriggeredDoubleTargetAction(CGame* pGame)
		: TTriggeredAction<C>(pGame)
	{
		SetDoubleTargeting();
	}

public:
	OVERRIDE(void, Copy)(const CAction* pAction)
	{
#ifdef _DEBUG
		const TTriggeredDoubleTargetAction* pThisAction = dynamic_cast<const TTriggeredDoubleTargetAction*>(pAction);
		ATLASSERT(pThisAction);
#endif

		__super::Copy(pAction);

		m_TargetGroup1 = ((const TTriggeredDoubleTargetAction*)pAction)->m_TargetGroup1;
		m_TargetGroup2 = ((const TTriggeredDoubleTargetAction*)pAction)->m_TargetGroup2;
	}

	OVERRIDE(bool, Equals)(const CAction* pAction) const
	{
		if (!__super::Equals(pAction))
			return FALSE;

		const TTriggeredDoubleTargetAction* pTriggeredAction = dynamic_cast<const TTriggeredDoubleTargetAction*>(pAction);
		if (!pTriggeredAction)
			return FALSE;

		if (pTriggeredAction == this)
			return TRUE;

		return (m_TargetGroup1 == pTriggeredAction->m_TargetGroup1 && m_TargetGroup2 == pTriggeredAction->m_TargetGroup2);
	}

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<TTriggeredDoubleTargetAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

/*	OVERRIDE(BOOL, CanDeflectTargetToCard)(const CCard* pCard) const
	{
		return (dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().CanDeflectTargetToCard(this, pCard);
	}

	OVERRIDE(BOOL, CanDeflectTargetToSpell)(const CCard* pSource) const
	{
		return FALSE;
	}

	OVERRIDE(BOOL, CanDeflectTargetToPlayer)(const CPlayer* pPlayer) const
	{
		return (dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().CanDeflectTargetToPlayer(this, pPlayer);
	}

	OVERRIDE(void, DeflectTargetToCard)(CCard* pCard)
	{
		(dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().DeflectTargetToCard(this, pCard);
	}

	OVERRIDE(void, DeflectTargetToSpell)(CCard* pSource)
	{
		ATLASSERT(false);
	}

	OVERRIDE(void, DeflectTargetToPlayer)(CPlayer* pPlayer)
	{
		(dynamic_cast<A*>(m_cpAbility.GetPointer()))->GetTargeting().DeflectTargetToPlayer(this, pPlayer);
	}*/
};

//____________________________________________________________________________
//