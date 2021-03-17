#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
Counter::Counter(LPCTSTR strFullName, int nInitialCount)
	: m_strFullName(strFullName)
	, m_nCount(nInitialCount)
	, m_nPowerDelta(Power(0))
	, m_nToughnessDelta(Life(0))
	, m_pCounterContainer(NULL)
	, m_pStopped(0)
{
	int nIndex = m_strFullName.Find(_T('('));
	if (nIndex == -1 && !m_strFullName.IsEmpty())
	{
		if (_istalpha(m_strFullName[0]))
			m_Abbreviation = _totupper(m_strFullName[0]);
		else
			m_Abbreviation = m_strFullName[0];

		m_strName = strFullName;

		if (IsPTCounter())
		{
			if (m_Abbreviation == _T('+'))
				m_nPowerDelta = Power(_ttoi(strFullName + 1));
			else
				m_nPowerDelta = Power(_ttoi(strFullName));

			int nIndex = m_strFullName.Find(_T('/'));
			ATLASSERT(nIndex != -1);
			if (nIndex != -1)
			{
				if (strFullName[nIndex+1] == _T('+'))
					m_nToughnessDelta = Life(_ttoi(strFullName + nIndex + 2));
				else
					m_nToughnessDelta = Life(_ttoi(strFullName + nIndex + 1));
			}
			
			if (m_nToughnessDelta != Life(0))
			{
				if (m_nPowerDelta == Power(0))
					m_Abbreviation=strFullName[nIndex+1];
				else
					if (m_Abbreviation != strFullName[nIndex+1])
						m_Abbreviation=_T('±');
			}
		}
	}
	else
	{
		m_Abbreviation = m_strFullName[nIndex+1];
		m_strName = m_strFullName.Left(nIndex);
		m_strName.Trim();
	}
}

int Counter::GetCount() const 
{ 
	return m_nCount; 
}

CString Counter::GetFullName() const 
{ 
	return m_strFullName; 
}

CString Counter::GetName() const 
{ 
	return m_strName; 
}

TCHAR Counter::GetAbbreviation() const 
{ 
	return m_Abbreviation; 
}

bool Counter::IsPTCounter() const
{
	return m_Abbreviation == _T('+') || m_Abbreviation == _T('-') || m_Abbreviation == _T('±');
}

void Counter::SetCount(int nCount) 
{ 
	int nDelta = nCount - m_nCount;
	m_nCount = nCount;

	ChangePTCounter(nDelta);
}

void Counter::IncreaseCount(int nCount) 
{ 
	m_nCount += nCount; 

	ChangePTCounter(nCount);
}

void Counter::DecreaseCount(int nCount) 
{
	if (m_nCount >= nCount)
	{
		m_nCount -= nCount;
		ChangePTCounter(-nCount);
	}
	else
	{
		ChangePTCounter(-m_nCount);
		m_nCount = 0;
	}
}

CString Counter::ToString() const
{
	if (!m_nCount)
		return _T("");

	CString str;

	if (m_nCount > 3)
	{
		str.Format(_T("%d%c"), (int)m_nCount, m_Abbreviation);
		return str;
	}

	for (int i = 0; i < m_nCount; ++i)
		str += m_Abbreviation;

	return str;
}

void Counter::SetContainer(const CounterContainer* pCounterContainer)
{
	ChangePTCounter(-m_nCount);

	m_pCounterContainer = pCounterContainer;

	ChangePTCounter(m_nCount);
}

void Counter::ChangePTCounter(int nCount)
{
	if (!nCount || !m_pCounterContainer)
		return;

	if (IsPTCounter())
	{
		if (m_pCounterContainer->m_pCard->GetCardType().IsCreature() /* && m_pCounterContainer->m_pCard->IsInplay() */)
		{
			Power nPowerDelta(m_nPowerDelta * Power(nCount));
			Life nToughnessDelta(m_nToughnessDelta * Life(nCount));

			CCreatureCard* pCreatureCard = (CCreatureCard*)m_pCounterContainer->m_pCard;
			if (nToughnessDelta != Life(0))
			{
				pCreatureCard->IncreasePermanentLife(nToughnessDelta, FALSE);

				Damage damage;
				damage.m_DamageType  = DamageType::NotDealingDamage;
				damage.m_nLifeDelta  = nToughnessDelta;
				damage.m_Preventable = PreventableType::NotPreventable;
				damage.m_pSourceCard = pCreatureCard;
				pCreatureCard->ChangeLife(damage, TRUE);
			}

			if (nPowerDelta != Power(0))
			{
				pCreatureCard->IncreasePermanentPower(nPowerDelta, FALSE);
				pCreatureCard->IncreasePower(nPowerDelta, FALSE);
			}
			if(nCount>0 && GET_INTEGER(m_nPowerDelta) == GET_INTEGER(m_nToughnessDelta) && abs(GET_INTEGER(m_nPowerDelta)) == 1 && GetContainer()->CheckLimits(TRUE))
				GetContainer()->m_pCard->GetGame()->AddStatebasedHint(CGame::StatebasedHint::CounterDestruction);
		}
	}
}

//____________________________________________________________________________
//
CounterContainer::CounterContainer(CCard* pCard)
	: m_pCard(pCard)
	, m_WhenMoved(pCard, ZoneId::_AllZones, ZoneId::_AllZones, TRUE, TRUE)
	, m_ActiveZones(ZoneId::Battlefield)
{
	m_WhenMoved.SetEventCallback(CWhenSelfMoved::EventCallback(this, &CounterContainer::WhenCardMoved));
}

CounterContainer::~CounterContainer()
{
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
		++i)
		delete *i;
}

void CounterContainer::AddCounter(std::auto_ptr<Counter>& apCounter) 
{ 
	Counter* pCounter = apCounter.release();
	pCounter->SetContainer(this);
	m_Counters.push_back(pCounter); 
	if((pCounter->IsPTCounter()) && CheckLimits(TRUE))
		m_pCard->GetGame()->AddStatebasedHint(CGame::StatebasedHint::CounterDestruction);
}

void CounterContainer::ScheduleCounter(LPCTSTR strName, int nCount,		// set this counter to the value
									   bool bReplace,
									   ZoneId fromZone, ZoneId toZone,	// when the associated card changes zone
									   bool bBefore)					// true - set the counter before the zone change; false - after the zone change
{
	ScheduleEntry entry;
	entry.strCounter = strName;
	entry.nCount	 = nCount;
	entry.bReplace	 = bReplace;
	entry.fromZone	 = fromZone;
	entry.toZone	 = toZone;
	entry.bBefore	 = bBefore;

	m_Scheduled.push_back(entry);
}

Counter* CounterContainer::GetCounter(LPCTSTR strName)
{
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end(); ++i)
		if (!(*i)->GetName().CompareNoCase(strName))
			return *i;

	Counter* pNewCounter = new Counter(strName);
	pNewCounter->SetContainer(this);
	pNewCounter->SetStoppedValue(0);
	m_Counters.push_back(pNewCounter);
	return pNewCounter;
}

const Counter* CounterContainer::GetCounter(LPCTSTR strName) const
{
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end(); ++i)
		if (!(*i)->GetName().CompareNoCase(strName))
			return *i;

	return NULL;
}

//const LPCTSTR CounterContainer::GetCounterNameAt(int pos) const
//{
//	int k = 0;
//	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
//		++i)
//	{
//		k=k+1;
//		if (k == pos) return (*i)->GetName();
//	}
//
//	return NULL;
//}
//const int CounterContainer::GetSize() const
//{
//	int n = 0;
//	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
//		++i)
//		n = n+1;
//
//	return n;
//}
const bool CounterContainer::HasAnyCounters() const
{
	bool has_counters = false;
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
		++i)
		if ((*i)->GetCount() > 0) has_counters = true;
			

	return has_counters;
}

const bool CounterContainer::CheckLimits(BOOL bCheckOnly) const
{
	const Counter* plus=GetCounter(_T("+1/+1"));
	if (plus && plus->GetCount())
	{
		const Counter* minus=GetCounter(_T("-1/-1"));
		if (minus && minus->GetCount())
		{
			if (bCheckOnly)
			{
				return true;
			}

			int n = MIN(plus->GetCount(),minus->GetCount());

			const_cast<Counter*>(plus)->DecreaseCount(n);
			const_cast<Counter*>(minus)->DecreaseCount(n);
		}
	}
	return false;
}

void CounterContainer::RemoveAll()
{
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
		++i)
		(*i)->SetCount(0);
}

void CounterContainer::RemoveAllPTCounters()
{
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
		++i)
		if ((*i)->IsPTCounter())
			(*i)->SetCount(0);	
}

CString CounterContainer::ToString() const
{
	CString str;

	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end();
		++i)
		str.Append((*i)->ToString());

	return str;
}

void CounterContainer::WhenCardMoved(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone)
		return;

	if (pFromZone->GetZoneId() == ZoneId::_PhasedOut || pToZone->GetZoneId() == ZoneId::_PhasedOut) // when scheduled counter nullifier will be removed from the card this becomes obsolete
		return;


	bool bMoving = (m_pCard->GetZone() != pToZone);

	for (std::list<ScheduleEntry>::const_iterator i = m_Scheduled.begin(); i != m_Scheduled.end(); ++i)
	{
		if ((bMoving && !i->bBefore) || (!bMoving && i->bBefore))
			continue;

		if (!(pFromZone->GetZoneId() & i->fromZone).Any() || !(pToZone->GetZoneId() & i->toZone).Any())
			continue;

		int DoublingCount = 0;

		if (!m_pCard->GetCardKeyword()->HasCantGetCounters())
			DoublingCount = i->nCount;

		if (DoublingCount>0)
		{
			int nMultiplier = 0;
			if (pToZone->GetPlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE) && (pToZone->GetZoneId() == ZoneId::Battlefield))
				DoublingCount <<= nMultiplier;
			if (i->strCounter == _T("+1/+1") && m_pCard->GetCardType().IsCreature() && pToZone->GetPlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE) && (pToZone->GetZoneId() == ZoneId::Battlefield))
				DoublingCount <<= nMultiplier;
			// for Primal Vigor
			if (i->strCounter == _T("+1/+1") && m_pCard->GetCardType().IsCreature() && pToZone->GetPlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11CountersAlways, nMultiplier, FALSE) && (pToZone->GetZoneId() == ZoneId::Battlefield))
				DoublingCount <<= nMultiplier;
		}

		Counter* pCounter = GetCounter(i->strCounter);
		if (pCounter->IsStopped()) return;

		if (i->bReplace)
			pCounter->IncreaseCount(DoublingCount);
		else
			if (DoublingCount)
				pCounter->IncreaseCount(DoublingCount);
			else
				pCounter->DecreaseCount(i->nCount);		

	}
}

int CounterContainer::GetCount(LPCTSTR strName) const
{
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end(); ++i)
		if (!(*i)->GetName().CompareNoCase(strName))
			return (*i)->GetCount();

	return 0;
}

int CounterContainer::GetTotalCount() const
{
	int nCounters = 0;
	for (std::list<Counter*>::const_iterator i = m_Counters.begin(); i != m_Counters.end(); ++i)
		nCounters += (*i)->GetCount();
	
	return nCounters;
}