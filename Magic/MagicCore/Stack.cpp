#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
void CStack::AddAction(CStackAbilityAction* pAction)
{
	m_Projection.Clear();

	__super::Add(pAction);

	m_nPassCount = 0;
	m_ActionStatus.Add(StackActionStatus::Okay);

	CStackAbility* pAbility = pAction->GetStackAbility();

	CCard* pCard = pAbility->GetCard();
	BOOL bIsSpell = 
		//pCard->GetZoneId() == ZoneId::Hand &&		// removed to support PlayCardsFromGraveyard
		pAbility->IsSpell();
	BOOL isCycling = (pAbility->GetAbilityTag() & AbilityTag::Cycling).Any();
	if (bIsSpell)
	{

		if (pCard->GetZoneId() == ZoneId::Graveyard)
		{			
			std::set<const CCardFilter*> allowedCards;
			bool bFound = false;

			if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromGraveyard, allowedCards))
			{
			
			for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
				if ((*i)->IsCardIncluded(pCard))
				{
					bFound = true;
				}
			}
			
			if (!bFound && !pAction->IsFlashback())
			if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayOneCardFromGraveyard, allowedCards))
			{
			bool bFound = false;
			for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
				if ((*i)->IsCardIncluded(pCard))
				{
					bFound = true;
					pCard->GetController()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::PlayOneCardFromGraveyard, FALSE, (int)(*i));
					break;
				}
			}
		}

		ZoneId fromZone = pCard->GetZoneId();

		pCard->Move(pCard->GetController()->GetZoneById(ZoneId::Stack), NULL, MoveType::Cast);

		if (pAbility->IsMorph())
			(reinterpret_cast<CMorphCreatureCard*>(pCard))->Morph();
		else if (pAction->IsFlashback() || pAbility->GetAbilityName() == _T("Flashback"))
			pCard->GetReplacementKeyword()->AddFlashback(TRUE);

		pCard->SetLastCastingCostConfigEntry(pAction->GetCostConfigEntry());
		pCard->SetLastCastingManaCost(pAction->GetCostConfigEntry().GetManaPool());
		pCard->SetLastCastingExtraValue(pAbility->GetCost().GetExtraValue(pAction->GetCostConfigEntry()));

		//CAbilityAction* pAbilityAction = dynamic_cast<CAbilityAction*>(pAction);
		//if (pAbilityAction &&
		//	(pAbilityAction->GetAbility()->GetAbilityType() & AbilityType::_Spells).Any())		

		if (!pCard->GetCardType().IsToken())
		{
			pAction->GetController()->IncreaseTurnCastedSpellCount();		// 11/2/2003: To support Arcane Laboratory
			pAction->GetController()->AddTurnCastedSpell(pCard, pCard->GetCardType(), ZoneId::Stack, fromZone);
			//pAction->GetController()->AddTurnCastedSpellTypes(pCard->GetCardType());
		
			m_cpCastSpellEventSource->FireEvent(pCard);
		}
	}
	else if (isCycling)
		const_cast<CCard*>(pCard)->CardCycled(pCard, pCard->GetController());

	// No need to change priority player here, see official rule 408.1c
	//if (m_pGame->GetPriorityPlayer() != m_pGame->GetActivePlayer())
	//	m_pGame->SetPriorityPlayer(m_pGame->GetActivePlayer());

	// A targeting selection entry? See also CSelection::Select()

	if (pAction->IsTargeting())
	{
		const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pAction);
		if (pTargetAction->GetTargetGroup().GetSubjectCount())
		{
			m_pGame->GetTargetSubjectEventSource()->FireEvent(pTargetAction->GetTargetGroup(), pAction->GetController());
			for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
								it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

			{
				if (it->GetPointer()->GetZoneId() == ZoneId::Battlefield) const_cast<CCard*>(it->GetPointer())->IncreaseTargetedNumber();					
			}
		}
	}
	else if (pAction->IsDoubleTargeting())
	{
		const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
		if (pTargetAction->GetTargetGroup1().GetSubjectCount())
		{
			m_pGame->GetTargetSubjectEventSource()->FireEvent(pTargetAction->GetTargetGroup1(), pAction->GetController());
			for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup1().CardSubjectBegin();
								it != pTargetAction->GetTargetGroup1().CardSubjectEnd(); ++it)

			{
				if (it->GetPointer()->GetZoneId() == ZoneId::Battlefield) const_cast<CCard*>(it->GetPointer())->IncreaseTargetedNumber();					
			}
			
			m_pGame->GetTargetSubjectEventSource()->FireEvent(pTargetAction->GetTargetGroup2(), pAction->GetController());
			for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup2().CardSubjectBegin();
								it != pTargetAction->GetTargetGroup2().CardSubjectEnd(); ++it)

			{
				if (it->GetPointer()->GetZoneId() == ZoneId::Battlefield) const_cast<CCard*>(it->GetPointer())->IncreaseTargetedNumber();					
			}
		}
	}
}

const CStackAbilityAction* CStack::GetTopAction() const
{
	return (CStackAbilityAction*)GetAt(GetSize() - 1).GetPointer();
}

void CStack::SetActionStatus(int nStackActionIndex, StackActionStatus status)
{
	m_Projection.Clear();

	m_ActionStatus.SetAt(nStackActionIndex, status);
}

StackActionStatus CStack::GetActionStatus(int nStackActionIndex) const
{
	return m_ActionStatus.GetAt(nStackActionIndex);
}

void CStack::IncreasePassCount()
{
	m_pGame->SetNextPriorityPlayer();

	++m_nPassCount;
}

BOOL CStack::IsValidAbilityType(AbilityType abilityType, bool bCheckPlayer) const
{
#if 1	// 9/27/2003
	if (m_pGame->GetTriggeredResolutionPlayer())
	{
		// Only allow AbilityType::Triggered (not used by abilities) or MANA_SOURCE

		return ((abilityType & AbilityType::ManaSource) == AbilityType::ManaSource ||
				(abilityType & AbilityType::Triggered) == AbilityType::Triggered);
	}
#endif

	int nStackSize = GetSize();
	if (nStackSize)
	{
		if ((abilityType & AbilityType::Triggered) == AbilityType::Triggered ||
			(abilityType & AbilityType::ManaSource) == AbilityType::ManaSource)
		{
			// Triggered ability or mana source
			return (m_pGame->GetActivePlayer()->GetGraph()->GetCurrentNode()->GetValidAbilityType() & abilityType & AbilityType::_AbilityTypeMask).Any();
		}

		AbilityType topAbilityType;
		for (int i = 0; i < nStackSize; ++i)
		{
			const CStackAbility* pAbility = ((CStackAbilityAction*)GetAt(i).GetPointer())->GetStackAbility();
			if (pAbility->IsSpell() && pAbility->GetCard()->GetCardKeyword()->HasSplitSecond())
				return FALSE;

			if (i == nStackSize - 1)
				topAbilityType = pAbility->GetAbilityType();
		}

		return 
			// If ability is fast enough and
			(((abilityType & AbilityType::_AbilitySpeedMask) != AbilityType::_SlowSpeed) && // Slow speeds are not allowed in non-empty stacks
				((abilityType & AbilityType::_AbilitySpeedMask) >= (topAbilityType & AbilityType::_AbilitySpeedMask)))	// Faster than the top spell
				&&
			// If ability is allowed in current node and
			(m_pGame->GetActivePlayer()->GetGraph()->GetCurrentNode()->GetValidAbilityType() & abilityType & AbilityType::_AbilityTypeMask).Any();
	}

	if (bCheckPlayer)
		if ((abilityType & AbilityType::_AbilitySpeedMask) < AbilityType::_FastSpeed)	// Slow speeds are not allowed in opponents' turns
			if (m_pGame->GetActivePlayer() != m_pGame->GetPriorityPlayer())
				return FALSE;

	// Allowed in this node?

	return 
		(m_pGame->GetCurrentNode()->GetValidAbilityType() & abilityType & AbilityType::_AbilityTypeMask).Any();
}

void CStack::GetDenialActions(CActionContainer& actionContainer, BOOL bIncludeTricks, BOOL bSetNames) 
{
	if (!GetSize())
		return;

	counted_ptr<CStackPassAction> cpStackPassAction = ::CreateObject<CStackPassAction>(m_pGame);
	ATLASSERT(cpStackPassAction);

	cpStackPassAction->SetStackPassInfo(m_pGame->GetPlayerCount() - 1 == m_nPassCount);

	actionContainer.Add(cpStackPassAction.GetPointer());

	// 7/25/2002 Stack denial action support
	CPlayer* pPriorityPlayer = m_pGame->GetPriorityPlayer();
//	for (int i = 0; i < GetSize(); ++i)
//	{
		// Create one or more CStackDenialAction for each stack action which can be denied
		CStackAbilityAction* pStackAction = (CStackAbilityAction*)GetAt(GetSize()-1).GetPointer();
		if (!(m_ActionStatus[GetSize()-1] & StackActionStatus::Denied).Any() &&				// 9/27/2003: Denied actions cannot be denied again
			pStackAction->CanBeDeniedBy(pPriorityPlayer))
		{
			// Search for any existing CStackDenialAction against this stack action

		/*	BOOL bFound = FALSE;
			for (int j = i + 1; j < GetSize(); ++j)
			{
				CStackDenialAction* pDenialAction = dynamic_cast<CStackDenialAction*>(GetAt(i).GetPointer());
				if (pDenialAction && (pDenialAction->GetDeniedStackMoveIndex() == i))
				{
					bFound = TRUE;
					break;
				}
			}

			if (bFound)
				return; //continue;*/

			// Add action to stack

			CCost& denialCost(pStackAction->GetDenialCost());

			if (((CStackAbility*)pStackAction->GetAbility()) && ((CStackAbility*)pStackAction->GetAbility())->HasSpecialDenialCost())
			{
				denialCost = (((CCounterSpell*)pStackAction->GetAbility())->GetSpecialDenialCost(pStackAction->GetAbility()->GetController()));
			}
			
			if (denialCost.IsPlayable(pPriorityPlayer, bIncludeTricks, FALSE))	// Enough mana?
			{
				CostConfigurationArray costConfigs;
				if (denialCost.GetConfigurations(pPriorityPlayer, bIncludeTricks, bSetNames, costConfigs))
				{
					for (CostConfigurationArray::size_type j = 0; j < costConfigs.size(); ++j)
					{
						CCostConfigEntry& CostConfig = costConfigs[j];

						counted_ptr<CStackDenialAction> cpAction = ::CreateObject<CStackDenialAction>(m_pGame);
						ATLASSERT(cpAction);
	
						cpAction->SetDenialActionInfo(GetSize()-1, pPriorityPlayer, CostConfig);
						if (bSetNames)
						{
							cpAction->AppendToCostName(CostConfig.GetCostName());

							// Denial action names are now set during creations to handle recording strategy actions in MinimaxAB().
							// Previously the names are created when Clone() is called and since the stack may be changed after
							// performing a stack denial action, the m_nStackActionIndex is not valid afterward and cannot be used 
							// to format the action name in Clone().

							CString strActionName;
							strActionName.Format(_T("pays the '%s' cost"),
								pStackAction->GetAbility()->GetCard()->GetCardName());
							cpAction->SetActionName(strActionName);
						}

						actionContainer.Add(cpAction.GetPointer());
					}
				}
			}
//		}
	}
}
void CStack::DenyTopAction()
{
	if (GetTopAction()->IsSpell())
	{
		CCard* pCard = GetTopAction()->GetAbility()->GetCard();
		//CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, TRUE, MoveType::Others);
		//pModifier.ApplyTo(pCard);
		if (pCard->GetZoneId() == ZoneId::Stack)
			(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard)), NULL, MoveType::Others, CardPlacement::Top);
	}
	RemoveActionAt(GetSize()-1);
}
void CStack::ClearStack()
{
	CCountedCardContainer cards;

	for (int l = 0; l < GetStackSize(); ++l)
	{
		const CStackAbilityAction* pStackAction = GetStackAction(l).GetPointer();
		if (pStackAction->IsSpell())
		{
			cards.AddCard(pStackAction->GetAbility()->GetCard(), CardPlacement::Top);
		}
	}
	
	RemoveAll();

	for (int k = 0; k < cards.GetSize(); ++k)
	{
		cards.GetAt(k)->Move(const_cast<CZone*>(cards.GetAt(k)->GetOwner()->GetZoneById(ZoneId::Exile)), NULL, MoveType::Others, CardPlacement::Top);
	}
}
BOOL CStack::HasTarget(const CCard* pCard) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
#if 1		// 8/21/2002: IsTargeting() implies CTargetActionCommon
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			if (pTargetParent->GetTargetGroup().HasSubject(pCard))
				return TRUE;
#else
			/*
			CTargetSpellAction* pAction1 = (CTargetSpellAction*)pAction;

			if (pAction1->GetTarget()->HasSubject(pCard))
			return TRUE;
			*/
#endif
		}
		else
			if (pAction->IsDoubleTargeting())
			{
#if 1		// 8/21/2002: IsTargeting() implies CTargetActionCommon
				const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
				if (pTargetParent->GetTargetGroup1().HasSubject(pCard) || pTargetParent->GetTargetGroup2().HasSubject(pCard))
					return TRUE;
#else
				/*
				CTargetSpellAction* pAction1 = (CTargetSpellAction*)pAction;

				if (pAction1->GetTarget()->HasSubject(pCard))
				return TRUE;
				*/
#endif
			}
	}	

	return FALSE;
}

BOOL CStack::HasTargetedCards(const CPlayer* pControlledBy) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup().HasControlledCards(pControlledBy))
				return TRUE;
		}
		else
		if (pAction->IsDoubleTargeting())
		{
			const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup1().HasControlledCards(pControlledBy) || pTargetParent->GetTargetGroup2().HasControlledCards(pControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CStack::HasTargetedCreatures(const CPlayer* pControlledBy) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup().HasControlledCreatures(pControlledBy))
				return TRUE;
		}
		else
		if (pAction->IsDoubleTargeting())
		{
			const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup1().HasControlledCreatures(pControlledBy) || pTargetParent->GetTargetGroup2().HasControlledCreatures(pControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CStack::HasOtherCardTargets(const CPlayer* pExactControlledBy) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup().HasOtherCardSubjects(pExactControlledBy))
				return TRUE;
		}
		else
		if (pAction->IsDoubleTargeting())
		{
			const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup1().HasOtherCardSubjects(pExactControlledBy) || pTargetParent->GetTargetGroup2().HasOtherCardSubjects(pExactControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CStack::HasOtherCreatureTargets(const CPlayer* pExactControlledBy) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup().HasOtherCreatureSubjects(pExactControlledBy))
				return TRUE;
		}
		else
		if (pAction->IsDoubleTargeting())
		{
			const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup1().HasOtherCreatureSubjects(pExactControlledBy) || pTargetParent->GetTargetGroup2().HasOtherCreatureSubjects(pExactControlledBy))
				return TRUE;
		}
	}	

	return FALSE;
}

BOOL CStack::HasTarget(const CPlayer* pPlayer) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
#if 1		// 8/21/2002: IsTargeting() implies CTargetActionCommon
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup().HasSubject(pPlayer))
				return TRUE;
#else
/*
			CTargetSpellAction* pAction1 = (CTargetSpellAction*)pAction;
			
			if (pAction1->GetTarget()->HasSubject(pPlayer))
				return TRUE;
*/
#endif
		}
		else
		if (pAction->IsDoubleTargeting())
		{
#if 1		// 8/21/2002: IsTargeting() implies CTargetActionCommon
			const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup1().HasSubject(pPlayer) || pTargetParent->GetTargetGroup2().HasSubject(pPlayer))
				return TRUE;
#else
/*
			CTargetSpellAction* pAction1 = (CTargetSpellAction*)pAction;
			
			if (pAction1->GetTarget()->HasSubject(pPlayer))
				return TRUE;
*/
#endif
		}
	}	

	return FALSE;
}

BOOL CStack::HasOtherPlayerTargets(const CPlayer* pExceptThisPlayer) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		const CAction* pAction = GetAt(i).GetPointer();

		if (pAction->IsTargeting())
		{
#if 1		// 8/21/2002: IsTargeting() implies CTargetActionCommon
			const CTargetActionCommon* pTargetParent = dynamic_cast<const CTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup().HasOtherPlayerSubjects(pExceptThisPlayer))
				return TRUE;
#else
/*
			CTargetSpellAction* pAction1 = (CTargetSpellAction*)pAction;
			
			if (pAction1->GetTarget()->HasOtherTargets(pExceptThisPlayer))
				return TRUE;
*/
#endif
		}
		else
		if (pAction->IsDoubleTargeting())
		{
#if 1		// 8/21/2002: IsTargeting() implies CTargetActionCommon
			const CDoubleTargetActionCommon* pTargetParent = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			ATLASSERT(pTargetParent);
			if (pTargetParent->GetTargetGroup1().HasOtherPlayerSubjects(pExceptThisPlayer) || pTargetParent->GetTargetGroup2().HasOtherPlayerSubjects(pExceptThisPlayer))
				return TRUE;
#else
/*
			CTargetSpellAction* pAction1 = (CTargetSpellAction*)pAction;
			
			if (pAction1->GetTarget()->HasOtherTargets(pExceptThisPlayer))
				return TRUE;
*/
#endif
		}
	}	

	return FALSE;
}

BOOL CStack::HasSourceColor(SourceColor sourceColor) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CStackAbilityAction* pAction = (CStackAbilityAction*)GetAt(i).GetPointer();
		if ((pAction->GetStackAbility()->GetSourceColor() & sourceColor).Any())
			return TRUE;
	}	

	return FALSE;
}

CastSpellEventSource* CStack::GetCastSpellEventSource() const
{
	return m_cpCastSpellEventSource.GetPointer();
}

void CStack::ResolveTopAction()
{
	ATLASSERT(m_ActionStatus.GetSize() == __super::GetSize());

	m_Projection.Clear();

	m_nPassCount = 0;
	
	ATLASSERT(!m_cpCurrentAction.GetPointer());

	m_cpCurrentAction = counted_ptr<CStackAbilityAction>((CStackAbilityAction*)GetAt(GetSize() - 1).GetPointer());
	RemoveAt(GetSize() - 1);
	CStackAbilityAction* pAction = m_cpCurrentAction.GetPointer();

	StackActionStatus status = m_ActionStatus.GetAt(m_ActionStatus.GetSize() - 1);
	m_ActionStatus.RemoveAt(m_ActionStatus.GetSize() - 1);

	if (!pAction)
	{
		ATLASSERT(false);
		return;
	}

	bool bDenied = (status & StackActionStatus::Denied).Any();

	// Moved this to after the resolution, see rule 408.1c
	//m_pGame->SetPriorityPlayer(m_pGame->GetActivePlayer());

	if (!m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("Resolution of the spell/ability \"%s\" has started"), pAction->GetActionName());
		m_pGame->Message(
			strMessage,
			pAction->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::Normal
			);
	}

	m_bLastResolutionResult = pAction->GetStackAbility()->Resolve(pAction, bDenied);

	if (!ResolutionCompletionPending())
		OnResolutionCompleted();
}

BOOL CStack::ResolutionCompletionPending() const 
{ 
	return m_pGame->GetSelection().Pending() && m_cpCurrentAction != NULL; 
}

void CStack::OnResolutionCompleted()
{
	ATLASSERT(m_cpCurrentAction.GetPointer());

	if (!m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("Resolution of the spell/ability \"%s\" is completed."), m_cpCurrentAction->GetActionName());
		m_pGame->Message(
			strMessage,
			m_cpCurrentAction->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::Low
			);
	}

	m_cpCurrentAction->GetStackAbility()->OnResolutionCompleted(m_cpCurrentAction.GetPointer(), m_bLastResolutionResult);
	m_cpCurrentAction = NULL;

	m_pGame->SetPriorityPlayer(m_pGame->GetActivePlayer());
}

BOOL CStack::CreaturesLifeMayChange(const CCreatureCard* pCreature, 
							BOOL bCheckIncrease, BOOL bCheckDecrease)
{
	if (!m_Projection.Ready())
		m_Projection.Project();

	return m_Projection.CreaturesLifeMayChange(pCreature, bCheckIncrease, bCheckDecrease);
}

BOOL CStack::PlayersLifeMayChange(const CPlayer* pPlayer,
						  BOOL bCheckIncrease, BOOL bCheckDecrease)
{
	if (!m_Projection.Ready())
		m_Projection.Project();

	return m_Projection.PlayersLifeMayChange(pPlayer, bCheckIncrease, bCheckDecrease);
}

BOOL CStack::CardMayLeaveInplay(const CCard* pCard)
{
	if (!m_Projection.Ready())
		m_Projection.Project();

	return m_Projection.CardMayLeaveInplay(pCard);
}

BOOL CStack::CardMayBeDiscarded(const CCard* pCard)
{
	if (!m_Projection.Ready())
		m_Projection.Project();

	return m_Projection.CardMayBeDiscarded(pCard);
}

void CStack::GetState(StringArray& lines) const
{
	int nStackSize = GetStackSize();
	if (nStackSize)
	{
		CString strTemp(_T("[Spell Stack ] "));
		for (int i = 0; i < nStackSize; ++i)
			strTemp.AppendFormat(_T("[%s] "), GetStackAction(i)->GetActionName());
		strTemp.Append(_T("[Top]"));

		lines.push_back(strTemp);
		lines.push_back(_T(""));
	}
}
BOOL CStack::CanCounterSpell(CPlayer* pbyPlayer, CCard* pCard, BOOL m_bToOwnersZone, ZoneId m_ToZone, CardPlacement m_bPlacement)
{
	if (pCard->GetZoneId() != ZoneId::Stack) return FALSE;
	BOOL bFound = FALSE;

	// To support Gaea's Herald
		BOOL bCantCounter = FALSE;
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
			if ((*it)->IsCardIncluded(pCard))
			//if (CCardFilter::GetPredefined(CCardFilter::Pre defined::Enum(*it))->IsCardIncluded(pCard))
			{
				bCantCounter = TRUE;
				break;
			}

		if (bCantCounter || pCard->GetCardKeyword()->CantBeCountered())
			return FALSE;

		return TRUE;
}
BOOL CStack::CounterSpell(CPlayer* pbyPlayer, CCard* pCard, BOOL m_bToOwnersZone, ZoneId m_ToZone, CardPlacement m_bPlacement)
{

		// Remove from stack

		for (int l = 0; l < GetStackSize(); ++l)
		{
			const CStackAbilityAction* pStackAction = GetStackAction(l).GetPointer();
			if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
			{
				RemoveActionAt(l);
				if (pCard->GetCardType().IsCreature() && pCard->GetController() != pbyPlayer)
					pCard->GetController()->SetCreatureCounteredByOpponent(TRUE);   // To Support Summoning Trap
				break;
			}
		}
		
		// Move to graveyard

		/*if (m_ToAlternateZone.Any() && m_AlternateZoneCardFilter.IsCardIncluded(pCard))
		{
			if (m_bToAlternateOwnersZone)
				const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(m_ToAlternateZone)), pbyPlayer, MoveType::Others);
			else
				const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pbyPlayer->GetZoneById(m_ToAlternateZone)), pbyPlayer, MoveType::Others);			
		}*/
		/*if (m_bPlacement == CardPlacement::TopOrBottom)
		{
		std::vector<SelectionEntry> entries;

		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("select top"));

		entries.push_back(selectionEntry);

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("select bottom"));

		entries.push_back(selectionEntry);

		m_PlacementSelection.AddSelectionRequest(entries, 1, 1, NULL, pbyPlayer, (DWORD)const_cast<CCard*>(pCard));
		}*/
		//else


		if (pbyPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CounterCastReplacement))
		{
			const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(ZoneId::Exile)), pbyPlayer, MoveType::Others, m_bPlacement);
			
			CSpecialEffectModifier pModifier = CSpecialEffectModifier(pCard, COUNTERSPELL_REPLACE_TRIGGER_ID);
			pModifier.ApplyTo((pCard));

			return TRUE;
		}

		if (m_bToOwnersZone)
			const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(m_ToZone)), pbyPlayer, MoveType::Others, m_bPlacement);
		else
			const_cast<CCard*>(pCard)->Move(const_cast<CZone*>(pbyPlayer->GetZoneById(m_ToZone)), pbyPlayer, MoveType::Others, m_bPlacement);

		
		
		
		return TRUE;
}
//____________________________________________________________________________
//
