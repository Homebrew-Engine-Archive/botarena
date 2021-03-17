#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
int CAction::s_nNextActionId = 1;

CAction::CAction(CGame* pGame)
	: m_pGame(pGame)
	, m_ActionType(ActionType::Null)
	, m_Score(ActionScore::Standard)
	, m_TransientId(ActionTransientId::NotSupported)
	, m_nActionID(s_nNextActionId++)
	, m_pOriginatingCard(NULL)
	, m_pAssociatedCard(NULL)
	, m_pAssociatedPlayer(NULL)
	, m_nSelectionIndex(-2)
{
}

void CAction::Copy(const CAction* pAction)
{
	m_pGame = pAction->m_pGame;
	m_nActionID = pAction->m_nActionID;
	m_strActionName = pAction->m_strActionName;
	m_ActionType = pAction->m_ActionType;
	m_Score = pAction->m_Score;
	m_pOriginatingCard = pAction->m_pOriginatingCard;
	m_Value = pAction->m_Value;
	m_strCostName = pAction->m_strCostName;
	m_TransientId = pAction->m_TransientId;
	m_pAssociatedCard = pAction->m_pAssociatedCard;
	m_pAssociatedPlayer = pAction->m_pAssociatedPlayer;
	m_nSelectionIndex = pAction->m_nSelectionIndex;
}

counted_ptr<CAction> CAction::Clone() const
{
	counted_ptr<CAction> cpAction(::CreateObject<CAction>(m_pGame));
	cpAction->Copy(const_cast<CAction*>(this));
	return cpAction;	
}

BOOL CAction::PerformAction() const
{
	if (m_nSelectionIndex != -2)
	{
		// A selection

		m_pGame->GetSelection().Select(m_nSelectionIndex);

		m_pGame->PerformedAction(this);

		return TRUE;
	}

	BOOL bResult = PerformActionImpl();

	m_pGame->PerformedAction(this);

	return bResult;
}

CString CAction::GetActionText() const
{
	CString strCapitalActionName = m_strActionName;
	if (_tcslen(strCapitalActionName))
		strCapitalActionName.SetAt(0, TCHAR(toupper(strCapitalActionName[0])));

	if (m_strCostName.IsEmpty())
		return strCapitalActionName;

	return m_strCostName + _T(": ") + strCapitalActionName;
}

void CAction::AppendToActionName(LPCTSTR strActionName)
{
	if (_tcslen(strActionName))
		m_strActionName += strActionName;
}

CString CAction::GetActionName() const
{
	return m_strActionName;
}

void CAction::SetActionName(LPCTSTR strActionName)
{
	m_strActionName = strActionName;
}

void CAction::AppendToCostName(LPCTSTR strCostName)
{
	if (_tcslen(strCostName))
		if (m_strCostName.IsEmpty())
			m_strCostName = strCostName;
		else
		{
			m_strCostName += _T(", ");
			m_strCostName += strCostName;
		}
}

CString CAction::GetCostName() const
{
	return m_strCostName;
}

void CAction::SetCostName(LPCTSTR strCostName)
{
	m_strCostName = strCostName;
}

void CAction::SetDefaultAction()
{
	m_ActionType |= ActionType::Default;
}

BOOL CAction::IsDefaultAction() const
{
	return (m_ActionType & ActionType::Default).Any();
}

void CAction::SetNodeAction()
{
	m_ActionType |= ActionType::Node;
}

BOOL CAction::IsNodeAction() const
{
	return (m_ActionType & ActionType::Node).Any();
}

void CAction::SetStackPassAction()
{
	m_ActionType |= ActionType::StackPass;
}

BOOL CAction::IsStackPassAction() const
{
	return (m_ActionType & ActionType::StackPass).Any();
}

void CAction::SetManaProducing()
{
	m_ActionType |= ActionType::ManaProducing;
}

void CAction::SetFlashback()
{
	m_ActionType |= ActionType::Flashback;
}

BOOL CAction::IsFlashback() const
{
	return (m_ActionType & ActionType::Flashback).Any();
}

BOOL CAction::IsManaProducing() const
{
	return (m_ActionType & ActionType::ManaProducing).Any();
}

void CAction::SetManaConsuming()
{
	m_ActionType |= ActionType::ManaConsuming;
}

BOOL CAction::IsManaConsuming() const
{
	return (m_ActionType & ActionType::ManaConsuming).Any();
}

void CAction::SetManaFiltering()
{
	m_ActionType |= ActionType::ManaFiltering;
}

BOOL CAction::IsManaFiltering() const
{
	return (m_ActionType & ActionType::ManaFiltering).Any();
}

void CAction::SetNonStackAction()
{
	ATLASSERT(dynamic_cast<CNonStackAbilityAction*>(this));

	m_ActionType |= ActionType::Nonstack;
}

BOOL CAction::IsNonStackAction() const
{
	return (m_ActionType & ActionType::Nonstack).Any();
}

void CAction::SetBasicNonStackAction()
{
	ATLASSERT(dynamic_cast<CNonStackAbilityAction*>(this));
	ATLASSERT(IsNonStackAction());

	m_ActionType |= ActionType::BasicNonstack;
}

BOOL CAction::IsBasicNonStackAction() const
{
	return (m_ActionType & ActionType::BasicNonstack).Any();
}

CCard* CAction::GetOriginatingCard() const
{
	return m_pOriginatingCard;
}

void CAction::SetOriginatingCard(CCard* pOriginatingCard)
{
	m_pOriginatingCard = pOriginatingCard;
}

void CAction::SetAssociatedCard(CCard* pAssociatedCard)
{
	m_pAssociatedCard = pAssociatedCard;
}

CCard* CAction::GetAssociatedCard() const
{
	return GetAssociatedCardImpl();
}

CCard* CAction::GetAssociatedCardImpl() const
{
	if (m_pAssociatedCard)
		return m_pAssociatedCard;

	const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(this);
	if (pTargetParent)
	{
		const CSubjectGroup& targetGroup = pTargetParent->GetTargetGroup();

		if (!targetGroup.GetPlayerSubjectCount() &&
			(targetGroup.GetCardSubjectCount() == 1))
			return const_cast<CCard*>(targetGroup.GetFirstCardSubject());
	}
	
	return NULL;
}

void CAction::SetAssociatedPlayer(CPlayer* pAssociatedPlayer)
{
	m_pAssociatedPlayer = pAssociatedPlayer;
}

CPlayer* CAction::GetAssociatedPlayer() const
{
	return GetAssociatedPlayerImpl();
}

CPlayer* CAction::GetAssociatedPlayerImpl() const
{
	if (m_pAssociatedPlayer)
		return m_pAssociatedPlayer;

	const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(this);
	if (pTargetParent)
	{
		const CSubjectGroup& targetGroup = pTargetParent->GetTargetGroup();

		if (!targetGroup.GetCardSubjectCount() &&
			(targetGroup.GetPlayerSubjectCount() == 1))
			return const_cast<CPlayer*>(targetGroup.GetFirstPlayerSubject());
	}
	
	return NULL;
}

void CAction::SetUntapAction()
{
	m_ActionType |= ActionType::UntapAction;
}

BOOL CAction::IsUntapAction() const
{
	return (m_ActionType & ActionType::UntapAction).Any();
}

void CAction::SetTrick(BOOL bTrick)
{
	if (bTrick)
		m_ActionType |= ActionType::Trick;
	else
		m_ActionType &= ~ActionType::Trick;
}

BOOL CAction::IsTrick() const
{
	return (m_ActionType & ActionType::Trick).Any();
}

void CAction::SetBeginningCombat()
{
	m_ActionType |= ActionType::BeginningCombat;
}

BOOL CAction::IsBeginningCombat() const
{
	return (m_ActionType & ActionType::BeginningCombat).Any();
}

void CAction::SetTargeting()
{
	m_ActionType |= ActionType::Targeting;	
}

BOOL CAction::IsTargeting() const
{
	return (m_ActionType & ActionType::Targeting).Any();
}

void CAction::SetDoubleTargeting()
{
	m_ActionType |= ActionType::DoubleTargeting;	
}

BOOL CAction::IsDoubleTargeting() const
{
	return (m_ActionType & ActionType::DoubleTargeting).Any();
}

void CAction::SetTapAction()
{
	m_ActionType |= ActionType::TapAction;
}

BOOL CAction::IsTapAction() const
{
	return (m_ActionType & ActionType::TapAction).Any();
}

void CAction::SetScore(ActionScore score)
{
	ATLASSERT(score.Get() >= ActionScore::Minimum);
	m_Score = score;
}

ActionScore CAction::GetScore() const
{
	return m_Score;
}

bool CAction::Equals(const CAction* pAction) const
{
	ATLASSERT(pAction != this);		// Shouldn't happen because comparisons are performed between actions generated by different CGame::GetActions()

	if (pAction == this)
		return TRUE;

	return
		(m_ActionType == pAction->m_ActionType) &&
		(m_pOriginatingCard == pAction->m_pOriginatingCard) &&
		(m_pAssociatedCard == pAction->m_pAssociatedCard) &&
		(m_Value == pAction->m_Value) &&
		(m_nSelectionIndex == pAction->m_nSelectionIndex);
		//(m_TransientId == pAction->m_TransientId);	6/16/2002, removed because transient ids may be different for same type of actions
}

void CAction::SetAnnounce(BOOL bAnnounce)
{
	if (bAnnounce)
		m_ActionType |= ActionType::Announce;
	else
		m_ActionType &= ~ActionType::Announce;
}

BOOL CAction::IsAnnounce() const
{
	return (m_ActionType & ActionType::Announce).Any();
}

void CAction::SetUndoable()
{
	m_ActionType |= ActionType::Undoable;
}

BOOL CAction::IsUndoable() const
{
	return (m_ActionType & ActionType::Undoable).Any();
}

counted_ptr<CUndoAction> CAction::CreateUndoAction() const
{
	ATLASSERT(false);
	return NULL;
}

void CAction::SetUndo()
{
	m_ActionType |= ActionType::Undo;
}

BOOL CAction::IsUndo() const
{
	return (m_ActionType & ActionType::Undo).Any();
}

#ifdef M10_COMBAT
void CAction::SetDamageAssignmentOrder()
{
	m_ActionType |= ActionType::DamageAssignmentOrder;
}

BOOL CAction::IsDamageAssignmentOrder() const
{
	return (m_ActionType & ActionType::DamageAssignmentOrder).Any();
}
#endif

void CAction::SetCombatDamageAssignment()
{
	m_ActionType |= ActionType::CombatDamageAssignment;
}

BOOL CAction::IsCombatDamageAssignment() const
{
	return (m_ActionType & ActionType::CombatDamageAssignment).Any();
}

void CAction::SetAttack()
{
	m_ActionType |= ActionType::Attack;
}

BOOL CAction::IsAttack() const
{
	return (m_ActionType & ActionType::Attack).Any();
}

void CAction::SetBlock()
{
	m_ActionType |= ActionType::Block;
}

BOOL CAction::IsBlock() const
{
	return (m_ActionType & ActionType::Block).Any();
}

void CAction::SetPlayLand()
{
	m_ActionType |= ActionType::PlayLand;
}

BOOL CAction::IsPlayLand() const
{
	return (m_ActionType & ActionType::PlayLand).Any();
}

void CAction::SetHideInConcise()
{
	m_ActionType |= ActionType::HideInConcise;
}

BOOL CAction::IsHideInConcise() const
{
	return (m_ActionType & ActionType::HideInConcise).Any();
}

void CAction::SetRequiredTransientActionId(ActionTransientId nTransientId)
{
	m_TransientId = nTransientId;
}

ActionTransientId CAction::GetRequiredTransientActionId() const
{
	return m_TransientId;
}

void CAction::SetTriggered()
{
	m_ActionType |= ActionType::Triggered;
}

BOOL CAction::IsTriggered() const
{
	return (m_ActionType & ActionType::Triggered).Any();
}

void CAction::SetValue(const ContextValue& value)
{
	m_Value = value;
}

const ContextValue& CAction::GetValue() const
{
	return m_Value;
}

//____________________________________________________________________________
//
BOOL CActionContainer::PerformAction(int nIndex) const
{
	ATLASSERT(nIndex < GetSize());
	if (nIndex >= GetSize())
		return FALSE;

	/*
	CGame* pGame = GetAt(0)->GetGame();

	if (!pGame->SuspendAllCreatures())
	{
		// Moved from Node1.cpp
		pGame->SuspendAllCreatures(TRUE);
	}
	*/

	BOOL bResult = GetAt(nIndex)->PerformAction();

	int nSize = GetSize();
	for (int i = 0; i < nSize; ++i)
		if (i != nIndex)
			GetAt(i)->OnActionNotPerformed();

	/*
	if (pGame->SuspendAllCreatures())
	{
		if (!pGame->GetSelection().Pending() &&	// wait until all selections are gone to support Primal Plasma
			!pGame->GetTriggeredResolutionPlayer())		//    and until all triggered selections are done (to support Flash + Crovax, Ascendant Hero + 1/1 creature)
		{
			// Moved from Node1.cpp
			pGame->SuspendAllCreatures(FALSE);
		}
	}
	*/

	return bResult;
}

void CActionContainer::Sort(BOOL bAscending)		
// Sort actions by Action Score, default is descending order
{
	int nCount = GetSize();
	if (nCount < 2)
		return;

	CGame* pGame = GetAt(0)->GetGame();

	if (pGame->IsThinking())
	{
		int nAttack = 0;
		BOOL bManaProducing = FALSE;
		int nManaFiltering = 0;
		CPlayer* pPlayer = pGame->GetActivePlayer();
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < nCount; ++i)
		{
			CAction* pAction = GetAt(i).GetPointer();

			if (pAction->IsManaProducing())
				bManaProducing = TRUE;
			else
			if (pAction->IsManaFiltering())
				++nManaFiltering;
			else
			if (pAction->IsAttack())
				++nAttack;
			else
			if (pAction->IsBlock())
			{
				CBlockAction* pAction1 = (CBlockAction*)pAction;
				CCreatureCard* pCreatureCard = (CCreatureCard*)pAction->GetOriginatingCard();

				const CCountedCardContainer& attackers(pAction1->GetAttackers());
				int nTotalPower = 0;
				for (int j = 0; j < attackers.GetSize(); ++j)
					nTotalPower += GET_INTEGER(((CCreatureCard*)attackers.GetAt(j))->GetPower());

				if (nTotalPower < GET_INTEGER(pCreatureCard->GetLife()))
				{
					pAction->SetScore(ActionScore::BlockPromoted);
#ifdef _MY_DEBUG
//							pGame->MinimaxTrace(_T("Promoted: %s\n"), pAction->GetActionText());
#endif
				}
			}
			else
			if (pAction->IsPlayLand())
			{
				for (int j = 0; j < pZone->GetSize(); ++j)
					if (pZone->GetAt(j)->GetCardType() == static_cast<CardType::Enum>(pAction->GetValue().nValue1))
					{
						pAction->SetScore(ActionScore::PlayLandLow);
						break;
					}
			}
		}

		// Promote attack by heuristic

		if (nAttack)
		{
			int nOpponentCreatureCount = 0;
			CPlayer* pNextPlayer = pGame->GetNextPlayer(pPlayer);
			CZone* pZone = pNextPlayer->GetZoneById(ZoneId::Battlefield);
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);
				if ((pCard->GetCardType() & CardType::Creature).Any())
					++nOpponentCreatureCount;
			}

			if (!nOpponentCreatureCount)
				for (int i = 0, nChanged = 0; (i < nCount) && (nChanged < nAttack); ++i)
				{
					CAction* pAction = GetAt(i).GetPointer();

					if (pAction->IsAttack())
					{
						pAction->SetScore(ActionScore::AttackPromoted);
						++nChanged;

#ifdef _MY_DEBUG
	//					pGame->MinimaxTrace(_T("Promoted: %s\n"), pAction->GetActionText());
#endif
					}
				}
		}

		// Sort actions by score

		BOOL bChanged;
		do
		{
			bChanged = FALSE;
			for (int i = 0; i < nCount - 1; ++i)
			{
				CAction* pAction1 = GetAt(i).GetPointer();
				CAction* pAction2 = GetAt(i + 1).GetPointer();
				ActionScore score1 = pAction1->GetScore();
				ActionScore score2 = pAction2->GetScore();

				if ((!bAscending && (score1 < score2)) ||
					(bAscending && (score1 > score2)))
				{
					pAction1->AddRef();
					__super::SetAt(i, pAction2);
					__super::SetAt(i + 1, pAction1);
					pAction1->Release();
					bChanged = TRUE;
				}
				else
					// 10/18/2003: Sort by name if score is equal to get a deterministic sorting order
					if ((score1 == score2) &&
						((!bAscending && (pAction1->GetActionName() < pAction2->GetActionName())) ||
						(bAscending && (pAction1->GetActionName() > pAction2->GetActionName()))))
					{
						pAction1->AddRef();
						__super::SetAt(i, pAction2);
						__super::SetAt(i + 1, pAction1);
						pAction1->Release();
						bChanged = TRUE;
					}
			}
		} while (bChanged);

#ifdef CONSIDER_PASS_ACTION_FIRST
		for (int i = 0; i < nCount; ++i)
		{
			CAction* pAction = GetAt(i).GetPointer();
			if (pAction->IsNodeAction())
			{
				CNodeAction* pAction1 = (CNodeAction*)pAction;

				if (pAction1->GetNodeId() != NodeId::BeginningOfCombatStep)
				{
					pAction->AddRef();
					RemoveAt(i);
					InsertAt(0, pAction);
					pAction->Release();

					break;
				}
			}
			else
				if (pAction->IsStackPassAction())
				{
					pAction->AddRef();
					RemoveAt(i);
					InsertAt(0, pAction);
					pAction->Release();

					break;
				}
		}
#endif
	}
	else
	{
		// 10/20/2003: If not thinking, just sort action by names

		BOOL bChanged;
		do
		{
			bChanged = FALSE;
			for (int i = 0; i < nCount - 1; ++i)
			{
				CAction* pAction1 = GetAt(i).GetPointer();
				CAction* pAction2 = GetAt(i + 1).GetPointer();

				if ((!bAscending && (pAction1->GetActionName() < pAction2->GetActionName())) ||
					(bAscending && (pAction1->GetActionName() > pAction2->GetActionName())))
				{
					pAction1->AddRef();
					__super::SetAt(i, pAction2);
					__super::SetAt(i + 1, pAction1);
					pAction1->Release();
					bChanged = TRUE;
				}
			}
		} while (bChanged);
	}
}

//____________________________________________________________________________
//
void CTriggeredActionContainer::SetActionAt(int nIndex, CTriggeredAction* pAction)
{ 
	__super::SetAt(nIndex, pAction); 
}

void CTriggeredActionContainer::Add(CTriggeredAction* pTriggeredAction)
{
	__super::Add(pTriggeredAction);
}

/*
counted_ptr<CAction> CTriggeredActionController::RemoveByID(int nActionID)
{
	int nActionCount = GetSize();
	if (!nActionCount)
		return NULL;

	counted_ptr<CAction> cpAction;
	CTriggeredStackAction* pAction = NULL;
	for (int i = nActionCount - 1; i >= 0; --i)
	{
		cpAction = counted_ptr<CAction>(GetAt(i));
		if (cpAction->GetActionID() == nActionID)
		{
			__super::RemoveAt(i);
			pAction = (CTriggeredStackAction*)cpAction.GetPointer();
			if (pAction->GetGroupID() == -1)
				return cpAction;	// No group actions
			break;
		}
	}

	if (!pAction)
	{
		ATLASSERT(false);
		return NULL;
	}

	int nGroupID = pAction->GetGroupID();

	ATLASSERT(nGroupID != -1);

	for (int i = nActionCount - 2; i >= 0; --i)
	{
		CTriggeredStackAction* pAction = (CTriggeredStackAction*)GetAt(i);
		if (pAction->GetGroupID() == nGroupID)
			__super::RemoveAt(i);
	}

	return cpAction;
}
*/