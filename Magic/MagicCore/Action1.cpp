#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CAbilityAction::CAbilityAction(CGame* pGame)
//	: m_bStaticAbility(TRUE)
	: CAction(pGame)
	, m_nAbilityCLSID(0)
	, m_pController(NULL)
	, m_CostConfigEntry()
{
}

void CAbilityAction::SetAbility(CAbility* pAbility)
{
	m_cpAbility = counted_ptr<CAbility>(pAbility);

	if (m_cpAbility != NULL)
	{
		m_nAbilityCLSID = m_cpAbility->GetGameClassID();

		CCard* pCard = m_cpAbility->GetCard();
		m_pController = m_cpAbility->GetController();

		SetOriginatingCard(pCard);

		if (m_cpAbility->GetCost().HasTapThisCardCost(pCard))
			SetTapAction();
	}
	else
	{
		m_pController = NULL;
		m_nAbilityCLSID = 0;
	}
}

CAbility* CAbilityAction::GetAbility() const
{
	return m_cpAbility.GetPointer();
}

void CAbilityAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CAbilityAction* pThisAction = dynamic_cast<const CAbilityAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CAbilityAction* pThisAction = (const CAbilityAction*)pAction;
#endif

	__super::Copy(pAction);

	m_cpAbility = pThisAction->m_cpAbility;
	m_pController = pThisAction->m_pController;

	m_nAbilityCLSID = pThisAction->m_nAbilityCLSID;

	m_CostConfigEntry = pThisAction->m_CostConfigEntry;
}

BOOL CAbilityAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	return m_cpAbility->ConfirmTargetAndPayCost(this);
}

bool CAbilityAction::Equals(const CAction* pAction) const
{
	const CAbilityAction* pAbilityAction = dynamic_cast<const CAbilityAction*>(pAction);
	if (!pAbilityAction)
		return false;

	if (pAbilityAction == this)
		return true;

	if (!__super::Equals(pAction))
		return false;

	if (m_nAbilityCLSID != pAbilityAction->m_nAbilityCLSID ||
		m_pController != pAbilityAction->m_pController)
		return false;

	return m_CostConfigEntry == pAbilityAction->m_CostConfigEntry;
}

//____________________________________________________________________________
//
CNonStackAbilityAction::CNonStackAbilityAction(CGame* pGame)
	: CAbilityAction(pGame)
{
	SetNonStackAction();
}

BOOL CNonStackAbilityAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return false;

	BOOL bResult = m_cpAbility->Resolve(this);	// Resolve immediately without putting this action into stack

	m_cpAbility->OnResolutionCompleted(this, bResult);

	return bResult;
}

#ifdef USE_NS_CUT
DWORD CNonStackAbilityAction::GetCutID() const
{
	ATLASSERT(IsBasicNonStackAction());

	CCard* pCard = m_cpAbility->GetCard();

	if (pCard->IsModified() ||
		pCard->IsEnchanted())
		return pCard->GetInstanceID() << 16 | m_cpAbility->GetGameClassID() | 0x8000000;

	return m_cpAbility->GetCardAbilityClassID() & 0x7ffffff;
}
#endif

//____________________________________________________________________________
//
CStackAbilityAction::CStackAbilityAction(CGame* pGame)
	: CAbilityAction(pGame)
	, m_bCanBeDenied(FALSE)
	, m_DenialCost(pGame)
{
	SetAnnounce();
}

BOOL CStackAbilityAction::IsSpell() const
{
	return m_cpAbility != NULL && m_cpAbility->IsSpell();
}

void CStackAbilityAction::SetCanBeDenied(BOOL bEnable)
{
	m_bCanBeDenied = bEnable;
}

BOOL CStackAbilityAction::CanBeDeniedBy(const CPlayer* pPlayer) const
{
	UNUSED(pPlayer);

	return m_bCanBeDenied;
}

const CCost& CStackAbilityAction::GetDenialCost() const
{
	return m_DenialCost;
}

CCost& CStackAbilityAction::GetDenialCost()
{
	return m_DenialCost;
}

void CStackAbilityAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CStackAbilityAction* pThisAction = dynamic_cast<const CStackAbilityAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CStackAbilityAction* pThisAction = (const CStackAbilityAction*)pAction;
#endif

	__super::Copy(pAction);

	m_bCanBeDenied = pThisAction->m_bCanBeDenied;
	m_DenialCost = pThisAction->m_DenialCost;
}

BOOL CStackAbilityAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	counted_ptr<CAction> cpThis(Clone());
	m_pGame->GetStack().AddAction((CStackAbilityAction*)cpThis.GetPointer());	// Add to stack, GetAbility()->ResolveImpl(this) will be called when the spell/ability is resolved
	
	return TRUE;
}

bool CStackAbilityAction::Equals(const CAction* pAction) const
{
	if (!CAbilityAction::Equals(pAction))
		return FALSE;

	const CStackAbilityAction* pStackAbilityAction = dynamic_cast<const CStackAbilityAction*>(pAction);
	if (!pStackAbilityAction)
		return FALSE;

	if (pStackAbilityAction == this)
		return TRUE;

	return (m_bCanBeDenied == pStackAbilityAction->m_bCanBeDenied) &&
			m_DenialCost.Equals(&(pStackAbilityAction->m_DenialCost));

}

//____________________________________________________________________________
//
CNodeAction::CNodeAction(CGame* pGame)
	: CAction(pGame)
	, m_bTransit(FALSE)
	, m_NodeId(NodeId::Null)
	, m_pGraph(NULL)
	, m_pNode(NULL)
{
	SetNodeAction();
}

void CNodeAction::SetTransitInfo(BOOL bTransit, CGraph* pGraph, CNode* pNode, NodeId nodeId)
{
	ATLASSERT(pNode);

	SetHideInConcise();	// 7/12/2002

	if (bTransit)
	{
		SetActionName(
			CString(_T("passes and ready for ")) + 
			m_pGame->GetActivePlayer()->GetPlayerName() + _T("'s ") + pGraph->GetNodeById(nodeId)->GetNodeName());
	}
	else
		SetActionName(_T("passes"));

	m_bTransit = bTransit;
	m_NodeId = nodeId;
	m_pGraph = pGraph;
	m_pNode = pNode;

	if (m_NodeId != NodeId::BeginningOfCombatStep)
	{
		SetDefaultAction();
	}
	else
	{
		SetScore(ActionScore::BeginningOfCombat);
		SetBeginningCombat();
	}
}

void CNodeAction::SetTransitInfo(CGraph* pGraph)
{
	SetActionName(_T("passes and ends the player's turn"));
	SetHideInConcise();	// 7/12/2002

	m_bTransit = TRUE;
	m_NodeId = NodeId::Null;
	m_pGraph = pGraph;
	m_pNode = NULL;
	SetDefaultAction();
}

void CNodeAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CNodeAction* pThisAction = dynamic_cast<const CNodeAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CNodeAction* pThisAction = (const CNodeAction*)pAction;
#endif

	__super::Copy(pAction);

	m_bTransit = pThisAction->m_bTransit;
	m_NodeId = pThisAction->m_NodeId;
	m_pGraph = pThisAction->m_pGraph;
	m_pNode = pThisAction->m_pNode;
}

BOOL CNodeAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	if (m_bTransit)
	{
		if (m_NodeId != NodeId::Null)	// Same graph transition
		{
			CNode* pCurrentNode = m_pGraph->GetCurrentNode();
#ifndef M10_COMBAT
			if (pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
				pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b)
			{
				// Deal combat damage

				CCombatNode* pCombatNode = (CCombatNode*)pCurrentNode;
				pCombatNode->DealCombatDamage();
				pCombatNode->ResetCombatDamage();

				// Check for triggered abilities

				for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
				{
					if (m_pGame->GetPlayer(i)->GetTriggeredActionContainer()->GetSize())
					{
						pCombatNode->ResetPassCount();
						return TRUE; // stay in the combat damage node for the triggered abilities to resolve
					}
				}
			}
#endif

			if (!CGraph::SetNode(m_pGraph, m_pGraph, m_NodeId))
				return FALSE;
		}
		else
		{
			CGraph* pToGraph = NULL;

			int nTurns;
			if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::TimeWalk, nTurns, FALSE) && nTurns)
			{
				pToGraph = m_pGraph;

				m_pGame->GetActivePlayer()->GetPlayerEffect().ClearPlayerEffect(PlayerEffectType::TimeWalk, FALSE);
				if (nTurns > 1)
					m_pGame->GetActivePlayer()->GetPlayerEffect().AddPlayerEffect(PlayerEffectType::TimeWalk, FALSE, nTurns - 1);
			}
			else
			{
				// find next one who doesn't skip the turn
				CPlayer* pNextPlayer = m_pGame->GetNextPlayer(m_pGame->GetActivePlayer());

				while (pNextPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::SkipNextTurn, nTurns, FALSE) && nTurns)
				{
					pNextPlayer->GetPlayerEffect().ClearPlayerEffect(PlayerEffectType::SkipNextTurn, FALSE);
					if (nTurns > 1)
						pNextPlayer->GetPlayerEffect().AddPlayerEffect(PlayerEffectType::SkipNextTurn, FALSE, nTurns - 1);

					pNextPlayer = m_pGame->GetNextPlayer(pNextPlayer);
				}

				pToGraph = pNextPlayer->GetGraph();
			}

			if (!CGraph::SetNode(m_pGraph, pToGraph, pToGraph->GetStartNodeId()))
				return FALSE;
		}
	}
	else
	{
#if 1	// 8/13/2001: To prevent leaving manas in mana pool and pass
		if (m_pGame->IsThinking() &&
			m_pGame->GetPriorityPlayer()->GetManaPool().GetTotal() /*&&
			m_pGame->PreventPassWithMana() moved to CGame::GetSearchStatus */)
		{
			m_pGame->AddSearchBreak(SearchBreak::PassWithMana);
		}
#endif
		//m_pGame->SetNextPriorityPlayer();	7/29/2002: moved into IncreasePassCount()
		ATLASSERT(m_pNode);
		m_pNode->IncreasePassCount();
	}

	return TRUE;
}

void CNodeAction::OnActionNotPerformed() const
{
	__super::OnActionNotPerformed();

	if ((m_NodeId != NodeId::BeginningOfCombatStep) && m_pNode != NULL)
		m_pNode->ResetPassCount();
}

bool CNodeAction::Equals(const CAction* pAction) const
{
	if (!CAction::Equals(pAction))
		return FALSE;

	const CNodeAction* pNodeAction = dynamic_cast<const CNodeAction*>(pAction);
	if (!pNodeAction)
		return FALSE;

	if (pNodeAction == this)
		return TRUE;

	return 
		(m_bTransit == pNodeAction->m_bTransit) &&
		(m_pNode == pNodeAction->m_pNode) &&
		(m_NodeId == pNodeAction->m_NodeId) &&
		(m_pGraph == pNodeAction->m_pGraph);
}

//____________________________________________________________________________
//
CFastCombatNodeAction::CFastCombatNodeAction(CGame* pGame)
	: CNodeAction(pGame)
{
}
BOOL CFastCombatNodeAction::PerformActionImpl() const
{
	
	const CEndOfCombatNode* pMainNode = (CEndOfCombatNode*)m_pGame->GetActivePlayer()->GetGraph()->GetNodeById(NodeId::EndOfCombatStep);
	const_cast<CEndOfCombatNode*>(pMainNode)->SetMaxFastCombatCount(const_cast<CEndOfCombatNode*>(pMainNode)->GetMaxFastCombatCount() - 1);

	if (!__super::PerformActionImpl())
		return FALSE;

	return TRUE;
}
//____________________________________________________________________________
//
CDrawAction::CDrawAction(CGame* pGame)
	: CAction(pGame)
	, m_pPlayer(NULL)
	, m_pDrawNode(NULL)
{
	SetActionName(_T("draws a card"));
	SetDefaultAction();
}

void CDrawAction::SetDrawInfo(CPlayer* pPlayer, CDrawNode1* pDrawNode)
{
	m_pPlayer = pPlayer;
	m_pDrawNode = pDrawNode;	
}

void CDrawAction::Copy(const CAction* pAction)
{	
#ifdef _DEBUG
	const CDrawAction* pThisAction = dynamic_cast<const CDrawAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CDrawAction* pThisAction = (const CDrawAction*)pAction;
#endif

	__super::Copy(pAction);

	m_pPlayer = pThisAction->m_pPlayer;
	m_pDrawNode = pThisAction->m_pDrawNode;	
}

BOOL CDrawAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	CZone* pLibrary = m_pPlayer->GetZoneById(ZoneId::Library);

	if (!pLibrary->GetSize())
	{
		m_pPlayer->SetDrawFailed();
		return FALSE;
	}

	CCard* pCard = pLibrary->GetTopCard();
	pCard->Move(m_pPlayer->GetZoneById(ZoneId::Hand), m_pPlayer, MoveType::NormalDraw);

	m_pDrawNode->IncreaseNormalDrawCount();

	if (!m_pGame->IsThinking() && m_pPlayer->IsLocal())
	{
		CString strMessage;
		strMessage.Format(_T("(%s draws %s)"), m_pPlayer->GetPlayerName(), pCard->GetCardName());
		m_pGame->Message(strMessage,
			m_pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High);
	}

	return TRUE;
}

bool CDrawAction::Equals(const CAction* pAction) const
{
	if (!CAction::Equals(pAction))
		return FALSE;

	const CDrawAction* pDrawAction = dynamic_cast<const CDrawAction*>(pAction);
	if (!pDrawAction)
		return FALSE;

	if (pDrawAction == this)
		return TRUE;

	return 
		(m_pDrawNode == pDrawAction->m_pDrawNode) &&
		(m_pPlayer == pDrawAction->m_pPlayer);
}

//____________________________________________________________________________
//
CStackPassAction::CStackPassAction(CGame* pGame)
	: CAction(pGame)
	, m_bResolve(FALSE)
{
	SetDefaultAction();
	SetHideInConcise();	// 7/12/2002
	SetStackPassAction();
}

void CStackPassAction::SetStackPassInfo(BOOL bResolve)
{
	if (bResolve)
		SetActionName(_T("has no more responses and is ready for resolving the top spell/ability on the stack"));
	else
		SetActionName(_T("has no more responses"));

	m_bResolve = bResolve;
}

void CStackPassAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CStackPassAction* pThisAction = dynamic_cast<const CStackPassAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CStackPassAction* pThisAction = (const CStackPassAction*)pAction;
#endif

	__super::Copy(pAction);

	m_bResolve = pThisAction->m_bResolve;

	//SetStackPassInfo(pThisAction->m_bResolve);
}

BOOL CStackPassAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

#if 1	// 2/9/2005: To prevent leaving manas in mana pool

	if (m_pGame->GetPriorityPlayer()->GetManaPool().GetTotal() &&
		m_pGame->IsThinking() /*&&
		m_pGame->PreventPassWithMana() moved to CGame::GetSearchStatus*/)
	{
		const CStack& stack = m_pGame->GetStack();
		if (!stack.GetStackSize() || (stack.GetTopAction()->GetStackAbility()->GetAbilityType() != AbilityType::Triggered))	// Except when reacting to triggered abilities
			m_pGame->AddSearchBreak(SearchBreak::PassWithMana);
	}
#endif

	if (!m_bResolve)
	{
		//m_pGame->SetNextPriorityPlayer();	7/29/2002: moved into IncreasePassCount()
		m_pGame->GetStack().IncreasePassCount();
		return TRUE;
	}

#if 1
	m_pGame->GetStack().ResolveTopAction();

	return m_pGame->GetStack().ResolutionCompletionPending() ? TRUE : // changed to always return TRUE to support Thieves' Auction
		m_pGame->GetStack().GetLastResolutionResult();
#else
/*
	CStackAbilityAction* pAction = m_pGame->GetStack()->RemoveTopMove();
	if (!pAction)
		return FALSE;

	m_pGame->SetPriorityPlayer(m_pGame->GetActivePlayer());

	BOOL bResult = pAction->GetStackAbility()->ResolveImpl(pAction);

	pAction->Release();

	return bResult;
*/
#endif
}

bool CStackPassAction::Equals(const CAction* pAction) const
{
	if (!CAction::Equals(pAction))
		return FALSE;

	const CStackPassAction* pStackPassAction = dynamic_cast<const CStackPassAction*>(pAction);
	if (!pStackPassAction)
		return FALSE;

	if (pStackPassAction == this)
		return TRUE;

	return (m_bResolve == pStackPassAction->m_bResolve);
}

//____________________________________________________________________________
//
CStackDenialAction::CStackDenialAction(CGame* pGame)
	: CAction(pGame)
	, m_nStackActionIndex(-1)
	, m_pPayer(NULL)
	, m_CostConfigEntry()
{
}

void CStackDenialAction::SetDenialActionInfo(int nStackActionIndex, CPlayer* pPayer,
										 const CCostConfigEntry& CostConfigEntry)
{
	m_nStackActionIndex = nStackActionIndex;
	m_pPayer = pPayer;
	m_CostConfigEntry = CostConfigEntry;
}

void CStackDenialAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CStackDenialAction* pThisAction = dynamic_cast<const CStackDenialAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CStackDenialAction* pThisAction = (const CStackDenialAction*)pAction;
#endif

	__super::Copy(pAction);

	m_nStackActionIndex = pThisAction->m_nStackActionIndex;
	m_pPayer = pThisAction->m_pPayer;
	m_CostConfigEntry = pThisAction->m_CostConfigEntry;

	/*
	SetDenialActionInfo(pThisAction->m_nStackActionIndex, 
		const_cast<CPlayer*>(pThisAction->m_cpPayer.GetPointer()), pThisAction->m_CostConfigEntry);
	*/
}

BOOL CStackDenialAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	BOOL bResult = m_CostConfigEntry.PayCost(m_pPayer);
	if (bResult)
	{
		m_pGame->GetStack().DenyTopAction();
	}
//	m_pGame->GetStack().SetActionStatus(m_nStackActionIndex,
	//	m_pGame->GetStack().GetActionStatus(m_nStackActionIndex) | StackActionStatus::Denied);

	return bResult;
}

bool CStackDenialAction::Equals(const CAction* pAction) const
{
	if (!CAction::Equals(pAction))
		return FALSE;

	const CStackDenialAction* pStackDenialAction = dynamic_cast<const CStackDenialAction*>(pAction);
	if (!pStackDenialAction)
		return FALSE;

	if (pStackDenialAction == this)
		return TRUE;

	return (m_nStackActionIndex == pStackDenialAction->m_nStackActionIndex) &&
			(m_pPayer == pStackDenialAction->m_pPayer) &&
			m_CostConfigEntry == pStackDenialAction->m_CostConfigEntry;
}

//____________________________________________________________________________
//
CManaProductionAbilityAction::CManaProductionAbilityAction(CGame* pGame)
	: CNonStackAbilityAction(pGame)
{
	SetManaProducing();
}

CManaProductionAbility* CManaProductionAbilityAction::GetManaProductionAbility() const
{
	return (CManaProductionAbility*)GetNonStackAbility();
}

void CManaProductionAbilityAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CManaProductionAbilityAction* pThisAction = dynamic_cast<const CManaProductionAbilityAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CManaProductionAbilityAction* pThisAction = (const CManaProductionAbilityAction*)pAction;
#endif

	__super::Copy(pAction);

	SetManaPool(pThisAction->m_ManaPool);
}

bool CManaProductionAbilityAction::Equals(const CAction* pAction) const
{
	if (!CNonStackAbilityAction::Equals(pAction))
		return FALSE;

	const CManaProductionAbilityAction* pManaProductionAbilityAction = dynamic_cast<const CManaProductionAbilityAction*>(pAction);
	if (!pManaProductionAbilityAction)
		return FALSE;

	if (pManaProductionAbilityAction == this)
		return TRUE;

	return m_ManaPool == pManaProductionAbilityAction->m_ManaPool;
}

counted_ptr<CUndoAction> CManaProductionAbilityAction::CreateUndoAction() const
{
	counted_ptr<CUndoManaProductionAction> cpUndoAction(::CreateObject<CUndoManaProductionAction>(m_pGame));

	cpUndoAction->SetUndoPlayer(m_cpAbility->GetCard()->GetController());

	ATLASSERT(m_cpAbility->GetCard()->GetOrientation()->IsTapped() &&
		m_cpAbility->GetCard()->GetController()->GetManaPool().GetTotal());
	cpUndoAction->SetUndoInfo(m_cpAbility->GetCard(), m_ManaPool);

	return cpUndoAction.GetPointer();
}

//____________________________________________________________________________
//
CManaFilterAbilityAction::CManaFilterAbilityAction(CGame* pGame)
	: CManaProductionAbilityAction(pGame)
{ 
	SetManaFiltering();
}

//____________________________________________________________________________
//
CManaFilterSpellAction::CManaFilterSpellAction(CGame* pGame)
	: CStackAbilityAction(pGame)
{
	SetManaFiltering();
}

void CManaFilterSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CManaFilterSpellAction* pThisAction = dynamic_cast<const CManaFilterSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CManaFilterSpellAction* pThisAction = (const CManaFilterSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	SetManaPool(pThisAction->m_ManaPool);
}

bool CManaFilterSpellAction::Equals(const CAction* pAction) const
{
	if (!__super::Equals(pAction))
		return FALSE;

	const CManaFilterSpellAction* pThisAction = dynamic_cast<const CManaFilterSpellAction*>(pAction);
	if (!pThisAction)
		return FALSE;

	if (pThisAction == this)
		return TRUE;

	return m_ManaPool == pThisAction->m_ManaPool;
}

//____________________________________________________________________________
//
CAttackAction::CAttackAction(CGame* pGame)
	: CNonStackAbilityAction(pGame)
{
	SetAnnounce();
	SetTapAction();
	SetAnnounce();
	SetScore(ActionScore::Attack);		// 4/24/2001
	SetAttack();
}

void CAttackAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CAttackAction* pThisAction = dynamic_cast<const CAttackAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CAttackAction* pThisAction = (const CAttackAction*)pAction;
#endif

	__super::Copy(pAction);

	m_Attacked = pThisAction->m_Attacked;
}

bool CAttackAction::Equals(const CAction* pAction) const
{
	if (!CNonStackAbilityAction::Equals(pAction))
		return FALSE;

	const CAttackAction* pAttackAbilityAction = dynamic_cast<const CAttackAction*>(pAction);
	if (!pAttackAbilityAction)
		return FALSE;

	if (pAttackAbilityAction == this)
		return TRUE;

	return m_Attacked.cpPlaneswalker == pAttackAbilityAction->m_Attacked.cpPlaneswalker &&
		m_Attacked.pPlayer == pAttackAbilityAction->m_Attacked.pPlayer;
}

CCard* CAttackAction::GetAssociatedCard() const 
{ 
	return m_Attacked.cpPlaneswalker.GetPointer(); 
}

void CAttackAction::SetAttacked(AttackSubject attacked) 
{ 
	m_Attacked = attacked; 

	if (!m_Attacked.cpPlaneswalker.GetPointer())
		SetBasicNonStackAction();
}

//____________________________________________________________________________
//
CBlockAction::CBlockAction(CGame* pGame)
	: CNonStackAbilityAction(pGame)
{
	SetAnnounce();
	SetScore(ActionScore::Block);		// 4/24/2001
	SetBlock();
}

void CBlockAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CBlockAction* pThisAction = dynamic_cast<const CBlockAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CBlockAction* pThisAction = (const CBlockAction*)pAction;
#endif

	__super::Copy(pAction);

	m_Attackers = pThisAction->m_Attackers;
}

bool CBlockAction::Equals(const CAction* pAction) const
{
	if (!CNonStackAbilityAction::Equals(pAction))
		return FALSE;

	const CBlockAction* pBlockAbilityAction = dynamic_cast<const CBlockAction*>(pAction);
	if (!pBlockAbilityAction)
		return FALSE;

	if (pBlockAbilityAction == this)
		return TRUE;

	return m_Attackers == pBlockAbilityAction->m_Attackers;
}

#ifdef USE_NS_CUT
DWORD CBlockAction::GetCutID() const
{
	ATLASSERT(IsBasicNonStackAction() && m_Attackers.GetSize() == 1);

	if (m_Attackers.GetSize() != 1)
		return 0; // see also CompareDWordArray()

	CCard* pBlocker = GetAbility()->GetCard();
	CCard* pAttacker = m_Attackers.GetAt(0);

	return (pBlocker->GetInstanceID() << 16) | pAttacker->GetInstanceID();
}
#endif

#ifdef M10_COMBAT
//____________________________________________________________________________
//
CDamageAssignmentOrderAction::CDamageAssignmentOrderAction(CGame* pGame)
	: CNonStackAbilityAction(pGame)
{
	SetAnnounce();
	SetDamageAssignmentOrder();
}

void CDamageAssignmentOrderAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CDamageAssignmentOrderAction* pThisAction = dynamic_cast<const CDamageAssignmentOrderAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CDamageAssignmentOrderAction* pThisAction = (const CDamageAssignmentOrderAction*)pAction;
#endif

	__super::Copy(pAction);

	m_SubjectGroup = pThisAction->m_SubjectGroup;
}

bool CDamageAssignmentOrderAction::Equals(const CAction* pAction) const
{
	if (!CNonStackAbilityAction::Equals(pAction))
		return FALSE;

	const CDamageAssignmentOrderAction* pCombatAssignmentOrderAction = dynamic_cast<const CDamageAssignmentOrderAction*>(pAction);
	if (!pCombatAssignmentOrderAction)
		return FALSE;

	if (pCombatAssignmentOrderAction == this)
		return TRUE;

	return m_SubjectGroup == pCombatAssignmentOrderAction->m_SubjectGroup;
}
#endif

//____________________________________________________________________________
//
CCombatDamageAssignmentAction::CCombatDamageAssignmentAction(CGame* pGame)
	: CNonStackAbilityAction(pGame)
{
	SetAnnounce();
	SetCombatDamageAssignment();
}

void CCombatDamageAssignmentAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CCombatDamageAssignmentAction* pThisAction = dynamic_cast<const CCombatDamageAssignmentAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CCombatDamageAssignmentAction* pThisAction = (const CCombatDamageAssignmentAction*)pAction;
#endif

	__super::Copy(pAction);

	m_SubjectGroup = pThisAction->m_SubjectGroup;
}

bool CCombatDamageAssignmentAction::Equals(const CAction* pAction) const
{
	if (!CNonStackAbilityAction::Equals(pAction))
		return FALSE;

	const CCombatDamageAssignmentAction* pADAssignAbilityAction = dynamic_cast<const CCombatDamageAssignmentAction*>(pAction);
	if (!pADAssignAbilityAction)
		return FALSE;

	if (pADAssignAbilityAction == this)
		return TRUE;

	return m_SubjectGroup == pADAssignAbilityAction->m_SubjectGroup;
}

//____________________________________________________________________________
//
CManaConsumptionAbilityAction::CManaConsumptionAbilityAction(CGame* pGame)
	: CStackAbilityAction(pGame)
{
	SetManaConsuming();
}

//____________________________________________________________________________
//
CNonStackManaConsumptionAbilityAction::CNonStackManaConsumptionAbilityAction(CGame* pGame)
	: CNonStackAbilityAction(pGame)
{
	SetManaConsuming();
}

//____________________________________________________________________________
//
CTargetSpellAction::CTargetSpellAction(CGame* pGame)
	: CManaConsumptionAbilityAction(pGame)
{
	SetTargeting();
}

BOOL CTargetSpellAction::CanBeDeniedBy(const CPlayer* pPlayer) const
{
	if (!CManaConsumptionAbilityAction::CanBeDeniedBy(pPlayer))
		return FALSE;

	for (CSubjectGroup::CardSubjectIterator i = m_TargetGroup.CardSubjectBegin();
		i != m_TargetGroup.CardSubjectEnd(); ++i)
	{
		const CCard* pCard = i->GetPointer();
		if (pCard->GetController() == pPlayer)
			return TRUE;
	}

	return m_TargetGroup.HasSubject(pPlayer);
}

void CTargetSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTargetSpellAction* pThisAction = dynamic_cast<const CTargetSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CTargetSpellAction* pThisAction = (const CTargetSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	m_TargetGroup = pThisAction->m_TargetGroup;
}

bool CTargetSpellAction::Equals(const CAction* pAction) const
{
	if (!CManaConsumptionAbilityAction::Equals(pAction))
		return FALSE;

	const CTargetSpellAction* pTargetSpellAction = dynamic_cast<const CTargetSpellAction*>(pAction);
	if (!pTargetSpellAction)
		return FALSE;

	if (pTargetSpellAction == this)
		return TRUE;

	return m_TargetGroup == pTargetSpellAction->m_TargetGroup;
}

BOOL CTargetSpellAction::CanDeflectTargetToCard(const CCard* pCard) const
{
	return ((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->CanDeflectTargetToCard(this, pCard);
}

BOOL CTargetSpellAction::CanDeflectTargetToSpell(const CCard* pSource) const 
{
	return FALSE;
}

BOOL CTargetSpellAction::CanDeflectTargetToPlayer(const CPlayer* pPlayer) const
{
	return ((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->CanDeflectTargetToPlayer(this, pPlayer);
}

void CTargetSpellAction::DeflectTargetToCard(CCard* pCard)
{
	((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->DeflectTargetToCard(this, pCard);
}

void CTargetSpellAction::DeflectTargetToSpell(CCard* pSource)
{
	ATLASSERT(false);
}

void CTargetSpellAction::DeflectTargetToPlayer(CPlayer* pPlayer)
{
	((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->DeflectTargetToPlayer(this, pPlayer);
}

//____________________________________________________________________________
//
CDoubleTargetSpellAction::CDoubleTargetSpellAction(CGame* pGame)
	: CManaConsumptionAbilityAction(pGame)
{
	//SetTargeting();
	SetDoubleTargeting();
}

BOOL CDoubleTargetSpellAction::CanBeDeniedBy(const CPlayer* pPlayer) const
{
	if (!CManaConsumptionAbilityAction::CanBeDeniedBy(pPlayer))
		return FALSE;

	for (CSubjectGroup::CardSubjectIterator i = m_TargetGroup1.CardSubjectBegin();
		i != m_TargetGroup1.CardSubjectEnd(); ++i)
	{
		const CCard* pCard = i->GetPointer();
		if (pCard->GetController() == pPlayer)
			return TRUE;
	}

	for (CSubjectGroup::CardSubjectIterator i = m_TargetGroup2.CardSubjectBegin();
		i != m_TargetGroup2.CardSubjectEnd(); ++i)
	{
		const CCard* pCard = i->GetPointer();
		if (pCard->GetController() == pPlayer)
			return TRUE;
	}

	return (m_TargetGroup1.HasSubject(pPlayer) ||  m_TargetGroup1.HasSubject(pPlayer));
}

void CDoubleTargetSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CDoubleTargetSpellAction* pThisAction = dynamic_cast<const CDoubleTargetSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CDoubleTargetSpellAction* pThisAction = (const CDoubleTargetSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	m_TargetGroup1 = pThisAction->m_TargetGroup1;
	m_TargetGroup2 = pThisAction->m_TargetGroup2;
}

bool CDoubleTargetSpellAction::Equals(const CAction* pAction) const
{
	if (!CManaConsumptionAbilityAction::Equals(pAction))
		return FALSE;

	const CDoubleTargetSpellAction* pTargetSpellAction = dynamic_cast<const CDoubleTargetSpellAction*>(pAction);
	if (!pTargetSpellAction)
		return FALSE;

	if (pTargetSpellAction == this)
		return TRUE;

	return (m_TargetGroup1 == pTargetSpellAction->m_TargetGroup1 && 
			m_TargetGroup2 == pTargetSpellAction->m_TargetGroup2);
}

/*BOOL CDoubleTargetSpellAction::CanDeflectTarget1ToCard(const CCard* pCard) const
{
	return ((CDoubleTargetSpell*)m_cpAbility.GetPointer())->GetTargeting1()->CanDeflectTargetToCard(this, pCard);
}

BOOL CDoubleTargetSpellAction::CanDeflectTarget1ToSpell(const CCard* pSource) const 
{
	return FALSE;
}
BOOL CDoubleTargetSpellAction::CanDeflectTarget2ToCard(const CCard* pCard) const
{
	return ((CDoubleTargetSpell*)m_cpAbility.GetPointer())->GetTargeting2()->CanDeflectTargetToCard(this, pCard);
}

BOOL CDoubleTargetSpellAction::CanDeflectTarget2ToSpell(const CCard* pSource) const 
{
	return FALSE;
}
BOOL CTargetSpellAction::CanDeflectTargetToPlayer(const CPlayer* pPlayer) const
{
	return ((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->CanDeflectTargetToPlayer(this, pPlayer);
}

void CTargetSpellAction::DeflectTargetToCard(CCard* pCard)
{
	((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->DeflectTargetToCard(this, pCard);
}

void CTargetSpellAction::DeflectTargetToSpell(CCard* pSource)
{
	ATLASSERT(false);
}

void CTargetSpellAction::DeflectTargetToPlayer(CPlayer* pPlayer)
{
	((CTargetSpell*)m_cpAbility.GetPointer())->GetTargeting()->DeflectTargetToPlayer(this, pPlayer);
}
*/
//____________________________________________________________________________
//
CTargetStackSpellAction::CTargetStackSpellAction(CGame* pGame)
	: CManaConsumptionAbilityAction(pGame)
{
	SetTargeting();
}

BOOL CTargetStackSpellAction::CanBeDeniedBy(const CPlayer* pPlayer) const
{
	if (!CManaConsumptionAbilityAction::CanBeDeniedBy(pPlayer))
		return FALSE;

	for (CSubjectGroup::CardSubjectIterator i = m_TargetGroup.CardSubjectBegin();
		i != m_TargetGroup.CardSubjectEnd(); ++i)
	{
		const CCard* pCard = i->GetPointer();
		if (pCard->GetController() == pPlayer)
			return TRUE;
	}

	return FALSE;
}

void CTargetStackSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTargetStackSpellAction* pThisAction = dynamic_cast<const CTargetStackSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CTargetStackSpellAction* pThisAction = (const CTargetStackSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	m_TargetGroup = pThisAction->m_TargetGroup;
}

bool CTargetStackSpellAction::Equals(const CAction* pAction) const
{
	if (!CManaConsumptionAbilityAction::Equals(pAction))
		return FALSE;

	const CTargetStackSpellAction* pCounterSpellAction = dynamic_cast<const CTargetStackSpellAction*>(pAction);
	if (!pCounterSpellAction)
		return FALSE;

	if (pCounterSpellAction == this)
		return TRUE;

	return m_TargetGroup == pCounterSpellAction->m_TargetGroup;
}

BOOL CTargetStackSpellAction::CanDeflectTargetToCard(const CCard* pCard) const
{
	return FALSE;
}

BOOL CTargetStackSpellAction::CanDeflectTargetToSpell(const CCard* pSource) const 
{
	return ((CCounterSpell*)m_cpAbility.GetPointer())->CanDeflectTargetToSpell(this, pSource);
}

BOOL CTargetStackSpellAction::CanDeflectTargetToPlayer(const CPlayer* pPlayer) const
{
	return FALSE;
}

void CTargetStackSpellAction::DeflectTargetToCard(CCard* pCard)
{
	ATLASSERT(false);
}

void CTargetStackSpellAction::DeflectTargetToSpell(CCard* pSource)
{
	((CCounterSpell*)m_cpAbility.GetPointer())->DeflectTargetToSpell(this, pSource);
}

void CTargetStackSpellAction::DeflectTargetToPlayer(CPlayer* pPlayer)
{
	ATLASSERT(false);
}

//____________________________________________________________________________
//
CTargetDamagePreventionSpellAction::CTargetDamagePreventionSpellAction(CGame* pGame)
	: CTargetSpellAction(pGame)
{
}

void CTargetDamagePreventionSpellAction::SetSourceCard(CCard* pCard)
{
	m_cpSourceCard = pCard;
}

CCard* CTargetDamagePreventionSpellAction::GetSourceCard() const
{
	return m_cpSourceCard.GetPointer();
}

void CTargetDamagePreventionSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTargetDamagePreventionSpellAction* pThisAction = dynamic_cast<const CTargetDamagePreventionSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CTargetDamagePreventionSpellAction* pThisAction = (const CTargetDamagePreventionSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	m_cpSourceCard = pThisAction->m_cpSourceCard;
}

bool CTargetDamagePreventionSpellAction::Equals(const CAction* pAction) const
{
	if (!CTargetSpellAction::Equals(pAction))
		return FALSE;

	const CTargetDamagePreventionSpellAction* pDamagePreventionAction = dynamic_cast<const CTargetDamagePreventionSpellAction*>(pAction);
	if (!pDamagePreventionAction)
		return FALSE;

	if (pDamagePreventionAction == this)
		return TRUE;

	return m_cpSourceCard == pDamagePreventionAction->m_cpSourceCard;
}

//____________________________________________________________________________
//
CTargetCreatureDamageRedirectionSpellAction::CTargetCreatureDamageRedirectionSpellAction(CGame* pGame)
	: CTargetSpellAction(pGame)
{
}

void CTargetCreatureDamageRedirectionSpellAction::SetSourceCard(CCard* pCard)
{
	m_cpSourceCard = pCard;
}

CCard* CTargetCreatureDamageRedirectionSpellAction::GetSourceCard() const
{
	return m_cpSourceCard.GetPointer();
}

void CTargetCreatureDamageRedirectionSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CTargetCreatureDamageRedirectionSpellAction* pThisAction = dynamic_cast<const CTargetCreatureDamageRedirectionSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CTargetCreatureDamageRedirectionSpellAction* pThisAction = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	m_cpSourceCard = pThisAction->m_cpSourceCard;
}

bool CTargetCreatureDamageRedirectionSpellAction::Equals(const CAction* pAction) const
{
	if (!CTargetSpellAction::Equals(pAction))
		return FALSE;

	const CTargetCreatureDamageRedirectionSpellAction* pDamageRedirectionAction = dynamic_cast<const CTargetCreatureDamageRedirectionSpellAction*>(pAction);
	if (!pDamageRedirectionAction)
		return FALSE;

	if (pDamageRedirectionAction == this)
		return TRUE;

	return m_cpSourceCard == pDamageRedirectionAction->m_cpSourceCard;
}

//____________________________________________________________________________
//
CDamagePreventionSpellAction::CDamagePreventionSpellAction(CGame* pGame)
	: CManaConsumptionAbilityAction(pGame)
{
}

void CDamagePreventionSpellAction::SetSourceCard(CCard* pCard)
{
	m_cpSourceCard = pCard;
}

CCard* CDamagePreventionSpellAction::GetSourceCard() const
{
	return m_cpSourceCard.GetPointer();
}

void CDamagePreventionSpellAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CDamagePreventionSpellAction* pThisAction = dynamic_cast<const CDamagePreventionSpellAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CDamagePreventionSpellAction* pThisAction = (const CDamagePreventionSpellAction*)pAction;
#endif

	__super::Copy(pAction);

	m_cpSourceCard = pThisAction->m_cpSourceCard;
}

bool CDamagePreventionSpellAction::Equals(const CAction* pAction) const
{
	if (!__super::Equals(pAction))
		return FALSE;

	const CDamagePreventionSpellAction* pDamagePreventionAction = dynamic_cast<const CDamagePreventionSpellAction*>(pAction);
	if (!pDamagePreventionAction)
		return FALSE;

	if (pDamagePreventionAction == this)
		return TRUE;

	return m_cpSourceCard == pDamagePreventionAction->m_cpSourceCard;
}

/* Merged into CAction
//____________________________________________________________________________
//
void CSelectionAction::SetSelectionIndex(int nIndex)
{
	m_Value.nValue1 = static_cast<DWORD>(nIndex);
}

BOOL CSelectionAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	m_pGame->GetSelection().Select(m_Value.nValue1);

	return TRUE;
}
*/

//____________________________________________________________________________
//
void CUndoAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CUndoAction* pThisAction = dynamic_cast<const CUndoAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CUndoAction* pThisAction = (const CUndoAction*)pAction;
#endif

	__super::Copy(pAction);

	m_pUndoPlayer = pThisAction->m_pUndoPlayer;
}

bool CUndoAction::Equals(const CAction* pAction) const
{
	if (!__super::Equals(pAction))
		return FALSE;

	const CUndoAction* pThisAction = dynamic_cast<const CUndoAction*>(pAction);
	if (!pThisAction)
		return FALSE;

	if (pThisAction == this)
		return TRUE;

	return m_pUndoPlayer == pThisAction->m_pUndoPlayer;
}

void CUndoAction::SetUndoPlayer(CPlayer* pUndoPlayer)
{
	m_pUndoPlayer = pUndoPlayer;
}

BOOL CUndoAction::PerformActionImpl() const
{
	if (!__super::PerformActionImpl())
		return FALSE;

	CCountedPtrContainer<CUndoAction>* pActions = m_pUndoPlayer->GetUndoActions();

	ATLASSERT(pActions->GetSize());

	pActions->RemoveAt(pActions->GetSize() - 1);

	Undo();

	return TRUE;
}

//____________________________________________________________________________
//
void CUndoManaProductionAction::Copy(const CAction* pAction)
{
#ifdef _DEBUG
	const CUndoManaProductionAction* pThisAction = dynamic_cast<const CUndoManaProductionAction*>(pAction);
	ATLASSERT(pThisAction);
#else
	const CUndoManaProductionAction* pThisAction = (const CUndoManaProductionAction*)pAction;
#endif

	__super::Copy(pAction);

	m_pUntapCard = pThisAction->m_pUntapCard;
	m_RemoveMana = pThisAction->m_RemoveMana;
}

bool CUndoManaProductionAction::Equals(const CAction* pAction) const
{
	if (!__super::Equals(pAction))
		return FALSE;

	const CUndoManaProductionAction* pThisAction = dynamic_cast<const CUndoManaProductionAction*>(pAction);
	if (!pThisAction)
		return FALSE;

	if (pThisAction == this)
		return TRUE;

	return m_pUntapCard == pThisAction->m_pUntapCard &&
		m_RemoveMana == pThisAction->m_RemoveMana;
}

void CUndoManaProductionAction::SetUndoInfo(CCard* pUntapCard, CManaPool removeMana)
{
	SetOriginatingCard(pUntapCard);

	m_pUntapCard = pUntapCard;
	m_RemoveMana = removeMana;

	CString strActionName;
	strActionName.Format(_T("undoes tap %s"), pUntapCard->GetCardName());
	SetActionName(strActionName);
}

void CUndoManaProductionAction::Undo() const
{
	m_pUntapCard->GetOrientation()->Untap();
	m_pUndoPlayer->GetManaPool().RemoveMana2(m_RemoveMana, true);
}