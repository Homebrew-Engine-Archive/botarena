#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CNode::CNode(CGraph* pParentGraph, NodeId nodeId, 
			 AbilityType validAbilityType, NodeId nextNodeId)
	: m_pGame(pParentGraph->GetPlayer()->GetGame())
	, m_cpChangeNodeEventSource(::CreateObject<ChangeNodeEventSource>(VAR_NAME(m_cpChangeNodeEventSource)))
	, m_pGraph(pParentGraph)
	, m_NodeId(nodeId)
	, m_ValidAbilityType(validAbilityType)
	, m_NextNodeId(nextNodeId)
	, m_bDirectTransit(FALSE)
	, m_nPassCount(0)
	, m_strNodeName(NodeId::ToString(nodeId))
{
	ATLASSERT(nodeId != NodeId::Null &&
		(nextNodeId != NodeId::Null || nodeId == NodeId::CleanupStep2));
}

NodeId CNode::SetNextNodeId(NodeId nextNodeId)
{
	ATLASSERT(nextNodeId != NodeId::Null || m_NodeId == NodeId::CleanupStep2);

	NodeId previousNodeId = m_NextNodeId;

	m_NextNodeId = nextNodeId;
	return previousNodeId;
}

void CNode::IncreasePassCount()
{
	m_pGame->SetNextPriorityPlayer();

	++m_nPassCount;
}

void CNode::OnAfterEntry()
{
	m_nPassCount = 0;

	m_pGame->SetPriorityPlayer(m_pGame->GetActivePlayer());		// 50/30/2002, moved from CNodeAction::PerformAction()

	m_pGraph->SetCurrentNode(this);
	m_pGame->SetCurrentNode(this);

	m_cpChangeNodeEventSource->FireEvent(this);
}

BOOL CNode::OnBeforeExit()
{
	/* 7/11/2002: Removed because triggered actions can happen in e.g. Attacker declarations 1 and those are saved until Attacker declarations 2 to resolve
	// No need to check for stack here because IsTransitValid() will return FALSE when there are stack moves

	// Check to see if there are any triggered abilities, if true, prevent exiting current node
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)	
		if (m_pGame->GetPlayer(i)->GetTriggeredActionContainer()->GetSize())
			return FALSE;
	*/

	// Clear mana pools
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CManaPool_& manaPool = pPlayer->GetManaPool();

		int nManaBurn = static_cast<int>(manaPool.GetTotal());
		manaPool.Clear();

		if (nManaBurn)
		{
			// No more mana burn in M10 but the search break check is retained here
			//pPlayer->ChangeLife(Damage(NULL, Life(-nManaBurn), PreventableType::NotPreventable, DamageType::NotDealingDamage));
			
			if (m_pGame->IsThinking())
				m_pGame->AddSearchBreak(SearchBreak::ManaBurn);
		}
		
	}

	return TRUE;
}

void CNode::GetNodeActions(CActionContainer& MoveContainer)
{
	if (!IsTransitValid())
		return;

	AddTransitMove(&MoveContainer);
}

NodeId CNode::GetNextNodeId()
{
	return m_NextNodeId;
}

void CNode::AddTransitMove(CActionContainer* pActionContainer)
{
	counted_ptr<CNodeAction> cpNodeMove = ::CreateObject<CNodeAction>(m_pGame);
	ATLASSERT(cpNodeMove);

	cpNodeMove->SetTransitInfo(
		(m_pGame->GetPlayerCount() - 1 == m_nPassCount) ||	// non-active player(s) has already passed
		((m_ValidAbilityType.Get() & AbilityType::_AbilitySpeedMask) < AbilityType::_FastSpeed) ||	// non-active player has no chance to play in this node
		m_bDirectTransit,
		m_pGraph, this, GetNextNodeId());

	pActionContainer->Add(cpNodeMove.GetPointer());
}

BOOL CNode::IsTransitValid() const
{
	if (m_pGraph->GetCurrentNode() != this)
		return FALSE;

	if (m_pGame->GetStack().GetStackSize())
		return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
CNode* CNodeContainer::GetNodeById(NodeId nodeId) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CNode* pNode = GetAt(i);

		if (pNode->GetNodeId() == nodeId)
			return pNode;
	}

	ATLASSERT(false);

	return NULL;
}

void CNodeContainer::RemoveNodeById(NodeId nodeId)
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CNode* pNode = GetAt(i);

		if (pNode->GetNodeId() == nodeId)
		{
			__super::RemoveAt(i);
			return;
		}
	}

	ATLASSERT(false);
}
