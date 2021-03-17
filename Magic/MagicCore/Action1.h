#pragma once

class CZone;
class CBlockAbility;
class CCard;
class CCreatureCard;
class CChgPwrTghSpell;
class CManaConsumptionAbility;
class CDrawNode1;
class CGraph;
class CManaProductionAbility;
class CManaFilterAbility;
class CNode;
class CNonStackAbility;
class CPlayer;
class CStackAbility;
class CCountedCardContainer;

//____________________________________________________________________________
//
class CORE_EXPORT CAbilityAction : public CAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	OVERRIDE(void, ReleaseResources)()										
	{ 
		m_cpAbility.Detach(); 
		__super::ReleaseResources();
	}

	void SetAbility(CAbility* pAbility);
	CAbility* GetAbility() const;

	CPlayer* GetController() const										{ return m_pController; }

	// Cost Configuration

	void SetCostConfigEntry(const CCostConfigEntry& CostConfigEntry)	{ m_CostConfigEntry = CostConfigEntry; }
	const CCostConfigEntry& GetCostConfigEntry() const					{ return m_CostConfigEntry; }
	CCostConfigEntry& GetCostConfigEntry()								{ return m_CostConfigEntry; }

	const CManaPool& GetCostManaPool() const							{ return m_CostConfigEntry.GetManaPool(); }
	CManaPool& GetCostManaPool()										{ return m_CostConfigEntry.GetManaPool(); }

	const CCountedCardContainer* GetSacrificeCards() const				{ return m_CostConfigEntry.GetSacrificeCards(); }

	const CCountedCardContainer* GetExileFromHandCards() const				{ return m_CostConfigEntry.GetExileHandCards(); }
	//CCountedCardContainer* GetSacrificeCards()							{ return m_CostConfigEntry.GetSacrificeCards(); }

	const CCountedCardContainer* GetDiscardCards() const				{ return m_CostConfigEntry.GetDiscardCards(); }
	//CCountedCardContainer* GetDiscardCards()							{ return m_CostConfigEntry.GetDiscardCards(); }

	const CCountedCardContainer* GetRevealCards() const					{ return m_CostConfigEntry.GetRevealCards(); }
	//CCountedCardContainer* GetRevealCards()								{ return m_CostConfigEntry.GetRevealCards(); }

protected:
	CAbilityAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;

	counted_ptr<CAbility>	m_cpAbility;
	CPlayer*			m_pController;

	USHORT				m_nAbilityCLSID;

	CCostConfigEntry	m_CostConfigEntry;	// 12/2/2003
};

//____________________________________________________________________________
//
class CNonStackAbilityAction
	: public CAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CNonStackAbilityAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CNonStackAbility* GetNonStackAbility() const	{ return (CNonStackAbility*)m_cpAbility.GetPointer(); }

#ifdef USE_NS_CUT
	virtual DWORD GetCutID() const;
#endif

protected:
	CNonStackAbilityAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CStackAbilityAction : public CAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CStackAbilityAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	CStackAbility* GetStackAbility() const	{ return (CStackAbility*)m_cpAbility.GetPointer(); }

	BOOL IsSpell() const;

	void SetCanBeDenied(BOOL bEnable);
	VIRTUAL(BOOL, CanBeDeniedBy)(const CPlayer* pPlayer) const;

	const CCost& GetDenialCost() const;
	CCost& GetDenialCost();

protected:
	CStackAbilityAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;

	BOOL		m_bCanBeDenied;
	CCost		m_DenialCost;
};

//____________________________________________________________________________
//
class CNodeAction : public CAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CNodeAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetTransitInfo(BOOL bTransit, CGraph* pGraph, CNode* pNode, NodeId nodeId);
	void SetTransitInfo(CGraph* pGraph);

	NodeId GetNodeId() const { return m_NodeId; }

protected:
	CNodeAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;
	OVERRIDE(void, OnActionNotPerformed)() const;

	BOOL	m_bTransit;
	NodeId	m_NodeId;
	CGraph*	m_pGraph;
	CNode*	m_pNode;
};

//____________________________________________________________________________
//
class CDrawAction : public CAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CDrawAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetDrawInfo(CPlayer* pPlayer, CDrawNode1* pDrawNode);

protected:
	CDrawAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;

	CPlayer*	m_pPlayer;
	CDrawNode1*	m_pDrawNode;
};

//____________________________________________________________________________
//
class CStackPassAction : public CAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	void SetStackPassInfo(BOOL bResolve);

	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CStackPassAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

protected:
	CStackPassAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;

	BOOL m_bResolve;
};

//____________________________________________________________________________
//
class CStackDenialAction : public CAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	void SetDenialActionInfo(int nStackActionIndex, CPlayer* pPayer, const CCostConfigEntry& CostConfigEntry);

	int GetDeniedStackMoveIndex() const { return m_nStackActionIndex; }

	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CStackDenialAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

protected:
	CStackDenialAction(CGame* pGame);

	OVERRIDE(BOOL, PerformActionImpl)() const;

	int						m_nStackActionIndex;
	CPlayer*				m_pPayer;
	CCostConfigEntry		m_CostConfigEntry;
};

//____________________________________________________________________________
//
class CManaProductionActionBase
{
public:
	CManaPool& GetManaPool()							{ return m_ManaPool; }
	const CManaPool& GetManaPool() const				{ return m_ManaPool; }

	void SetManaPool(const CManaPool& manaPool)			{ m_ManaPool = manaPool; }

protected:
	CManaPool	m_ManaPool;
};

//____________________________________________________________________________
//
class CManaProductionAbilityAction 
	: public CNonStackAbilityAction
	, public CManaProductionActionBase
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	CManaProductionAbility* GetManaProductionAbility() const;

	OVERRIDE(void, Copy)(const CAction* pAction);	
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CManaProductionAbilityAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

protected:
	CManaProductionAbilityAction(CGame* pGame);

	OVERRIDE(counted_ptr<CUndoAction>, CreateUndoAction)() const;
};

//____________________________________________________________________________
//
class CManaFilterAbilityAction : public CManaProductionAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CManaFilterAbilityAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}	

protected:
	CManaFilterAbilityAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CManaFilterSpellAction
	: public CStackAbilityAction
	, public CManaProductionActionBase
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);	
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CManaFilterSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

protected:
	CManaFilterSpellAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CAttackAction : public CNonStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CAttackAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetAttacked(AttackSubject attacked);
	AttackSubject GetAttacked() const { return m_Attacked; }

	OVERRIDE(CCard*, GetAssociatedCard)() const;

protected:
	CAttackAction(CGame* pGame);

	AttackSubject m_Attacked;
};

//____________________________________________________________________________
//
class CBlockAction : public CNonStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CBlockAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	CCountedCardContainer& GetAttackers() { return m_Attackers; }
	const CCountedCardContainer& GetAttackers() const { return m_Attackers; }

	OVERRIDE(CCard*, GetAssociatedCard)() const
	{
		if (m_Attackers.GetSize() == 1)
			return m_Attackers.GetAt(0);

		return NULL;
	}

#ifdef USE_NS_CUT
	virtual DWORD GetCutID() const;
#endif

protected:
	CBlockAction(CGame* pGame);

	CCountedCardContainer	m_Attackers;
};

#ifdef M10_COMBAT
//____________________________________________________________________________
//
class CDamageAssignmentOrderAction
	: public CNonStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CDamageAssignmentOrderAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	const CSubjectGroup& GetSubjectGroup() const	{ return m_SubjectGroup; }
	CSubjectGroup& GetSubjectGroup()				{ return m_SubjectGroup; }

protected:
	CDamageAssignmentOrderAction(CGame* pGame);

	CSubjectGroup m_SubjectGroup;
};
#endif

//____________________________________________________________________________
//
class CCombatDamageAssignmentAction
	: public CNonStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CCombatDamageAssignmentAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	const CSubjectGroup& GetSubjectGroup() const	{ return m_SubjectGroup; }
	CSubjectGroup& GetSubjectGroup()				{ return m_SubjectGroup; }

protected:
	CCombatDamageAssignmentAction(CGame* pGame);

	CSubjectGroup m_SubjectGroup;
};

//____________________________________________________________________________
//
class CManaConsumptionAbilityAction : public CStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CManaConsumptionAbilityAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

protected:
	CManaConsumptionAbilityAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CNonStackManaConsumptionAbilityAction : public CNonStackAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CNonStackManaConsumptionAbilityAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

protected:
	CNonStackManaConsumptionAbilityAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CTargetActionCommon
{
protected:
	CTargetActionCommon() {}
	virtual ~CTargetActionCommon() {}

public:
	const CSubjectGroup& GetTargetGroup() const { return m_TargetGroup; }
	CSubjectGroup& GetTargetGroup() { return m_TargetGroup; }

	// To support Deflection
	VIRTUAL(BOOL, CanDeflectTargetToCard)(const CCard* pCard) const = 0;
	VIRTUAL(BOOL, CanDeflectTargetToSpell)(const CCard* pSource) const = 0;
	VIRTUAL(BOOL, CanDeflectTargetToPlayer)(const CPlayer* pPlayer) const = 0;

	VIRTUAL(void, DeflectTargetToCard)(CCard* pCard) = 0;
	VIRTUAL(void, DeflectTargetToSpell)(CCard* pSource) = 0;
	VIRTUAL(void, DeflectTargetToPlayer)(CPlayer* pPlayer) = 0;

protected:
	CSubjectGroup	m_TargetGroup;
};

//____________________________________________________________________________
//
class CDoubleTargetActionCommon
{
protected:
	CDoubleTargetActionCommon() {}
	virtual ~CDoubleTargetActionCommon() {}

public:
	const CSubjectGroup& GetTargetGroup1() const { return m_TargetGroup1; }
	CSubjectGroup& GetTargetGroup1() { return m_TargetGroup1; }

	const CSubjectGroup& GetTargetGroup2() const { return m_TargetGroup2; }
	CSubjectGroup& GetTargetGroup2() { return m_TargetGroup2; }

	// To support Deflection
/*	VIRTUAL(BOOL, CanDeflectTarget1ToCard)(const CCard* pCard) const = 0;
	VIRTUAL(BOOL, CanDeflectTarget1ToSpell)(const CCard* pSource) const = 0;
	VIRTUAL(BOOL, CanDeflectTarget1ToPlayer)(const CPlayer* pPlayer) const = 0;

	VIRTUAL(void, DeflectTarget1ToCard)(CCard* pCard) = 0;
	VIRTUAL(void, DeflectTarget1ToSpell)(CCard* pSource) = 0;
	VIRTUAL(void, DeflectTarget1ToPlayer)(CPlayer* pPlayer) = 0;

	VIRTUAL(BOOL, CanDeflectTarget2ToCard)(const CCard* pCard) const = 0;
	VIRTUAL(BOOL, CanDeflectTarget2ToSpell)(const CCard* pSource) const = 0;
	VIRTUAL(BOOL, CanDeflectTarget2ToPlayer)(const CPlayer* pPlayer) const = 0;

	VIRTUAL(void, DeflectTarget2ToCard)(CCard* pCard) = 0;
	VIRTUAL(void, DeflectTarget2ToSpell)(CCard* pSource) = 0;
	VIRTUAL(void, DeflectTarget2ToPlayer)(CPlayer* pPlayer) = 0;*/

protected:
	CSubjectGroup	m_TargetGroup1;
	CSubjectGroup	m_TargetGroup2;
};

//____________________________________________________________________________
//
class CTargetSpellAction
	: public CManaConsumptionAbilityAction
	, public CTargetActionCommon
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTargetSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	OVERRIDE(BOOL, CanBeDeniedBy)(const CPlayer* pPlayer) const;

	OVERRIDE(BOOL, CanDeflectTargetToCard)(const CCard* pCard) const;
	OVERRIDE(BOOL, CanDeflectTargetToSpell)(const CCard* pSource) const;
	OVERRIDE(BOOL, CanDeflectTargetToPlayer)(const CPlayer* pPlayer) const;

	OVERRIDE(void, DeflectTargetToCard)(CCard* pCard);
	OVERRIDE(void, DeflectTargetToSpell)(CCard* pSource);
	OVERRIDE(void, DeflectTargetToPlayer)(CPlayer* pPlayer);

protected:
	CTargetSpellAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CDoubleTargetSpellAction
	: public CManaConsumptionAbilityAction
	, public CDoubleTargetActionCommon
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CDoubleTargetSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	OVERRIDE(BOOL, CanBeDeniedBy)(const CPlayer* pPlayer) const;

/*	OVERRIDE(BOOL, CanDeflectTarget1ToCard)(const CCard* pCard) const;
	OVERRIDE(BOOL, CanDeflectTarget1ToSpell)(const CCard* pSource) const;
	OVERRIDE(BOOL, CanDeflectTarget1ToPlayer)(const CPlayer* pPlayer) const;

	OVERRIDE(void, DeflectTarget1ToCard)(CCard* pCard);
	OVERRIDE(void, DeflectTarget1ToSpell)(CCard* pSource);
	OVERRIDE(void, DeflectTarget1ToPlayer)(CPlayer* pPlayer);

	OVERRIDE(BOOL, CanDeflectTarget2ToCard)(const CCard* pCard) const;
	OVERRIDE(BOOL, CanDeflectTarget2ToSpell)(const CCard* pSource) const;
	OVERRIDE(BOOL, CanDeflectTarget2ToPlayer)(const CPlayer* pPlayer) const;

	OVERRIDE(void, DeflectTarget2ToCard)(CCard* pCard);
	OVERRIDE(void, DeflectTarget2ToSpell)(CCard* pSource);
	OVERRIDE(void, DeflectTarget2ToPlayer)(CPlayer* pPlayer);*/

protected:
	CDoubleTargetSpellAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CTargetStackSpellAction			// For counterspells 
	: public CManaConsumptionAbilityAction
	, public CTargetActionCommon		// Note that spell cards can never put more than one stack action on the stack. Given that, a card pointer is enough to identify a spell in the stack.
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTargetStackSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	OVERRIDE(BOOL, CanBeDeniedBy)(const CPlayer* pPlayer) const;

	OVERRIDE(BOOL, CanDeflectTargetToCard)(const CCard* pCard) const;
	OVERRIDE(BOOL, CanDeflectTargetToSpell)(const CCard* pSource) const;
	OVERRIDE(BOOL, CanDeflectTargetToPlayer)(const CPlayer* pPlayer) const;

	OVERRIDE(void, DeflectTargetToCard)(CCard* pCard);
	OVERRIDE(void, DeflectTargetToSpell)(CCard* pSource);
	OVERRIDE(void, DeflectTargetToPlayer)(CPlayer* pPlayer);

protected:
	CTargetStackSpellAction(CGame* pGame);
};

//____________________________________________________________________________
//
class CTargetDamagePreventionSpellAction : public CTargetSpellAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTargetDamagePreventionSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetSourceCard(CCard* pCard);
	CCard* GetSourceCard() const;

protected:
	CTargetDamagePreventionSpellAction(CGame* pGame);

	counted_ptr<CCard>	m_cpSourceCard;
};

//____________________________________________________________________________
//
class CTargetCreatureDamageRedirectionSpellAction : public CTargetSpellAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;
	
public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CTargetCreatureDamageRedirectionSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetSourceCard(CCard* pCard);
	CCard* GetSourceCard() const;

protected:
	CTargetCreatureDamageRedirectionSpellAction(CGame* pGame);

	counted_ptr<CCard>	m_cpSourceCard;
};

//____________________________________________________________________________
//
class CDamagePreventionSpellAction : public CManaConsumptionAbilityAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CDamagePreventionSpellAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetSourceCard(CCard* pCard);
	CCard* GetSourceCard() const;

protected:
	CDamagePreventionSpellAction(CGame* pGame);

	counted_ptr<CCard>	m_cpSourceCard;
};

/* Merged into CAction
//____________________________________________________________________________
//
class CSelectionAction : public CAction
{
	DEFINE_COUNTED_CSTOR(CSelectionAction);
public:
	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CSelectionAction>().GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	void SetSelectionIndex(int nIndex);

protected:
	OVERRIDE(BOOL, PerformActionImpl)() const;
};
*/

//____________________________________________________________________________
//
class CUndoAction : public CAction
{
protected:
	CUndoAction(CGame* pGame) 
		: CAction(pGame)
		, m_pUndoPlayer(NULL)
	{
		SetUndo();
	}

	virtual ~CUndoAction() {}

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	void SetUndoPlayer(CPlayer* pUndoPlayer);

protected:
	OVERRIDE(BOOL, PerformActionImpl)() const;

	VIRTUAL(void, Undo)() const = 0;

	CPlayer*	m_pUndoPlayer;
};

//____________________________________________________________________________
//
class CUndoManaProductionAction : public CUndoAction
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(void, Copy)(const CAction* pAction);
	OVERRIDE(bool, Equals)(const CAction* pAction) const;

	OVERRIDE(counted_ptr<CAction>, Clone)() const
	{
		counted_ptr<CAction> cpAction(CreateObject<CUndoManaProductionAction>(m_pGame).GetPointer());
		cpAction->Copy(this);
		return cpAction;
	}

	CAction& operator=(const CAction& action)	{ Copy(&action); return *this; }
	bool operator==(const CAction& action) const { return Equals(&action); }

	void SetUndoInfo(CCard* pUntapCard, CManaPool removeMana);

protected:
	CUndoManaProductionAction(CGame* pGame)
		: CUndoAction(pGame)
	{}

	OVERRIDE(void, Undo)() const;

	CCard*		m_pUntapCard;
	CManaPool	m_RemoveMana;
};
