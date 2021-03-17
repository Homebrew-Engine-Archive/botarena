#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
/* 
CVanishingAbility::CVanishingAbility(CCard* pCard, int nVanishingValue)
: CTriggeredAbility(pCard, _T("Vanishing"))
, m_WhenCardKeywordChanged(pCard)
, m_WhenInplay(pCard)
, m_cpNListener(VAR_NAME(m_cpNListener), 
ChangeNodeEventSource::Listener::EventCallback(this, &CVanishingAbility::OnUpkeep))
{
SetOptionalType(OptionalType::Required);

m_WhenCardKeywordChanged.SetEventCallback(
CWhenCardKeywordChanged::EventCallback(this, &CVanishingAbility::OnCardKeywordChanged));

m_WhenInplay.SetEnterEventCallback(
CWhenSelfInplay::EventCallback(this, &CVanishingAbility::OnEnterInplay));	

m_WhenInplay.SetLeaveEventCallback(
CWhenSelfInplay::EventCallback(this, &CVanishingAbility::OnLeaveInplay));

CGame* pGame = pCard->GetGame();
if (pGame && pCard->IsInplay())
StartMonitoring(nVanishingValue);
}

void CVanishingAbility::StartMonitoring(int nVanishingValue)
{
// Monitor node

for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
m_pGame->GetPlayer(i)->GetGraph()->GetNodeById(NodeId::UpkeepStep)->GetChangeNodeEventSource()->AddListener(m_cpNListener.GetPointer());

// Reset time counter

Counter* pTimeCounter = m_pCard->GetCounterContainer()->GetCounter(TIME_COUNTER);

int nMultiplier = 0;
int multiVanish = nVanishingValue;
if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))				
multiVanish <<= nMultiplier;

pTimeCounter->SetCount(multiVanish);		
}

void CVanishingAbility::OnEnterInplay(CZone* pFromZone, CZone* pInplay, CPlayer* pByPlayer, MoveType moveType)
{
int nVanishingValue;
if (m_pCard->GetCardKeyword()->Vanishing(nVanishingValue))
{
StartMonitoring(nVanishingValue);
}
}

void CVanishingAbility::OnLeaveInplay(CZone* pInplay, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
m_cpNListener->RemoveAllEventSources();
m_pCard->GetCounterContainer()->GetCounter(TIME_COUNTER)->SetCount(0);
}

void CVanishingAbility::OnCardKeywordChanged(CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword)
{
if (!m_pCard->IsInplay())
return;

if ((fromCardKeyword & CardKeyword::Vanishing).Any() &&
!(toCardKeyword & CardKeyword::Vanishing).Any())
{
// Not vanishing anymore

m_cpNListener->RemoveAllEventSources();
}
else
if (!(fromCardKeyword & CardKeyword::Vanishing).Any() &&
(toCardKeyword & CardKeyword::Vanishing).Any())
{
// Vanishing

// Reset time counter

int nVanishingValue;
if (m_pCard->GetCardKeyword()->Vanishing(nVanishingValue))
{
Counter* pTimeCounter = m_pCard->GetCounterContainer()->GetCounter(TIME_COUNTER);

int nMultiplier = 0;
int multiVanish = nVanishingValue;
if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))				
multiVanish <<= nMultiplier;

pTimeCounter->SetCount(multiVanish);		

// Monitor node

for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
m_pGame->GetPlayer(i)->GetGraph()->GetNodeById(NodeId::UpkeepStep)->GetChangeNodeEventSource()->AddListener(m_cpNListener.GetPointer());
}
}
}

void CVanishingAbility::OnUpkeep(CNode* pToNode)
{
if (m_pCard->GetZoneId() != ZoneId::Battlefield)
return;

if (pToNode->GetGraph()->GetPlayer() != GetController())
return;

int nVanishingValue;
if (m_pCard->GetCardKeyword()->Vanishing(nVanishingValue))
Trigger(GetTriggerContext());
}


BOOL CVanishingAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
return FALSE;

// Card still in-play?

if (m_pCard->GetZoneId() != ZoneId::Battlefield)
{
LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
return FALSE;
}

// Card still has vanishing?

int nVanishingValue;
if (!m_pCard->GetCardKeyword()->Vanishing(nVanishingValue))
{
LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
return FALSE;
}

// Any time counter?

Counter* pTimeCounter = m_pCard->GetCounterContainer()->GetCounter(TIME_COUNTER);

if (pTimeCounter->GetCount())
{
CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, -1);
pModifier.ApplyTo(m_pCard);
//pTimeCounter->DecreaseCount();
}

return TRUE;
}
*/
//____________________________________________________________________________
//
// Storage Matrix: As long as <this> is untapped, each player chooses artifact, creature, or land during his or her untap step.
//                 That player can untap only permanents of the chosen type this step.
//
CTriggeredChgUntapCardTypeWhenNodeChangedAbility::CTriggeredChgUntapCardTypeWhenNodeChangedAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_WhenNodeChanged(pCard, NodeId::UntapStep)
{
	SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	m_WhenNodeChanged.SetEventCallback(
		CWhenNodeChanged::EventCallback(this, &CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OnNodeChanged));
}

void CTriggeredChgUntapCardTypeWhenNodeChangedAbility::OnNodeChanged(CNode* pNode)
{
	Trigger(GetTriggerContext(), TriggerInfo(pNode->GetGraph()->GetPlayer()));
}

void CTriggeredChgUntapCardTypeWhenNodeChangedAbility::GetSelections(
	CActionContainer& actions, CPlayer* pPlayer,
	const TriggerContextType& triggerContext,
	const TriggerInfo& info,
	BOOL bSetNames) const
{
	for (unsigned i = 0; i < m_CardTypeSelection.size(); ++i)
	{
		TriggerContextType tempTriggerContext(triggerContext);
		tempTriggerContext.nValue1 = i;

		counted_ptr<TTriggeredAction<TriggerContextType>> cpAction(CreateTriggeredAction(tempTriggerContext, info));
		ATLASSERT(cpAction);

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T("selects %s for the %s of %s"),
				m_CardTypeSelection[i].second, GetAbilityName(), GetCard()->GetCardName());
			cpAction->SetActionName(strActionName);
		}

		actions.Add(cpAction.GetPointer());
	}
}

BOOL CTriggeredChgUntapCardTypeWhenNodeChangedAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;

	CardType untapCardType = m_CardTypeSelection[pAction1->GetTriggerContext().nValue1].first;

	std::auto_ptr<CPlayerModifier> apModifier(new CPlayerUntapCardTypeModifier(untapCardType, CardType::_All, CPlayerUntapCardTypeModifier::ResetUntapCardType));
	apModifier->ApplyTo(pTriggeredPlayer);

	// Schedule a task to undo the untap card type at the beginning of upkeep

	CPlayerModifierTask* pTask = new CPlayerModifierTask(pTriggeredPlayer, apModifier, 
		false); // use RemoveFrom

	m_pGame->GetScheduler()->ScheduleTask(pTask, pTriggeredPlayer, NodeId::UpkeepStep);

	return TRUE;
}

//____________________________________________________________________________
//
// Treefolk Seedlings:		Treefolk Seedlings's toughness is equal to the number of forests you control.\n2/*
// Yavimaya Enchantress:	Yavimaya Enchantress gets +1/+1 for each enchantment in play.\n2/2
// Revenant:				Flying\rRevenant's power and toughness are each equal to the number of creature cards in your graveyard.\n*/*
// Beast of Burden:			Beast of Burden's power and toughness are each equal to the number of creatures in play.\n*/*
// Nightmare:				Flying\rNightmare's power and toughness are each equal to the number of swamps you control.\n*/*
// Maro:					nMaro's power and toughness are each equal to the number of cards in your hand.\n*/*
// Uktabi Wildcats:			Uktabi Wildcats's power and toughness are each equal to the number of forests you control.\r{G}, Sacrifice a forest: Regenerate Uktabi Wildcats.\n*/*
//
CTriggeredChgPwrTghWhenCardPlayedAbility::CTriggeredChgPwrTghWhenCardPlayedAbility(
	CCard* pCard,
	ZoneId zoneId,
	CardComparer* pCardComparer,
	CCreatureCard* pCreatureCard)
	: CTriggeredAbility(pCard)
	, m_pCreatureCard(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard)
	, m_WhenSelfMoved(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard, ZoneId::_AllZones, ZoneId::_AllZones)
	, m_WhenEnchantSelfMoved(pCard, ZoneId::_AllZones, ZoneId::_AllZones)
	, m_cpNListener(VAR_NAME(m_cpNListener), 
	CardMovementEventSource::Listener::EventCallback(this, 
	&CTriggeredChgPwrTghWhenCardPlayedAbility::OnCardsChanged))		// TODO: switch to CWhenXXX
	, m_bChangePower(TRUE)
	, m_bChangeToughness(TRUE)
	, m_bListenToAllPlayersZones(FALSE)
	, m_nAddedToughness(Life(0))
	, m_nAddedPower(Power(0))
	, m_ZoneId(zoneId)
	, m_LifeModifier(Life(0), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE, TRUE)
	, m_PowerModifier(Power(0), FALSE, TRUE)
	, m_nMaxAddedPower(0)
	, m_nMaxAddedToughness(0)
	, m_nToughnessMultiplier(1)
	, m_nPowerMultiplier(1)
{
	ATLASSERT((m_pCreatureCard->GetCardType() & CardType::Creature).Any());

	AddAbilityTag(AbilityTag::CreatureChange);

	m_SurveyCardFilter.AddComparer(pCardComparer);

	m_WhenSelfMoved.SetReportInPlayChanges(TRUE);	// Notify when moving from in-play to in-play also

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredChgPwrTghWhenCardPlayedAbility::OnZoneChanged));

	// Added to handle the case when enchant card itself changes controller : 2/14/2011
	// Callback is only set if enchant card and enchanted card are not the same
	if (GetCard() && (GetCard() != (CCard*)m_pCreatureCard))
	{
		m_WhenEnchantSelfMoved.SetReportInPlayChanges(TRUE);
		m_WhenEnchantSelfMoved.SetEventCallback(
			CWhenSelfMoved::EventCallback(this, &CTriggeredChgPwrTghWhenCardPlayedAbility::OnEnchantZoneChanged));
	}
}

CTriggeredChgPwrTghWhenCardPlayedAbility::~CTriggeredChgPwrTghWhenCardPlayedAbility()
{
	// Added to handle disenchant when this ability is used in CAbilityEnchant (see also the diagram in CAbilityEnchant)
	if (m_pGame && !m_pGame->InDestruction() &&
		!m_pGame->IsRestoring() &&
		(m_pCreatureCard->GetZoneId() == ZoneId::Battlefield))
		OnCardCountChanged(0);
}
void CTriggeredChgPwrTghWhenCardPlayedAbility::ForceStart(BOOL addListener)
{
	if (addListener) m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredChgPwrTghWhenCardPlayedAbility::OnZoneChanged));

	OnZoneChanged(GetController()->GetZoneById(ZoneId::_Tokens), GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others);

	// Added to handle the case when enchant card itself changes controller : 2/14/2011
	// Callback is only set if enchant card and enchanted card are not the same
	if (GetCard() && (GetCard() != (CCard*)m_pCreatureCard))
		if (addListener) m_WhenEnchantSelfMoved.SetEventCallback(
			CWhenSelfMoved::EventCallback(this, &CTriggeredChgPwrTghWhenCardPlayedAbility::OnEnchantZoneChanged));

}
void CTriggeredChgPwrTghWhenCardPlayedAbility::StartListening(CPlayer* pController)
{
	CZone* pListenToZone = pController->GetZoneById(m_ZoneId);	// This indirect approach is needed because CTargetControlSpell will first change zone and then controller, so controller may be updated at this moment
	pListenToZone->GetCardMovedEventSource()->AddListener(m_cpNListener.GetPointer());

	if (m_bListenToAllPlayersZones)
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			if (pController != m_pGame->GetPlayer(i))
			{
				pListenToZone = m_pGame->GetPlayer(i)->GetZoneById(m_ZoneId);	// This indirect approach is needed because CTargetControlSpell will first change zone and then controller, so controller may be updated at this moment
				pListenToZone->GetCardMovedEventSource()->AddListener(m_cpNListener.GetPointer());
			}

			UpdateCardCount(pController);

			// 8/12/2002
			m_pCreatureCard->CheckDying(TRUE);
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::SetChangePowerOnly()
{
	m_bChangePower = TRUE;
	m_bChangeToughness = FALSE;
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::SetChangeToughnessOnly()
{
	m_bChangePower = FALSE;
	m_bChangeToughness = TRUE;
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::SetListenToAllPlayersZones()
{
	m_bListenToAllPlayersZones = TRUE;
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::UpdateCardCount(CPlayer* pController)
{
	int nCount = 0;
	if (!GetCard()->GetZone()) return;

	if (GetCard()->GetZone()->GetZoneId() == ZoneId::Battlefield)
	{
		if (!pController)
			pController = GetController();

		CZone* pZone = pController->GetZoneById(m_ZoneId);
		if (!pZone)
			return;

		for (int i = 0; i < pZone->GetSize(); ++i)
			if (m_SurveyCardFilter.IsCardIncluded(pZone->GetAt(i)))
				++nCount;

		if (m_bListenToAllPlayersZones)
			for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				if (m_pGame->GetPlayer(j) != pController)
				{
					pZone = m_pGame->GetPlayer(j)->GetZoneById(m_ZoneId);

					for (int i = 0; i < pZone->GetSize(); ++i)
						if (m_SurveyCardFilter.IsCardIncluded(pZone->GetAt(i)))
							++nCount;
				}
	}

	OnCardCountChanged(nCount);
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::OnCardCountChanged(int nNewCount)
{
	/*
	ATLTRACE(_T("-->%d\n"), nNewCount);
	if (!m_pGame->IsThinking() && !nNewCount)
	ATLTRACE(_T("TEST\n"));
	*/

	if (m_bChangePower)
	{
		Power nNewAddedPower = Power(nNewCount) * m_nPowerMultiplier;

		if (m_nMaxAddedPower != Power(0) &&
			nNewAddedPower > m_nMaxAddedPower)
			nNewAddedPower = m_nMaxAddedPower;

		if (nNewAddedPower != m_nAddedPower)
		{
			Power nNewDelta(nNewAddedPower - m_nAddedPower);

			CPowerModifier modifier(m_PowerModifier);
			modifier.SetPowerDelta(nNewDelta);
			modifier.ApplyTo(m_pCreatureCard);

			m_nAddedPower = nNewAddedPower;
		}
	}

	if (m_bChangeToughness)
	{
		Life nNewAddedToughness = Life(nNewCount) * m_nToughnessMultiplier;

		if (m_nMaxAddedToughness != Life(0) &&
			nNewAddedToughness > m_nMaxAddedToughness)
			nNewAddedToughness = m_nMaxAddedToughness;

		if (nNewAddedToughness != m_nAddedToughness)
		{
			Life nNewDelta(nNewAddedToughness - m_nAddedToughness);

			CLifeModifier modifier(m_LifeModifier);
			modifier.SetLifeDelta(nNewDelta);
			modifier.ApplyTo(m_pCreatureCard);

			m_nAddedToughness = nNewAddedToughness;
		}
	}
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::OnCardsChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_SurveyCardFilter.IsCardIncluded(pCard))
		UpdateCardCount();
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
	// Called when the enchanted card is moved
	// If enchant card and enchanted card are the same, this function this handles the
	// the zone changes alone, OnEnchantZoneChanged callback is not set in that case
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone != ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		StartListening(pToZone->GetPlayer());
	}
	else
		if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
		{
			m_cpNListener->RemoveAllEventSources();
			UpdateCardCount();
		}
		else
			if ((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Battlefield) && (GetController() == m_pCreatureCard->GetController()))	// If this card is controlled by opponent
				// Added check for confirming that the controller of the ability is the controller of the enchanted card : 2/14/2011
			{
				m_cpNListener->RemoveAllEventSources();
				StartListening(pToZone->GetPlayer());
			}
}

void CTriggeredChgPwrTghWhenCardPlayedAbility::OnEnchantZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
	// Added to be called when the enchant card itself changes controller : 2/14/2011
	// This should never be called if enchant card and enchanted card are the same
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Battlefield) && (GetController() != m_pCreatureCard->GetController()))
		m_cpNListener->RemoveAllEventSources();
	StartListening(pToZone->GetPlayer());
}

//____________________________________________________________________________
//
// Avatar of Hope: If you have 3 life or less, Avatar of Hope costs 6 less to play.
//
CTriggeredReducedCostWhenPlayerLifeChangedAbility::CTriggeredReducedCostWhenPlayerLifeChangedAbility(
	CCard* pCard,
	Life nThresholdLife,
	int nReduceGenericCostBy)
	: CTriggeredAbility(pCard)
	, m_WhenPlayerLifeChanged(pCard)
	, m_WhenSelfMoved(pCard)
	, m_nReduceGenericCostBy(nReduceGenericCostBy)
	, m_bReduced(FALSE)
	, m_nThresholdLife(nThresholdLife)
{
	__super::SetOptionalType(OptionalType::Required);

	m_WhenPlayerLifeChanged.SetThisIsInplayOnly(FALSE);
	m_WhenPlayerLifeChanged.SetMonitorControllerOnly(TRUE);

	m_WhenPlayerLifeChanged.SetEventCallback(
		CWhenPlayerLifeChanged::EventCallback(this, &CTriggeredReducedCostWhenPlayerLifeChangedAbility::OnPlayerLifeChanged));

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredReducedCostWhenPlayerLifeChangedAbility::OnZoneChanged));
}

void CTriggeredReducedCostWhenPlayerLifeChangedAbility::OnPlayerLifeChanged(const CPlayer* pPlayer, Life nFromLife, Life nToLife)
{
	if (!__super::IsTriggerable())
		return;

	if (CAbility::m_pCard->GetZoneId() != ZoneId::Hand)
		return;

	if (m_bReduced && nFromLife <= m_nThresholdLife && nToLife > m_nThresholdLife)
	{
		m_bReduced = FALSE;
		CAbility::m_pCard->GetSpells().GetAt(0)->GetCost().AddManaCost(CManaCost::Color::Generic, m_nReduceGenericCostBy); // only change the first spell
	}
	else
		if (!m_bReduced && nFromLife > m_nThresholdLife && nToLife <= m_nThresholdLife)
		{
			m_bReduced = TRUE;
			CAbility::m_pCard->GetSpells().GetAt(0)->GetCost().RemoveManaCost(CManaCost::Color::Generic, m_nReduceGenericCostBy); // only change the first spell
		}
}

void CTriggeredReducedCostWhenPlayerLifeChangedAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone && pToZone->GetZoneId() != ZoneId::Hand)
	{
		if (m_bReduced)
		{
			m_bReduced = FALSE;
			CAbility::m_pCard->GetSpells().GetAt(0)->GetCost().AddManaCost(CManaCost::Color::Generic, m_nReduceGenericCostBy); // only change the first spell
		}
	}
	else
	{
		Life nLife(CAbility::GetController()->GetLife());
		if (nLife <= m_nThresholdLife)
		{
			if (!m_bReduced)
			{
				m_bReduced = TRUE;
				CAbility::m_pCard->GetSpells().GetAt(0)->GetCost().RemoveManaCost(CManaCost::Color::Generic, m_nReduceGenericCostBy); // only change the first spell
			}
		}
		else
		{
			if (m_bReduced)
			{
				m_bReduced = FALSE;
				CAbility::m_pCard->GetSpells().GetAt(0)->GetCost().AddManaCost(CManaCost::Color::Generic, m_nReduceGenericCostBy); // only change the first spell
			}
		}
	}
}
//____________________________________________________________________________
//
CDredgeAbility::CDredgeAbility(CCard* pCard, int nDredgeValue)
	: CTriggeredAbility(pCard, _T("Dredge"))
	,m_DredgeValue(nDredgeValue)
{
}

//____________________________________________________________________________
//
CTriggeredAffinityAbility::CTriggeredAffinityAbility(
	CCard* pCard,
	CCardFilter* AffinityFilter)
	: CTriggeredAbility(pCard)
	, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CTriggeredAffinityAbility::OnCardMoved))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CTriggeredAffinityAbility::OnCardTypeChanged))
	, m_WhenSelfMoved(pCard)
	, m_bReduced(FALSE)
	, m_AffinityFilter(AffinityFilter)
	, CurrentAffinity(0)
	, m_Color(CManaCost::Color::Generic)
	, counting_Zone(ZoneId::Battlefield)
{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredAffinityAbility::OnZoneChanged));
}

void CTriggeredAffinityAbility::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!__super::IsTriggerable())
		return;

	if (pFromZone->GetZoneId() != counting_Zone && pToZone->GetZoneId() == counting_Zone)
		pCard->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());

	if (pFromZone->GetZoneId() == counting_Zone && pToZone->GetZoneId() != counting_Zone)
		pCard->GetCardTypeEventSource()->RemoveListener(m_cpCardTypeListener.GetPointer());

	int m_ExtraManaCost;
	int affinitynumber = m_AffinityFilter->CountIncluded(m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardContainer());

	if ( CurrentAffinity == 0 && affinitynumber != 0)
	{
		m_ExtraManaCost =affinitynumber;
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity > affinitynumber ) 
	{
		m_ExtraManaCost =(CurrentAffinity-affinitynumber);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity < affinitynumber ) 
	{
		m_ExtraManaCost =(affinitynumber-CurrentAffinity);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

}

void CTriggeredAffinityAbility::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (!__super::IsTriggerable())
		return;

	int m_ExtraManaCost;
	int affinitynumber = m_AffinityFilter->CountIncluded(m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardContainer());

	if ( CurrentAffinity == 0 && affinitynumber != 0)
	{
		m_ExtraManaCost =affinitynumber;
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity > affinitynumber ) 
	{
		m_ExtraManaCost =(CurrentAffinity-affinitynumber);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity < affinitynumber ) 
	{
		m_ExtraManaCost =(affinitynumber-CurrentAffinity);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}
}
void CTriggeredAffinityAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	//int affinitynumber = m_AffinityFilter->CountIncluded(pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetCardContainer());

	/*if (pFromZone && pFromZone->GetZoneId() == ZoneId::Hand && pToZone->GetZoneId() != ZoneId::Hand)
	m_pCard->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardMovedEventSource()->RemoveListener(m_cpCardZoneListener.GetPointer());*/

	if (!pFromZone && pToZone)
	{
		m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());
	}
	else
		if (pFromZone && pFromZone->GetPlayer() !=  pToZone->GetPlayer())
		{
			pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetCardMovedEventSource()->RemoveListener(m_cpCardZoneListener.GetPointer());

			for (int i = 0; i < pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetSize() ; ++i)
				pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetAt(i)->GetCardTypeEventSource()->RemoveListener(m_cpCardTypeListener.GetPointer());

			pToZone->GetPlayer()->GetZoneById(counting_Zone)->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());

			for (int i = 0; i < pToZone->GetPlayer()->GetZoneById(counting_Zone)->GetSize() ; ++i)
				pToZone->GetPlayer()->GetZoneById(counting_Zone)->GetAt(i)->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());

			int m_ExtraManaCost;
			int affinitynumber = m_AffinityFilter->CountIncluded(m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardContainer());

			if ( CurrentAffinity == 0 && affinitynumber != 0)
			{
				m_ExtraManaCost =affinitynumber;
				const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
					spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
				CurrentAffinity = affinitynumber;
				return;
			}

			if ( CurrentAffinity != 0 &&  CurrentAffinity > affinitynumber ) 
			{
				m_ExtraManaCost =(CurrentAffinity-affinitynumber);
				const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
					spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, m_ExtraManaCost);
				CurrentAffinity = affinitynumber;
				return;
			}

			if ( CurrentAffinity != 0 &&  CurrentAffinity < affinitynumber ) 
			{
				m_ExtraManaCost =(affinitynumber-CurrentAffinity);
				const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
					spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
				CurrentAffinity = affinitynumber;
				return;
			}
		}

		/*	if (pFromZone && pFromZone->GetZoneId() == ZoneId::Hand)
		{
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
		spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, CurrentAffinity);
		CurrentAffinity = 0;
		return;
		}*/
}
//____________________________________________________________________________
/*//
CTriggeredDelveAbility::CTriggeredDelveAbility(
CCard* pCard)
: CTriggeredAbility(pCard)
, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CTriggeredDelveAbility::OnCardMoved))	
, m_WhenSelfMoved(pCard)
, m_bReduced(FALSE)	
, CurrentAffinity(0)
{
__super::SetOptionalType(OptionalType::Required);	

m_WhenSelfMoved.SetEventCallback(
CWhenSelfMoved::EventCallback(this, &CTriggeredDelveAbility::OnZoneChanged));
}

void CTriggeredDelveAbility::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
if (!__super::IsTriggerable())
return;	

int m_ExtraManaCost;
int affinitynumber = m_pCard->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize();

if ( CurrentAffinity > affinitynumber ) 
{		
const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

for (int i = 0; i < spells.GetSize(); ++i)
{
if (spells.GetAt(i)->GetCost().GetExileGraveyardCardCount() > affinitynumber) m_pCard->RemoveSpell(i);
}

return;
}

if ( CurrentAffinity < affinitynumber +  m_pCard->GetSpells().GetAt(0)->GetCost().GetIncreasedCost().GetCost(CManaCost::Color::Generic)) 
{

CSpell* prototype = m_pCard->GetSpells().GetAt(0);

m_ExtraManaCost =(affinitynumber-CurrentAffinity);
const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

for (int i = (CurrentAffinity+1); i < (affinitynumber+1); ++i)
{

//hybrid mana cost
counted_ptr<CChgLifeBySurveySpell> prototype(
::CreateObject<CChgLifeBySurveySpell>(m_pCard, AbilityType::Creature,
_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT));

prototype->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);
prototype->GetCost().AddExileGraveyardCardCost(i, CCardFilter::GetFilter(_T("cards")));
prototype->GetCost().AddReductionCost(CManaCost::Color::Generic, i);
prototype->SetAbilityName(_T("Delve"));
m_pCard->AddSpell(prototype.GetPointer());			
}
return;
}

}
void CTriggeredDelveAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
int affinitynumber = m_pCard->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize();

if (!pFromZone && pToZone->GetZoneId() == ZoneId::Library)
{
m_pCard->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());
}

/*if (pFromZone && pFromZone->GetZoneId() == ZoneId::Hand)
{
const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

for (int i = 0; i < spells.GetSize(); ++i)
{
if (spells.GetAt(i)->GetAbilityName() == "Delve")  m_pCard->RemoveSpell(i);
}

CurrentAffinity = 0;
return;
}
}*/
//____________________________________________________________________________
//
CTriggeredCounterAffinityAbility::CTriggeredCounterAffinityAbility(
	CCard* pCard,
	CardComparer* pComparer, LPCTSTR counter_name)
	: CTriggeredAbility(pCard)
	, m_WhenSelfMoved(pCard)
	, m_AffinityComparer(pComparer)
	, CurrentAffinity(0)
	, m_counter_name(counter_name)
	, m_cpAListener(VAR_NAME(m_cpAListener),
	CounterMovedEventSource::Listener::EventCallback(this, &CTriggeredCounterAffinityAbility::OnCounterMoved))

{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredCounterAffinityAbility::OnZoneChanged));


	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(m_pCard,
		m_AffinityComparer,
		_T("")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	m_pAbility = cpAbility.GetPointer();

	m_pCard->AddAbility(cpAbility.GetPointer());
}

void CTriggeredCounterAffinityAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone != ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		CGame* pGame = m_pCard->GetGame();
		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
			pGame->GetPlayer(i)->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());


		m_pAbility->EndEnchantment();

		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);
		mCost.AddCost(CManaCost::Color::Generic, (m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();
	}
	if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
	{
		m_pAbility->EndEnchantment();
		m_cpAListener->RemoveAllEventSources();
	}

}

void CTriggeredCounterAffinityAbility::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard == m_pCard && !((CString)name).CompareNoCase(m_counter_name) && m_pCard->GetZoneId() == ZoneId::Battlefield) 
	{
		m_pAbility->EndEnchantment();

		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);
		mCost.AddCost(CManaCost::Color::Generic, (m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();
	}
}

//____________________________________________________________________________
//
CTriggeredCounterPwrTghEnchantAbility::CTriggeredCounterPwrTghEnchantAbility(
	CCard* pCard, LPCTSTR counter_name)
	: CTriggeredAbility(pCard)
	, m_WhenSelfMoved(pCard)
	, CurrentAffinity(0)
	, m_counter_name(counter_name)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
	CounterMovedEventSource::Listener::EventCallback(this, &CTriggeredCounterPwrTghEnchantAbility::OnCounterMoved))
	, m_pAbility(::CreateObject<CPwrTghAttrEnchantment>(pCard,
	new AnyCreatureComparer,
	Power(+1), Life(+1)))
	, m_pAbility1(::CreateObject<CPwrTghAttrEnchantment>(pCard,
	new AnyCreatureComparer,
	Power(0), Life(0)))
	,m_pEquipment(FALSE)
	,m_PowerMultiplier(1)
	,m_LifeMultiplier(1)
	,m_cpListener(VAR_NAME(m_cpListener),
	CardEquippedEventSource::Listener::EventCallback(this, &CTriggeredCounterPwrTghEnchantAbility::OnEquipped))	

{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredCounterPwrTghEnchantAbility::OnZoneChanged));

	m_pCard->AddAbility(m_pAbility.GetPointer());

	//m_pAbility1->SetAffectControllerCardsOnly();

	m_pAbility1->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
	m_pAbility1->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	m_pCard->AddAbility(m_pAbility1.GetPointer());

}
void CTriggeredCounterPwrTghEnchantAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone != ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		CGame* pGame = m_pCard->GetGame();
		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
			pGame->GetPlayer(i)->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

		if (m_pEquipment == TRUE)
			for (int i = 0; i < pGame->GetPlayerCount(); ++i)
				pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)->GetCardEquippedEventSource()->AddListener(m_cpListener.GetPointer());

		m_pAbility->EndEnchantment();
		m_pAbility1->EndEnchantment();

		m_pAbility->GetPowerModifier().SetPowerDelta(Power(m_PowerMultiplier*m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));
		m_pAbility->GetLifeModifier().SetLifeDelta(Life(m_LifeMultiplier*m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));

		m_pAbility->StartEnchantment();
	}
	if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
	{
		m_cpAListener->RemoveAllEventSources();
		if (m_pEquipment == TRUE)
			m_cpListener->RemoveAllEventSources();
	}
}
void CTriggeredCounterPwrTghEnchantAbility::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard == m_pCard && !((CString)name).CompareNoCase(m_counter_name) && m_pCard->GetZoneId() == ZoneId::Battlefield) 
	{
		m_pAbility1->StartEnchantment();
		m_pAbility->EndEnchantment();


		m_pAbility->GetPowerModifier().SetPowerDelta(Power(m_PowerMultiplier*m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));
		m_pAbility->GetLifeModifier().SetLifeDelta(Life(m_LifeMultiplier*m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));

		m_pAbility->StartEnchantment();
		m_pAbility1->EndEnchantment();
	}
}
void CTriggeredCounterPwrTghEnchantAbility::OnEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard)
{
	if (pEquipCard == m_pCard  && m_pCard->GetZoneId() == ZoneId::Battlefield)
	{
		m_pAbility1->StartEnchantment();
		m_pAbility->EndEnchantment();


		m_pAbility->GetPowerModifier().SetPowerDelta(Power(m_PowerMultiplier*m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));
		m_pAbility->GetLifeModifier().SetLifeDelta(Life(m_LifeMultiplier*m_pCard->GetCounterContainer()->GetCounter(m_counter_name)->GetCount()));

		m_pAbility->StartEnchantment();
		m_pAbility1->EndEnchantment();
	}
}
//____________________________________________________________________________
//
CTriggeredCounterExternalPwrTghAbility::CTriggeredCounterExternalPwrTghAbility(CCard* pCard, LPCTSTR counterName, CCreatureCard* pCreatureCard)
	: CTriggeredAbility(pCard)
	, m_pCreatureCard(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard)
	, m_pCounterName(counterName)
	, m_WhenSelfMoved(pCreatureCard ? pCreatureCard : (CCreatureCard*)pCard, ZoneId::_AllZones, ZoneId::_AllZones) 
	, m_cpAListener(VAR_NAME(m_cpAListener), 
	CounterMovedEventSource::Listener::EventCallback(this, &CTriggeredCounterExternalPwrTghAbility::OnCounterMoved))
	, m_listen(NULL)
{
	ATLASSERT((m_pCreatureCard->GetCardType() & CardType::Creature).Any());

	AddAbilityTag(AbilityTag::CreatureChange); 

	m_WhenSelfMoved.SetReportInPlayChanges(TRUE); // Notify when moving from in-play to in-play also

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredCounterExternalPwrTghAbility::OnZoneChanged));
}

void CTriggeredCounterExternalPwrTghAbility::ForceStart(BOOL addListener)
{
	if (addListener) m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredCounterExternalPwrTghAbility::OnZoneChanged));

	OnZoneChanged(GetController()->GetZoneById(ZoneId::_Tokens), GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others);

}
void CTriggeredCounterExternalPwrTghAbility::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard == m_listen && !((CString)name).CompareNoCase(m_pCounterName)) 
	{
		CLifeModifier pLifeModifier = CLifeModifier(Life(n_value), m_listen, PreventableType::NotPreventable,DamageType::NotDealingDamage,0);
		pLifeModifier.SetReplacement(TRUE);
		pLifeModifier.SetToBase(TRUE);

		CPowerModifier pPowerModifier = CPowerModifier(Power(n_value), 0);
		pPowerModifier.SetReplacement(TRUE);
		pPowerModifier.SetToBase(TRUE);

		pLifeModifier.ApplyTo(m_pCreatureCard);
		pPowerModifier.ApplyTo(m_pCreatureCard);
	}
}
void CTriggeredCounterExternalPwrTghAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone != ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{ 
		m_listen->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

		CLifeModifier pLifeModifier = CLifeModifier(Life(m_listen->GetCounterContainer()->GetCounter(m_pCounterName)->GetCount()), m_listen, PreventableType::NotPreventable,DamageType::NotDealingDamage,0);
		pLifeModifier.SetReplacement(TRUE);
		pLifeModifier.SetToBase(TRUE);

		CPowerModifier pPowerModifier = CPowerModifier(Power(m_listen->GetCounterContainer()->GetCounter(m_pCounterName)->GetCount()), 0);
		pPowerModifier.SetReplacement(TRUE);
		pPowerModifier.SetToBase(TRUE);

		pLifeModifier.ApplyTo(m_pCreatureCard);
		pPowerModifier.ApplyTo(m_pCreatureCard);
	}
	else
		if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
		{
			m_cpAListener->RemoveAllEventSources(); 
		}

}
//____________________________________________________________________________
//
CTriggeredTopCardEnchantAbility::CTriggeredTopCardEnchantAbility(
	CCard* pCard, CCardFilter* pConditionFilter)
	: CTriggeredAbility(pCard)
	, m_WhenSelfMoved(pCard)
	, m_pAbility(::CreateObject<CPwrTghAttrEnchantment>(pCard,
	new AnyCreatureComparer,
	Power(+0), Life(+0)))
	, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CTriggeredTopCardEnchantAbility::OnCardZoneChanged))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CTriggeredTopCardEnchantAbility::OnCardTypeChanged))
	, m_pConditionFilter(pConditionFilter)
{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredTopCardEnchantAbility::OnZoneChanged));

	m_WhenSelfMoved.SetReportInPlayChanges(TRUE);

	m_pCard->AddAbility(m_pAbility.GetPointer());

}
void CTriggeredTopCardEnchantAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone)
		return;

	if (pToZone->GetZoneId()  == ZoneId::Battlefield)
	{
		m_cpCardZoneListener->RemoveAllEventSources();
		m_cpCardTypeListener->RemoveAllEventSources();

		m_pAbility->EndEnchantment();

		m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());

		if (m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetSize())
		{
			m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());
			if (m_pConditionFilter->IsCardIncluded(m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetTopCard()))
				m_pAbility->StartEnchantment();
		}
	}
	else

		if ((pFromZone->GetZoneId()  == ZoneId::Battlefield) && (pToZone->GetZoneId()  != ZoneId::Battlefield))
		{
			m_cpCardZoneListener->RemoveAllEventSources();
			m_cpCardTypeListener->RemoveAllEventSources();

			m_pAbility->EndEnchantment();
		}

		
}
void CTriggeredTopCardEnchantAbility::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType) 
{
	if (m_pConditionFilter->IsCardIncluded(m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetTopCard()))
		m_pAbility->StartEnchantment();
	else 
		m_pAbility->EndEnchantment();
}
void CTriggeredTopCardEnchantAbility::OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) 
{
	m_cpCardTypeListener->RemoveAllEventSources();

	if (m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetSize())
	{
		if (m_pConditionFilter->IsCardIncluded(m_pCard->GetController()->GetZoneById(ZoneId::Library)->GetTopCard()))
			m_pAbility->StartEnchantment();
		else 
			m_pAbility->EndEnchantment();
		GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());
	}
	else
		m_pAbility->EndEnchantment();
}
//____________________________________________________________________________
//
CTriggeredLostLifeAffinityAbility::CTriggeredLostLifeAffinityAbility(
	CCard* pCard,
	CardComparer* pComparer)
	: CTriggeredAbility(pCard)
	, m_WhenSelfMoved(pCard)
	, m_AffinityComparer(pComparer)
	, CurrentAffinity(0)
	, m_WhenNodeChanged(pCard, NodeId::BeforeBeginningStep, TRUE)
	, m_cpPListener(VAR_NAME(m_cpPListener), 
					ChangeLifeEventSource::Listener::EventCallback(this, &CTriggeredLostLifeAffinityAbility::OnLifeChanged))

{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredLostLifeAffinityAbility::OnZoneChanged));

	m_WhenNodeChanged.SetEventCallback(CWhenNodeChanged::EventCallback(this, &CTriggeredLostLifeAffinityAbility::OnNodeChanged));

	m_WhenSelfMoved.SetReportInPlayChanges(TRUE);	// Notify when moving from in-play to in-play also

	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(m_pCard,
		m_AffinityComparer,
		_T("")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	m_pAbility = cpAbility.GetPointer();

	m_pCard->AddAbility(cpAbility.GetPointer());
}

void CTriggeredLostLifeAffinityAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone != ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		CGame* pGame = m_pCard->GetGame();
		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
			pGame->GetPlayer(i)->GetChangeLifeEventSource()->AddListener(m_cpPListener.GetPointer());


		m_pAbility->EndEnchantment();

		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);
		mCost.AddCost(CManaCost::Color::Generic, GET_INTEGER((m_pGame->GetNextPlayer(m_pCard->GetController())->GetLifeLossTakenThisTurn())));

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();
	}
	else
	if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
	{
		m_pAbility->StartEnchantment();
		m_pAbility->EndEnchantment();
		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);

		m_pAbility->EndEnchantment();
		m_cpPListener->RemoveAllEventSources();
	}
	else
	if ((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		m_pAbility->EndEnchantment();

		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);
		mCost.AddCost(CManaCost::Color::Generic, GET_INTEGER((m_pGame->GetNextPlayer(m_pCard->GetController())->GetLifeLossTakenThisTurn())));

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();
	}
}
void CTriggeredLostLifeAffinityAbility::OnNodeChanged(CNode* pToNode)
{
	if (!pToNode)
		return;

	m_pAbility->EndEnchantment();

	CManaCost mCost;
	mCost.AddCost(CManaCost::Color::Generic, 0);
	
	m_pAbility->SetManaCost(mCost);

	m_pAbility->StartEnchantment();

	return;
}
void CTriggeredLostLifeAffinityAbility::OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife)
{
	if ( pPlayer == m_pGame->GetNextPlayer(m_pCard->GetController()))
	{
		m_pAbility->EndEnchantment();

		CManaCost mCost;
		mCost.AddCost(CManaCost::Color::Generic, 0);
		mCost.AddCost(CManaCost::Color::Generic, GET_INTEGER((m_pGame->GetNextPlayer(m_pCard->GetController())->GetLifeLossTakenThisTurn())));

		m_pAbility->SetManaCost(mCost);

		m_pAbility->StartEnchantment();
	}
}

//____________________________________________________________________________
//
CTriggeredSoulbondAbility::CTriggeredSoulbondAbility(
	CCard* pCard)
	: CTriggeredAbility(pCard)
	, m_WhenSelfMoved(pCard)
	, m_pToCard(pCard)
	, m_WhenThisCardTypeChanged(pCard)
	, m_cpPairedCardMoveListener(VAR_NAME(m_cpPairedCardMoveListener), CardMovementEventSource::Listener::EventCallback(this,
								   &CTriggeredSoulbondAbility::OnPairedCardMoved))
	, m_cpPairedCardTypeListener(VAR_NAME(m_cpPairedCardTypeListener), CardTypeEventSource::Listener::EventCallback(this,
								   &CTriggeredSoulbondAbility::OnPairedCardTypeChanged))
{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredSoulbondAbility::OnZoneChanged));

	m_WhenThisCardTypeChanged.SetEventCallback(CWhenSelfCardTypeChanged::EventCallback(this, &CTriggeredSoulbondAbility::OnThisCardTypeChanged));

	m_WhenSelfMoved.SetReportInPlayChanges(TRUE);	// Notify when moving from in-play to in-play also

	SetAbilityName(_T("Soulbond"));
	SetAbilityText(_T("Soulbond"));
	
}
void CTriggeredSoulbondAbility::StartSoulbond(CCreatureCard* pCard)
{
	 pCard->GetMovedEventSource()->AddListener(m_cpPairedCardMoveListener.GetPointer());
	 pCard->GetCardTypeEventSource()->AddListener(m_cpPairedCardTypeListener.GetPointer());
	
	m_CreatureModifiers.ApplyTo(pCard);
	m_CardModifiers.ApplyTo(pCard);

	m_CreatureModifiers.ApplyTo((CCreatureCard*)m_pCard);
	m_CardModifiers.ApplyTo(m_pCard);
	
	m_pPairedCreature = pCard;

	// Find paired Soulbond and start

	for (int i = 0; i < pCard->GetAbilityCount(); ++i)
		{
			CAbility* pAbility = pCard->GetAbility(i);

			CTriggeredSoulbondAbility* pEnchantmentAbility = dynamic_cast<CTriggeredSoulbondAbility*>(pCard->GetAbility(i));
			if (!pEnchantmentAbility) 
				continue;
			if (pEnchantmentAbility->GetAbilityName() == _T("Soulbond"))
			{
				if (!pEnchantmentAbility->GetPairedCreature())
				{
					pEnchantmentAbility->StartSoulbond((CCreatureCard*)m_pCard);
					return;
				}
			}
		}
}
void CTriggeredSoulbondAbility::StopSoulbond(CCard* pCard)
{
	m_cpPairedCardMoveListener->RemoveAllEventSources();
	m_cpPairedCardTypeListener->RemoveAllEventSources();
		
	m_CardModifiers.RemoveFrom(pCard);
	m_CardModifiers.RemoveFrom(m_pCard);

	m_CreatureModifiers.RemoveFrom((CCreatureCard*)m_pCard);
	m_CreatureModifiers.RemoveFrom(m_pPairedCreature);
	
	m_pPairedCreature = NULL;
}
void CTriggeredSoulbondAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_pPairedCreature == NULL) 
		return;

	if (moveType == MoveType::Phasing) return;

	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
	{
		StopSoulbond(m_pPairedCreature);
	}
	else
	if ((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		StopSoulbond(m_pPairedCreature);
	}
}
void CTriggeredSoulbondAbility::OnPairedCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ATLASSERT(m_pPairedCreature != NULL);

	if (moveType == MoveType::Phasing) return;

	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone == ZoneId::Battlefield) && (toZone != ZoneId::Battlefield))
	{
		StopSoulbond(m_pPairedCreature);
	}
	else
	if ((fromZone == ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{
		StopSoulbond(m_pPairedCreature);
	}
	
}
void CTriggeredSoulbondAbility::OnPairedCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (!m_pPairedCreature->GetCardType().IsCreature()) 
		StopSoulbond(m_pPairedCreature);
}

void CTriggeredSoulbondAbility::OnThisCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (!m_pCard->GetCardType().IsCreature()) 
		StopSoulbond(m_pPairedCreature);
}

BOOL CTriggeredSoulbondAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (triggerContext.m_pCard)
		{
		
			if (triggerContext.m_pCard->GetCardType().IsCreature() && m_pCard->GetCardType().IsCreature())
				StartSoulbond((CCreatureCard*)triggerContext.m_pCard);
		}
		else
		{
			ATLASSERT(false);
			return FALSE;
		}

		return TRUE;

	return TRUE;
}
//____________________________________________________________________________
//
CTriggeredAllAffinityAbility::CTriggeredAllAffinityAbility(
	CCard* pCard,
	CCardFilter* AffinityFilter)
	: CTriggeredAbility(pCard)
	, m_cpCardZoneListener(VAR_NAME(m_cpCardZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CTriggeredAllAffinityAbility::OnCardMoved))
	, m_cpCardTypeListener(VAR_NAME(m_cpCardTypeListener), CardTypeEventSource::Listener::EventCallback(this, &CTriggeredAllAffinityAbility::OnCardTypeChanged))
	, m_WhenSelfMoved(pCard)
	, m_bReduced(FALSE)
	, m_AffinityFilter(AffinityFilter)
	, CurrentAffinity(0)
	, m_Color(CManaCost::Color::Generic)
	, counting_Zone(ZoneId::Battlefield)
{
	__super::SetOptionalType(OptionalType::Required);	

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CTriggeredAllAffinityAbility::OnZoneChanged));
}

void CTriggeredAllAffinityAbility::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!__super::IsTriggerable())
		return;

	if (pFromZone->GetZoneId() != counting_Zone && pToZone->GetZoneId() == counting_Zone)
		pCard->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());

	if (pFromZone->GetZoneId() == counting_Zone && pToZone->GetZoneId() != counting_Zone)
		pCard->GetCardTypeEventSource()->RemoveListener(m_cpCardTypeListener.GetPointer());

	int m_ExtraManaCost;
	int affinitynumber = 0;
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		affinitynumber += m_AffinityFilter->CountIncluded(m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardContainer());

	if ( CurrentAffinity == 0 && affinitynumber != 0)
	{
		m_ExtraManaCost =affinitynumber;
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity > affinitynumber ) 
	{
		m_ExtraManaCost =(CurrentAffinity-affinitynumber);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity < affinitynumber ) 
	{
		m_ExtraManaCost =(affinitynumber-CurrentAffinity);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

}

void CTriggeredAllAffinityAbility::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (!__super::IsTriggerable())
		return;

	int m_ExtraManaCost;
	int affinitynumber = 0;
	
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		affinitynumber += m_AffinityFilter->CountIncluded(m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardContainer());

	if ( CurrentAffinity == 0 && affinitynumber != 0)
	{
		m_ExtraManaCost =affinitynumber;
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity > affinitynumber ) 
	{
		m_ExtraManaCost =(CurrentAffinity-affinitynumber);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}

	if ( CurrentAffinity != 0 &&  CurrentAffinity < affinitynumber ) 
	{
		m_ExtraManaCost =(affinitynumber-CurrentAffinity);
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
			spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
		CurrentAffinity = affinitynumber;
		return;
	}
}
void CTriggeredAllAffinityAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	//int affinitynumber = m_AffinityFilter->CountIncluded(pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetCardContainer());

	/*if (pFromZone && pFromZone->GetZoneId() == ZoneId::Hand && pToZone->GetZoneId() != ZoneId::Hand)
	m_pCard->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardMovedEventSource()->RemoveListener(m_cpCardZoneListener.GetPointer());*/

	if (!pFromZone && pToZone)
	{
		m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());
	}
	else
		if (pFromZone && pFromZone->GetPlayer() !=  pToZone->GetPlayer())
		{
			pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetCardMovedEventSource()->RemoveListener(m_cpCardZoneListener.GetPointer());

			for (int i = 0; i < pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetSize() ; ++i)
				pFromZone->GetPlayer()->GetZoneById(counting_Zone)->GetAt(i)->GetCardTypeEventSource()->RemoveListener(m_cpCardTypeListener.GetPointer());

			pToZone->GetPlayer()->GetZoneById(counting_Zone)->GetCardMovedEventSource()->AddListener(m_cpCardZoneListener.GetPointer());

			for (int i = 0; i < pToZone->GetPlayer()->GetZoneById(counting_Zone)->GetSize() ; ++i)
				pToZone->GetPlayer()->GetZoneById(counting_Zone)->GetAt(i)->GetCardTypeEventSource()->AddListener(m_cpCardTypeListener.GetPointer());

			int m_ExtraManaCost;
			int affinitynumber = 0;
	
			for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				affinitynumber += m_AffinityFilter->CountIncluded(m_pCard->GetController()->GetZoneById(counting_Zone)->GetCardContainer());

			if ( CurrentAffinity == 0 && affinitynumber != 0)
			{
				m_ExtraManaCost =affinitynumber;
				const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
					spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
				CurrentAffinity = affinitynumber;
				return;
			}

			if ( CurrentAffinity != 0 &&  CurrentAffinity > affinitynumber ) 
			{
				m_ExtraManaCost =(CurrentAffinity-affinitynumber);
				const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
					spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, m_ExtraManaCost);
				CurrentAffinity = affinitynumber;
				return;
			}

			if ( CurrentAffinity != 0 &&  CurrentAffinity < affinitynumber ) 
			{
				m_ExtraManaCost =(affinitynumber-CurrentAffinity);
				const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
					spells.GetAt(i)->GetCost().AddReductionCost( m_Color, m_ExtraManaCost);
				CurrentAffinity = affinitynumber;
				return;
			}
		}

		/*	if (pFromZone && pFromZone->GetZoneId() == ZoneId::Hand)
		{
		const CPtrContainer_<CSpell>& spells(m_pCard->GetSpells());

		for (int i = 0; i < spells.GetSize(); ++i)
		spells.GetAt(i)->GetCost().RemoveReductionCost( m_Color, CurrentAffinity);
		CurrentAffinity = 0;
		return;
		}*/
}
//____________________________________________________________________________
//