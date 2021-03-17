#include "stdafx.h"

#define new DEBUG_NEW

/*
//____________________________________________________________________________
//
CTriggeredStackAction::CTriggeredStackAction()
	: m_pTriggeredPlayer(NULL)
{
	SetAnnounce();
}

void CTriggeredStackAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTriggeredStackAction* pThisAction = dynamic_cast<const CTriggeredStackAction*>(pAction);
	ATLASSERT(pThisAction);
#endif

	__super::Copy(pAction);

	m_TriggerInfo = ((const CTriggeredStackAction*)pAction)->m_TriggerInfo;
	m_pTriggeredPlayer = ((const CTriggeredStackAction*)pAction)->m_pTriggeredPlayer;
}

BOOL CTriggeredStackAction::PerformActionImpl() const
{
	// Skipped base class CStackAbilityAction's PerformAction() because triggered actions are not always added to the stack
	if (!CAbilityAction::PerformActionImpl())
		return FALSE;

	AddRef();

	GetController()->GetTriggeredActionContainer()->RemoveByID(m_nActionID);

	m_pGame->GetStack().AddAction(const_cast<CTriggeredStackAction*>(this));

	Release();

	return TRUE;
}

bool CTriggeredStackAction::Equals(const CAction* pAction) const
{
	if (!CStackAbilityAction::Equals(pAction))
		return FALSE;

	const CTriggeredStackAction* pTriggeredStackAction = dynamic_cast<const CTriggeredStackAction*>(pAction);
	if (!pTriggeredStackAction)
		return FALSE;

	if (pTriggeredStackAction == this)
		return TRUE;

	return m_TriggerInfo == pTriggeredStackAction->m_TriggerInfo &&
		m_pTriggeredPlayer == pTriggeredStackAction->m_pTriggeredPlayer;
}
*/
/*
CTriggeredStackAction::CTriggeredStackAction()
	: m_pTriggeredPlayer(NULL)
	, m_bAddToStack(true)
{
	SetAnnounce();
}

void CTriggeredStackAction::SetTriggeredPlayer(CPlayer* pTriggeredPlayer)
{ 
	m_pTriggeredPlayer = pTriggeredPlayer;
}

void CTriggeredStackAction::Copy(const CAction* pAction)
{
	const CTriggeredStackAction* pThisAction = dynamic_cast<const CTriggeredStackAction*>(pAction);
	if (!pThisAction)
		return;

	__super::Copy(pAction);

	m_bAddToStack = pThisAction->m_bAddToStack;
	m_pTriggeredPlayer = pThisAction->m_pTriggeredPlayer;
}

BOOL CTriggeredStackAction::PerformActionImpl() const
{
	// Skipped base class CStackAbilityAction's PerformAction() because triggered actions are not always added to the stack
	if (!CAbilityAction::PerformActionImpl())
		return FALSE;

	AddRef();

	m_pTriggeredPlayer->GetTriggeredActionContainer()->RemoveByID(m_nActionID);

	if (m_bAddToStack)
		m_pGame->GetStack().AddAction(const_cast<CTriggeredStackAction*>(this));

	Release();

	return TRUE;
}

bool CTriggeredStackAction::Equals(const CAction* pAction) const
{
	if (!CStackAbilityAction::Equals(pAction))
		return FALSE;

	const CTriggeredStackAction* pTriggeredStackAction = dynamic_cast<const CTriggeredStackAction*>(pAction);
	if (!pTriggeredStackAction)
		return FALSE;

	if (pTriggeredStackAction == this)
		return TRUE;

	return m_pTriggeredPlayer == pTriggeredStackAction->m_pTriggeredPlayer &&
		m_bAddToStack == pTriggeredStackAction->m_bAddToStack;
}
*/
/*
//____________________________________________________________________________
//
CTriggeredSelection::CTriggeredSelection()
{
	SetAnnounce();
}

void CTriggeredSelection::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTriggeredSelection* pThisAction = dynamic_cast<const CTriggeredSelection*>(pAction);
	ATLASSERT(pThisAction);
#endif

	__super::Copy(pAction);

	m_TriggeredPlayers = ((const CTriggeredSelection*)pAction)->m_TriggeredPlayers;
	m_TriggerInfo = ((const CTriggeredSelection*)pAction)->m_TriggerInfo;
}

BOOL CTriggeredSelection::PerformActionImpl() const
{
	ATLASSERT(false);
	return FALSE;
}

bool CTriggeredSelection::Equals(const CAction* pAction) const
{
	if (!CStackAbilityAction::Equals(pAction))
		return FALSE;

	const CTriggeredSelection* pTriggeredStackAction = dynamic_cast<const CTriggeredSelection*>(pAction);
	if (!pTriggeredStackAction)
		return FALSE;

	if (pTriggeredStackAction == this)
		return TRUE;

	if (m_TriggeredPlayers.GetSize() != pTriggeredStackAction->m_TriggeredPlayers.GetSize())
		return FALSE;

	for (int i = 0; i < m_TriggeredPlayers.GetSize(); ++i)
		if (m_TriggeredPlayers.GetAt(i) != pTriggeredStackAction->m_TriggeredPlayers.GetAt(i))
			return FALSE;

	if (m_TriggerInfo != pTriggeredStackAction->m_TriggerInfo)
		return FALSE;

	return TRUE;
}
*/
//____________________________________________________________________________
//
CTriggeredAction::CTriggeredAction(CGame* pGame)
	: CStackAbilityAction(pGame)
	, m_pTriggeredPlayer(NULL)
{
	SetAnnounce();
	SetTriggered();
}

void CTriggeredAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTriggeredAction* pThisAction = dynamic_cast<const CTriggeredAction*>(pAction);
	ATLASSERT(pThisAction);
#endif

	__super::Copy(pAction);

	m_TriggerInfo = ((const CTriggeredAction*)pAction)->m_TriggerInfo;
	m_pTriggeredPlayer = ((const CTriggeredAction*)pAction)->m_pTriggeredPlayer;
	m_TriggeredPlayers = ((const CTriggeredAction*)pAction)->m_TriggeredPlayers;
}

BOOL CTriggeredAction::PerformActionImpl() const
{
	// Skipped base class CStackAbilityAction's PerformAction() because triggered actions are not always added to the stack
	if (!CAbilityAction::PerformActionImpl())
		return FALSE;

	if (m_nSelectionIndex != -2)
		return TRUE; // this action is hacked to do two things

	AddRef();

	m_pTriggeredPlayer->GetTriggeredActionContainer()->RemoveByID(m_nActionID);

	m_pGame->GetStack().AddAction(const_cast<CTriggeredAction*>(this));

	Release();

	return TRUE;
}

bool CTriggeredAction::Equals(const CAction* pAction) const
{
	if (!__super::Equals(pAction))
		return FALSE;

	const CTriggeredAction* pTriggeredAction = dynamic_cast<const CTriggeredAction*>(pAction);
	if (!pTriggeredAction)
		return FALSE;

	if (pTriggeredAction == this)
		return TRUE;

	if (m_TriggeredPlayers.GetSize() != pTriggeredAction->m_TriggeredPlayers.GetSize())
		return FALSE;

	for (int i = 0; i < m_TriggeredPlayers.GetSize(); ++i)
		if (m_TriggeredPlayers.GetAt(i) != pTriggeredAction->m_TriggeredPlayers.GetAt(i))
			return FALSE;

	return m_TriggerInfo == pTriggeredAction->m_TriggerInfo &&
		m_pTriggeredPlayer == pTriggeredAction->m_pTriggeredPlayer;
}
