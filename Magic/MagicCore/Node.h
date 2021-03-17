#pragma once

class CGraph;
class CActionContainer;

//____________________________________________________________________________
//
class CNode
{
public:
	// Event Sources

	// void OnNodeChanged(CNode* pToNode)
	ChangeNodeEventSource* GetChangeNodeEventSource() const	{ return m_cpChangeNodeEventSource.GetPointer(); }	


	CNode(CGraph* pGraph, NodeId nodeID, AbilityType validAbilityType, NodeId nextNodeID);
	virtual ~CNode()						{}

	CGraph* GetGraph() const				{ return m_pGraph; }
	NodeId GetNodeId() const				{ return m_NodeId; }
	CString GetNodeName() const				{ return m_strNodeName; }

	NodeId GetNextNodeId() const			{ return m_NextNodeId; }
	NodeId SetNextNodeId(NodeId nextNodeId);

	AbilityType GetValidAbilityType() const	{ return m_ValidAbilityType; }

	void IncreasePassCount();
	int GetPassCount() const				{ return m_nPassCount; }
	void ResetPassCount()					{ m_nPassCount = 0; }

	void SetDirectTransit()					{ m_bDirectTransit = TRUE; }

	VIRTUAL(void, OnAfterEntry)();			// Derived OnAfterEntry() must call this base class function before further processings
	VIRTUAL(BOOL, OnBeforeExit)();			// Derived OnBeforeExit() must call this base class function after all processings
											// Return FALSE to prevent exiting this node

	VIRTUAL(void, GetNodeActions)(CActionContainer& MoveContainer);

protected:
	VIRTUAL(NodeId, GetNextNodeId)();

	void AddTransitMove(CActionContainer* pActionContainer);
	BOOL IsTransitValid() const;

	CGame*			m_pGame;

	CString			m_strNodeName;
	CGraph*			m_pGraph;
	NodeId			m_NodeId;
	BOOL			m_bDirectTransit;

	int_			m_nPassCount;

	CStateSupportEnumType<NodeId>		m_NextNodeId;
	CStateSupportEnumType<AbilityType>	m_ValidAbilityType;

	counted_ptr<ChangeNodeEventSource>	m_cpChangeNodeEventSource;
};

//____________________________________________________________________________
//
class CNodeContainer
	: public CPtrContainer<CNode>
{
public:
	CNode* GetNodeById(NodeId nodeId) const;
	void RemoveNodeById(NodeId nodeId);
};
