#include "stdafx.h"

#define new DEBUG_NEW

#ifdef _MY_DEBUG
//#define TRACE_CHECKPOINTS
//#define TRACE_CHANGES
#endif

#ifdef THINK_HISTORY
//____________________________________________________________________________
//
CGameState::~CGameState()
{
/*
		variables		states
		<begin/oldest>	<begin/oldest>
		v2				v2-state
						v2-count
		v1				v1-state
						v1-count
		<end/newest>	<end/newest>
*/

	StateStack::Position pos = m_States.GetTailPosition();
	for (std::list<CStateSupport*>::const_reverse_iterator i = m_Variables.rbegin(); i != m_Variables.rend(); ++i)
	{
		unsigned int nCount = (unsigned int)m_States.GetPrev(pos);
		(*i)->Cleanup(m_States, pos);
		pos -= nCount;
	}

	ATLASSERT(pos == m_States.GetHeadPosition());
}

void CGameState::UpdateChecksum()
{
	m_dwChecksum = 0;
	unsigned char s = 0;
	for (std::list<CStateSupport*>::const_reverse_iterator i = m_Variables.rbegin(); i != m_Variables.rend(); ++i)
		m_dwChecksum ^= (((DWORD)*i) << s++);

	for (StateStack::Position pos = m_States.GetTailPosition(); pos != m_States.GetHeadPosition();)
		m_dwChecksum ^= ((DWORD)m_States.GetPrev(pos) << s++);
}

bool CGameState::operator==(const CGameState& gameState) const
{
	if (m_dwChecksum != gameState.m_dwChecksum)
		return false;

	if (!m_Variables.size() || !m_States.GetCount())
		return false;

	if (m_Variables != gameState.m_Variables)
		return false;

	return m_States == gameState.m_States;
}
#endif

//____________________________________________________________________________
//
CStateManager::CStateManager()
	: m_bRestoring(false)
{
	m_CheckPoints.reserve(32);
	m_FreeList.reserve(32);
}

CStateManager::~CStateManager()
{
	ATLASSERT(!m_CheckPoints.size());

	for (CheckPoints::reverse_iterator it = m_CheckPoints.rbegin();
		it != m_CheckPoints.rend();
		++it)
	{
		CheckedVariables* pVars = *it;

		for (CheckedVariables::iterator it2 = pVars->begin(); it2 != pVars->end(); ++it2)
			(*it2)->SetStateManager(NULL);
	}

	ClearFreeList();
}

void CStateManager::Push()
{
#ifdef TRACE_CHECKPOINTS
	ATLTRACE(_T("### Pushing Check Point...(m_CheckPoints.size() = %d)\n"), m_CheckPoints.size());
#endif

	CheckedVariables* pVars = NULL;
	if (m_FreeList.size())
	{
		pVars = m_FreeList.back();
		m_FreeList.pop_back();
	}
	else
		pVars = new CheckedVariables;

	m_CheckPoints.push_back(pVars);
}	

void CStateManager::Pop()
{
#ifdef TRACE_CHECKPOINTS
	ATLTRACE(_T("### Popping Check Point...(m_CheckPoints.size() = %d)\n"), m_CheckPoints.size());
#endif

	if (!m_CheckPoints.size())
	{
		ATLASSERT(false);
		return;						// Not pushed?
	}

	m_bRestoring = true;

	CheckedVariables* pVars = m_CheckPoints.back();
	m_ProcessingVariables = *pVars;

#ifdef TRACE_CHECKPOINTS
	ATLTRACE(_T("###  Popping %d variables...\n"), m_ProcessingVariables.size());
#endif

	pVars->clear();
	m_FreeList.push_back(pVars);

	m_CheckPoints.pop_back();
	
	while (m_ProcessingVariables.size())
	{
		CStateSupport* pVar = m_ProcessingVariables.back();

#ifdef TRACE_CHECKPOINTS
		ATLTRACE(_T("###  Popping variable %s:%s(%p).\n"), pVar->m_strTypeName, pVar->m_strDisplayName, pVar);
#endif

		m_ProcessingVariables.pop_back();

		pVar->Pop();
	}

	m_bRestoring = false;
}

void CStateManager::Peek()
{
#ifdef TRACE_CHECKPOINTS
	ATLTRACE(_T("### Peeking Check Point...(m_CheckPoints.size() = %d)\n"), m_CheckPoints.size());
#endif

	if (!m_CheckPoints.size())
		return;						// Not pushed?

	m_bRestoring = true;

	m_ProcessingVariables = *(m_CheckPoints.back());
#ifdef TRACE_CHECKPOINTS
	ATLTRACE(_T("###  Peeking %d variables...\n"), m_ProcessingVariables.size());
#endif

	while (m_ProcessingVariables.size())
	{
		CStateSupport* pVar = m_ProcessingVariables.back();
			
#ifdef TRACE_CHECKPOINTS
		ATLTRACE(_T("###  Peeking at variable %s:%s(%p).\n"), pVar->m_strTypeName, pVar->m_strDisplayName, pVar);
#endif

		m_ProcessingVariables.pop_back();

		pVar->Peek();
	}

	m_bRestoring = false;
}

void CStateManager::Created(CStateSupport* pVariable)
{
	/* Disabled to support CounterContainer and Counter's style of 'lazy' state management
	if (m_bRestoring || !m_CheckPoints.size())
		return;

	m_Creations.insert(pVariable);
	*/
}

bool CStateManager::StateSaved(CStateSupport* pVariable) const
{
	if (!m_CheckPoints.size())
		return false;

	const CheckedVariables* pVars = m_CheckPoints.back();
	for (CheckedVariables::const_reverse_iterator it = pVars->rbegin(); it != pVars->rend(); ++it)
		if (*it == pVariable)
			return true;

	return false;
}

void CStateManager::RemoveSavedState(CStateSupport* pVariable, bool bPop)
{
	for (CheckPoints::reverse_iterator it = m_CheckPoints.rbegin();
		it != m_CheckPoints.rend();
		++it)
	{
		CheckedVariables* pVars = *it;

		for (CheckedVariables::iterator it2 = pVars->begin(); it2 != pVars->end(); ++it2)
			if (*it2 == pVariable)
			{
				if (bPop)
					pVariable->Pop();
				pVars->erase(it2);
				break;
			}
	}

	for (int i = m_ProcessingVariables.size() - 1; i >= 0; --i)
		if (m_ProcessingVariables[i] == pVariable)
			m_ProcessingVariables.erase(m_ProcessingVariables.begin() + i);
}

void CStateManager::SetModified(CStateSupport* pVariable)
{
	if (m_bRestoring || !m_CheckPoints.size())
		return;						// Not pushed?

	CheckedVariables* pVars = m_CheckPoints.back();

#ifdef TRACE_CHANGES
	pVariable->m_strTypeName = typeid(*pVariable).name();

	ATLTRACE(_T("### Variable changed %s:%s(%p)...\n"), pVariable->m_strTypeName, (*it)->m_strDisplayName, pVariable);
#endif

	bool bFound = false;
	for (CheckedVariables::const_reverse_iterator it = pVars->rbegin(); it != pVars->rend(); ++it)
		if (*it == pVariable)
		{
			bFound = true;
			break;
		}

	if (!bFound)
	{
#ifdef TRACE_CHANGES
		ATLTRACE(_T("###  Pushing variable %s:%s(%p)...\n"), pVariable->m_strTypeName, (*it)->m_strDisplayName, pVariable);
#endif

		pVariable->Push(pVariable->m_Stack);

		pVars->push_back(pVariable);

#ifdef GATHER_CHANGED_VARIABLE_STATS
		++m_pGame->m_TS.m_nCurrentChangedVariableCount;
#endif
	}
	else
	{
#ifdef TRACE_CHANGES
		ATLTRACE(_T("###  Variable already pushed %s:%s(%p).\n"), pVariable->m_strTypeName, (*it)->m_strDisplayName, pVariable);
#endif	
	}

}

#ifdef THINK_HISTORY
/*
		variables		states
		<begin/oldest>	<begin/oldest>
		v2				v2-state
						v2-count
		v1				v1-state
						v1-count
		<end/newest>	<end/newest>
*/
void CStateManager::GetGameState(CGameState& gameState, bool bThinkHistory) const
{
	std::list<CStateSupport*>& variables(gameState.Variables());
	std::set<CStateSupport*> variables2;
	
	for (CheckPoints::const_reverse_iterator i = m_CheckPoints.rbegin(); i != m_CheckPoints.rend(); ++i)
	{
		const CheckedVariables& checkedVariables(*i);
		for (CheckedVariables::const_reverse_iterator j = checkedVariables.rbegin(); j != checkedVariables.rend(); ++j)
		{
			if (bThinkHistory)
			{
				bool bUse = (*j)->GetUseInThinkHistory();
				if (!bUse)
					continue;
			}

			if (!variables2.count(*j))
			{
				variables.push_front(*j);
				variables2.insert(*j);
			}
		}
	}

	StateStack& states(gameState.States());
	unsigned int nPrevCount = 0;
	for (std::list<CStateSupport*>::const_iterator i = variables.begin(); i != variables.end(); ++i)
	{
		(*i)->Push(states);
		unsigned int nNewCount = states.GetCount();
		ATLASSERT(nNewCount - nPrevCount);
		states.AddTail((PVOID)(nNewCount - nPrevCount));
		nPrevCount = nNewCount + 1;
	}

	gameState.UpdateChecksum();
}
#endif