#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CTriggeredDrawCardAbility::CTriggeredDrawCardAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTriggeredDrawCardAbility::OnSelectionDone))
	, m_nDrawCount(1)
	, m_nDiscardCount(0)
	, m_bFromDrawsOnly(FALSE)
	, m_DiscardToZone(ZoneId::Null)
	, m_bDiscardToOwner(TRUE)
	, m_DiscardToPlacement(CardPlacement::NotApplicable)
	, m_DiscardMoveType(MoveType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
	//SetOptionalIsTrick(TRUE);
}

void CTriggeredDrawCardAbility::SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
								ZoneId discardToZone, BOOL bDiscardToOwner, CardPlacement discardToPlacement)
{
	m_nDiscardCount = nDiscardCount;
	m_bFromDrawsOnly = bFromDrawsOnly;
	m_DiscardToZone = discardToZone;
	m_bDiscardToOwner = bDiscardToOwner;
	m_DiscardToPlacement = discardToPlacement;
	m_DiscardMoveType = discardMoveType;
}

BOOL CTriggeredDrawCardAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	CCountedCardContainer discardedCards;
	if (!CDrawCardCommon::ResolveDrawCards(
				pTriggeredPlayer, pTriggeredPlayer,
				pAction1->GetTriggerContext().nValue1,
				m_DiscardMoveType, m_nDiscardCount, m_bFromDrawsOnly,
				m_DiscardToZone, m_bDiscardToOwner,	m_DiscardToPlacement,
				FALSE, m_DiscardToPlacement == CardPlacement::TopOrBottom ? &discardedCards : NULL))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	m_DiscardedCards = discardedCards;

	if (m_DiscardToPlacement == CardPlacement::TopOrBottom)
	{
		vector<SelectionEntry> entries;

		SelectionEntry entry1;
		entry1.dwContext = CardPlacement::Top;
		entry1.strText.Format(_T("puts %s cards to top of %s"), 
			m_DiscardMoveType == MoveType::Discard ? _T("discarded") : _T("selected"),
			m_DiscardToZone.ToString());
		entries.push_back(entry1);

		SelectionEntry entry2;
		entry2.dwContext = CardPlacement::Bottom;
		entry2.strText.Format(_T("puts %s cards to bottom of %s"), 
			m_DiscardMoveType == MoveType::Discard ? _T("discarded") : _T("selected"),
			m_DiscardToZone.ToString());
		entries.push_back(entry2);
		
		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, 
			GetCard(), pTriggeredPlayer);
	}

	return TRUE;
}

void CTriggeredDrawCardAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CardPlacement selectedPlacement;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			selectedPlacement = static_cast<CardPlacement::Enum>(it->dwContext);
			break;
		}

	if (selectedPlacement == CardPlacement::Top)
	{
		for (int i = 0; i < m_DiscardedCards.GetSize(); ++i)
		{
			CCard* pCard = m_DiscardedCards.GetAt(i);
			CZone* pToZone = pCard->GetOwner()->GetZoneById(m_DiscardToZone);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pToZone->GetZoneName());

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pSelectionPlayer, m_DiscardMoveType, CardPlacement::Top);
		}
	}
	else
	if (selectedPlacement == CardPlacement::Bottom)
	{
		for (int i = m_DiscardedCards.GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = m_DiscardedCards.GetAt(i);
			CZone* pToZone = pCard->GetOwner()->GetZoneById(m_DiscardToZone);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;

				if (pToZone->IsVisibleToOthers())
					strMessage.Format(_T("%s %s %s to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pCard->GetCardName(), pToZone->GetZoneName());
				else
					strMessage.Format(_T("%s %s a card to %s"), 
						pSelectionPlayer->GetPlayerName(), 
						m_DiscardMoveType == MoveType::Discard ? _T("discards") : _T("puts"),
						pToZone->GetZoneName());

				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, pSelectionPlayer, m_DiscardMoveType, CardPlacement::Bottom);
		}
	}
}

//____________________________________________________________________________
//
CTriggeredRevealLibraryAbility::CTriggeredRevealLibraryAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nRevealCount(1)
	, m_bRevealCardsToOthers(FALSE)
	, m_bReorder(TRUE)
	, m_ReorderToZone(ZoneId::Library)
	, m_ReorderToZonePlacement(CardPlacement::Top)
{
}

BOOL CTriggeredRevealLibraryAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	CPlayer* pCaster = pAction1->GetController();

	CDrawCardCommon::ResolveRevealZone(pTriggeredPlayer, pCaster, pAction1->GetTriggerContext().nValue1,
		m_bRevealCardsToOthers, m_bReorder, m_ReorderToZone, m_ReorderToZonePlacement);

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredRevealHandAbility::CTriggeredRevealHandAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}

BOOL CTriggeredRevealHandAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	CPlayer* pCaster = pAction1->GetController();

	if (pAction1->GetTriggerContext().m_pRevealTo)
	{
		CDiscardCardCommon::ResolveRevealHand(
			pTriggeredPlayer, 
			pAction1->GetTriggerContext().m_pRevealTo,
			pCaster);

		return TRUE;
	}

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		if (m_pGame->GetPlayer(i) != pTriggeredPlayer)
			CDiscardCardCommon::ResolveRevealHand(
				pTriggeredPlayer, 
				m_pGame->GetPlayer(i),
				pCaster);

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredSearchLibraryAbility::CTriggeredSearchLibraryAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nMaxSearchCount(1)
	, m_nMinSearchCount(1)
	, m_bRevealCardsToOthers(TRUE)
	, m_ToZoneId(ZoneId::Hand)
	, m_bTapped(FALSE)
	, m_bToOwners(FALSE)
	, m_CardPlacement(CardPlacement::Top)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CTriggeredSearchLibraryAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	if (!CSearchCardCommon::ResolveSearchCards(pTriggeredPlayer,
													  MinimumValue(pAction1->GetTriggerContext().nValue2),
													  MaximumValue(pAction1->GetTriggerContext().nValue1),
													  pTriggeredPlayer,
											 		  ZoneId::Library,
													  m_CardFilterHelper.Get(),
													  m_ToZoneId,
													  m_bToOwners,
													  m_CardPlacement,
													  m_bTapped,
													  m_bRevealCardsToOthers))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredDiscardCardAbility::CTriggeredDiscardCardAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nDiscardCount(1)
	, m_ToZone(ZoneId::Graveyard)
	, m_bToOwners(TRUE)
	, m_CardPlacement(CardPlacement::Top)
	, m_bPickerIsTriggeredPlayer(TRUE)
	, m_DiscardMoveType(MoveType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));
}

void CTriggeredDiscardCardAbility::GetSelections(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const
{
	// Balduvian Horde, Hidden Horror
	if (triggerContext.m_nDiscardCount == SpecialNumber::All)
	{
		if (!pPlayer->GetZoneById(ZoneId::Hand)->GetSize())
			return;
	}
	else
	{
		if (!m_CardFilterHelper.CountIncluded(*(pPlayer->GetZoneById(ZoneId::Hand))))
			return;
	}
		
	__super::GetSelections(actions, pPlayer, triggerContext, info, bSetNames);
}

BOOL CTriggeredDiscardCardAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (triggerContext.m_nDiscardCount == SpecialNumber::All)
	{
		CDiscardCardCommon::ResolveDiscardAll(
			pTriggeredPlayer, pAction1->GetController(), m_DiscardMoveType,
			m_ToZone, m_bToOwners, m_CardPlacement);
		return TRUE;
	}

	CPlayer* pPicker;
	if (triggerContext.m_bPickerIsTriggeredPlayer)
		pPicker = pTriggeredPlayer;
	else
		pPicker = triggerContext.m_pPicker;

	if (!CDiscardCardCommon::ResolveDiscardCards(pTriggeredPlayer,
												 pPicker,
												 pAction1->GetController(),
												 triggerContext.m_nDiscardCount,
												 m_DiscardMoveType,
												 ZoneId::Hand,
												 FALSE,
												 m_CardFilterHelper.Get(),
												 m_ToZone, m_bToOwners, m_CardPlacement))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredDiscardCardAbility2::CTriggeredDiscardCardAbility2(CCard* pCard)
	: CTriggeredDiscardCardAbility(pCard)
{
}

BOOL CTriggeredDiscardCardAbility2::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	int nDrawCount = 0;

	if (triggerContext.m_nDiscardCount == SpecialNumber::All)
		nDrawCount = pTriggeredPlayer->GetZoneById(ZoneId::Hand)->GetSize();
	else
		nDrawCount = MIN(triggerContext.m_nDiscardCount, pTriggeredPlayer->GetZoneById(ZoneId::Hand)->GetSize());

	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	if (!CDrawCardCommon::ResolveDrawCards(
				pTriggeredPlayer,
				pTriggeredPlayer,
				nDrawCount))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredModifyLifeAbility::CTriggeredModifyLifeAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_LifeModifier(Life(0), pCard)
	, m_pToCreature(NULL)
{
	if (m_LifeModifier.GetLifeDelta() > Life(0))
		AddAbilityTag(AbilityTag::LifeGain);
	else if (m_LifeModifier.GetLifeDelta() < Life(0))
		AddAbilityTag(AbilityTag::LifeLost);
}

BOOL CTriggeredModifyLifeAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	if (!triggerContext.m_pCreature)
		triggerContext.m_LifeModifier.ApplyTo(pTriggeredPlayer);
	else
		triggerContext.m_LifeModifier.ApplyTo(triggerContext.m_pCreature);

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredModifyCreatureAbility::CTriggeredModifyCreatureAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_LifeModifier(Life(0), pCard)
	, m_CreatureOption(ModifyCreatureOption::ModifySingleCreature)
	, m_pToCreature(NULL)
{
	m_CardFilterHelper.SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	if (pCard->GetCardType().IsCreature())
		m_pToCreature = (CCreatureCard*)pCard;

	AddAbilityTag(AbilityTag::CreatureChange);
}

BOOL CTriggeredModifyCreatureAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (m_CreatureOption == ModifyCreatureOption::ModifySingleCreature)
	{
		if (triggerContext.m_pCreature)
		{
			triggerContext.m_LifeModifier.ApplyTo(triggerContext.m_pCreature);
			triggerContext.m_PowerModifier.ApplyTo(triggerContext.m_pCreature);
			triggerContext.m_CardKeywordModifier.ApplyTo(triggerContext.m_pCreature);
			triggerContext.m_CreatureKeywordModifier.ApplyTo(triggerContext.m_pCreature);
		}
		else
		{
			ATLASSERT(false);
			return FALSE;
		}

		return TRUE;
	}

	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(j);

		if (m_CreatureOption == ModifyCreatureOption::ModifyTriggeredPlayersCreatures)
			if (pPlayer != pTriggeredPlayer)
				continue;

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		CCountedCardContainer pCreatures;	

		if ((m_CardFilterHelper.Get()->GetIncluded(*pInplay, pCreatures)))

		for (int i = 0; i < pCreatures.GetSize(); ++i)
		{
			CCard* pCard = pCreatures.GetAt(i);
		
			if (!pCard->GetCardType().IsCreature())
				continue;

//			if (!m_CardFilterHelper.IsCardIncluded(pCard))
	//			continue;

			triggerContext.m_LifeModifier.ApplyTo((CCreatureCard*)pCard);
			triggerContext.m_PowerModifier.ApplyTo((CCreatureCard*)pCard);
			triggerContext.m_CardKeywordModifier.ApplyTo((CCreatureCard*)pCard);
			triggerContext.m_CreatureKeywordModifier.ApplyTo((CCreatureCard*)pCard);
		}
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredModifyCardAbility::CTriggeredModifyCardAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_CardOption(ModifyCardOption::ModifySingleCard)
	, m_pToCard(pCard)
{
	m_CardFilterHelper.SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
}

BOOL CTriggeredModifyCardAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (m_CardOption == ModifyCardOption::ModifySingleCard)
	{
		if (triggerContext.m_pCard)
		{
			triggerContext.m_CardModifiers.ApplyTo(triggerContext.m_pCard);
			if (triggerContext.m_pCard->GetCardType().IsCreature())
				triggerContext.m_CreatureModifiers.ApplyTo((CCreatureCard*)triggerContext.m_pCard);
		}
		else
		{
			ATLASSERT(false);
			return FALSE;
		}

		return TRUE;
	}

	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(j);

		if (m_CardOption == ModifyCardOption::ModifyTriggeredPlayersCards)
			if (pPlayer != pTriggeredPlayer)
				continue;

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);

		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (!m_CardFilterHelper.IsCardIncluded(pCard))
				continue;

			triggerContext.m_CardModifiers.ApplyTo(pCard);
			if (pCard->GetCardType().IsCreature())
				triggerContext.m_CreatureModifiers.ApplyTo((CCreatureCard*)pCard);
		}
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredMoveCardAbility::CTriggeredMoveCardAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_MoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others)
	, m_MoveCardOption(MoveCardOption::MoveSingleCard)
	, m_pToCard(pCard)
	, m_ScheduledNode(NodeId::Null)
{
}

BOOL CTriggeredMoveCardAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	m_MoveCardModifier.SetToPlayer(pTriggeredPlayer);

	if (m_MoveCardOption == MoveCardOption::MoveSingleCard)
	{
		if (triggerContext.m_pCard)
		{
			if (m_ScheduledNode == NodeId::Null)
				triggerContext.m_MoveCardModifier.ApplyTo(triggerContext.m_pCard);
			else
				m_pGame->GetScheduler()->ScheduleTask(
					new CCardModifierTask(
							triggerContext.m_pCard, std::auto_ptr<CCardModifier>(triggerContext.m_MoveCardModifier.CloneCardModifier()),
							triggerContext.m_MoveCardModifier.GetFromZone() == ZoneId::Battlefield),
							m_ScheduledNode);
		}
		else
		{
			ATLASSERT(false);

			m_MoveCardModifier.SetToPlayer(NULL); // has to reset this to avoid AI error caused by unmatched strategy

			return FALSE;
		}

		m_MoveCardModifier.SetToPlayer(NULL); // has to reset this to avoid AI error caused by unmatched strategy

		return TRUE;
	}

	CZone* pZone = pTriggeredPlayer->GetZoneById(m_MoveCardModifier.GetFromZone());

	// Add all applicable cards to a local container first to prevent
	// invalid index problem if more than one cards are removed from the zone
	// as a result of another card's move

	CCountedCardContainer cards;
	for (int i = pZone->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pZone->GetAt(i);
		if (!m_CardFilterHelper.IsCardIncluded(pCard))
			continue;

		cards.AddCard(pCard, CardPlacement::Top);
	}

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		CCard* pCard = cards.GetAt(i);
		if (m_ScheduledNode == NodeId::Null)
			triggerContext.m_MoveCardModifier.ApplyTo(pCard);
		else
			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(
						pCard, std::auto_ptr<CCardModifier>(triggerContext.m_MoveCardModifier.CloneCardModifier()),
						triggerContext.m_MoveCardModifier.GetFromZone() == ZoneId::Battlefield),
						m_ScheduledNode);
	}

	m_MoveCardModifier.SetToPlayer(NULL); // has to reset this to avoid AI error caused by unmatched strategy

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredTapCardAbility::CTriggeredTapCardAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_TapCardOption(TapCardOption::TapSingleCard)
	, m_pToCard(pCard)
	, m_pIsTapped(pCard->GetOrientation()->IsTapped())
{
	AddAbilityTag(AbilityTag::OrientationChange);
}

BOOL CTriggeredTapCardAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	CCard* pToCard = pAction1->GetTriggerContext().m_pCard;
	BOOL wasTapped = pAction1->GetTriggerContext().m_pTapped;

	//single card tap, untap and tap/untap
	if (m_TapCardOption == TapCardOption::TapSingleCard	  ||
		m_TapCardOption == TapCardOption::UntapSingleCard ||
		m_TapCardOption == TapCardOption::TapUntapSingleCard)
	{
		if (pToCard)
		{
			if (m_TapCardOption == TapCardOption::TapSingleCard)
			{
				if (pToCard->GetOrientation()->IsUntapped())
					pToCard->GetOrientation()->Tap();
			}
			else if (m_TapCardOption == TapCardOption::UntapSingleCard)
			{
				if (pToCard->GetOrientation()->IsTapped()) 
					pToCard->GetOrientation()->Untap();
			}
			else if (m_TapCardOption == TapCardOption::TapUntapSingleCard)
			{
				if (pToCard->GetOrientation()->IsUntapped())
					pToCard->GetOrientation()->Tap();
				else if (pToCard->GetOrientation()->IsTapped())
					pToCard->GetOrientation()->Untap();
			}
			
		}
		else
		{
			ATLASSERT(false);
			return FALSE;
		}

		return TRUE;
	}

	// multiple card tap and untap
	CZone* pZone = pTriggeredPlayer->GetZoneById(ZoneId::Battlefield);

	for (int i = pZone->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pZone->GetAt(i);
		if (!m_CardFilterHelper.IsCardIncluded(pCard))
			continue;

		if (m_TapCardOption == TapCardOption::TapMultipleCards)
		{
			if (pCard->GetOrientation()->IsUntapped())
				pCard->GetOrientation()->Tap();
		}
		else	//TapCardOption::UntapMultipleCards
		{
			if (pCard->GetOrientation()->IsTapped())
				pCard->GetOrientation()->Untap();
		}
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredPlayerEffectAbility::CTriggeredPlayerEffectAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_PlayerEffect(PlayerEffectType::Null)
	, m_bThisTurnOnly(TRUE)
	, m_nParam(0)
	, m_bRemoveEffectWhenLeaveInplay(FALSE)
	, m_WhenInplay(pCard)
{
	m_WhenInplay.SetLeaveEventCallback(CWhenSelfInplay::EventCallback(this, &CTriggeredPlayerEffectAbility::OnLeaveInplay));
}

void CTriggeredPlayerEffectAbility::SetPlayerEffect(PlayerEffectType playerEffect, BOOL bThisTurnOnly, int nParam)
{
	m_PlayerEffect = playerEffect;
	m_bThisTurnOnly = bThisTurnOnly;
	m_nParam = nParam;
}

BOOL CTriggeredPlayerEffectAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	pTriggeredPlayer->GetPlayerEffect().AddPlayerEffect(
		m_PlayerEffect, m_bThisTurnOnly, pAction1->GetTriggerContext().nValue1);

	if (m_bRemoveEffectWhenLeaveInplay)
	{
		m_ChangedList.Add(std::make_pair(pTriggeredPlayer, pAction1->GetTriggerContext().nValue1));
	}

	return TRUE;
}

void CTriggeredPlayerEffectAbility::OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_ChangedList.GetSize())
	{
		CChangedList changedList;

		changedList = m_ChangedList;

		m_ChangedList.RemoveAll();

		for (int i = 0; i < changedList.GetSize(); ++i)
		{
			CPlayer* pTriggeredPlayer = changedList.GetAt(i).first;
			int nParam = changedList.GetAt(i).second;

			pTriggeredPlayer->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, m_bThisTurnOnly, nParam);
		}
	}
}

//____________________________________________________________________________
//
// Sengir Autocrat: When Sengir Autocrat comes into play, put three 0/1 Serf creatures tokens into play. When Sengir Autocrat leaves play, remove all Serf tokens from play.
//
CTriggeredCreateTokenAbility::CTriggeredCreateTokenAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nTokenCount(0)
	, m_bCreate(TRUE)
	, m_CreationNodeId(NodeId::Null)
	, m_uID(0)
{
	AddAbilityTag(AbilityTag::TokenCreation);
}

void CTriggeredCreateTokenAbility::SetCreateTokenOption(BOOL bCreate, LPCTSTR strTokenName, 
														UINT uID,
												  int nTokenCount) // Only supports SpecialNumber::All for destructions
{
	m_bCreate = bCreate;
	m_strTokenName = strTokenName;
	m_uID = uID;
	m_nTokenCount = nTokenCount;
}

void CTriggeredCreateTokenAbility::FlagTokens(BOOL bFlag, BOOL bKeepFlagUntilEndOfTurn)
{
	m_CardFlagModifier.GetModifier().RemoveAll();

	if (bFlag)
	{
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(bKeepFlagUntilEndOfTurn);
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier.GetModifier().SetAdditionData(GetInstanceID());
	}
}

BOOL CTriggeredCreateTokenAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	CPlayer* pController = pAction1->GetController();

	int nTokenCount = pAction1->GetTriggerContext().nValue1;
	int nMultiplier = 0;
	// for Doubling Season, etc.
	if (pTriggeredPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	// for Primal Vigor
	if (pTriggeredPlayer->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokensAlways, nMultiplier, FALSE))
			nTokenCount <<= nMultiplier;
	if (m_bCreate)
	{
		if (m_CreationNodeId == NodeId::Null)
			for (int i = 0; i < nTokenCount; ++i)
			{
				counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));

				// Flag card
				if (!m_CardFlagModifier.GetModifier().IsNull())
					m_CardFlagModifier.ApplyTo(cpToken.GetPointer());

				if ((CTokenCreature*)cpToken.GetPointer()) { ((CTokenCreature*)cpToken.GetPointer())->SetUID(m_uID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName); }
				pTriggeredPlayer->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
				cpToken->Move(pTriggeredPlayer->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
			}
		else
		{
			m_pGame->GetScheduler()->ScheduleTask(
				new CCreateTokenTask(pTriggeredPlayer, m_strTokenName, m_uID, pAction1->GetTriggerContext().nValue1, pController),
				m_CreationNodeId);
		}
	}
	else
	{
		CCountedCardContainer tokens;

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CZone* pInplay = m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
			for (int j = 0; j < pInplay->GetSize(); ++j)
			{
				CCard* pCard = pInplay->GetAt(j);
				if (!pCard->GetPrintedCardName().CompareNoCase(m_strTokenName))
					tokens.AddCard(pCard, CardPlacement::Top);
			}
		}

		for (int i = 0; i < tokens.GetSize(); ++i)
			tokens.GetAt(i)->Destroy(pController, MoveType::Others);
	}

	return TRUE;
}

//____________________________________________________________________________
//
// Primal Clay: Primal Clay comes into play as your choice of a 3/3 artifact creature; a 2/2 artifact creature with flying; or a 1/6 Wall artifact creature.
//
CTriggeredMorphCreatureAbility::CTriggeredMorphCreatureAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}

void CTriggeredMorphCreatureAbility::AddMorphToType(
	LPCTSTR strSelectionText, Power nPower, Life nToughness, const CreatureType& creatureTypeToAdd, 
	CreatureKeyword creatureKeywordToAdd)
{
	MorphEntry entry;
	entry.m_strSelectionText = strSelectionText;
	entry.m_nPower = nPower;
	entry.m_nToughness = nToughness;
	entry.m_CreatureTypeToAdd = creatureTypeToAdd;
	entry.m_CreatureKeywordToAdd = creatureKeywordToAdd;

	m_MorphEntries.push_back(entry);

	// TODO: remove added keywords when the card leaves in-play
	m_AllCreatureKeywordToAdd |= creatureKeywordToAdd;
}

void CTriggeredMorphCreatureAbility::GetSelections(CActionContainer& actions,
																		CPlayer* pPlayer,
																		const TriggerContextType& triggerContext,
																		const TriggerInfo& info,
																		BOOL bSetNames) const
{
	for (unsigned i = 0; i < m_MorphEntries.size(); ++i)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = i;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T("selects %s for the %s of %s"),
				m_MorphEntries[i].m_strSelectionText, GetAbilityName(), GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
}

BOOL CTriggeredMorphCreatureAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	const MorphEntry& entry = m_MorphEntries[pAction1->GetTriggerContext().nValue1];

	CCreatureCard* pCreatureCard = (CCreatureCard*)CTriggeredAbility::m_pCard;
	pCreatureCard->SetPermanentPower(entry.m_nPower, TRUE);
	pCreatureCard->SetPower(entry.m_nPower, TRUE);
	pCreatureCard->SetPermanentLife(entry.m_nToughness, TRUE);
	pCreatureCard->SetLife(NULL, entry.m_nToughness);
	pCreatureCard->GetCreatureType().RemoveAll();
	pCreatureCard->GetCreatureType().AddType(entry.m_CreatureTypeToAdd);

	if (m_AllCreatureKeywordToAdd.Any())
	{
		CCreatureKeywordModifier temp;
		temp.GetModifier().SetToRemove(m_AllCreatureKeywordToAdd);
		temp.GetModifier().SetOneTurnOnly(FALSE);
		temp.ApplyTo(pCreatureCard);
	}

	if (entry.m_CreatureKeywordToAdd.Any())
	{
		CCreatureKeywordModifier temp;
		temp.GetModifier().SetToAdd(entry.m_CreatureKeywordToAdd);
		temp.GetModifier().SetOneTurnOnly(FALSE);
		temp.ApplyTo(pCreatureCard);
	}

	return TRUE;
}

//____________________________________________________________________________
//
// Fertile Ground: Whenever enchanted land is tapped for mana, its controller adds one mana of any color to his or her mana pool.
//
CTriggeredProdManaAbility::CTriggeredProdManaAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nManaCount(1)
{
	AddAbilityTag(AbilityTag::Mana);
}

BOOL CTriggeredProdManaAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	pTriggeredPlayer->GetManaPool().AddMana((CManaPool::Color::Enum)pAction1->GetTriggerContext().nValue1, pAction1->GetTriggerContext().nValue2);

	CManaPool pPool;
	pPool.AddMana((CManaPool::Color::Enum)pAction1->GetTriggerContext().nValue1, pAction1->GetTriggerContext().nValue2);

	pTriggeredPlayer->GetManaAddEventSource()->FireEvent(pTriggeredPlayer, pPool);

	return TRUE;
}

void CTriggeredProdManaAbility::GetSelections(CActionContainer& actions,
												CPlayer* pPlayer,
												const TriggerContextType& triggerContext,
												const TriggerInfo& info,
												BOOL bSetNames) const
{
	static const DWORD manaColors[] = {
		CManaPool::Color::Black,
		CManaPool::Color::Blue,
		CManaPool::Color::Green,
		CManaPool::Color::Red,
		CManaPool::Color::White };

	for (int i = 0; i < ARRAY_SIZE(manaColors); ++i)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = manaColors[i];
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)manaColors[i]);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
}

//____________________________________________________________________________
//
CTriggeredProdManaAbilityX::CTriggeredProdManaAbilityX(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_ManaSelection(m_pGame, CSelectionSupport::SelectionCallback(this, &CTriggeredProdManaAbilityX::OnManaSelected))
{
	AddAbilityTag(AbilityTag::Mana);
}

BOOL CTriggeredProdManaAbilityX::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	std::vector<SelectionEntry> entries;
	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	static const DWORD manaColors[] = {
		CManaPool::Color::Black,
		CManaPool::Color::Blue,
		CManaPool::Color::Green,
		CManaPool::Color::Red,
		CManaPool::Color::White };

	for (int i = 0; i < ARRAY_SIZE(manaColors); ++i)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = manaColors[i];
		selectionEntry.strText.Format(_T("select "));
		selectionEntry.strText += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)manaColors[i]);

		entries.push_back(selectionEntry);
	}
	
	for (int i = 0 ; i < pAction1->GetTriggerContext().nValue2; ++i)
		m_ManaSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	
	return TRUE;
}

void CTriggeredProdManaAbilityX::OnManaSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			pSelectionPlayer->GetManaPool().AddMana((CManaPool::Color::Enum)it->dwContext,1);

			CManaPool pPool;
			pPool.AddMana((CManaPool::Color::Enum)it->dwContext, 1);

			pSelectionPlayer->GetManaAddEventSource()->FireEvent(pSelectionPlayer, pPool);
		}
}

//____________________________________________________________________________
//
CTriggeredLoseGameAbility::CTriggeredLoseGameAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}

BOOL CTriggeredLoseGameAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	pTriggeredPlayer->SetLostByOtherReasons();

	return TRUE;
}

//____________________________________________________________________________
//
// Pithing Needle: As <this> comes into play, name a card. Activated abilities of sources with the chosen name can't be played unless they're mana abilities.
//
CTriggeredPlayerEffectAbility2::CTriggeredPlayerEffectAbility2(CCard* pCard)
	: CTriggeredPlayerEffectAbility(pCard)
	, m_pRestrictionFilter(NULL)
	, m_pPreferredFilter(NULL)
{
}

void CTriggeredPlayerEffectAbility2::SetCardFilters(const CCardFilter* pRestrictionFilter, const CCardFilter* pPreferredFilter)
{
	m_pRestrictionFilter = pRestrictionFilter;
	m_pPreferredFilter = pPreferredFilter;
}

void CTriggeredPlayerEffectAbility2::GetSelections(CActionContainer& actions,
												   CPlayer* pPlayer,
												   const TriggerContextType& triggerContext,
												   const TriggerInfo& info,
												   BOOL bSetNames) const
{

	//-------------------------Old Variant (causes crashes during AI thinking, needs fast PC to get all selections, but you can name any card, not only owned by players)-------------------------
	/*if (!m_AvailableSelections.size())
	{
		StringSet allCardNames;

		DWORD dwPos = CCardStore::GetInstance()->EnumCardStartPos();
		CCardEntry* pCardEntry;

		while (CCardStore::GetInstance()->EnumCardNextPos(dwPos, &pCardEntry))
		{
			if (allCardNames.count(pCardEntry->GetCardName()))
				continue;

			allCardNames.insert(pCardEntry->GetCardName());

			counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(m_pGame, pCardEntry->GetCardName()));
			if (!cpCard.GetPointer())
			{
				ATLASSERT(false);
				continue;
			}

			if (!m_pRestrictionFilter || m_pRestrictionFilter->IsCardIncluded(cpCard.GetPointer()))
			{
				CString strPrintedCardName(cpCard->GetPrintedCardName());

				CString strFilterName;
				CString strFilterNamePlural;

				strFilterName.Format(_T("a %s card"), strPrintedCardName);
				strFilterNamePlural.Format(_T("%s cards"), strPrintedCardName);

				CCardFilter::AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(strFilterName, strFilterNamePlural, new CardNameComparer(strPrintedCardName))));

				m_AvailableSelections.push_back(std::make_pair(strPrintedCardName,
					m_pPreferredFilter ? m_pPreferredFilter->IsCardIncluded(cpCard.GetPointer()) :
						(m_pRestrictionFilter ? m_pRestrictionFilter->IsCardIncluded(cpCard.GetPointer()) : true)));
			}
		}
	}*/
	//-------------------------Old Variant (causes crashes during AI thinking, needs fast PC to get all selections, but you can name any card, not only owned by players)-------------------------
	
	if (!m_AvailableSelections.size())
	{		

		int nPlayerCount = m_pGame->GetPlayerCount();

		for (int i = 0; i < nPlayerCount; ++i) 
		{

			CPlayer* pPlayer = m_pGame->GetPlayer(i);

			int nZoneCount = pPlayer->GetZoneCount();

			for (int j = 0; j < nZoneCount; ++j)
			{
				CZone* pZone = pPlayer->GetZone(j);

				if (pZone->GetZoneId() == ZoneId::_Effects)
					continue;

				int nCardCount = pZone->GetSize();

				for (int k = 0; k < nCardCount; ++k)
				{
					CCard* pCard = pZone->GetAt(k);

					if (pCard->GetCardType().IsToken())
						continue;

					if (!m_pRestrictionFilter || m_pRestrictionFilter->IsCardIncluded(pCard))
					{
						CString strPrintedCardName(pCard->GetPrintedCardName());

						CString strFilterName;
						CString strFilterNamePlural;

						strFilterName.Format(_T("a %s card"), strPrintedCardName);
						strFilterNamePlural.Format(_T("%s cards"), strPrintedCardName);

						CCardFilter::AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(strFilterName, strFilterNamePlural, new CardNameComparer(strPrintedCardName))));

						m_AvailableSelections.push_back(std::make_pair(strPrintedCardName,
							m_pPreferredFilter ? m_pPreferredFilter->IsCardIncluded(pCard) :
							(m_pRestrictionFilter ? m_pRestrictionFilter->IsCardIncluded(pCard) : true)));

						if (pCard->IsDoubleNamed() == TRUE)
						{
							CString strPrintedCardName(pCard->GetSecondPrintedCardName());

							CString strFilterName;
							CString strFilterNamePlural;

							strFilterName.Format(_T("a %s card"), strPrintedCardName);
							strFilterNamePlural.Format(_T("%s cards"), strPrintedCardName);

							CCardFilter::AddFilter(std::auto_ptr<CCardFilter>(new CCardFilter(strFilterName, strFilterNamePlural, new CardNameComparer(strPrintedCardName))));

							m_AvailableSelections.push_back(std::make_pair(strPrintedCardName,
								m_pPreferredFilter ? m_pPreferredFilter->IsCardIncluded(pCard) :
								(m_pRestrictionFilter ? m_pRestrictionFilter->IsCardIncluded(pCard) : true)));
						}
					}

				}
			}
		}
	}


	const std::map<CString, int>& playerCardNames(pPlayer->GetDeck().GetCardNames());

	BOOL bNontrickFound = FALSE;

	for (size_t i = 0; i < m_AvailableSelections.size(); ++i)
	{
		const CString& strCardName(m_AvailableSelections[i].first);

		BOOL bTrick = !m_AvailableSelections[i].second;
		if (!bTrick)
			if (PlayerEffectType::PositivePlayerEffectType(m_PlayerEffect))
				bTrick = playerCardNames.count(strCardName) == 0;
			else
				bTrick = playerCardNames.count(strCardName) > 0;

		// If we are thinking, mark any non-in-play cards and not memorized cards as trick

		if (!bTrick && (m_pGame->IsThinking() || GetController()->IsComputer()))
		{
			bTrick = TRUE;
			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				CPlayer* pPlayer2 = m_pGame->GetPlayer(j);
				if (pPlayer2 == pPlayer)
					continue;

				CZone* pInplay = pPlayer2->GetZoneById(ZoneId::Battlefield);
				for (int k = 0; k < pInplay->GetSize(); ++k)
					if (pInplay->GetAt(k)->GetPrintedCardName() == strCardName)
					{
						bTrick = FALSE;
						break;
					}

				if (!bTrick)
					break;
			}

			if (bTrick)
			{
				const CCountedPtrSet<const CCard>& memorizedCards(GetController()->GetMemorizedCards());
				for (CCountedPtrSet<const CCard>::Iterator j = memorizedCards.Begin(); j != memorizedCards.End(); ++j)
					if ((*j)->GetPrintedCardName() == strCardName)
					{
						bTrick = FALSE;
						break;
					}
			}
		}

		CString strFilterNamePlural;
		strFilterNamePlural.Format(_T("%s cards"), strCardName);
		const CCardFilter* pCardFilter = CCardFilter::GetFilter(strFilterNamePlural);

		ATLASSERT(pCardFilter);

		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = reinterpret_cast<int>(pCardFilter);

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T("selects %s for the %s of %s"), strFilterNamePlural, GetAbilityName(), GetCard()->GetCardName());
			cpAction->SetActionName(strActionName);
		}

		if (bTrick)
			cpAction->SetTrick(TRUE);
		else
			bNontrickFound = TRUE;

		actions.Add(cpAction.GetPointer());
	}

	if (!bNontrickFound && (m_pGame->IsThinking() || GetController()->IsComputer()))
	{
		if (m_pGame->IsThinking())
		{
			// If all actions are tricks and we are thinking, we couldn't feed all the actions to the thinking process. Instead 
			// do not allow this in minimax.

			m_pGame->AddSearchBreak(SearchBreak::NotEnoughInformation);
		}

		// In case this is the only action possible, randomly set one as non-trick

		actions.GetAt(rand() % actions.GetSize())->SetTrick(FALSE);
	}
}

//____________________________________________________________________________
//
CTriggeredMakeshiftTemporaryAbility::CTriggeredMakeshiftTemporaryAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_MoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others)
	, m_MoveCardOption(MoveCardOption::MoveSingleCard)
	, m_pToCard(pCard)
	, m_ScheduledNode(NodeId::Null)
{
}

BOOL CTriggeredMakeshiftTemporaryAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	m_MoveCardModifier.SetToPlayer(pTriggeredPlayer);

	if (m_MoveCardOption == MoveCardOption::MoveSingleCard)
	{
		if (triggerContext.m_pCard && triggerContext.m_pCard->GetCounterContainer()->GetCounter(MANNEQUIN_COUNTER)->GetCount()>0)
		{
			if (m_ScheduledNode == NodeId::Null)
				triggerContext.m_MoveCardModifier.ApplyTo(triggerContext.m_pCard);
			else
				m_pGame->GetScheduler()->ScheduleTask(
					new CCardModifierTask(
							triggerContext.m_pCard, std::auto_ptr<CCardModifier>(triggerContext.m_MoveCardModifier.CloneCardModifier()),
							triggerContext.m_MoveCardModifier.GetFromZone() == ZoneId::Battlefield),
							m_ScheduledNode);
		}
		else
		{
			ATLASSERT(false);

			m_MoveCardModifier.SetToPlayer(NULL); // has to reset this to avoid AI error caused by unmatched strategy

			return FALSE;
		}

		m_MoveCardModifier.SetToPlayer(NULL); // has to reset this to avoid AI error caused by unmatched strategy

		return TRUE;
	}

	CZone* pZone = pTriggeredPlayer->GetZoneById(m_MoveCardModifier.GetFromZone());

	// Add all applicable cards to a local container first to prevent
	// invalid index problem if more than one cards are removed from the zone
	// as a result of another card's move

	CCountedCardContainer cards;
	for (int i = pZone->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pZone->GetAt(i);
		if (!m_CardFilterHelper.IsCardIncluded(pCard))
			continue;

		cards.AddCard(pCard, CardPlacement::Top);
	}

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		CCard* pCard = cards.GetAt(i);
		if (m_ScheduledNode == NodeId::Null)
			triggerContext.m_MoveCardModifier.ApplyTo(pCard);
		else
			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(
						pCard, std::auto_ptr<CCardModifier>(triggerContext.m_MoveCardModifier.CloneCardModifier()),
						triggerContext.m_MoveCardModifier.GetFromZone() == ZoneId::Battlefield),
						m_ScheduledNode);
	}

	m_MoveCardModifier.SetToPlayer(NULL); // has to reset this to avoid AI error caused by unmatched strategy

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredDesecratorHagAbility::CTriggeredDesecratorHagAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_MoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Others)
	, m_MoveCardOption(MoveCardOption::MoveSingleCard)
	, m_pToCard(pCard)	
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTriggeredDesecratorHagAbility::OnSelectionDone))
{
}

BOOL CTriggeredDesecratorHagAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	std::vector<SelectionEntry> entries;

	GetSelectionEntries(pAction, pTriggeredPlayer, entries);

	if (entries.size())
		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pTriggeredPlayer, (DWORD)pAction->GetController());

	return true;
}
void CTriggeredDesecratorHagAbility::GetSelectionEntries(const CTriggeredAction* pAction, CPlayer* pPlayer, std::vector<SelectionEntry>& entries)
{
	CZone* pZone = pPlayer->GetZoneById(m_MoveCardModifier.GetFromZone());
	Power max_power = Power(0);

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);
		if (pCard->GetCardType().IsCreature())
			if (((CCreatureCard*)pCard)->GetPower()>max_power) max_power = ((CCreatureCard*)pCard)->GetPower();
	}
	
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CreaturePowerComparer<std::greater_equal<int>>(GET_INTEGER(max_power)));

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		

		if (!m_CardFilter_temp.IsCardIncluded(pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

void CTriggeredDesecratorHagAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	const CPlayer* pByPlayer = (const CPlayer*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			m_MoveCardModifier.ApplyTo(pCard);

			break;
		}
}
//____________________________________________________________________________
//
CTriggeredBolsterAbility::CTriggeredBolsterAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_CardCounterModifier(_T("+1/+1"), +1, false, NULL)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTriggeredBolsterAbility::OnSelectionDone))
{
}

BOOL CTriggeredBolsterAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	std::vector<SelectionEntry> entries;

	GetSelectionEntries(pAction, pTriggeredPlayer, entries);

	if (entries.size())
		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pTriggeredPlayer, (DWORD)pAction->GetController());

	return true;
}

void CTriggeredBolsterAbility::GetSelectionEntries(const CTriggeredAction* pAction, CPlayer* pPlayer, std::vector<SelectionEntry>& entries)
{
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	Life lifeMin = Life(9999);						// set initialise minimum toughness to a high ammount so any creature found
													// will overwrite this value with a lower toughness
	// check each creature and store the lowest toughness value
	for (int k = 0; k < pBattlefield->GetSize(); ++k)
	{
		CCard* pCard = pBattlefield->GetAt(k);
		if (pCard->GetCardType().IsCreature())
			if (((CCreatureCard*)pCard)->GetLife() < lifeMin) 
				lifeMin = ((CCreatureCard*)pCard)->GetLife();
	}
	
	CCardFilter m_CardFilter_temp;
	// filter all creatures with toughness equal to the (least) toughness value stored previously 
	m_CardFilter_temp.SetComparer(new CreatureToughnessComparer<std::less_equal<int>>(GET_INTEGER(lifeMin)));
	// list all the creatures with the least toughness for the player to select one to bolster
	for (int k = 0; k < pBattlefield->GetSize(); ++k)
	{
		CCard* pCard = pBattlefield->GetAt(k);
		if (!m_CardFilter_temp.IsCardIncluded(pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

void CTriggeredBolsterAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	const CPlayer* pByPlayer = (const CPlayer*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			m_CardCounterModifier.ApplyTo(pCard);
			break;
		}
}
//____________________________________________________________________________
//
CTriggeredCounterSpellAbility::CTriggeredCounterSpellAbility(CCard* pCard)
	: CTriggeredAbility(pCard)		
	, m_pToCard(pCard)

{
}

BOOL CTriggeredCounterSpellAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

//	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, TRUE, MoveType::Others, pAction->GetController());

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	CStack& stack = m_pGame->GetStack();

	if (!stack.CanCounterSpell(pAction->GetController(), const_cast<CCard*>(triggerContext.m_pCard), TRUE, ZoneId::Graveyard, CardPlacement::Top))
			return FALSE;
		if (stack.CounterSpell(pAction->GetController(), const_cast<CCard*>(triggerContext.m_pCard), TRUE, ZoneId::Graveyard, CardPlacement::Top))
			return TRUE;
		
	return FALSE;
	/*std::set<const CCardFilter*> cantCounterFilterIndexes;
		triggerContext.m_pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
			if ((*it)->IsCardIncluded(triggerContext.m_pCard))
				return FALSE;
	
	if ((triggerContext.m_pCard->GetZoneId() != ZoneId::Stack)) return FALSE;


	CStack& stack = m_pGame->GetStack();

	if (triggerContext.m_pCard && !triggerContext.m_pCard->GetCardKeyword()->CantBeCountered())
		{
			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
			if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == triggerContext.m_pCard))
			{

				pModifier.ApplyTo(triggerContext.m_pCard);
				pModifier.SetToPlayer(NULL);
				stack.RemoveActionAt(l);
				if (triggerContext.m_pCard->GetCardType().IsCreature() && triggerContext.m_pCard->GetController() != pAction->GetController())
					triggerContext.m_pCard->GetController()->SetCreatureCounteredByOpponent(TRUE);   // To Support Summoning Trap
				break;
			}
			}
		}
		else
		{
			ATLASSERT(false);

			pModifier.SetToPlayer(NULL);

			return FALSE;
		}

	pModifier.SetToPlayer(NULL);

	/*if (m_pGame->IsThinking())  still crashes with this
		{
			// If all actions are tricks and we are thinking, we couldn't feed all the actions to the thinking process. Instead 
			// do not allow this in minimax.

			m_pGame->AddSearchBreak(SearchBreak::NotEnoughInformation);
		}*/

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredGainKeywordAbility::CTriggeredGainKeywordAbility(CCard* pCard)
	: CTriggeredAbility(pCard)		
	, m_pToCard(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTriggeredGainKeywordAbility::OnSelectionDone))

{
}
void CTriggeredGainKeywordAbility::AddCardKeywordToSelection(CardKeyword cardKeywordToAdd, BOOL bThisTurnOnly,
														LPCTSTR strCardKeywordText)
{
	CardKeywordSelectionEntry entry;
	entry.cardKeywordToAdd = cardKeywordToAdd;
	entry.bThisTurnOnly = bThisTurnOnly;
	entry.strCardKeywordText = strCardKeywordText;
	
	m_Selection.push_back(entry);
}
BOOL CTriggeredGainKeywordAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (triggerContext.m_pCard)
	{
	vector<SelectionEntry> entries;
	for (unsigned i = 0; i < m_Selection.size(); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = i;
		entry.strText.Format(_T("selects protection from %s"), m_Selection[i].strCardKeywordText);
		entry.cpAssociatedCard = triggerContext.m_pCard;
		entries.push_back(entry);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)triggerContext.m_pCard);
	}
	return TRUE;
}
void CTriggeredGainKeywordAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	CCard* pCard = (CCard*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;

			CCardKeywordModifier pModifier;
			pModifier.GetModifier().SetToAdd(m_Selection[nSelectedIndex].cardKeywordToAdd);
			pModifier.GetModifier().SetOneTurnOnly(m_Selection[nSelectedIndex].bThisTurnOnly);			
			pModifier.ApplyTo(pCard);		

			break;
		}
}

//____________________________________________________________________________
//
CTriggeredPoisonAbility::CTriggeredPoisonAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nPoisonCount(1)
	, m_nReplace(FALSE)
{

}

BOOL CTriggeredPoisonAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	CPoisonModifier pModifier = CPoisonModifier(m_pGame, pAction1->GetTriggerContext().nValue1, m_nReplace);

	pModifier.ApplyTo(pTriggeredPlayer);

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredProliferateAbility::CTriggeredProliferateAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
//	, m_LifeModifier(Life(0), pCard)
	, m_pToCard(NULL)
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CTriggeredProliferateAbility::OnProliferateSelected))
{
}

BOOL CTriggeredProliferateAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	struct PushBack
	{
		PushBack(CTriggeredAction* pAction)
			: pAction1((const TTriggeredAction<TriggerContextType>*)pAction)
			, triggerContext(pAction1->GetTriggerContext())
			, entries()
		{}
		void operator()(Counter* c)
		{
			//int n = triggerContext.m_pCard->GetCounterContainer()->GetSize();
			LPCTSTR name = c->GetName();
		
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)c;  //assuming size_of(c)==size_of(DWORD)
			selectionEntry.strText.Format(_T("put a %s on %s"), name, triggerContext.m_pCard->GetCardName());
			//m_CounterNameSelection.push_back(name);

			if (c->GetCount()!=0)
				entries.push_back(selectionEntry);
		}
		const TTriggeredAction<TriggerContextType>* pAction1;
		const TriggerContextType& triggerContext;

		std::vector<SelectionEntry> entries;
	} push(pAction);
	//if (triggerContext.m_pCard)
	//{
		m_ProliferateSelection.AddSelectionRequest(
			push.triggerContext.m_pCard->GetCounterContainer()->ForEachCounter(push).entries,
			1, 1, NULL, GetController(), (DWORD)push.triggerContext.m_pCard);
/*	}
	else
	{
		int poison = pTriggeredPlayer->GetPoisonCounters();
		if (poison>0)
		{
			CPoisonModifier pModifier = CPoisonModifier (m_pGame, poison);
			pModifier.ApplyTo(pTriggeredPlayer);
		}
	}*/

	return TRUE;
}
void CTriggeredProliferateAbility::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)dwContext1;
			Counter* prof = (Counter*)it->dwContext;
			CCardCounterModifier pModifier = CCardCounterModifier(prof->GetName(), +1);
			pModifier.ApplyTo(pCard);
		}
}
//____________________________________________________________________________
//
CTriggeredDividedModifyLifeAbility::CTriggeredDividedModifyLifeAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_LifeModifier(Life(0), pCard)
	, m_pToCreature(NULL)
{
}

BOOL CTriggeredDividedModifyLifeAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	CLifeModifier pModifier;
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	pModifier = triggerContext.m_LifeModifier;

	ContextValue Context(pAction->GetValue());
	pModifier.SetLifeDelta(Life(Context.nValue1));
	pModifier.SetDamageType(triggerContext.m_LifeModifier.GetDamageType());
	pModifier.SetSourceCard(triggerContext.m_LifeModifier.GetSourceCard());
	pModifier.SetToBase(triggerContext.m_LifeModifier.GetToBase());
	pModifier.SetReplacement(triggerContext.m_LifeModifier.GetReplacement());
	pModifier.SetPreventable(triggerContext.m_LifeModifier.GetPreventable());
	pModifier.SetOneTurnOnly(triggerContext.m_LifeModifier.GetOneTurnOnly());

	if (!triggerContext.m_pCreature)
		pModifier.ApplyTo(pTriggeredPlayer);
	else
		pModifier.ApplyTo(triggerContext.m_pCreature);

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredCascadeAbility::CTriggeredCascadeAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
}
void CTriggeredCascadeAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;
	//if (GetController()->IsComputer()) Tricks = FALSE; else Tricks = TRUE;
	Tricks = TRUE;

	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
	int cost =  (int)m_pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	int reveal=0;
	int stop=0;		

	for (int i = pLib->GetSize() - 1 ; i > -1; i--)
	{
		CCard* ppCard = pLib->GetAt(i);
	//	pContainer->AddCard(ppCard,CardPlacement::Top);		
		m_CardFlagModifier1.ApplyTo(ppCard);
		if ((stop<1))
			++reveal;
		else break;
		if (ppCard->GetCardType().IsLand()) 
			continue;
		if (cost > (int)ppCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal())
			++stop;
	}

	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal-1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier2.AddSelection(MinimumValue(reveal-1), MaximumValue(reveal-1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // what cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pmodifier2.ApplyTo(GetController());

	CZoneModifier pModifier3 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pModifier3.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // what cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player	

	CCard* toCast;

	toCast = pLib->GetTopCard();

	if (stop > 0 && toCast) pModifier3.ApplyTo(GetController());

	TriggerContextType tempTriggerContext;//(triggerContext);
	//tempTriggerContext.nValue1 = 99999;
	//tempTriggerContext.nValue2 = 99999;

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);
	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("skip free cast"));

		cpAction->SetActionName(strActionName);
	}

	actions.Add(cpAction.GetPointer());

	if (stop>0)
	{
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			TriggerContextType tempTriggerContext;
			tempTriggerContext.SpellIndex = i;
			tempTriggerContext.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				tempTriggerContext.ActionIndex = j;				

				counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
				ATLASSERT(cpAction);

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

					cpAction->SetActionName(strActionName);
				}

				actions.Add(cpAction.GetPointer());
			}		


		}		
	}	
}

BOOL CTriggeredCascadeAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;
//	if (GetController()->IsComputer()) Tricks = FALSE; else Tricks = TRUE;
	Tricks = TRUE;


	CZone* pLib = GetController()->GetZoneById(ZoneId::Exile);

	if (triggerContext.SpellIndex != 99999 && triggerContext.ActionIndex != 99999)
	{
		CCard* toCast;
		toCast = pLib->GetTopCard();

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		triggerContext.RemoveReductionCost(toCast);
	}

	CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Exile, ZoneId::Library, TRUE);
	pModifier3.SetToTop(FALSE);

	CCountedCardContainer pContainer;

	for (int i = 0; i < pLib->GetSize(); ++i)
	{
		CCard* pCard = pLib->GetAt(i);
		if (!(CardFlag::AbilityFlag & pCard->GetCardFlag()->Get()).Any())
			continue;

		if (pCard->GetCardFlag()->GetData(CardFlag::AbilityFlag) == GetInstanceID())
			pContainer.AddCard(pCard, CardPlacement::Top);	
	}
	
	pContainer.Shuffle(GetController());

	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData());

	for (int i = 0; i < pContainer.GetSize(); ++i)
	{
		m_CardFlagModifier2.ApplyTo(pContainer.GetAt(i));
		pModifier3.ApplyTo(pContainer.GetAt(i));
	}	

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredAllCounterSpellAbility::CTriggeredAllCounterSpellAbility(CCard* pCard)
	: CTriggeredAbility(pCard)		
	, m_pStackAction(NULL)
	, m_pTargetedCard(NULL)

{
}
BOOL CTriggeredAllCounterSpellAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Stack, ZoneId::Graveyard, TRUE, MoveType::Others, pAction->GetController());

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );
	
	CStack& stack = m_pGame->GetStack();

	const CStackAbilityAction* cAction;
	cAction = triggerContext.m_pStackAction;

	if (triggerContext.m_pStackAction == NULL) 
	{
		BOOL bFound = FALSE;
		for (int l = stack.GetStackSize() - 1; l > -1 ; --l)
		{		
			const  CTargetActionCommon* pTargetAction = dynamic_cast<const  CTargetActionCommon*>(stack.GetStackAction(l).GetPointer());
			if (!pTargetAction) 

				for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
					it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

				{
					if ((const CCard*)(it->GetPointer()) == triggerContext.m_pTargetedCard) {cAction =  stack.GetStackAction(l).GetPointer(); bFound=TRUE; break;}
				}

				if (bFound) break;
		}
	}

	if (cAction == NULL) return FALSE;

	CCard* sCard = triggerContext.m_pStackAction->GetAbility()->GetCard();
	if (cAction->IsSpell())
	{
		std::set<const CCardFilter*> cantCounterFilterIndexes;
		sCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellsCantBeCountered, cantCounterFilterIndexes);
		for (std::set<const CCardFilter*>::iterator it = cantCounterFilterIndexes.begin(); it != cantCounterFilterIndexes.end(); ++it)
			if ((*it)->IsCardIncluded(sCard))
				return FALSE;
	}
	//if ((triggerContext.m_pCard->GetZoneId() != ZoneId::Stack)) return FALSE;

	if (cAction->IsSpell() && !sCard->GetCardKeyword()->CantBeCountered())
		{
			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
			if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == sCard))
			{

				pModifier.ApplyTo(sCard);
				pModifier.SetToPlayer(NULL);
				stack.RemoveActionAt(l);
				if (sCard->GetCardType().IsCreature() && sCard->GetController() != pAction->GetController())
					sCard->GetController()->SetCreatureCounteredByOpponent(TRUE);   // To Support Summoning Trap
				break;
			}
			}
		}
		else
		if (!cAction->IsSpell())
		{
			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
			const CStackAbilityAction* pStackAction = stack.GetStackAction(l).GetPointer();
			if (pStackAction == cAction)
			{
				
				pModifier.SetToPlayer(NULL);
				stack.RemoveActionAt(l);				
				break;
			}
			}
		}
		else
		{
			ATLASSERT(false);

			pModifier.SetToPlayer(NULL);

			return FALSE;
		}

	pModifier.SetToPlayer(NULL);

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredHideawayAbility::CTriggeredHideawayAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(m_pCard->GetInstanceID());
}
BOOL CTriggeredHideawayAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	CZone* pLib = GetController()->GetZoneById(ZoneId::Library);	
	
	int libSize = pLib->GetSize();
	int n;
	
	if (libSize >= 4) 
		n=4; 
	else 
		if (libSize == 0) 
			return FALSE; 
		else n = libSize;

		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, GetController());
	
	CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		NULL, // what cards
		ZoneId::Library, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pmodifier2.SetReorderInformation(
		true, 
		ZoneId::Library, 
		CZoneModifier::RoleType::PrimaryPlayer, // this player's library
		CardPlacement::Bottom);

	pmodifier2.ApplyTo(GetController());

	CCard* toMove = pLib->GetTopCard();
	
	pModifier.ApplyTo(toMove);
	
	m_CardFlagModifier1.ApplyTo(toMove);
	toMove->GetOrientation()->FaceDown();

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredFreeCastAbility::CTriggeredFreeCastAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
//	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
//	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
//	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
}
void CTriggeredFreeCastAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;
	//if (GetController()->IsComputer()) Tricks = FALSE; else Tricks = TRUE;
	Tricks = TRUE;	

	CCard* toCast;

	toCast = m_pCard;

	TriggerContextType tempTriggerContext;//(triggerContext);
	//tempTriggerContext.nValue1 = 99999;
	//tempTriggerContext.nValue2 = 99999;

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);
	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("skip free cast"));

		cpAction->SetActionName(strActionName);
	}

	actions.Add(cpAction.GetPointer());

	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			TriggerContextType tempTriggerContext;
			tempTriggerContext.SpellIndex = i;
			tempTriggerContext.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				tempTriggerContext.ActionIndex = j;				

				counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
				ATLASSERT(cpAction);

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

					cpAction->SetActionName(strActionName);
				}

				actions.Add(cpAction.GetPointer());
			}		


		}		
		
}

BOOL CTriggeredFreeCastAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;
//	if (GetController()->IsComputer()) Tricks = FALSE; else Tricks = TRUE;
	Tricks = TRUE;

	if (triggerContext.SpellIndex != 99999 && triggerContext.ActionIndex != 99999)
	{
		CCard* toCast;
		toCast = m_pCard;

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		triggerContext.RemoveReductionCost(toCast);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredSuspendCastAbility::CTriggeredSuspendCastAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}
void CTriggeredSuspendCastAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;
	Tricks = TRUE;	

	CCard* toCast;

	toCast = m_pCard;

	TriggerContextType tempTriggerContext;

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);

	for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
	{		
		TriggerContextType tempTriggerContext;
		tempTriggerContext.SpellIndex = i;
		tempTriggerContext.AddReductionCost(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);

		std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

		if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
		if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

		for (int j = 0; j < pActionContainer->GetSize(); ++j)
		{
			tempTriggerContext.ActionIndex = j;				

			counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
			ATLASSERT(cpAction);

			if (bSetNames)
			{
				CString strActionName;
				strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

				cpAction->SetActionName(strActionName);
			}

			actions.Add(cpAction.GetPointer());
		}		


	}		
	
}

BOOL CTriggeredSuspendCastAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;
	Tricks = TRUE;

	if (triggerContext.SpellIndex != 99999 && triggerContext.ActionIndex != 99999)
	{
		CCard* toCast;
		toCast = m_pCard;

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		triggerContext.RemoveReductionCost(toCast);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredCopyCastAbility::CTriggeredCopyCastAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}
void CTriggeredCopyCastAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;	
	Tricks = TRUE;	

	CCard* toCast;

	toCast = m_pCard;

	TriggerContextType tempTriggerContext;

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);
	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("skip free cast"));

		cpAction->SetActionName(strActionName);
	}

//	actions.Add(cpAction.GetPointer());

	
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			TriggerContextType tempTriggerContext;
			tempTriggerContext.SpellIndex = i;
			tempTriggerContext.AddTotalReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				tempTriggerContext.ActionIndex = j;				

				counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
				ATLASSERT(cpAction);

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

					cpAction->SetActionName(strActionName);
				}

				actions.Add(cpAction.GetPointer());
			}		


		}		
		
}

BOOL CTriggeredCopyCastAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;
	Tricks = TRUE;

	if (triggerContext.SpellIndex != 99999 && triggerContext.ActionIndex != 99999)
	{
		CCard* toCast;
		toCast = m_pCard;

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		triggerContext.RemoveTotalReductionCost(toCast);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredMadnessAbility::CTriggeredMadnessAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{

}
void CTriggeredMadnessAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;

	Tricks = TRUE;	

	CCard* toCast;

	toCast = m_pCard;

	//CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Discard);
	//pModifier.ApplyTo(m_pCard);

	TriggerContextType tempTriggerContext;

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);
	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("skip free cast"));

		cpAction->SetActionName(strActionName);
	}

	actions.Add(cpAction.GetPointer());

	
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			TriggerContextType tempTriggerContext;
			tempTriggerContext.SpellIndex = i;
			//tempTriggerContext.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetAbilityName() != _T("Madness"))  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				tempTriggerContext.ActionIndex = j;				

				counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
				ATLASSERT(cpAction);

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

					cpAction->SetActionName(strActionName);
				}

				actions.Add(cpAction.GetPointer());
			}		


		}		
		
}

BOOL CTriggeredMadnessAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;

	Tricks = TRUE;

	if (triggerContext.SpellIndex != 99999 && triggerContext.ActionIndex != 99999)
	{
		CCard* toCast;
		toCast = m_pCard;

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		//triggerContext.RemoveReductionCost(toCast);
	}
	else 
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Graveyard, TRUE);
		pModifier.ApplyTo(m_pCard);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CAttackingTokenCreationAbility::CAttackingTokenCreationAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CAttackingTokenCreationAbility::OnSelectionDone))
{
}

BOOL CAttackingTokenCreationAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	CCountedCardContainer pContainer;

	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	int nTokenNumber = pAction1->GetTriggerContext().nValue1;

	CTokenCreationModifier pModifier = CTokenCreationModifier(m_pGame, m_pTokenName, m_uID, nTokenNumber, 0, ZoneId::Battlefield, &pContainer);

	pModifier.ApplyTo(pAction->GetController());

	CCardOrientationModifier pTapModifier = CCardOrientationModifier();	

	for (int i = 0; i < pContainer.GetSize(); ++i)
	{
		pTapModifier.ApplyTo(pContainer.GetAt(i));					
	}

	CZone* pBattlefield = m_pGame->GetNextPlayer(pAction->GetController())->GetZoneById(ZoneId::Battlefield);
	
	std::vector<SelectionEntry> entries;

	/*CCardFilter GideonFilter;
	GideonFilter.SetComparer(new CardNameComparer(_T("Gideon Jura")));
	
	if (pAction->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon) && 
		GideonFilter.CountIncluded(pBattlefield->GetCardContainer()))
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsPlaneswalker() && pCard->GetPrintedCardName() == "Gideon Jura")
			{
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)pCard;
				selectionEntry.strText.Format(_T("Attack %s"), pCard->GetCardName());

				entries.push_back(selectionEntry);
			}
		}

		for (int i = 0; i < pContainer.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)pContainer.GetAt(i);			
			m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(),entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)pCard);
		}
	}

	else*/
	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsPlaneswalker())
			{
				
				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)pCard;
				selectionEntry.strText.Format(_T("Attack %s"), pCard->GetCardName());

				entries.push_back(selectionEntry);
			}
		}
		
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Attack player"));

		entries.push_back(selectionEntry);
		}

		for (int i = 0; i < pContainer.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)pContainer.GetAt(i);			
			m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(),entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)pCard);
		}

	}

	return TRUE;

}
void CAttackingTokenCreationAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCard = (CCreatureCard*)dwContext1;
			
			if ( pSelectionPlayer != pCard->GetController())
				return;

			if (!it->dwContext)
			{								
				pCard->Attack(m_pGame->GetNextPlayer(pCard->GetController()));
				return;
			}
			else
			{
				CPlaneswalkerCard* pAttackedWalker = (CPlaneswalkerCard*)it->dwContext;
				pCard->Attack(pAttackedWalker);
			}
		}
}

//____________________________________________________________________________
//
CMoveAttackingAbility::CMoveAttackingAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CMoveAttackingAbility::OnSelectionDone))
	, m_pToCard(pCard)
{
}
BOOL CMoveAttackingAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (triggerContext.m_pCard->GetZoneId() != m_fromZone) return FALSE;



	CMoveCardModifier pModifier = CMoveCardModifier(m_fromZone, ZoneId::Battlefield, TRUE, MoveType::Others, pAction->GetController());
	pModifier.SetTapped(TRUE);
	pModifier.ApplyTo(triggerContext.m_pCard);

	CZone* pBattlefield = m_pGame->GetNextPlayer(pAction->GetController())->GetZoneById(ZoneId::Battlefield);

	std::vector<SelectionEntry> entries;

	{
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsPlaneswalker())
			{

				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)pCard;
				selectionEntry.strText.Format(_T("Attack %s"), pCard->GetCardName());

				entries.push_back(selectionEntry);
			}
		}

		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Attack player"));

			entries.push_back(selectionEntry);
		}

		m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(),entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)triggerContext.m_pCard);

	}

	return TRUE;

}
void CMoveAttackingAbility::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);


	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCard = (CCreatureCard*)dwContext1;

			if ( pSelectionPlayer != pCard->GetController())
				return;

			if (!it->dwContext)
			{								
				pCard->Attack(m_pGame->GetNextPlayer(pCard->GetController()));
				return;
			}
			else
			{
				CPlaneswalkerCard* pAttackedWalker = (CPlaneswalkerCard*)it->dwContext;
				pCard->Attack(pAttackedWalker);
			}


		}


}
//____________________________________________________________________________
//
CTriggeredEquipCardAbility::CTriggeredEquipCardAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{

}
BOOL CTriggeredEquipCardAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;
	
	const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<CDoubleTargetActionCommon*>(pAction);
	if (!pTargetAction) return FALSE;
	const CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
	const CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();		


	CCard* pEquipMent;
	CCard* pCreature;

	for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
			it != targetGroup1.CardSubjectEnd(); ++it)
		{
			if ( (*it)->GetController() == pTriggeredPlayer && (*it)->GetZoneId() == ZoneId::Battlefield)
			pEquipMent = (CCard*)it->GetPointer();
		}

	for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
			it != targetGroup2.CardSubjectEnd(); ++it)
		{
			if ( (*it)->GetController() == pTriggeredPlayer &&  (*it)->GetZoneId() == ZoneId::Battlefield)

			pCreature = (CCard*)it->GetPointer();
		}

	if (pTargetAction->GetTargetGroup1().GetCardSubjectCount() && pTargetAction->GetTargetGroup2().GetCardSubjectCount())
		//pEquipMent && pCreature)
	{
		
		CEquipModifier pModifier = CEquipModifier(pEquipMent);
		
		pModifier.ApplyTo((CCreatureCard*)pCreature);
		return TRUE;
	}

	return FALSE;
}
//____________________________________________________________________________
//
CTriggeredSpecialProdManaAbility::CTriggeredSpecialProdManaAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nManaCount(1)
	,m_n_colorless(FALSE)
	,m_n_black(FALSE)
	,m_n_blue(FALSE)
	,m_n_white(FALSE)
	,m_n_red(FALSE)
	,m_n_green(FALSE)
{
	AddAbilityTag(AbilityTag::Mana);
}

BOOL CTriggeredSpecialProdManaAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	pTriggeredPlayer->GetManaPool().AddMana((CManaPool::Color::Enum)pAction1->GetTriggerContext().nValue1, pAction1->GetTriggerContext().nValue2);

	CManaPool pPool;
	pPool.AddMana((CManaPool::Color::Enum)pAction1->GetTriggerContext().nValue1, pAction1->GetTriggerContext().nValue2);

	pTriggeredPlayer->GetManaAddEventSource()->FireEvent(pTriggeredPlayer, pPool);

	return TRUE;
}

void CTriggeredSpecialProdManaAbility::GetSelections(CActionContainer& actions,
																		CPlayer* pPlayer,
																		const TriggerContextType& triggerContext,
																		const TriggerInfo& info,
																		BOOL bSetNames) const
{
	//static const DWORD manaColors[] = {
		//CManaPool::Color::Black,
		//CManaPool::Color::Blue,
		//CManaPool::Color::Green,
		//CManaPool::Color::Red,
		//CManaPool::Color::White };

	if (m_n_colorless == TRUE)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = CManaPool::Color::Colorless;
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)CManaPool::Color::Colorless);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
	if (m_n_green == TRUE)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = CManaPool::Color::Green;
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum) CManaPool::Color::Green);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
	if (m_n_red == TRUE)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = CManaPool::Color::Red;
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)CManaPool::Color::Red);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
	if (m_n_blue == TRUE)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = CManaPool::Color::Blue;
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)CManaPool::Color::Blue);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
	if (m_n_black == TRUE)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = CManaPool::Color::Black;
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum)CManaPool::Color::Black);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
	if (m_n_white == TRUE)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = CManaPool::Color::White;
		tempTriggerContext.nValue2 = m_nManaCount;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName(_T("selects "));
			
			for (int j = 0; j < m_nManaCount; ++j)
				strActionName += CManaPool::Color::ToDrawString((CManaPool::Color::Enum) CManaPool::Color::White);

			strActionName.AppendFormat(_T(" for the %s of %s"),
				GetAbilityName(),
				GetCard()->GetCardName());

			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
}

//____________________________________________________________________________
//
CTriggeredExchangeControlAbility::CTriggeredExchangeControlAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
}

BOOL CTriggeredExchangeControlAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;
	
	const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<CDoubleTargetActionCommon*>(pAction);
	if (!pTargetAction) return FALSE;
	const CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
	const CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();		
	CPlayerEffectModifier pModifier1 = CPlayerEffectModifier(PlayerEffectType::SkipNextUntapStep);
	CCardOrientationModifier pModifier2 = CCardOrientationModifier(TRUE);	

	if (targetGroup1.GetCardSubjectCount() && targetGroup2.GetCardSubjectCount())

	for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
			it != targetGroup1.CardSubjectEnd(); ++it)
		{		
			((CCard*)it->GetPointer())->Move(m_pGame->GetNextPlayer(((CCard*)it->GetPointer())->GetController())->GetZoneById(ZoneId::Battlefield),
									pTriggeredPlayer, MoveType::Others);
		}
		

	for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
			it != targetGroup2.CardSubjectEnd(); ++it)
		{		
				((CCard*)it->GetPointer())->Move(m_pGame->GetNextPlayer(((CCard*)it->GetPointer())->GetController())->GetZoneById(ZoneId::Battlefield),
									pTriggeredPlayer, MoveType::Others);
		}

	return FALSE;
}

//____________________________________________________________________________
//
CTriggeredDoubleTargetingModifyLifeAbility::CTriggeredDoubleTargetingModifyLifeAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_LifeModifier1(Life(0), pCard)
	, m_LifeModifier2(Life(0), pCard)
	, m_pToCreature(NULL)
{
	//if (m_LifeModifier.GetLifeDelta() > Life(0))
		//AddAbilityTag(AbilityTag::LifeGain);
	//else if (m_LifeModifier.GetLifeDelta() < Life(0))
	//	AddAbilityTag(AbilityTag::LifeLost);
}

BOOL CTriggeredDoubleTargetingModifyLifeAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const CDoubleTargetActionCommon* pTargetAction = dynamic_cast<CDoubleTargetActionCommon*>(pAction);
	if (!pTargetAction) return FALSE;
	const CSubjectGroup& targetGroup1 = pTargetAction->GetTargetGroup1();
	const CSubjectGroup& targetGroup2 = pTargetAction->GetTargetGroup2();		

	if (targetGroup1.GetCardSubjectCount())

	for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
			it != targetGroup1.CardSubjectEnd(); ++it)
		{		
			m_LifeModifier1.ApplyTo(((CCreatureCard*)it->GetPointer()));
		}
		
	if (targetGroup2.GetCardSubjectCount())

	for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
			it != targetGroup2.CardSubjectEnd(); ++it)
		{		
				m_LifeModifier1.ApplyTo(((CCreatureCard*)it->GetPointer()));
		}

	if (targetGroup1.GetPlayerSubjectCount())
		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
			it != targetGroup1.PlayerSubjectEnd(); ++it)
		{		
				m_LifeModifier1.ApplyTo(const_cast<CPlayer*>(*it));
		}

	if (targetGroup2.GetPlayerSubjectCount())
		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup2.PlayerSubjectBegin();
			it != targetGroup2.PlayerSubjectEnd(); ++it)
		{		
				m_LifeModifier2.ApplyTo(const_cast<CPlayer*>(*it));
		}

	return FALSE;
}

//____________________________________________________________________________
//
CTriggeredFreeCastAbility1::CTriggeredFreeCastAbility1(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTriggeredFreeCastAbility1::OnSelectionDone))
{
}
BOOL CTriggeredFreeCastAbility1::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	CCard* toCast;

	toCast = triggerContext.m_pCard;

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));

	entries.push_back(entry);

	if (!toCast->GetCardType().IsLand())
	{
		if (toCast->GetController() != pAction->GetController()) toCast->SetController(pAction->GetController());

		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				entries.push_back(entry);
			}
		}
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast);

	return TRUE;
}
void CTriggeredFreeCastAbility1::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;
			int j = (int)it->dwContext;

			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
					m_Selection[j].PerformAction(toCast);
//					toCast->SetController(pSelectionPlayer);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}
//____________________________________________________________________________
//
CTriggeredCopyCastAbility1::CTriggeredCopyCastAbility1(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTriggeredCopyCastAbility1::OnSelectionDone))
{
}
BOOL CTriggeredCopyCastAbility1::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	CCard* toCast;

	toCast = triggerContext.m_pCard;

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), m_pCard, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo(toCast);

	toCast = pContainer.GetAt(0);

	m_Selection.clear();
	int n=0;

	//------------------------------------------------------------------------------------------------------------------------------------------

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	//--------------------------------------------------------------------------------------------------------------------------------------------
	const CStackAbilityAction* pStackAction;
	pStackAction = triggerContext.m_pStackAction;
	/*const CStack& stack = m_pGame->GetStack();
	const CStackAbilityAction* pStackAction;

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}*/

	//--------------------------------------------------------------------------------------------------------------------------------------------


	bool to_add = false;

	toCast->SetLastCastingCostConfigEntry(pStackAction->GetCostConfigEntry());
	toCast->SetLastCastingManaCost(pStackAction->GetCostConfigEntry().GetManaPool());
		

	//if (p
	int extra_value = 0;

	if (!toCast->GetCardType().IsLand())
	{
		if (toCast->GetController() != pAction->GetController()) toCast->SetController(pAction->GetController());

		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{
			to_add = true;
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					toCast->GetSpells().GetAt(i)->GetCost().AddReductionCost(CManaCostBase::Color::Black, pStackAction->GetCostConfigEntry().GetExtraValue());
				}

			toCast->GetCardKeyword()->AddFreecast(TRUE);
			

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				to_add = true;

				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				if (!HasSameSubjectCount(pStackAction, (pActionContainer->GetAt(j).GetPointer()))) 
					to_add = false;

				if (toCast->GetSpells().GetAt(i)->GetAbilityName() != ((CSpell*)pStackAction->GetAbility())->GetAbilityName()) 
					to_add = false; // Skipping other modes.

				if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					if (((CManaConsumptionAbilityAction*)(pActionContainer->GetAt(j).GetPointer()))->GetCostConfigEntry().GetExtraValue() != pStackAction->GetCostConfigEntry().GetExtraValue())
						to_add = false;
				}

				if (to_add) entries.push_back(entry);
			}
		}
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast, extra_value, (DWORD)triggerContext.m_pCard);

	return TRUE;
}
bool CTriggeredCopyCastAbility1::HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction)
{
	int subjects1 = 0;
	int subjects2 = 0;
	const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pStackAction);
			if (pTargetAction)
			{
				subjects1 = pTargetAction->GetTargetGroup().GetCardSubjectCount() + pTargetAction->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
			}

	const CTargetActionCommon* pTargetAction1 = dynamic_cast<const CTargetActionCommon*>(pAction);
			if (pTargetAction1)
			{
				subjects2 = pTargetAction1->GetTargetGroup().GetCardSubjectCount() + pTargetAction1->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects2 = 0;
			}

	if (pTargetAction && pTargetAction1)
	{
		if (subjects1 != subjects2) 
			return false;
		else 
			return true;
	}

	const CDoubleTargetActionCommon* pDoubleTargetAction1 = dynamic_cast<const CDoubleTargetActionCommon*>(pStackAction);
			if (pDoubleTargetAction1)
			{
				subjects1 = pDoubleTargetAction1->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup1().GetPlayerSubjectCount();
				subjects2 = pDoubleTargetAction1->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup2().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
				subjects2 = 0;
			}

	const CDoubleTargetActionCommon* pDoubleTargetAction2 = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			if (pDoubleTargetAction2)
			{
				if (subjects1 == pDoubleTargetAction2->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup1().GetPlayerSubjectCount() &&
				subjects2 == pDoubleTargetAction2->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup2().GetPlayerSubjectCount())
					return true;
				else 
					return false;
			}
			else
			{ 
				return true;
			}
	
	return true;
}
void CTriggeredCopyCastAbility1::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;
			int j = (int)it->dwContext;

			const CStack& stack = m_pGame->GetStack();
			const CStackAbilityAction* pStackAction;

			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
				pStackAction = stack.GetStackAction(l).GetPointer();
				if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == (CCard*)dwContext3))
				{
					break;
				}

			}


			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
				//	m_Selection[j].PerformAction(toCast);

					    CManaPool PPool = pSelectionPlayer->GetManaPool();

						CAction* pAction = m_Selection[j].GetAction(toCast).GetPointer();
						((CAbilityAction*)pAction)->SetCostConfigEntry(pStackAction->GetCostConfigEntry());
					//	if (dwContext2) pAction->SetValue(ContextValue(dwContext2));
						pAction->PerformAction();

						pSelectionPlayer->GetManaPool().SetMana(PPool);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}
//____________________________________________________________________________
//
CTriggeredMiracleAbility::CTriggeredMiracleAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{

}
void CTriggeredMiracleAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;

	Tricks = TRUE;	

	CCard* toCast;

	toCast = m_pCard;

	//CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Discard);
	//pModifier.ApplyTo(m_pCard);

	TriggerContextType tempTriggerContext;
	tempTriggerContext.ActionIndex = 99999;
	tempTriggerContext.SpellIndex = 99999;

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);
	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("skip cast"));

		cpAction->SetActionName(strActionName);
	}

	actions.Add(cpAction.GetPointer());

	
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			TriggerContextType tempTriggerContext;
			tempTriggerContext.SpellIndex = i;
			//tempTriggerContext.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetAbilityName() != _T("Miracle"))  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				tempTriggerContext.ActionIndex = j;				

				counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
				ATLASSERT(cpAction);

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

					cpAction->SetActionName(strActionName);
				}

				actions.Add(cpAction.GetPointer());
			}		


		}		
		
}

BOOL CTriggeredMiracleAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;

	Tricks = TRUE;

	if (triggerContext.SpellIndex != 99999 && triggerContext.ActionIndex != 99999)
	{
		CCard* toCast;
		toCast = m_pCard;

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		//triggerContext.RemoveReductionCost(toCast);
	}
	else 
	{
	//	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Graveyard, TRUE);
	//	pModifier.ApplyTo(m_pCard);
		m_pCard->GetCardKeyword()->RemoveFreecast(TRUE);
		m_pCard->GetCardKeyword()->RemoveFreecast(FALSE);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredCipherCastAbility::CTriggeredCipherCastAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
//	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
//	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
//	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
}
void CTriggeredCipherCastAbility::GetSelections(CActionContainer& actions,
	CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	BOOL Tricks;
	//if (GetController()->IsComputer()) Tricks = FALSE; else Tricks = TRUE;
	Tricks = TRUE;	

	CCard* toCast;

	toCast = m_pCard;

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), m_pCard, NULL, NULL, &pContainer, ZoneId::Exile); 

	pModifier.ApplyTo(toCast);

	toCast = pContainer.GetAt(0);

	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

	TriggerContextType tempTriggerContext;//(triggerContext);
	tempTriggerContext.SpellIndex = 999999;	

	counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
	ATLASSERT(cpAction);
	if (bSetNames)
	{
		CString strActionName;
		strActionName.Format(_T("skip free cast"));

		cpAction->SetActionName(strActionName);
	}

	actions.Add(cpAction.GetPointer());

	if (toCast->GetController() != pPlayer) toCast->SetController(pPlayer);

		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{		
			TriggerContextType tempTriggerContext;
			tempTriggerContext.SpellIndex = i;
			tempTriggerContext.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(Tricks,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				tempTriggerContext.ActionIndex = j;				

				counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
				ATLASSERT(cpAction);

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s"),(pActionContainer->GetAt(j).GetPointer())->GetActionText());

					cpAction->SetActionName(strActionName);
				}

				actions.Add(cpAction.GetPointer());
			}		


		}		
		
}

BOOL CTriggeredCipherCastAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext(pAction1->GetTriggerContext());

	BOOL Tricks;
//	if (GetController()->IsComputer()) Tricks = FALSE; else Tricks = TRUE;
	Tricks = TRUE;
	CCard* toCast;
	toCast = pTriggeredPlayer->GetZoneById(ZoneId::Exile)->GetAt(pTriggeredPlayer->GetZoneById(ZoneId::Exile)->GetSize()-1);

	if (triggerContext.SpellIndex != 999999)
	{
		CCard* toCast;
		toCast = pTriggeredPlayer->GetZoneById(ZoneId::Exile)->GetAt(pTriggeredPlayer->GetZoneById(ZoneId::Exile)->GetSize()-1);

		triggerContext.PerformAction(toCast);

		toCast->GetCardKeyword()->AddFreecast(TRUE);
		triggerContext.RemoveReductionCost(toCast);
	}
	else
	{
		toCast->Move(pTriggeredPlayer->GetZoneById(ZoneId::_Tokens), pTriggeredPlayer, MoveType::Others);
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredExtraCombatAbility::CTriggeredExtraCombatAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_nAdditionalAttackCount(1)
	, m_bThisTurnOnly(TRUE)
	, m_bUntapAttackedThisTurn(FALSE)
{
	//SetOptionalIsTrick(TRUE);
}

BOOL CTriggeredExtraCombatAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const CPlayer* pCaster = pAction->GetController();
	const CMainNode* pMainNode = (CMainNode*)pCaster->GetGraph()->GetNodeById(NodeId::MainPhaseStep);
	const_cast<CMainNode*>(pMainNode)->IncreaseMaxCombatCount(m_nAdditionalAttackCount, m_bThisTurnOnly);

	if (m_bUntapAttackedThisTurn)
	{
		const CZone* pInplay = pCaster->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			const CCard* pCard = pInplay->GetAt(i);
			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				const CCreatureCard* pCreatureCard = static_cast<const CCreatureCard*>(pCard);
				if (pCreatureCard->AttackedThisTurn())
					const_cast<CCreatureCard*>(pCreatureCard)->GetOrientation()->Untap();
			}
		}
	}

	return TRUE;
}

//____________________________________________________________________________
//
CTriggeredHellkiteChargerAbility::CTriggeredHellkiteChargerAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
	//SetOptionalIsTrick(TRUE);
}

BOOL CTriggeredHellkiteChargerAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	CPlayer* pController = pAction->GetController();

	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AttackingCreatureComparer);

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(FALSE)));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));

	CFastCombatModifier pModifier2 = CFastCombatModifier(m_pGame);

	pModifier2.ApplyTo(pController);
	
	return TRUE;
}

//____________________________________________________________________________
//