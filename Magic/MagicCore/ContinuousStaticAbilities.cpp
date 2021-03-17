#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CContinuousStaticAbility::CContinuousStaticAbility(CCard* pCard)
	: CSpell(pCard, AbilityType::Null, _T(""), FALSE)
{}

BOOL CContinuousStaticAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	return FALSE;
}

CActionContainer* CContinuousStaticAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	return NULL;
}

//____________________________________________________________________________
//
CCounterPwrTghAbility::CCounterPwrTghAbility(CCreatureCard* pCreatureCard, LPCTSTR counterName)
	: CContinuousStaticAbility(pCreatureCard)
	, m_CounterName(counterName)
	, m_nPowerBonus(Power(0))
	, m_nToughnessBonus(Life(0))
	, m_nVector(1)
	, m_cpAListener(VAR_NAME(m_cpAListener), CounterMovedEventSource::Listener::EventCallback(this, &CCounterPwrTghAbility::OnCounterMoved))
	, m_WhenSelfMoved(pCreatureCard ? pCreatureCard : pCreatureCard, ZoneId::_AllZones, ZoneId::_AllZones) 
{
	ATLASSERT(pCreatureCard->GetCardType().IsCreature());

	pCreatureCard->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	AddAbilityTag(AbilityTag::CreatureChange);

	
	m_WhenSelfMoved.SetReportInPlayChanges(TRUE); // Notify when moving from in-play to in-play also

	m_WhenSelfMoved.SetEventCallback(
		CWhenSelfMoved::EventCallback(this, &CCounterPwrTghAbility::OnZoneChanged));
}

void CCounterPwrTghAbility::SetPwrTghBonus(Power nPower, Life nToughnessBonus)
{
	m_nPowerBonus = nPower;
	m_nToughnessBonus = nToughnessBonus;
}

void CCounterPwrTghAbility::SetMultiplier(int nVector)
{
	m_nVector = nVector;
}

void CCounterPwrTghAbility::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (!GetEnabled() || n_value == old || m_CounterName.Compare(name))
		return;

	Power nPower = Power(m_nVector * n_value) + m_nPowerBonus;
	Life nToughness = Life(m_nVector * n_value) + m_nToughnessBonus;

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(GetCard());
	if (!pCreatureCard) return;

	pCreatureCard->SetPermanentPower(nPower, true);
	pCreatureCard->SetPower(nPower, true);

	pCreatureCard->SetPermanentLife(nToughness, true);
	pCreatureCard->SetLife(pCreatureCard, nToughness);
}

void CCounterPwrTghAbility::SetEnabled(BOOL bEnabled)
{
	__super::SetEnabled(bEnabled);

	int nCounters = GetCard()->GetCounterContainer()->GetCounter(m_CounterName)->GetCount();

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(GetCard());
	if (!pCreatureCard) return;

	Power nPower = Power(m_nVector * nCounters) + m_nPowerBonus;
	Life nToughness = Life(m_nVector * nCounters) + m_nToughnessBonus;

	if (bEnabled)
	{
		pCreatureCard->SetPermanentPower(nPower, true);
		pCreatureCard->SetPower(nPower, true);

		pCreatureCard->SetPermanentLife(nToughness, true);
		pCreatureCard->SetLife(pCreatureCard, nToughness);
	}
	else
	{
		pCreatureCard->DecreasePermanentPower(nPower, true);
		pCreatureCard->DecreasePower(nPower, true);

		pCreatureCard->DecreasePermanentLife(nToughness, true);
		pCreatureCard->ChangeLife(Damage(pCreatureCard, -nToughness, PreventableType::NotPreventable, DamageType::NotDealingDamage), true);
	}
}
void CCounterPwrTghAbility::OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ZoneId fromZone = pFromZone ? pFromZone->GetZoneId() : ZoneId::Null;
	ZoneId toZone = pToZone ? pToZone->GetZoneId() : ZoneId::Null;

	if ((fromZone != ZoneId::Battlefield) && (toZone == ZoneId::Battlefield))
	{ 
	int nCounters = GetCard()->GetCounterContainer()->GetCounter(m_CounterName)->GetCount();

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(GetCard());
	if (!pCreatureCard) return;

	Power nPower = Power(m_nVector * nCounters) + m_nPowerBonus;
	Life nToughness = Life(m_nVector * nCounters) + m_nToughnessBonus;

	if (m_bEnabled)
	{
		pCreatureCard->SetPermanentPower(nPower, true);
		pCreatureCard->SetPower(nPower, true);

		pCreatureCard->SetPermanentLife(nToughness, true);
		pCreatureCard->SetLife(pCreatureCard, nToughness);
	}
	else
	{
		pCreatureCard->DecreasePermanentPower(nPower, true);
		pCreatureCard->DecreasePower(nPower, true);

		pCreatureCard->DecreasePermanentLife(nToughness, true);
		pCreatureCard->ChangeLife(Damage(pCreatureCard, -nToughness, PreventableType::NotPreventable, DamageType::NotDealingDamage), true);
	}
	}

}
//____________________________________________________________________________
//
