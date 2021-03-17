#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CBeforeBeginningNode::CBeforeBeginningNode(CGraph* pGraph)
	: CNode(pGraph, NodeId::BeforeBeginningStep, AbilityType::_TriggerOkay, NodeId::BeginningStep)
{
}

void CBeforeBeginningNode::GetNodeActions(CActionContainer& actionContainer)
{
	if (!IsTransitValid())
		return;

	int nTurns;
	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::SkipNextTurn, nTurns, FALSE) && nTurns)
	{
		m_pGame->GetActivePlayer()->GetPlayerEffect().ClearPlayerEffect(PlayerEffectType::SkipNextTurn, FALSE);
		if (nTurns > 1)
			m_pGame->GetActivePlayer()->GetPlayerEffect().AddPlayerEffect(PlayerEffectType::SkipNextTurn, FALSE, nTurns - 1);

		counted_ptr<CNodeAction> cpNodeMove = ::CreateObject<CNodeAction>(m_pGame);
		ATLASSERT(cpNodeMove);

		cpNodeMove->SetTransitInfo(m_pGraph);

		actionContainer.Add(cpNodeMove.GetPointer());

		return;
	}

	return __super::GetNodeActions(actionContainer);
}

//____________________________________________________________________________
//
CBeginningNode::CBeginningNode(CGraph* pGraph)
	: CNode(pGraph, NodeId::BeginningStep, AbilityType::Null, NodeId::UntapStep)
{
}

void CBeginningNode::OnAfterEntry()
{
	__super::OnAfterEntry();

	m_pGame->GetActivePlayer()->IncreasePlayerTurnNumber();	// 50/30/2002, moved from CNodeAction::PerformAction()
	m_pGame->IncreaseGameTurnNumber();						// 50/30/2002, moved from CNodeAction::PerformAction()
//	m_pGame->ResetDeadZuberas();
	//m_pGame->SetAfterUpkeep(FALSE);

	CEndOfCombatNode* pCombatNode = (CEndOfCombatNode*)(GetGraph()->GetNodeById(NodeId::EndOfCombatStep));
	pCombatNode->ResetFastCombatCount();

	CMainNode* pMainNode = (CMainNode*)(GetGraph()->GetNodeById(NodeId::MainPhaseStep));
	pMainNode->ResetCombatCount();
	pMainNode->ResetLandCount();

	


	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		pPlayer->ResetTurnInfo();							// 11/2/2003

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);	// Note: graveyard/library cards are not touched for now
		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CCard* pCard = pInplay->GetAt(j);
			for (int k = 0; k < pCard->GetAbilityCount(); ++k)
				{
					pCard->GetAbility(k)->ResetTurnUsageCount();
					pCard->GetAbility(k)->ResetTurnResolveCount();
				}
		}
		
		pInplay = pPlayer->GetZoneById(ZoneId::Hand);	// Note: graveyard/library cards are not touched for now
		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CCard* pCard = pInplay->GetAt(j);
			for (int k = 0; k < pCard->GetAbilityCount(); ++k)
				{
					pCard->GetAbility(k)->ResetTurnUsageCount();
					pCard->GetAbility(k)->ResetTurnResolveCount();
				}
		}
	}

	if (!m_pGame->IsThinking())
	{
		// 4/2/2001
//		if (m_pGraph->GetPlayer()->IsComputer())
//			m_pGraph->GetPlayer()->RemoveAllPlannedMoves();

		m_pGame->LogState();
	}

	if (GetGraph()->GetPlayer()->IsPlanechase())
	{
		CZone* peZone = GetGraph()->GetPlayer()->GetZoneById(ZoneId::_Effects);
		bool to_move = true;
		for (int i = 0; i <  peZone->GetSize(); ++i)
			if (peZone->GetAt(i)->GetCardType().IsPlane() ) to_move = false;
		if (to_move)
		{
			CZone* peOppZone = m_pGame->GetNextPlayer(GetGraph()->GetPlayer())->GetZoneById(ZoneId::_Effects);
			CCountedCardContainer planes;
			for (int i = 0; i <  peOppZone->GetSize(); ++i)
				if (peOppZone->GetAt(i)->GetCardType().IsPlane())
					planes.AddCard(peOppZone->GetAt(i),CardPlacement::Top);

			for (int i = 0; i <  planes.GetSize(); ++i)
				planes.GetAt(i)->Move(peZone,GetGraph()->GetPlayer(), MoveType::Others);
		}
	}
	if (GetGraph()->GetPlayer()->GetDetainedCount() ||  m_pGame->GetNextPlayer(GetGraph()->GetPlayer())->GetDetainedCount())
	{
	//	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
	//	pModifier->GetModifier().SetToRemove(CardKeyword::Detain);
	//	pModifier->GetModifier().SetOneTurnOnly(FALSE);

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);

			CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);	// Note: graveyard/library cards are not touched for now
			for (int j = 0; j < pInplay->GetSize(); ++j)
			{
				if ( pInplay->GetAt(j)->GetCardKeyword()->HasDetain())
					if (GetGraph()->GetPlayer()->IsCertainCardDetained(pInplay->GetAt(j)))
					{
						if (!m_pGame->GetNextPlayer(GetGraph()->GetPlayer())->IsCertainCardDetained(pInplay->GetAt(j)))
							pInplay->GetAt(j)->GetCardKeyword()->RemoveDetain(FALSE);
						GetGraph()->GetPlayer()->RemoveDetain(pInplay->GetAt(j));
					}
				if ( pInplay->GetAt(j)->GetCardType().IsCreature())
					((CCreatureCard*)pInplay->GetAt(j))->ZeroCounts(true);
			}
		}
	}
}

BOOL CBeginningNode::OnBeforeExit()
{
	m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::SkipNextUntapStep, FALSE);
	return __super::OnBeforeExit();
}

void CBeginningNode::GetNodeActions(CActionContainer& actionContainer)
{
	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SkipNextUntapStep))
	{
		m_NextNodeId = NodeId::UpkeepStep;
	}
	else
	{
		m_NextNodeId = NodeId::UntapStep;
	}

	return __super::GetNodeActions(actionContainer);
}

//____________________________________________________________________________
//
CUntapNode::CUntapNode(CGraph* pGraph)
	: CNode(pGraph, NodeId::UntapStep, AbilityType::_UntapOkay, NodeId::UpkeepStep)
	, m_CardFilter(_T("non indirect phaser"), _T("non indirect phasers"), new CardKeywordComparer(CardKeyword::Phasing, false))
	, m_CardFilter1(_T("a phased out card"), _T("phased out cards"), new CardFlagComparer(CardFlag::PhaseFlag, false))
	, m_CardFilter2(_T("a phased out card"), _T("phased out cards"), new CardFlagComparer(CardFlag::PhaseFlag, false))
{
	m_CardFilter.AddNegateComparer(new IndirectPhasingComparer);
	m_CardFilter1.AddNegateComparer(new CardTypeComparer(CardType::_Aura | CardType::Equipment, false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::_Aura | CardType::Equipment, false));
}
void CUntapNode::OnAfterEntry()
{
	if (GetGraph()->GetPlayer()->IsPhasing())
	{
	CZone* pZone = GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);
	CZone* pZone_phase = GetGraph()->GetPlayer()->GetZoneById(ZoneId::_PhasedOut);

	CCountedCardContainer phase_out;
	CCountedCardContainer phase_in;
	CCountedCardContainer phase_in1;

	m_CardFilter.GetIncluded(*pZone, phase_out);
	m_CardFilter1.GetIncluded(*pZone_phase, phase_in);
	m_CardFilter2.GetIncluded(*pZone_phase, phase_in1);

	for (int ic = 0; ic < phase_out.GetSize(); ++ic)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::_PhasedOut, FALSE, MoveType::Phasing);
		CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::PhaseFlag);
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier.GetModifier().SetAdditionData(phase_out.GetAt(ic)->GetInstanceID());
		pModifier.ApplyTo(phase_out.GetAt(ic));
		m_CardFlagModifier.ApplyTo(phase_out.GetAt(ic));
	}

	for (int ic = 0; ic < phase_in.GetSize(); ++ic)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_PhasedOut, ZoneId::Battlefield, FALSE, MoveType::Phasing);
		CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
		m_CardFlagModifier.GetModifier().SetToRemove(CardFlag::PhaseFlag);
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier.GetModifier().SetRemovalData(phase_in.GetAt(ic)->GetInstanceID());
		pModifier.ApplyTo(phase_in.GetAt(ic));
		m_CardFlagModifier.ApplyTo(phase_in.GetAt(ic));
	}

	for (int ic = 0; ic < phase_in1.GetSize(); ++ic)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_PhasedOut, ZoneId::Battlefield, FALSE, MoveType::Phasing);
		CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
		m_CardFlagModifier.GetModifier().SetToRemove(CardFlag::PhaseFlag);
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier.GetModifier().SetRemovalData(phase_in1.GetAt(ic)->GetInstanceID());
		pModifier.ApplyTo(phase_in1.GetAt(ic));
		m_CardFlagModifier.ApplyTo(phase_in1.GetAt(ic));
	}
	}
	__super::OnAfterEntry();
}
BOOL CUntapNode::OnBeforeExit()
{
	m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::CreaturesDontUntapNextCont, FALSE);

	CZone* pZone = GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);
	
	
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		pZone->GetAt(i)->GetCardKeyword()->RemoveNoUntapInNextContUntap(FALSE);
	}
	
	return __super::OnBeforeExit();
}

void CUntapNode::GetNodeActions(CActionContainer& actionContainer)
{
	CZone* pZone = GetGraph()->GetPlayer()->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		CUntapAbility* pUntapAbility = pZone->GetAt(i)->GetUntapAbility();

		if (pUntapAbility &&	// to support phyrexian colossus
			pUntapAbility->IsPlayable(TRUE, FALSE))
			return;
	}

	CNode::GetNodeActions(actionContainer);
}

//____________________________________________________________________________
//
CUpkeepNode::CUpkeepNode(CGraph* pGraph)
	: CNode(pGraph, NodeId::UpkeepStep, AbilityType::_FastestOkay | AbilityType::_FastOkay | AbilityType::_UpkeepOkay,
	NodeId::DrawStep1)
{
}

BOOL CUpkeepNode::OnBeforeExit()
{
	m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
	
	CZone* pZone = GetGraph()->GetPlayer()->GetZoneById(ZoneId::_Effects);
	//m_pGame->SetAfterUpkeep(TRUE);

	if (pZone->GetSize()>0)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::_Tokens, TRUE);
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		if (!pZone->GetAt(i)->GetCardKeyword()->IsEmblem())
		pModifier.ApplyTo(pZone->GetAt(i));
	}

	}
	return __super::OnBeforeExit();
}

void CUpkeepNode::GetNodeActions(CActionContainer& actionContainer)
{
	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SkipNextDrawStep))
	{
		m_NextNodeId = NodeId::MainPhaseStep;
	}
	else
	{
		m_NextNodeId = NodeId::DrawStep1;
	}

	return __super::GetNodeActions(actionContainer);
}

//____________________________________________________________________________
//
CDrawNode1::CDrawNode1(CGraph* pGraph)
	: CNode(pGraph, NodeId::DrawStep1, AbilityType::Null, NodeId::DrawStep2)
	, m_nNormalDrawCount(0)
	, m_nNormalDrawsAllowed(1)
{
}

void CDrawNode1::OnAfterEntry()
{
	__super::OnAfterEntry();

	m_nNormalDrawCount = 0;
}

void CDrawNode1::GetNodeActions(CActionContainer& actionContainer)
{
	if (!IsTransitValid())
		return;

	const CPlayer* pPlayer = GetGraph()->GetPlayer();
	
	if ((!pPlayer->GetStartingPlayer() || pPlayer->GetPlayerTurnNumber() > 1)
		&& (m_nNormalDrawCount < m_nNormalDrawsAllowed))
	{
		// Special case: if there are no cards and player cannot lose, just continue on to the next node

		if (pPlayer->GetZoneById(ZoneId::Library)->GetSize() == 0)
		{
			if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantLoseGame))
			{
				AddTransitMove(&actionContainer);
				return;
			}
		}

		counted_ptr<CDrawAction> cpDrawAction = ::CreateObject<CDrawAction>(m_pGame);
		ATLASSERT(cpDrawAction);

		cpDrawAction->SetDrawInfo(GetGraph()->GetPlayer(), this);
		cpDrawAction->SetHideInConcise();

		actionContainer.Add(cpDrawAction.GetPointer());
	}
	else
		AddTransitMove(&actionContainer);
}

void CDrawNode1::IncreaseNormalDrawCount()
{
	++m_nNormalDrawCount;
}

int CDrawNode1::GetNormalDrawsAllowed() const
{
	return m_nNormalDrawsAllowed;
}

void CDrawNode1::SetNormalDrawsAllowed(int nNormalDrawsAllowed)
{
	m_nNormalDrawsAllowed = nNormalDrawsAllowed;
}

//____________________________________________________________________________
//
CDrawNode2::CDrawNode2(CGraph* pGraph)
	: CNode(pGraph, NodeId::DrawStep2, AbilityType::_FastestOkay | AbilityType::_FastOkay, NodeId::MainPhaseStep)
{
}

BOOL CDrawNode2::OnBeforeExit()
{
	//m_pGraph->GetPlayer()->IncreasePlayerDrawNumber();
	m_pGame->IncreaseGameDrawNumber();

	return CNode::OnBeforeExit();
}

//____________________________________________________________________________
//
CMainNode::CMainNode(CGraph* pGraph)
	: CNode(pGraph, NodeId::MainPhaseStep, AbilityType::_FastestOkay | AbilityType::_FastOkay | AbilityType::_SlowOkay, NodeId::EndStep)
	, m_nMaxLandCount(1)
	, m_nMaxCombatCount(1)
	, m_nCombatCount(0)
	, m_nLandCount(0)
	, m_nTurnMaxLandCount(1)
	, m_nTurnMaxCombatCount(1)
{
#ifdef THINK_HISTORY
	m_nCombatCount.SetUseInThinkHistory(false);
	m_nLandCount.SetUseInThinkHistory(false);
#endif
}
void CMainNode::OnAfterEntry()
{
	CNode::OnAfterEntry();

	if (GetGraph()->GetPlayer()->IsArchenemy())
	{
		if (GetGraph()->GetPlayer()->CanResolveScheme())
		{
			CPlayer* player = GetGraph()->GetPlayer();

				
			CZoneModifier pmodifier2 = CZoneModifier(m_pGame, ZoneId::_Schemes, 1, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // what cards
			ZoneId::_Effects, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pmodifier2.ApplyTo(player);

			player->ResolveScheme();

			if(! player->GetZoneById(ZoneId::_Effects)->GetTopCard()->GetCardKeyword()->IsEmblem())

			player->GetZoneById(ZoneId::_Effects)->GetTopCard()->Move(player->GetZoneById(ZoneId::_Schemes), player, MoveType::Others, CardPlacement::Bottom);
		}
		
	}
}
void CMainNode::GetNodeActions(CActionContainer& actionContainer)
{
	if (!IsTransitValid())
		return;
	
	BOOL bTransitAllowed = TRUE;

	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SkipNextCombatPhase))
	{
		if (m_nTurnMaxCombatCount > 0)
			--m_nTurnMaxCombatCount;
		m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::SkipNextCombatPhase, FALSE);
	}
	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SkipAllCombatPhases))
	{
		m_nTurnMaxCombatCount = 0;
	}

	if ((m_nCombatCount < m_nTurnMaxCombatCount) &&
		(m_pGame->GetActivePlayer() == m_pGame->GetPriorityPlayer()))
	{
		// Find creatures able to attack

		BOOL bFound = FALSE;
		CPlayer* pPlayer = GetGraph()->GetPlayer();
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (pCard->GetCardType().IsCreature())
			{
				CAttackAbility* pAbility = (CAttackAbility*)pCard->GetAbility(_T("Attack"));
				if (pAbility &&
					pAbility->CanAttack())
				{
					bFound = TRUE;
			
					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
					if ((pCreatureCard->GetCreatureKeyword()->MustAttack() &&
						!pCreatureCard->GetCreatureFlag()->HasAttacked()) )
					{
						bTransitAllowed = FALSE;
						break;
					}
					if (pCreatureCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon))
					{
						CCardFilter temp;
						temp.SetComparer(new CardNameComparer(_T("Gideon Jura")));
						if (temp.CountIncluded(m_pGame->GetNextPlayer(pCreatureCard->GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer())>0)
							bTransitAllowed = FALSE;
					}
				}
			}
			if (pCard->GetAbilities().GetAbility(_T("Animate")) )
				bFound = TRUE;
		}

		if (bFound)
		{
			counted_ptr<CNodeAction> cpNodeMove = ::CreateObject<CNodeAction>(m_pGame);
			ATLASSERT(cpNodeMove);

			cpNodeMove->SetTransitInfo(TRUE, GetGraph(), this, NodeId::BeginningOfCombatStep);

			actionContainer.Add(cpNodeMove.GetPointer());
		}
	}

	if (bTransitAllowed)
		AddTransitMove(&actionContainer);
}

void CMainNode::ResetCombatCount()
{
	m_nCombatCount = 0;
	m_nTurnMaxCombatCount = m_nMaxCombatCount;
}

int CMainNode::GetCombatCount() const
{
	return m_nCombatCount;
}

void CMainNode::IncreaseCombatCount()
{
	++m_nCombatCount;
}

int CMainNode::GetMaxCombatCount() const
{
	return m_nMaxCombatCount;
}

int CMainNode::GetTurnMaxCombatCount() const
{
	return m_nTurnMaxCombatCount;
}

void CMainNode::SetMaxCombatCount(int nMaxCombatCount, BOOL bThisTurnOnly)
{
	if (!bThisTurnOnly)
		m_nMaxCombatCount = nMaxCombatCount;
	m_nTurnMaxCombatCount = nMaxCombatCount;
}

void CMainNode::IncreaseMaxCombatCount(int nAdditionalCombatCount, BOOL bThisTurnOnly)
{
	if (nAdditionalCombatCount <= 0) return;

	if (!bThisTurnOnly)
		m_nMaxCombatCount += nAdditionalCombatCount;
	m_nTurnMaxCombatCount += nAdditionalCombatCount;
}

void CMainNode::ResetLandCount()
{
	m_nLandCount = 0;
	m_nTurnMaxLandCount = m_nMaxLandCount;
}

void CMainNode::IncreaseLandCount()
{
	++m_nLandCount;
}

BOOL CMainNode::IsLandActionValid() const
{
	return m_nLandCount < m_nTurnMaxLandCount;
}

int CMainNode::GetLandCount() const
{
	return m_nLandCount;
}

int CMainNode::GetMaxLandCount() const
{
	return m_nTurnMaxLandCount;
}

void CMainNode::SetMaxLandCount(int nMaxLandCount, BOOL bThisTurnOnly)
{
	if (!bThisTurnOnly)
		m_nMaxLandCount = nMaxLandCount;
	m_nTurnMaxLandCount = nMaxLandCount;
}

BOOL CMainNode::IsPreCombat() const
{
	return m_nCombatCount < m_nTurnMaxCombatCount;
}

//____________________________________________________________________________
//
CEndOfTurnNode::CEndOfTurnNode(CGraph* pGraph)
	: CNode(pGraph, NodeId::EndStep, AbilityType::_FastestOkay | AbilityType::_FastOkay,
	NodeId::CleanupStep1)
{
}

//____________________________________________________________________________
//
CCleanUpNode1::CCleanUpNode1(CGraph* pGraph)
	: CNode(pGraph, NodeId::CleanupStep1, AbilityType::_DiscardOkay, NodeId::CleanupStep2)
{
}

BOOL CCleanUpNode1::OnBeforeExit()
{
	((CCleanUpNode2*)m_pGraph->GetNodeById(NodeId::CleanupStep2))->SetTriggered(FALSE);

	m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::MustAttackGideon, FALSE);
	m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::SkipAllCombatPhases, FALSE);

	return CNode::OnBeforeExit();
}

void CCleanUpNode1::GetNodeActions(CActionContainer& actionContainer)
{
	if (!IsTransitValid())
		return;

	CPlayer* pPlayer = GetGraph()->GetPlayer();

	if (!m_pGame->IsThinking())
	{
		CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
		for (int i = 0; i < pHand->GetSize(); ++i)
			if (pHand->GetAt(i)->GetDiscardAbility()->IsPlayable(FALSE, TRUE))
				return;	// Prevent to continue
	}
	else
		 // Only prevent thinking player to continue if he has discardable cards (revised 7/24/2002)
		if (pPlayer == m_pGame->GetThinkingPlayer())
		{
			CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
			for (int i = 0; i < pHand->GetSize(); ++i)
				if (m_pGame->IsCardVisible(pHand->GetAt(i)) &&
					pHand->GetAt(i)->GetDiscardAbility()->IsPlayable(FALSE, TRUE))
					return;			// Prevent to continue because there are more cards to discard
		}

	AddTransitMove(&actionContainer);		// Allows to continue
}

//____________________________________________________________________________
//
CCleanUpNode2::CCleanUpNode2(CGraph* pGraph)
	: CNode(pGraph, NodeId::CleanupStep2, AbilityType::_TriggerOkay, 
			NodeId::CleanupStep1) // end turn if no triggers fired; repeat CleanupStep1 if any triggers fired
	, m_bTriggered(FALSE)
{
}

void CCleanUpNode2::SetTriggered(BOOL bTriggered) 
{ 
	m_bTriggered = bTriggered; 

	if (m_bTriggered)
		m_ValidAbilityType = AbilityType::_FastOkay;
	else
		m_ValidAbilityType = AbilityType::_TriggerOkay;
}

void CCleanUpNode2::OnAfterEntry()
{
	CNode::OnAfterEntry();

	/*
	m_pGame->SuspendAllCreatures(FALSE); 
	
	Moved to after creature status reset below because 'end of turn' effects have already ended by now and
	for those creatures with 0 or life, they should still survive if the CCreature.Reset() changes the life
	back to more than 0.

	*/

	// Reset card status
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pZone;

		pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			pCard->ResetTurnProperties();
		}
		pZone = pPlayer->GetZoneById(ZoneId::Graveyard);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			pCard->ResetTurnProperties();
		}
		pZone = pPlayer->GetZoneById(ZoneId::_PhasedOut);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			pCard->ResetTurnProperties();
		}
	}
}

BOOL CCleanUpNode2::OnBeforeExit()
{
	SetTriggered(FALSE);

	return __super::OnBeforeExit();
}

void CCleanUpNode2::GetNodeActions(CActionContainer& actionContainer)
{
	if (m_bTriggered)
	{
		__super::GetNodeActions(actionContainer);
		return;
	}

	if (!IsTransitValid())
		return;

	counted_ptr<CNodeAction> cpNodeMove = ::CreateObject<CNodeAction>(m_pGame);
	ATLASSERT(cpNodeMove);

	cpNodeMove->SetTransitInfo(m_pGraph);

	actionContainer.Add(cpNodeMove.GetPointer());
}

//____________________________________________________________________________
//
CCombatNode::CCombatNode(CGraph* pGraph,
						 NodeId nodeId, AbilityType validAbilityType,
						 NodeId nextNodeId)
	: CNode(pGraph, nodeId, validAbilityType, nextNodeId)
{
}

BOOL CCombatNode::RequireCombatDamageAssignment(BOOL bCheckAttackers,
												BOOL bCheckBlockers) const
{
	CPlayer* pPlayer = m_pGame->GetActivePlayer();

	if (bCheckAttackers)
	{
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

				if (pCreatureCard->IsAttacking())
				{
					if (pCreatureCard->RequireCombatDamageAssignment())
						return TRUE;
				}
			}
		}
	}

	if (bCheckBlockers)
	{
		pPlayer = m_pGame->GetNextPlayer(pPlayer);		// HACK: Only support attacking the next player
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

				if (pCreatureCard->IsBlocking())
				{
					if (pCreatureCard->RequireCombatDamageAssignment())
						return TRUE;
				}
			}
		}
	}

	return FALSE;
}

void CCombatNode::AssignUnblockedAttackers()
{
	CPlayer* pPlayer = m_pGame->GetActivePlayer();
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
			if (!pCreatureCard->IsBlocked())
			pCreatureCard->AssignUnblockedCombatDamage();
		}
	}
}

void CCombatNode::AssignSimpleCombatDamage()
{
	CPlayer* pPlayer = m_pGame->GetActivePlayer();
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->RequireCombatDamageAssignment())
				pCreatureCard->AssignSimpleCombatDamage();
		}
	}

	pPlayer = m_pGame->GetNextPlayer(pPlayer);		// HACK: Only support attacking the next player
	pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->RequireCombatDamageAssignment())
				pCreatureCard->AssignSimpleCombatDamage();
		}
	}
}

BOOL CCombatNode::ResolveDamage(const CSubjectGroup& subjectGroup, DamageType damageType)
{
	CLifeModifier lifeModifier(Life(0), subjectGroup.GetSourceCard(), PreventableType::Preventable, damageType);

	// To creatures or planeswalker

	for (CSubjectGroup::CardSubjectIterator i = subjectGroup.CardSubjectBegin();
		i != subjectGroup.CardSubjectEnd(); ++i)
	{
		CCard* pCard = const_cast<CCard*>(i->GetPointer());
		CZone* pZone = pCard->GetZone();
		if (pZone && pZone->GetZoneId() == ZoneId::Battlefield)
		{
			const ContextValue& value = subjectGroup.GetValue(pCard);

			lifeModifier.SetLifeDelta(Life(value.nValue1));
			// All combat damage preventable
			//lifeModifier.SetPreventable(PreventableType::Enum(value.nValue2));

			if (pCard->GetCardType().IsCreature())
				lifeModifier.ApplyTo((CCreatureCard*)pCard);
			else
			{
				if (!pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllDamageToPWalkers) || pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) || lifeModifier.GetPreventable() != PreventableType::Preventable)
				{					
					if (subjectGroup.GetSourceCard() && subjectGroup.GetSourceCard()->GetCardKeyword()->HasLifelink())
					{
						Damage lifelink_damage;
						lifelink_damage.m_nLifeDelta = Life(-lifeModifier.GetLifeDelta());
						lifelink_damage.m_Preventable = PreventableType::NotPreventable;
						lifelink_damage.m_DamageType = DamageType::NotDealingDamage;
						lifelink_damage.m_pSourceCard = subjectGroup.GetSourceCard();
						subjectGroup.GetSourceCard()->GetController()->ChangeLife(lifelink_damage);
					}

					if ((lifeModifier.GetDamageType() & DamageType::CombatDamage).Any())
						lifeModifier.GetSourceCard()->GetCardFlag()->AddHasDealtCombatDamage();
					if ((lifeModifier.GetDamageType() & DamageType::NonCombatDamage).Any())
						lifeModifier.GetSourceCard()->GetCardFlag()->AddHasDealtNonCombatDamage();

					Counter* pCounter = ((CPlaneswalkerCard*)pCard)->GetLoyaltyCounter();
					pCounter->DecreaseCount(-GET_INTEGER(lifeModifier.GetLifeDelta()));
					const_cast<CCard*>(pCard)->CounterMoved(pCard, LOYALTY_COUNTER, pCounter->GetCount() - GET_INTEGER(lifeModifier.GetLifeDelta()) , pCounter->GetCount());
					//CCardCounterModifier pModifier = CCardCounterModifier(LOYALTY_COUNTER, -GET_INTEGER(lifeModifier.GetLifeDelta()));
					//pModifier.ApplyTo(pCard);
					m_pGame->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);
				
					if (subjectGroup.GetSourceCard())
						const_cast<CCard*>(subjectGroup.GetSourceCard())->OnDealDamage(
							NULL, NULL, (CPlaneswalkerCard*)pCard, Damage(subjectGroup.GetSourceCard(), lifeModifier.GetLifeDelta(), PreventableType::Preventable, damageType));
				}
			}
		}
	}

	// To players

	for (CSubjectGroup::PlayerSubjectIterator i = subjectGroup.PlayerSubjectBegin();
		i != subjectGroup.PlayerSubjectEnd(); ++i)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*i);

		const ContextValue& value = subjectGroup.GetValue(pPlayer);

		lifeModifier.SetLifeDelta(Life(value.nValue1));
		// All combat damage preventable
		//lifeModifier.SetPreventable(PreventableType::Enum(value.nValue2));
		lifeModifier.ApplyTo(pPlayer);
	}

	return TRUE;
}

void CCombatNode::DealCombatDamage()
{
	/*
	bool bSet = m_pGame->SuspendAllCreatures();
	m_pGame->SuspendAllCreatures(TRUE);		
	*/

	const CSubjectGroupContainer_& targetGroups = m_pGame->GetCombatDamageAssignment();

	for (int j = 0; j < targetGroups.GetSize(); ++j)
	{
		const CSubjectGroup& targetGroup = targetGroups.GetAt(j);

		if (targetGroup.GetSourceCard()->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllCombatDamage))
			continue;

		ResolveDamage(targetGroup, DamageType::CombatDamage);
	}

	/*
	m_pGame->SuspendAllCreatures(FALSE);		// this is needed here in addition to CActionContainer::PerformAction()'s calls; this is to help clean up combat casulties before any triggered effect will happen
	if (bSet)
		m_pGame->SuspendAllCreatures(TRUE);		
	*/
}

void CCombatNode::ResetCombatStatus()
{
	CZone* pZone;
	for (int ip = 0; ip < m_pGame->GetPlayerCount(); ++ip)
	{
		pZone = m_pGame->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
				pCreatureCard->RemoveFromCombat(TRUE);
			}
		}
	}

	//ResetCombatDamage();	//5/30/2002, moved to CCombatDamageNode3::OnBeforeExit()
}

void CCombatNode::ResetCombatDamage()
{
	m_pGame->GetCombatDamageAssignment().RemoveAll();
}

#ifdef M10_COMBAT
BOOL CCombatNode::AllAttackerDamageAssignmentOrdered()
{
	CPlayer* pPlayer = m_pGame->GetActivePlayer();
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (!pCreatureCard->IsDamageAssignmentOrdered())
				return FALSE;
		}
	}

	return TRUE;
}

BOOL CCombatNode::AllBlockerDamageAssignmentOrdered()
{
	CPlayer* pPlayer = m_pGame->GetNextPlayer(m_pGame->GetActivePlayer());		// HACK: Only support attacking the next player
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (!pCreatureCard->IsDamageAssignmentOrdered())
				return FALSE;
		}
	}

	return TRUE;
}
#endif

int CCombatNode::GetCombatCount()
{
	CMainNode* pMainNode = (CMainNode*)GetGraph()->GetNodeById(NodeId::MainPhaseStep);
	
	return pMainNode->GetCombatCount();
}

//____________________________________________________________________________
//
CBeginOfCombatNode::CBeginOfCombatNode(CGraph* pGraph)
	: CCombatNode(pGraph, NodeId::BeginningOfCombatStep,
				  AbilityType::_FastestOkay | AbilityType::_FastOkay, NodeId::DeclareAttackersStep1)
{
}

void CBeginOfCombatNode::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	CMainNode* pMainNode = (CMainNode*)(GetGraph()->GetNodeById(NodeId::MainPhaseStep));
	pMainNode->IncreaseCombatCount();

	CCombatDamageNode1a* pCombatDamageNode = (CCombatDamageNode1a*)(GetGraph()->GetNodeById(NodeId::CombatDamageStep1a));
	pCombatDamageNode->ResetAssignedCreatures();

//#ifdef RETHINK_IN_COMBAT
	if (!m_pGame->IsThinking())			
	{
		//ATLASSERT(!m_pGame->GetThinkCombatMode());
		if (m_pGame->ExtraCareful())
			m_pGraph->GetPlayer()->RemoveStrategy(StrategyRemovalReason::BeforeCombat);
		//m_pGame->SetThinkCombatMode(true);
	}
//#endif
}

//____________________________________________________________________________
//
CAttackDeclarationNode1::CAttackDeclarationNode1(CGraph* pGraph)
	: CCombatNode(pGraph, NodeId::DeclareAttackersStep1, AbilityType::_AttackOkay | AbilityType::ManaSource,
				  NodeId::DeclareAttackersStep2)
	, m_cpCreatureAttackEventSource(::CreateObject<CreatureAttackEventSource>(VAR_NAME(m_cpCreatureAttackEventSource)))
{
	SetDirectTransit();
}

/* Planeswalker change
void CAttackDeclarationNode1::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	CZone* pInplay = m_pGraph->GetPlayer()->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i).GetPointer();

		if (!pCard->GetCardType().IsCreature())
			continue;

		CAttackAbility* pAbility = (CAttackAbility*)pCard->GetAbility(_T("Attack"));
		if (pAbility &&
			pAbility->CanAttack())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
			if (pCreatureCard->GetCreatureKeyword()->MustAttack() &&
				!pCreatureCard->GetCreatureFlag()->HasAttacked())
			{
				if (!pCreatureCard->GetCreatureKeyword()->Vigilance())		// Moved the tap action before the Attack() call to allow Seasoned Marshal to filter out itself as a tap target
				{	
					COrientation* pOrientation = pCreatureCard->GetOrientation();	
					pOrientation->Tap();
				}

				CPlayer* pAttackPlayer = m_pGame->GetNextPlayer(m_pGraph->GetPlayer());		// HACK: Assume always attacking next player

				pCreatureCard->Attack(pAttackPlayer);
			}
		}
	}
}
*/
void CAttackDeclarationNode1::GetNodeActions(CActionContainer& actionContainer)
{
	if (!IsTransitValid())
		return;
	
		// Find must attack creatures
		BOOL bFound = FALSE;
		CPlayer* pPlayer = GetGraph()->GetPlayer();
		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if (pCard->GetCardType().IsCreature())
			{
				CAttackAbility* pAbility = (CAttackAbility*)pCard->GetAbility(_T("Attack"));
				if (pAbility &&
					pAbility->CanAttack())
				{

					CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
					if ((pCreatureCard->GetCreatureKeyword()->MustAttack() &&
						!pCreatureCard->GetCreatureFlag()->HasAttacked()) || pCreatureCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon))
					{
						bFound = TRUE;
						break;
					}
				}
			}
	}

	if (!bFound)
		AddTransitMove(&actionContainer);
}

BOOL CAttackDeclarationNode1::OnBeforeExit()
{
	CZone* pInplay = m_pGraph->GetPlayer()->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new CardNameComparer(_T("Gideon Jura")));

	/*for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);

		if (!pCard->GetCardType().IsCreature())
			continue;

		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
		if ((pCreatureCard->GetCreatureFlag()->HasAttacked() && !pCreatureCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon))			
			|| (!pCreatureCard->GetCreatureKeyword()->MustAttack() && !pCreatureCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon))
			|| (!pCreatureCard->GetCreatureKeyword()->MustAttack() && temp.CountIncluded(pInplay->GetCardContainer())<1))
			continue;


	//	if (!pCreatureCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon) && !pCreatureCard->GetCreatureKeyword()->MustAttack()) 
		//	continue;

		CAttackAbility* pAbility = (CAttackAbility*)pCard->GetAbility(_T("Attack"));
		if (pAbility &&
			pAbility->CanAttack())
		{
			return FALSE;
		}
	}*/

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);

		if (!pCard->GetCardType().IsCreature())
			continue;

		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
		if (pCreatureCard->IsAttacking())
		{
			if (m_cpCreatureAttackEventSource->HasListeners())
				m_cpCreatureAttackEventSource->FireEvent(pCreatureCard);

			// Moved from CCreatureCard - creatures are only considered attacking during this step, 'flash' + 'haste' creatures in attack declaration 2 are not considered 'attacking' even if they are

			pCreatureCard->GetAttackedPlayerEventSource()->FireEvent(AttackSubject(pCreatureCard), pCreatureCard);
		}
	}

	return __super::OnBeforeExit();
}

//____________________________________________________________________________
//
CAttackDeclarationNode2::CAttackDeclarationNode2(CGraph* pGraph)
	: CCombatNode(pGraph, NodeId::DeclareAttackersStep2, AbilityType::_FastestOkay | AbilityType::_FastOkay,
				  NodeId::DeclareBlockersStep1)
{
}

void CAttackDeclarationNode2::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	if (m_pGame->IsThinking())
	{
		BOOL bCreatureAttacking = FALSE;

		CPlayer* pPlayer = m_pGraph->GetPlayer();

		CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
				if (pCreatureCard->IsAttacking())
				{
					bCreatureAttacking = TRUE;
					break;
				}
			}
		}

		if (!bCreatureAttacking)
		{
#ifdef RETHINK_IN_COMBAT
			if (!m_pGame->GetThinkCombatMode())
#endif
			m_pGame->AddSearchBreak(SearchBreak::NullAttack);
		}
	}
}

NodeId CAttackDeclarationNode2::GetNextNodeId()
{
	CPlayer* pPlayer = m_pGraph->GetPlayer();

	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
			if (pCreatureCard->IsAttacking())
				return m_NextNodeId;
		}
	}

	return NodeId::EndOfCombatStep;
}

//____________________________________________________________________________
//
CBlockDeclarationNode1::CBlockDeclarationNode1(CGraph* pGraph)
	: CCombatNode(pGraph, NodeId::DeclareBlockersStep1, AbilityType::_BlockOkay,
#ifdef M10_COMBAT
					NodeId::DeclareBlockersStep1a
#else
					NodeId::DeclareBlockersStep2
#endif
				  )
	, m_cpCreatureBlockingEventSource(::CreateObject<CreatureBlockingEventSource>(VAR_NAME(m_cpCreatureBlockingEventSource)))
	, m_cpCreatureBlockedEventSource(::CreateObject<CreatureBlockedEventSource>(VAR_NAME(m_cpCreatureBlockedEventSource)))

{
	SetDirectTransit();
}

void CBlockDeclarationNode1::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();
	m_pGame->SetPriorityPlayer(m_pGame->GetNextPlayer(m_pGame->GetActivePlayer()));
}

BOOL CBlockDeclarationNode1::OnBeforeExit()
{
	// Remove illegal blockers

	CZone* pInplay = m_pGraph->GetPlayer()->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		if (!(pInplay->GetAt(i)->GetCardType() & CardType::Creature).Any())
			continue;

		CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(i);
		if (pCreatureCard->IsBlocked())
			switch (pCreatureCard->GetBlockedByCount())
			{
			case 1:
				{
					CCreatureKeyword* pAttribute1 = pCreatureCard->GetCreatureKeyword();

					const CCountedCardContainer_& blockedBy(pCreatureCard->GetBlockedBy());

					CCreatureCard* pBlocker = static_cast<CCreatureCard*>(blockedBy.GetAt(0));

					if (pAttribute1->CantBeBlockedByOne(pBlocker))				// Is this card one of the exception?
					{
						pBlocker->RemoveBlocking(pCreatureCard, TRUE);				// No -> remove as blocker
						if (!m_pGame->IsThinking())
						{
							CString strMessage;
							strMessage.Format(_T("%s was removed as a legal blocker of %s"),
								pBlocker->GetCreatureName(TRUE),
								pCreatureCard->GetCreatureName(TRUE));
							m_pGame->Message(
								strMessage, 
								pBlocker->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
								MessageImportance::High);
						}
					}
					else
						if (pAttribute1->CantBeBlockedByOneOrTwo(pBlocker))		// Is this card one of the exception?
						{
							pBlocker->RemoveBlocking(pCreatureCard, TRUE);			// No -> remove as blocker
							if (!m_pGame->IsThinking())
							{
								CString strMessage;
								strMessage.Format(_T("%s was removed as a legal blocker of %s"),
									pBlocker->GetCreatureName(TRUE),
									pCreatureCard->GetCreatureName(TRUE));
								m_pGame->Message(
									strMessage, 
									pBlocker->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
									MessageImportance::High);
							}
						}

					break;
				}
			case 2:
				{
					CCreatureKeyword* pAttribute1 = pCreatureCard->GetCreatureKeyword();

					const CCountedCardContainer_& blockedBy(pCreatureCard->GetBlockedBy());

					CCreatureCard* pBlocker1 = static_cast<CCreatureCard*>(blockedBy.GetAt(0));
					CCreatureCard* pBlocker2 = static_cast<CCreatureCard*>(blockedBy.GetAt(1));

					if (pAttribute1->CantBeBlockedByOneOrTwo(pBlocker1))		// Is this card one of the exception?
					{
						pBlocker1->RemoveBlocking(pCreatureCard, TRUE);				// No -> remove as blocker

						if (!m_pGame->IsThinking())
						{
							CString strMessage;
							strMessage.Format(_T("%s was removed as a legal blocker of %s"),
								pBlocker1->GetCreatureName(TRUE),
								pCreatureCard->GetCreatureName(TRUE));
							m_pGame->Message(
								strMessage, 
								pBlocker1->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
								MessageImportance::High);
						}
					}

					if (pAttribute1->CantBeBlockedByOneOrTwo(pBlocker2))		// Is this card one of the exception?
					{
						pBlocker2->RemoveBlocking(pCreatureCard, TRUE);				// No -> remove as blocker

						if (!m_pGame->IsThinking())
						{
							CString strMessage;
							strMessage.Format(_T("%s was removed as a legal blocker of %s"),
								pBlocker2->GetCreatureName(TRUE),
								pCreatureCard->GetCreatureName(TRUE));
							m_pGame->Message(
								strMessage, 
								pBlocker2->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
								MessageImportance::High);
						}
					}

					break;
				}
			}
	}

	// Notify listeners

	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(j);
		if (pPlayer == m_pGraph->GetPlayer())
			continue;

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			if (!(pInplay->GetAt(i)->GetCardType() & CardType::Creature).Any())
				continue;

			CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(i);
			if (pCreatureCard->IsBlocking())
			{
				if (m_cpCreatureBlockingEventSource->HasListeners())
					m_cpCreatureBlockingEventSource->FireEvent(pCreatureCard);

				// Moved from CCreatureCard::AddBlocking()

				BlockedCreatureEventSource* pEventSource = pCreatureCard->GetBlockedCreatureEventSource();
				if (pEventSource->HasListeners())
				{
					const CCountedCardContainer_& blocking(pCreatureCard->GetBlocking());
					int nBlockingCount = blocking.GetSize();
					for (int k = 0; k < nBlockingCount; ++k)
						pEventSource->FireEvent(pCreatureCard, (CCreatureCard*)(blocking.GetAt(k)), nBlockingCount, k);
				}
			}
		}
	}

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		if (!(pInplay->GetAt(i)->GetCardType() & CardType::Creature).Any())
			continue;

		CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(i);
		if (pCreatureCard->IsBlocked())
		{
			if (m_cpCreatureBlockedEventSource->HasListeners())
				m_cpCreatureBlockedEventSource->FireEvent(pCreatureCard);

			// Moved from CCreatureCard::AddBlockedBy()

			BlockedByCreatureEventSource* pEventSource = pCreatureCard->GetBlockedByCreatureEventSource();
			if (pEventSource->HasListeners())
			{
				const CCountedCardContainer_& blockedBy(pCreatureCard->GetBlockedBy());
				int nBlockedByCount = blockedBy.GetSize();
				for (int j = 0; j < nBlockedByCount; ++j)
					pEventSource->FireEvent(pCreatureCard, (CCreatureCard*)(blockedBy.GetAt(j)), nBlockedByCount, j);
			}
		}
	}

	return __super::OnBeforeExit();
}

#if 1	// 10/25/2003: To support Lure
void CBlockDeclarationNode1::GetNodeActions(CActionContainer& actionContainer)
{
	CPlayer* pOffendingPlayer = m_pGame->GetActivePlayer();
	CZone* pFromZone = pOffendingPlayer->GetZoneById(ZoneId::Battlefield);

	CPlayer* pDefendingPlayer = m_pGame->GetNextPlayer(pOffendingPlayer);	// HACK: Only support attacking the next player
	CZone* pToZone = pDefendingPlayer->GetZoneById(ZoneId::Battlefield);

	for (int k = 0; k < pFromZone->GetSize(); ++k)
	{
		CCard* pCard = pFromZone->GetAt(k);
		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pAttackingCreatureCard = (CCreatureCard*)pCard;
			if (pAttackingCreatureCard->IsAttacking())
			{
				CCreatureKeyword* pAttribute = pAttackingCreatureCard->GetCreatureKeyword();
				if (pAttribute->Lure())
				{
					// Find any blockers still able to block this Lure creature
					
					for (int l = 0; l < pToZone->GetSize(); ++l)
					{
						CCard* pCard2 = pToZone->GetAt(l);
						if ((pCard2->GetCardType() & CardType::Creature).Any())
						{
							CCreatureCard* pDefendingCreatureCard = (CCreatureCard*)pCard2;
							if (pDefendingCreatureCard->CanBlockInGeneral(pAttackingCreatureCard))
								return;
						}
					}
				}
			}
		}
	}

	__super::GetNodeActions(actionContainer);
}
#endif

#ifdef M10_COMBAT
NodeId CBlockDeclarationNode1::GetNextNodeId()
{
	if (AllAttackerDamageAssignmentOrdered() &&
		AllBlockerDamageAssignmentOrdered())
		return NodeId::DeclareBlockersStep2;

	return __super::GetNextNodeId();
}

//____________________________________________________________________________
//
CBlockDeclarationNode1a::CBlockDeclarationNode1a(CGraph* pGraph)
	: CCombatNode(pGraph,
				  NodeId::DeclareBlockersStep1a,
				  AbilityType::_CombatDamageOrderOkay, NodeId::DeclareBlockersStep2)
{
}

void CBlockDeclarationNode1a::GetNodeActions(CActionContainer& actionContainer)
{
	if (m_pGame->GetPriorityPlayer() == m_pGame->GetActivePlayer())
	{
		if (!AllAttackerDamageAssignmentOrdered())
			return;
	}
	else
	{
		if (!AllBlockerDamageAssignmentOrdered())
			return;
	}

	__super::GetNodeActions(actionContainer);
}
#endif

//____________________________________________________________________________
//
CBlockDeclarationNode2::CBlockDeclarationNode2(CGraph* pGraph)
	: CCombatNode(pGraph,
			      NodeId::DeclareBlockersStep2, AbilityType::_FastestOkay | AbilityType::_FastOkay,
				  NodeId::CombatDamageStep1a)
{
}

void CBlockDeclarationNode2::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();
	m_pGame->SetPriorityPlayer(m_pGame->GetActivePlayer());
}

BOOL CBlockDeclarationNode2::FindFirstStrikes() const
{
	CPlayer* pPlayer = m_pGame->GetActivePlayer();
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->IsAttacking())
			{
				CCreatureKeyword* pAttribute = pCreatureCard->GetCreatureKeyword();
				if (pAttribute->FirstStrike() || pAttribute->DoubleStrike())
					return TRUE;
			}
		}
	}

	pPlayer = m_pGame->GetNextPlayer(pPlayer);		// HACK: Only support attacking the next player
	pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

			if (pCreatureCard->IsBlocking())
			{
				CCreatureKeyword* pAttribute = pCreatureCard->GetCreatureKeyword();
				if (pAttribute->FirstStrike() || pAttribute->DoubleStrike())
					return TRUE;
			}
		}
	}

	return FALSE;
}

void CBlockDeclarationNode2::GetNodeActions(CActionContainer& actionContainer)
{
	if (FindFirstStrikes())
	{
		m_NextNodeId = NodeId::CombatDamageStep1a;
	}
	else
	{
		m_NextNodeId = NodeId::CombatDamageStep2a;
	}
		
	CCombatNode::GetNodeActions(actionContainer);
}

//____________________________________________________________________________
//
CCombatDamageNode1a::CCombatDamageNode1a(CGraph* pGraph)
	: CCombatNode(pGraph,
				  NodeId::CombatDamageStep1a,
				  AbilityType::_CombatDamageAssignOkay, NodeId::CombatDamageStep1b)
{
}

void CCombatDamageNode1a::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	AssignUnblockedAttackers();
	AssignSimpleCombatDamage();
}

void CCombatDamageNode1a::GetNodeActions(CActionContainer& actionContainer)
{
	if (m_pGame->GetPriorityPlayer() == m_pGame->GetActivePlayer())
	{
		if (RequireCombatDamageAssignment(TRUE, FALSE))
			return;
	}
	else
	{
		if (RequireCombatDamageAssignment(FALSE, TRUE))
			return;
	}

	__super::GetNodeActions(actionContainer);
}

#ifdef M10_COMBAT
BOOL CCombatDamageNode1a::OnBeforeExit()
{
	SaveAssignedCreatures();
	DealCombatDamage();
	ResetCombatDamage();

	return __super::OnBeforeExit();
}
#endif

void CCombatDamageNode1a::SaveAssignedCreatures()
{
	ResetAssignedCreatures();

	const CSubjectGroupContainer_& targetGroups = m_pGame->GetCombatDamageAssignment();

	for (int j = 0; j < targetGroups.GetSize(); ++j)
		m_AssignedCreatures.AddCard(const_cast<CCard*>(targetGroups.GetAt(j).GetSourceCard()), CardPlacement::Top);
}

void CCombatDamageNode1a::ResetAssignedCreatures()
{
	m_AssignedCreatures.RemoveAll();
}

bool CCombatDamageNode1a::HasAssignedDamage(const CCreatureCard* pCreature) const
{
	return m_AssignedCreatures.FindIndex(pCreature) != -1;
}

//____________________________________________________________________________
//
CCombatDamageNode1b::CCombatDamageNode1b(CGraph* pGraph)
	: CCombatNode(pGraph,
				  NodeId::CombatDamageStep1b, AbilityType::_FastestOkay | AbilityType::_FastOkay,
				  NodeId::CombatDamageStep2a)
{
}

void CCombatDamageNode1b::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	m_pGame->GetStack().ClearProjection();
}

// Note: combat damage is dealt in CNodeAction

//____________________________________________________________________________
//
CCombatDamageNode2a::CCombatDamageNode2a(CGraph* pGraph)
	: CCombatNode(pGraph,
				  NodeId::CombatDamageStep2a,
				  AbilityType::_CombatDamageAssignOkay, NodeId::CombatDamageStep2b)
{
}

void CCombatDamageNode2a::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	AssignUnblockedAttackers();
	AssignSimpleCombatDamage();
}

void CCombatDamageNode2a::GetNodeActions(CActionContainer& actionContainer)
{
	if (m_pGame->GetPriorityPlayer() == m_pGame->GetActivePlayer())
	{
		if (RequireCombatDamageAssignment(TRUE, FALSE))
			return;
	}
	else
	{
		if (RequireCombatDamageAssignment(FALSE, TRUE))
			return;
	}

	__super::GetNodeActions(actionContainer);
}

#ifdef M10_COMBAT
BOOL CCombatDamageNode2a::OnBeforeExit()
{
	DealCombatDamage();
	ResetCombatDamage();

	return __super::OnBeforeExit();
}
#endif

//____________________________________________________________________________
//
CCombatDamageNode2b::CCombatDamageNode2b(CGraph* pGraph)
	: CCombatNode(pGraph, NodeId::CombatDamageStep2b,
		AbilityType::_FastestOkay | AbilityType::_FastOkay, NodeId::EndOfCombatStep)
{
}

void CCombatDamageNode2b::OnAfterEntry()
{
	CCombatNode::OnAfterEntry();

	m_pGame->GetStack().ClearProjection();
}

// Note: combat damage is dealt in CNodeAction

//____________________________________________________________________________
//
CEndOfCombatNode::CEndOfCombatNode(CGraph* pGraph)
	: CCombatNode(pGraph, NodeId::EndOfCombatStep,
			      AbilityType::_FastestOkay | AbilityType::_FastOkay, NodeId::MainPhaseStep)
	,m_nMaxCombatCount(0)
{
}

void CEndOfCombatNode::GetNodeActions(CActionContainer& actionContainer)
{
	if (!IsTransitValid())
		return;
	
	BOOL bTransitAllowed = TRUE;

	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SkipNextCombatPhase))
	{
		if (m_nMaxCombatCount > 0)
			--m_nMaxCombatCount;
		m_pGame->GetActivePlayer()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::SkipNextCombatPhase, FALSE);
	}
	if (m_pGame->GetActivePlayer()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SkipAllCombatPhases))
	{
		m_nMaxCombatCount = 0;
	}

	if ((m_nMaxCombatCount > 0) &&
		(m_pGame->GetActivePlayer() == m_pGame->GetPriorityPlayer()))
	{
		
			counted_ptr<CFastCombatNodeAction> cpNodeMove = ::CreateObject<CFastCombatNodeAction>(m_pGame);
			ATLASSERT(cpNodeMove);

			cpNodeMove->SetTransitInfo(TRUE, GetGraph(), this, NodeId::BeginningOfCombatStep);

			actionContainer.Add(cpNodeMove.GetPointer());
			return;
	}

	//if (bTransitAllowed)
		//AddTransitMove(&actionContainer);

	return __super::GetNodeActions(actionContainer);
}

BOOL CEndOfCombatNode::OnBeforeExit()
{
	ResetCombatStatus();		// 5/30/2002, moved from CMainNode::OnAfterEntry()

	if (m_nMaxCombatCount>0)
	{
		m_nMaxCombatCount = m_nMaxCombatCount-1;
		SetNextNodeId(NodeId::BeginningOfCombatStep);

	}
	else
	{
		SetNextNodeId(NodeId::MainPhaseStep);
	}

	return CNode::OnBeforeExit();
}
void CEndOfCombatNode::ResetFastCombatCount()
{
	m_nMaxCombatCount = 0;
	SetNextNodeId(NodeId::MainPhaseStep);
}

int CEndOfCombatNode::GetFastCombatCount() const
{
	return m_nMaxCombatCount;
}

void CEndOfCombatNode::IncreaseFastCombatCount()
{
	++m_nMaxCombatCount;
}

int CEndOfCombatNode::GetMaxFastCombatCount() const
{
	return m_nMaxCombatCount;
}
void CEndOfCombatNode::SetMaxFastCombatCount(int nMaxCombatCount)
{
		m_nMaxCombatCount = nMaxCombatCount;
}
