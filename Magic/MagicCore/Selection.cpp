#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
#ifdef THINK_HISTORY
void CSelectionGroupContainer_::Cleanup(const StateStack& stateStack, StateStack::Position pos)
{
	int nRequestCount = (int)stateStack.GetPrev(pos);
	for (int i = 0; i < nRequestCount; ++i)
	{
		stateStack.GetPrev(pos); // m_pSelectionPlayer

		SelectionEventSource::Listener* pListener = reinterpret_cast<SelectionEventSource::Listener*>(stateStack.GetPrev(pos));
		if (pListener)
			pListener->Release();

		stateStack.GetPrev(pos); // m_dwContext5
		stateStack.GetPrev(pos);
		stateStack.GetPrev(pos);
		stateStack.GetPrev(pos);
		stateStack.GetPrev(pos); // m_dwContext1

		stateStack.GetPrev(pos); // m_nSelectedCount
		stateStack.GetPrev(pos); // m_nMaxSelectionCount
		stateStack.GetPrev(pos); // m_nMinSelectionCount

		int nEntryCount = (int)stateStack.GetPrev(pos);

		for (int j = 0; j < nEntryCount; ++j)
		{
			CAction* pAction = reinterpret_cast<CAction*>(stateStack.GetPrev(pos));
			if (pAction)
				pAction->Release();

			stateStack.GetPrev(pos); // nSelectionOrder
			stateStack.GetPrev(pos); // bSelected
			stateStack.GetPrev(pos); // pAssociatedCard
			stateStack.GetPrev(pos); // dwContext
			CString* pStr = (CString*)stateStack.GetPrev(pos);
			if (pStr)
				delete pStr;
		}
	}
}
#endif

//____________________________________________________________________________
//

void CSelection::AddSelectionRequest(SelectionEventSource::Listener* pNotifySelection,
									 const std::vector<SelectionEntry>& entries,
									 int nMinSelectionCount,
									 int nMaxSelectionCount,
									 CCard* pOriginatingCard,
									 CPlayer* pSelectionPlayer,
									 DWORD dwContext1,
									 DWORD dwContext2,
									 DWORD dwContext3,
									 DWORD dwContext4,
									 DWORD dwContext5,
									 BOOL bFront)
{
#ifdef _MY_DEBUG
	ATLASSERT(entries.size());
	ATLASSERT((nMinSelectionCount >= 0) && (static_cast<unsigned>(nMinSelectionCount) <= entries.size()));
	ATLASSERT((nMaxSelectionCount == SpecialNumber::Any) || (nMaxSelectionCount > 0));
	ATLASSERT(pNotifySelection);
#endif

	if (!entries.size() ||
		!((nMinSelectionCount >= 0) && (static_cast<unsigned>(nMinSelectionCount) <= entries.size())) ||
		!((nMaxSelectionCount == SpecialNumber::Any) || (nMaxSelectionCount > 0)) ||
		!pNotifySelection)
	{
		m_pGame->Log(_T("Invalid selection configuration\n"));
		return;
	}

	SelectionRequest request;

	for (std::vector<SelectionEntry>::const_iterator it = entries.begin(); it != entries.end(); ++it)
	{
		ATLASSERT(!it->bSelected && (it->nSelectionOrder == -1));
		request.m_Entries.Add(*it);
	}

	request.m_nMinSelectionCount = nMinSelectionCount;
	request.m_nMaxSelectionCount = nMaxSelectionCount;
	if (request.m_nMaxSelectionCount == SpecialNumber::Any)
		request.m_nMaxSelectionCount = entries.size();
		
	request.m_pSelectionPlayer = pSelectionPlayer;

	request.m_cpOriginatingCard = pOriginatingCard;//counted_ptr<CCard>(pOriginatingCard);

	request.m_dwContext1 = dwContext1;
	request.m_dwContext2 = dwContext2;
	request.m_dwContext3 = dwContext3;
	request.m_dwContext4 = dwContext4;
	request.m_dwContext5 = dwContext5;

	request.m_cpNotifySelection = counted_ptr<SelectionEventSource::Listener>(pNotifySelection);

	if (!m_pPriorityPlayer)
		m_pPriorityPlayer = m_pGame->GetPriorityPlayer();

	if (bFront || pSelectionPlayer == m_pPriorityPlayer)
		m_Requests.InsertAt(0, request);	
	else
		m_Requests.Add(request);	
}

void CSelection::Select(int nIndex)
{
	ATLASSERT(m_Requests.GetSize());

	SelectionRequest request = m_Requests.GetAt(0);

	if (nIndex != -1)
	{
#ifdef _MY_DEBUG
		int nEntryCount = request.m_Entries.GetSize();

		if (false)
		{
			for (int i = 0; i < nEntryCount; ++i)
			{
				SelectionEntry entry = request.m_Entries.GetAt(i);
				ATLTRACE(_T("%d) %s - sel:%d - order:%d - card:%p - context:%p\n"),
					i,
					entry.strText,
					entry.bSelected,
					entry.nSelectionOrder,
					entry.cpAssociatedCard,//entry.cpAssociatedCard.GetPointer(),
					entry.dwContext);
			}
		}

		ATLASSERT(nIndex < nEntryCount);
#endif

		SelectionEntry entry = request.m_Entries.GetAt(nIndex);

		ATLASSERT(!entry.bSelected);
		ATLASSERT(request.m_nSelectedCount < request.m_nMaxSelectionCount);

		entry.bSelected = TRUE;
		entry.nSelectionOrder = request.m_nSelectedCount;
		++request.m_nSelectedCount;

		request.m_Entries.SetAt(nIndex, entry);

		m_Requests.SetAt(0, request);

		// A targeting selection entry? See also CStack::AddAction()

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);
			if (pTargetAction->GetTargetGroup().GetSubjectCount())
			{
				m_pGame->GetTargetSubjectEventSource()->FireEvent(pTargetAction->GetTargetGroup(), pAssociatedAction->GetOriginatingCard()->GetController());
				for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
								it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

				{
					if (it->GetPointer()->GetZoneId() == ZoneId::Battlefield) const_cast<CCard*>(it->GetPointer())->IncreaseTargetedNumber();					
				}
			}
		}

		if ((request.m_nSelectedCount >= request.m_nMinSelectionCount) && 
			(request.m_nSelectedCount == request.m_nMaxSelectionCount))
			NotifySelection(request);
	}
	else
	{
		// User selected 'finish selection'

		ATLASSERT((request.m_nSelectedCount >= request.m_nMinSelectionCount) && (request.m_nSelectedCount < request.m_nMaxSelectionCount));

		NotifySelection(request);
	}
}

void CSelection::NotifySelection(const SelectionRequest& request)
{
	int nEntryCount = request.m_Entries.GetSize();

	// Add both selected or unselecteed entries into the event parameter
	std::vector<SelectionEntry> entries;
	if (request.m_nSelectedCount > 0)
	{
		entries.resize(request.m_nSelectedCount);

		for (int i = 0; i < nEntryCount; ++i)
		{
			SelectionEntry entry = request.m_Entries.GetAt(i);
			if (entry.bSelected)
			{
				ATLASSERT(entry.nSelectionOrder < request.m_nSelectedCount);
				entries[entry.nSelectionOrder] = entry;	// Sort by selection order
			}
			else
				entries.push_back(entry);
		}
	}
	else
		for (int i = 0; i < nEntryCount; ++i)
		{
			SelectionEntry entry = request.m_Entries.GetAt(i);
			ATLASSERT(!entry.bSelected);
			entries.push_back(entry);
		}

	BOOL bCompleteStackResolution = m_pGame->GetStack().ResolutionCompletionPending();
	m_Requests.RemoveAt(0);

	ATLASSERT(m_cpSelectionEventSource->GetListenerCount() == 0);

	m_cpSelectionEventSource->AddListener(request.m_cpNotifySelection.GetPointer());

	m_cpSelectionEventSource->FireEvent(
		entries, request.m_nSelectedCount, request.m_pSelectionPlayer,
		request.m_dwContext1, request.m_dwContext2, request.m_dwContext3,
		request.m_dwContext4, request.m_dwContext5);

	m_cpSelectionEventSource->RemoveAllListeners();

	ProcessNextRequest(bCompleteStackResolution);
}

void CSelection::ProcessNextRequest(BOOL bCompleteStackResolution)
{
	if (!m_Requests.GetSize())
	{
		if (m_pPriorityPlayer &&
			m_pGame->GetPriorityPlayer() != m_pPriorityPlayer)
			m_pGame->SetPriorityPlayer(m_pPriorityPlayer);

		m_pPriorityPlayer = NULL;

		// Added to support Thieves' Auction
		if (bCompleteStackResolution)
			m_pGame->GetStack().OnResolutionCompleted();
	}
}

void CSelection::GetSelectionActionContainer(CActionContainer& actionContainer)
{
	ATLASSERT(!actionContainer.GetSize());

	if (!m_Requests.GetSize())
		return;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();

	if (!nEntryCount)
	{
		ATLASSERT(false);
		BOOL bCompleteStackResolution = m_pGame->GetStack().ResolutionCompletionPending();
		m_Requests.RemoveAt(0);
		ProcessNextRequest(bCompleteStackResolution);
		GetSelectionActionContainer(actionContainer);
		return;
	}

	int nTrickCount = 0;

	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		//ATLTRACE(_T("%d) %s\n"), i, entry.strText);

		if (entry.cpAssociatedAction.GetPointer())
		{
			entry.cpAssociatedAction->SetSelectionIndex(i);
			if (entry.cpAssociatedAction->IsTrick())
				++nTrickCount;

			actionContainer.Add(entry.cpAssociatedAction.GetPointer());
		}
		else
		{
			counted_ptr<CAction> cpAction = ::CreateObject<CAction>(m_pGame);
			cpAction->SetSelectionIndex(i);
			cpAction->SetOriginatingCard(request.m_cpOriginatingCard.GetPointer());
			cpAction->SetAssociatedCard(entry.cpAssociatedCard.GetPointer());
			cpAction->SetAssociatedPlayer(entry.pAssociatedPlayer);
			cpAction->SetActionName(entry.strText);
			if (entry.bTrick)
			{
				cpAction->SetTrick();
				++nTrickCount;
			}

			actionContainer.Add(cpAction.GetPointer());

			/*
			counted_ptr<CSelectionAction> cpAction = ::CreateObject<CSelectionAction>();
			cpAction->SetSelectionIndex(i);
			cpAction->SetOriginatingCard(request.m_cpOriginatingCard.GetPointer());
			cpAction->SetAssociatedCard(entry.cpAssociatedCard.GetPointer());
			cpAction->SetAssociatedPlayer(entry.pAssociatedPlayer);
			cpAction->SetActionName(entry.strText);
			if (entry.bTrick)
			{
				cpAction->SetTrick();
				++nTrickCount;
			}*/		
		}
	}

	ATLASSERT(nTrickCount < nEntryCount);

#ifdef _MY_DEBUG
	if (!actionContainer.GetSize())
	{
		for (int i = 0; i < nEntryCount; ++i)
		{
			SelectionEntry entry = request.m_Entries.GetAt(i);

			ATLTRACE(_T("%d) %s - sel:%d - order:%d - card:%p - context:%p\n"),
				i,
				entry.strText,
				entry.bSelected,
				entry.nSelectionOrder,
				entry.cpAssociatedCard,//entry.cpAssociatedCard.GetPointer(),
				entry.dwContext);
		}
	}
#endif

	ATLASSERT(actionContainer.GetSize());

	if (request.m_nSelectedCount >= request.m_nMinSelectionCount)
	{
		//counted_ptr<CSelectionAction> cpAction = ::CreateObject<CSelectionAction>();
		counted_ptr<CAction> cpAction = ::CreateObject<CAction>(m_pGame);
		cpAction->SetSelectionIndex(-1);	// Done with selection
		cpAction->SetActionName(_T("finishes selection"));

		actionContainer.Add(cpAction.GetPointer());
	}
	else
		if (nTrickCount >= nEntryCount)
		{
			for (int i = 0; i < actionContainer.GetSize(); ++i)
				actionContainer.GetAt(i)->SetTrick(FALSE);
		}

	if (m_pGame->IsThinking())
	{
		for (int i = actionContainer.GetSize() - 1; i >= 0; --i)
			if (actionContainer.GetAt(i)->IsTrick())
				actionContainer.RemoveAt(i);
	}

	if (request.m_pSelectionPlayer != m_pGame->GetPriorityPlayer())
		m_pGame->SetPriorityPlayer(request.m_pSelectionPlayer);
}

BOOL CSelection::HasTarget(const CCard* pCard) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasSubject(pCard))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CSelection::HasTargetedCards(const CPlayer* pControlledBy) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasControlledCards(pControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CSelection::HasTargetedCreatures(const CPlayer* pControlledBy) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasControlledCreatures(pControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CSelection::HasOtherCardTargets(const CPlayer* pExactControlledBy) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasOtherCardSubjects(pExactControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CSelection::HasOtherCreatureTargets(const CPlayer* pExactControlledBy) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasOtherCreatureSubjects(pExactControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CSelection::HasTarget(const CPlayer* pPlayer) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasSubject(pPlayer))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CSelection::HasOtherPlayerTargets(const CPlayer* pExceptThisPlayer) const
{
	if (!m_Requests.GetSize())
		return FALSE;

	SelectionRequest request = m_Requests.GetAt(0);

	int nEntryCount = request.m_Entries.GetSize();
	for (int i = 0; i < nEntryCount; ++i)
	{
		SelectionEntry entry = request.m_Entries.GetAt(i);

		if (entry.bSelected)
			continue;

		CAction* pAssociatedAction = entry.cpAssociatedAction.GetPointer();
		if (pAssociatedAction && pAssociatedAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAssociatedAction);
			ATLASSERT(pTargetAction);

			if (pTargetAction->GetTargetGroup().HasOtherPlayerSubjects(pExceptThisPlayer))
				return TRUE;
		}
	}	

	return FALSE;
}

//____________________________________________________________________________
//
CSelectionSupport::CSelectionSupport(CGame* pGame, SelectionCallback selectionCallback)
	: m_pGame(pGame)
	, m_cpSelectionListener(
		::CreateObject<SelectionEventSource::Listener>(VAR_NAME(m_cpSelectionListener)))
{
	m_cpSelectionListener->SetEventCallback(selectionCallback);
}

CSelectionSupport::~CSelectionSupport()
{
	m_cpSelectionListener->SetEventCallback(SelectionEventSource::Listener::EventCallback());

	if (m_pGame && m_pGame->IsRestoring())
		return;

	if (m_cpSelectionListener.GetPointer())
		m_cpSelectionListener.GetPointer()->RemoveAllEventSources();
}

void CSelectionSupport::AddSelectionRequest(const std::vector<SelectionEntry>& entries,
						 int nMinSelectionCount,
						 int nMaxSelectionCount,
						 CCard* pOriginatingCard,
						 CPlayer* pSelectionPlayer,
						 DWORD dwContext1,
						 DWORD dwContext2,
						 DWORD dwContext3,
						 DWORD dwContext4,
						 DWORD dwContext5)
{
	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries,
		nMinSelectionCount,
		nMaxSelectionCount,
		pOriginatingCard,
		pSelectionPlayer,
		dwContext1,
		dwContext2,
		dwContext3,
		dwContext4,
		dwContext5);
}
