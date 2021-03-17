#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CManaProductionAbility
	: public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CManaProductionAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
					 LPCTSTR strManaPool);
	virtual ~CManaProductionAbility() {}

public:
	CManaPool_& GetManaPool()						{ return m_ManaPool; }
	const CManaPool_& GetManaPool() const			{ return m_ManaPool; }

	CardTapForManaEventSource* GetTapForManaEventSource() const	{ return m_cpTapForManaEventSource.GetPointer(); }

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CManaPool_ m_ManaPool;

	counted_ptr<CardTapForManaEventSource>	m_cpTapForManaEventSource;
};

//____________________________________________________________________________
//
class CORE_EXPORT CAttackAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CAttackAbility(CCard* pCard);
	virtual ~CAttackAbility() {}

public:
	BOOL CanAttack() const;		// Can attack in this combat phase?

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	int GetAmplify() {return m_pAmlify;}
	void IncreaseAmplify() {m_pAmlify = m_pAmlify+1;}
	void DecreaseAmplify() {m_pAmlify = m_pAmlify-1;}
	//CManaCost GetAttackPlayerCost() {return m_AttackPlayerCost;}
	//void AddOptionalPlayerCost();
	//void RemoveOptionalPlayerCost();

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	BOOL CanAttackImpl() const;
	int_ m_pAmlify;
	//CManaCost		m_AttackPlayerCost;
};

//____________________________________________________________________________
//
class CORE_EXPORT CBlockAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CBlockAbility(CCard* pCard);
	virtual ~CBlockAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	BOOL CanBlockInGeneral(const CCreatureCard* pCreatureCard1) const;		// Not considering phase/step requirements

protected:
	BOOL CanBlockImpl(const CCreatureCard* pCreatureCard,
					  const CPlayer* pPlayer,
					  const CCreatureKeyword* pAttribute,
					  BOOL bWall,
					  const CCreatureCard* pCreatureCard1) const;

	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

#ifdef M10_COMBAT
//____________________________________________________________________________
//
class CORE_EXPORT CDamageAssignmentOrderAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDamageAssignmentOrderAbility(CCard* pCard);
	virtual ~CDamageAssignmentOrderAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};
#endif

//____________________________________________________________________________
//
class CORE_EXPORT CCombatDamageAssignmentAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCombatDamageAssignmentAbility(CCard* pCard);
	virtual ~CCombatDamageAssignmentAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CLandAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CLandAbility(CCard* pCard);
	virtual ~CLandAbility() {}

public:
	OVERRIDE(ZoneId, GetPlayableFrom)() const;

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CUntapAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CUntapAbility(CCard* pCard);
	virtual ~CUntapAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CDiscardAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDiscardAbility(CCard* pCard);
	virtual ~CDiscardAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreateTempTriggeredAbilityAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef FastDelegate< void (CCard*, CPlayer*) > PreRemoveAbilityCallback;
	typedef FastDelegate< counted_ptr<CAbility> () > CreateAbilityCallback;
	typedef FastDelegate< CCard* () > CreateAbilityCallback2;

protected:
	CCreateTempTriggeredAbilityAbility(CCard* pCard, LPCTSTR strActionName,
									   CAbility* pAbilityToRemove,
									   CPlayer* pTriggeredPlayer,
									   PreRemoveAbilityCallback preRemoveAbilityCallback = PreRemoveAbilityCallback());

public:
	static void Create(CCard* pTriggerCard, CreateAbilityCallback callback, CPlayer* pPlayer, 
					   PreRemoveAbilityCallback preRemoveAbilityCallback = PreRemoveAbilityCallback());
	static CSpell* Create(CCard* pTriggerCard, CCard* pOnCard, CPlayer* pPlayer, LPCTSTR strManaCost,
					      PreRemoveAbilityCallback preRemoveAbilityCallback = PreRemoveAbilityCallback());
	static void Create(CCard* pTriggerCard, CreateAbilityCallback2 callback, CPlayer* pPlayer, LPCTSTR strManaCost,
					   PreRemoveAbilityCallback preRemoveAbilityCallback = PreRemoveAbilityCallback());

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CAbility*					m_pAbilityToRemove;
	CString						m_strActionName;
	PreRemoveAbilityCallback	m_PreRemoveAbilityCallback;
	CPlayer*					m_pTriggeredPlayer;
};
//____________________________________________________________________________
//
class CORE_EXPORT CMorphAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CMorphAbility(CCard* pCard);
	virtual ~CMorphAbility() {}

public:
	OVERRIDE(ZoneId, GetPlayableFrom)() const;

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CNonStackManaConsumptionAbility : public CNonStackAbility
{
protected:
	CNonStackManaConsumptionAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
					 LPCTSTR strManaCost);
	virtual ~CNonStackManaConsumptionAbility() {}

	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
};

//____________________________________________________________________________
//