#pragma once

class CCard;
class CActionContainer;
class CAction;

//____________________________________________________________________________
//
struct SelectionRequest
{
	SelectionRequest()
		: m_nMinSelectionCount(0)
		, m_nMaxSelectionCount(0)
		, m_nSelectedCount(0)
		, m_dwContext1(0)
		, m_dwContext2(0)
		, m_dwContext3(0)
		, m_dwContext4(0)
		, m_dwContext5(0)
		, m_pSelectionPlayer(NULL)
		, m_cpOriginatingCard(NULL)
	{}

	bool operator==(const SelectionRequest& request) const
	{
		return request.m_Entries == m_Entries &&
			request.m_nMinSelectionCount == m_nMinSelectionCount &&
			request.m_nMaxSelectionCount == m_nMaxSelectionCount &&
			request.m_nSelectedCount == m_nSelectedCount &&
			request.m_dwContext1 == m_dwContext1 &&
			request.m_dwContext2 == m_dwContext2 &&
			request.m_dwContext3 == m_dwContext3 &&
			request.m_dwContext4 == m_dwContext4 &&
			request.m_dwContext5 == m_dwContext5 &&
			request.m_cpNotifySelection == m_cpNotifySelection &&
			request.m_pSelectionPlayer == m_pSelectionPlayer &&
			request.m_cpOriginatingCard == m_cpOriginatingCard;
	}

	CSelectionEntryContainer	m_Entries;

	int		m_nMinSelectionCount;
	int		m_nMaxSelectionCount;
	int		m_nSelectedCount;
	DWORD	m_dwContext1;
	DWORD	m_dwContext2;
	DWORD	m_dwContext3;
	DWORD	m_dwContext4;
	DWORD	m_dwContext5;

	counted_ptr<SelectionEventSource::Listener>	m_cpNotifySelection;
	CPlayer*			m_pSelectionPlayer;
	counted_ptr<CCard>	m_cpOriginatingCard;
};

//____________________________________________________________________________
//
class CSelectionGroupContainer_
	: public CValueContainerBase_<SelectionRequest>
{
public:
	CSelectionGroupContainer_()
	{}

	virtual ~CSelectionGroupContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nRequestCount = GetSize();
		for (int j = nRequestCount - 1; j >= 0; --j)
		{
			SelectionRequest request = GetAt(j);

			int nCount = request.m_Entries.GetSize();
			for (int i = nCount - 1; i >= 0; --i)
			{
				SelectionEntry entry = request.m_Entries.GetAt(i);

				CString* pStr = new CString(entry.strText);
				stateStack.AddTail((PVOID)pStr);
				stateStack.AddTail((PVOID)entry.dwContext);
				stateStack.AddTail((PVOID)entry.cpAssociatedCard.GetPointer());
				entry.cpAssociatedCard.AddRef();
				stateStack.AddTail((PVOID)entry.bSelected);
				stateStack.AddTail((PVOID)entry.nSelectionOrder);
				stateStack.AddTail((PVOID)entry.cpAssociatedAction.GetPointer());
				entry.cpAssociatedAction.AddRef();
				stateStack.AddTail((PVOID)entry.pAssociatedPlayer);
			}

			stateStack.AddTail((PVOID)nCount);

			stateStack.AddTail((PVOID)request.m_nMinSelectionCount);
			stateStack.AddTail((PVOID)request.m_nMaxSelectionCount);
			stateStack.AddTail((PVOID)request.m_nSelectedCount);
			stateStack.AddTail((PVOID)request.m_dwContext1);
			stateStack.AddTail((PVOID)request.m_dwContext2);
			stateStack.AddTail((PVOID)request.m_dwContext3);
			stateStack.AddTail((PVOID)request.m_dwContext4);
			stateStack.AddTail((PVOID)request.m_dwContext5);

			stateStack.AddTail((PVOID)request.m_cpNotifySelection.GetPointer());
			request.m_cpNotifySelection.AddRef();

			stateStack.AddTail((PVOID)request.m_cpOriginatingCard.GetPointer());
			request.m_cpOriginatingCard.AddRef();

			stateStack.AddTail((PVOID)request.m_pSelectionPlayer);
		}

		stateStack.AddTail((PVOID)nRequestCount);
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CValueContainer<SelectionRequest>::RemoveAllImpl();

		int nRequestCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nRequestCount; ++i)
		{
			SelectionRequest request;

			request.m_pSelectionPlayer = reinterpret_cast<CPlayer*>(m_Stack.RemoveTail());

			request.m_cpOriginatingCard = counted_ptr<CCard>(reinterpret_cast<CCard*>(m_Stack.RemoveTail()));
			request.m_cpOriginatingCard.Release();

			request.m_cpNotifySelection= counted_ptr<SelectionEventSource::Listener>(
				reinterpret_cast<SelectionEventSource::Listener*>(m_Stack.RemoveTail()));
			request.m_cpNotifySelection.Release();

			request.m_dwContext5 = (DWORD)m_Stack.RemoveTail();
			request.m_dwContext4 = (DWORD)m_Stack.RemoveTail();
			request.m_dwContext3 = (DWORD)m_Stack.RemoveTail();
			request.m_dwContext2 = (DWORD)m_Stack.RemoveTail();
			request.m_dwContext1 = (DWORD)m_Stack.RemoveTail();

			request.m_nSelectedCount = (int)m_Stack.RemoveTail();
			request.m_nMaxSelectionCount = (int)m_Stack.RemoveTail();
			request.m_nMinSelectionCount = (int)m_Stack.RemoveTail();

			int nEntryCount = (int)m_Stack.RemoveTail();

			for (int j = 0; j < nEntryCount; ++j)
			{
				SelectionEntry entry;

				entry.pAssociatedPlayer = reinterpret_cast<CPlayer*>(m_Stack.RemoveTail());
				entry.cpAssociatedAction = reinterpret_cast<CAction*>(m_Stack.RemoveTail());
				entry.cpAssociatedAction.Release();
				entry.nSelectionOrder = (int)m_Stack.RemoveTail();
				entry.bSelected = (BOOL)m_Stack.RemoveTail();
				entry.cpAssociatedCard = reinterpret_cast<CCard*>(m_Stack.RemoveTail());
				entry.cpAssociatedCard.Release();
				entry.dwContext = (DWORD)m_Stack.RemoveTail();
				CString* pStr = (CString*)m_Stack.RemoveTail();
				if (pStr)
				{
					entry.strText = *pStr;
					delete pStr;
				}
				request.m_Entries.Add(entry);
			}

			CValueContainer<SelectionRequest>::AddImpl(request);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		StateStack::Position pos = m_Stack.GetTailPosition();

		CValueContainer<SelectionRequest>::RemoveAllImpl();

		int nRequestCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nRequestCount; ++i)
		{
			SelectionRequest request;

			request.m_pSelectionPlayer = reinterpret_cast<CPlayer*>(m_Stack.GetPrev(pos));

			request.m_cpOriginatingCard = counted_ptr<CCard>(reinterpret_cast<CCard*>(m_Stack.GetPrev(pos)));

			request.m_cpNotifySelection= counted_ptr<SelectionEventSource::Listener>(
				reinterpret_cast<SelectionEventSource::Listener*>(m_Stack.GetPrev(pos)));

			request.m_dwContext5 = (DWORD)m_Stack.GetPrev(pos);
			request.m_dwContext4 = (DWORD)m_Stack.GetPrev(pos);
			request.m_dwContext3 = (DWORD)m_Stack.GetPrev(pos);
			request.m_dwContext2 = (DWORD)m_Stack.GetPrev(pos);
			request.m_dwContext1 = (DWORD)m_Stack.GetPrev(pos);

			request.m_nSelectedCount = (int)m_Stack.GetPrev(pos);
			request.m_nMaxSelectionCount = (int)m_Stack.GetPrev(pos);
			request.m_nMinSelectionCount = (int)m_Stack.GetPrev(pos);

			int nEntryCount = (int)m_Stack.GetPrev(pos);

			for (int j = 0; j < nEntryCount; ++j)
			{
				SelectionEntry entry;

				entry.pAssociatedPlayer = reinterpret_cast<CPlayer*>(m_Stack.GetPrev(pos));
				entry.cpAssociatedAction = reinterpret_cast<CAction*>(m_Stack.GetPrev(pos));
				entry.nSelectionOrder = (int)m_Stack.GetPrev(pos);
				entry.bSelected = (BOOL)m_Stack.GetPrev(pos);
				entry.cpAssociatedCard = reinterpret_cast<CCard*>(m_Stack.GetPrev(pos));
				entry.dwContext = (DWORD)m_Stack.GetPrev(pos);
				CString* pStr = (CString*)m_Stack.GetPrev(pos);
				if (pStr)
					entry.strText = *pStr;

				request.m_Entries.Add(entry);
			}

			CValueContainer<SelectionRequest>::AddImpl(request);
		}
	}

#ifdef THINK_HISTORY
	PRIVATE_OVERRIDE(void, Cleanup)(const StateStack& stateStack, StateStack::Position pos);
#endif
};

//____________________________________________________________________________
//
class CORE_EXPORT CSelection
{
public:
	CSelection::CSelection(CGame* pGame)
		: m_pGame(pGame)
		, m_cpSelectionEventSource(::CreateObject<SelectionEventSource>(VAR_NAME(m_cpSelectionEventSource)))
		, m_pPriorityPlayer(NULL)
	{
	}

	void AddSelectionRequest(SelectionEventSource::Listener* pNotifySelection,
							 const std::vector<SelectionEntry>& entries,
							 int nMinSelectionCount,
							 int nMaxSelectionCount,
							 CCard* pOriginatingCard,
							 CPlayer* pSelectionPlayer,
							 DWORD dwContext1 = 0,
							 DWORD dwContext2 = 0,
							 DWORD dwContext3 = 0,
							 DWORD dwContext4 = 0,
							 DWORD dwContext5 = 0,
							 BOOL bFront = FALSE);

	bool Pending() const { return m_Requests.GetSize() != 0; }

	void Select(int nIndex);

	void GetSelectionActionContainer(CActionContainer& actionContainer);

	BOOL HasTarget(const CCard* pCard) const;
	BOOL HasTargetedCards(const CPlayer* pControlledBy) const;
	BOOL HasTargetedCreatures(const CPlayer* pControlledBy) const;
	BOOL HasTarget(const CPlayer* pPlayer) const;
	BOOL HasOtherCardTargets(const CPlayer* pExceptControlledBy) const;
	BOOL HasOtherCreatureTargets(const CPlayer* pExceptControlledBy) const;
	BOOL HasOtherPlayerTargets(const CPlayer* pExceptThisPlayer) const;

protected:
	void ProcessNextRequest(BOOL bCompleteStackResolution);
	void NotifySelection(const SelectionRequest& request);

	CGame* m_pGame;

	CSelectionGroupContainer_	m_Requests;

	CStateSupportCountedPtrType<SelectionEventSource>	m_cpSelectionEventSource;
	CStateSupportPtrType<CPlayer>						m_pPriorityPlayer;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSelectionSupport
{
public:
	typedef SelectionEventSource::Listener::EventCallback SelectionCallback;

	CSelectionSupport(CGame* pGame, SelectionCallback selectionCallback);
	virtual ~CSelectionSupport();

	void AddSelectionRequest(const std::vector<SelectionEntry>& entries,
							 int nMinSelectionCount,
							 int nMaxSelectionCount,
							 CCard* pOriginatingCard,
							 CPlayer* pSelectionPlayer,
							 DWORD dwContext1 = 0,
							 DWORD dwContext2 = 0,
							 DWORD dwContext3 = 0,
							 DWORD dwContext4 = 0,
							 DWORD dwContext5 = 0);

protected:
	CGame* m_pGame;
	counted_ptr<SelectionEventSource::Listener>		m_cpSelectionListener;
};