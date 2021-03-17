#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CWhenSelfMoved::CWhenSelfMoved(CCard* pCard, ZoneId fromZoneId, ZoneId toZoneId, BOOL bTriggerBefore, BOOL bTriggerAfter, BOOL bTriggerOnPhasing)
	: m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CWhenSelfMoved::OnZoneChanged))
	, m_FromZoneId(fromZoneId)
	, m_ToZoneId(toZoneId)
	, m_bReportInPlayChanges(FALSE)
	, m_bReportChangesByOpponentsOnly(FALSE)
	, m_pCard(pCard)
	, m_bTriggerOnPhasing(bTriggerOnPhasing)
{
	ATLASSERT(bTriggerBefore || bTriggerAfter);

	if (bTriggerBefore)
		pCard->GetMovingEventSource()->AddListener(m_cpAListener.GetPointer());

	if (bTriggerAfter)
		pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

CString CWhenSelfMoved::GetTriggeredHint(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return m_pCard->GetCardName();
}

void CWhenSelfMoved::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_bTriggerOnPhasing != FALSE && moveType == MoveType::Phasing)
		return;

	if ( m_Callback.empty() )
		return;

	if (pFromZone &&
		m_bReportChangesByOpponentsOnly &&
		pFromZone->GetPlayer() == pByPlayer)
		return;
		
	if (((m_FromZoneId == ZoneId::Null) ||	// Added to support legacy 'Any Zone'
			(m_FromZoneId == ZoneId::_AllZones) || (pFromZone && (pFromZone->GetZoneId() & m_FromZoneId).Any())) &&
		((m_ToZoneId == ZoneId::Null) ||		// Added to support legacy 'Any Zone'
			(m_ToZoneId == ZoneId::_AllZones) || (pToZone && (pToZone->GetZoneId() & m_ToZoneId).Any())))
	{
		if (!m_bReportInPlayChanges &&
			pFromZone && pToZone &&
			pFromZone->GetZoneId() == ZoneId::Battlefield &&
			pToZone->GetZoneId() == ZoneId::Battlefield)
			return;

		m_Callback(pFromZone, pToZone, pByPlayer, moveType);
	}
}

//____________________________________________________________________________
//
CWhenSelfInplay::CWhenSelfInplay(CCard* pCard, BOOL bTriggerBefore,
								 BOOL bTriggerAfter)
	: m_bInPlay(FALSE)
	, m_WhenSelfMoved(pCard, ZoneId::_AllZones, ZoneId::_AllZones, bTriggerBefore, bTriggerAfter)
	, m_FromZoneId(ZoneId::Null)
	, m_ToZoneId(ZoneId::Null)
	, m_pCard(pCard)
{
	m_WhenSelfMoved.SetEventCallback(CWhenSelfMoved::EventCallback(this, &CWhenSelfInplay::OnZoneChanged));
}

CString CWhenSelfInplay::GetTriggeredHint(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return m_pCard->GetCardName();
}

void CWhenSelfInplay::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (moveType == MoveType::Phasing)
		return;

	ZoneId fromZone;
	if (pFromZone)
		fromZone = pFromZone->GetZoneId();
	ZoneId toZone = pToZone->GetZoneId();

	ATLASSERT(fromZone != ZoneId::Battlefield ||
		toZone != ZoneId::Battlefield);

	if (fromZone == ZoneId::Battlefield)
	{
		if (m_bInPlay)
		{
			m_bInPlay = FALSE;

			if ((m_ToZoneId == ZoneId::Null || toZone == m_ToZoneId) && !m_LeaveCallback.empty())
				m_LeaveCallback(pFromZone, pToZone, pByPlayer, moveType);
		}
	}
	
	if (toZone == ZoneId::Battlefield)
	{
		if (!m_bInPlay)
		{
			m_bInPlay = TRUE;

			if ((m_FromZoneId == ZoneId::Null || fromZone == m_FromZoneId) && !m_EnterCallback.empty())
				m_EnterCallback(pFromZone, pToZone, pByPlayer, moveType);
		}
	}
}

//____________________________________________________________________________
//
CWhenNodeChanged::CWhenNodeChanged(CCard* pCard, 
								   NodeId toNodeId,
								   BOOL bInplayOnly)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpNListener(VAR_NAME(m_cpNListener), ChangeNodeEventSource::Listener::EventCallback(this, &CWhenNodeChanged::OnNodeChanged))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
	, m_ToNodeId(toNodeId)
{
	ATLASSERT(toNodeId.Any() && toNodeId != NodeId::_All);

	if (bInplayOnly)
	{
		m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenNodeChanged::OnEnterInplay));
		m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenNodeChanged::OnLeaveInplay));
	}

	CGame* pGame = m_pCard->GetGame();
	if (pGame && (!bInplayOnly || pCard->IsInplay()))
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

void CWhenNodeChanged::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetGraph()->GetNodeById(m_ToNodeId)->GetChangeNodeEventSource()->AddListener(m_cpNListener.GetPointer());
}

void CWhenNodeChanged::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpNListener->RemoveAllEventSources();
}

void CWhenNodeChanged::OnNodeChanged(CNode* pToNode)
{
	if (m_Callback.empty())
		return;

	if (!pToNode)
		return;

	if (m_pCard && m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_pCard && m_bMonitorControllerOnly && (pToNode->GetGraph()->GetPlayer() != m_pCard->GetController()))
		return;

	if (m_pCard && m_bMonitorOpponentsOnly && (pToNode->GetGraph()->GetPlayer() == m_pCard->GetController()))
		return;

	CallEventCallback(pToNode);
}

//____________________________________________________________________________
//
CWhenCardMoved::CWhenCardMoved(CCard* pCard, 
							   ZoneId fromZone, ZoneId toZone,
							   BOOL bTriggerBefore,
							   BOOL bTriggerAfter,
							   BOOL bInplayOnly)
	: m_bTriggerBefore(bTriggerBefore)
	, m_bTriggerAfter(bTriggerAfter)
	, m_bFromControllerOnly(FALSE)
	, m_bToControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)
	, m_bToOpponentsOnly(FALSE)
	, m_FromZone(fromZone.Any() ? fromZone : ZoneId::_AllZones)	// 0 also means any zone (legacy)
	, m_ToZone(toZone.Any() ? toZone : ZoneId::_AllZones)		// "
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CWhenCardMoved::OnCardMoved))
	, m_pCard(pCard)
	, m_bByOpponentsOnly(FALSE)
	, m_bReportInPlayChanges(FALSE)
	, m_WhenInplay(pCard)
	, m_bReportSelfMoves(FALSE)
{
	if (bInplayOnly)
	{
		m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardMoved::OnEnterInplay));
		m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardMoved::OnLeaveInplay));
	}

	CGame* pGame = m_pCard->GetGame();

	if (pGame && (!bInplayOnly || pCard->IsInplay()))
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenCardMoved::GetTriggeredHint(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return pCard->GetCardName();
}

void CWhenCardMoved::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		if (m_bTriggerBefore)
			pGame->GetPlayer(i)->GetZoneById((m_ToZone != ZoneId::_AllZones) ? m_ToZone : m_FromZone)
				->GetCardMovingEventSource()->AddListener(m_cpAListener.GetPointer());
		
		if (m_bTriggerAfter)
			pGame->GetPlayer(i)->GetZoneById((m_ToZone != ZoneId::_AllZones) ? m_ToZone : m_FromZone)
				->GetCardMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	}

	if (m_bReportSelfMoves)
		OnCardMoved(m_pCard, pFromZone, pToZone, pByPlayer, moveType);
}

void CWhenCardMoved::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();

	if (m_bReportSelfMoves)
		OnCardMoved(m_pCard, pFromZone, pToZone, pByPlayer, moveType);
}

void CWhenCardMoved::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (moveType == MoveType::Phasing)
		return;

	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bFromControllerOnly)
	{
		if (!pFromZone || pFromZone->GetPlayer() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (!pFromZone || pFromZone->GetPlayer() == m_pCard->GetController())
			return;
	}
		
	if (m_bToControllerOnly)
	{
		if (pToZone->GetPlayer() != m_pCard->GetController())
			return;
	}
		
	if (m_bToOpponentsOnly)
	{
		if (pToZone->GetPlayer() == m_pCard->GetController())
			return;
	}

	if (m_bByOpponentsOnly && (!pByPlayer || (pByPlayer == m_pCard->GetController())))
		return;

	ZoneId fromZone = ZoneId::_AllZones;
	if (pFromZone) fromZone = pFromZone->GetZoneId();
	ZoneId toZone = pToZone->GetZoneId();

	if ((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Battlefield) && !m_bReportInPlayChanges)
		return;	// Default: Card controlled by opponent, not considered as a move

	if ((m_FromZone & fromZone).Any() && (m_ToZone & toZone).Any() && m_CardFilterHelper.IsCardIncluded(pCard))
		m_Callback(pCard, pFromZone, pToZone, pByPlayer, moveType);
}

//____________________________________________________________________________
//
CWhenCardDrew::CWhenCardDrew(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpMListener(VAR_NAME(m_cpMListener), CardMovementEventSource::Listener::EventCallback(this, &CWhenCardDrew::OnCardDrew))
	, m_pCard(pCard)
	, m_bFirstDrawOnly(FALSE)
	, m_WhenInplay(pCard)
	, m_bRevealCards(FALSE)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardDrew::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardDrew::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

void CWhenCardDrew::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetZoneById(ZoneId::Library)->GetCardMovedEventSource()->AddListener(m_cpMListener.GetPointer());
}

void CWhenCardDrew::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpMListener->RemoveAllEventSources();
}

void CWhenCardDrew::OnCardDrew(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_Callback.empty())
		return;

	if (!pFromZone || !pToZone)
		return;

	if ((pFromZone->GetZoneId() != ZoneId::Library) || (pToZone->GetZoneId() != ZoneId::Hand) || 
		(moveType != MoveType::Draw && moveType != MoveType::NormalDraw))
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCard->GetController() == m_pCard->GetController()))
		return;

	if (m_bFirstDrawOnly && (pFromZone->GetPlayer()->GetTurnDrawCount() != 0))
		return;

	CGame* pGame = m_pCard->GetGame();
	if (pGame->IsThinking() && !pGame->IsCardVisible(pCard))
	{
		// Assume positive result
		m_Callback(pToZone->GetPlayer(), pCard, pByPlayer);
		return;
	}

	// Ref: Rowen
	if (m_bRevealCards && !pFromZone->IsVisibleToOthers() && !pToZone->IsVisibleToOthers())
	{
		if (!pGame->IsThinking())
		{
			CString strMessage;
			strMessage.Format(_T("%s reveals %s in %s's %s"), 
									pByPlayer->GetPlayerName(), pCard->GetCardName(),
									pFromZone->GetPlayer()->GetPlayerName(),
									pFromZone->GetZoneName());
			pGame->Message(
				strMessage, 
				pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
				MessageImportance::High
				);

			for (int j = 0; j < pGame->GetPlayerCount(); ++j)
			{
				if (pGame->GetPlayer(j)->IsComputer())
					pGame->GetPlayer(j)->RemoveStrategy(StrategyRemovalReason::RevealLibrary);

				pGame->GetPlayer(j)->MemorizeCard(pCard);
			}
		}
	}

	if (m_CardFilterHelper.IsCardIncluded(pCard))
	{
		m_Callback(pToZone->GetPlayer(), pCard, pByPlayer);
	}
}

//____________________________________________________________________________
//
CWhenSpellCast::CWhenSpellCast(CCard* pCard)
	: m_bThisIsUntappedOnly(FALSE)
	, m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_cpPListener(VAR_NAME(m_cpPListener), CastSpellEventSource::Listener::EventCallback(
					this, &CWhenSpellCast::OnSpellCasted))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenSpellCast::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenSpellCast::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenSpellCast::GetTriggeredHint(CCard* pCard) const
{
	return pCard->GetCardName();
}

void CWhenSpellCast::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	pGame->GetStack().GetCastSpellEventSource()->AddListener(m_cpPListener.GetPointer());
}

void CWhenSpellCast::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpPListener->RemoveAllEventSources();
}

void CWhenSpellCast::OnSpellCasted(CCard* pCard)
{
	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCard->GetController() == m_pCard->GetController()))
		return;

	if (m_CardFilterHelper.IsCardIncluded(pCard))
		m_Callback(pCard);
}

//____________________________________________________________________________
//
CWhenSelfAttackedBlocked::CWhenSelfAttackedBlocked(CCard* pCard)
	: m_WhenNodeChanged(pCard, NodeId::DeclareAttackersStep2)
	, m_cpAListener(VAR_NAME(m_cpAListener), AttackedPlayerEventSource::Listener::EventCallback(this, &CWhenSelfAttackedBlocked::OnAttacked))
	, m_cpBListener(VAR_NAME(m_cpBListener), BlockedCreatureEventSource::Listener::EventCallback(this, &CWhenSelfAttackedBlocked::OnBlocking))
	, m_cpBByListener(VAR_NAME(m_cpBByListener), BlockedByCreatureEventSource::Listener::EventCallback(this, &CWhenSelfAttackedBlocked::OnBlocked))
{
	ATLASSERT((pCard->GetCardType() & CardType::Creature).Any());
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
	m_pCreatureCard = pCreatureCard;
}

void CWhenSelfAttackedBlocked::SetAttackingEventCallback(AttackEventCallback callback)
{
	m_pCreatureCard->GetAttackedPlayerEventSource()->AddListener(m_cpAListener.GetPointer());
	m_AttackingCallback = callback;
}

void CWhenSelfAttackedBlocked::SetBlockingEventCallback(BlockEventCallback callback)
{
	m_pCreatureCard->GetBlockedCreatureEventSource()->AddListener(m_cpBListener.GetPointer());
	m_BlockingCallback = callback;
}

void CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback(EventCallback callback)
{
	m_pCreatureCard->GetAttackedPlayerEventSource()->AddListener(m_cpAListener.GetPointer());
	m_pCreatureCard->GetBlockedCreatureEventSource()->AddListener(m_cpBListener.GetPointer());
	m_AttackingOrBlockingCallback = callback;
}

void CWhenSelfAttackedBlocked::SetBlockedEventCallback(BlockEventCallback callback)
{
	m_pCreatureCard->GetBlockedByCreatureEventSource()->AddListener(m_cpBByListener.GetPointer());
	m_BlockedCallback = callback;
}

void CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback(BlockEventCallback callback)
{
	m_pCreatureCard->GetBlockedByCreatureEventSource()->AddListener(m_cpBByListener.GetPointer());
	m_BlockedEachTimeCallback = callback;
}

void CWhenSelfAttackedBlocked::SetAttackingAloneEventCallback(AttackEventCallback callback)
{
	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CWhenSelfAttackedBlocked::OnNodeChanged));
	m_AttackingAloneCallback = callback;
}

void CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback(BlockEventCallback2 callback)
{
	m_pCreatureCard->GetBlockedCreatureEventSource()->AddListener(m_cpBListener.GetPointer());
	m_pCreatureCard->GetBlockedByCreatureEventSource()->AddListener(m_cpBByListener.GetPointer());
	m_BlockingOrBlockedCallback = callback;
}

void CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback(BlockEventCallback2 callback)
{
	m_pCreatureCard->GetBlockedCreatureEventSource()->AddListener(m_cpBListener.GetPointer());
	m_pCreatureCard->GetBlockedByCreatureEventSource()->AddListener(m_cpBByListener.GetPointer());
	m_BlockingOrBlockedEachTimeCallback = callback;
}

void CWhenSelfAttackedBlocked::OnNodeChanged(CNode* pToNode)
{
	if (m_AttackingAloneCallback.empty())
		return;

	if (!m_pCreatureCard->IsAttacking())
		return;

	CZone* pInplay = m_pCreatureCard->GetController()->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if (pInplay->GetAt(i)->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature2 = (CCreatureCard*)pInplay->GetAt(i);
			if (pCreature2 != m_pCreatureCard &&
				pCreature2->IsAttacking())
				return;
		}

	m_AttackingAloneCallback(AttackSubject(m_pCreatureCard));
}

void CWhenSelfAttackedBlocked::OnAttacked(AttackSubject attacked, CCreatureCard*)
{
	if (attacked.IsNull())
		return;

	if (!m_AttackingCallback.empty())
		m_AttackingCallback(attacked);

	if (!m_AttackingOrBlockingCallback.empty())
		m_AttackingOrBlockingCallback(m_pCreatureCard);
}

void CWhenSelfAttackedBlocked::OnBlocking(CCreatureCard* pCreatureCard, CCreatureCard* pBlocked, int nBlockedCount, int nBlockedIndex)
{
	if (!m_BlockFilterHelper.IsCardIncluded(pBlocked))
		return;

	if (!m_BlockingOrBlockedEachTimeCallback.empty())
	{
		m_BlockingOrBlockedEachTimeCallback(pCreatureCard, TRUE, pBlocked, nBlockedCount, nBlockedIndex);
	}

	if (!nBlockedIndex)
	{
		if (!m_BlockingCallback.empty())
			m_BlockingCallback(pCreatureCard, pBlocked, nBlockedCount, nBlockedIndex);

		if (!m_BlockingOrBlockedCallback.empty())
			m_BlockingOrBlockedCallback(pCreatureCard, TRUE, pBlocked, nBlockedCount, nBlockedIndex);

		if (!m_AttackingOrBlockingCallback.empty())
			m_AttackingOrBlockingCallback(m_pCreatureCard);
	}
}

void CWhenSelfAttackedBlocked::OnBlocked(CCreatureCard* pCreatureCard, CCreatureCard* pBlockedBy, int nBlockedByCount, int nBlockingIndex)
{
	if (!m_BlockFilterHelper.IsCardIncluded(pBlockedBy))
		return;

	if (!m_BlockedEachTimeCallback.empty())
	{
		m_BlockedEachTimeCallback(pCreatureCard, pBlockedBy, nBlockedByCount, nBlockingIndex);
	}
	if (!m_BlockingOrBlockedEachTimeCallback.empty())
	{
		m_BlockingOrBlockedEachTimeCallback(pCreatureCard, FALSE, pBlockedBy, nBlockedByCount, nBlockingIndex);
	}

	if (!nBlockingIndex)
	{
		if (!m_BlockedCallback.empty())
			m_BlockedCallback(pCreatureCard, pBlockedBy, nBlockedByCount, nBlockingIndex);

		if (!m_BlockingOrBlockedCallback.empty())
			m_BlockingOrBlockedCallback(pCreatureCard, FALSE, pBlockedBy, nBlockedByCount, nBlockingIndex);
	}
}

CString CWhenSelfAttackedBlocked::GetTriggeredHint(CCreatureCard* pCreatureCard) const
{
	return m_pCreatureCard->GetCardName();
}

CString CWhenSelfAttackedBlocked::GetTriggeredHint(AttackSubject attacked) const
{
	if (attacked.pPlayer)
		return attacked.pPlayer->GetPlayerName();

	if (attacked.cpPlaneswalker.GetPointer())
		return attacked.cpPlaneswalker->GetCardName();

	return _T("");
}

CString CWhenSelfAttackedBlocked::GetTriggeredHint(CCreatureCard*, CCreatureCard*, int, int) const
{
	return m_pCreatureCard->GetCardName();
}

CString CWhenSelfAttackedBlocked::GetTriggeredHint(CCreatureCard*, BOOL, CCreatureCard* pBlockedByCreatureCard, int, int) const
{
	return pBlockedByCreatureCard->GetCardName();
}

//____________________________________________________________________________
//
CWhenAttackedBlocked::CWhenAttackedBlocked(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CreatureAttackEventSource::Listener::EventCallback(this, &CWhenAttackedBlocked::OnCreatureAttacked))
	, m_cpBListener(VAR_NAME(m_cpBListener), 
					CreatureBlockedEventSource::Listener::EventCallback(this, &CWhenAttackedBlocked::OnCreatureBlocked))
	, m_cpBListener2(VAR_NAME(m_cpBListener2), 
					CreatureBlockingEventSource::Listener::EventCallback(this, &CWhenAttackedBlocked::OnCreatureBlocking))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlocked::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlocked::OnLeaveInplay));

	m_BlockedFilterHelper.SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}
void CWhenAttackedBlocked::ForceStart()
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlocked::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlocked::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && m_pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}
void CWhenAttackedBlocked::SetAttackingEventCallback(PlayerEventCallback callback)
{
	m_AttackingCallback = callback;
}

void CWhenAttackedBlocked::SetAttackingOrBlockingEventCallback(EventCallback callback)
{
	m_AttackingOrBlockingCallback = callback;
}

void CWhenAttackedBlocked::SetBlockingEventCallback(EventCallback callback)
{
	m_BlockingCallback = callback;
}

void CWhenAttackedBlocked::SetBlockedEventCallback(EventCallback callback)
{
	m_BlockedCallback = callback;
}

void CWhenAttackedBlocked::SetBlockedEachTimeEventCallback(BlockedByEventCallback callback)
{
	m_BlockedEachTimeCallback = callback;
}

void CWhenAttackedBlocked::SetAttackingAloneEventCallback(PlayerEventCallback callback)
{
	m_AttackingAloneCallback = callback;
}

void CWhenAttackedBlocked::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();

	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);

		if (!m_AttackingCallback.empty() || !m_AttackingAloneCallback.empty() || !m_AttackingOrBlockingCallback.empty())
		{
			CAttackDeclarationNode1* pAttackNode =
				(CAttackDeclarationNode1*)pPlayer->GetGraph()->GetNodeById(NodeId::DeclareAttackersStep1);

			pAttackNode->GetCreatureAttackEventSource()->AddListener(m_cpAListener.GetPointer());
		}

		if (!m_BlockingCallback.empty() || !m_BlockedCallback.empty() || !m_BlockedEachTimeCallback.empty() || !m_AttackingOrBlockingCallback.empty())
		{
			CBlockDeclarationNode1* pBlockNode =
				(CBlockDeclarationNode1*)pPlayer->GetGraph()->GetNodeById(NodeId::DeclareBlockersStep1);

			if (!m_BlockingCallback.empty() || !m_AttackingOrBlockingCallback.empty())
				pBlockNode->GetCreatureBlockingEventSource()->AddListener(m_cpBListener2.GetPointer());

			if (!m_BlockedCallback.empty() || !m_BlockedEachTimeCallback.empty())
				pBlockNode->GetCreatureBlockedEventSource()->AddListener(m_cpBListener.GetPointer());
		}
	}
}

void CWhenAttackedBlocked::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
	m_cpBListener->RemoveAllEventSources();
	m_cpBListener2->RemoveAllEventSources();
}

void CWhenAttackedBlocked::OnAttackedBlocked(CCreatureCard* pCreatureCard)
{
	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pCreatureCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCreatureCard->GetController() == m_pCard->GetController()))
		return;

	if (!m_BlockingCallback.empty() && pCreatureCard->IsBlocking() &&
		m_BlockedFilterHelper.IsCardIncluded(pCreatureCard)) // added support for filter : 2/28/2011
		m_BlockingCallback(pCreatureCard);
	else if (!m_AttackingOrBlockingCallback.empty() && pCreatureCard->IsBlocking())
		m_AttackingOrBlockingCallback(pCreatureCard);
	else
	{
		if (pCreatureCard->IsAttacking())
		{
			if (!m_AttackingOrBlockingCallback.empty())
				m_AttackingOrBlockingCallback(pCreatureCard);

			if (!m_AttackingCallback.empty())
				m_AttackingCallback(pCreatureCard, AttackSubject(pCreatureCard));

			if (!m_AttackingAloneCallback.empty())
			{
				BOOL bFound = FALSE;
				CZone* pInplay = pCreatureCard->GetController()->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pInplay->GetSize(); ++i)
					if (pInplay->GetAt(i)->GetCardType().IsCreature())
					{
						CCreatureCard* pCreature2 = (CCreatureCard*)pInplay->GetAt(i);
						if (pCreature2 != pCreatureCard &&
							pCreature2->IsAttacking())
						{
							bFound = TRUE;
							break;
						}
					}

				if (!bFound)
					m_AttackingAloneCallback(pCreatureCard, AttackSubject(pCreatureCard));
			}
		}
	
		if (pCreatureCard->IsBlocked())
		{
			if (!m_BlockedCallback.empty() && m_BlockedFilterHelper.IsCardIncluded(pCreatureCard))
				m_BlockedCallback(pCreatureCard);

			if (!m_BlockedEachTimeCallback.empty() && m_BlockedFilterHelper.IsCardIncluded(pCreatureCard))
				for (int i = 0; i < pCreatureCard->GetBlockedByCount(); ++i)
					m_BlockedEachTimeCallback(pCreatureCard, (CCreatureCard*)pCreatureCard->GetBlockedBy().GetAt(i));
		}
	}
}

CString CWhenAttackedBlocked::GetTriggeredHint(CCreatureCard* pCreatureCard) const
{
	return pCreatureCard->GetCardName();
}

CString CWhenAttackedBlocked::GetTriggeredHint(CCreatureCard* pAttackingCreatureCard, CCreatureCard* pBlockedByCreatureCard) const
{
	return pBlockedByCreatureCard->GetCardName();
}

CString CWhenAttackedBlocked::GetTriggeredHint(CCreatureCard* pCreatureCard, AttackSubject attacked) const
{
	if (attacked.pPlayer)
		return attacked.pPlayer->GetPlayerName();

	if (attacked.cpPlaneswalker.GetPointer())
		return attacked.cpPlaneswalker->GetCardName();

	return _T("");
}

//____________________________________________________________________________
//
CWhenSelfDamageDealt::CWhenSelfDamageDealt(CCard* pCard)
	: m_cpDListener(VAR_NAME(m_cpDListener), DamageDealEventSource::Listener::EventCallback(this, &CWhenSelfDamageDealt::OnDamageDealt))
	, m_bCombatDamageOnly(FALSE)
	, m_bNonCombatDamageOnly(FALSE)
	, m_bToControllerOnly(FALSE)
	, m_bToOpponentsOnly(FALSE)
	, m_pCard(pCard)
{
	ATLASSERT((pCard->GetCardType() & CardType::Creature).Any());
	
	pCard->GetDealDamageEventSource()->AddListener(m_cpDListener.GetPointer());
}

CString CWhenSelfDamageDealt::GetTriggeredHint(CPlayer*, Damage) const
{
	return m_pCard->GetCardName();
}

CString CWhenSelfDamageDealt::GetTriggeredHint(CCreatureCard*, Damage) const
{
	return m_pCard->GetCardName();
}

CString CWhenSelfDamageDealt::GetTriggeredHint(Damage) const
{
	return m_pCard->GetCardName();
}

void CWhenSelfDamageDealt::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	if (m_bCombatDamageOnly && !(damage.m_DamageType & DamageType::CombatDamage).Any())
		return;

	if (m_bNonCombatDamageOnly && !(damage.m_DamageType & DamageType::NonCombatDamage).Any())
		return;

	ATLASSERT(pFromCard == m_pCard);

	if (pToPlayer && !m_PlayerCallback.empty())
	{
		if (m_bToControllerOnly)
		{
			if (pToPlayer == m_pCard->GetController())
				m_PlayerCallback(pToPlayer, damage);
		}
		else
		if (m_bToOpponentsOnly)
		{
			if (pToPlayer != m_pCard->GetController())
				m_PlayerCallback(pToPlayer, damage);
		}
		else
			m_PlayerCallback(pToPlayer, damage);
	}

	if (pToCreature && !m_CreatureCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToCreature))
			return;

		m_CreatureCallback(pToCreature, damage);
	}

	if (pToPlaneswalker && !m_PlaneswalkerCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToPlaneswalker))
			return;

		m_PlaneswalkerCallback(pToPlaneswalker, damage);
	}

	if (!m_DamageCallback.empty())
		m_DamageCallback(damage);
}

//____________________________________________________________________________
//
// Sengir Vampire: Whenever a creature dealt damage by Sengir Vampire is put into a graveyard, put a +1/+1 counter on Sengir Vampire.
//
CWhenSelfDamageDealt2::CWhenSelfDamageDealt2(CCard* pCard)
	: m_WhenSelfDamageDealt(pCard)
	, m_WhenCardMoved(pCard, ZoneId::_AllZones, ZoneId::Graveyard)
	, m_WhenNodeChanged(pCard, NodeId::CleanupStep2)
	, m_WhenSelfMoved(pCard)
{
	m_WhenNodeChanged.SetEventCallback(
		CWhenNodeChanged::EventCallback(this, &CWhenSelfDamageDealt2::OnEndOfTurn));

	m_WhenSelfDamageDealt.SetCreatureEventCallback(
		CWhenSelfDamageDealt::CreatureEventCallback(this, &CWhenSelfDamageDealt2::OnDamageDealtToCreature));

	m_WhenCardMoved.GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	m_WhenCardMoved.SetEventCallback(
		CWhenCardMoved::EventCallback(this, &CWhenSelfDamageDealt2::OnCardMoved));

	m_WhenSelfMoved.SetLeaveEventCallback(
		CWhenSelfInplay::EventCallback(this, &CWhenSelfDamageDealt2::OnSelfMoved));
}

CString CWhenSelfDamageDealt2::GetTriggeredHint(CCard* pCard) const
{
	return pCard->GetCardName();
}

void CWhenSelfDamageDealt2::OnEndOfTurn(CNode* pToNode)
{
	m_DamagedCreaturesThisTurn.RemoveAll();
}

void CWhenSelfDamageDealt2::OnSelfMoved(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_DamagedCreaturesThisTurn.RemoveAll();
}

void CWhenSelfDamageDealt2::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_Callback.empty())
		return;

	for (int i = 0; i < m_DamagedCreaturesThisTurn.GetSize(); ++i)
		if (m_DamagedCreaturesThisTurn.GetAt(i) == pCard)
		{
			m_Callback(pCard);
			break;
		}
}

void CWhenSelfDamageDealt2::OnDamageDealtToCreature(CCreatureCard* pToCreature, Damage damage)
{
	m_DamagedCreaturesThisTurn.AddCard(pToCreature, CardPlacement::Top);
}

//____________________________________________________________________________
//
CWhenDamageDealt::CWhenDamageDealt(CCard* pCard)
	: m_cpDListener(VAR_NAME(m_cpDListener), 
					DamageDealEventSource::Listener::EventCallback(this, &CWhenDamageDealt::OnDamageDealt))
	, m_bToControllerOnly(FALSE)
	, m_bToOpponentsOnly(FALSE)
	, m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bCombatDamageOnly(FALSE)
	, m_bNonCombatDamageOnly(FALSE)
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenDamageDealt::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenDamageDealt::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenDamageDealt::GetTriggeredHint(CCard* pCard, CCreatureCard*, Damage) const
{
	return pCard->GetCardName();
}

CString CWhenDamageDealt::GetTriggeredHint(CCard* pCard, CPlayer*, Damage) const
{
	return pCard->GetCardName();
}

CString CWhenDamageDealt::GetTriggeredHint(CCard* pCard, CPlaneswalkerCard*, Damage) const
{
	return pCard->GetCardName();
}

CString CWhenDamageDealt::GetTriggeredHint(Damage) const
{
	return _T("");
}
void CWhenDamageDealt::ForceStart()
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenDamageDealt::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenDamageDealt::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && m_pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}
void CWhenDamageDealt::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpDListener.GetPointer());
}

void CWhenDamageDealt::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpDListener->RemoveAllEventSources();
}

void CWhenDamageDealt::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	if (m_bCombatDamageOnly && !(damage.m_DamageType & DamageType::CombatDamage).Any())
		return;

	if (m_bNonCombatDamageOnly && !(damage.m_DamageType & DamageType::NonCombatDamage).Any())
		return;

	if (m_bMonitorControllerOnly && (pFromCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pFromCard->GetController() == m_pCard->GetController()))
		return;

	if (!m_FromCardFilterHelper.IsCardIncluded(pFromCard))
		return;

	if (pToPlayer && !m_PlayerCallback.empty())
	{
		if (m_bToControllerOnly)
		{
			if (pToPlayer == m_pCard->GetController())
				m_PlayerCallback(pFromCard, pToPlayer, damage);
		}
		else
		if (m_bToOpponentsOnly)
		{
			if (pToPlayer != m_pCard->GetController())
				m_PlayerCallback(pFromCard, pToPlayer, damage);
		}
		else
			m_PlayerCallback(pFromCard, pToPlayer, damage);
	}

	if (pToCreature && !m_CreatureCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToCreature))
			return;

		m_CreatureCallback(pFromCard, pToCreature, damage);
	}

	if (pToPlaneswalker && !m_PlaneswalkerCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToPlaneswalker))
			return;

		m_PlaneswalkerCallback(pFromCard, pToPlaneswalker, damage);
	}

	if (!m_DamageCallback.empty())
		m_DamageCallback(damage);
}

//____________________________________________________________________________
//
CWhenCardDiscarded::CWhenCardDiscarded(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpMListener(VAR_NAME(m_cpMListener), 
					CardMovementEventSource::Listener::EventCallback(this, &CWhenCardDiscarded::OnCardDiscarded))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardDiscarded::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardDiscarded::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenCardDiscarded::GetTriggeredHint(CPlayer*, CCard* pCard, CPlayer*) const
{
	return pCard->GetCardName();
}

void CWhenCardDiscarded::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetZoneById(ZoneId::Hand)->GetCardMovedEventSource()->AddListener(m_cpMListener.GetPointer());
}

void CWhenCardDiscarded::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpMListener->RemoveAllEventSources();
}

void CWhenCardDiscarded::OnCardDiscarded(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pFromZone->GetPlayer() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pFromZone->GetPlayer() == m_pCard->GetController()))
		return;

	if (!pFromZone || !pToZone)
		return;

	if ((pFromZone->GetZoneId() != ZoneId::Hand) || (moveType != MoveType::Discard && moveType != MoveType::NormalDiscard))
		return;

	if (m_CardFilterHelper.IsCardIncluded(pCard))
		return;
	
	m_Callback(pFromZone->GetPlayer(), pCard, pByPlayer);
}

//____________________________________________________________________________
//
CWhenOrientationChanged::CWhenOrientationChanged(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_ZoneId(ZoneId::Battlefield)
	, m_bThisIsUntappedOnly(FALSE)
	, m_FromOrientation(Orientation::_All)
	, m_ToOrientation(Orientation::_All)
	, m_cpOListener(VAR_NAME(m_cpOListener), 
					CardOrientationEventSource::Listener::EventCallback(this, &CWhenOrientationChanged::OnOrientationChanged))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenOrientationChanged::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenOrientationChanged::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenOrientationChanged::GetTriggeredHint(CCard* pCard, Orientation, Orientation) const
{
	return pCard->GetCardName();
}

void CWhenOrientationChanged::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		pGame->GetPlayer(i)->GetZoneById(m_ZoneId)->GetCardOrientationEventSource()->AddListener(m_cpOListener.GetPointer());
	}
}

void CWhenOrientationChanged::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpOListener->RemoveAllEventSources();
}

void CWhenOrientationChanged::OnOrientationChanged(CCard* pCard, Orientation fromOrientation, Orientation toOrientation)
{
	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCard->GetController() == m_pCard->GetController()))
		return;

	if ((m_FromOrientation & fromOrientation).Any() &&
		(m_ToOrientation & toOrientation).Any() &&
		m_CardFilterHelper.IsCardIncluded(pCard))
		m_Callback(pCard, fromOrientation, toOrientation);
}

//____________________________________________________________________________
//
CWhenOrientationChangedAny::CWhenOrientationChangedAny(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_ZoneId(ZoneId::Battlefield)
	, m_bThisIsUntappedOnly(FALSE)
	, m_FromOrientation(Orientation::_All)
	, m_ToOrientation(Orientation::_All)
	, m_cpOListener(VAR_NAME(m_cpOListener), 
					CardOrientationEventSource::Listener::EventCallback(this, &CWhenOrientationChangedAny::OnOrientationChanged))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenOrientationChangedAny::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenOrientationChangedAny::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame) // && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenOrientationChangedAny::GetTriggeredHint(CCard* pCard, Orientation, Orientation) const
{
	return pCard->GetCardName();
}

void CWhenOrientationChangedAny::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		pGame->GetPlayer(i)->GetZoneById(m_ZoneId)->GetCardOrientationEventSource()->AddListener(m_cpOListener.GetPointer());
	}
}

void CWhenOrientationChangedAny::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpOListener->RemoveAllEventSources();
}

void CWhenOrientationChangedAny::OnOrientationChanged(CCard* pCard, Orientation fromOrientation, Orientation toOrientation)
{
	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCard->GetController() == m_pCard->GetController()))
		return;

	if ((m_FromOrientation & fromOrientation).Any() &&
		(m_ToOrientation & toOrientation).Any() &&
		m_CardFilterHelper.IsCardIncluded(pCard))
		m_Callback(pCard, fromOrientation, toOrientation);
}

//____________________________________________________________________________
//
CWhenTappedForMana::CWhenTappedForMana(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpTListener(VAR_NAME(m_cpTListener), 
					CardTapForManaEventSource::Listener::EventCallback(this, &CWhenTappedForMana::OnTappedForMana))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenTappedForMana::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenTappedForMana::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

void CWhenTappedForMana::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardTapForManaEventSource()->AddListener(m_cpTListener.GetPointer());
	}
}

void CWhenTappedForMana::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpTListener->RemoveAllEventSources();
}

void CWhenTappedForMana::OnTappedForMana(const CManaProductionAbilityAction* pAction, BOOL bResult)
{
	if (!bResult)
		return;

	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	CCard* pCard = pAction->GetAbility()->GetCard();

	if (m_bMonitorControllerOnly && (pCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCard->GetController() == m_pCard->GetController()))
		return;

	if (m_CardFilterHelper.IsCardIncluded(pCard))
		m_Callback(pAction);
}

CString CWhenTappedForMana::GetTriggeredHint(const CManaProductionAbilityAction* pAction) const
{
	return pAction->GetAbility()->GetCard()->GetCardName();
}
CManaPool_ CWhenTappedForMana::GetManaPool(const CManaProductionAbilityAction* pAction) const
{
	return pAction->GetManaProductionAbility()->GetManaPool();
}

//____________________________________________________________________________
//
CWhenSelfTappedForMana::CWhenSelfTappedForMana(CCard* pCard)
	: m_cpTListener(VAR_NAME(m_cpTListener), CardTapForManaEventSource::Listener::EventCallback(this, &CWhenSelfTappedForMana::OnTappedForMana))
	, m_pCard(pCard)
{
	for (int i = 0; i < pCard->GetAbilityCount(); ++i)
	{
		CManaProductionAbility* pManaProductionAbility(dynamic_cast<CManaProductionAbility*>(pCard->GetAbility(i)));
		if (!pManaProductionAbility)
			continue;

		pManaProductionAbility->GetTapForManaEventSource()->AddListener(m_cpTListener.GetPointer());
	}
}

CString CWhenSelfTappedForMana::GetTriggeredHint(const CManaProductionAbilityAction*) const
{
	return m_pCard->GetCardName();
}

void CWhenSelfTappedForMana::OnTappedForMana(const CManaProductionAbilityAction* pAction, BOOL bResult)
{
	if (!bResult)
		return;

	if (m_pCard->GetZoneId() != ZoneId::Battlefield)
		return;

	if (m_Callback.empty())
		return;

	m_Callback(pAction);
}

//____________________________________________________________________________
//
CWhenSelfOrientationChanged::CWhenSelfOrientationChanged(CCard* pCard)
	: m_cpOListener(VAR_NAME(m_cpOListener), 
					COrientation::Listener::EventCallback(this, &CWhenSelfOrientationChanged::OnOrientationChanged))
	, m_pCard(pCard)
{
	pCard->GetOrientation()->AddListener(m_cpOListener.GetPointer());
}

CString CWhenSelfOrientationChanged::GetTriggeredHint(CCard* pCard) const
{
	return pCard->GetCardName();
}

void CWhenSelfOrientationChanged::OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation)
{
	CZone* pZone = m_pCard->GetZone();
	if (!pZone || (pZone->GetZoneId() != ZoneId::Battlefield))
		return;

	if ((fromOrientation & Orientation::Untap).Any() && (toOrientation & Orientation::Tap).Any())
	{
		if (!m_TapCallback.empty())
			m_TapCallback(m_pCard);
	}
	else
		if ((fromOrientation & Orientation::Tap).Any() && (toOrientation & Orientation::Untap).Any())
		{
			if (!m_UntapCallback.empty())
				m_UntapCallback(m_pCard);
		}
}

//____________________________________________________________________________
//
CWhenSelfEnchantCountChanged::CWhenSelfEnchantCountChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), 
				   CNumberEventSource<int>::Listener::EventCallback(this, &CWhenSelfEnchantCountChanged::OnEnchantCountChanged))
	, m_nFromCount(SpecialNumber::Any)
	, m_nToCount(SpecialNumber::Any)
	, m_pCard(pCard)
{
	pCard->GetEnchantCountEventSource()->AddListener(m_cpListener.GetPointer());
}

CString CWhenSelfEnchantCountChanged::GetTriggeredHint() const
{
	return m_pCard->GetCardName();
}

CString CWhenSelfEnchantCountChanged::GetTriggeredHint(int, int) const
{
	return m_pCard->GetCardName();
}

void CWhenSelfEnchantCountChanged::OnEnchantCountChanged(int nOldEnchantCount, int nNewEnchantCount)
{
	if (m_nFromCount != SpecialNumber::Any &&
		m_nFromCount != nOldEnchantCount)
		return;

	if (m_nToCount != SpecialNumber::Any &&
		m_nToCount != nNewEnchantCount)
		return;

	if (!m_CountCallback.empty())
		m_CountCallback(nOldEnchantCount, nNewEnchantCount);

	if (!nOldEnchantCount && nNewEnchantCount)
	{
		if (!m_EnchantCallback.empty())
			m_EnchantCallback();
	}
	else
		if (nOldEnchantCount && !nNewEnchantCount)
			if (!m_DisenchantCallback.empty())
				m_DisenchantCallback();
}

//____________________________________________________________________________
//
CWhenEnchantCountChanged::CWhenEnchantCountChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), 
				   CardEnchantCountEventSource::Listener::EventCallback(this, &CWhenEnchantCountChanged::OnEnchantCountChanged))
	, m_nFromCount(SpecialNumber::Any)
	, m_nToCount(SpecialNumber::Any)
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenEnchantCountChanged::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenEnchantCountChanged::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenEnchantCountChanged::GetTriggeredHint(CCard* pCard) const
{
	return pCard->GetCardName();
}

CString CWhenEnchantCountChanged::GetTriggeredHint(CCard* pCard, int, int) const
{
	return pCard->GetCardName();
}

void CWhenEnchantCountChanged::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardEnchantCountEventSource()->AddListener(m_cpListener.GetPointer());
}

void CWhenEnchantCountChanged::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpListener->RemoveAllEventSources();
}

void CWhenEnchantCountChanged::OnEnchantCountChanged(CCard* pCard, int nOldEnchantCount, int nNewEnchantCount)
{
	if (m_nFromCount != SpecialNumber::Any &&
		m_nFromCount != nOldEnchantCount)
		return;

	if (m_nToCount != SpecialNumber::Any &&
		m_nToCount != nNewEnchantCount)
		return;

	if (!m_CountCallback.empty())
		m_CountCallback(pCard, nOldEnchantCount, nNewEnchantCount);

	if (!nOldEnchantCount && nNewEnchantCount)
	{
		if (!m_EnchantCallback.empty())
			m_EnchantCallback(pCard);
	}
	else
		if (nOldEnchantCount && !nNewEnchantCount)
			if (!m_DisenchantCallback.empty())
				m_DisenchantCallback(pCard);
}

//____________________________________________________________________________
//
CWhenSubjectTargeted::CWhenSubjectTargeted(CCard* pCard, BOOL bMonitorInplayCards,
										   BOOL bMonitorStackSpells)
	: m_cpTListener(VAR_NAME(m_cpTListener), 
					TargetSubjectEventSource::Listener::EventCallback(this, &CWhenSubjectTargeted::OnSubjectTargeted))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
	, m_bMonitorInplayCards(bMonitorInplayCards)
	, m_bMonitorStackSpells(bMonitorStackSpells)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenSubjectTargeted::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenSubjectTargeted::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

void CWhenSubjectTargeted::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	pGame->GetTargetSubjectEventSource()->AddListener(m_cpTListener.GetPointer());
}

void CWhenSubjectTargeted::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpTListener->RemoveAllEventSources();
}

void CWhenSubjectTargeted::OnSubjectTargeted(const CSubjectGroup& subjectGroup, CPlayer* byPlayer)
{
	if (!m_PlayerCallback.empty())
		for (CSubjectGroup::PlayerSubjectIterator it = subjectGroup.PlayerSubjectBegin();
			it != subjectGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);

			if (m_bMonitorControllerOnly && (pPlayer != m_pCard->GetController()))
				continue;

			if (m_bMonitorOpponentsOnly && (pPlayer == m_pCard->GetController()))
				continue;

			m_PlayerCallback(pPlayer, byPlayer);
		}

	if (!m_CardCallback.empty())
		for (CSubjectGroup::CardSubjectIterator it = subjectGroup.CardSubjectBegin();
			it != subjectGroup.CardSubjectEnd(); ++it)
		{
			CCard* pCard = const_cast<CCard*>(it->GetPointer());

			if (!m_bMonitorInplayCards && pCard->GetZone()->GetZoneId() == ZoneId::Battlefield)
				continue;

			if (!m_bMonitorStackSpells && pCard->GetZone()->GetZoneId() == ZoneId::Stack)
				continue;

			if (m_CardFilterHelper.IsCardIncluded(pCard))
				m_CardCallback(pCard, byPlayer);
		}
}

CString CWhenSubjectTargeted::GetTriggeredHint(CCard* pCard, CPlayer* byPlayer) const
{
	return pCard->GetCardName();
}

CString CWhenSubjectTargeted::GetTriggeredHint(CPlayer* pPlayer, CPlayer* byPlayer) const
{
	return pPlayer->GetPlayerName();
}

//____________________________________________________________________________
//
CWhenCardKeywordChanged::CWhenCardKeywordChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), CCardKeyword::Listener::EventCallback(this, 
				   &CWhenCardKeywordChanged::OnCardKeywordChanged))
    , m_pCard(pCard)
{
	pCard->GetCardKeyword()->AddListener(m_cpListener.GetPointer());
}

CString CWhenCardKeywordChanged::GetTriggeredHint(CCard* pCard, CardKeyword, CardKeyword) const
{
	return pCard->GetCardName();
}

void CWhenCardKeywordChanged::OnCardKeywordChanged(CCardKeyword* pCardKeyword, CardKeyword fromCardKeyword, CardKeyword toCardKeyword)
{
	if (m_Callback)
		m_Callback(m_pCard, fromCardKeyword, toCardKeyword);
}

//____________________________________________________________________________
//
CWhenPlayerLifeChanged::CWhenPlayerLifeChanged(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_bThisIsInplayOnly(TRUE)
	, m_cpPListener(VAR_NAME(m_cpPListener), 
					ChangeLifeEventSource::Listener::EventCallback(this, &CWhenPlayerLifeChanged::OnLifeChanged))
	, m_pCard(pCard)
{
	CGame* pGame = m_pCard->GetGame();
	if (pGame)
		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
			pGame->GetPlayer(i)->GetChangeLifeEventSource()->AddListener(m_cpPListener.GetPointer());
}

void CWhenPlayerLifeChanged::OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife)
{
	if (m_Callback.empty())
		return;

	if (m_bThisIsInplayOnly && m_pCard->GetZoneId() != ZoneId::Battlefield)
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pPlayer != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pPlayer == m_pCard->GetController()))
		return;

	m_Callback(pPlayer, nFromLife, nToLife);
}

CString CWhenPlayerLifeChanged::GetTriggeredHint(const CPlayer* pPlayer, Life, Life) const
{
	return pPlayer->GetPlayerName();
}

//____________________________________________________________________________
//
CWhenControllerChanged::CWhenControllerChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), CPtrEventSource1<CPlayer, CCard*>::Listener::EventCallback(this, 
				   &CWhenControllerChanged::OnControllerChanged))
{
	pCard->GetControllerEventSource()->AddListener(m_cpListener.GetPointer());
}

CString CWhenControllerChanged::GetTriggeredHint(CPlayer*, CPlayer*, CCard* pCard) const
{
	return pCard->GetCardName();
}

void CWhenControllerChanged::OnControllerChanged(CPlayer* pFromPlayer, CPlayer* pToPlayer, CCard* pCard)
{
	if (m_Callback)
		m_Callback(pFromPlayer, pToPlayer, pCard);
}

//____________________________________________________________________________
//
CWhenSelfCardTypeChanged::CWhenSelfCardTypeChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), CardTypeEventSource::Listener::EventCallback(this, 
				   &CWhenSelfCardTypeChanged::OnCardTypeChanged))
{
	pCard->GetCardTypeEventSource()->AddListener(m_cpListener.GetPointer());
}

CString CWhenSelfCardTypeChanged::GetTriggeredHint(CCard* pCard, CardType, CardType) const
{
	return pCard->GetCardName();
}

void CWhenSelfCardTypeChanged::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (m_Callback)
		m_Callback(pCard, fromCardType, toCardType);
}

//____________________________________________________________________________
//
CWhenCardTypeChanged::CWhenCardTypeChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), CardTypeEventSource::Listener::EventCallback(this, 
				   &CWhenCardTypeChanged::OnCardTypeChanged))
	, m_WhenInplay(pCard)
	, m_pCard(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardTypeChanged::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardTypeChanged::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenCardTypeChanged::GetTriggeredHint(CCard* pCard, CardType, CardType) const
{
	return pCard->GetCardName();
}

void CWhenCardTypeChanged::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardTypeEventSource()->AddListener(m_cpListener.GetPointer());
}

void CWhenCardTypeChanged::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpListener->RemoveAllEventSources();
}

void CWhenCardTypeChanged::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (m_Callback)
		m_Callback(pCard, fromCardType, toCardType);
}

//____________________________________________________________________________
//
CWhenCreatureKeywordChanged::CWhenCreatureKeywordChanged(CCreatureCard* pCreature)
	: m_cpListener(VAR_NAME(m_cpListener), CCreatureKeyword::Listener::EventCallback(this, 
				   &CWhenCreatureKeywordChanged::OnCreatureKeywordChanged))
    , m_pCreatureCard(pCreature)
{
	pCreature->GetCreatureKeyword()->AddListener(m_cpListener.GetPointer());
}

void CWhenCreatureKeywordChanged::OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword)
{
	if (m_Callback)
		m_Callback(m_pCreatureCard, fromCreatureKeyword, toCreatureKeyword);
}

CString CWhenCreatureKeywordChanged::GetTriggeredHint(CCreatureCard* pCreatureCard, CreatureKeyword, CreatureKeyword) const
{
	return pCreatureCard->GetCardName();
}

//____________________________________________________________________________
//
CWhenIsAlsoAChanged::CWhenIsAlsoAChanged(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), CPtrEventSource<CCard>::Listener::EventCallback(this, 
				   &CWhenIsAlsoAChanged::OnIsAlsoAChanged))
	, m_pCard(pCard)
{
	pCard->GetIsAlsoAEventSource()->AddListener(m_cpListener.GetPointer());
}

CString CWhenIsAlsoAChanged::GetTriggeredHint(CCard* pCard, CCard*, CCard*) const
{
	return pCard->GetCardName();
}

void CWhenIsAlsoAChanged::OnIsAlsoAChanged(CCard* pFromCard, CCard* pToCard)
{
	if (m_Callback)
		m_Callback(m_pCard, pFromCard, pToCard);
}

/*
//____________________________________________________________________________
//
CWhenSelfActivationStatusChanged::CWhenSelfActivationStatusChanged(CCard* pCard, BOOL bUntappedOnly)
	: m_WhenSelfOrientationChanged(pCard)
	, m_WhenSelfInPlay(pCard)
	, m_bActivated(FALSE)
	, m_bUntappedOnly(bUntappedOnly)
	, m_pCard(pCard)
{
	m_WhenSelfOrientationChanged.SetTapEventCallback(
		CWhenSelfOrientationChanged::EventCallback(this, &CWhenSelfActivationStatusChanged::OnTapped));

	m_WhenSelfOrientationChanged.SetUntapEventCallback(
		CWhenSelfOrientationChanged::EventCallback(this, &CWhenSelfActivationStatusChanged::OnUntapped));

	m_WhenSelfInPlay.SetEnterEventCallback(
		CWhenSelfInplay::EventCallback(this, &CWhenSelfActivationStatusChanged::OnEnteredInPlay));

	m_WhenSelfInPlay.SetLeaveEventCallback(
		CWhenSelfInplay::EventCallback(this, &CWhenSelfActivationStatusChanged::OnLeftInPlay));
}

void CWhenSelfActivationStatusChanged::OnEnteredInPlay(CZone* pFromZone, CZone* pInplay, CPlayer* pByPlayer)
{
	if (!m_bActivated)
	{
		if (m_bUntappedOnly && CWhenSelfActivationStatusChanged::m_pCard->GetOrientation()->IsTapped())
			return;

		m_bActivated = TRUE;
		OnActivated();
	}	
}

void CWhenSelfActivationStatusChanged::OnLeftInPlay(CZone* pInplay, CZone* pToZone, CPlayer* pByPlayer)
{
	if (m_bActivated)
	{
		m_bActivated = FALSE;
		OnDeactivated();
	}
}

void CWhenSelfActivationStatusChanged::OnTapped()
{
	if (m_bActivated && m_bUntappedOnly)
	{
		m_bActivated = FALSE;
		OnDeactivated();
	}
}

void CWhenSelfActivationStatusChanged::OnUntapped()
{
	if (!m_bActivated && m_bUntappedOnly)
	{
		m_bActivated = TRUE;
		OnActivated();
	}
}
*/
//____________________________________________________________________________
//
CWhenSpellCastAny::CWhenSpellCastAny(CCard* pCard)
	: m_bThisIsUntappedOnly(FALSE)
	, m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_cpPListener(VAR_NAME(m_cpPListener), CastSpellEventSource::Listener::EventCallback(
					this, &CWhenSpellCastAny::OnSpellCasted))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenSpellCastAny::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenSpellCastAny::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame) // && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenSpellCastAny::GetTriggeredHint(CCard* pCard) const
{
	return pCard->GetCardName();
}

void CWhenSpellCastAny::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	pGame->GetStack().GetCastSpellEventSource()->AddListener(m_cpPListener.GetPointer());
}

void CWhenSpellCastAny::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpPListener->RemoveAllEventSources();
}

void CWhenSpellCastAny::OnSpellCasted(CCard* pCard)
{
	if (m_Callback.empty())
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (pCard->GetController() == m_pCard->GetController())
	{
		if (m_bMonitorOpponentsOnly)
			return;
	}//ugly but hopefully an optimization
	else if (m_bMonitorControllerOnly)
		return;

	if (m_CardFilterHelper.IsCardIncluded(pCard))
		m_Callback(pCard);
}

//____________________________________________________________________________
//
CWhenDamageDealtAny::CWhenDamageDealtAny(CCard* pCard)
	: m_cpDListener(VAR_NAME(m_cpDListener), 
					DamageDealEventSource::Listener::EventCallback(this, &CWhenDamageDealtAny::OnDamageDealt))
	, m_bToControllerOnly(FALSE)
	, m_bToOpponentsOnly(FALSE)
	, m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bCombatDamageOnly(FALSE)
	, m_bNonCombatDamageOnly(FALSE)
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenDamageDealtAny::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenDamageDealtAny::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame)
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenDamageDealtAny::GetTriggeredHint(CCard* pCard, CCreatureCard*, Damage) const
{
	return pCard->GetCardName();
}

CString CWhenDamageDealtAny::GetTriggeredHint(CCard* pCard, CPlayer*, Damage) const
{
	return pCard->GetCardName();
}

CString CWhenDamageDealtAny::GetTriggeredHint(Damage) const
{
	return _T("");
}

void CWhenDamageDealtAny::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpDListener.GetPointer());
}

void CWhenDamageDealtAny::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpDListener->RemoveAllEventSources();
}

void CWhenDamageDealtAny::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	if (m_bCombatDamageOnly && !(damage.m_DamageType & DamageType::CombatDamage).Any())
		return;

	if (m_bNonCombatDamageOnly && !(damage.m_DamageType & DamageType::NonCombatDamage).Any())
		return;

	if (m_bMonitorControllerOnly && (pFromCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pFromCard->GetController() == m_pCard->GetController()))
		return;

	if (!m_FromCardFilterHelper.IsCardIncluded(pFromCard))
		return;

	if (pToPlayer && !m_PlayerCallback.empty())
	{
		if (m_bToControllerOnly)
		{
			if (pToPlayer == m_pCard->GetController())
				m_PlayerCallback(pFromCard, pToPlayer, damage);
		}
		else
		if (m_bToOpponentsOnly)
		{
			if (pToPlayer != m_pCard->GetController())
				m_PlayerCallback(pFromCard, pToPlayer, damage);
		}
		else
			m_PlayerCallback(pFromCard, pToPlayer, damage);
	}

	if (pToCreature && !m_CreatureCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToCreature))
			return;

		m_CreatureCallback(pFromCard, pToCreature, damage);
	}

	if (pToPlaneswalker && !m_PlaneswalkerCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToPlaneswalker))
			return;

		m_PlaneswalkerCallback(pFromCard, pToPlaneswalker, damage);
	}

	if (!m_DamageCallback.empty())
		m_DamageCallback(damage);
}

//____________________________________________________________________________
//
CBeforeDamageDealt::CBeforeDamageDealt(CCard* pCard)
	: m_cpDListener(VAR_NAME(m_cpDListener), 
					BeforeDamageDealtEventSource::Listener::EventCallback(this, &CBeforeDamageDealt::OnDamageDealt))
	, m_bToControllerOnly(FALSE)
	, m_bToOpponentsOnly(FALSE)
	, m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bCombatDamageOnly(FALSE)
	, m_bNonCombatDamageOnly(FALSE)
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CBeforeDamageDealt::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CBeforeDamageDealt::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CBeforeDamageDealt::GetTriggeredHint(CCard* pCard, CCreatureCard*, Damage, int) const
{
	return pCard->GetCardName();
}

CString CBeforeDamageDealt::GetTriggeredHint(CCard* pCard, CPlayer*, Damage, int) const
{
	return pCard->GetCardName();
}

CString CBeforeDamageDealt::GetTriggeredHint(Damage) const
{
	return _T("");
}

void CBeforeDamageDealt::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetBeforeDamageDealtEventSource()->AddListener(m_cpDListener.GetPointer());
}

void CBeforeDamageDealt::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpDListener->RemoveAllEventSources();
}

void CBeforeDamageDealt::OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage, int effect_index)
{
	if (m_bCombatDamageOnly && !(damage.m_DamageType & DamageType::CombatDamage).Any())
		return;

	if (m_bNonCombatDamageOnly && !(damage.m_DamageType & DamageType::NonCombatDamage).Any())
		return;

	if (m_bMonitorControllerOnly && (pFromCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pFromCard->GetController() == m_pCard->GetController()))
		return;

	if (!m_FromCardFilterHelper.IsCardIncluded(pFromCard))
		return;

	if (pToPlayer && !m_PlayerCallback.empty())
	{
		if (m_bToControllerOnly)
		{
			if (pToPlayer == m_pCard->GetController())
				m_PlayerCallback(pFromCard, pToPlayer, damage, effect_index);
		}
		else
		if (m_bToOpponentsOnly)
		{
			if (pToPlayer != m_pCard->GetController())
				m_PlayerCallback(pFromCard, pToPlayer, damage, effect_index);
		}
		else
			m_PlayerCallback(pFromCard, pToPlayer, damage, effect_index);
	}

	if (pToCreature && !m_CreatureCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToCreature))
			return;

		m_CreatureCallback(pFromCard, pToCreature, damage, effect_index);
	}

	if (pToPlaneswalker && !m_PlaneswalkerCallback.empty())
	{
		if (!m_ToCardFilterHelper.IsCardIncluded(pToPlaneswalker))
			return;

		m_PlaneswalkerCallback(pFromCard, pToPlaneswalker, damage);
	}

	if (!m_DamageCallback.empty())
		m_DamageCallback(damage);
}

//____________________________________________________________________________
//
CWhenCounterMoved::CWhenCounterMoved(CCard* pCard)
	: m_bFromControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)
	, m_bOnIncreaseOnly(FALSE)
	, m_bOnDecreaseOnly(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CounterMovedEventSource::Listener::EventCallback(this, &CWhenCounterMoved::OnCounterMoved))
	, m_pCard(pCard)	
	, m_bReportInPlayChanges(FALSE)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCounterMoved::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCounterMoved::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();

	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenCounterMoved::GetTriggeredHint(CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return pFromCard->GetCardName();
}

void CWhenCounterMoved::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CWhenCounterMoved::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
}

void CWhenCounterMoved::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (m_Callback.empty())
		return;

	if (m_bFromControllerOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}		

	if (m_bOnIncreaseOnly && (old > n_value))
			return;

	if (m_bOnDecreaseOnly && (n_value > old))
			return;

	if (m_CardFilterHelper.IsCardIncluded(pFromCard))
		m_Callback(pFromCard, name, old, n_value);
	
}

//____________________________________________________________________________
//
CWhenTimeCounterRemoved::CWhenTimeCounterRemoved(CCard* pCard)
	: m_bFromControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)		
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this,  
				   &CWhenTimeCounterRemoved::OnCounterMoved))
	, m_pCard(pCard)	
{
	pCard->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

CString CWhenTimeCounterRemoved::GetTriggeredHint(CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return pFromCard->GetCardName();
}

void CWhenTimeCounterRemoved::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (m_Callback.empty())
		return;

	if (m_bFromControllerOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}		

	if (m_CardFilterHelper.IsCardIncluded(pFromCard))
		m_Callback(pFromCard, name, old, n_value);
}

//____________________________________________________________________________
//
CWhenCardCycled::CWhenCardCycled(CCard* pCard)
	: m_bFromControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)		
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CardCycledEventSource::Listener::EventCallback(this, &CWhenCardCycled::OnCardCycled))
	, m_pCard(pCard)	
	, m_bReportInPlayChanges(FALSE)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardCycled::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenCardCycled::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();

	if (pGame && pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenCardCycled::GetTriggeredHint(CCard* pFromCard, CPlayer* pByPlayer) const
{
	return pFromCard->GetCardName();
}

void CWhenCardCycled::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetCardCycledEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CWhenCardCycled::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
}

void CWhenCardCycled::OnCardCycled(CCard* pFromCard, CPlayer* pByPlayer)
{
	if (m_Callback.empty())
		return;

	if (m_bFromControllerOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}		

	m_Callback(pFromCard, pByPlayer);
	
}

//____________________________________________________________________________
//
CWhenThisCardCycled::CWhenThisCardCycled(CCard* pCard)
	: m_bFromControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)		
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CardCycledEventSource::Listener::EventCallback(this, &CWhenThisCardCycled::OnCardCycled))
	, m_pCard(pCard)	
	, m_bReportInPlayChanges(FALSE)
	, m_WhenInplay(pCard)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenThisCardCycled::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenThisCardCycled::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();

	if (pGame) //&& pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenThisCardCycled::GetTriggeredHint(CCard* pFromCard, CPlayer* pByPlayer) const
{
	return pFromCard->GetCardName();
}

void CWhenThisCardCycled::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetCardCycledEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CWhenThisCardCycled::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
}

void CWhenThisCardCycled::OnCardCycled(CCard* pFromCard, CPlayer* pByPlayer)
{
	if (m_Callback.empty())
		return;

	if (m_bFromControllerOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (pFromCard->GetController() != m_pCard->GetController())
			return;
	}		

	if (m_pCard==pFromCard && m_pCard->GetZoneId() != ZoneId::Hand)
	m_Callback(pFromCard, pByPlayer);
	
}

//____________________________________________________________________________
//
CSpecialTrigger::CSpecialTrigger(CCard* pCard)
	: m_bFromControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)		
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					SpecialTriggerEventSource::Listener::EventCallback(this, &CSpecialTrigger::OnSpecialTrigger))
	, m_pCard(pCard)	
	, m_bReportInPlayChanges(FALSE)
	, m_WhenInplay(pCard)
	, m_pValue(0)
	, m_pInZone(ZoneId::_AllZones)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenThisCardCycled::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenThisCardCycled::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();

	if (pGame) //&& pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CSpecialTrigger::GetTriggeredHint(CCard* pCard, int n_value) const
{
	return pCard->GetCardName();
}

void CSpecialTrigger::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetSpecialTriggerEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CSpecialTrigger::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
}

void CSpecialTrigger::OnSpecialTrigger(CCard* pCard,  int n_value)
{
	if (m_Callback.empty())
		return;

	if (!(m_pCard->GetZone() && (m_pInZone & m_pCard->GetZone()->GetZoneId()).Any()))
		return;

	if (m_bFromControllerOnly)
	{
		if (pCard->GetController() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (pCard->GetController() != m_pCard->GetController())
			return;
	}		

	if (m_CardFilterHelper.IsCardIncluded(pCard) && n_value == m_pValue)
	m_Callback(pCard, n_value);
	
}

//____________________________________________________________________________
//
CWhenEquipped::CWhenEquipped(CCard* pCard)
	: m_cpListener(VAR_NAME(m_cpListener), 
				   CardEquippedEventSource::Listener::EventCallback(this, &CWhenEquipped::OnEquipped))	
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
	, m_pOnEquip(FALSE)
	, m_pOnUnequip(FALSE)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenEquipped::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenEquipped::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame) //&& pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CWhenEquipped::GetTriggeredHint(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard) const
{
	return pEquipCard->GetCardName();
}

void CWhenEquipped::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardEquippedEventSource()->AddListener(m_cpListener.GetPointer());
}

void CWhenEquipped::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpListener->RemoveAllEventSources();
}

void CWhenEquipped::OnEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard)
{
	if (m_pOnUnequip && pFromCard == m_pCard)
		return;

	if (pEquipCard->GetZoneId() == ZoneId::_PhasedOut)
		return;

	if (m_pCard ==  pEquipCard)
	{
		m_EquippedCallback(pEquipCard, pFromCard, pToCard);
	}
}

//____________________________________________________________________________
//
CSpecialChaosTrigger::CSpecialChaosTrigger(CCard* pCard)
	: m_bFromControllerOnly(FALSE)
	, m_bFromOpponentsOnly(FALSE)		
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					SpecialTriggerEventSource::Listener::EventCallback(this, &CSpecialChaosTrigger::OnSpecialTrigger))
	, m_pCard(pCard)	
	, m_bReportInPlayChanges(FALSE)
	, m_WhenInplay(pCard)
	, m_pValue(0)
	, m_pValue1(1)
	, m_pInZone(ZoneId::_AllZones)
{
	//m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenThisCardCycled::OnEnterInplay));
	//m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenThisCardCycled::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();

	if (pGame) //&& pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}

CString CSpecialChaosTrigger::GetTriggeredHint(CCard* pCard, int n_value) const
{
	return pCard->GetCardName();
}

void CSpecialChaosTrigger::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetSpecialTriggerEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CSpecialChaosTrigger::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
}

void CSpecialChaosTrigger::OnSpecialTrigger(CCard* pCard,  int n_value)
{
	if (m_Callback.empty())
		return;

	if (!(m_pCard->GetZone() && (m_pInZone & m_pCard->GetZone()->GetZoneId()).Any()) && n_value != m_pValue1)
		return;

	if (m_bFromControllerOnly)
	{
		if (pCard->GetController() != m_pCard->GetController())
			return;
	}
		
	if (m_bFromOpponentsOnly)
	{
		if (pCard->GetController() == m_pCard->GetController())
			return;
	}		

	if (m_CardFilterHelper.IsCardIncluded(pCard) && n_value == m_pValue)
	m_Callback(pCard, n_value);

	if (pCard == m_pCard && n_value == m_pValue1)
	m_Callback(pCard, n_value);
	
}

//____________________________________________________________________________
//
CWhenAttackedBlockedAny::CWhenAttackedBlockedAny(CCard* pCard)
	: m_bMonitorControllerOnly(FALSE)
	, m_bMonitorOpponentsOnly(FALSE)
	, m_bThisIsUntappedOnly(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
					CreatureAttackEventSource::Listener::EventCallback(this, &CWhenAttackedBlockedAny::OnCreatureAttacked))
	, m_cpBListener(VAR_NAME(m_cpBListener), 
					CreatureBlockedEventSource::Listener::EventCallback(this, &CWhenAttackedBlockedAny::OnCreatureBlocked))
	, m_cpBListener2(VAR_NAME(m_cpBListener2), 
					CreatureBlockingEventSource::Listener::EventCallback(this, &CWhenAttackedBlockedAny::OnCreatureBlocking))
	, m_pCard(pCard)
	, m_WhenInplay(pCard)
	, m_pInZone(ZoneId::_AllZones)
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlockedAny::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlockedAny::OnLeaveInplay));

	m_BlockedFilterHelper.SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	CGame* pGame = m_pCard->GetGame();
	if (pGame) //&& pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}
void CWhenAttackedBlockedAny::ForceStart()
{
	m_WhenInplay.SetEnterEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlockedAny::OnEnterInplay));
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CWhenAttackedBlockedAny::OnLeaveInplay));

	CGame* pGame = m_pCard->GetGame();
	if (pGame) // && m_pCard->IsInplay())
		OnEnterInplay(NULL, NULL, NULL, MoveType::Others);
}
void CWhenAttackedBlockedAny::SetAttackingEventCallback(PlayerEventCallback callback)
{
	m_AttackingCallback = callback;
}

void CWhenAttackedBlockedAny::SetAttackingOrBlockingEventCallback(EventCallback callback)
{
	m_AttackingOrBlockingCallback = callback;
}

void CWhenAttackedBlockedAny::SetBlockingEventCallback(EventCallback callback)
{
	m_BlockingCallback = callback;
}

void CWhenAttackedBlockedAny::SetBlockedEventCallback(EventCallback callback)
{
	m_BlockedCallback = callback;
}

void CWhenAttackedBlockedAny::SetBlockedEachTimeEventCallback(BlockedByEventCallback callback)
{
	m_BlockedEachTimeCallback = callback;
}

void CWhenAttackedBlockedAny::SetAttackingAloneEventCallback(PlayerEventCallback callback)
{
	m_AttackingAloneCallback = callback;
}

void CWhenAttackedBlockedAny::OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CGame* pGame = m_pCard->GetGame();

	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);

	//	if (!m_AttackingCallback.empty() || !m_AttackingAloneCallback.empty() || !m_AttackingOrBlockingCallback.empty())  
		// made for work in emblem zone (Jace the Architect of Thought 1st ability)
		{
			CAttackDeclarationNode1* pAttackNode =
				(CAttackDeclarationNode1*)pPlayer->GetGraph()->GetNodeById(NodeId::DeclareAttackersStep1);

			pAttackNode->GetCreatureAttackEventSource()->AddListener(m_cpAListener.GetPointer());
		}

		if (!m_BlockingCallback.empty() || !m_BlockedCallback.empty() || !m_BlockedEachTimeCallback.empty() || !m_AttackingOrBlockingCallback.empty())
		{
			CBlockDeclarationNode1* pBlockNode =
				(CBlockDeclarationNode1*)pPlayer->GetGraph()->GetNodeById(NodeId::DeclareBlockersStep1);

			if (!m_BlockingCallback.empty() || !m_AttackingOrBlockingCallback.empty())
				pBlockNode->GetCreatureBlockingEventSource()->AddListener(m_cpBListener2.GetPointer());

			if (!m_BlockedCallback.empty() || !m_BlockedEachTimeCallback.empty())
				pBlockNode->GetCreatureBlockedEventSource()->AddListener(m_cpBListener.GetPointer());
		}
	}
}

void CWhenAttackedBlockedAny::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_cpAListener->RemoveAllEventSources();
	m_cpBListener->RemoveAllEventSources();
	m_cpBListener2->RemoveAllEventSources();
}

void CWhenAttackedBlockedAny::OnAttackedBlocked(CCreatureCard* pCreatureCard)
{
	if (!(m_pCard->GetZone() && (m_pInZone & m_pCard->GetZone()->GetZoneId()).Any()))
		return;

	if (m_bThisIsUntappedOnly && m_pCard->GetOrientation()->IsTapped())
		return;

	if (m_bMonitorControllerOnly && (pCreatureCard->GetController() != m_pCard->GetController()))
		return;

	if (m_bMonitorOpponentsOnly && (pCreatureCard->GetController() == m_pCard->GetController()))
		return;

	if (!m_BlockingCallback.empty() && pCreatureCard->IsBlocking() &&
		m_BlockedFilterHelper.IsCardIncluded(pCreatureCard)) // added support for filter : 2/28/2011
		m_BlockingCallback(pCreatureCard);
	else if (!m_AttackingOrBlockingCallback.empty() && pCreatureCard->IsBlocking())
		m_AttackingOrBlockingCallback(pCreatureCard);
	else
	{
		if (pCreatureCard->IsAttacking())
		{
			if (!m_AttackingOrBlockingCallback.empty())
				m_AttackingOrBlockingCallback(pCreatureCard);

			if (!m_AttackingCallback.empty())
				m_AttackingCallback(pCreatureCard, AttackSubject(pCreatureCard));

			if (!m_AttackingAloneCallback.empty())
			{
				BOOL bFound = FALSE;
				CZone* pInplay = pCreatureCard->GetController()->GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pInplay->GetSize(); ++i)
					if (pInplay->GetAt(i)->GetCardType().IsCreature())
					{
						CCreatureCard* pCreature2 = (CCreatureCard*)pInplay->GetAt(i);
						if (pCreature2 != pCreatureCard &&
							pCreature2->IsAttacking())
						{
							bFound = TRUE;
							break;
						}
					}

				if (!bFound)
					m_AttackingAloneCallback(pCreatureCard, AttackSubject(pCreatureCard));
			}
		}
	
		if (pCreatureCard->IsBlocked())
		{
			if (!m_BlockedCallback.empty() && m_BlockedFilterHelper.IsCardIncluded(pCreatureCard))
				m_BlockedCallback(pCreatureCard);

			if (!m_BlockedEachTimeCallback.empty() && m_BlockedFilterHelper.IsCardIncluded(pCreatureCard))
				for (int i = 0; i < pCreatureCard->GetBlockedByCount(); ++i)
					m_BlockedEachTimeCallback(pCreatureCard, (CCreatureCard*)pCreatureCard->GetBlockedBy().GetAt(i));
		}
	}
}

CString CWhenAttackedBlockedAny::GetTriggeredHint(CCreatureCard* pCreatureCard) const
{
	return pCreatureCard->GetCardName();
}

CString CWhenAttackedBlockedAny::GetTriggeredHint(CCreatureCard* pAttackingCreatureCard, CCreatureCard* pBlockedByCreatureCard) const
{
	return pBlockedByCreatureCard->GetCardName();
}

CString CWhenAttackedBlockedAny::GetTriggeredHint(CCreatureCard* pCreatureCard, AttackSubject attacked) const
{
	if (attacked.pPlayer)
		return attacked.pPlayer->GetPlayerName();

	if (attacked.cpPlaneswalker.GetPointer())
		return attacked.cpPlaneswalker->GetCardName();

	return _T("");
}

//____________________________________________________________________________
//