#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
void CCreatureModifierTask::Execute()
{
	if ((m_bInplayOnly && m_cpCreature->GetZoneId() != ZoneId::Battlefield) ||
		m_cpCreature->GetInplayGameTurnNumber() != m_nInplayGameTurnNumber)
		return;

	if (m_bApplyTo)
		m_apModifier->ApplyTo(m_cpCreature.GetPointer());
	else
		m_apModifier->RemoveFrom(m_cpCreature.GetPointer());
}

//____________________________________________________________________________
//
void CCardModifierTask::Execute()
{
	if ((m_bInplayOnly && m_cpCard->GetZoneId() != ZoneId::Battlefield) ||
		m_cpCard->GetInplayGameTurnNumber() != m_nInplayGameTurnNumber)
		return;

	if (m_bApplyTo)
		m_apModifier->ApplyTo(m_cpCard.GetPointer());
	else
		m_apModifier->RemoveFrom(m_cpCard.GetPointer());
}

//____________________________________________________________________________
//
void CPlayerModifierTask::Execute()
{
	if (m_bApplyTo)
		m_apModifier->ApplyTo(m_pPlayer);
	else
		m_apModifier->RemoveFrom(m_pPlayer);
}

//____________________________________________________________________________
//
CScheduler::CScheduler(CGame* pGame)
	: m_pGame(pGame)
	, m_cpListener(VAR_NAME(m_cpListener), CPtrEventSource<CNode>::Listener::EventCallback(this, &CScheduler::OnTimer))
{
}

void CScheduler::ScheduleTask(CTask* pTask, NodeId nodeId, TurnNumberDelta nGameTurnNumberDelta)
{
	ATLASSERT(pTask && nodeId.Any());

	TaskEntry entry;
	entry.m_pThisPlayersTurn = NULL;

	if (nGameTurnNumberDelta == TurnNumberDelta(-1))
		entry.m_nTurnNumber = -1;	// next
	else
		entry.m_nTurnNumber = GET_INTEGER(nGameTurnNumberDelta) + m_pGame->GetGameTurnNumber();
	entry.m_cpTask = counted_ptr<CTask>(pTask);
	entry.m_NodeId = nodeId;

	m_Tasks.Add(entry);

	if (!m_cpListener->GetEventSourceCount())
		m_pGame->GetCurrentNodeEventSource()->AddListener(m_cpListener.GetPointer());
}

void CScheduler::ScheduleTask(CTask* pTask, const CPlayer* pThisPlayersTurn,
							  NodeId nodeId, TurnNumberDelta nPlayerTurnNumberDelta)
{
	ATLASSERT(pTask && nodeId.Any());

	TaskEntry entry;
	entry.m_pThisPlayersTurn = pThisPlayersTurn;

	if (nPlayerTurnNumberDelta == TurnNumberDelta(-1))
		entry.m_nTurnNumber = -1;
	else
		entry.m_nTurnNumber = GET_INTEGER(nPlayerTurnNumberDelta) + pThisPlayersTurn->GetPlayerTurnNumber();
	entry.m_cpTask = counted_ptr<CTask>(pTask);
	entry.m_NodeId = nodeId;

	m_Tasks.Add(entry);

	if (!m_cpListener->GetEventSourceCount())
		m_pGame->GetCurrentNodeEventSource()->AddListener(m_cpListener.GetPointer());
}

void CScheduler::OnTimer(CNode* pFromNode, CNode* pToNode)
{
	if (!pToNode)
		return;

	int nCount = m_Tasks.GetSize();

	if (nCount == 0)
		return;

	const CPlayer* pActivePlayer = m_pGame->GetActivePlayer();
	int nGameTurnNumber = m_pGame->GetGameTurnNumber();
	NodeId nodeId = m_pGame->GetCurrentNode()->GetNodeId();

	for (int i = nCount - 1; i >= 0; --i)
	{
		const TaskEntry& entry = m_Tasks.GetAt(i);

		if (entry.m_pThisPlayersTurn)
		{
			if (entry.m_pThisPlayersTurn != pActivePlayer)
				continue;

			if (entry.m_nTurnNumber != -1)
			{
				int nPlayerTurnNumber = pActivePlayer->GetPlayerTurnNumber();

				if (entry.m_nTurnNumber < nPlayerTurnNumber)
				{
					m_Tasks.RemoveAt(i);
					continue;
				}
				else
				if (entry.m_nTurnNumber > nPlayerTurnNumber)
					continue;
			}
		}
		else
		{
			if (entry.m_nTurnNumber != -1)
			{
				if (entry.m_nTurnNumber < nGameTurnNumber)
				{
					m_Tasks.RemoveAt(i);
					continue;
				}
				else
				if (entry.m_nTurnNumber > nGameTurnNumber)
					continue;
			}
		}

		if (entry.m_NodeId == nodeId)
		{
			entry.m_cpTask->Execute();
			m_Tasks.RemoveAt(i);
		}
	}

	if (!m_Tasks.GetSize())
		m_cpListener->RemoveAllEventSources();
}