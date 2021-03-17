#pragma once

class CSubjectGroup;
class CGraph;

//____________________________________________________________________________
//
class CORE_EXPORT CBeforeBeginningNode : public CNode
{
public:
	CBeforeBeginningNode(CGraph* pGraph);

	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
};

//____________________________________________________________________________
//
class CORE_EXPORT CBeginningNode : public CNode
{
public:
	CBeginningNode(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(BOOL, OnBeforeExit)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
};

//____________________________________________________________________________
//
class CORE_EXPORT CUntapNode : public CNode
{
public:
	CUntapNode(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(BOOL, OnBeforeExit)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
protected:	
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CORE_EXPORT CUpkeepNode : public CNode
{
public:
	CUpkeepNode(CGraph* pGraph);

	OVERRIDE(BOOL, OnBeforeExit)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawNode1 : public CNode
{
public:
	CDrawNode1(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);

	void IncreaseNormalDrawCount();
	int GetNormalDrawCount() const { return m_nNormalDrawCount; }

	int GetNormalDrawsAllowed() const;
	void SetNormalDrawsAllowed(int nNormalDrawsAllowed);

protected:
	int_ m_nNormalDrawCount;
	int_ m_nNormalDrawsAllowed;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawNode2 : public CNode
{
public:
	CDrawNode2(CGraph* pGraph);

	OVERRIDE(BOOL, OnBeforeExit)();
};

//____________________________________________________________________________
//
class CORE_EXPORT CMainNode : public CNode
{
public:
	CMainNode(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);

	void IncreaseCombatCount();
	int GetCombatCount() const;

	void ResetCombatCount();
	int GetMaxCombatCount() const;
	int GetTurnMaxCombatCount() const;
	void SetMaxCombatCount(int nMaxCombatCount, BOOL bThisTurnOnly);
	void IncreaseMaxCombatCount(int nAdditionalCombats, BOOL bThisTurnOnly);

	void IncreaseLandCount();
	BOOL IsLandActionValid() const;

	void ResetLandCount();
	int GetLandCount() const;
	int GetMaxLandCount() const;
	void SetMaxLandCount(int nMaxDrawCount, BOOL bThisTurnOnly);

	BOOL IsPreCombat() const;

protected:
	// State managed
	int_	m_nCombatCount;
	int_	m_nMaxCombatCount;
	int_	m_nTurnMaxCombatCount;

	int_	m_nLandCount;
	int_	m_nMaxLandCount;
	int_	m_nTurnMaxLandCount;
};

//____________________________________________________________________________
//
class CORE_EXPORT CEndOfTurnNode : public CNode
{
public:
	CEndOfTurnNode(CGraph* pGraph);
};

//____________________________________________________________________________
//
class CORE_EXPORT CCleanUpNode1 : public CNode			// Discards
{
public:
	CCleanUpNode1(CGraph* pGraph);

	OVERRIDE(BOOL, OnBeforeExit)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
};

//____________________________________________________________________________
//
class CORE_EXPORT CCleanUpNode2 : public CNode
{
public:
	CCleanUpNode2(CGraph* pGraph);

	void SetTriggered(BOOL bTriggered);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(BOOL, OnBeforeExit)();

	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);

protected:
	BOOL_ m_bTriggered;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCombatNode : public CNode
{
	friend class CORE_EXPORT CNodeAction;

public:
	CCombatNode(CGraph* pGraph, NodeId nodeId,
		AbilityType validAbilityType, NodeId nextNodeId);
	
	void DealCombatDamage();
	int GetCombatCount();

protected:
	BOOL RequireCombatDamageAssignment(BOOL bCheckAttackers, BOOL bCheckBlockers) const;
	void AssignUnblockedAttackers();
	void AssignSimpleCombatDamage();

	void ResetCombatStatus();
	void ResetCombatDamage();

	BOOL ResolveDamage(const CSubjectGroup& subjectGroup, DamageType damageType);

#ifdef M10_COMBAT
	BOOL AllAttackerDamageAssignmentOrdered();
	BOOL AllBlockerDamageAssignmentOrdered();
#endif
};

//____________________________________________________________________________
//
class CORE_EXPORT CBeginOfCombatNode : public CCombatNode
{
public:
	CBeginOfCombatNode(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
};

//____________________________________________________________________________
//
class CORE_EXPORT CAttackDeclarationNode1 : public CCombatNode
{
public:
	// Event Sources

	// OnCreatureAttacked(CCreatureCard* pCreature)
	CreatureAttackEventSource* GetCreatureAttackEventSource() const	{ return m_cpCreatureAttackEventSource.GetPointer(); }


	CAttackDeclarationNode1(CGraph* pGraph);

	OVERRIDE(BOOL, OnBeforeExit)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);

protected:
	counted_ptr<CreatureAttackEventSource>	m_cpCreatureAttackEventSource;
};

//____________________________________________________________________________
//
class CORE_EXPORT CAttackDeclarationNode2 : public CCombatNode
{
public:
	CAttackDeclarationNode2(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();

protected:
	OVERRIDE(NodeId, GetNextNodeId)();
};

//____________________________________________________________________________
//
class CORE_EXPORT CBlockDeclarationNode1 : public CCombatNode
{
public:
	// Event Sources

	// OnCreatureBlocked(CCreatureCard* pCreature)
	CreatureBlockedEventSource* GetCreatureBlockedEventSource() const	{ return m_cpCreatureBlockedEventSource.GetPointer(); }

	// OnCreatureBlocking(CCreatureCard* pCreature)
	CreatureBlockingEventSource* GetCreatureBlockingEventSource() const	{ return m_cpCreatureBlockingEventSource.GetPointer(); }


	CBlockDeclarationNode1(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(BOOL, OnBeforeExit)();

	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);

protected:
#ifdef M10_COMBAT
	OVERRIDE(NodeId, GetNextNodeId)();
#endif

	counted_ptr<CreatureBlockingEventSource>	m_cpCreatureBlockingEventSource;
	counted_ptr<CreatureBlockedEventSource>		m_cpCreatureBlockedEventSource;
};

#ifdef M10_COMBAT
//____________________________________________________________________________
//
class CORE_EXPORT CBlockDeclarationNode1a : public CCombatNode
{
public:
	CBlockDeclarationNode1a(CGraph* pGraph);

	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
};
#endif

//____________________________________________________________________________
//
class CORE_EXPORT CBlockDeclarationNode2 : public CCombatNode
{
public:
	CBlockDeclarationNode2(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);

protected:
	BOOL FindFirstStrikes() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCombatDamageNode1a : public CCombatNode
{
public:
	CCombatDamageNode1a(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
#ifdef M10_COMBAT
	OVERRIDE(BOOL, OnBeforeExit)();
#endif

	void ResetAssignedCreatures();
	bool HasAssignedDamage(const CCreatureCard* pCreature) const;

protected:
	void SaveAssignedCreatures();

	CCountedCardContainer_ m_AssignedCreatures;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCombatDamageNode1b : public CCombatNode
{
public:
	CCombatDamageNode1b(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
};

//____________________________________________________________________________
//
class CORE_EXPORT CCombatDamageNode2a : public CCombatNode
{
public:
	CCombatDamageNode2a(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
#ifdef M10_COMBAT
	OVERRIDE(BOOL, OnBeforeExit)();
#endif
};

//____________________________________________________________________________
//
class CORE_EXPORT CCombatDamageNode2b : public CCombatNode
{
public:
	CCombatDamageNode2b(CGraph* pGraph);

	OVERRIDE(void, OnAfterEntry)();
};

//____________________________________________________________________________
//
class CORE_EXPORT CEndOfCombatNode : public CCombatNode
{
public:
	CEndOfCombatNode(CGraph* pGraph);

	OVERRIDE(void, GetNodeActions)(CActionContainer& MoveContainer);
	OVERRIDE(BOOL, OnBeforeExit)();

	void IncreaseFastCombatCount();
	int GetFastCombatCount() const;

	void ResetFastCombatCount();
	int GetMaxFastCombatCount() const;
	void SetMaxFastCombatCount(int nMaxCombatCount);

protected:
	// State managed
	int_	m_nMaxCombatCount;
};
