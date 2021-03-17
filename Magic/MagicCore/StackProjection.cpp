#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CPlayerProjection_& CPlayerProjection_::operator=(const CPlayerProjection& projection)
{
	m_pPlayer = projection.m_pPlayer;
	m_Life = projection.m_Life;

	m_InplayCards.RemoveAll();
	m_HandCards.RemoveAll();

	for (CSet<UINT>::Iterator i = projection.m_HandCards.Begin(); i != projection.m_HandCards.End(); ++i)
		m_HandCards.Set(*i);

	for (CDictionary<UINT, int>::Iterator i = projection.m_InplayCards.Begin(); i != projection.m_InplayCards.End(); ++i)
		m_InplayCards.Set(i->first, i->second);

	return *this;
}

//____________________________________________________________________________
//
CStackProjection::CStackProjection(CGame* pGame)
	: m_pGame(pGame)
	, m_State(State::Null)
{
}

CStackProjection::~CStackProjection()
{
	for (size_t i = 0; i < m_Projections.size(); ++i)
		delete m_Projections[i];
}

void CStackProjection::Initialize()
{
	ATLASSERT(m_pGame);

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayerProjection_* pProjection = new CPlayerProjection_(m_pGame->GetPlayer(i));
		m_Projections.push_back(pProjection);
	}
}

void CStackProjection::Clear()
{
	for (size_t i = 0; i < m_Projections.size(); ++i)
		m_Projections[i]->Clear();

	m_State = State::Null;
}

void CStackProjection::Project()
{
	if (m_State.Get() != State::Null)
		return;

	if (m_pGame->GetSelection().Pending())
	{
		m_State = State::Empty;
		return;
	}

	CStack& stack = m_pGame->GetStack();
	int nStackSize = stack.GetStackSize();
	CNode* pNode = m_pGame->GetCurrentNode();
	NodeId nodeId = pNode->GetNodeId();

	if (!nStackSize &&
		nodeId != NodeId::CombatDamageStep1b &&
		nodeId != NodeId::CombatDamageStep2b)
	{
		m_State = State::Empty;
		return;
	}

	State state = State::Null;
	std::vector<CPlayerProjection*> projections;
	bool bThinking = m_pGame->IsThinking();

	m_pGame->Push();

	do
	{
		if (!bThinking)
			m_pGame->SetThinkingPlayer(m_pGame->GetPriorityPlayer());

		if (!nStackSize)
		{
			// Resolve combat damage

			((CCombatNode*)pNode)->DealCombatDamage();
		}
		else
			stack.ResolveTopAction();

		do
		{
			if (!m_pGame->GetSelection().Pending())
				break;

			CActionContainer selectionActions;
			m_pGame->GetSelection().GetSelectionActionContainer(selectionActions);

			if (selectionActions.GetSize() > 1)
			{
				state = State::Empty;
				break;
			}

			selectionActions.PerformAction(0);
		
		} while (true);

		//if (state == State::Inconclusive) changed inconclusive to empty
		//	break;

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			const CPlayer* pPlayer = m_pGame->GetPlayer(i);

			CPlayerProjection* pProjection = new CPlayerProjection(pPlayer);

			pProjection->SetPlayerInfo(pPlayer->GetLife());

			const CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
			for (int j = 0; j < pInplay->GetSize(); ++j)
			{
				const CCard* pCard = pInplay->GetAt(j);
				if (pCard->GetCardType().IsCreature())
					pProjection->SetInplayCardInfo(pCard->GetInstanceID(), ((const CCreatureCard*)pCard)->GetLife());
				else
					pProjection->SetInplayCardInfo(pCard->GetInstanceID(), Life(-1));
			}

			const CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
			for (int j = 0; j < pHand->GetSize(); ++j)
			{
				const CCard* pCard = pHand->GetAt(j);
				pProjection->SetHandCardInfo(pCard->GetInstanceID());
			}

			projections.push_back(pProjection);
		}

		state = State::Valid;

	} while (false);

	m_pGame->Pop();

	if (!bThinking)
		m_pGame->SetThinkingPlayer(NULL);

	m_State = state;

	if (m_State.Get() == State::Valid)
	{
		for (size_t i = 0; i < m_Projections.size(); ++i)
		{
			CPlayerProjection_* pProjection = m_Projections[i];

			ATLASSERT(pProjection->GetInplayCardCount() == 0);
			ATLASSERT(pProjection->GetPlayer() == projections[i]->GetPlayer());
		
			CPlayerProjection* pNewProjection = projections[i];

			*pProjection = *pNewProjection;

			delete pNewProjection;
		}
	}
}

BOOL CStackProjection::Ready() const
{
	return m_State.Get() != State::Null;
}

BOOL CStackProjection::CreaturesLifeMayChange(const CCreatureCard* pCreature, 
											  BOOL bCheckIncrease, BOOL bCheckDecrease) const
{
	ATLASSERT(bCheckIncrease || bCheckDecrease);

	if (!bCheckIncrease && !bCheckDecrease)
		return FALSE;

	if (m_State.Get() == State::Empty)
		return FALSE;

	if (m_State.Get() != State::Valid)
		return TRUE;	// When in doubt, reply yes

	Life currentLife(pCreature->GetLife());

	for (size_t i = 0; i < m_Projections.size(); ++i)
	{
		CPlayerProjection_* pProjection = m_Projections[i];
		if (!pProjection->HasInplayCard(pCreature))
			continue;

		Life lifeDelta(pProjection->GetCreatureLife(pCreature) - currentLife);
		if (lifeDelta < Life(0))
			return bCheckDecrease;
		else
		if (lifeDelta > Life(0))
			return bCheckIncrease;

		return FALSE;
	}

	return FALSE;
}

BOOL CStackProjection::PlayersLifeMayChange(const CPlayer* pPlayer,
											BOOL bCheckIncrease, BOOL bCheckDecrease) const
{
	ATLASSERT(bCheckIncrease || bCheckDecrease);

	if (!bCheckIncrease && !bCheckDecrease)
		return FALSE;

	if (m_State.Get() == State::Empty)
		return FALSE;

	if (m_State.Get() != State::Valid)
		return TRUE;	// When in doubt, reply yes

	Life currentLife(pPlayer->GetLife());

	for (size_t i = 0; i < m_Projections.size(); ++i)
	{
		CPlayerProjection_* pProjection = m_Projections[i];
		if (pProjection->GetPlayer() != pPlayer)
			continue;

		Life lifeDelta(pProjection->GetLife() - currentLife);
		if (lifeDelta < Life(0))
			return bCheckDecrease;
		else
		if (lifeDelta > Life(0))
			return bCheckIncrease;

		return FALSE;
	}

	return FALSE;
}

BOOL CStackProjection::CardMayLeaveInplay(const CCard* pCard) const
{
	if (m_State.Get() == State::Empty)
		return FALSE;

	if (m_State.Get() != State::Valid)
		return TRUE;	// When in doubt, reply yes

	const CPlayer* pPlayer = pCard->GetController();

	for (size_t i = 0; i < m_Projections.size(); ++i)
	{
		CPlayerProjection_* pProjection = m_Projections[i];
		if (pProjection->GetPlayer() != pPlayer)
			continue;

		return !pProjection->HasInplayCard(pCard);
	}

	return TRUE;
}

BOOL CStackProjection::CardMayBeDiscarded(const CCard* pCard) const
{
	if (m_State.Get() == State::Empty)
		return FALSE;

	if (m_State.Get() != State::Valid)
		return TRUE;	// When in doubt, reply yes

	const CPlayer* pPlayer = pCard->GetController();

	for (size_t i = 0; i < m_Projections.size(); ++i)
	{
		CPlayerProjection_* pProjection = m_Projections[i];
		if (pProjection->GetPlayer() != pPlayer)
			continue;

		return !pProjection->HasHandCard(pCard);
	}

	return TRUE;
}