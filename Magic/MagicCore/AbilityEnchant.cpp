#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CEnchantment::CEnchantment(CCard* pCard, LPCTSTR strManaCost,
						   CardComparer* pComparer)			// EnchantmentInternalType::PrimaryEnchantment
	: CSpell(pCard, AbilityType::Enchantment, strManaCost, TRUE)
	, m_bAffectControllerOnly(FALSE)
	, m_bAffectOpponentsOnly(FALSE)
	, m_bAffectPlayers(FALSE)
	, m_bDisableWhenTapped(FALSE)
	, m_bDisableWhenUntapped(FALSE)
	, m_bInEffect(FALSE)
	, m_Type(EnchantmentInternalType::PrimaryEnchantment)
	, m_pAffectThisPlayerOnly(NULL)
	, m_AffectCardsInTheseZones(ZoneId::Battlefield)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnZoneChanged))
	, m_cpCListener(VAR_NAME(m_cpCListener), CounterMovedEventSource::Listener::EventCallback(this, &CEnchantment::OnSelfCounterMoved))
	, m_cpNListener(VAR_NAME(m_cpNListener), ChangeNodeEventSource::Listener::EventCallback(this, &CEnchantment::OnNodeChanged))
	, m_cpOListener(VAR_NAME(m_cpOListener), COrientation::Listener::EventCallback(this, &CEnchantment::OnOrientationChanged))
	, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnCardZoneChanged))
	, m_cpCardOrientationListener(VAR_NAME(m_cpCardOrientationListener), COrientation::Listener::EventCallback(this, &CEnchantment::OnCardOrientationChanged))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CEnchantment::OnCardTypeChanged))
	, m_cpCounterMovedListener(VAR_NAME(m_cpCounterMovedListener), CounterMovedEventSource::Listener::EventCallback(this, &CEnchantment::OnCounterMoved))
	, m_cpCardIsAlsoAListener(VAR_NAME(m_cpCardIsAlsoAListener), CardIsAlsoAEventSource::Listener::EventCallback(this, &CEnchantment::OnCardIsAlsoAChanged))
	, m_cpActiveCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnCardZoneChangedActive))
	, m_cpActiveCardIsAlsoAListener(VAR_NAME(m_cpActiveCardIsAlsoAListener), CardIsAlsoAEventSource::Listener::EventCallback(this, &CEnchantment::OnCardIsAlsoAChangedActive))
	, m_cpChangeLifeListener(VAR_NAME(m_cpChangeLifeListener), ChangeLifeEventSource::Listener::EventCallback(this, &CEnchantment::OnLifeChanged))
	, m_bAffectByOrientation(FALSE)
	, m_bNotifyWhenControlSwitched(TRUE)
	, m_thisActivationCardFilter(new TrueCardComparer)	
	, m_SelfCounterTracking(FALSE)
	, m_ConditionWork(FALSE)
	, m_ConditionFilter(new TrueCardComparer)
	, m_ConditionValue(1)
	, m_ConditionCheckZone(ZoneId::Battlefield)
	, m_ConditionCheckPlayer(ConditionCheckPlayerType::CheckControllerOnly)
	, m_ConditionIsMaximum(FALSE)
	, m_ConditionCheckLife(FALSE)
	, m_ActiveIn(ZoneId::Battlefield)
	, m_ConditionActive(FALSE)
{
	m_EnchantmentCardFilter.AddComparer(pComparer);

	pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

CEnchantment::CEnchantment(CCard* pCard, AbilityType abilityType,	// EnchantmentInternalType::UntilEOTSpell
						   LPCTSTR strManaCost,
						   CardComparer* pComparer)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_bAffectControllerOnly(FALSE)
	, m_bAffectOpponentsOnly(FALSE)
	, m_bAffectPlayers(FALSE)
	, m_bDisableWhenTapped(FALSE)
	, m_bDisableWhenUntapped(FALSE)
	, m_bInEffect(FALSE)
	, m_Type(EnchantmentInternalType::UntilEOTSpell)
	, m_pAffectThisPlayerOnly(NULL)
	, m_AffectCardsInTheseZones(ZoneId::Battlefield)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnZoneChanged))
	, m_cpCListener(VAR_NAME(m_cpCListener), CounterMovedEventSource::Listener::EventCallback(this, &CEnchantment::OnSelfCounterMoved))
	, m_cpNListener(VAR_NAME(m_cpNListener), ChangeNodeEventSource::Listener::EventCallback(this, &CEnchantment::OnNodeChanged))
	, m_cpOListener(VAR_NAME(m_cpOListener), COrientation::Listener::EventCallback(this, &CEnchantment::OnOrientationChanged))
	, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnCardZoneChanged))
	, m_cpCardOrientationListener(VAR_NAME(m_cpCardOrientationListener), COrientation::Listener::EventCallback(this, &CEnchantment::OnCardOrientationChanged))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CEnchantment::OnCardTypeChanged))
	, m_cpCounterMovedListener(VAR_NAME(m_cpCounterMovedListener), CounterMovedEventSource::Listener::EventCallback(this, &CEnchantment::OnCounterMoved))
	, m_cpCardIsAlsoAListener(VAR_NAME(m_cpCardIsAlsoAListener), CardIsAlsoAEventSource::Listener::EventCallback(this, &CEnchantment::OnCardIsAlsoAChanged))
	, m_cpActiveCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnCardZoneChangedActive))
	, m_cpActiveCardIsAlsoAListener(VAR_NAME(m_cpActiveCardIsAlsoAListener), CardIsAlsoAEventSource::Listener::EventCallback(this, &CEnchantment::OnCardIsAlsoAChangedActive))
	, m_cpChangeLifeListener(VAR_NAME(m_cpChangeLifeListener), ChangeLifeEventSource::Listener::EventCallback(this, &CEnchantment::OnLifeChanged))
	, m_bAffectByOrientation(FALSE)
	, m_bNotifyWhenControlSwitched(TRUE)
	, m_thisActivationCardFilter(new TrueCardComparer)	
	, m_SelfCounterTracking(FALSE)
	, m_ConditionWork(FALSE)
	, m_ConditionFilter(new TrueCardComparer)
	, m_ConditionValue(1)
	, m_ConditionCheckZone(ZoneId::Battlefield)
	, m_ConditionCheckPlayer(ConditionCheckPlayerType::CheckControllerOnly)
	, m_ConditionIsMaximum(FALSE)
	, m_ConditionCheckLife(FALSE)
	, m_ActiveIn(ZoneId::Battlefield)
	, m_ConditionActive(FALSE)
{
	m_EnchantmentCardFilter.AddComparer(pComparer);
}

CEnchantment::CEnchantment(CCard* pCard,	// EnchantmentInternalType::SecondaryEnchantment
						   CardComparer* pComparer)
	: CSpell(pCard, AbilityType::Triggered, _T(""), FALSE)
	, m_bAffectControllerOnly(FALSE)
	, m_bAffectOpponentsOnly(FALSE)
	, m_bAffectPlayers(FALSE)
	, m_bDisableWhenTapped(FALSE)
	, m_bDisableWhenUntapped(FALSE)
	, m_bInEffect(FALSE)
	, m_Type(EnchantmentInternalType::SecondaryEnchantment)
	, m_pAffectThisPlayerOnly(NULL)
	, m_AffectCardsInTheseZones(ZoneId::Battlefield)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnZoneChanged))
	, m_cpCListener(VAR_NAME(m_cpCListener), CounterMovedEventSource::Listener::EventCallback(this, &CEnchantment::OnSelfCounterMoved))
	, m_cpNListener(VAR_NAME(m_cpNListener), ChangeNodeEventSource::Listener::EventCallback(this, &CEnchantment::OnNodeChanged))
	, m_cpOListener(VAR_NAME(m_cpOListener), COrientation::Listener::EventCallback(this, &CEnchantment::OnOrientationChanged))
	, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnCardZoneChanged))
	, m_cpCardOrientationListener(VAR_NAME(m_cpCardOrientationListener), COrientation::Listener::EventCallback(this, &CEnchantment::OnCardOrientationChanged))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CEnchantment::OnCardTypeChanged))
	, m_cpCounterMovedListener(VAR_NAME(m_cpCounterMovedListener), CounterMovedEventSource::Listener::EventCallback(this, &CEnchantment::OnCounterMoved))
	, m_cpCardIsAlsoAListener(VAR_NAME(m_cpCardIsAlsoAListener), CardIsAlsoAEventSource::Listener::EventCallback(this, &CEnchantment::OnCardIsAlsoAChanged))
	, m_cpActiveCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchantment::OnCardZoneChangedActive))
	, m_cpActiveCardIsAlsoAListener(VAR_NAME(m_cpActiveCardIsAlsoAListener), CardIsAlsoAEventSource::Listener::EventCallback(this, &CEnchantment::OnCardIsAlsoAChangedActive))
	, m_cpChangeLifeListener(VAR_NAME(m_cpChangeLifeListener), ChangeLifeEventSource::Listener::EventCallback(this, &CEnchantment::OnLifeChanged))
	, m_bAffectByOrientation(FALSE)
	, m_bNotifyWhenControlSwitched(TRUE)
	, m_thisActivationCardFilter(new TrueCardComparer)	
	, m_SelfCounterTracking(FALSE)
	, m_ConditionWork(FALSE)
	, m_ConditionFilter(new TrueCardComparer)
	, m_ConditionValue(1)
	, m_ConditionCheckZone(ZoneId::Battlefield)
	, m_ConditionCheckPlayer(ConditionCheckPlayerType::CheckControllerOnly)
	, m_ConditionIsMaximum(FALSE)
	, m_ConditionCheckLife(FALSE)
	, m_ActiveIn(ZoneId::Battlefield)
	, m_ConditionActive(FALSE)
{
	m_EnchantmentCardFilter.AddComparer(pComparer);

	pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

CEnchantment::~CEnchantment()
{
	if (m_pGame && m_pGame->IsRestoring())
		return;	// 5/15/06, not tested

	OnEnchantmentEndedImpl(TRUE);
}

void CEnchantment::SetToActivatedAbility()
{
	__super::SetToActivatedAbility();

	ATLASSERT(m_Type == EnchantmentInternalType::UntilEOTSpell);

	m_Type = EnchantmentInternalType::UntilEOTActivatedAbility;
}

void CEnchantment::SetDisableWhenTapped()
{
	ATLASSERT((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment));	// Not applicable to non-in-play spells
	
	m_bDisableWhenTapped = TRUE;
}

void CEnchantment::SetDisableWhenUntapped()
{
	ATLASSERT((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment));	// Not applicable to non-in-play spells
	
	m_bDisableWhenUntapped = TRUE;
}

void CEnchantment::SetAffectControllerCardsOnly()
{
	m_EnchantmentCardFilter.SetThisCardsControllerOnly(m_pCard);
}

void CEnchantment::SetAffectOpponentCardsOnly()
{
	m_EnchantmentCardFilter.SetNotThisCardsControllerOnly(m_pCard);
}

void CEnchantment::SetExceptParent()
{
	m_EnchantmentCardFilter.AddNegateComparer(new SpecificCardComparer(m_pCard));
}

void CEnchantment::SetAffectTappedOnly()
{
	m_EnchantmentCardFilter.AddComparer(new TappedComparer());

	m_bAffectByOrientation = TRUE;
}

void CEnchantment::SetAffectUntappedOnly()
{
	m_EnchantmentCardFilter.AddComparer(new UntappedComparer());

	m_bAffectByOrientation = TRUE;
}

void CEnchantment::SetAffectCardsInTheseZones(ZoneId zones)
{
	m_AffectCardsInTheseZones = zones;
}

void CEnchantment::SetEnchantmentActiveIn(ZoneId zones)
{
	m_ActiveIn = zones;
}

void CEnchantment::SetConditionCheckZone(ZoneId zones)
{
	m_ConditionCheckZone = zones;
}

void CEnchantment::SetConditionCheckPlayer(ConditionCheckPlayerType::Enum players)
{
	m_ConditionCheckPlayer = players;
}

BOOL CEnchantment::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (m_Type == EnchantmentInternalType::SecondaryEnchantment)
		return FALSE;

	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks || (m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment) || m_bAffectPlayers)
		return TRUE;

	Characteristic characteristic = GetEnchantmentCharacteristic();
	CPlayer* pController = GetController();

	// Find any constructive usage
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		if (((characteristic < Characteristic::Neutral) && (pPlayer == pController)) ||
			((characteristic > Characteristic::Neutral) && (pPlayer != pController)))
			continue;

		if (!m_EnchantmentCardFilter.IsPlayersCardsIncluded(pPlayer))
			continue;

		for (int j = 0; j < pPlayer->GetZoneCount(); ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);

			if (!(pZone->GetZoneId() & m_AffectCardsInTheseZones).Any())
					continue;

			for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
			{
				CCard* pCard = pZone->GetAt(k);

				if (IsCardAffected(pCard))
					return TRUE;
			}
		}
	}

	return FALSE;
}

CActionContainer* CEnchantment::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	if (m_Type == EnchantmentInternalType::SecondaryEnchantment)
		return NULL;

	return CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
}

BOOL CEnchantment::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	ATLASSERT(!m_bInEffect);
	ATLASSERT(m_Type != EnchantmentInternalType::SecondaryEnchantment);

	if (m_bDisableWhenTapped || m_bDisableWhenUntapped)
		m_pCard->GetOrientation()->AddListener(m_cpOListener.GetPointer());

	if (m_SelfCounterTracking)
		m_pCard->GetCounterMovedEventSource()->AddListener(m_cpCListener.GetPointer());

	if ((m_Type == EnchantmentInternalType::UntilEOTSpell) || (m_Type == EnchantmentInternalType::UntilEOTActivatedAbility))
	{
		// Spell or activated ability

		// Must use the active player's graph (e.g. cast Warrior's Resolve during an opponent's turn)
		m_pGame->GetActivePlayer()->GetGraph()->GetNodeById(NodeId::CleanupStep2)->GetChangeNodeEventSource()->AddListener(m_cpNListener.GetPointer());
	}

	if (!OnEnchantmentStartedImpl(TRUE))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

void CEnchantment::StartEnchantment()
{
	if (m_bInEffect)
		return;

	if (m_ConditionWork)
	{
		if (m_ConditionCheckLife)
		{
			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				CPlayer* pPlayer = m_pGame->GetPlayer(j);

				pPlayer->GetChangeLifeEventSource()->AddListener(m_cpChangeLifeListener.GetPointer());
			}
		}
		else
		{
			ListenToCardEventSources(m_pCard);
			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			{
				CPlayer* pPlayer = m_pGame->GetPlayer(j);

				if (!m_EnchantmentCardFilter.IsPlayersCardsIncluded(pPlayer))
					continue;

				for (int i = 0; i < pPlayer->GetZoneCount(); ++i)
				{
					CZone* pZone = pPlayer->GetZone(i);

					if (!(pZone->GetZoneId() & m_AffectCardsInTheseZones).Any() && !(pZone->GetZoneId() & m_ConditionCheckZone).Any())
					continue;

					pZone->GetCardMovedEventSource()->AddListener(m_cpActiveCardZoneListener.GetPointer());
					pZone->GetIsAlsoAEventSource()->AddListener(m_cpActiveCardIsAlsoAListener.GetPointer());
				}
			}
		}
	}

	if (m_bDisableWhenTapped || m_bDisableWhenUntapped)
		m_pCard->GetOrientation()->AddListener(m_cpOListener.GetPointer());

	if (m_SelfCounterTracking)
		m_pCard->GetCounterMovedEventSource()->AddListener(m_cpCListener.GetPointer());

	OnEnchantmentStartedImpl(TRUE);
}

void CEnchantment::EndEnchantment()
{
	if (m_bDisableWhenTapped || m_bDisableWhenUntapped)
		m_cpOListener->RemoveAllEventSources();

	if (m_SelfCounterTracking)
		m_cpCListener.GetPointer()->RemoveAllEventSources();

	if (m_ConditionWork)
	RemoveListenToCardEventSources(m_pCard);

	OnEnchantmentEndedImpl(TRUE);
}

void CEnchantment::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone)
		return;

	ATLASSERT((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment));

	if (m_Type == EnchantmentInternalType::PrimaryEnchantment || m_Type == EnchantmentInternalType::SecondaryEnchantment)
	{
		// Secondary enchantment (may or may not be in-play at this moment)
		if ((pFromZone->GetZoneId() != m_ActiveIn) && (pToZone->GetZoneId() == m_ActiveIn))
		{
			// Just moved into in-play

			StartEnchantment();
		}
		else if ((pFromZone->GetZoneId() == m_ActiveIn) && (pToZone->GetZoneId() != m_ActiveIn))
		{
			// Just left from in-play

			EndEnchantment();				
				
			if (m_ConditionWork)
			{
				m_cpActiveCardZoneListener->RemoveAllEventSources();			
				m_cpActiveCardIsAlsoAListener->RemoveAllEventSources();
				m_cpChangeLifeListener->RemoveAllEventSources();
			}
		}
		else if ((pFromZone->GetZoneId() == ZoneId::Battlefield) && 
				(pToZone->GetZoneId() == ZoneId::Battlefield) && m_ActiveIn == ZoneId::Battlefield)	// 7/31/2002, triggered by control spells
		{
			// Controlled

			ATLASSERT(pFromZone != pToZone);

			OnEnchantmentEndedImpl(m_bNotifyWhenControlSwitched);
			OnEnchantmentStartedImpl(m_bNotifyWhenControlSwitched);
		}
	}
}

void CEnchantment::OnNodeChanged(CNode* pToNode)
{
	ATLASSERT((m_Type == EnchantmentInternalType::UntilEOTSpell) || (m_Type == EnchantmentInternalType::UntilEOTActivatedAbility));
	ATLASSERT(pToNode->GetNodeId() == NodeId::CleanupStep2);

	// Until end of turn effect ends

	m_cpNListener->RemoveAllEventSources();
	OnEnchantmentEndedImpl(TRUE);
}

void CEnchantment::OnSelfCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	ATLASSERT(m_SelfCounterTracking);
	ATLASSERT((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment));

	if (m_pCard->GetZoneId() != ZoneId::Battlefield)
		return;	// Let OnZoneChanged() to handle

	if (m_bInEffect && !m_thisActivationCardFilter.IsCardIncluded(m_pCard))
	{
		// Became tapped, end enchantment effect

		m_cpAListener->RemoveAllEventSources();
		OnEnchantmentEndedImpl(TRUE);
	}
	else
		if (!m_bInEffect && m_thisActivationCardFilter.IsCardIncluded(m_pCard))
		{
			// Became untapped, start enchantment effect

			ATLASSERT(!m_bInEffect);

			m_pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
			OnEnchantmentStartedImpl(TRUE);		
		}
}

void CEnchantment::OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation)
{
	ATLASSERT(m_bDisableWhenTapped || m_bDisableWhenUntapped);
	ATLASSERT((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment));

	if (m_pCard->GetZoneId() != ZoneId::Battlefield)
		return;	// Let OnZoneChanged() to handle

	if ((fromOrientation & Orientation::Untap).Any() && (toOrientation & Orientation::Tap).Any())
	{
		// Became tapped, end enchantment effect

		m_cpAListener->RemoveAllEventSources();
		OnEnchantmentEndedImpl(TRUE);
	}
	else
		if ((fromOrientation & Orientation::Tap).Any() && (toOrientation & Orientation::Untap).Any())
		{
			// Became untapped, start enchantment effect

			ATLASSERT(!m_bInEffect);

			m_pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
			OnEnchantmentStartedImpl(TRUE);
		}
}

void CEnchantment::OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) 
{
	if (pToZone && !(pToZone->GetZoneId() & m_AffectCardsInTheseZones).Any())
	{
		// Card moved out of zone

		RemoveListenToCardEventSources(pCard);
	}
	else
	if (pFromZone && !(pFromZone->GetZoneId() & m_AffectCardsInTheseZones).Any())
	{
		// Card moved into zone

		ListenToCardEventSources(pCard);
	}
	
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else // && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}

	CheckCard(pCard); 
}

void CEnchantment::OnCardZoneChangedActive(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) 
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}
}

void CEnchantment::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType) 
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}

	CheckCard(pCard);
}

void CEnchantment::OnCardOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation)
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}

	CheckCard(pOrientation->GetCard());
}

void CEnchantment::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}

	CheckCard(pFromCard);
}

void CEnchantment::OnCardIsAlsoAChanged(CCard* pCard, CCard* pPreviousIsAlsoA, CCard* pIsAlsoA)
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}

	if (pIsAlsoA)
			CheckCard(pIsAlsoA); 
}

void CEnchantment::OnCardIsAlsoAChangedActive(CCard* pCard, CCard* pPreviousIsAlsoA, CCard* pIsAlsoA)
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}
}

void CEnchantment::OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife)
{
	if (m_ConditionWork)
	{
		if (EvaluateCondition())// && !m_ConditionActive)
			OnEnchantmentStartedImpl(TRUE);
		else// && m_ConditionActive)
			OnEnchantmentEndedImpl(TRUE);
	}
}

BOOL CEnchantment::IsCardAffected(const CCard* pCard) const
{
	if (!(pCard->GetZoneId() & m_AffectCardsInTheseZones).Any())
		return FALSE;

	if (!m_EnchantmentCardFilter.IsCardIncluded(pCard))
		return FALSE;
	
	return TRUE;
}

BOOL CEnchantment::IsPlayerAffected(const CPlayer* pPlayer) const
{
	if (!m_bAffectPlayers)
		return FALSE;

	if (m_pAffectThisPlayerOnly)
	{
		return pPlayer == m_pAffectThisPlayerOnly;
	}

	if ((m_bAffectControllerOnly && (pPlayer != GetController())) ||
		(m_bAffectOpponentsOnly && (pPlayer == GetController())))
		return FALSE;

	return TRUE;
}

void CEnchantment::ListenToCardEventSources(CCard* pCard)
{
	if (m_bAffectByOrientation)
		pCard->GetOrientation()->AddListener(m_cpCardOrientationListener.GetPointer());
	
	pCard->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());
	pCard->GetCounterMovedEventSource()->AddListener(m_cpCounterMovedListener.GetPointer());
}

void CEnchantment::RemoveListenToCardEventSources(CCard* pCard)
{
	pCard->GetCardTypeEventSource()->RemoveListener(m_cpCardTypeListener.GetPointer());
	pCard->GetCounterMovedEventSource()->RemoveListener(m_cpCounterMovedListener.GetPointer());

	if (m_bAffectByOrientation)
		pCard->GetOrientation()->RemoveListener(m_cpCardOrientationListener.GetPointer());
}

void CEnchantment::OnEnchantmentEndedImpl(BOOL bNotify)
{
	if (!m_bInEffect)
		return;

	m_bInEffect = FALSE;

	OnEnchantmentEnded(bNotify);
}

void CEnchantment::OnEnchantmentEnded(BOOL bNotify)
{
	m_cpCardZoneListener->RemoveAllEventSources();
	m_cpCardOrientationListener->RemoveAllEventSources();
	m_cpCardTypeListener->RemoveAllEventSources();
	m_cpCounterMovedListener->RemoveAllEventSources();
	m_cpCardIsAlsoAListener->RemoveAllEventSources();

	CPtrContainer<CCard> affectedCards(m_AffectedCards);
	m_AffectedCards.RemoveAll();

	CContextValueContainer affectedCardContexts(m_AffectedCardContexts);
	m_AffectedCardContexts.RemoveAll();

	CPtrContainer<CPlayer> affectedPlayers(m_AffectedPlayers);
	m_AffectedPlayers.RemoveAll();

	CContextValueContainer affectedPlayerContexts(m_AffectedPlayerContexts);
	m_AffectedPlayerContexts.RemoveAll();

	if (bNotify)
	{
		for (int j = 0; j < affectedCards.GetSize(); ++j)
			OnDisenchantCard(affectedCards[j], affectedCardContexts[j]);

		for (int j = 0; j < affectedPlayers.GetSize(); ++j)
			OnDisenchantPlayer(affectedPlayers[j], affectedPlayerContexts[j]);
	}
}

void CEnchantment::CheckCard(CCard* pCard)
{
	if (m_Type == EnchantmentInternalType::UntilEOTActivatedAbility ||
		m_Type == EnchantmentInternalType::UntilEOTSpell)
		return; // These types only affect cards at the time of casting

	if (!m_bInEffect && m_ConditionWork) return;

	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pCard == pCard1)
		{
			if (!IsCardAffected(pCard))
			{
				m_AffectedCards.Remove(pCard);
				ContextValue contextValue = m_AffectedCardContexts[j];
				m_AffectedCardContexts.RemoveAt(j);

				OnDisenchantCard(pCard, contextValue);
			}
			return;
		}
	}

	if (!IsCardAffected(pCard))
		return;

	m_AffectedCards.Add(pCard);
	m_AffectedCardContexts.Add(ContextValue());

	ContextValue contextValue;
	OnEnchantCard(pCard, contextValue);

	// Search for the card again since the card may not be affected anymore after calling OnEnchantCard

	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pCard == pCard1)
		{
			m_AffectedCardContexts.SetAt(j, contextValue);
			break;
		}
	}
}

BOOL CEnchantment::OnEnchantmentStartedImpl(BOOL bNotify)
{
	ATLASSERT(!m_bInEffect);	

	if (m_bInEffect)
	{
		if (m_ConditionWork)
		{
			if (EvaluateCondition())
			{
				//m_ConditionActive = TRUE;				
				return TRUE;
			}
			else
			{
				//m_ConditionActive = FALSE;
				m_bInEffect = FALSE;
				OnEnchantmentEndedImpl(FALSE);
			}
		}
		else
			return TRUE;
	}
	
	if (m_ConditionWork)
	{
		if (EvaluateCondition())
		{
			//m_ConditionActive = TRUE;
			m_bInEffect = TRUE;
		}
		else
		{
			//m_ConditionActive = FALSE;
			m_bInEffect = FALSE;							
		}
	}
	else
		m_bInEffect = TRUE;

	if (m_bInEffect)
		return OnEnchantmentStarted(bNotify);

	return TRUE;
}

BOOL CEnchantment::OnEnchantmentStarted(BOOL bNotify)
{
	if (m_bDisableWhenTapped && m_pCard->GetOrientation()->IsTapped())
		return TRUE;

	if (m_bDisableWhenUntapped && m_pCard->GetOrientation()->IsUntapped())
		return TRUE;

	if (m_SelfCounterTracking && !m_thisActivationCardFilter.IsCardIncluded(m_pCard))
	{		
		return TRUE;
	}
	if (m_bAffectPlayers)
		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(j);

			if (!IsPlayerAffected(pPlayer))
				continue;

			m_AffectedPlayers.Add(pPlayer);
			m_AffectedPlayerContexts.Add(ContextValue());

			ContextValue contextValue;
			if (bNotify)
				OnEnchantPlayer(pPlayer, contextValue);

			if (!m_bInEffect)
				return FALSE;

			// Search for the player just in case the player is no longer in the list

			int nIndex = m_AffectedPlayers.FindIndex(pPlayer);
			if (nIndex != -1)
				m_AffectedPlayerContexts.SetAt(nIndex, contextValue);
		}
	
	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(j);

		if (!m_EnchantmentCardFilter.IsPlayersCardsIncluded(pPlayer))
			continue;

		for (int i = 0; i < pPlayer->GetZoneCount(); ++i)
		{
            CZone* pZone = pPlayer->GetZone(i);

			if (!(pZone->GetZoneId() & m_AffectCardsInTheseZones).Any())
				continue;

			pZone->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());
			pZone->GetIsAlsoAEventSource()->AddListener(m_cpCardIsAlsoAListener.GetPointer());

			// This loop is added to take care of any new cards added to the zone after all OnEnchantCard()

			std::set<CCard*> processed;
			do
			{
				std::set<CCard*> cards;

				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					CCard* pCard = pZone->GetAt(k);
					if (!processed.count(pCard))
						cards.insert(pCard);
				}

				if (!cards.size())
					break;

				for (std::set<CCard*>::const_iterator k = cards.begin(); k != cards.end(); ++k)
				{
					CCard* pCard = *k;

					ListenToCardEventSources(pCard);

					processed.insert(pCard);

					if (IsCardAffected(pCard))
					{
						m_AffectedCards.Add(pCard);	
						m_AffectedCardContexts.Add(ContextValue());

						ContextValue contextValue;
						if (bNotify)
							OnEnchantCard(pCard, contextValue);				// Enchant existing cards

						if (!m_bInEffect)
							return FALSE;

						int nIndex = m_AffectedCards.FindIndex(pCard);
						if (nIndex != -1)
							m_AffectedCardContexts.SetAt(nIndex, contextValue);
					}
				}

			} while (true);
		}
	}	

	return TRUE;
}

bool CEnchantment::EvaluateCondition()
{
	int nCount = 0;

	if (m_ConditionCheckLife)
	{
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckControllerOnly && GetGame()->GetPlayer(ip) != m_pCard->GetController()) continue;
			if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckOpponentsOnly && GetGame()->GetPlayer(ip) == m_pCard->GetController()) continue;
			if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckEachPlayer)
			{
				if (m_ConditionIsMaximum)
				{
					if (GET_INTEGER(GetGame()->GetPlayer(ip)->GetLife()) <= m_ConditionValue)
					return true;
				}
				else
				{
					if (GET_INTEGER(GetGame()->GetPlayer(ip)->GetLife()) >= m_ConditionValue)
					return true;
				}
				continue;
			}
			nCount += GET_INTEGER(GetGame()->GetPlayer(ip)->GetLife());
		}
	}
	else
	{
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckControllerOnly && GetGame()->GetPlayer(ip) != m_pCard->GetController()) continue;
			if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckOpponentsOnly && GetGame()->GetPlayer(ip) == m_pCard->GetController()) continue;
			if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckEachPlayer)
			{
				if (m_ConditionIsMaximum)
				{
					if (m_ConditionFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(m_ConditionCheckZone)->GetCardContainer()) <= m_ConditionValue)
					return true;
				}
				else
				{
					if (m_ConditionFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(m_ConditionCheckZone)->GetCardContainer()) >= m_ConditionValue)
					return true;
				}
				continue;
			}
			nCount += m_ConditionFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(m_ConditionCheckZone)->GetCardContainer());
		}
	}

	if (m_ConditionCheckPlayer == ConditionCheckPlayerType::CheckEachPlayer) return false;
	if (m_ConditionIsMaximum)
	return (nCount <= m_ConditionValue);
	else
	return (nCount >= m_ConditionValue);
}

//____________________________________________________________________________
//
CCardTypeEnchantment::CCardTypeEnchantment(CCard* pCard, LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   CardType addCardType, CardType addCardTypeMask)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_AddCardType(addCardType)
	, m_AddCardTypeMask(addCardTypeMask)
	, m_pExcluding_Types(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);
}

CCardTypeEnchantment::CCardTypeEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   CardType addCardType, CardType addCardTypeMask)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_AddCardType(addCardType)
	, m_AddCardTypeMask(addCardTypeMask)
	, m_pExcluding_Types(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);
}

CCardTypeEnchantment::CCardTypeEnchantment(CCard* pCard,
										   CardComparer* pComparer,
										   CardType addCardType, CardType addCardTypeMask)
	: CEnchantment(pCard, pComparer)
	, m_AddCardType(addCardType)
	, m_AddCardTypeMask(addCardTypeMask)
	, m_pExcluding_Types(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);
}

void CCardTypeEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	contextValue.nValue1 = pCard->AddCardType(m_AddCardType, m_AddCardTypeMask, CardTypeEntry::Temporary);
}

void CCardTypeEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	pCard->RemoveCardType(contextValue.nValue1);
}

void CCardTypeEnchantment::CheckCard(CCard* pCard)
{	
	if (m_pExcluding_Types && !IsCardAffected(pCard) )
	{
		for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pCard == pCard1)
			return;
	}

	}
	else

	__super::CheckCard(pCard);
}

//____________________________________________________________________________
//
CCardTypeEnchantment2::CCardTypeEnchantment2(CCard* pCard, LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   CardType addCardType, CardType addCardTypeMask)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_AddCardType(addCardType)
	, m_AddCardTypeMask(addCardTypeMask)
	, m_pExcluding_Types(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);
}

CCardTypeEnchantment2::CCardTypeEnchantment2(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   CardType addCardType, CardType addCardTypeMask)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_AddCardType(addCardType)
	, m_AddCardTypeMask(addCardTypeMask)
	, m_pExcluding_Types(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);
}

CCardTypeEnchantment2::CCardTypeEnchantment2(CCard* pCard,
										   CardComparer* pComparer,
										   CardType addCardType, CardType addCardTypeMask)
	: CEnchantment(pCard, pComparer)
	, m_AddCardType(addCardType)
	, m_AddCardTypeMask(addCardTypeMask)
	, m_pExcluding_Types(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);
}

void CCardTypeEnchantment2::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	contextValue.nValue1 = pCard->AddCardType(m_AddCardType, m_AddCardTypeMask);
}

void CCardTypeEnchantment2::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	pCard->RemoveCardType(contextValue.nValue1);
}

void CCardTypeEnchantment2::CheckCard(CCard* pCard)
{	
	if (m_pExcluding_Types && !IsCardAffected(pCard) )
	{
		for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pCard == pCard1)
			return;
	}

	}
	else

	__super::CheckCard(pCard);
}

//____________________________________________________________________________
//
CIsAlsoAEnchantment::CIsAlsoAEnchantment(CCard* pCard, LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   LPCTSTR strToken,
											UINT uID)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_strToken(strToken)
	, m_uID(uID)
{
	AddAbilityTag(AbilityTag::CardChange);
}

CIsAlsoAEnchantment::CIsAlsoAEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   LPCTSTR strToken,
										UINT uID)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_strToken(strToken)
	, m_uID(uID)
{
	AddAbilityTag(AbilityTag::CardChange);
}

CIsAlsoAEnchantment::CIsAlsoAEnchantment(CCard* pCard,
										   CardComparer* pComparer,
										   LPCTSTR strToken,
										UINT uID)
	: CEnchantment(pCard, pComparer)
	, m_strToken(strToken)
	, m_uID(uID)
{
	AddAbilityTag(AbilityTag::CardChange);
}

void CIsAlsoAEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	contextValue.nValue1 = pCard->SetIsAlsoA(m_strToken, m_uID, GetController());
}

void CIsAlsoAEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)

{
	pCard->RemoveIsAlsoA(contextValue.nValue1, GetController());
}

//____________________________________________________________________________
//
CCardKeywordEnchantment::CCardKeywordEnchantment(CCard* pCard, LPCTSTR strManaCost,
										   CardComparer* pComparer)
	: CEnchantment(pCard, strManaCost, pComparer)
{
	AddAbilityTag(AbilityTag::CardChange);
	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
}

CCardKeywordEnchantment::CCardKeywordEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
										   CardComparer* pComparer)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
{
	AddAbilityTag(AbilityTag::CardChange);
	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
}

CCardKeywordEnchantment::CCardKeywordEnchantment(CCard* pCard,
										   CardComparer* pComparer)
	: CEnchantment(pCard, pComparer)
{
	AddAbilityTag(AbilityTag::CardChange);
	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
}

Characteristic CCardKeywordEnchantment::GetEnchantmentCharacteristic() const
{
	if ((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment))
		return Characteristic::Neutral;

	CardKeyword cardKeywordToAdd = m_CardKeywordModifier.GetModifier().GetToAdd();
	CardKeyword cardKeywordToRemove = m_CardKeywordModifier.GetModifier().GetToRemove();

	int nCardAttrChar = 0;
	if (cardKeywordToAdd.Any())
		if ((cardKeywordToAdd & CardKeyword::_PositiveCardKeywords).Any() &&
			!(cardKeywordToAdd & CardKeyword::_NegativeCardKeywords).Any())
			nCardAttrChar = 1;
		else
		if ((cardKeywordToAdd & CardKeyword::_NegativeCardKeywords).Any() &&
			!(cardKeywordToAdd & CardKeyword::_PositiveCardKeywords).Any())
			nCardAttrChar = -1;
	
	int nCardAttrChar1 = 0;
	if (cardKeywordToRemove.Any())
		if ((cardKeywordToRemove & CardKeyword::_PositiveCardKeywords).Any() &&
			!(cardKeywordToRemove & CardKeyword::_NegativeCardKeywords).Any())
			nCardAttrChar1 = -1;
		else
		if ((cardKeywordToRemove & CardKeyword::_NegativeCardKeywords).Any() &&
			!(cardKeywordToRemove & CardKeyword::_PositiveCardKeywords).Any())
			nCardAttrChar1 = 1;

	if (!nCardAttrChar && !nCardAttrChar1)
		return Characteristic::Neutral;

	if ((nCardAttrChar <= 0) && (nCardAttrChar1 <= 0))
		return Characteristic::Negative;

	if ((nCardAttrChar >= 0) && (nCardAttrChar1 >= 0))
		return Characteristic::Positive;

	return Characteristic::Neutral;
}

void CCardKeywordEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	m_CardKeywordModifier.ApplyTo(pCard);
}

void CCardKeywordEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	m_CardKeywordModifier.RemoveFrom(pCard);
}

//____________________________________________________________________________
//
CCreatureEnchantment::CCreatureEnchantment(CCard* pCard, LPCTSTR strManaCost,
										   CardComparer* pComparer)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_bAffectBlocking(FALSE)
	, m_bAffectAttacking(FALSE)
	, m_bListenToKeywords(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), AttackedPlayerEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnAttacked))
	, m_cpBListener(VAR_NAME(m_cpBListener), BlockedCreatureEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnBlocking))
	, m_cpCListener(VAR_NAME(m_cpCListener), CreatureTypeEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnCreatureTypeChanged))
	, m_cpCreatureKeywordListener(VAR_NAME(m_cpCreatureKeywordListener), CCreatureKeyword::Listener::EventCallback(this, &CCreatureEnchantment::OnCreatureKeywordChanged))
{
}

CCreatureEnchantment::CCreatureEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
										   CardComparer* pComparer)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_bAffectBlocking(FALSE)
	, m_bAffectAttacking(FALSE)
	, m_bListenToKeywords(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), AttackedPlayerEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnAttacked))
	, m_cpBListener(VAR_NAME(m_cpBListener), BlockedCreatureEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnBlocking))
	, m_cpCListener(VAR_NAME(m_cpCListener), CreatureTypeEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnCreatureTypeChanged))
	, m_cpCreatureKeywordListener(VAR_NAME(m_cpCreatureKeywordListener), CCreatureKeyword::Listener::EventCallback(this, &CCreatureEnchantment::OnCreatureKeywordChanged))
{
}

CCreatureEnchantment::CCreatureEnchantment(CCard* pCard,
										   CardComparer* pComparer)
	: CEnchantment(pCard, pComparer)
	, m_bAffectBlocking(FALSE)
	, m_bAffectAttacking(FALSE)
	, m_bListenToKeywords(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), AttackedPlayerEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnAttacked))
	, m_cpBListener(VAR_NAME(m_cpBListener), BlockedCreatureEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnBlocking))
	, m_cpCListener(VAR_NAME(m_cpCListener), CreatureTypeEventSource::Listener::EventCallback(this, &CCreatureEnchantment::OnCreatureTypeChanged))
	, m_cpCreatureKeywordListener(VAR_NAME(m_cpCreatureKeywordListener), CCreatureKeyword::Listener::EventCallback(this, &CCreatureEnchantment::OnCreatureKeywordChanged))
{
}

void CCreatureEnchantment::ListenToCardEventSources(CCard* pCard)
{
	__super::ListenToCardEventSources(pCard);

	if (!pCard->GetCardType().IsCreature())
		return;

	if (m_bAffectBlocking)
		((CCreatureCard*)pCard)->GetBlockedCreatureEventSource()->AddListener(m_cpBListener.GetPointer());

	if (m_bAffectAttacking)
		((CCreatureCard*)pCard)->GetAttackedPlayerEventSource()->AddListener(m_cpAListener.GetPointer());

	if (m_bListenToKeywords)
		((CCreatureCard*)pCard)->GetCreatureKeyword()->AddListener(m_cpCreatureKeywordListener.GetPointer());

	((CCreatureCard*)pCard)->GetCreatureTypeEventSource()->AddListener(m_cpCListener.GetPointer());
}

void CCreatureEnchantment::RemoveListenToCardEventSources(CCard* pCard)
{
	__super::RemoveListenToCardEventSources(pCard);

	if (!pCard->GetCardType().IsCreature())
		return;

	if (m_bAffectBlocking)
		((CCreatureCard*)pCard)->GetBlockedCreatureEventSource()->RemoveListener(m_cpBListener.GetPointer());

	if (m_bAffectAttacking)
		((CCreatureCard*)pCard)->GetAttackedPlayerEventSource()->RemoveListener(m_cpAListener.GetPointer());

	if (m_bListenToKeywords)
		((CCreatureCard*)pCard)->GetCreatureKeyword()->RemoveListener(m_cpCreatureKeywordListener.GetPointer());

	((CCreatureCard*)pCard)->GetCreatureTypeEventSource()->RemoveListener(m_cpCListener.GetPointer());
}

void CCreatureEnchantment::OnEnchantmentEnded(BOOL bNotify)
{
	__super::OnEnchantmentEnded(bNotify);

	m_cpCListener->RemoveAllEventSources();
	m_cpBListener->RemoveAllEventSources();
	m_cpAListener->RemoveAllEventSources();
	m_cpCreatureKeywordListener->RemoveAllEventSources();
}

void CCreatureEnchantment::OnAttacked(AttackSubject attacked, CCreatureCard* pCreatureCard) 
{ 
	CheckCard(pCreatureCard); 
}

void CCreatureEnchantment::OnBlocking(CCreatureCard* pCreature, CCreatureCard* pBlockedCreature, int nNewBlockingCount, int nBlockingIndex) 
{ 
	CheckCard(pCreature); 
}

void CCreatureEnchantment::OnCreatureTypeChanged(CCard* pCard) 
{ 
	CheckCard(pCard); 
}

void CCreatureEnchantment::OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword)
{ 
	CheckCard(pCreatureKeyword->GetCreatureCard()); 
}

void CCreatureEnchantment::SetToAttackingOnly()
{
	m_EnchantmentCardFilter.AddComparer(new AttackingCreatureComparer());

	m_bAffectAttacking= TRUE;
}

void CCreatureEnchantment::SetToBlockingOnly()
{
	m_EnchantmentCardFilter.AddComparer(new BlockingCreatureComparer());

	m_bAffectBlocking= TRUE;
}

void CCreatureEnchantment::SetToAttackingBlockingOnly()
{
	m_EnchantmentCardFilter.AddComparer(new AttackingBlockingCreatureComparer());

	m_bAffectAttacking = TRUE;
	m_bAffectBlocking = TRUE;
}

//____________________________________________________________________________
//
CProdExtraManaEnchantment::CProdExtraManaEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaText)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_strExtraManaText(strExtraManaText)
{
	AddAbilityTag(AbilityTag::Mana);
}

CProdExtraManaEnchantment::CProdExtraManaEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaText)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_strExtraManaText(strExtraManaText)
{
	AddAbilityTag(AbilityTag::Mana);
}

CProdExtraManaEnchantment::CProdExtraManaEnchantment(CCard* pCard,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaText)
	: CEnchantment(pCard, pComparer)
	, m_strExtraManaText(strExtraManaText)
{
	AddAbilityTag(AbilityTag::Mana);
}

void CProdExtraManaEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	for (int i = 0; i < pCard->GetAbilityCount(); ++i)
	{
		CManaProductionAbility* pManaProductionAbility = dynamic_cast<CManaProductionAbility*>(pCard->GetAbility(i));
		if (pManaProductionAbility && pManaProductionAbility->GetCost().HasTapThisCardCost(pCard))	// HACK: Not handling removal of tap cost after enchant
		{
			pManaProductionAbility->GetManaPool().AddMana(m_strExtraManaText);
		}
	}
}

void CProdExtraManaEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	for (int i = 0; i < pCard->GetAbilityCount(); ++i)
	{
		CManaProductionAbility* pManaProductionAbility = dynamic_cast<CManaProductionAbility*>(pCard->GetAbility(i));
		if (pManaProductionAbility && pManaProductionAbility->GetCost().HasTapThisCardCost(pCard))	// HACK: Not handling addition of tap cost after enchant
		{
			pManaProductionAbility->GetManaPool().RemoveMana(m_strExtraManaText, true);
		}
	}	
}

//____________________________________________________________________________
//
CConsExtraManaEnchantment::CConsExtraManaEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)	
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CConsExtraManaEnchantment::CConsExtraManaEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)	
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CConsExtraManaEnchantment::CConsExtraManaEnchantment(CCard* pCard,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, pComparer)
	, m_ExtraManaCost(strExtraManaCost)	
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

void CConsExtraManaEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->GetCost().AddIncreasedCost(m_ExtraManaCost);
	}
}

void CConsExtraManaEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->GetCost().RemoveIncreasedCost(m_ExtraManaCost);
	}
}

//____________________________________________________________________________
//
CConsAttackExtraManaEnchantment::CConsAttackExtraManaEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)	
	, m_AttackPlayerOnly(FALSE)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CConsAttackExtraManaEnchantment::CConsAttackExtraManaEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)	
	, m_AttackPlayerOnly(FALSE)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CConsAttackExtraManaEnchantment::CConsAttackExtraManaEnchantment(CCard* pCard,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, pComparer)
	, m_ExtraManaCost(strExtraManaCost)	
	, m_AttackPlayerOnly(FALSE)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

void CConsAttackExtraManaEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	if ( m_AttackPlayerOnly == TRUE)
	{
	//int n = ((CCreatureCard*)pCard)->GetAttackAbility()->GetAttackPlayerCost().GetTotal();
	((CCreatureCard*)pCard)->GetAttackAbility()->GetCost().AddOptionalManaCost(m_ExtraManaCost);
		((CCreatureCard*)pCard)->GetAttackAbility()->IncreaseAmplify();
		((CCreatureCard*)pCard)->GetAttackAbility()->GetCost().UpdateAbilityType();
//	if (n)
	//	((CCreatureCard*)pCard)->GetAttackAbility()->AddOptionalPlayerCost();
	}
	else
		((CCreatureCard*)pCard)->GetAttackAbility()->GetCost().AddIncreasedCost(m_ExtraManaCost);
}

void CConsAttackExtraManaEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	if ( m_AttackPlayerOnly == TRUE)
	{
		((CCreatureCard*)pCard)->GetAttackAbility()->GetCost().RemoveOptionalManaCost(m_ExtraManaCost);
		((CCreatureCard*)pCard)->GetAttackAbility()->DecreaseAmplify();
	}
	else
	{
		((CCreatureCard*)pCard)->GetAttackAbility()->GetCost().RemoveIncreasedCost(m_ExtraManaCost);
	}
}

//____________________________________________________________________________
//
CConsLessManaEnchantment::CConsLessManaEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)
	, m_Comparer(pComparer)
{
	//SetAffectCardsInTheseZones(ZoneId::_AllZones);
	SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Graveyard | ZoneId::Exile | ZoneId::Library); //12-Oct-2011 Less bugged but bugged anyway. It must affect only casting cards
}

CConsLessManaEnchantment::CConsLessManaEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)
	, m_Comparer(pComparer)
{
	//SetAffectCardsInTheseZones(ZoneId::_AllZones);
	SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Graveyard | ZoneId::Exile | ZoneId::Library); //12-Oct-2011 Less bugged but bugged anyway. It must affect only casting cards

}

CConsLessManaEnchantment::CConsLessManaEnchantment(CCard* pCard,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, pComparer)
	, m_ExtraManaCost(strExtraManaCost)
	, m_Comparer(pComparer)
{
	//SetAffectCardsInTheseZones(ZoneId::_AllZones);
	SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Graveyard | ZoneId::Exile | ZoneId::Library); //12-Oct-2011 Less bugged but bugged anyway. It must affect only casting cards

}

void CConsLessManaEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->GetCost().AddReductionCost(m_ExtraManaCost);
	}
}

void CConsLessManaEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->GetCost().RemoveReductionCost(m_ExtraManaCost);
	}
}

//____________________________________________________________________________
//
CCommanderCastEnchantment::CCommanderCastEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer)
	: CEnchantment(pCard, strManaCost, pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CCommanderCastEnchantment::CCommanderCastEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CCommanderCastEnchantment::CCommanderCastEnchantment(CCard* pCard,
													 CardComparer* pComparer)
	: CEnchantment(pCard, pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

void CCommanderCastEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->SetAddPlayableFromCommanderZone();
	}
}

void CCommanderCastEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->SetRemovePlayableFromCommanderZone();
	}
}

//____________________________________________________________________________
//
CPuresteelPaladinEnchantment::CPuresteelPaladinEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer)
	: CEnchantment(pCard, strManaCost, pComparer)	
	, m_Comparer(pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CPuresteelPaladinEnchantment::CPuresteelPaladinEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_Comparer(pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

CPuresteelPaladinEnchantment::CPuresteelPaladinEnchantment(CCard* pCard,
													 CardComparer* pComparer)
	: CEnchantment(pCard, pComparer)	
	, m_Comparer(pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::_AllZones);
}

void CPuresteelPaladinEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	for (int i = 0; i <pCard->GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pCard->GetAbility(i));
		if (!pEquipAbility) 
			continue;
		
		CardComparer* pComparer(pEquipAbility->GetComparer());

		counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(pCard, _T(""),
			pComparer));

		cpAbility->CloneCardModifier(pEquipAbility->GetCardModifiers());
		cpAbility->CloneCreatureModifier(pEquipAbility->GetCreatureModifiers());

		cpAbility->SetAbilityName(_T("Puresteel Palladin's ability"));

		pCard->AddAbility(cpAbility.GetPointer());

		return;
	}
}

void CPuresteelPaladinEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	CAbilityContainer spells(pCard->GetAbilities());

	for (int i = 0; i <pCard->GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(pCard->GetAbility(i));
		if (!pEquipAbility) 
			continue;
		
		if (pEquipAbility->GetAbilityName() = _T("Puresteel Palladin's ability"))
		{

			pCard->RemoveAbility(pEquipAbility);

			return;
		}
	}
}

//____________________________________________________________________________
/*//
CConsLessManaAbilityEnchantment::CConsLessManaAbilityEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)
	, m_Comparer(pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::Hand);
}

CConsLessManaAbilityEnchantment::CConsLessManaAbilityEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_ExtraManaCost(strExtraManaCost)
	, m_Comparer(pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::Hand);
}

CConsLessManaAbilityEnchantment::CConsLessManaAbilityEnchantment(CCard* pCard,
													 CardComparer* pComparer,
													 LPCTSTR strExtraManaCost)
	: CEnchantment(pCard, pComparer)
	, m_ExtraManaCost(strExtraManaCost)
	, m_Comparer(pComparer)
{
	SetAffectCardsInTheseZones(ZoneId::Hand);
	SetAffectCardsInTheseZones(ZoneId::Battlefield);
	SetAffectCardsInTheseZones(ZoneId::Graveyard);	
}

void CConsLessManaAbilityEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	CAbilityContainer spells(pCard->GetAbilities());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->GetCost().AddReductionCost(m_ExtraManaCost);
	}
}

void CConsLessManaAbilityEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	CAbilityContainer spells(pCard->GetAbilities());

	for (int i = 0; i < spells.GetSize(); ++i)
	{
		spells.GetAt(i)->GetCost().RemoveReductionCost(m_ExtraManaCost);
	}
}

//____________________________________________________________________________
//*/
CPlayExtraLandEnchantment::CPlayExtraLandEnchantment(CCard* pCard, LPCTSTR strManaCost,
													 int nAdditionalLandCount)
	: CEnchantment(pCard, strManaCost, FALSE_CARD_COMPARER)
	, m_nAdditionalLandCount(nAdditionalLandCount)
{
	SetAffectPlayers();
}

CPlayExtraLandEnchantment::CPlayExtraLandEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
													 int nAdditionalLandCount)
	: CEnchantment(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER)
	, m_nAdditionalLandCount(nAdditionalLandCount)
{
	SetAffectPlayers();
}

CPlayExtraLandEnchantment::CPlayExtraLandEnchantment(CCard* pCard,
													 int nAdditionalLandCount)
	: CEnchantment(pCard, FALSE_CARD_COMPARER)
	, m_nAdditionalLandCount(nAdditionalLandCount)
{
	SetAffectPlayers();
}

void CPlayExtraLandEnchantment::OnEnchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	CMainNode* pMainNode = (CMainNode*)(pPlayer->GetGraph()->GetNodeById(NodeId::MainPhaseStep));
	pMainNode->SetMaxLandCount(pMainNode->GetMaxLandCount() + m_nAdditionalLandCount, FALSE);
}

void CPlayExtraLandEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, const ContextValue& contextValue)
{
	CMainNode* pMainNode = (CMainNode*)(pPlayer->GetGraph()->GetNodeById(NodeId::MainPhaseStep));
	pMainNode->SetMaxLandCount(pMainNode->GetMaxLandCount() - m_nAdditionalLandCount, FALSE);
}

//____________________________________________________________________________
//
CCanBeAttackedByEnchantment::CCanBeAttackedByEnchantment(CCard* pCard, LPCTSTR strManaCost,
														 const CCardFilter* pCanBeAttackedBy)
	: CEnchantment(pCard, strManaCost, FALSE_CARD_COMPARER)
	, m_pCanBeAttackedBy(pCanBeAttackedBy)
{
	SetAffectPlayers();
}

CCanBeAttackedByEnchantment::CCanBeAttackedByEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
														 const CCardFilter* pCanBeAttackedBy)
	: CEnchantment(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER)
	, m_pCanBeAttackedBy(pCanBeAttackedBy)
{
	SetAffectPlayers();
}

CCanBeAttackedByEnchantment::CCanBeAttackedByEnchantment(CCard* pCard,
														 const CCardFilter* pCanBeAttackedBy)
	: CEnchantment(pCard, FALSE_CARD_COMPARER)
	, m_pCanBeAttackedBy(pCanBeAttackedBy)
{
	SetAffectPlayers();
}

void CCanBeAttackedByEnchantment::OnEnchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	contextValue.nValue1 = pPlayer->SetCanBeAttackedBy(m_pCanBeAttackedBy, FALSE);
}

void CCanBeAttackedByEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, const ContextValue& contextValue)
{
	pPlayer->RemoveCanBeAttackedBy(contextValue.nValue1);
}

//____________________________________________________________________________
//
CDamageRedirectionEnchantment::CDamageRedirectionEnchantment(CCard* pCard, LPCTSTR strManaCost,
															 DamageType damageType,
															 CCreatureCard* pToCreature)
	: CEnchantment(pCard, strManaCost, FALSE_CARD_COMPARER)
	, m_DamageType(damageType)
	, m_pToCreature(pToCreature)
{
	ATLASSERT(!(damageType & (DamageType::CombatDamage | DamageType::NonCombatDamage)).Any());

	AddAbilityTag(AbilityTag::DamageRedirection);

	SetAffectPlayers();
}

CDamageRedirectionEnchantment::CDamageRedirectionEnchantment(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
															 DamageType damageType,
															 CCreatureCard* pToCreature)
	: CEnchantment(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER)
	, m_DamageType(damageType)
	, m_pToCreature(pToCreature)
{
	ATLASSERT(!(damageType & ~(DamageType::CombatDamage | DamageType::NonCombatDamage)).Any());

	AddAbilityTag(AbilityTag::DamageRedirection);

	SetAffectPlayers();
}

CDamageRedirectionEnchantment::CDamageRedirectionEnchantment(CCard* pCard,
															 DamageType damageType,
															 CCreatureCard* pToCreature)
	: CEnchantment(pCard, FALSE_CARD_COMPARER)
	, m_DamageType(damageType)
	, m_pToCreature(pToCreature)
{
	ATLASSERT(!(damageType & ~(DamageType::CombatDamage | DamageType::NonCombatDamage)).Any());

	AddAbilityTag(AbilityTag::DamageRedirection);

	SetAffectPlayers();
}

void CDamageRedirectionEnchantment::OnEnchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	pPlayer->GetDamageRedirection().AddRedirection(
		CDamageRedirectionEntry(m_pToCreature, 
			Life(RedirectionType::RedirectAllDamage),
			m_DamageType));
}

void CDamageRedirectionEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, const ContextValue& contextValue)
{
	pPlayer->GetDamageRedirection().RemoveRedirection(
		CDamageRedirectionEntry(m_pToCreature, 
			Life(RedirectionType::RedirectAllDamage),
			m_DamageType));
}

//____________________________________________________________________________
//
CPlayerEffectEnchantment::CPlayerEffectEnchantment(CCard* pCard, LPCTSTR strManaCost,
											   PlayerEffectType playerEffect,
											   int nParam,
											   BOOL bAdd)
	: CEnchantment(pCard, strManaCost,FALSE_CARD_COMPARER)
	, m_PlayerEffect(playerEffect)
	, m_nParam(nParam)
	, m_bAdd(bAdd)
	, m_bMultipleEffectType(FALSE)
	, m_bSetParameterToController(FALSE)
{
	SetAffectPlayers();
}

CPlayerEffectEnchantment::CPlayerEffectEnchantment(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   PlayerEffectType playerEffect,
											   int nParam,
											   BOOL bAdd)
	: CEnchantment(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER)
	, m_PlayerEffect(playerEffect)
	, m_nParam(nParam)
	, m_bAdd(bAdd)
	, m_bMultipleEffectType(FALSE)
	, m_bSetParameterToController(FALSE)
{
	SetAffectPlayers();
}

CPlayerEffectEnchantment::CPlayerEffectEnchantment(CCard* pCard,
											   PlayerEffectType playerEffect,
											   int nParam,
											   BOOL bAdd)
	: CEnchantment(pCard,FALSE_CARD_COMPARER)
	, m_PlayerEffect(playerEffect)
	, m_nParam(nParam)
	, m_bAdd(bAdd)
	, m_bMultipleEffectType(FALSE)
	, m_bSetParameterToController(FALSE)
{
	SetAffectPlayers();
}

BOOL CPlayerEffectEnchantment::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks || m_bMultipleEffectType)
		return TRUE;

	if (m_bAdd)
	{
		if (!m_bAffectOpponentsOnly)
			if (!GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
				return TRUE;
			else
				if (m_bAffectControllerOnly)
					return FALSE;

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			if (m_pGame->GetPlayer(i) != GetController())
				if (!m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					return TRUE;

		return FALSE;	
	}

	if (!m_bAffectOpponentsOnly)
		if (GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
			return TRUE;
		else
			if (m_bAffectControllerOnly)
				return FALSE;

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		if (m_pGame->GetPlayer(i) != GetController())
			if (m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
				return TRUE;

	return FALSE;
}

CActionContainer* CPlayerEffectEnchantment::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (m_bMultipleEffectType)
		return pActionContainer;

	BOOL bTrick = TRUE;

	do
	{
		if (m_bAdd)
		{
			if (!m_bAffectOpponentsOnly)
				if (!GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					bTrick = FALSE;
				else
					if (m_bAffectControllerOnly)
						break;

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
				if (m_pGame->GetPlayer(i) != GetController())
					if (!m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					{
						bTrick = FALSE;
						break;
					}
		}
		else
		{
			if (!m_bAffectOpponentsOnly)
				if (GetController()->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					bTrick = FALSE;
				else
					if (m_bAffectControllerOnly)
						break;

			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
				if (m_pGame->GetPlayer(i) != GetController())
					if (m_pGame->GetPlayer(i)->GetPlayerEffect().HasPlayerEffect(m_PlayerEffect, m_nParam))
					{
						bTrick = FALSE;
						break;
					}
		}
	} while (false);

	if (!bTrick)
		return pActionContainer;

	if (!bIncludeTricks)
	{
		delete pActionContainer;
		return NULL;
	}

	// Set all moves to trick

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
		pActionContainer->GetAt(l)->SetTrick();

	return pActionContainer;
}

void CPlayerEffectEnchantment::OnEnchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	if (m_bSetParameterToController)
		contextValue.nValue1 = reinterpret_cast<int>(GetController());
	else
		contextValue.nValue1 = m_nParam;

	if (m_bAdd)
		pPlayer->GetPlayerEffect().AddPlayerEffect(m_PlayerEffect, FALSE, contextValue.nValue1);
	else
		pPlayer->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, FALSE, contextValue.nValue1);
}

void CPlayerEffectEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, const ContextValue& contextValue)
{
	if (!m_bAdd)
		pPlayer->GetPlayerEffect().AddPlayerEffect(m_PlayerEffect, FALSE, contextValue.nValue1);
	else
		pPlayer->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, FALSE, contextValue.nValue1);
}

//____________________________________________________________________________
//
CChgHandVisibilityEnchantment::CChgHandVisibilityEnchantment(CCard* pCard, LPCTSTR strManaCost)
	: CPlayerEffectEnchantment(pCard, strManaCost, PlayerEffectType::RevealHand)
{
	SetAffectControllerOnly();
}

void CChgHandVisibilityEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	// Computer players memorize currently visible cards in player's hand

	int nPlayerCount = m_pGame->GetPlayerCount();

	for (int i = 0; i < nPlayerCount; ++i)
	{
		CPlayer* pPlayer2 = m_pGame->GetPlayer(i);
		if (pPlayer2 == pPlayer)
			continue;

		CZone* pHand = pPlayer2->GetZoneById(ZoneId::Hand);	// Other people's hand

		for (int j = 0; j < nPlayerCount; ++j)
		{
			CPlayer* pPlayer3 = m_pGame->GetPlayer(j);
			if (pPlayer3->IsComputer() &&
				(pPlayer3 != pPlayer2))						// Everyone will memorize except the hand's owner
				for (int k = 0; k < pHand->GetSize(); ++k)
					pPlayer3->MemorizeCard(pHand->GetAt(k));
		}
	}
	
	__super::OnDisenchantPlayer(pPlayer, contextValue);
}

/* Changed to use triggered ability
//____________________________________________________________________________
//
CLifeCreditEnchantment::CLifeCreditEnchantment(CCard* pCard, LPCTSTR strManaCost,
											   Life nLifeDelta)
	: CEnchantment(pCard, strManaCost,FALSE_CARD_COMPARER)
	, m_LifeAddition(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage)
	, m_LifeRemoval(-nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage)
{
	ATLASSERT(nLifeDelta > Life(0));

	SetAffectPlayers();

	AddAbilityTag(AbilityTag::PlayerLifeChange);
}

void CLifeCreditEnchantment::OnEnchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	m_LifeAddition.ApplyTo(pPlayer);
}

void CLifeCreditEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, const ContextValue& contextValue)
{
	m_LifeRemoval.ApplyTo(pPlayer);
}
*/

//____________________________________________________________________________
//
CEnchant::CEnchant(CCard* pCard,
				   LPCTSTR strManaCost,
				   CardComparer* pComparer,
				   CTargeting* pTargeting)
	: CTargetSpell(pCard, AbilityType::Enchantment, strManaCost, pComparer, FALSE, pTargeting)
	, m_cpACardListener(VAR_NAME(m_cpACardListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchant::OnCardZoneChanged))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchant::OnZoneChanged))
	, m_cpPhaseListener(VAR_NAME(m_cpPhaseListener), CardMovementEventSource::Listener::EventCallback(this, &CEnchant::OnZoneChanged))
	, m_cpCardKeywordListener(VAR_NAME(m_cpCardKeywordListener), CCardKeyword::Listener::EventCallback(this, &CEnchant::OnCardKeywordChanged))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CEnchant::OnCardTypeChanged))
	, m_cpACardTypeListener(VAR_NAME(m_cpACardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CEnchant::OnACardTypeChanged))
	, m_cpCreatureKeywordListener(VAR_NAME(m_cpCreatureKeywordListener), CCreatureKeyword::Listener::EventCallback(this, &CEnchant::OnCreatureKeywordChanged))
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CEnchant::OnSelectionDone))
	, m_cpECListener(VAR_NAME(m_cpECListener), CNumberEventSource<int>::Listener::EventCallback(this, &CEnchant::OnEnchantCountChanged))
	, m_pOnCard(NULL)
{
	SetToZoneIfSuccess(ZoneId::Battlefield, FALSE);

	m_pCard->GetCardTypeEventSource()->AddListener(m_cpACardTypeListener.GetPointer());
}

void CEnchant::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	if (!m_pOnCard)
	{
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), ((CAbilityAction*)pAction)->GetController(), MoveType::Others);
	}

	__super::OnResolutionCompleted(pAction, bResolutionResult);
}

BOOL CEnchant::Enchant(CCard* pOnCard, CPlayer* pByPlayer, const ContextValue& contextValue)
{
	ATLASSERT(!m_pOnCard);

	// This check is now redundant because of the target checking in the base class. Also added check in OnResolutionCompleted
	/*
	if (pOnCard->GetZoneId() != ZoneId::Battlefield)
	{
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pByPlayer, MoveType::Others);

		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);

		return FALSE;
	}
	*/

	m_pOnCard = pOnCard;

	m_pOnCard->GetMovedEventSource()->AddListener(m_cpACardListener.GetPointer());
	m_pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_ContextValue = contextValue;

	m_pOnCard->GetCardKeyword()->AddListener(m_cpCardKeywordListener.GetPointer());
	m_pOnCard->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());
	m_pOnCard->GetEnchantCountEventSource()->AddListener(m_cpECListener.GetPointer());
	if (m_pOnCard->GetCardType().IsCreature())
		((CCreatureCard*)m_pOnCard.GetPointer())->GetCreatureKeyword()->AddListener(m_cpCreatureKeywordListener.GetPointer());

	BOOL bResult = OnEnchant(m_pOnCard, m_ContextValue);
	if (!bResult)
	{
		m_cpACardListener->RemoveAllEventSources();
		m_cpAListener->RemoveAllEventSources();
		m_cpCardKeywordListener->RemoveAllEventSources();
		m_cpCardTypeListener->RemoveAllEventSources();
		m_cpCreatureKeywordListener->RemoveAllEventSources();
		m_cpECListener->RemoveAllEventSources();

		CCard* pPreviousCard = m_pOnCard;
		m_pOnCard = NULL;

		ContextValue contextValue(m_ContextValue);
		m_ContextValue.Reset();

		if (m_pCard->GetZoneId() == ZoneId::Battlefield)
			m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pByPlayer, MoveType::Others);

		OnDisenchant(pPreviousCard, contextValue);

		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);

		return FALSE;
	}

	return m_pOnCard == pOnCard;
}

BOOL CEnchant::HasEnchantTarget() const
{
	ZoneId zid = GetTargeting()->GetSubjectZoneId();
	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CZone* pZone = m_pGame->GetPlayer(j)->GetZoneById(zid);
		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (pCard == m_pCard)
				continue;

			BOOL bTrick;
			if (GetTargeting()->TargetAllowed(pCard, TRUE, bTrick))
				return TRUE;
		}
	}

	return FALSE;
}

BOOL CEnchant::SelectEnchantTarget()
{
	if (m_pOnCard.GetPointer())
	{
		ATLASSERT(false);
		return FALSE;
	}

	ZoneId zid = GetTargeting()->GetSubjectZoneId();
	vector<SelectionEntry> entries;

	for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
	{
		CZone* pZone = m_pGame->GetPlayer(j)->GetZoneById(zid);
		for (int i = 0; i < pZone->GetSize(); ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (pCard == m_pCard)
				continue;

			BOOL bTrick;
			if (GetTargeting()->TargetAllowed(pCard, TRUE, bTrick))
			{
				SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
				if ((pCard->GetCardType() & CardType::Creature).Any())
					entry.strText.Format(_T("enchants %s with %s"),  ((CCreatureCard*)pCard)->GetCreatureName(TRUE), m_pCard->GetCardName());
				else
					entry.strText.Format(_T("enchants %s with %s"), pCard->GetCardName(), m_pCard->GetCardName());

				entry.cpAssociatedCard = pCard;
				entries.push_back(entry);
			}
		}
	}

	if (!entries.size())
		return FALSE;

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), GetController());

	return TRUE;
}

void CEnchant::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			Enchant(pCard, pSelectionPlayer, GetActionValue());
			return;
		}
}

void CEnchant::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	// There should be one and only one card got enchanted

	// This is needed to get the spell to move from stack to battlefield (ref: Blanchwood Armor)
	MoveSpellFromStack(pAction, TRUE);

	Enchant(pCard, pAction->GetController(), value);
}

void CEnchant::OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// Triggered when enchanted card moved from in-play to non-in-play

	if (!pFromZone || !pToZone)
		return;

	if (moveType == MoveType::Phasing)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(pFromZone->GetZoneId(), pToZone->GetZoneId(), FALSE, MoveType::Phasing);
		pModifier.ApplyTo(m_pCard);
		return;
	}

	if ((pFromZone->GetZoneId() != ZoneId::Battlefield) || (pToZone->GetZoneId() == ZoneId::Battlefield))
		return;

	ATLASSERT(m_pOnCard);
	if (!m_pOnCard)
		return;

	m_cpACardListener->RemoveAllEventSources();
	m_cpAListener->RemoveAllEventSources();
	m_cpCardKeywordListener->RemoveAllEventSources();
	m_cpCardTypeListener->RemoveAllEventSources();
	m_cpCreatureKeywordListener->RemoveAllEventSources();
	m_cpECListener->RemoveAllEventSources();

	CCard* pPreviousCard = m_pOnCard;
	m_pOnCard = NULL;

	ContextValue contextValue(m_ContextValue);
	m_ContextValue.Reset();

	ZoneId zone = m_pCard->GetZoneId();
	if (zone == ZoneId::Battlefield || zone == ZoneId::Stack)
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pByPlayer, MoveType::Others);

	OnDisenchant(pPreviousCard, contextValue);
}

void CEnchant::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// This card moved

	if (moveType == MoveType::Phasing)
	{
		if ((m_pCard->GetCardFlag()->Get() & CardFlag::PhaseFlag).Any())
		{
			if (pToZone->GetZoneId() == ZoneId::Battlefield)
			{
				CCountedCardContainer toEnchantEquip;
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CardFlagComparer(CardFlag::EquippedEnchantedOnPhaseFlag, false, m_pCard->GetInstanceID()));
				
				m_CardFilter.GetIncluded(*GetController()->GetZoneById(GetTargeting()->GetSubjectZoneId()), toEnchantEquip);
				m_CardFilter.GetIncluded(*m_pGame->GetNextPlayer(GetController())->GetZoneById(GetTargeting()->GetSubjectZoneId()), toEnchantEquip);


				if (toEnchantEquip.GetSize())
				{
					Enchant(toEnchantEquip.GetAt(0), m_pCard->GetController(), GetActionValue());
					CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
					m_CardFlagModifier.GetModifier().SetToRemove(CardFlag::EquippedEnchantedOnPhaseFlag);
					m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
					m_CardFlagModifier.GetModifier().SetRemovalData(m_pCard->GetInstanceID());
					m_CardFlagModifier.ApplyTo(toEnchantEquip.GetAt(0));
				}
				else
				{
					CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE);
					pModifier.ApplyTo(m_pCard);
				}

				m_cpPhaseListener->RemoveAllEventSources();

				return;
			}			
			else
			{
				// marking the card for enchanting it on phasing in

				if (!m_pOnCard)
					return;

				CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
				m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::EquippedEnchantedOnPhaseFlag);
				m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
				m_CardFlagModifier.GetModifier().SetAdditionData(m_pCard->GetInstanceID());
				m_CardFlagModifier.ApplyTo(m_pOnCard);

				m_pCard->GetMovedEventSource()->AddListener(m_cpPhaseListener.GetPointer());
			}
		}
		else
			return;	
	}

	if (m_pCard->GetZoneId() == ZoneId::Battlefield)
		return;

	
	ATLASSERT(m_pOnCard);
	if (!m_pOnCard)
		return;

	m_cpACardListener->RemoveAllEventSources();
	m_cpAListener->RemoveAllEventSources();
	m_cpCardKeywordListener->RemoveAllEventSources();
	m_cpCardTypeListener->RemoveAllEventSources();
	m_cpCreatureKeywordListener->RemoveAllEventSources();
	m_cpECListener->RemoveAllEventSources();

	CCard* pPreviousCard = m_pOnCard;
	m_pOnCard = NULL;

	ContextValue contextValue(m_ContextValue);
	m_ContextValue.Reset();

	ZoneId zone = pToZone->GetZoneId();
	if (zone == ZoneId::Battlefield || zone == ZoneId::Stack)
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pByPlayer, MoveType::Others);

	OnDisenchant(pPreviousCard, contextValue);
}

void CEnchant::OnEnchantedCardChanged()
{
	ZoneId zone = m_pCard->GetZoneId();

	if (zone == ZoneId::_PhasedOut)
		return;

	ATLASSERT(m_pOnCard);
	if (!m_pOnCard)
		return;

	BOOL bTrick;
	if (GetTargeting()->SubjectAllowed(m_pOnCard, TRUE, bTrick))
		return;
	if (m_pOnCard->GetCardKeyword()->HasCantBeEnchanted())
		return;

	m_cpACardListener->RemoveAllEventSources();
	m_cpAListener->RemoveAllEventSources();
	m_cpCardKeywordListener->RemoveAllEventSources();
	m_cpCardTypeListener->RemoveAllEventSources();
	m_cpCreatureKeywordListener->RemoveAllEventSources();
	m_cpECListener->RemoveAllEventSources();

	CCard* pCard = m_pOnCard;
	m_pOnCard = NULL;

	ContextValue contextValue(m_ContextValue);
	m_ContextValue.Reset();

	
	if (zone == ZoneId::Battlefield || zone == ZoneId::Stack)
		m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), NULL, MoveType::Others);

	OnDisenchant(pCard, contextValue);
}

BOOL CEnchant::OnEnchant(CCard* pCard, ContextValue_&)
{
	pCard->AddEnchant();
	return TRUE;
}

void CEnchant::OnDisenchant(CCard* pCard, const ContextValue&)
{
	pCard->RemoveEnchant();
}

/*	3/13/2001: Removed, using CPayLifeTrait instead
//____________________________________________________________________________
//
_CMischievousPoltergeistAbility::_CMischievousPoltergeistAbility(CCard* pCard,
											 Life nLifeDelta)
	: CRegenerationAbility(pCard, _T(""))
{
	SetLifeDelta(nLifeDelta);
}
	
CActionContainer* _CMischievousPoltergeistAbility::GetAbilityActions()
{
	CActionContainer* pActionContainer = CRegenerationAbility::GetAbilityActions();
	if (!pActionContainer)
		return NULL;

	CString strCostName;
	strCostName.Format(_T("Pay %d life"), m_nLifeDelta);

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CAction* pAction = pActionContainer->GetAt(l);
		pAction->SetCostName(strCostName);
	}

	return pActionContainer;
}

BOOL _CMischievousPoltergeistAbility::ConfirmTargetAndPayCost(const CAction* pAction)
{
	if (!CRegenerationAbility::ConfirmTargetAndPayCost(pAction))
		return FALSE;
	
	m_pCard->GetController()->DecreaseLife(m_pCard, m_nLifeDelta, m_bAbilityPreventable);
	return TRUE;
}
*/

//____________________________________________________________________________
//
CPwrTghAttrEnchantment::CPwrTghAttrEnchantment(CCard* pCard,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CCreatureEnchantment(pCard, strManaCost, pComparer)
	, m_PowerModifier(nPowerDelta, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
{
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CreatureChange);
}

// Modifiers are changed to OneTurnOnly, otherwise removal mechanism at EOT
// used in this class happen before temporary modifier removal(like damage).
// changed : 2/13/2011
CPwrTghAttrEnchantment::CPwrTghAttrEnchantment(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CCreatureEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_PowerModifier(nPowerDelta, TRUE) // changed FALSE to TRUE : 2/13/2011
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE) // changed FALSE to TRUE : 2/13/2011
{
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(TRUE); // changed FALSE to TRUE : 2/13/2011

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(TRUE); // changed FALSE to TRUE : 2/13/2011

	AddAbilityTag(AbilityTag::CreatureChange);
}

CPwrTghAttrEnchantment::CPwrTghAttrEnchantment(CCard* pCard,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CCreatureEnchantment(pCard, pComparer)
	, m_PowerModifier(nPowerDelta, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
{
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CreatureChange);
}

Characteristic CPwrTghAttrEnchantment::GetEnchantmentCharacteristic() const
{
	if ((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment))
		return Characteristic::Neutral;

	return CSubjectGatherer::GetPwrTghAttrCharacteristic(
		m_LifeModifier.GetLifeDelta(), m_PowerModifier.GetPowerDelta(),
		Characteristic::Neutral,
		m_CardKeywordModifier.GetModifier().GetToAdd(),
		m_CardKeywordModifier.GetModifier().GetToRemove(),
		m_CreatureKeywordModifier.GetModifier().GetToAdd(),
		m_CreatureKeywordModifier.GetModifier().GetToRemove());
}

void CPwrTghAttrEnchantment::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(pCard);
	if (pCreatureCard)
	{
		m_PowerModifier.ApplyTo(pCreatureCard);
		m_LifeModifier.ApplyTo(pCreatureCard);
		m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
	}

	m_CardKeywordModifier.ApplyTo(pCard);
	m_OtherCardModifiers.ApplyTo(pCard);
}

void CPwrTghAttrEnchantment::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	// No need to remove until EOT modifiers, since they remove themselves now
	// Check the second cons of the class for more info
	// added check : 2/13/2011
	if ((m_Type == EnchantmentInternalType::UntilEOTSpell) || (m_Type == EnchantmentInternalType::UntilEOTActivatedAbility))
		return;

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(pCard);
	if (pCreatureCard)
	{
		m_PowerModifier.RemoveFrom(pCreatureCard);
		m_LifeModifier.RemoveFrom(pCreatureCard);
		m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
	}

	m_CardKeywordModifier.RemoveFrom(pCard);
	m_OtherCardModifiers.RemoveFrom(pCard);
}

//____________________________________________________________________________
//
CPwrTghAttrEnchantmentCount::CPwrTghAttrEnchantmentCount(CCard* pCard,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CCreatureEnchantment(pCard, strManaCost, pComparer)
	, m_PowerModifier(nPowerDelta, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_cpEnchantListener(VAR_NAME(m_cpEnchantListener), 
				   CardEnchantCountEventSource::Listener::EventCallback(this, &CPwrTghAttrEnchantmentCount::OnEnchantCountChanged))
	, enchantment_count(0)
{
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CreatureChange);
}

// Modifiers are changed to OneTurnOnly, otherwise removal mechanism at EOT
// used in this class happen before temporary modifier removal(like damage).
// changed : 2/13/2011
CPwrTghAttrEnchantmentCount::CPwrTghAttrEnchantmentCount(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CCreatureEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_PowerModifier(nPowerDelta, TRUE) // changed FALSE to TRUE : 2/13/2011
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE) // changed FALSE to TRUE : 2/13/2011
	, m_cpEnchantListener(VAR_NAME(m_cpEnchantListener), 
				   CardEnchantCountEventSource::Listener::EventCallback(this, &CPwrTghAttrEnchantmentCount::OnEnchantCountChanged))
	, enchantment_count(0)
{
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(TRUE); // changed FALSE to TRUE : 2/13/2011

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(TRUE); // changed FALSE to TRUE : 2/13/2011

	AddAbilityTag(AbilityTag::CreatureChange);
}

CPwrTghAttrEnchantmentCount::CPwrTghAttrEnchantmentCount(CCard* pCard,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CCreatureEnchantment(pCard, pComparer)
	, m_PowerModifier(nPowerDelta, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_cpEnchantListener(VAR_NAME(m_cpEnchantListener), 
				   CardEnchantCountEventSource::Listener::EventCallback(this, &CPwrTghAttrEnchantmentCount::OnEnchantCountChanged))
	, enchantment_count(0)
{
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CreatureChange);
}

Characteristic CPwrTghAttrEnchantmentCount::GetEnchantmentCharacteristic() const
{
	if ((m_Type == EnchantmentInternalType::PrimaryEnchantment) || (m_Type == EnchantmentInternalType::SecondaryEnchantment))
		return Characteristic::Neutral;

	return CSubjectGatherer::GetPwrTghAttrCharacteristic(
		m_LifeModifier.GetLifeDelta(), m_PowerModifier.GetPowerDelta(),
		Characteristic::Neutral,
		m_CardKeywordModifier.GetModifier().GetToAdd(),
		m_CardKeywordModifier.GetModifier().GetToRemove(),
		m_CreatureKeywordModifier.GetModifier().GetToAdd(),
		m_CreatureKeywordModifier.GetModifier().GetToRemove());
}

void CPwrTghAttrEnchantmentCount::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardEnchantCountEventSource()->AddListener(m_cpEnchantListener.GetPointer());

	int k = m_pCard->GetEnchantCount();
	enchantment_count = k;
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	for (int i = 0; i < k; ++i)
	{

	m_PowerModifier.ApplyTo(pCreatureCard);
	m_LifeModifier.ApplyTo(pCreatureCard);
	m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
	m_CardKeywordModifier.ApplyTo(pCreatureCard);

	m_OtherCardModifiers.ApplyTo(pCreatureCard);
	}
}

void CPwrTghAttrEnchantmentCount::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	// No need to remove until EOT modifiers, since they remove themselves now
	// Check the second cons of the class for more info
	// added check : 2/13/2011

	m_cpEnchantListener->RemoveAllEventSources();

	if ((m_Type == EnchantmentInternalType::UntilEOTSpell) || (m_Type == EnchantmentInternalType::UntilEOTActivatedAbility))
		return;

	int k = enchantment_count;
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	for (int i = 0; i < k; ++i)
	{

	m_PowerModifier.RemoveFrom(pCreatureCard);
	m_LifeModifier.RemoveFrom(pCreatureCard);
	m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
	m_CardKeywordModifier.RemoveFrom(pCreatureCard);

	m_OtherCardModifiers.RemoveFrom(pCreatureCard);
	}
}
void CPwrTghAttrEnchantmentCount::OnEnchantCountChanged(CCard* pCard, int nOldEnchantCount, int nNewEnchantCount)
{
	if (pCard != m_pCard) 
		return;

	if (nOldEnchantCount > nNewEnchantCount)
	{
		int k = nOldEnchantCount - nNewEnchantCount;
		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
		enchantment_count = nNewEnchantCount;

		for (int i = 0; i < k; ++i)
		{

			m_PowerModifier.RemoveFrom(pCreatureCard);
			m_LifeModifier.RemoveFrom(pCreatureCard);
			m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
			m_CardKeywordModifier.RemoveFrom(pCreatureCard);

			m_OtherCardModifiers.RemoveFrom(pCreatureCard);
		}
	}

	if (nOldEnchantCount < nNewEnchantCount)
	{
		int k = nNewEnchantCount - nOldEnchantCount;
		enchantment_count = nNewEnchantCount;
		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

		for (int i = 0; i < k; ++i)
		{

			m_PowerModifier.ApplyTo(pCreatureCard);
			m_LifeModifier.ApplyTo(pCreatureCard);
			m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
			m_CardKeywordModifier.ApplyTo(pCreatureCard);

			m_OtherCardModifiers.ApplyTo(pCreatureCard);
		}
	}
}
//____________________________________________________________________________
//
CEquipPwrTghAttrEnchantment::CEquipPwrTghAttrEnchantment(CCard* pCard,
											   CardComparer* pComparer,
											   Power nPowerDelta, Life nLifeDelta,
											   CreatureKeyword creatureKeywordToAdd)
	: CPwrTghAttrEnchantment(pCard, pComparer, nPowerDelta, nLifeDelta, creatureKeywordToAdd)
	, m_EquipCardFilter(_T("equipped"), _T("equipped"), new EquippedOnComparer(pCard))
	, m_cpEquipListener(VAR_NAME(m_cpEquipListener), 
				   CardEquippedEventSource::Listener::EventCallback(this, &CEquipPwrTghAttrEnchantment::OnEquipped))	
{

}
void CEquipPwrTghAttrEnchantment::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) 
{
	if (!pToZone || !pFromZone) return;

	if (pToZone->GetZoneId() == ZoneId::Battlefield && pFromZone->GetZoneId() != ZoneId::Battlefield)
	{

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardEquippedEventSource()->AddListener(m_cpEquipListener.GetPointer());
	}
	else
	if (pToZone->GetZoneId() != ZoneId::Battlefield && pFromZone->GetZoneId() == ZoneId::Battlefield)
	{
		m_cpEquipListener->RemoveAllEventSources();
		EndEnchantment();
	}

}
void CEquipPwrTghAttrEnchantment::OnEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard)
{
//	if (pFromCard != m_pCard && pToCard != m_pCard)
	//	return;
	
	int count = 0;
	
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		count = count +  m_EquipCardFilter.CountIncluded(m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	}

	if (count>0)
		StartEnchantment();
	else
		EndEnchantment();

}
//____________________________________________________________________________
//
// Coat of Arms: Each creature gets +1/+1 for each other creature in play that shares a creature type with it.
//				 (For example, if there are three Goblins in play, each gets +2/+2.)
//
CPwrTghAttrEnchantment2::CPwrTghAttrEnchantment2(CCard* pCard,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer)
	: CCreatureEnchantment(pCard, strManaCost, pComparer)
	, m_cpInPlayListener(VAR_NAME(m_cpInPlayListener), CardMovementEventSource::Listener::EventCallback(this, &CPwrTghAttrEnchantment2::OnInPlayCardsChanged))
	, m_LifeModifier(Life(0), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_PowerModifier(Power(0), FALSE)
{
	AddAbilityTag(AbilityTag::CreatureChange);

	if (m_pGame)
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardMovedEventSource()->AddListener(m_cpInPlayListener.GetPointer());
}

CPwrTghAttrEnchantment2::CPwrTghAttrEnchantment2(CCard* pCard, AbilityType abilityType,
											    LPCTSTR strManaCost,
											    CardComparer* pComparer)
	: CCreatureEnchantment(pCard, abilityType, strManaCost, pComparer)
	, m_cpInPlayListener(VAR_NAME(m_cpInPlayListener), CardMovementEventSource::Listener::EventCallback(this, &CPwrTghAttrEnchantment2::OnInPlayCardsChanged))
	// Check CPwrTghAttrEnchantment for a fix for until EOT,
	// it is not applied here yet because no cards is using this cons. anyway
	, m_LifeModifier(Life(0), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_PowerModifier(Power(0), FALSE)
{
	AddAbilityTag(AbilityTag::CreatureChange);

	if (m_pGame)
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardMovedEventSource()->AddListener(m_cpInPlayListener.GetPointer());
}

CPwrTghAttrEnchantment2::CPwrTghAttrEnchantment2(CCard* pCard,
											     CardComparer* pComparer)
	: CCreatureEnchantment(pCard, pComparer)
	, m_cpInPlayListener(VAR_NAME(m_cpInPlayListener), CardMovementEventSource::Listener::EventCallback(this, &CPwrTghAttrEnchantment2::OnInPlayCardsChanged))
	, m_LifeModifier(Life(0), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_PowerModifier(Power(0), FALSE)
{
	AddAbilityTag(AbilityTag::CreatureChange);

	if (m_pGame)
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardMovedEventSource()->AddListener(m_cpInPlayListener.GetPointer());
}

Characteristic CPwrTghAttrEnchantment2::GetEnchantmentCharacteristic() const
{
	return Characteristic::Positive;
}

void CPwrTghAttrEnchantment2::CheckCard(CCard* pCard)
{
/*	CPtrContainer<CCard> affectedCards(m_AffectedCards);
	CContextValueContainer affectedCardContexts(m_AffectedCardContexts);

	for (int j = 0; j < affectedCards.GetSize(); ++j)
		if (affectedCards.GetAt(j) == pCard) OnDisenchantCard(affectedCards[j], affectedCardContexts[j]);
			

	ContextValue contextValue;
	OnEnchantCard(pCard, contextValue);*/

	OnInPlayCardsChanged(pCard, pCard->GetController()->GetZoneById(ZoneId::_Tokens), pCard->GetZone(), pCard->GetController(), MoveType::Others);
	
	__super::CheckCard(pCard);
	
}

void CPwrTghAttrEnchantment2::OnInPlayCardsChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_pCard->GetZoneId() != m_ActiveIn)
		return;

	if (!pFromZone || !pToZone)
		return;

	if ((pFromZone->GetZoneId() == ZoneId::Battlefield) && (pToZone->GetZoneId() == ZoneId::Battlefield))
		return;

	if (!(pCard->GetCardType() & CardType::Creature).Any())
		return;

	// In-play creature card changes

	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
	const CreatureType_& creatureType(pCreatureCard->GetCreatureType());

	// Adjust all existing affected creature cards

	std::set<CCreatureCard*> adjustedCreatures;
	adjustedCreatures.insert(pCreatureCard);	// Will be handled in OnEnchant() or OnDisenchant()

	do
	{
		std::set<CCreatureCard*> creatures;
		for (int i = 0; i < m_AffectedCards.GetSize(); ++i)
		{
			CCreatureCard* pCreatureCard1 = (CCreatureCard*)m_AffectedCards.GetAt(i);
			if (adjustedCreatures.count(pCreatureCard1))
				continue;	

			if (pCreatureCard1->GetCreatureType().HasCommonTypes(creatureType) ||	pCreatureCard1->GetCardKeyword()->HasChangeling() || pCreatureCard->GetCardKeyword()->HasChangeling())
				creatures.insert(pCreatureCard1);
		}

		if (!creatures.size())
			break;

		creatures.insert(pCreatureCard);

		for (std::set<CCreatureCard*>::const_iterator i = creatures.begin(); i != creatures.end(); ++i)
		{
			CCreatureCard* pCreatureCard1 = *i;
			adjustedCreatures.insert(pCreatureCard1);
			int nIndex = m_AffectedCards.FindIndex(pCreatureCard1);
			if (nIndex == -1)
				continue;

			int nCount = CountCreatures(pCreatureCard1) - 1;
			if (nCount < 0)
				nCount = 0;

			int nAdjustment = nCount - m_AffectedCardContexts[nIndex].nValue1;

			if (nAdjustment)
			{
				m_AffectedCardContexts.SetAt(nIndex, ContextValue(nCount));

				CPowerModifier powerModifier(m_PowerModifier);
				powerModifier.SetPowerDelta(Power(nAdjustment));
				powerModifier.ApplyTo(pCreatureCard1);

				CLifeModifier lifeModifier(m_LifeModifier);
				lifeModifier.SetLifeDelta(Life(nAdjustment));
				lifeModifier.ApplyTo(pCreatureCard1);

				if (!m_bInEffect)
					return;
			}
		}
	} while(true);
}

int CPwrTghAttrEnchantment2::CountCreatures(const CCard* pCard) const
{
	if (!(pCard->GetCardType() & CardType::Creature).Any())
		return 0;

	const CCreatureCard* pCreatureCard = (const CCreatureCard*)pCard;

	const CreatureType_& creatureType(pCreatureCard->GetCreatureType());
	if (!creatureType.GetSize())
		return 0;

	int nCount = 0;

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int j = 0; j < pInplay->GetSize(); ++j)
		{
			CCard* pCard1 = pInplay->GetAt(j);

			if (!(pCard1->GetCardType() & CardType::Creature).Any())
				continue;

			CCreatureCard* pCreatureCard1 = (CCreatureCard*)pCard1;

			if (creatureType.HasCommonTypes(pCreatureCard1->GetCreatureType()) || pCard->GetCardKeyword()->HasChangeling() ||
				pCard1->GetCardKeyword()->HasChangeling())
				++nCount;
		}
	}

	return nCount;
}

void CPwrTghAttrEnchantment2::OnEnchantCard(CCard* pCard, ContextValue& contextValue)
{
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	contextValue.nValue1 = CountCreatures(pCard) - 1;
	if (contextValue.nValue1 < 0)
		contextValue.nValue1 = 0;
	else
	{
		CPowerModifier powerModifier(m_PowerModifier);
		powerModifier.SetPowerDelta(Power(contextValue.nValue1));
		powerModifier.ApplyTo(pCreatureCard);

		CLifeModifier lifeModifier(m_LifeModifier);
		lifeModifier.SetLifeDelta(Life(contextValue.nValue1));
		lifeModifier.ApplyTo(pCreatureCard);
	}
}

void CPwrTghAttrEnchantment2::OnDisenchantCard(CCard* pCard, const ContextValue& contextValue)
{
	if (!contextValue.nValue1)
		return;

	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	CPowerModifier powerModifier(m_PowerModifier);
	powerModifier.SetPowerDelta(Power(contextValue.nValue1));
	powerModifier.RemoveFrom(pCreatureCard);

	CLifeModifier lifeModifier(m_LifeModifier);
	lifeModifier.SetLifeDelta(Life(contextValue.nValue1));
	lifeModifier.RemoveFrom(pCreatureCard);
}

//____________________________________________________________________________
//
CChgPwrTghAttrEnchant::CChgPwrTghAttrEnchant(CCard* pCard,
											 LPCTSTR strManaCost,
											 Power nPowerDelta, Life nLifeDelta,
											 CreatureKeyword creatureKeywordToAdd)
	: CEnchant(pCard, strManaCost, new AnyCreatureComparer, new CMyTargeting)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_PowerModifier(nPowerDelta, FALSE)
{
	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta), GET_INTEGER(nPowerDelta)));

	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CreatureChange);
}

CActionContainer* CChgPwrTghAttrEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CEnchant::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	ATLASSERT(!GetCost().GetExtraManaCost());

	if (bSetNames)
	{
		CPlayer* pController = GetController();

		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			// 8/25/2001: Enchant cards should have single targetGroup		

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCreatureCard* pCard = (const CCreatureCard*)targetGroup.GetFirstCardSubject();

			Life nLifeDelta(targetGroup.GetValue(pCard).nValue1);
			Power nPowerDelta(targetGroup.GetValue(pCard).nValue2);

			m_LifeModifier.SetLifeDelta(nLifeDelta);
			m_PowerModifier.SetPowerDelta(nPowerDelta);

			CString strActionName1(
				GetCreatureGainString(pCard, &m_PowerModifier, &m_LifeModifier, &m_CreatureKeywordModifier, &m_CardKeywordModifier));

			if (!strActionName1.IsEmpty())
			{
				CString strActionName;
				strActionName.AppendFormat(_T(" (%s)"), strActionName1);
				pAction->AppendToActionName(strActionName);
			}
		}
	}

	return pActionContainer;
}

BOOL CChgPwrTghAttrEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)
{
	__super::OnEnchant(pCard, contextValue);

	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	if (Power(contextValue.nValue2) != Power(0))
	{
		CPowerModifier modifier(m_PowerModifier);
		modifier.SetPowerDelta(Power(contextValue.nValue2));
		modifier.ApplyTo(pCreatureCard);
	}

	if (Life(contextValue.nValue1) != Life(0))
	{
		CLifeModifier modifier(m_LifeModifier);
		modifier.SetLifeDelta(Life(contextValue.nValue1));
		modifier.ApplyTo(pCreatureCard);
	}

	m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
	m_CardKeywordModifier.ApplyTo(pCreatureCard);
	m_CreatureModifiers.ApplyTo(pCreatureCard);

	return TRUE;
}

void CChgPwrTghAttrEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	if (Power(contextValue.nValue2) != Power(0))
	{
		CPowerModifier modifier(m_PowerModifier);
		modifier.SetPowerDelta(Power(contextValue.nValue2));
		modifier.RemoveFrom(pCreatureCard);
	}

	if (Life(contextValue.nValue1) != Life(0))
	{
		CLifeModifier modifier(m_LifeModifier);
		modifier.SetLifeDelta(Life(contextValue.nValue1));
		modifier.RemoveFrom(pCreatureCard);
	}

	m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
	m_CardKeywordModifier.RemoveFrom(pCreatureCard);
	m_CreatureModifiers.RemoveFrom(pCreatureCard);

	__super::OnDisenchant(pCard, contextValue);
}

//____________________________________________________________________________
//
CCardKeywordEnchant::CCardKeywordEnchant(CCard* pCard,
											 LPCTSTR strManaCost,
											 CardComparer* pComparer,
											 CardKeyword cardKeywordToAdd)
	: CEnchant(pCard, strManaCost, pComparer, new CMyTargeting)
{
	m_CardKeywordModifier.GetModifier().SetToAdd(cardKeywordToAdd);
	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CardChange);
}

CActionContainer* CCardKeywordEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CEnchant::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	ATLASSERT(!GetCost().GetExtraManaCost());

	if (bSetNames)
	{
		CPlayer* pController = GetController();

		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			// 8/25/2001: Enchant cards should have single targetGroup		

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCard* pCard = targetGroup.GetFirstCardSubject();

			CString strActionName;

			if (m_CardKeywordModifier.GetModifier().GetToAdd().Any() || 
				m_CardKeywordModifier.GetModifier().GetToRemove().Any())
			{
				if (!strActionName.IsEmpty())
					strActionName += _T(", ");

				CString strTemp;
				if (m_CardKeywordModifier.GetModifier().GetToAdd().Any())
				{
					strTemp = _T("gains ") + m_CardKeywordModifier.GetModifier().GetToAdd().ToString();
				}

				if (m_CardKeywordModifier.GetModifier().GetToRemove().Any())
				{
					if (!strTemp.IsEmpty())
						strTemp += _T(" and ");
					strTemp += _T("removes ") + 
						m_CardKeywordModifier.GetModifier().GetToRemove().ToString();
				}

				strActionName += strTemp;

				if (m_CardKeywordModifier.GetModifier().GetOneTurnOnly())
					strActionName += _T(" until end of turn");
			}

			if (!strActionName.IsEmpty())
			{
				CString strTemp;
				strTemp.AppendFormat(_T(" (%s)"),
					strActionName);
				strActionName = strTemp;
			}

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CCardKeywordEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)
{
	m_CardKeywordModifier.ApplyTo(pCard);

	return __super::OnEnchant(pCard, contextValue);
}

void CCardKeywordEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	m_CardKeywordModifier.RemoveFrom(pCard);

	__super::OnDisenchant(pCard, contextValue);
}

//____________________________________________________________________________
//
/*
	Card
	+------------+
	|   Ability  |
	|   Enchant  |->+
	|            |  |
	|            |  v listen to
	|            |  |
	| Zone Src.  |<-+
	|            |  |
	+------------+  |
    Card            |
	+------------+  v
	|   Target   |  |
	|   Card     |  | listen to
	|            |  |
	| Added Abil.|->+
	|            |  |
	| Zone Src.  |<-+
	|            |  
	+------------+  
*/
CAbilityEnchant::CAbilityEnchant(CCard* pCard,
								 LPCTSTR strManaCost,
								 CardComparer* pComparer,
								 CreateAbilityCallback createAbilityCallback,
								 AdditionType additionType,
								 PostEnchantCallback postEnchantCallback,
								 CTargeting* pTargeting)
	: CEnchant(pCard, strManaCost, pComparer, pTargeting)
	, m_CreateAbilityCallback(createAbilityCallback)
	, m_PostEnchantCallback(postEnchantCallback)
	, m_AdditionType(additionType)
{
	ATLASSERT(!m_CreateAbilityCallback.empty());
}

CActionContainer* CAbilityEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CEnchant::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	ATLASSERT(!m_cpInternalAbility);

	if (bSetNames)
		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCard* pCard = targetGroup.GetFirstCardSubject();

			CString strActionName;
			strActionName.Format(_T(" and enchants %s"), pCard->GetCardName());
			
			pAction->AppendToActionName(strActionName);
		}

	return pActionContainer;
}

void CAbilityEnchant::AddAbilityToCard(CCard* pOnCard, CAbility* pAbility)
{
	m_cpInternalAbility = counted_ptr<CAbility>(pAbility);

	if (m_AdditionType == AdditionType::ToEnchantedCard)
		pOnCard->AddAbility(pAbility);
	else
		m_pCard->AddAbility(pAbility);
}

BOOL CAbilityEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)
{
	ATLASSERT(!m_cpInternalAbility);

	// Added decision to handle ability granting enchantments : 2/15/2011
	if (m_AdditionType == AdditionType::ToEnchantedCard)
		m_cpInternalAbility = m_CreateAbilityCallback(
			pCard, pCard,
			contextValue);
	else
		m_cpInternalAbility = m_CreateAbilityCallback(
			pCard, m_pCard,
			contextValue);
	
	if (!m_cpInternalAbility)
		return FALSE;

	m_cpInternalAbility->DefineGameClassID();

	AddAbilityToCard(pCard, m_cpInternalAbility.GetPointer());

	if (!m_PostEnchantCallback.empty())
		m_PostEnchantCallback(m_cpInternalAbility.GetPointer());

	return __super::OnEnchant(pCard, contextValue);
}

void CAbilityEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	ATLASSERT(m_cpInternalAbility);
	if (m_cpInternalAbility)
	{
		if (m_AdditionType == AdditionType::ToEnchantedCard)
			pCard->RemoveAbility(m_cpInternalAbility.GetPointer());
		else
			m_pCard->RemoveAbility(m_cpInternalAbility.GetPointer());

		m_cpInternalAbility = NULL;
	}

	__super::OnDisenchant(pCard, contextValue);
}

//____________________________________________________________________________
//
CControlEnchant::CControlEnchant(CCard* pCard, LPCTSTR strManaCost,
								 CardComparer* pComparer)
	: CEnchant(pCard, strManaCost, pComparer)
	, m_bUntapTargetOnEnchant(FALSE)
	, m_WhenTargetIsInThisZone(ZoneId::Null)
	, m_MoveTargetToThisZone(ZoneId::Null)
	, m_bOwnersZone(FALSE)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CControlEnchant::OnZoneChanged))
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
}

void CControlEnchant::SetMoveTargetToOnDisenchant(ZoneId uWhenTargetIsInThisZone, ZoneId uMoveTargetToThisZone, BOOL bOwnersZone)
{
	m_WhenTargetIsInThisZone = uWhenTargetIsInThisZone;
	m_MoveTargetToThisZone = uMoveTargetToThisZone;
	m_bOwnersZone = bOwnersZone;
}

CActionContainer* CControlEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CEnchant::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (bSetNames)
	{
		CPlayer* pController = GetController();

		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			// 8/25/2001: Enchant cards should have single targetGroup		

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCard* pCard = targetGroup.GetFirstCardSubject();
		
			CString strActionName;
			strActionName.Format(_T(" and gains control of %s"), pCard->GetCardName());
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CControlEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)		// Ref: CTargetControlSpell
{
	CPlayer* pCaster = GetController();
	CZone* pInplay = pCaster->GetZoneById(ZoneId::Battlefield);

	pCard->GetControlStack()->AddControl(pCard->GetController(), m_pCard);

	if (pCard->GetZone() != pInplay)
		pCard->Move(pInplay, pCaster, MoveType::Others);

	if (m_bUntapTargetOnEnchant && 
		(pCard->GetZone() == pInplay) &&
		(m_pOnCard == pCard) &&
		pCard->GetOrientation()->IsTapped())
		pCard->GetOrientation()->Untap();
	
	m_pCard->GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
		
	return __super::OnEnchant(pCard, contextValue);
}

void CControlEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	if (pCard->GetGoingToZone())
	{
		// We don't want to change the destination of a card if it is already going to a zone

		pCard->GetControlStack()->RemoveControl(m_pCard);
	
		if (m_WhenTargetIsInThisZone.Any() &&
			(pCard->GetGoingToZone()->GetZoneId() == m_WhenTargetIsInThisZone))
		{
			CZone* pNewToZone;
			if (m_bOwnersZone)
				pNewToZone = pCard->GetOwner()->GetZoneById(m_MoveTargetToThisZone);
			else
				pNewToZone = pCard->GetGoingToZone()->GetPlayer()->GetZoneById(m_MoveTargetToThisZone);

			pCard->SetGoingToZone(pNewToZone);
		}

		__super::OnDisenchant(pCard, contextValue);
	
		return;
	}

	CPlayer* pPreviousController = pCard->GetControlStack()->RemoveControl(m_pCard);
	if (pPreviousController) {
		CZone* pInplay = pPreviousController->GetZoneById(ZoneId::Battlefield);
		if (pCard->GetZone() != pInplay)
			pCard->Move(pInplay, GetController(), MoveType::Others);
  }

	m_pCard->GetMovedEventSource()->RemoveListener(m_cpAListener.GetPointer());

	__super::OnDisenchant(pCard, contextValue);
}

void CControlEnchant::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	// This card moved

	__super::OnZoneChanged(pCard, pFromZone, pToZone, pByPlayer, moveType);

	ATLASSERT(m_pOnCard);
	if (!m_pOnCard)
		return;

	if (pFromZone != pToZone
		&& pFromZone->GetZoneId() == ZoneId::Battlefield
		&& pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		// Move this card to new controller, if controlling card itself changed controller
		// and it was the last control effect on the enchanted card
		if (m_pOnCard->GetControlStack()->UpdateControl(GetController(), m_pCard))
			m_pOnCard->Move(pToZone, pByPlayer, MoveType::Others);
	}
}

//____________________________________________________________________________
//
CControlPumpEnchant::CControlPumpEnchant(CCard* pCard, LPCTSTR strManaCost,
								 CardComparer* pComparer,
								 Power nPowerDelta, Life nLifeDelta,
								 CardKeyword cardKeywordToAdd,
								 CreatureKeyword creatureKeywordToAdd)
	: CControlEnchant(pCard, strManaCost, pComparer)
	, m_PowerModifier(nPowerDelta, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
{
	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
	m_CardKeywordModifier.GetModifier().SetToAdd(cardKeywordToAdd);

	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
}

BOOL CControlPumpEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)		// Ref: CTargetControlSpell
{
	m_CardKeywordModifier.ApplyTo(pCard);

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(pCard);
	if (pCreatureCard)
	{
		m_PowerModifier.ApplyTo(pCreatureCard);
		m_LifeModifier.ApplyTo(pCreatureCard);
		m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
	}

	return __super::OnEnchant(pCard, contextValue);
}

void CControlPumpEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	__super::OnDisenchant(pCard, contextValue);

	m_CardKeywordModifier.RemoveFrom(pCard);

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(pCard);
	if (pCreatureCard)
	{
		m_PowerModifier.RemoveFrom(pCreatureCard);
		m_LifeModifier.RemoveFrom(pCreatureCard);
		m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
	}
}

//____________________________________________________________________________
//
CCardTypeEnchant::CCardTypeEnchant(CCard* pCard, LPCTSTR strManaCost,
								   CardComparer* pComparer)
	: CEnchant(pCard, strManaCost, pComparer)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CCardTypeEnchant::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::CardChange);
}

void CCardTypeEnchant::AddCardTypeToAdd(CardType cardTypeToAdd, CardType mask, LPCTSTR strName)
{
	CardTypeAddition addition;
	addition.cardTypeToAdd = cardTypeToAdd;
	addition.mask = mask;
	addition.strName = strName;

	m_CardTypesToAdd.push_back(addition);
}

CActionContainer* CCardTypeEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (bSetNames)
		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCard* pCard = targetGroup.GetFirstCardSubject();
		
			CString strActionName;
			strActionName.Format(_T(" and enchants %s"), pCard->GetCardName());
			pAction->AppendToActionName(strActionName);
		}

	return pActionContainer;
}

BOOL CCardTypeEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)		// Ref: CTargetControlSpell
{
	if (m_CardTypesToAdd.size() == 1)
	{
		contextValue.nValue1 = pCard->AddCardType(m_CardTypesToAdd[0].cardTypeToAdd, m_CardTypesToAdd[0].mask, CardTypeEntry::Temporary);

		return __super::OnEnchant(pCard, contextValue);
	}

	vector<SelectionEntry> entries;
	
	for (unsigned i = 0; i < m_CardTypesToAdd.size(); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = i;
		entry.strText.Format(_T("changes card type to %s"), m_CardTypesToAdd[i].strName);
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}

	//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
		GetCard(),
		GetController(),
		(DWORD)pCard);

	return __super::OnEnchant(pCard, contextValue);
}

void CCardTypeEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	pCard->RemoveCardType(contextValue.nValue1);

	__super::OnDisenchant(pCard, contextValue);
}

void CCardTypeEnchant::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{	
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			ChangeCardTypeImpl((CCard*)dwContext1, it->dwContext);
			break;
		}
}

void CCardTypeEnchant::ChangeCardTypeImpl(CCard* pCard, unsigned nSelectedCardTypeIndex)
{
	m_ContextValue.nValue1 = pCard->AddCardType(m_CardTypesToAdd[nSelectedCardTypeIndex].cardTypeToAdd, m_CardTypesToAdd[nSelectedCardTypeIndex].mask, CardTypeEntry::Temporary);
}

//____________________________________________________________________________
//
CIsAlsoAEnchant::CIsAlsoAEnchant(CCard* pCard,
								 LPCTSTR strManaCost,
								 CardComparer* pComparer,
								 LPCTSTR strToken,
								 UINT uID)
	: CEnchant(pCard, strManaCost, pComparer)
	, m_strToken(strToken)
	, m_uID(uID)
	, m_WhenTargetIsInThisZone(ZoneId::Null)
	, m_MoveTargetToThisZone(ZoneId::Null)
	, m_bOwnersZone(FALSE)
{
	AddAbilityTag(AbilityTag::CardChange);	
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}
void CIsAlsoAEnchant::SetMoveTargetToOnDisenchant(ZoneId uWhenTargetIsInThisZone, ZoneId uMoveTargetToThisZone, BOOL bOwnersZone)
{
	m_WhenTargetIsInThisZone = uWhenTargetIsInThisZone;
	m_MoveTargetToThisZone = uMoveTargetToThisZone;
	m_bOwnersZone = bOwnersZone;
}

CActionContainer* CIsAlsoAEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CEnchant::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (bSetNames)
		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCard* pCard = targetGroup.GetFirstCardSubject();

			CString strActionName;
			strActionName.Format(_T(" and enchants %s"), pCard->GetCardName());
			
			pAction->AppendToActionName(strActionName);
		}

	return pActionContainer;
}

BOOL CIsAlsoAEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)
{

	contextValue.nValue1 = pCard->SetIsAlsoA(m_strToken, m_uID, GetController());

	return __super::OnEnchant(pCard, contextValue);
}

void CIsAlsoAEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	if (pCard->GetGoingToZone())
	{
		// We don't want to change the destination of a card if it is already going to a zone
	
		if (m_WhenTargetIsInThisZone.Any() &&
			(pCard->GetGoingToZone()->GetZoneId() == m_WhenTargetIsInThisZone))
		{
			CZone* pNewToZone;
			if (m_bOwnersZone)
				pNewToZone = pCard->GetOwner()->GetZoneById(m_MoveTargetToThisZone);
			else
				pNewToZone = pCard->GetGoingToZone()->GetPlayer()->GetZoneById(m_MoveTargetToThisZone);

			pCard->SetGoingToZone(pNewToZone);
		}

		__super::OnDisenchant(pCard, contextValue);
	
		return;
	}

	pCard->RemoveIsAlsoA(contextValue.nValue1, GetController());

	__super::OnDisenchant(pCard, contextValue);
}
//____________________________________________________________________________
//
CDoubleChgPwrTghAttrEnchant::CDoubleChgPwrTghAttrEnchant(CCard* pCard,
														LPCTSTR strManaCost,
														Power nPowerDelta, Life nLifeDelta,
														CreatureKeyword creatureKeywordToAdd, CardType n_Var1CardFilter,
														Power nPowerDelta1, Life nLifeDelta1,
														CreatureKeyword creatureKeywordToAdd1, CardType n_Var2CardFilter
														)
	: CEnchant(pCard, strManaCost, new AnyCreatureComparer, new CMyTargeting)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_PowerModifier(nPowerDelta, FALSE)
	, m_LifeModifier1(nLifeDelta1, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE)
	, m_PowerModifier1(nPowerDelta1, FALSE)
	, m_Var1CardFilter(n_Var1CardFilter)
	, m_Var2CardFilter(n_Var2CardFilter)
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CDoubleChgPwrTghAttrEnchant::OnCardTypeChanged))
{
	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta), GET_INTEGER(nPowerDelta)));

	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(FALSE);

	m_CreatureKeywordModifier1.GetModifier().SetToAdd(creatureKeywordToAdd1);
	m_CreatureKeywordModifier1.GetModifier().SetOneTurnOnly(FALSE);

	m_CardKeywordModifier1.GetModifier().SetOneTurnOnly(FALSE);

	AddAbilityTag(AbilityTag::CreatureChange);
}

CActionContainer* CDoubleChgPwrTghAttrEnchant::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CEnchant::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	ATLASSERT(!GetCost().GetExtraManaCost());

	if (bSetNames)
	{
		CPlayer* pController = GetController();

		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
			CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			// 8/25/2001: Enchant cards should have single targetGroup		

			ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

			const CCreatureCard* pCard = (const CCreatureCard*)targetGroup.GetFirstCardSubject();

			Life nLifeDelta(targetGroup.GetValue(pCard).nValue1);
			Power nPowerDelta(targetGroup.GetValue(pCard).nValue2);

			m_LifeModifier.SetLifeDelta(nLifeDelta);
			m_PowerModifier.SetPowerDelta(nPowerDelta);

			CString strActionName1(
				GetCreatureGainString(pCard, &m_PowerModifier, &m_LifeModifier, &m_CreatureKeywordModifier, &m_CardKeywordModifier));

			if (!strActionName1.IsEmpty())
			{
				CString strActionName;
				strActionName.AppendFormat(_T(" (%s)"), strActionName1);
				pAction->AppendToActionName(strActionName);
			}
		}
	}

	return pActionContainer;
}

BOOL CDoubleChgPwrTghAttrEnchant::OnEnchant(CCard* pCard, ContextValue_& contextValue)
{
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	/*if (Power(contextValue.nValue2) != Power(0))
	{
		CPowerModifier modifier(m_PowerModifier);
		modifier.SetPowerDelta(Power(contextValue.nValue2));
		modifier.ApplyTo(pCreatureCard);
	}

	if (Life(contextValue.nValue1) != Life(0))
	{
		CLifeModifier modifier(m_LifeModifier);
		modifier.SetLifeDelta(Life(contextValue.nValue1));
		modifier.ApplyTo(pCreatureCard);
	}

	m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
	m_CardKeywordModifier.ApplyTo(pCreatureCard);*/

	pCard->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());

	if ((pCreatureCard->GetCardType() & m_Var1CardFilter).Any())
	{
		m_LifeModifier.ApplyTo(pCreatureCard);
		m_PowerModifier.ApplyTo(pCreatureCard);
		m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
		m_CardKeywordModifier.ApplyTo(pCreatureCard);
	}

	if ((pCreatureCard->GetCardType() & m_Var2CardFilter).Any())
	{
		m_LifeModifier1.ApplyTo(pCreatureCard);
		m_PowerModifier1.ApplyTo(pCreatureCard);
		m_CreatureKeywordModifier1.ApplyTo(pCreatureCard);
		m_CardKeywordModifier1.ApplyTo(pCreatureCard);
	}


	return __super::OnEnchant(pCard, contextValue);
}

void CDoubleChgPwrTghAttrEnchant::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

/*	if (Power(contextValue.nValue2) != Power(0))
	{
		CPowerModifier modifier(m_PowerModifier);
		modifier.SetPowerDelta(Power(contextValue.nValue2));
		modifier.RemoveFrom(pCreatureCard);
	}

	if (Life(contextValue.nValue1) != Life(0))
	{
		CLifeModifier modifier(m_LifeModifier);
		modifier.SetLifeDelta(Life(contextValue.nValue1));
		modifier.RemoveFrom(pCreatureCard);
	}

	m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
	m_CardKeywordModifier.RemoveFrom(pCreatureCard);*/

	if ((pCreatureCard->GetCardType() & m_Var1CardFilter).Any())
	{
		m_LifeModifier.RemoveFrom(pCreatureCard);
		m_PowerModifier.RemoveFrom(pCreatureCard);
		m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
		m_CardKeywordModifier.RemoveFrom(pCreatureCard);
	}

	if ((pCreatureCard->GetCardType() & m_Var2CardFilter).Any())
	{
		m_LifeModifier1.RemoveFrom(pCreatureCard);
		m_PowerModifier1.RemoveFrom(pCreatureCard);
		m_CreatureKeywordModifier1.RemoveFrom(pCreatureCard);
		m_CardKeywordModifier1.RemoveFrom(pCreatureCard);
	}

	pCard->GetCardTypeEventSource()->RemoveListener(m_cpCardTypeListener.GetPointer());

	__super::OnDisenchant(pCard, contextValue);
}
void CDoubleChgPwrTghAttrEnchant::CheckCard(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (pCard->GetCardType().IsCreature())
	{
		CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;		

		if ( !(fromCardType & m_Var1CardFilter).Any() &&  (toCardType & m_Var1CardFilter).Any())
		{
			m_LifeModifier.ApplyTo(pCreatureCard);
			m_PowerModifier.ApplyTo(pCreatureCard);
			m_CreatureKeywordModifier.ApplyTo(pCreatureCard);
			m_CardKeywordModifier.ApplyTo(pCreatureCard);
		}
		
		if ( (fromCardType & m_Var1CardFilter).Any() &&  !(toCardType & m_Var1CardFilter).Any())
		{
			m_LifeModifier.RemoveFrom(pCreatureCard);
			m_PowerModifier.RemoveFrom(pCreatureCard);
			m_CreatureKeywordModifier.RemoveFrom(pCreatureCard);
			m_CardKeywordModifier.RemoveFrom(pCreatureCard);
		}

		if ( !(fromCardType & m_Var2CardFilter).Any() &&  (toCardType & m_Var2CardFilter).Any())
		{
			m_LifeModifier1.ApplyTo(pCreatureCard);
			m_PowerModifier1.ApplyTo(pCreatureCard);
			m_CreatureKeywordModifier1.ApplyTo(pCreatureCard);
			m_CardKeywordModifier1.ApplyTo(pCreatureCard);
		}
		if ( (fromCardType & m_Var2CardFilter).Any() &&  !(toCardType & m_Var2CardFilter).Any())
		{
			m_LifeModifier1.RemoveFrom(pCreatureCard);
			m_PowerModifier1.RemoveFrom(pCreatureCard);
			m_CreatureKeywordModifier1.RemoveFrom(pCreatureCard);
			m_CardKeywordModifier1.RemoveFrom(pCreatureCard);
		}
	}
}

//____________________________________________________________________________
//
CPlayerHandEnchantment:: CPlayerHandEnchantment(CCard* pCard, LPCTSTR strManaCost,
											   int nParam)
	: CEnchantment(pCard, strManaCost,FALSE_CARD_COMPARER)
	, m_nParam(nParam)
{
	SetAffectPlayers();
}

CPlayerHandEnchantment:: CPlayerHandEnchantment(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   int nParam)
	: CEnchantment(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER)
	, m_nParam(nParam)
{
	SetAffectPlayers();
}

CPlayerHandEnchantment:: CPlayerHandEnchantment(CCard* pCard,
											   int nParam)
	: CEnchantment(pCard,FALSE_CARD_COMPARER)
	, m_nParam(nParam)
{
	SetAffectPlayers();
}
void  CPlayerHandEnchantment::OnEnchantPlayer(CPlayer* pPlayer, ContextValue& contextValue)
{
	
	pPlayer->IncreaseMaxHandSize(m_nParam);

}

void  CPlayerHandEnchantment::OnDisenchantPlayer(CPlayer* pPlayer, const ContextValue& contextValue)
{
	pPlayer->IncreaseMaxHandSize(-m_nParam);
}

//____________________________________________________________________________
//
CEnchantDeadCreature::CEnchantDeadCreature(CCard* pCard,
								LPCTSTR strManaCost,
								Power nPowerDelta, Life nLifeDelta,
								bool bTapOnEnchant)
	: CChgPwrTghAttrEnchant(pCard, strManaCost, nPowerDelta, nLifeDelta, CreatureKeyword::Null)
	, m_bTapOnEnchant(bTapOnEnchant)
{
	GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
}

BOOL CEnchantDeadCreature::OnEnchant(CCard* pCard, ContextValue_& contextValue)
{
	CGainControlModifier modifier = CGainControlModifier(GetGame(), m_pCard);
	modifier.ApplyTo(pCard);
	if (m_bTapOnEnchant) pCard->GetOrientation()->Tap();

	GetTargeting()->SetSubjectZoneId(ZoneId::Battlefield);
	GetTargeting()->GetSubjectCardFilter().AddComparer(new SpecificCardComparer(pCard));
	return __super::OnEnchant(pCard, contextValue);
}

void CEnchantDeadCreature::OnDisenchant(CCard* pCard, const ContextValue& contextValue)
{
	GetTargeting()->SetSubjectZoneId(ZoneId::Graveyard);
	GetTargeting()->GetSubjectCardFilter().SetComparer(new AnyCreatureComparer);
	__super::OnDisenchant(pCard, contextValue);
}

//____________________________________________________________________________
//
