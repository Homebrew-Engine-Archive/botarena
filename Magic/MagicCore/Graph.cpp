#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
/*static*/
BOOL CGraph::SetNode(CGraph* pFromGraph, CGraph* pToGraph, NodeId toNodeId)
{
	CNode* pFromNode = pFromGraph->GetCurrentNode();
	CNode* pToNode = pToGraph->GetNodeById(toNodeId);

	ATLASSERT(pToNode);

	if (!pFromNode->OnBeforeExit())		// Apply mana burns
		return FALSE;

	CGame* pGame = pFromGraph->GetPlayer()->GetGame();
	if (pToGraph->GetStartNodeId() == toNodeId)	// 11/4/2003: To support Final Fortune
	{
		pFromGraph->SetCurrentNode(NULL);
		pGame->SetCurrentNode(NULL);		// To trigger end of turn abilities
											// TODO: create a delicated 'end-of-turn' event source
	}

	if (pFromGraph != pToGraph)
		pGame->SetNextActivePlayer();
	
	pToNode->OnAfterEntry();

	return TRUE;
}

CGraph::CGraph(CPlayer* pPlayer)
	: m_pPlayer(pPlayer)
	, m_pCurrentNode(NULL)
	, m_pStartNode(NULL)
{
}

CGraph::~CGraph()
{
	for (int i = 0; i < CNodeContainer::GetSize(); ++i)
	{
		CNode* pNode = CNodeContainer::GetAt(i);
		delete pNode;
	}
}

CNode* CGraph::GetCurrentNode() const
{
	return m_pCurrentNode;
}

void CGraph::SetCurrentNode(CNode* pNode)
{
	m_pCurrentNode = pNode;
}

CPlayer* CGraph::GetPlayer() const
{
	return const_cast<CPlayer*>(m_pPlayer);
}

void CGraph::SetStartNode(const CNode* pNode)
{
	m_pStartNode = pNode;
}

NodeId CGraph::GetStartNodeId() const
{
	return m_pStartNode->GetNodeId();
}
