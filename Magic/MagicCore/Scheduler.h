#pragma once

//____________________________________________________________________________
//
class CTask 
	: public CReferenceCounted<SingleThreadedPolicy>
	, noncopyable
{
public:
	virtual ~CTask() {}

	virtual void Execute() = 0;
	virtual counted_ptr<CTask> Clone() const = 0;
};

//____________________________________________________________________________
//
class CCreatureModifierTask : public CTask
{
public:
	CCreatureModifierTask()
		: m_nInplayGameTurnNumber(0)
		, m_bInplayOnly(true)
		, m_bApplyTo(true)
	{
	}

	CCreatureModifierTask(CCreatureCard* pCreature, std::auto_ptr<CCreatureModifier> apModifier, bool bInplayOnly = true, bool bApplyTo = true)
		: m_cpCreature(pCreature)
		, m_apModifier(apModifier)
		, m_nInplayGameTurnNumber(pCreature->GetInplayGameTurnNumber())
		, m_bInplayOnly(bInplayOnly)
		, m_bApplyTo(bApplyTo)
	{
		if (bInplayOnly)
			ATLASSERT(pCreature->GetZoneId() == ZoneId::Battlefield);
	}

	virtual void Execute();
	virtual counted_ptr<CTask> Clone() const
	{
		CCreatureModifierTask* pTask = new CCreatureModifierTask;
		pTask->m_nInplayGameTurnNumber = m_nInplayGameTurnNumber;
		pTask->m_cpCreature = m_cpCreature;
		pTask->m_apModifier = std::auto_ptr<CCreatureModifier>(m_apModifier->CloneCreatureModifier());
		pTask->m_bApplyTo = m_bApplyTo;

		return pTask;
	}

protected:
	int m_nInplayGameTurnNumber;
	counted_ptr<CCreatureCard> m_cpCreature;
	std::auto_ptr<CCreatureModifier> m_apModifier;
	bool m_bInplayOnly;
	bool m_bApplyTo;
};

//____________________________________________________________________________
//
class CCardModifierTask : public CTask
{
public:
	CCardModifierTask()
		: m_nInplayGameTurnNumber(0)
		, m_bInplayOnly(true)
		, m_bApplyTo(true)
	{
	}

	CCardModifierTask(CCard* pCard, std::auto_ptr<CCardModifier> apModifier, bool bInplayOnly = true, bool bApplyTo = true)
		: m_cpCard(pCard)
		, m_apModifier(apModifier)
		, m_nInplayGameTurnNumber(pCard->GetInplayGameTurnNumber())
		, m_bInplayOnly(bInplayOnly)
		, m_bApplyTo(bApplyTo)
	{
		if (bInplayOnly)
			ATLASSERT(pCard->GetZoneId() == ZoneId::Battlefield);
	}

	virtual void Execute();
	virtual counted_ptr<CTask> Clone() const
	{
		CCardModifierTask* pTask = new CCardModifierTask;
		pTask->m_nInplayGameTurnNumber = m_nInplayGameTurnNumber;
		pTask->m_cpCard = m_cpCard;
		pTask->m_apModifier = std::auto_ptr<CCardModifier>(m_apModifier->CloneCardModifier());
		pTask->m_bApplyTo = m_bApplyTo;

		return pTask;
	}

protected:
	int m_nInplayGameTurnNumber;
	counted_ptr<CCard> m_cpCard;
	std::auto_ptr<CCardModifier> m_apModifier;
	bool m_bInplayOnly;
	bool m_bApplyTo;
};

//____________________________________________________________________________
//
class CPlayerModifierTask : public CTask
{
public:
	CPlayerModifierTask()
		: m_pPlayer(NULL)
		, m_bApplyTo(true)
	{
	}

	CPlayerModifierTask(CPlayer* pPlayer, std::auto_ptr<CPlayerModifier> apModifier, bool bApplyTo = true)
		: m_pPlayer(pPlayer)
		, m_apModifier(apModifier)
		, m_bApplyTo(bApplyTo)
	{
	}

	virtual void Execute();
	virtual counted_ptr<CTask> Clone() const
	{
		CPlayerModifierTask* pTask = new CPlayerModifierTask;
		pTask->m_pPlayer = m_pPlayer;
		pTask->m_apModifier = std::auto_ptr<CPlayerModifier>(m_apModifier->ClonePlayerModifier());
		pTask->m_bApplyTo = m_bApplyTo;

		return pTask;
	}

protected:
	CPlayer* m_pPlayer;
	std::auto_ptr<CPlayerModifier> m_apModifier;
	bool m_bApplyTo;
};

//____________________________________________________________________________
//
class CCreateTokenTask : public CTask
{
public:
	CCreateTokenTask()
		: m_pPlayer(NULL)
		, m_pByPlayer(NULL)
		, m_nTokenCount(0)
		, m_uID(0)
	{}

	CCreateTokenTask(CPlayer* pPlayer, LPCTSTR strTokenName, UINT uID, int nTokenCount,
					 CPlayer* pByPlayer)
		: m_pPlayer(pPlayer)
		, m_strTokenName(strTokenName)
		, m_uID(uID)
		, m_nTokenCount(nTokenCount)
		, m_pByPlayer(pByPlayer)
	{}

	virtual void Execute()
	{
		for (int i = 0; i < m_nTokenCount; ++i)
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pPlayer->GetGame(), m_strTokenName, m_uID));
			m_pPlayer->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
			cpToken->Move(m_pPlayer->GetZoneById(ZoneId::Battlefield), m_pByPlayer, MoveType::Others);
		}
	}

	virtual counted_ptr<CTask> Clone() const
	{
		return new CCreateTokenTask(m_pPlayer, m_strTokenName, m_uID, m_nTokenCount, m_pByPlayer);
	}

protected:
	CPlayer* m_pPlayer;
	CString m_strTokenName;
	UINT m_uID;
	int m_nTokenCount;
	CPlayer* m_pByPlayer;
};

//____________________________________________________________________________
//
class CScheduler
{
public:
	CScheduler(CGame* pGame);

	void ScheduleTask(CTask* pTask, NodeId nodeId, 
		TurnNumberDelta nGameTurnNumberDelta = TurnNumberDelta(-1));	// default: next

	void ScheduleTask(CTask* pTask, const CPlayer* pThisPlayersTurn,
		NodeId nodeId, 
		TurnNumberDelta nPlayerTurnNumberDelta = TurnNumberDelta(-1)); // default: next

protected:
	struct TaskEntry
	{
		const CPlayer*		m_pThisPlayersTurn;
		int					m_nTurnNumber;
		NodeId				m_NodeId;
		counted_ptr<CTask>	m_cpTask;

		bool operator==(const TaskEntry& entry) const
		{
			return 
				m_pThisPlayersTurn == entry.m_pThisPlayersTurn &&
				m_nTurnNumber == entry.m_nTurnNumber &&
				m_NodeId == entry.m_NodeId &&
				m_cpTask == entry.m_cpTask;
		}
	};

	class CTaskContainer
		: public CValueContainerBase_<TaskEntry>
	{
	public:
		CTaskContainer()
		{}

		virtual ~CTaskContainer()
		{
			RemoveSavedState();
		}

	private:
		PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
		{
			int nCount = GetSize();
			for (int i = nCount - 1; i >= 0; --i)
			{
				const TaskEntry& entry = GetAt(i);

				stateStack.AddTail((PVOID)entry.m_pThisPlayersTurn);
				stateStack.AddTail((PVOID)entry.m_nTurnNumber);
				stateStack.AddTail((PVOID)entry.m_NodeId.Get());

				CTask* pTask = entry.m_cpTask.GetPointer();
				stateStack.AddTail(pTask);
				pTask->AddRef();
			}

			stateStack.AddTail((PVOID)nCount);
		}

		PRIVATE_OVERRIDE(void, Pop)()
		{
			__super::RemoveAllImpl();

			int nCount = (int)m_Stack.RemoveTail();
			for (int i = 0; i < nCount; ++i)
			{
				TaskEntry entry;
				
				CTask* pTask = (CTask*)m_Stack.RemoveTail();
				entry.m_cpTask = counted_ptr<CTask>(pTask);
				pTask->Release();

				entry.m_NodeId = (NodeId::Enum)(DWORD)m_Stack.RemoveTail();
				entry.m_nTurnNumber = (int)m_Stack.RemoveTail();
				entry.m_pThisPlayersTurn = (const CPlayer*)m_Stack.RemoveTail();

				__super::AddImpl(entry);
			}
		}

		PRIVATE_OVERRIDE(void, Peek)()
		{
			__super::RemoveAllImpl();

			StateStack::Position pos = m_Stack.GetTailPosition();

			int nCount = (int)m_Stack.GetPrev(pos);
			for (int i = 0; i < nCount; ++i)
			{
				TaskEntry entry;
				
				CTask* pTask = (CTask*)m_Stack.GetPrev(pos);
				entry.m_cpTask = counted_ptr<CTask>(pTask);
				entry.m_NodeId = (NodeId::Enum)(DWORD)m_Stack.GetPrev(pos);
				entry.m_nTurnNumber = (int)m_Stack.GetPrev(pos);
				entry.m_pThisPlayersTurn = (const CPlayer*)m_Stack.GetPrev(pos);

				__super::AddImpl(entry);
			}
		}

#ifdef THINK_HISTORY
		PRIVATE_OVERRIDE(void, Cleanup)(const StateStack& stateStack, StateStack::Position pos)
		{
			int nCount = (int)stateStack.GetPrev(pos);
			for (int i = 0; i < nCount; ++i)
			{
				CTask* pTask = (CTask*)stateStack.GetPrev(pos);
				if (pTask)
					pTask->Release();
				stateStack.GetPrev(pos); // m_NodeId
				stateStack.GetPrev(pos); // m_nTurnNumber
				stateStack.GetPrev(pos); // m_pThisPlayersTurn
			}
		}
#endif
	};

	void OnTimer(CNode* pFromNode, CNode* pToNode);

	CGame*				m_pGame;
	CTaskContainer		m_Tasks;
	ListenerPtr<CPtrEventSource<CNode>::Listener>	m_cpListener;
};