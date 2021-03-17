#pragma once

class CPlayer;

//____________________________________________________________________________
//
class CORE_EXPORT CGraph
	: public CNodeContainer
{
public:
	static BOOL SetNode(CGraph* pFromGraph, CGraph* pToGraph, NodeId toNodeId);

	CGraph(CPlayer* pPlayer);
	virtual ~CGraph();

	CNode* GetCurrentNode() const;

	void SetCurrentNode(CNode* pNode);

	CPlayer* GetPlayer() const;

	void SetStartNode(const CNode* pNode);
	void SetPlayer(CPlayer* pPlayer)   {m_pPlayer = pPlayer;}

	NodeId GetStartNodeId() const;

protected:
	const CPlayer*	m_pPlayer;
	const CNode*	m_pStartNode;

	CStateSupportPtrType<CNode>	m_pCurrentNode;
};
