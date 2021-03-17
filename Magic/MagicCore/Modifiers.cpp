#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CCardModifier::~CCardModifier() 
{
}

void CCardModifier::ApplyTo(CCard* pCard) const
{
	for (std::list<const CCardModifier*>::const_iterator i = m_LinkedCardModifiers.begin(); i != m_LinkedCardModifiers.end(); ++i)
		(*i)->ApplyTo(pCard);	
}

void CCardModifier::RemoveFrom(CCard* pCard) const
{
	for (std::list<const CCardModifier*>::const_iterator i = m_LinkedCardModifiers.begin(); i != m_LinkedCardModifiers.end(); ++i)
		(*i)->RemoveFrom(pCard);	
}

void CCardModifier::LinkCardModifier(const CCardModifier* pModifier)
{
	m_LinkedCardModifiers.push_back(pModifier);
}

bool CCardModifier::Equals(const CCardModifier& modifier) const
{
	size_t nSize = m_LinkedCardModifiers.size();
	if (nSize != modifier.m_LinkedCardModifiers.size())
		return false;

	if (!nSize)
		return true;

	if (nSize == 1)
		return 	m_LinkedCardModifiers.front()->Equals(*(modifier.m_LinkedCardModifiers.front()));

	std::list<const CCardModifier*> temp(modifier.m_LinkedCardModifiers);
	for (std::list<const CCardModifier*>::const_iterator i = m_LinkedCardModifiers.begin(); i != m_LinkedCardModifiers.end(); ++i)
	{
		bool bFound = false;
		for (std::list<const CCardModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
			if ((*i)->Equals(*(*j)))
			{
				temp.erase(j);
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
void CCardModifiers::Clear()
{
	for (std::list<CCardModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		delete (*i);

	m_Modifiers.clear();
}

void CCardModifiers::Add(CCardModifier* pModifier)
{
	m_Modifiers.push_back(pModifier);
}

void CCardModifiers::Clone(CCardModifiers& modifiers) const
{
	modifiers.Clear();
	for (std::list<CCardModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		modifiers.m_Modifiers.push_back((*i)->CloneCardModifier());
}

void CCardModifiers::ApplyTo(CCard* pCard) const
{
	for (std::list<CCardModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		(*i)->ApplyTo(pCard);
}

void CCardModifiers::RemoveFrom(CCard* pCard) const
{
	for (std::list<CCardModifier*>::const_reverse_iterator i = m_Modifiers.rbegin(); i != m_Modifiers.rend(); ++i)
		(*i)->RemoveFrom(pCard);
}

bool CCardModifiers::Equals(const CCardModifiers& modifiers) const
{
	size_t nSize = m_Modifiers.size();
	if (nSize != modifiers.m_Modifiers.size())
		return false;

	if (!nSize)
		return true;

	if (nSize == 1)
		return m_Modifiers.front()->Equals(*(modifiers.m_Modifiers.front()));

	std::list<CCardModifier*> temp(modifiers.m_Modifiers);
	for (std::list<CCardModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
	{
		bool bFound = false;
		for (std::list<CCardModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
			if ((*i)->Equals(*(*j)))
			{
				temp.erase(j);
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	return true;
}

CCardModifiers& CCardModifiers::operator=(const CCardModifiers& modifiers)
{
	if (this == &modifiers)
		return *this;

	modifiers.Clone(*this);

	return *this;
}

//____________________________________________________________________________
//
CCreatureModifier::~CCreatureModifier() 
{
}

void CCreatureModifier::ApplyTo(CCreatureCard* pCreature) const
{
	for (std::list<const CCardModifier*>::const_iterator i = m_LinkedCardModifiers.begin(); i != m_LinkedCardModifiers.end(); ++i)
		(*i)->ApplyTo(pCreature);	

	for (std::list<const CCreatureModifier*>::const_iterator i = m_LinkedCreatureModifiers.begin(); i != m_LinkedCreatureModifiers.end(); ++i)
		(*i)->ApplyTo(pCreature);	
}

void CCreatureModifier::RemoveFrom(CCreatureCard* pCreature) const
{
	for (std::list<const CCreatureModifier*>::const_iterator i = m_LinkedCreatureModifiers.begin(); i != m_LinkedCreatureModifiers.end(); ++i)
		(*i)->RemoveFrom(pCreature);

	for (std::list<const CCardModifier*>::const_iterator i = m_LinkedCardModifiers.begin(); i != m_LinkedCardModifiers.end(); ++i)
		(*i)->RemoveFrom(pCreature);	
}

void CCreatureModifier::LinkCardModifier(const CCardModifier* pModifier)
{
	m_LinkedCardModifiers.push_back(pModifier);
}

void CCreatureModifier::LinkCreatureModifier(const CCreatureModifier* pModifier)
{
	m_LinkedCreatureModifiers.push_back(pModifier);
}

bool CCreatureModifier::Equals(const CCreatureModifier& modifier) const
{
	{
		size_t nSize = m_LinkedCreatureModifiers.size();
		if (nSize != modifier.m_LinkedCreatureModifiers.size())
			return false;

		if (!nSize)
			return true;

		if (nSize == 1)
			return 	m_LinkedCreatureModifiers.front()->Equals(*(modifier.m_LinkedCreatureModifiers.front()));

		std::list<const CCreatureModifier*> temp(modifier.m_LinkedCreatureModifiers);
		for (std::list<const CCreatureModifier*>::const_iterator i = m_LinkedCreatureModifiers.begin(); i != m_LinkedCreatureModifiers.end(); ++i)
		{
			bool bFound = false;
			for (std::list<const CCreatureModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
				if ((*i)->Equals(*(*j)))
				{
					temp.erase(j);
					bFound = true;
					break;
				}

			if (!bFound)
				return false;
		}
	}

	{
		size_t nSize = m_LinkedCardModifiers.size();
		if (nSize != modifier.m_LinkedCardModifiers.size())
			return false;

		if (!nSize)
			return true;

		if (nSize == 1)
			return 	m_LinkedCardModifiers.front()->Equals(*(modifier.m_LinkedCardModifiers.front()));

		std::list<const CCardModifier*> temp(modifier.m_LinkedCardModifiers);
		for (std::list<const CCardModifier*>::const_iterator i = m_LinkedCardModifiers.begin(); i != m_LinkedCardModifiers.end(); ++i)
		{
			bool bFound = false;
			for (std::list<const CCardModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
				if ((*i)->Equals(*(*j)))
				{
					temp.erase(j);
					bFound = true;
					break;
				}

			if (!bFound)
				return false;
		}
	}

	return true;
}

//____________________________________________________________________________
//
void CCreatureModifiers::Clear()
{
	for (std::list<CCreatureModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		delete (*i);

	m_Modifiers.clear();
}

void CCreatureModifiers::Add(CCreatureModifier* pModifier)
{
	m_Modifiers.push_back(pModifier);
}

void CCreatureModifiers::Clone(CCreatureModifiers& modifiers) const
{
	modifiers.Clear();
	for (std::list<CCreatureModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		modifiers.m_Modifiers.push_back((*i)->CloneCreatureModifier());
}

void CCreatureModifiers::ApplyTo(CCreatureCard* pCreature) const
{
	for (std::list<CCreatureModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		(*i)->ApplyTo(pCreature);
}

void CCreatureModifiers::RemoveFrom(CCreatureCard* pCreature) const
{
	for (std::list<CCreatureModifier*>::const_reverse_iterator i = m_Modifiers.rbegin(); i != m_Modifiers.rend(); ++i)
		(*i)->RemoveFrom(pCreature);
}

bool CCreatureModifiers::Equals(const CCreatureModifiers& modifiers) const
{
	size_t nSize = m_Modifiers.size();
	if (nSize != modifiers.m_Modifiers.size())
		return false;

	if (!nSize)
		return true;

	if (nSize == 1)
		return m_Modifiers.front()->Equals(*(modifiers.m_Modifiers.front()));

	std::list<CCreatureModifier*> temp(modifiers.m_Modifiers);
	for (std::list<CCreatureModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
	{
		bool bFound = false;
		for (std::list<CCreatureModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
			if ((*i)->Equals(*(*j)))
			{
				temp.erase(j);
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	return true;
}

CCreatureModifiers& CCreatureModifiers::operator=(const CCreatureModifiers& modifiers)
{
	if (this == &modifiers)
		return *this;

	modifiers.Clone(*this);

	return *this;
}

//____________________________________________________________________________
//
CPlayerModifier::~CPlayerModifier() 
{
}

void CPlayerModifier::ApplyTo(CPlayer* pPlayer) const
{
	for (std::list<const CPlayerModifier*>::const_iterator i = m_LinkedPlayerModifiers.begin(); i != m_LinkedPlayerModifiers.end(); ++i)
		(*i)->ApplyTo(pPlayer);	
}

void CPlayerModifier::RemoveFrom(CPlayer* pPlayer) const
{
	for (std::list<const CPlayerModifier*>::const_iterator i = m_LinkedPlayerModifiers.begin(); i != m_LinkedPlayerModifiers.end(); ++i)
		(*i)->RemoveFrom(pPlayer);	
}

void CPlayerModifier::LinkPlayerModifier(const CPlayerModifier* pModifier)
{
	m_LinkedPlayerModifiers.push_back(pModifier);
}

bool CPlayerModifier::Equals(const CPlayerModifier& modifier) const
{
	size_t nSize = m_LinkedPlayerModifiers.size();
	if (nSize != modifier.m_LinkedPlayerModifiers.size())
		return false;

	if (!nSize)
		return true;

	if (nSize == 1)
		return 	m_LinkedPlayerModifiers.front()->Equals((*modifier.m_LinkedPlayerModifiers.front()));

	std::list<const CPlayerModifier*> temp(modifier.m_LinkedPlayerModifiers);
	for (std::list<const CPlayerModifier*>::const_iterator i = m_LinkedPlayerModifiers.begin(); i != m_LinkedPlayerModifiers.end(); ++i)
	{
		bool bFound = false;
		for (std::list<const CPlayerModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
			if ((*i)->Equals(*(*j)))
			{
				temp.erase(j);
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
void CPlayerModifiers::Clear()
{
	for (std::list<CPlayerModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		delete (*i);

	m_Modifiers.clear();
}

void CPlayerModifiers::Add(CPlayerModifier* pModifier)
{
	m_Modifiers.push_back(pModifier);
}

void CPlayerModifiers::Clone(CPlayerModifiers& modifiers) const
{
	modifiers.Clear();
	for (std::list<CPlayerModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		modifiers.m_Modifiers.push_back((*i)->ClonePlayerModifier());
}

void CPlayerModifiers::ApplyTo(CPlayer* pPlayer) const
{
	for (std::list<CPlayerModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
		(*i)->ApplyTo(pPlayer);
}

void CPlayerModifiers::RemoveFrom(CPlayer* pPlayer) const
{
	for (std::list<CPlayerModifier*>::const_reverse_iterator i = m_Modifiers.rbegin(); i != m_Modifiers.rend(); ++i)
		(*i)->RemoveFrom(pPlayer);
}

bool CPlayerModifiers::Equals(const CPlayerModifiers& modifiers) const
{
	size_t nSize = m_Modifiers.size();
	if (nSize != modifiers.m_Modifiers.size())
		return false;

	if (!nSize)
		return true;

	if (nSize == 1)
		return m_Modifiers.front()->Equals(*(modifiers.m_Modifiers.front()));

	std::list<CPlayerModifier*> temp(modifiers.m_Modifiers);
	for (std::list<CPlayerModifier*>::const_iterator i = m_Modifiers.begin(); i != m_Modifiers.end(); ++i)
	{
		bool bFound = false;
		for (std::list<CPlayerModifier*>::iterator j = temp.begin(); j != temp.end(); ++j)
			if ((*i)->Equals(*(*j)))
			{
				temp.erase(j);
				bFound = true;
				break;
			}

		if (!bFound)
			return false;
	}

	return true;
}

CPlayerModifiers& CPlayerModifiers::operator=(const CPlayerModifiers& modifiers)
{
	if (this == &modifiers)
		return *this;

	modifiers.Clone(*this);

	return *this;
}

//____________________________________________________________________________
//
CCreatureKeywordModifier::CCreatureKeywordModifier(CreatureKeyword keyword, BOOL bAdd, BOOL bOneTurnOnly)
{
	if (bAdd)
		m_Modifier.SetToAdd(keyword);
	else
		m_Modifier.SetToRemove(keyword);

	m_Modifier.SetOneTurnOnly(bOneTurnOnly);

}

void CCreatureKeywordModifier::ApplyTo(CCreatureCard* pCreature) const
{
	__super::ApplyTo(pCreature);

	if (m_Modifier.GetToAdd() == CreatureKeyword::SwitchedPT && pCreature->GetCreatureKeyword()->SwitchedPT())
		m_Modifier.RemoveFrom(pCreature->GetCreatureKeyword());
	else
		m_Modifier.ApplyTo(pCreature->GetCreatureKeyword());

	if (pCreature->GetCardType().IsCreature()) pCreature->CheckDying(TRUE);
}

void CCreatureKeywordModifier::RemoveFrom(CCreatureCard* pCreature) const 
{
	m_Modifier.RemoveFrom(pCreature->GetCreatureKeyword());

	__super::RemoveFrom(pCreature);	

	if (pCreature->GetCardType().IsCreature()) pCreature->CheckDying(TRUE);
}

//____________________________________________________________________________
//
void CCardFlagModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_Modifier.ApplyTo(pCard->GetCardFlag());
}

void CCardFlagModifier::RemoveFrom(CCard* pCard) const 
{
	m_Modifier.RemoveFrom(pCard->GetCardFlag());

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CCreatureFlagModifier::ApplyTo(CCreatureCard* pCreature) const
{
	__super::ApplyTo(pCreature);

	m_Modifier.ApplyTo(pCreature->GetCreatureFlag());
}

void CCreatureFlagModifier::RemoveFrom(CCreatureCard* pCreature) const 
{
	m_Modifier.RemoveFrom(pCreature->GetCreatureFlag());

	__super::RemoveFrom(pCreature);
}

//____________________________________________________________________________
//
CCardKeywordModifier::CCardKeywordModifier(CardKeyword keyword, BOOL bAdd, BOOL bOneTurnOnly)
{
	if (bAdd)
		m_Modifier.SetToAdd(keyword);
	else
		m_Modifier.SetToRemove(keyword);

	m_Modifier.SetOneTurnOnly(bOneTurnOnly);
}

void CCardKeywordModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_Modifier.ApplyTo(pCard->GetCardKeyword());

	if (!pCard->GetCardType().IsCreature()) return;

	if 	((m_Modifier.GetToAdd() & CardKeyword::Changeling).Any() || 
		(m_Modifier.GetToRemove() & CardKeyword::Changeling).Any())
		((CCreatureCard*)pCard)->GetCreatureTypeEventSource()->FireEvent(pCard);

}

void CCardKeywordModifier::RemoveFrom(CCard* pCard) const 
{
	m_Modifier.RemoveFrom(pCard->GetCardKeyword());

	if (pCard->GetCardType().IsCreature())
		{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		pCreature->CheckDying(TRUE);

		if 	((m_Modifier.GetToAdd() & CardKeyword::Changeling).Any() || 
		(m_Modifier.GetToRemove() & CardKeyword::Changeling).Any())
		((CCreatureCard*)pCard)->GetCreatureTypeEventSource()->FireEvent(pCard);
		}

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CReplacementKeywordModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_Modifier.ApplyTo(pCard->GetReplacementKeyword());
}

void CReplacementKeywordModifier::RemoveFrom(CCard* pCard) const 
{
	m_Modifier.RemoveFrom(pCard->GetReplacementKeyword());

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
Life CLifeModifier::GetEffectiveLifeDelta(const CPlayer* pPlayer) const
{
	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)));
		if (SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)))
			return Life(0);

		return m_nLifeDelta - pPlayer->GetLife();
	}

	Life nLifeDelta(m_nLifeDelta);
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundUp))
	{
		Life nPreviousLife(pPlayer->GetLife());
		Life nNewLife(nPreviousLife / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundDown))
	{
		Life nPreviousLife(pPlayer->GetLife());
		Life nNewLife((nPreviousLife + Life(1)) / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::MultiplyBy2))
	{
		nLifeDelta = pPlayer->GetLife();
	}

	return nLifeDelta;
}

void CLifeModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	ATLASSERT(m_pSourceCard);

	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)));
		if (SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)))
			return;

		pPlayer->SetLife(m_nLifeDelta);
		return;
	}

	Life nLifeDelta(m_nLifeDelta);
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundUp))
	{
		Life nPreviousLife(pPlayer->GetLife());
		Life nNewLife(nPreviousLife / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundDown))
	{
		Life nPreviousLife(pPlayer->GetLife());
		Life nNewLife((nPreviousLife + Life(1)) / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::MultiplyBy2))
	{
		nLifeDelta = pPlayer->GetLife();
	}

	if (nLifeDelta == Life(0))
		return;

	pPlayer->ChangeLife(
		Damage(m_pSourceCard, nLifeDelta, m_Preventable, m_DamageType));	
}

void CLifeModifier::RemoveFrom(CPlayer* pPlayer) const
{
	ATLASSERT(m_pSourceCard);
	ATLASSERT(!m_bOneTurnOnly);
	ATLASSERT(!m_bReplacement);
	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)));

	if (m_bReplacement || SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)))
		return;

	if (m_nLifeDelta == Life(0))
		return;

	pPlayer->ChangeLife(
		Damage(m_pSourceCard, -m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage));

	__super::RemoveFrom(pPlayer);
}

Life CLifeModifier::GetEffectiveLifeDelta(const CCreatureCard* pCard) const
{
	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)));
		if (SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)))
			return Life(0);

		return pCard->GetLife() - m_nLifeDelta;
	}

	Life nLifeDelta(m_nLifeDelta);
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundUp))
	{
		Life nPreviousLife(pCard->GetLife());
		Life nNewLife(nPreviousLife / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundDown))
	{
		Life nPreviousLife(pCard->GetLife());
		Life nNewLife((nPreviousLife + Life(1)) / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::MultiplyBy2))
	{
		nLifeDelta = pCard->GetLife();
	}

	return nLifeDelta;
}

void CLifeModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);

	ATLASSERT(m_pSourceCard);

	if (pCard->GetZoneId() != ZoneId::Battlefield) return;

	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)));
		if (SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)))
			return;
		Life prev_damage = pCard->GetDamage();
		
		if (!m_bOneTurnOnly)
			pCard->SetPermanentLife(m_nLifeDelta, m_bToBase);
		
		pCard->SetLife(m_pSourceCard, m_nLifeDelta);
		
		if (prev_damage<Life(0)) pCard->SetDamage(prev_damage);
		return;
	}

	Life nLifeDelta(m_nLifeDelta);
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundUp))
	{
		Life nPreviousLife(pCard->GetLife());
		Life nNewLife(nPreviousLife / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::DivideBy2RoundDown))
	{
		Life nPreviousLife(pCard->GetLife());
		Life nNewLife((nPreviousLife + Life(1)) / Life(2));
		nLifeDelta = nNewLife - nPreviousLife;
	}
	else
	if (m_nLifeDelta == Life(SpecialNumber::MultiplyBy2))
	{
		nLifeDelta = pCard->GetLife();
	}

	if (nLifeDelta == Life(0))
		return;

	if (!m_bOneTurnOnly)
		pCard->IncreasePermanentLife(nLifeDelta, m_bToBase);

	pCard->ChangeLife(
		Damage(m_pSourceCard, nLifeDelta, m_Preventable, m_DamageType), m_bToBase);
}

void CLifeModifier::RemoveFrom(CCreatureCard* pCard) const
{
	ATLASSERT(m_pSourceCard);
	ATLASSERT(!m_bOneTurnOnly);
	ATLASSERT(!m_bReplacement);
	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)));

	if (pCard->GetZoneId() != ZoneId::Battlefield) return;

	if (m_bReplacement || SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nLifeDelta)))
		return;

	if (m_nLifeDelta == Life(0))
		return;

	pCard->IncreasePermanentLife(-m_nLifeDelta, m_bToBase);

	pCard->ChangeLife(
		Damage(m_pSourceCard, -m_nLifeDelta, PreventableType::NotPreventable, DamageType::NotDealingDamage), m_bToBase);

	__super::RemoveFrom(pCard);
}

void CLifeModifier::ApplyTo(CPlaneswalkerCard* pPlaneswalker) const
{
	ATLASSERT(m_pSourceCard);

	if (pPlaneswalker->GetZoneId() != ZoneId::Battlefield) return;
	
	int dLifeDelta = GET_INTEGER(m_nLifeDelta);

	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(dLifeDelta));
		if (SpecialNumber::IsSpecialNumber(dLifeDelta))
			return;
		
		int old = pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->GetCount();
		pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->SetCount(dLifeDelta);

		const_cast<CCard*>((CCard*)pPlaneswalker)->CounterMoved(pPlaneswalker, LOYALTY_COUNTER, old, dLifeDelta);
		return;
	}


	if (dLifeDelta == SpecialNumber::DivideBy2RoundUp)
		dLifeDelta = pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->GetCount() / 2;
	else if (dLifeDelta == SpecialNumber::DivideBy2RoundDown)
		dLifeDelta = (pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->GetCount() + 1) / 2;
	else if (dLifeDelta == SpecialNumber::MultiplyBy2)
	{
		dLifeDelta = pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->GetCount();
	}

	if (dLifeDelta == 0)
		return;

	int old = pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->GetCount();

	pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->IncreaseCount(dLifeDelta);

	const_cast<CCard*>((CCard*)pPlaneswalker)->CounterMoved(pPlaneswalker, LOYALTY_COUNTER, old, old+dLifeDelta);
}

void CLifeModifier::RemoveFrom(CPlaneswalkerCard* pPlaneswalker) const
{
	ATLASSERT(m_pSourceCard);
	ATLASSERT(!m_bOneTurnOnly);
	ATLASSERT(!m_bReplacement);

	if (pPlaneswalker->GetZoneId() != ZoneId::Battlefield) return;

	int dLifeDelta = GET_INTEGER(m_nLifeDelta);

	ATLASSERT(!SpecialNumber::IsSpecialNumber(dLifeDelta));

	if (m_bReplacement || SpecialNumber::IsSpecialNumber(dLifeDelta))
		return;

	if (dLifeDelta == 0)
		return;
	
	pPlaneswalker->GetCounterContainer()->GetCounter(LOYALTY_COUNTER)->DecreaseCount(dLifeDelta);
}

//____________________________________________________________________________
//
Power CPowerModifier::GetEffectivePowerDelta(const CCreatureCard* pCard) const
{
	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nPowerDelta)));
		if (SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nPowerDelta)))
			return Power(0);

		return pCard->GetPower() - m_nPowerDelta; 
	}

	Power nPowerDelta(m_nPowerDelta);
	if (m_nPowerDelta == Power(SpecialNumber::DivideBy2RoundUp))
	{
		Power nPreviousPower(pCard->GetPower());
		Power nNewPower(nPreviousPower / Power(2));
		nPowerDelta = nNewPower - nPreviousPower;
	}
	else
	if (m_nPowerDelta == Power(SpecialNumber::DivideBy2RoundDown))
	{
		Power nPreviousPower(pCard->GetPower());
		Power nNewPower((nPreviousPower + Power(1)) / Power(2));
		nPowerDelta = nNewPower - nPreviousPower;
	}
	else
	if (m_nPowerDelta == Power(SpecialNumber::MultiplyBy2))
	{
		nPowerDelta = pCard->GetPower();
	}

	return nPowerDelta;
}

void CPowerModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);

	if (pCard->GetZoneId() != ZoneId::Battlefield) return;

	if (m_bReplacement)
	{
		ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nPowerDelta)));
		if (SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nPowerDelta)))
			return;

		if (!m_bOneTurnOnly)
			pCard->SetPermanentPower(m_nPowerDelta, m_bToBase);

		pCard->SetPower(m_nPowerDelta, m_bToBase);
		return;
	}

	Power nPowerDelta(m_nPowerDelta);
	if (m_nPowerDelta == Power(SpecialNumber::DivideBy2RoundUp))
	{
		Power nPreviousPower(pCard->GetPower());
		Power nNewPower(nPreviousPower / Power(2));
		nPowerDelta = nNewPower - nPreviousPower;
	}
	else
	if (m_nPowerDelta == Power(SpecialNumber::DivideBy2RoundDown))
	{
		Power nPreviousPower(pCard->GetPower());
		Power nNewPower((nPreviousPower + Power(1)) / Power(2));
		nPowerDelta = nNewPower - nPreviousPower;
	}
	else
	if (m_nPowerDelta == Power(SpecialNumber::MultiplyBy2))
	{
		nPowerDelta = pCard->GetPower();
	}

	if (nPowerDelta == Power(0))
		return;

	if (!m_bOneTurnOnly)
		pCard->IncreasePermanentPower(nPowerDelta, m_bToBase);

	pCard->IncreasePower(nPowerDelta, m_bToBase);
}

void CPowerModifier::RemoveFrom(CCreatureCard* pCard) const
{
	ATLASSERT(!m_bOneTurnOnly);
	ATLASSERT(!m_bReplacement);
	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nPowerDelta)));

	if (pCard->GetZoneId() != ZoneId::Battlefield) return;

	if (m_bReplacement || SpecialNumber::IsSpecialNumber(GET_INTEGER(m_nPowerDelta)))
		return;

	if (m_nPowerDelta == Power(0))
		return;

	if (!m_bOneTurnOnly)
		pCard->DecreasePermanentPower(m_nPowerDelta, m_bToBase);

	pCard->DecreasePower(m_nPowerDelta, m_bToBase);

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
CString GetCreatureGainString(const CCreatureCard* pCreature, 
							  const CPowerModifier* pPowerModifier, 
							  const CLifeModifier* pLifeModifier,
							  const CCreatureKeywordModifier* pCreatureKeywordModifier,
							  const CCardKeywordModifier* pCardKeywordModifier)
{
	enum ChangeType
	{
		Permanent,
		Turn,
	};
	std::vector<std::pair<ChangeType, CString>> gains;
	std::vector<std::pair<ChangeType, CString>> removes;

	CString str;

	if (pPowerModifier && pLifeModifier)
	{
		Life nEffectiveLifeDelta(pLifeModifier->GetEffectiveLifeDelta(pCreature));
		Power nEffectivePowerDelta(pPowerModifier->GetEffectivePowerDelta(pCreature));

		if (nEffectiveLifeDelta != Life(0) || nEffectivePowerDelta != Power(0))
		{
			str.Format(
				_T("gets %s%d/%s%d"),
				(nEffectivePowerDelta >= Power(0)) ? _T("+") : _T(""),
				nEffectivePowerDelta,
				(nEffectiveLifeDelta >= Life(0)) ? _T("+") : _T(""),
				nEffectiveLifeDelta);

			ATLASSERT(pPowerModifier->GetOneTurnOnly() == pLifeModifier->GetOneTurnOnly());
			if (pPowerModifier->GetOneTurnOnly() || pLifeModifier->GetOneTurnOnly())
				gains.push_back(std::make_pair(Turn, str));
			else
				gains.push_back(std::make_pair(Permanent, str));
		}
	}

	bool bGainsAdded = false;
	if (pCreatureKeywordModifier)
	{
		if (pCreatureKeywordModifier->GetModifier().GetToAdd().Any())
		{
			gains.push_back(std::make_pair(
				pCreatureKeywordModifier->GetModifier().GetOneTurnOnly() ? Turn : Permanent,
				_T("gains ") + pCreatureKeywordModifier->GetModifier().GetToAdd().ToString()));
			bGainsAdded = true;
		}

		if (pCreatureKeywordModifier->GetModifier().GetToRemove().Any())
			removes.push_back(std::make_pair(
				pCreatureKeywordModifier->GetModifier().GetOneTurnOnly() ? Turn : Permanent,
				pCreatureKeywordModifier->GetModifier().GetToRemove().ToString()));
	}

	if (pCardKeywordModifier)
	{
		if (pCardKeywordModifier->GetModifier().GetToAdd().Any())
		{
			gains.push_back(std::make_pair(
				pCardKeywordModifier->GetModifier().GetOneTurnOnly() ? Turn : Permanent,
				(bGainsAdded ? _T("") : _T("gains ")) + pCardKeywordModifier->GetModifier().GetToAdd().ToString()));
		}

		if (pCardKeywordModifier->GetModifier().GetToRemove().Any())
			removes.push_back(std::make_pair(
				pCardKeywordModifier->GetModifier().GetOneTurnOnly() ? Turn : Permanent,
				pCardKeywordModifier->GetModifier().GetToRemove().ToString()));
	}

	if (!gains.size() && !removes.size())
		return _T("");

	bool bAllTurnOnly = true;
	for (size_t i = 0; i < gains.size(); ++i)
		if (gains[i].first == Permanent)
		{
			bAllTurnOnly = false;
			break;
		}

	if (bAllTurnOnly)
		for (size_t i = 0; i < removes.size(); ++i)
			if (removes[i].first == Permanent)
			{
				bAllTurnOnly = false;
				break;
			}

	// Gain

	str.Empty();
	if (gains.size())
	{
		for (size_t i = 0; i < gains.size(); ++i)
		{
			if (i)
				if (i != gains.size() - 1)
					str += _T(", ");
				else
					str += _T(" and ");

			str += gains[i].second;
			if (!bAllTurnOnly && gains[i].first == Turn)
				str += _T(" (until end of turn)");
		}
	}

	if (removes.size())
	{
		if (gains.size())
			str += _T(", ");
		str += _T("loses ");

		for (size_t i = 0; i < removes.size(); ++i)
		{
			if (i)
				if (i != removes.size() - 1)
					str += _T(", ");
				else
					str += _T(" and ");

			str += removes[i].second;
			if (!bAllTurnOnly && removes[i].first == Turn)
				str += _T(" (until end of turn)");
		}
	}

	if (bAllTurnOnly)
		str += _T(" until end of turn");

	return str;
}

//____________________________________________________________________________
//
CCardAbilityModifier::CCardAbilityModifier(
	CreateAbilityCallback createAbilityCallback,
	PostAdditionCallback postAdditionCallback)
	: m_CreateAbilityCallback(createAbilityCallback)
	, m_PostAdditionCallback(postAdditionCallback)
{
}

void CCardAbilityModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	counted_ptr<CAbility> cpAbility(m_CreateAbilityCallback(pCard));
	if (!cpAbility.GetPointer())
		return;

	cpAbility->DefineGameClassID();

	pCard->AddAbility(cpAbility.GetPointer());

	if (!m_PostAdditionCallback.empty())
		m_PostAdditionCallback(cpAbility.GetPointer());

	m_AddedAbilities.Add(cpAbility.GetPointer());
}

void CCardAbilityModifier::RemoveFrom(CCard* pCard) const
{
	for (int i = m_AddedAbilities.GetSize() - 1; i >= 0; --i)
	{
		CAbility* pAbility = m_AddedAbilities.GetAt(i);
		if (pAbility->GetCard() == pCard)
		{
			m_AddedAbilities.RemoveAt(i);

			pCard->RemoveAbility(pAbility);

			__super::RemoveFrom(pCard);

			return;
		}
	}

	__super::RemoveFrom(pCard);

	ATLASSERT(false);
}

//____________________________________________________________________________
//
CCardSpellModifier::CCardSpellModifier(
	CreateSpellCallback createSpellCallback,
	PostAdditionCallback postAdditionCallback)
	: m_CreateSpellCallback(createSpellCallback)
	, m_PostAdditionCallback(postAdditionCallback)
{
}

void CCardSpellModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	counted_ptr<CSpell> cpSpell(m_CreateSpellCallback(pCard));
	if (!cpSpell.GetPointer())
		return;

	cpSpell->DefineGameClassID();

	pCard->AddSpell(cpSpell.GetPointer());

	if (!m_PostAdditionCallback.empty())
		m_PostAdditionCallback(cpSpell.GetPointer());

	m_AddedAbilities.Add(cpSpell.GetPointer());
}

void CCardSpellModifier::RemoveFrom(CCard* pCard) const
{
	for (int i = m_AddedAbilities.GetSize() - 1; i >= 0; --i)
	{
		CSpell* pSpell = m_AddedAbilities.GetAt(i);
		if (pSpell->GetCard() == pCard)
		{
			m_AddedAbilities.RemoveAt(i);

			pCard->RemoveSpell(pCard->GetSpells().FindIndex(pSpell));

			__super::RemoveFrom(pCard);

			return;
		}
	}

	__super::RemoveFrom(pCard);

	ATLASSERT(false);
}

//____________________________________________________________________________
//
void CCardOrientationModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	if (m_bToTap)
		pCard->GetOrientation()->Tap();
	else
		pCard->GetOrientation()->Untap();
}

void CCardOrientationModifier::RemoveFrom(CCard* pCard) const 
{
	if (!m_bToTap)
		pCard->GetOrientation()->Tap();
	else
		pCard->GetOrientation()->Untap();

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CCardFlipModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	CFlipCreatureCard* pFlipCard = dynamic_cast<CFlipCreatureCard*>(pCard);
	if (pFlipCard && !pFlipCard->GetOrientation()->IsFlipped() && pFlipCard->GetZoneId() == ZoneId::Battlefield)
		pFlipCard->Flip();
}

//____________________________________________________________________________
//
void CFaceTransformModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	if (pCard->GetCardType().IsToken()) return;
	if (pCard->GetZoneId() == ZoneId::Graveyard) return;
	if ((pCard->GetCardFlag()->Get() & CardFlag::CantTransform).Any()) return;

	CDoubleFacedCreatureCard* pDFCreature = dynamic_cast<CDoubleFacedCreatureCard*>(pCard);
	if (pDFCreature)
	{
		if (pDFCreature->GetOrientation()->IsSecondFaced() && pDFCreature->GetZoneId() == ZoneId::Battlefield)
			pDFCreature->FirstFace();
		else
			pDFCreature->SecondFace();

		return;
	}

	CDoubleFacedInPlaySpellCard* pDFInPlaySpell = dynamic_cast<CDoubleFacedInPlaySpellCard*>(pCard);
	if (pDFInPlaySpell)
	{
		if (pDFInPlaySpell->GetOrientation()->IsSecondFaced() && pDFInPlaySpell->GetZoneId() == ZoneId::Battlefield)
			pDFInPlaySpell->FirstFace();
		else
			pDFInPlaySpell->SecondFace();

		return;
	}

	CDoubleFacedPlaneswalkerCard* pDFPlaneswalker = dynamic_cast<CDoubleFacedPlaneswalkerCard*>(pCard);
	if (pDFPlaneswalker)
	{
		if (pDFPlaneswalker->GetOrientation()->IsSecondFaced() && pDFPlaneswalker->GetZoneId() == ZoneId::Battlefield)
			pDFPlaneswalker->FirstFace();
		else			
			pDFPlaneswalker->SecondFace();

		return;
	}
}

//____________________________________________________________________________
//
void CGraveyardFaceTransformModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	if (pCard->GetCardType().IsToken()) return;
	if (pCard->GetZoneId() != ZoneId::Graveyard) return;
	if ((pCard->GetCardFlag()->Get() & CardFlag::CantTransform).Any()) return;

	CDoubleFacedCreatureCard* pDFCreature = dynamic_cast<CDoubleFacedCreatureCard*>(pCard);
	if (pDFCreature)
	{
		if (pDFCreature->GetOrientation()->IsSecondFaced())
			pDFCreature->FirstFace();
		else
			pDFCreature->SecondFace();

		return;
	}

	CDoubleFacedInPlaySpellCard* pDFInPlaySpell = dynamic_cast<CDoubleFacedInPlaySpellCard*>(pCard);
	if (pDFCreature)
	{
		if (pDFInPlaySpell->GetOrientation()->IsSecondFaced())
			pDFInPlaySpell->FirstFace();
		else
			pDFInPlaySpell->SecondFace();

		return;
	}

	CDoubleFacedPlaneswalkerCard* pDFPlaneswalker = dynamic_cast<CDoubleFacedPlaneswalkerCard*>(pCard);
	if (pDFPlaneswalker)
	{
		if (pDFPlaneswalker->GetOrientation()->IsSecondFaced())
			pDFPlaneswalker->FirstFace();
		else			
			pDFPlaneswalker->SecondFace();

		return;
	}
}

//____________________________________________________________________________
//
void CCardMorphModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	CMorphCreatureCard* pMorphCreature = dynamic_cast<CMorphCreatureCard*>(pCard);
	if (pMorphCreature)
	{
		if (m_bToMorph)
			pMorphCreature->Morph();
		else
			pMorphCreature->UnMorph();
	}
}

void CCardMorphModifier::RemoveFrom(CCard* pCard) const 
{
	CMorphCreatureCard* pMorphCreature = dynamic_cast<CMorphCreatureCard*>(pCard);
	if (pMorphCreature)
	{
		if (!m_bToMorph)
			pMorphCreature->Morph();
		else
			pMorphCreature->UnMorph();
	}

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
CZone* CMoveCardModifier::GetToZone(CCard* pCard) const
{
	CZone* pToZone;
	if (m_bToOwnersZone)
		pToZone = pCard->GetOwner()->GetZoneById(m_ToZoneId);
	else
	{
		if (m_pToPlayer)
			pToZone = m_pToPlayer->GetZoneById(m_ToZoneId);
		else
			pToZone = pCard->GetController()->GetZoneById(m_ToZoneId);
	}

	return pToZone;
}

void CMoveCardModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	if ((pCard->GetZoneId() & m_FromZoneId).Any())
	{
		CZone* pToZone(GetToZone(pCard));
		if (pCard->GetZone() != pToZone)
			pCard->Move(pToZone, m_pByPlayer ? m_pByPlayer : pCard->GetController(), m_MoveType, 
				m_bToTop ? CardPlacement::Top : CardPlacement::Bottom);

		if (m_bTapped &&
			pCard->GetZone() == pToZone &&
			pToZone->HasTapStance() &&
			pCard->GetOrientation()->IsUntapped())
			pCard->GetOrientation()->Tap();

		if (m_bShuffle && pToZone->GetZoneId() == ZoneId::Library)
			pToZone->Shuffle();
	}
}

//____________________________________________________________________________
//
void CScheduledCardModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	std::auto_ptr<CCardModifier> apModifier(m_apModifier->CloneCardModifier());
	if (m_Operation == Operation::ApplyToNowRemoveLater)
		apModifier->ApplyTo(pCard);

	if (m_DeltaOption == DeltaOption::GameTurn)
		m_pGame->GetScheduler()->ScheduleTask(
			new CCardModifierTask(
				pCard, 
				apModifier, m_bInplayOnly, m_Operation == Operation::ApplyToLater), 
			m_NodeId,
			m_nTurnNumberDelta);		
	else
	{
		CPlayer* pPlayer = NULL;

		switch(m_DeltaOption.Get())
		{
		case DeltaOption::ActivePlayerTurn: pPlayer = m_pGame->GetActivePlayer(); break;
		case DeltaOption::PriorityPlayerTurn: pPlayer = m_pGame->GetPriorityPlayer(); break;
		default:
			pPlayer = m_pThisPlayersTurn; break;
		}

		if (pPlayer)
			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(
					pCard, 
					apModifier, m_bInplayOnly, m_Operation == Operation::ApplyToLater), 
				pPlayer,
				m_NodeId,
				m_nTurnNumberDelta);
	}
}

//____________________________________________________________________________
//
void CScheduledCreatureModifier::ApplyTo(CCreatureCard* pCreature) const
{
	__super::ApplyTo(pCreature);

	std::auto_ptr<CCreatureModifier> apModifier(m_apModifier->CloneCreatureModifier());
	if (m_Operation == Operation::ApplyToNowRemoveLater)
		apModifier->ApplyTo(pCreature);

	if (m_DeltaOption == DeltaOption::GameTurn)
		m_pGame->GetScheduler()->ScheduleTask(
			new CCreatureModifierTask(
				pCreature, 
				apModifier, m_bInplayOnly, m_Operation == Operation::ApplyToLater), 
			m_NodeId,
			m_nTurnNumberDelta);		
	else
	{
		CPlayer* pPlayer = NULL;

		switch(m_DeltaOption.Get())
		{
		case DeltaOption::ActivePlayerTurn: pPlayer = m_pGame->GetActivePlayer(); break;
		case DeltaOption::PriorityPlayerTurn: pPlayer = m_pGame->GetPriorityPlayer(); break;
		default:
			pPlayer = m_pThisPlayersTurn; break;
		}

		if (pPlayer)
			m_pGame->GetScheduler()->ScheduleTask(
				new CCreatureModifierTask(
					pCreature, 
					apModifier, m_bInplayOnly, m_Operation == Operation::ApplyToLater), 
				pPlayer,
				m_NodeId,
				m_nTurnNumberDelta);
	}
}

//____________________________________________________________________________
//
void CScheduledPlayerModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	std::auto_ptr<CPlayerModifier> apModifier(m_apModifier->ClonePlayerModifier());
	if (m_Operation == Operation::ApplyToNowRemoveLater)
		apModifier->ApplyTo(pPlayer);

	if (m_DeltaOption == DeltaOption::GameTurn)
		m_pGame->GetScheduler()->ScheduleTask(
			new CPlayerModifierTask(
				pPlayer, 
				apModifier, m_Operation == Operation::ApplyToLater), 
			m_NodeId,
			m_nTurnNumberDelta);		
	else
	{
		CPlayer* pPlayer2 = NULL;

		switch(m_DeltaOption.Get())
		{
		case DeltaOption::ActivePlayerTurn: pPlayer2 = m_pGame->GetActivePlayer(); break;
		case DeltaOption::PriorityPlayerTurn: pPlayer2 = m_pGame->GetPriorityPlayer(); break;
		default:
			pPlayer2 = m_pThisPlayersTurn; break;
		}

		if (pPlayer2)
			m_pGame->GetScheduler()->ScheduleTask(
				new CPlayerModifierTask(
					pPlayer, 
					apModifier, m_Operation == Operation::ApplyToLater), 
				pPlayer2,
				m_NodeId,
				m_nTurnNumberDelta);
	}
}

//____________________________________________________________________________
//
void CCardIsAlsoAModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_nUniqueId = pCard->SetIsAlsoA(m_strToken, m_uID, m_pByPlayer);
}

void CCardIsAlsoAModifier::RemoveFrom(CCard* pCard) const
{
	pCard->RemoveIsAlsoA(m_nUniqueId, m_pByPlayer);

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CManaPoolModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	switch(m_Operation.Get())
	{
	case Operation::Empty: pPlayer->GetManaPool().Clear(); break;
	case Operation::Add: 
		{ pPlayer->GetManaPool().AddMana2(m_Pool); break; 
		pPlayer->GetManaAddEventSource()->FireEvent(pPlayer, m_Pool); }
	case Operation::Remove: pPlayer->GetManaPool().RemoveMana2(m_Pool, true); break;
	}
}

void CManaPoolModifier::RemoveFrom(CPlayer* pPlayer) const
{
	switch(m_Operation.Get())
	{
	case Operation::Empty: ATLASSERT(false); break;
	case Operation::Add: pPlayer->GetManaPool().RemoveMana2(m_Pool, true); break;
	case Operation::Remove: pPlayer->GetManaPool().AddMana2(m_Pool); break;
	}

	__super::RemoveFrom(pPlayer);
}

//____________________________________________________________________________
//
void CPlayerEffectModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	if (m_bAdd)
		pPlayer->GetPlayerEffect().AddPlayerEffect(m_PlayerEffect, FALSE, m_nParam);
	else
		pPlayer->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, FALSE, m_nParam);
}

void CPlayerEffectModifier::RemoveFrom(CPlayer* pPlayer) const
{
	if (!m_bAdd)
		pPlayer->GetPlayerEffect().AddPlayerEffect(m_PlayerEffect, FALSE, m_nParam);
	else
		pPlayer->GetPlayerEffect().RemovePlayerEffect(m_PlayerEffect, FALSE, m_nParam);

	__super::ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
void CPlayerLostModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	pPlayer->SetLostByOtherReasons(); 
}

//____________________________________________________________________________
//
void CPlayerSearchModifier::ApplyTo(CPlayer* m_pByPlayer) const
{
	__super::ApplyTo(m_pByPlayer);

	ATLASSERT(!(m_fromZoneId & ~(ZoneId::Library | ZoneId::Graveyard | ZoneId::Hand)).Any());	// Only support those

	if ((m_pPlayer==m_pByPlayer) && (m_fromZoneId == ZoneId::Library) && m_pShuffle) m_pPlayer->SetSearchedLibraryThisTurn(TRUE);

	if (!GET_INTEGER(m_nMaxSearchCount) || GET_INTEGER(m_nMinSearchCount) > GET_INTEGER(m_nMaxSearchCount))
		return;

	CCountedCardContainer fromZone;
	if ((m_fromZoneId & ZoneId::Library).Any())
		fromZone.AddCards(*(m_pPlayer->GetZoneById(ZoneId::Library)), CardPlacement::Top);
	if ((m_fromZoneId & ZoneId::Graveyard).Any())
		fromZone.AddCards(*(m_pPlayer->GetZoneById(ZoneId::Graveyard)), CardPlacement::Top);
	if ((m_fromZoneId & ZoneId::Hand).Any())
		fromZone.AddCards(*(m_pPlayer->GetZoneById(ZoneId::Hand)), CardPlacement::Top);
	if ((m_fromZoneId & ~(ZoneId::Library | ZoneId::Graveyard | ZoneId::Hand)).Any())
		fromZone.AddCards(*(m_pPlayer->GetZoneById(m_fromZoneId)), CardPlacement::Top);

	CCountedCardContainer foundCards;
	for (int i = 0; i < fromZone.GetSize(); ++i)
	{
		CCard* pCard = fromZone.GetAt(i);
		if (!m_pCardFilter || m_pCardFilter->IsCardIncluded(pCard))
			foundCards.AddCard(pCard, CardPlacement::Top);
	}

	if ((m_fromZoneId & ZoneId::Library).Any() && m_pShuffle)
		m_pPlayer->GetZoneById(ZoneId::Library)->Shuffle();	// Important: Shuffle library anyway even if found no cards

	if (!foundCards.GetSize())
		return;

	CCountedCardContainer selectedCards;

	CGame* pGame = m_pPlayer->GetGame();
	BOOL bIsThinking = pGame->IsThinking();

	// Select card(s)
	if (foundCards.GetSize() > GET_INTEGER(m_nMinSearchCount))
	{
		if (!bIsThinking && !m_pByPlayer->IsComputer())
		{
			SelectCardsData selectCard;

			if (m_pCardFilter)
			{
				if (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any)
					selectCard.strCaption.Format(_T("Select %s"), m_pCardFilter->GetFilterNamePlural());
				else
					if (GET_INTEGER(m_nMaxSearchCount) > 1)
						selectCard.strCaption.Format(_T("Select %s%d %s"), GET_INTEGER(m_nMinSearchCount) < GET_INTEGER(m_nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(m_nMaxSearchCount), m_pCardFilter->GetFilterNamePlural());					
					else
						selectCard.strCaption.Format(_T("Select %s"), m_pCardFilter->GetFilterName());

				selectCard.strTitle = m_pCardFilter->GetFilterNamePlural();
			}
			else
			{
				if (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any)
					selectCard.strCaption = _T("Select cards");
				else
					if (GET_INTEGER(m_nMaxSearchCount) > 1)
						selectCard.strCaption.Format(_T("Select %s%d cards"), GET_INTEGER(m_nMinSearchCount) < GET_INTEGER(m_nMaxSearchCount) ? _T("up to ") : _T(""), GET_INTEGER(m_nMaxSearchCount));
					else
						selectCard.strCaption.Format(_T("Select %s1 card"), GET_INTEGER(m_nMinSearchCount) ? _T("") : _T("up to "));

				selectCard.strTitle = _T("Cards");
			}

			selectCard.pCardContainer = &foundCards;
			selectCard.nMinSelect = (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any ? MinimumValue(0) : m_nMinSearchCount);
			selectCard.nMaxSelect = (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any ? MaximumValue(foundCards.GetSize()) : m_nMaxSearchCount);
			selectCard.pCardFilter = NULL;	// No filter, already filtered

			if (!m_pByPlayer->GetInterface()->SelectCard(&selectCard))
				return;

			selectedCards.AddCards(selectCard.SelectedCards, CardPlacement::Top);
		}
		else
		{
			foundCards.Sort(FALSE);	// highest score to the bottom (0), descending

			int nMaxCount = (GET_INTEGER(m_nMaxSearchCount) == SpecialNumber::Any ? foundCards.GetSize() : 
								MIN(GET_INTEGER(m_nMaxSearchCount), foundCards.GetSize()));	// TODO, think about how many cards to take

#ifdef _MY_DEBUG
			//for (int j = 0; j < foundCards.GetSize(); ++j)
				//ATLTRACE(_T("%d) %s %d\n"), j, foundCards.CCountedCardContainer::GetAt(j)->GetCardName(),
				//foundCards.CCountedCardContainer::GetAt(j)->GetScore());
#endif

			for (int j = 0; j < nMaxCount; ++j)
				selectedCards.AddCard(foundCards.GetAt(j), CardPlacement::Top);
		}
	}
	else
		selectedCards.AddCards(foundCards, CardPlacement::Top);

	if ((selectedCards.GetSize() > 1) && CZone::HasOrdering(m_toZoneId) && m_toZoneId != ZoneId::Hand)
	{
		if (!bIsThinking && !m_pByPlayer->IsComputer())
		{
			OrderCardsData OrderCards;
			OrderCards.bReadOnly = FALSE;
			OrderCards.strCaption = _T("Order Cards Found");
			OrderCards.pCardContainer = &selectedCards;

			if (!m_pByPlayer->GetInterface()->OrderCards(&OrderCards))
				return;
		}
		else
		{
			selectedCards.Sort(TRUE);	// Lowest score to the bottom (0), ascending
		}
	}

	CPlayer* pThinkingPlayer = pGame->GetThinkingPlayer();

	if (m_discardToPlacement == CardPlacement::Top ||
		m_discardToPlacement == CardPlacement::Bottom)
		for (int j = 0; j < selectedCards.GetSize(); ++j)
		{
			int nIndex = (m_discardToPlacement == CardPlacement::Top ? j : selectedCards.GetSize() - j - 1);
			
			CCard* pCard = selectedCards.GetAt(nIndex);
			CZone* pToZone = 
				m_bToOwnersZone ? 
					pCard->GetOwner()->GetZoneById(m_toZoneId) :
					m_pByPlayer->GetZoneById(m_toZoneId);

			if (!bIsThinking && (!m_pByPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) ||
								 m_toZoneId != ZoneId::Battlefield || m_fromZoneId == ZoneId::Hand || !pCard->GetCardType().IsCreature()))
			{
				CString strMessage;

				if (m_bRevealCardsToOthers)
				{
					strMessage.Format(_T("%s selects %s and puts it %s %s's %s"), 
						m_pByPlayer->GetPlayerName(), pCard->GetCardName(),
						pToZone->HasOrdering() ? _T("on") : _T("into"),
						m_pByPlayer->GetPlayerName(),
						pToZone->GetZoneName());

					for (int j = 0; j < pGame->GetPlayerCount(); ++j)
					{
						if (pGame->GetPlayer(j)->IsComputer())
							pGame->GetPlayer(j)->RemoveStrategy(StrategyRemovalReason::SearchLibrary);

						pGame->GetPlayer(j)->MemorizeCard(pCard);
					}
				}
				else
				{
					ATLASSERT(!pToZone->IsVisibleToOthers());

					strMessage.Format(_T("%s selects a card and puts it %s %s's %s"), 
						m_pByPlayer->GetPlayerName(),
						pToZone->HasOrdering() ? _T("on") : _T("into"),
						m_pByPlayer->GetPlayerName(),
						pToZone->GetZoneName());

					m_pByPlayer->MemorizeCard(pCard);
					if (m_pByPlayer->IsComputer())
						m_pByPlayer->RemoveStrategy(StrategyRemovalReason::SearchLibrary);
				}

				pGame->Message(
					strMessage, 
					m_pByPlayer->IsComputer() ? pGame->GetComputerImage() : pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			pCard->Move(pToZone, m_pByPlayer, MoveType::Others, m_discardToPlacement);

			if (pToZone->HasTapStance() && m_bTapped && !pCard->GetOrientation()->IsTapped())
				pCard->GetOrientation()->Tap();

			if (bIsThinking && m_pCardFilter &&
				(pToZone->IsVisibleToOthers() ||
				pToZone->GetPlayer() == pThinkingPlayer)	// 5/16/06 added: cards should be visible to thinking player if searching for specific cards
				)
				pGame->AddVisibleCard(pCard);
		}

	if (m_pSelectedCards)
		m_pSelectedCards->AddCards(selectedCards, CardPlacement::Top);

	if (m_bRemoveRemainingCardsFromGame)
	{
		CCountedCardContainer removeCards;

		if ((m_fromZoneId & ZoneId::Library).Any())
		{
			CZone* pLibrary = m_pPlayer->GetZoneById(ZoneId::Library);
			for (int i = 0; i < pLibrary->GetSize(); ++i)
				if (!selectedCards.HasCard(pLibrary->GetAt(i)))
					removeCards.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
		}

		if ((m_fromZoneId & ZoneId::Graveyard).Any())
		{
			CZone* pGraveyard = m_pPlayer->GetZoneById(ZoneId::Graveyard);
			for (int i = 0; i < pGraveyard->GetSize(); ++i)
				if (!selectedCards.HasCard(pGraveyard->GetAt(i)))
					removeCards.AddCard(pGraveyard->GetAt(i), CardPlacement::Top);
		}

		
		if ((m_fromZoneId & ZoneId::Hand).Any())
		{
			CZone* pHand = m_pPlayer->GetZoneById(ZoneId::Hand);
			for (int i = 0; i < pHand->GetSize(); ++i)
				if (!selectedCards.HasCard(pHand->GetAt(i)))
					removeCards.AddCard(pHand->GetAt(i), CardPlacement::Top);
		}

		for (int i = 0; i < removeCards.GetSize(); ++i)
		{
			CCard* pCard = removeCards.GetAt(i);
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Exile), m_pByPlayer, MoveType::Others);
		}
	}
}

//____________________________________________________________________________
//
void CPlayerUntapCardTypeModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	if (m_TaskType == ResetUntapCardType)
		m_nUniqueId = pPlayer->AddUntapCardType(m_CardType, m_CardTypeMask, FALSE);
	else
		if (m_TaskType == ResetCantUntapCardType)
			m_nUniqueId = pPlayer->AddCantUntapCardType(m_CardType, m_CardTypeMask, FALSE);
}

void CPlayerUntapCardTypeModifier::RemoveFrom(CPlayer* pPlayer) const
{
	if (m_TaskType == ResetUntapCardType)
		pPlayer->RemoveUntapCardType(m_nUniqueId);
	else
		if (m_TaskType == ResetCantUntapCardType)
			pPlayer->RemoveCantUntapCardType(m_nUniqueId);

	__super::RemoveFrom(pPlayer);
}

//____________________________________________________________________________
//
void CZoneCardModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	CZone* pZone = pPlayer->GetZoneById(m_ZoneId);

	CCountedCardContainer cards;
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		counted_ptr<CCard> cpCard(pZone->GetAt(i));
		if (m_pCardFilter->IsCardIncluded(cpCard.GetPointer()))
			cards.AddCard(cpCard.GetPointer(), CardPlacement::Top);
	}

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		if (m_bApplyTo)
			m_apModifier->ApplyTo(cards.GetAt(i));
		else
			m_apModifier->RemoveFrom(cards.GetAt(i));
	}
}

void CZoneCardModifier::RemoveFrom(CPlayer* pPlayer) const
{
	CZone* pZone = pPlayer->GetZoneById(m_ZoneId);

	CCountedCardContainer cards;
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		counted_ptr<CCard> cpCard(pZone->GetAt(i));
		if (m_pCardFilter->IsCardIncluded(cpCard.GetPointer()))
			cards.AddCard(cpCard.GetPointer(), CardPlacement::Top);
	}

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		if (m_bApplyTo)
			m_apModifier->RemoveFrom(cards.GetAt(i));
		else
			m_apModifier->ApplyTo(cards.GetAt(i));
	}

	__super::RemoveFrom(pPlayer);
}

//____________________________________________________________________________
//
void CZoneModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	// Resolve from zone

	CZone* pFromZone = NULL;
	switch(m_FromZoneOwner.Get())
	{
	case RoleType::PrimaryPlayer: pFromZone = pPlayer->GetZoneById(m_FromZone); break;
	case RoleType::SecondaryPlayer: 
		if (m_pSecondaryPlayer)
			pFromZone = m_pSecondaryPlayer->GetZoneById(m_FromZone);
		break;
	}
	if (!pFromZone)
	{
		ATLASSERT(false);
		return;
	}

	CPlayer* pFromZoneOwner = pFromZone->GetPlayer();

	// Resolve number of cards

	int nCount = m_nCount;
	if (nCount == SpecialNumber::All)
		nCount = pFromZone->GetSize();
	else
		if (nCount == SpecialNumber::DivideBy2RoundDown)
			nCount = pFromZone->GetSize() / 2;
		else
			if (nCount == SpecialNumber::DivideBy2RoundUp)
				nCount = (pFromZone->GetSize() + 1) / 2;
			else
				if (nCount > pFromZone->GetSize())
					nCount = pFromZone->GetSize();
	if (!nCount)
		return;

	// Resolve 'from' cards and their order

	// Card container:
	//  [0] card 0 - bottom
	//  [1] card 1
	//  ...
	//  [n-1] card (n-1) - top

	CCountedCardContainer fromCards; // maintain order in this container as m_bReorder may be false and we need to put the cards back in the same order
	if (m_FromZoneLocation == CardPlacement::Top)
		for (int i = nCount - 1; i >= 0; --i)
		{
			CCard* pCard = pFromZone->GetAt(pFromZone->GetSize() - i - 1);
			fromCards.AddCard(pCard, CardPlacement::Top);
		}
	else
		if (m_FromZoneLocation == CardPlacement::Bottom)
			for (int i = 0; i < nCount; ++i)
			{
				CCard* pCard = pFromZone->GetAt(i);
				fromCards.AddCard(pCard, CardPlacement::Top);
			}
		else
		{
			ATLASSERT(false);
			return;
		}

	// Reveal action

	BOOL bIsThinking = m_pGame->IsThinking();

	if (m_RevealTo != RoleType::None)
	{
		CPlayerContainer revealToPlayers;

		switch(m_RevealTo.Get())
		{
		case RoleType::PrimaryPlayer: revealToPlayers.Add(pPlayer); break;
		case RoleType::SecondaryPlayer: revealToPlayers.Add(m_pSecondaryPlayer); break;
		case RoleType::AllPlayers: revealToPlayers = m_pGame->GetPlayersInNormalizedOrder(); break;
		}

		if (!bIsThinking)
		{
			if (m_RevealTo != RoleType::AllPlayers)
			{
				CString strMessage;
				if (nCount > 1)
					strMessage.Format(_T("%s revealed %d cards in %s's %s"), 
						pPlayer->GetPlayerName(), nCount,
						pFromZone->GetPlayer()->GetPlayerName(),
						pFromZone->GetZoneName());
				else
					strMessage.Format(_T("%s revealed a card in %s's %s"), 
						pPlayer->GetPlayerName(),
						pFromZone->GetPlayer()->GetPlayerName(),
						pFromZone->GetZoneName());

				m_pGame->Message(
					strMessage, 
					pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			bool bLogged = false;
			for (int j = 0; j < revealToPlayers.GetSize(); ++j)
			{
				CPlayer* pRevealToPlayer = revealToPlayers.GetAt(j);

				if (!pRevealToPlayer->IsComputer() && pRevealToPlayer->IsLocal() && 
					!bLogged)
				{
					bLogged = true;

					CString strMessage;
					for (int i = 0; i < nCount; ++i)
					{
						CCard* pCard;
						if (m_FromZoneLocation == CardPlacement::Bottom)
							pCard = fromCards.GetAt(i);
						else
							pCard = fromCards.GetAt(nCount - i - 1);

						if (m_RevealTo == RoleType::AllPlayers)
							strMessage.Format(_T("%s revealed %s in %s's %s"), 
								pPlayer->GetPlayerName(), pCard->GetCardName(),
								pFromZone->GetPlayer()->GetPlayerName(),
								pFromZone->GetZoneName());
						else
							strMessage.Format(_T("(%s revealed %s in %s's %s to %s)"), 
								pPlayer->GetPlayerName(), pCard->GetCardName(),
								pFromZone->GetPlayer()->GetPlayerName(),
								pFromZone->GetZoneName(),
								pRevealToPlayer->GetPlayerName());

						m_pGame->Message(
							strMessage, 
							pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}
				}

				bool bOptimized = m_bOptimizeReveals &&
					pRevealToPlayer->AreMemorizedCards(fromCards);

				for (int i = 0; i < nCount; ++i)				
				{
					pRevealToPlayer->MemorizeCard(fromCards.GetAt(i));
					if (pRevealToPlayer->IsComputer())
						pRevealToPlayer->RemoveStrategy(
							pFromZone->GetZoneId() == ZoneId::Library ? 
								StrategyRemovalReason::RevealLibrary :
								StrategyRemovalReason::NewCardVisible);
				}

				if (pRevealToPlayer->IsComputer())
					continue;

				if (m_SelectionSettings.size())
				{
					if (m_SelectionSettings[0].selectPlayer == m_RevealTo)
						continue; // optimized, no need to show cards twice
				}

				if (m_bReorder && m_ReorderByPlayer == m_RevealTo)
					continue; // optimized, no need to show cards twice

				if (bOptimized)
					continue;

				// Show dialog with revealed cards

				OrderCardsData orderCards;
				orderCards.pCardContainer = &fromCards;
				orderCards.bReadOnly = TRUE;

				if (fromCards.GetSize() > 1)
					orderCards.strCaption.Format(_T("%s %d cards in %s's %s"),
						m_FromZoneLocation == CardPlacement::Top ? _T("Top") : _T("Bottom"),
						fromCards.GetSize(),
						pFromZone->GetPlayer()->GetPlayerName(), 
						pFromZone->GetZoneName());
				else
					orderCards.strCaption.Format(_T("%s card in %s's %s"),
						m_FromZoneLocation == CardPlacement::Top ? _T("Top") : _T("Bottom"),
						pFromZone->GetPlayer()->GetPlayerName(), 
						pFromZone->GetZoneName());

				if (!pRevealToPlayer->GetInterface()->OrderCards(&orderCards))
					return;
			}

			if (!bLogged)
			{
				// Log message only to the game log for record

				CString strPlayerNames;
				for (int i = 0; i < revealToPlayers.GetSize(); ++i)
				{
					if (i)
						strPlayerNames += _T(", ");
					strPlayerNames += revealToPlayers.GetAt(i)->GetPlayerName();
				}

				CString strMessage;
				for (int i = 0; i < nCount; ++i)
				{
					CCard* pCard;
					if (m_FromZoneLocation == CardPlacement::Bottom)
						pCard = fromCards.GetAt(i);
					else
						pCard = fromCards.GetAt(nCount - i - 1);

					strMessage.Format(_T("(%s revealed %s in %s's %s to %s)\n"), 
						pPlayer->GetPlayerName(), pCard->GetCardName(),
						pFromZone->GetPlayer()->GetPlayerName(),
						pFromZone->GetZoneName(),
						strPlayerNames);

					m_pGame->Log(strMessage);
				}
			}
		}
		else
		{
			// Thinking and need to reveal cards

			for (int j = 0; j < revealToPlayers.GetSize(); ++j)
			{
				CPlayer* pRevealToPlayer = revealToPlayers.GetAt(j);

				for (int i = 0; i < nCount; ++i)				
				{
					if (pRevealToPlayer == m_pGame->GetThinkingPlayer())
					{
						if (!m_pGame->IsCardVisible(fromCards.GetAt(i)))
							pRevealToPlayer->AddMiscBonus(1);
					}
					else
						if (!fromCards.GetAt(i)->IsVisibleTo(pRevealToPlayer))
							pRevealToPlayer->AddMiscBonus(1); 
				}
			}
		}
	}

	// Selection action (multiple)

	CCountedCardContainer previousSelection;
	for (size_t i = 0; i < m_SelectionSettings.size(); ++i)
	{
		const SelectionSetting& selection(m_SelectionSettings[i]);

		if (i && selection.bSelectFromPreviousSelection)
		{
			if (!previousSelection.GetSize())
				continue;
		}
		else
			if (!fromCards.GetSize())
				return;

		CCountedCardContainer selectFromCards;
		if (i && selection.bSelectFromPreviousSelection)
			selectFromCards = previousSelection;
		else
			selectFromCards = fromCards;
		previousSelection.RemoveAll();

		// Resolve selection count

		int nValidSelectionCount = 0;
		if (selection.selectPlayer != RoleType::RandomSelector && selection.pSelectionCardFilter)
		{
			for (int j = 0; j < selectFromCards.GetSize(); ++j)
				if (selection.pSelectionCardFilter->IsCardIncluded(selectFromCards.GetAt(j)))
					++nValidSelectionCount;
		}
		else
			nValidSelectionCount = selectFromCards.GetSize();

		MaximumValue nMaxSelectionCount = selection.nMaxSelectionCount;
		MinimumValue nMinSelectionCount = selection.nMinSelectionCount;

		if (GET_INTEGER(nMaxSelectionCount) == SpecialNumber::Any || GET_INTEGER(nMaxSelectionCount) > nValidSelectionCount)
			nMaxSelectionCount = MaximumValue(nValidSelectionCount);

		if (GET_INTEGER(nMinSelectionCount) == SpecialNumber::Any)
			nMinSelectionCount = MinimumValue(GET_INTEGER(nMaxSelectionCount));

		if (GET_INTEGER(nMinSelectionCount) > nValidSelectionCount)
			nMinSelectionCount = MinimumValue(nValidSelectionCount);

		if (nMaxSelectionCount <= MaximumValue(0))
			continue;

		if (GET_INTEGER(nMaxSelectionCount) < GET_INTEGER(nMinSelectionCount))
			continue;

		// Resolve selection player

		CPlayer* pSelectPlayer = NULL;
		switch(selection.selectPlayer.Get())
		{
		case RoleType::PrimaryPlayer: pSelectPlayer = pPlayer; break;
		case RoleType::SecondaryPlayer: pSelectPlayer = m_pSecondaryPlayer; break;
		default:
			if (selection.selectPlayer != RoleType::RandomSelector)
				continue;
		}

		// Resolve select to zone

		CZone* pSelectToZone = NULL;
		switch(selection.selectToZoneOwner.Get())
		{
		case RoleType::PrimaryPlayer: pSelectToZone = pPlayer->GetZoneById(selection.selectToZone); break;
		case RoleType::SecondaryPlayer: pSelectToZone = m_pSecondaryPlayer->GetZoneById(selection.selectToZone); break;
		default: continue;
		}

		// Resolve ordering player

		CPlayer* pOrderPlayer = NULL;
		switch(selection.orderPlayer.Get())
		{
		case RoleType::PrimaryPlayer: pOrderPlayer = pPlayer; break;
		case RoleType::SecondaryPlayer: pOrderPlayer = m_pSecondaryPlayer; break;
		default: continue;
		}

		// Resolve selection characteristic

		BOOL bGoodCardsOnTop = TRUE; // true -> sorting ascendingly
		if (pSelectToZone->HasOrdering())
		{
			// Non-random: Select To Zone + Selector
			// Random: Select To Zone + Orderer

			// Card container:
			//  [0] card 0 - bottom
			//  [1] card 1
			//  ...
			//  [n-1] card (n-1) - top

			CPlayer* pTempPlayer(pSelectPlayer);
			if (!pTempPlayer)
				pTempPlayer = pOrderPlayer;
			if (pSelectToZone->GetPlayer() != pTempPlayer)
				bGoodCardsOnTop = FALSE;
		}

		// Card selection

		CCountedCardContainer selectedCards;

		if (!pSelectPlayer)
		{
			// Random selector (minimum selection count ignored here)

			if (!bIsThinking)
			{
				for (int j = 0; j < GET_INTEGER(nMaxSelectionCount); ++j) 
				{
					unsigned long nIndex = pPlayer->GetRand() % selectFromCards.GetSize();
					CCard* pCard = selectFromCards.GetAt(nIndex);

					if (selection.pSelectionCardFilter && !selection.pSelectionCardFilter->IsCardIncluded(pCard))
						continue;

					selectedCards.AddCard(pCard, CardPlacement::Top);
				}
			}
			else
			{
				// Best case scenario, not considering visibility
				CCountedCardContainer pFilteredCards;
				if (selection.pSelectionCardFilter){
					if (selection.pSelectionCardFilter->GetIncluded(selectFromCards, pFilteredCards)) selectFromCards=pFilteredCards;}
								
				selectFromCards.Sort(bGoodCardsOnTop);
				for (int j = GET_INTEGER(nMaxSelectionCount) - 1; j >= 0; --j)
				{
					CCard* pCard = selectFromCards.GetAt(selectFromCards.GetSize() - j - 1);
					selectedCards.AddCard(pCard, CardPlacement::Top);
				}
			}
		}
		else
		if (GET_INTEGER(nMinSelectionCount) != GET_INTEGER(nMaxSelectionCount) ||
			selectFromCards.GetSize() != GET_INTEGER(nMaxSelectionCount))
		{
			if (bIsThinking || pSelectPlayer->IsComputer())
			{
				//selectFromCards.Sort(bGoodCardsOnTop);

				CCountedCardContainer pFilteredCards;
				
				if (selection.pSelectionCardFilter){
				if (selection.pSelectionCardFilter->GetIncluded(selectFromCards, pFilteredCards)) selectFromCards=pFilteredCards;}
				
				selectFromCards.Sort(bGoodCardsOnTop);

				for (int j = GET_INTEGER(nMaxSelectionCount) - 1; j >= 0; --j) // always select the most here
				{
					CCard* pCard = selectFromCards.GetAt(selectFromCards.GetSize() - j - 1);
					selectedCards.AddCard(pCard, CardPlacement::Top);
				}
			}
			else
			{
				SelectCardsData selectCardData;

				CZone* pZone = selectFromCards.GetAt(0)->GetZone();

				if (nMaxSelectionCount == MaximumValue(1))
					selectCardData.strCaption.Format(_T("Select %sone card from %s's %s"), 
						nMinSelectionCount == MinimumValue(0) ? _T("up to") : _T(""),
						pZone->GetPlayer()->GetPlayerName(), pZone->GetZoneName());
				else
					selectCardData.strCaption.Format(_T("Select %s%d cards from %s's %s"), 
						GET_INTEGER(nMinSelectionCount) == GET_INTEGER(nMaxSelectionCount) ? _T("") : _T("up to"),
						GET_INTEGER(nMaxSelectionCount), pZone->GetPlayer()->GetPlayerName(), pZone->GetZoneName());

				if (pSelectToZone->HasOrdering())
					selectCardData.strCaption.AppendFormat(_T(" to put %s of %s's %s"),
						selection.selectPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
						pSelectToZone->GetPlayer()->GetPlayerName(),
						pSelectToZone->GetZoneName());								
				else
					selectCardData.strCaption.AppendFormat(_T(" to put into %s's %s"),
						pSelectToZone->GetPlayer()->GetPlayerName(),
						pSelectToZone->GetZoneName());
						
				selectCardData.strTitle.Format(_T("Cards in %s's %s"), pZone->GetPlayer()->GetPlayerName(), pZone->GetZoneName());

				selectCardData.pCardContainer = &selectFromCards;
				selectCardData.nMinSelect = nMinSelectionCount;
				selectCardData.nMaxSelect = nMaxSelectionCount;
				selectCardData.pCardFilter = selection.pSelectionCardFilter;

				if (!pSelectPlayer->GetInterface()->SelectCard(&selectCardData))
					return;

				selectedCards = selectCardData.SelectedCards;
			}
		}
		else
			selectedCards = selectFromCards;

		if (!selectedCards.GetSize())
			continue;

		if (!i || !selection.bSelectFromPreviousSelection) 
			for (int j = 0; j < selectedCards.GetSize(); ++j)
				fromCards.RemoveCard(selectedCards.GetAt(j));

		previousSelection = selectedCards;

		// Reveal action (selection action)

		if (selection.revealTo != RoleType::None)
		{
			CPlayerContainer revealToPlayers;

			switch(selection.revealTo.Get())
			{
			case RoleType::PrimaryPlayer: revealToPlayers.Add(pPlayer); break;
			case RoleType::SecondaryPlayer: revealToPlayers.Add(m_pSecondaryPlayer); break;
			case RoleType::AllPlayers: revealToPlayers = m_pGame->GetPlayersInNormalizedOrder(); break;
			}

			if (!bIsThinking)
			{
				CZone* pZone = selectedCards.GetAt(0)->GetZone();

				bool bDraw = selection.moveType == MoveType::Draw;
				bool bDiscard = selection.moveType == MoveType::Discard;
				bool bInplay = pSelectToZone->GetZoneId() == ZoneId::Battlefield;

				if (selection.revealTo != RoleType::AllPlayers)
				{
					CString strMessage;

					if (bDraw)
					{
						if (selectedCards.GetSize() > 1)
							strMessage.Format(_T("%s drew %d cards"), 
								pSelectPlayer->GetPlayerName(), selectedCards.GetSize());
						else
							strMessage.Format(_T("%s drew a card"), 
								pSelectPlayer->GetPlayerName());
					}
					else
					if (bDiscard)
					{
						if (selectedCards.GetSize() > 1)
							strMessage.Format(_T("%s discarded %d cards"), 
								pSelectPlayer->GetPlayerName(), selectedCards.GetSize());
						else
							strMessage.Format(_T("%s discarded a card"), 
								pSelectPlayer->GetPlayerName());
					}
					else
					if (bInplay)
					{
						if (selectedCards.GetSize() > 1)
							strMessage.Format(_T("%s put %d cards onto the battlefield"), 
								pSelectPlayer->GetPlayerName(), selectedCards.GetSize());
						else
							strMessage.Format(_T("%s put a card onto the battlefield"), 
								pSelectPlayer->GetPlayerName());
					}
					else
					{
						if (selectedCards.GetSize() > 1)
							strMessage.Format(_T("%s selected %d cards in %s's %s"), 
								pSelectPlayer->GetPlayerName(), selectedCards.GetSize(),
								pZone->GetPlayer()->GetPlayerName(),
								pZone->GetZoneName());
						else
							strMessage.Format(_T("%s selected a card in %s's %s"), 
								pSelectPlayer->GetPlayerName(),
								pZone->GetPlayer()->GetPlayerName(),
								pZone->GetZoneName());

						if (pSelectToZone->HasOrdering())
							strMessage.AppendFormat(_T(" to put %s of %s's %s"),
								selection.selectPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
								pSelectToZone->GetPlayer()->GetPlayerName(),
								pSelectToZone->GetZoneName());								
						else
							strMessage.AppendFormat(_T(" to put into %s's %s"),
								pSelectToZone->GetPlayer()->GetPlayerName(),
								pSelectToZone->GetZoneName());
					}

					m_pGame->Message(
						strMessage, 
						pSelectPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				bool bLogged = false;
				for (int j = 0; j < revealToPlayers.GetSize(); ++j)
				{
					CPlayer* pRevealToPlayer = revealToPlayers.GetAt(j);

					if (!pRevealToPlayer->IsComputer() && pRevealToPlayer->IsLocal() && 
						!bLogged)
					{
						bLogged = true;

						CString strMessage;
						for (int i = 0; i < selectedCards.GetSize(); ++i)
						{
							if (selection.revealTo == RoleType::AllPlayers)
							{
								if (bDraw)
									strMessage.Format(_T("%s drew %s"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
								else
								if (bDiscard)
									strMessage.Format(_T("%s discarded %s"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
								else
								if (bInplay)
									strMessage.Format(_T("%s put %s onto the battlefield"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
								else
									if (pSelectToZone->HasOrdering())
										strMessage.Format(_T("%s selected %s in %s's %s to put %s of %s's %s"), 
											pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName(),
											pZone->GetPlayer()->GetPlayerName(),
											pZone->GetZoneName(),
											selection.selectPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
											pSelectToZone->GetPlayer()->GetPlayerName(),
											pSelectToZone->GetZoneName());
									else
										strMessage.Format(_T("%s selected %s in %s's %s to put into %s's %s"), 
											pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName(),
											pZone->GetPlayer()->GetPlayerName(),
											pZone->GetZoneName(),
											pSelectToZone->GetPlayer()->GetPlayerName(),
											pSelectToZone->GetZoneName());
							}
							else
							{
								if (bDraw)
									strMessage.Format(_T("(%s drew %s)"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
								else
								if (bDiscard)
									strMessage.Format(_T("(%s discarded %s)"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
								else
								if (bInplay)
									strMessage.Format(_T("(%s put %s onto the battlefield)"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
								else
									if (pSelectToZone->HasOrdering())
										strMessage.Format(_T("(%s selected %s in %s's %s to put %s of %s's %s)"), 
											pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName(),
											pZone->GetPlayer()->GetPlayerName(),
											pZone->GetZoneName(),
											selection.selectPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
											pSelectToZone->GetPlayer()->GetPlayerName(),
											pSelectToZone->GetZoneName());
									else
										strMessage.Format(_T("(%s selected %s in %s's %s to put into %s's %s)"), 
											pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName(),
											pZone->GetPlayer()->GetPlayerName(),
											pZone->GetZoneName(),
											pSelectToZone->GetPlayer()->GetPlayerName(),
											pSelectToZone->GetZoneName());
							}

							m_pGame->Message(
								strMessage, 
								pSelectPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
								MessageImportance::High
								);
						}
					}

					bool bOptimized = m_bOptimizeReveals &&
						pRevealToPlayer->AreMemorizedCards(selectedCards);

					for (int k = 0; k < selectedCards.GetSize(); ++k)				
					{
						pRevealToPlayer->MemorizeCard(selectedCards.GetAt(k));
						if (pRevealToPlayer->IsComputer())
							pRevealToPlayer->RemoveStrategy(
								pFromZone->GetZoneId() == ZoneId::Library ? 
									StrategyRemovalReason::RevealLibrary :
									StrategyRemovalReason::NewCardVisible);
					}

					if (pRevealToPlayer->IsComputer())
						continue;

					if (selection.revealTo == selection.selectPlayer || // no need to show cards twice
						(pSelectToZone->HasOrdering() && selectedCards.GetSize() > 1 && selection.revealTo == selection.orderPlayer)) // no need to show cards twice
						continue;
				
					if (bOptimized)
						continue;

					// Show dialog with selected cards

					OrderCardsData orderCards;
					orderCards.pCardContainer = &selectedCards;
					orderCards.bReadOnly = TRUE;

					if (bDraw)
					{
						if (selectedCards.GetSize() > 1)
							orderCards.strCaption.Format(_T("%s drew %d cards"),
								pSelectPlayer->GetPlayerName(),
								selectedCards.GetSize());
						else
							orderCards.strCaption.Format(_T("%s drew a card"),
								pSelectPlayer->GetPlayerName());
					}
					else
					if (bDiscard)
					{
						if (selectedCards.GetSize() > 1)
							orderCards.strCaption.Format(_T("%s discarded %d cards"),
								pSelectPlayer->GetPlayerName(),
								selectedCards.GetSize());
						else
							orderCards.strCaption.Format(_T("%s discarded a card"),
								pSelectPlayer->GetPlayerName());
					}
					else
					if (bInplay)
					{
						if (selectedCards.GetSize() > 1)
							orderCards.strCaption.Format(_T("%s put %d cards onto the battlefield"),
								pSelectPlayer->GetPlayerName(),
								selectedCards.GetSize());
						else
							orderCards.strCaption.Format(_T("%s put a card onto the battlefield"),
								pSelectPlayer->GetPlayerName());
					}
					else
					{
						if (selectedCards.GetSize() > 1)
							orderCards.strCaption.Format(_T("%s selected %d cards in %s's %s"),
								pSelectPlayer->GetPlayerName(),
								selectedCards.GetSize(),
								pZone->GetPlayer()->GetPlayerName(), 
								pZone->GetZoneName());
						else
							orderCards.strCaption.Format(_T("%s selected a card in %s's %s"),
								pSelectPlayer->GetPlayerName(),
								pZone->GetPlayer()->GetPlayerName(), 
								pZone->GetZoneName());

						if (pSelectToZone->HasOrdering())
							orderCards.strCaption.AppendFormat(_T(" to put %s of %s's %s"),
								selection.selectPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
								pSelectToZone->GetPlayer()->GetPlayerName(),
								pSelectToZone->GetZoneName());
						else	
							orderCards.strCaption.AppendFormat(_T(" to put into %s's %s"),
								pSelectToZone->GetPlayer()->GetPlayerName(),
								pSelectToZone->GetZoneName());
					}

					if (!pRevealToPlayer->GetInterface()->OrderCards(&orderCards))
						return;
				}

				if (!bLogged)
				{
					// Log message only to the game log for record

					CString strMessage;
					for (int i = 0; i < selectedCards.GetSize(); ++i)
					{
						if (bDraw)
							strMessage.Format(_T("(%s drew %s)\n"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
						else
						if (bDiscard)
							strMessage.Format(_T("(%s discarded %s)\n"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
						else
						if (bInplay)
							strMessage.Format(_T("(%s put %s onto the battlefield)\n"), pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName());
						else
							strMessage.Format(_T("(%s selected %s in %s's %s)\n"), 
								pSelectPlayer->GetPlayerName(), selectedCards.GetAt(i)->GetCardName(),
								pZone->GetPlayer()->GetPlayerName(),
								pZone->GetZoneName());

						m_pGame->Log(strMessage);
					}
				}
			}
			else
			{
				// Thinking and need to reveal cards

				for (int j = 0; j < revealToPlayers.GetSize(); ++j)
				{
					CPlayer* pRevealToPlayer = revealToPlayers.GetAt(j);

					for (int k = 0; k < selectedCards.GetSize(); ++k)				
					{
						if (pRevealToPlayer == m_pGame->GetThinkingPlayer())
						{
							if (!m_pGame->IsCardVisible(selectedCards.GetAt(k)))
								pRevealToPlayer->AddMiscBonus(1);
						}
						else
							if (!selectedCards.GetAt(k)->IsVisibleTo(pRevealToPlayer))
								pRevealToPlayer->AddMiscBonus(1); 
					}
				}
			}
		}

		// Order action

		if (pSelectToZone->HasOrdering() && selectedCards.GetSize() > 1)
		{
			if (!bIsThinking)
			{
				if (!pOrderPlayer->IsComputer())
				{
					OrderCardsData orderCards;
					orderCards.pCardContainer = &selectedCards;
					orderCards.bReadOnly = FALSE;
					orderCards.strCaption.Format(_T("%s %d cards in %s's %s"),
						selection.selectPlacement == CardPlacement::Top ? _T("Top") : _T("Bottom"),
						selectedCards.GetSize(),
						pSelectToZone->GetPlayer()->GetPlayerName(), 
						pSelectToZone->GetZoneName());

					if (!pOrderPlayer->GetInterface()->OrderCards(&orderCards))
						return;
				}
				else
				{
					// Card container:
					//  [0] card 0 - bottom
					//  [1] card 1
					//  ...
					//  [n-1] card (n-1) - top

					selectedCards.Sort(pOrderPlayer == pSelectToZone->GetPlayer());
				}
			}
			else
			{
				selectedCards.Sort(pOrderPlayer == pSelectToZone->GetPlayer());
			}
		}

		// Move selected cards

		if (selection.selectPlacement == CardPlacement::Top)
		{
			for (int j = 0; j < selectedCards.GetSize(); ++j)
				selectedCards.GetAt(j)->Move(pSelectToZone, pPlayer, selection.moveType, CardPlacement::Top);
		}
		else
		{
			for (int j = selectedCards.GetSize() - 1; j >= 0; --j)
				selectedCards.GetAt(j)->Move(pSelectToZone, pPlayer, selection.moveType, CardPlacement::Bottom);
		}
		if (m_pSelectedCards)
		{
			for (int j = 0; j < selectedCards.GetSize(); ++j)
				m_pSelectedCards->AddCard(selectedCards.GetAt(j), CardPlacement::Top);
		}
	}

	// Reorder remaining cards

	if (!m_bReorder || !fromCards.GetSize())
		return;

	CPlayer* pReorderByPlayer = NULL;
	switch(m_ReorderByPlayer.Get())
	{
	case RoleType::PrimaryPlayer: pReorderByPlayer = pPlayer; break;
	case RoleType::SecondaryPlayer: pReorderByPlayer = m_pSecondaryPlayer; break;
	}

	if (!pReorderByPlayer)
		return;

	CZone* pReorderToZone = NULL;
	switch(m_ReorderToZoneOwner.Get())
	{
	case RoleType::PrimaryPlayer: pReorderToZone = pPlayer->GetZoneById(m_ReorderToZone); break;
	case RoleType::SecondaryPlayer: pReorderToZone = m_pSecondaryPlayer->GetZoneById(m_ReorderToZone); break;
	}

	if (!pReorderToZone)
		return;

	if (bIsThinking || pReorderByPlayer->IsComputer())
	{
		fromCards.Sort(pReorderToZone->GetPlayer() == pReorderByPlayer);
	}
	else
	if (fromCards.GetSize() > 1)
	{
		OrderCardsData orderCards;
		orderCards.pCardContainer = &fromCards;
		orderCards.bReadOnly = FALSE;
		orderCards.strCaption.Format(_T("%s %d cards in %s's %s"),
			m_ReorderToPlacement == CardPlacement::Top ? _T("Top") : _T("Bottom"),
			fromCards.GetSize(),
			pReorderToZone->GetPlayer()->GetPlayerName(), 
			pReorderToZone->GetZoneName());

		if (!pReorderByPlayer->GetInterface()->OrderCards(&orderCards))
			return;
	}

	if (m_RevealReorderTo != RoleType::None)
	{
		CPlayerContainer revealToPlayers;

		switch(m_RevealReorderTo.Get())
		{
		case RoleType::PrimaryPlayer: revealToPlayers.Add(pPlayer); break;
		case RoleType::SecondaryPlayer: revealToPlayers.Add(m_pSecondaryPlayer); break;
		case RoleType::AllPlayers: revealToPlayers = m_pGame->GetPlayersInNormalizedOrder(); break;
		}

		if (!bIsThinking)
		{
			if (m_RevealTo != RoleType::AllPlayers)
			{
				CString strMessage;
				if (fromCards.GetSize() > 1)
					strMessage.Format(_T("%s put %d cards"), 
						pReorderByPlayer->GetPlayerName(), fromCards.GetSize());
				else
					strMessage.Format(_T("%s put a card"), 
						pReorderByPlayer->GetPlayerName());

				if (pReorderToZone->HasOrdering())
					strMessage.AppendFormat(_T(" %s of %s's %s"), 
						m_ReorderToPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
						pReorderToZone->GetPlayer()->GetPlayerName(), 
						pReorderToZone->GetZoneName());
				else
					strMessage.AppendFormat(_T(" into %s's %s"), 
						pReorderToZone->GetPlayer()->GetPlayerName(), 
						pReorderToZone->GetZoneName());

				m_pGame->Message(
					strMessage, 
					pReorderByPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			bool bLogged = false;
			for (int j = 0; j < revealToPlayers.GetSize(); ++j)
			{
				CPlayer* pRevealToPlayer = revealToPlayers.GetAt(j);

				if (!pRevealToPlayer->IsComputer() && pRevealToPlayer->IsLocal() && 
					!bLogged)
				{
					bLogged = true;

					CString strMessage;
					for (int i = 0; i < fromCards.GetSize(); ++i)
					{
						CCard* pCard;
						if (m_ReorderToPlacement == CardPlacement::Top)
							pCard = fromCards.GetAt(i);
						else
							pCard = fromCards.GetAt(fromCards.GetSize() - i - 1);

						strMessage.Format(_T("%s put %s"), 
							pReorderByPlayer->GetPlayerName(), pCard->GetCardName());

						if (pReorderToZone->HasOrdering())
							strMessage.AppendFormat(_T(" %s of %s's %s"), 
								m_ReorderToPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
								pReorderToZone->GetPlayer()->GetPlayerName(), 
								pReorderToZone->GetZoneName());
						else
							strMessage.AppendFormat(_T(" into %s's %s"), 
								pReorderToZone->GetPlayer()->GetPlayerName(), 
								pReorderToZone->GetZoneName());

						if (m_RevealReorderTo != RoleType::AllPlayers)
							strMessage = _T("(") + strMessage + _T(")");

						m_pGame->Message(
							strMessage, 
							pPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}
				}
			}

			if (!bLogged)
			{
				// Log message only to the game log for record

				CString strMessage;
				for (int i = 0; i < fromCards.GetSize(); ++i)
				{
					CCard* pCard;
					if (m_FromZoneLocation == CardPlacement::Top)
						pCard = fromCards.GetAt(i);
					else
						pCard = fromCards.GetAt(fromCards.GetSize() - i - 1);

					strMessage.Format(_T("(%s put %s"), 
						pReorderByPlayer->GetPlayerName(), pCard->GetCardName());

					if (pReorderToZone->HasOrdering())
						strMessage.AppendFormat(_T(" %s of %s's %s)\n"), 
							m_ReorderToPlacement == CardPlacement::Top ? _T("on top") : _T("on the bottom"),
							pReorderToZone->GetPlayer()->GetPlayerName(), 
							pReorderToZone->GetZoneName());
					else
						strMessage.AppendFormat(_T(" into %s's %s)\n"), 
							pReorderToZone->GetPlayer()->GetPlayerName(), 
							pReorderToZone->GetZoneName());

					m_pGame->Log(strMessage);
				}
			}
		}
		else
		{
			// Thinking and need to reveal cards

			for (int j = 0; j < revealToPlayers.GetSize(); ++j)
			{
				CPlayer* pRevealToPlayer = revealToPlayers.GetAt(j);

				for (int k = 0; k < fromCards.GetSize(); ++k)				
				{
					if (pRevealToPlayer == m_pGame->GetThinkingPlayer())
					{
						if (!m_pGame->IsCardVisible(fromCards.GetAt(k)))
							pRevealToPlayer->AddMiscBonus(1);
					}
					else
						if (!fromCards.GetAt(k)->IsVisibleTo(pRevealToPlayer))
							pRevealToPlayer->AddMiscBonus(1); 
				}
			}
		}
	}

	if (pReorderToZone == pFromZone)
	{
		// moveType is ignored in this case

		pFromZone->ReorderCards(fromCards, m_ReorderToPlacement);
		return;
	}

	// Move reordered cards

	if (m_ReorderToPlacement == CardPlacement::Top)
	{
		for (int j = 0; j < fromCards.GetSize(); ++j)
			fromCards.GetAt(j)->Move(pReorderToZone, pPlayer, m_ReorderToMoveType, CardPlacement::Top);
	}
	else
	{
		for (int j = fromCards.GetSize() - 1; j >= 0; --j)
			fromCards.GetAt(j)->Move(pReorderToZone, pPlayer, m_ReorderToMoveType, CardPlacement::Bottom);
	}	
}

//____________________________________________________________________________
//
void CCardCounterModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	Counter* pCounter = pCard->GetCounterContainer()->GetCounter(m_strCounter);

	if (pCard->GetCardKeyword()->HasCantGetCounters() && m_nValue >= 0) return;
	if (pCounter->IsStopped() && m_nValue >= 0) return;

	int old = pCounter->GetCount();
	if (!m_cpFromCard.GetPointer())
	{
		int multiplied = m_nValue;   // for Doubling Season

		int nMultiplier = 0;

		if ((m_nValue >= 0) && m_bDoubling)
		{
			
			if (pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE) && (pCard->GetZoneId() == ZoneId::Battlefield))
				multiplied <<= nMultiplier;
		}
		
		if (pCounter->GetName() == _T("+1/+1") && pCard->GetCardType().IsCreature() && pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE) && (pCard->GetZoneId() == ZoneId::Battlefield))
			multiplied <<= nMultiplier;
		
		if (m_bReplace)
		{
			ATLASSERT(m_nValue >= 0);
			if (multiplied >= 0)
			{
				pCounter->SetCount(multiplied);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, multiplied);
			}
			else
			{
				pCounter->SetCount(-m_nValue);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, -m_nValue);
			}
		}
		else
		{
			if (multiplied > 0)
			{
				pCounter->IncreaseCount(multiplied);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old+multiplied);
			}
			else
			{
				pCounter->DecreaseCount(-m_nValue);			
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old+m_nValue);				
			}
		}
	}
	else
	{

		Counter* pCounter2 = m_cpFromCard->GetCounterContainer()->GetCounter(m_strCounter);
		int old2 = pCounter2->GetCount();
		if (!pCounter2)
		{
			ATLASSERT(false);
			return;
		}

		if (m_nValue > 0)
		{
			// Adding counters to pCounter, removing counters from pCounter2			

			int nValue = MIN(pCounter2->GetCount(), m_nValue);
			int nMultiplier = 0;
			int multiplied=nValue;
			if (pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE) && m_bDoubling && (pCard->GetZoneId() == ZoneId::Battlefield))
				multiplied <<= nMultiplier;
			if (pCounter->GetName() == _T("+1/+1") && pCard->GetCardType().IsCreature() && pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE) && m_bDoubling && (pCard->GetZoneId() == ZoneId::Battlefield))
				multiplied <<= nMultiplier;
			if (nValue)
			{
				pCounter2->DecreaseCount(nValue);
				pCounter->IncreaseCount(multiplied);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old+multiplied);
				const_cast<CCard*>(m_cpFromCard.GetPointer())->CounterMoved(m_cpFromCard.GetPointer(), m_strCounter, old2, old2+nValue);
			}
		}
		else
		{
			// Removing counters from pCounter, adding counters to pCounter2

			int nValue = MIN(pCounter->GetCount(), -m_nValue);
			int nMultiplier = 0;
			int multiplied=nValue;
			if (pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE) && m_bDoubling && (pCard->GetZoneId() == ZoneId::Battlefield))
				multiplied <<= nMultiplier;
			if (pCounter2->GetName() == _T("+1/+1") && pCard->GetCardType().IsCreature() && pCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE) && m_bDoubling && (pCard->GetZoneId() == ZoneId::Battlefield))
				multiplied <<= nMultiplier;
			if (nValue)
			{
				pCounter->DecreaseCount(nValue);
				pCounter2->IncreaseCount(multiplied);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old+nValue);
				const_cast<CCard*>(m_cpFromCard.GetPointer())->CounterMoved(m_cpFromCard.GetPointer(), m_strCounter, old2, old2+multiplied);
			}
		}
		
	}
	if (m_strCounter == LOYALTY_COUNTER && pCounter->GetCount() == 0) pCard->GetGame()->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);
	
	// To support if IsAlso mechanic may be all modifiers should be doubled globally / may be not / may be all modifications shoud be handled by listeners
	
	/*if (pCard->GetIsAlsoA() && pCounter->GetCount() != pCard->GetIsAlsoA()->GetCounterContainer()->GetCounter(m_strCounter)->GetCount())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(m_strCounter, m_nValue, m_bReplace);
		pModifier.ApplyTo(pCard->GetIsAlsoA());
	}
	if (pCard->GetIsAlsoOf() && pCounter->GetCount() != pCard->GetIsAlsoOf()->GetCounterContainer()->GetCounter(m_strCounter)->GetCount())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(m_strCounter, m_nValue, m_bReplace);
		pModifier.ApplyTo(pCard->GetIsAlsoOf());
	}*/
}

void CCardCounterModifier::RemoveFrom(CCard* pCard) const 
{
	Counter* pCounter = pCard->GetCounterContainer()->GetCounter(m_strCounter);

	if (pCounter->IsStopped() && m_nValue < 0) return;

	if (!m_cpFromCard.GetPointer())
	{
		if (!m_bReplace)
		{
			
			int old = pCounter->GetCount();

			if (m_nValue < 0)
			{
				pCounter->IncreaseCount(-m_nValue);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old-m_nValue);
			}
			else
			{
				pCounter->DecreaseCount(m_nValue);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old-m_nValue);
			}
		}
		else
			ATLASSERT(false);
	}
	else
	{
		
		int old = pCounter->GetCount();
		Counter* pCounter2 = m_cpFromCard->GetCounterContainer()->GetCounter(m_strCounter);
		int old2 =  pCounter->GetCount();
		if (!pCounter2)
		{
			ATLASSERT(false);
			return;
		}

		if (m_nValue > 0)
		{
			// Removing counters from pCounter, adding counters to pCounter2

			int nValue = MIN(pCounter->GetCount(), m_nValue);
			if (nValue)
			{
				pCounter->DecreaseCount(nValue);
				pCounter2->IncreaseCount(nValue);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old-nValue);
				const_cast<CCard*>(m_cpFromCard.GetPointer())->CounterMoved(m_cpFromCard.GetPointer(), m_strCounter, old2, old2+nValue);
			}
		}
		else
		{
			// Adding counters to pCounter, removing counters from pCounter2

			int nValue = MIN(pCounter2->GetCount(), -m_nValue);
			if (nValue)
			{
				pCounter2->DecreaseCount(nValue);
				pCounter->IncreaseCount(nValue);
				const_cast<CCard*>(pCard)->CounterMoved(pCard, m_strCounter, old, old+nValue);
				const_cast<CCard*>(m_cpFromCard.GetPointer())->CounterMoved(m_cpFromCard.GetPointer(), m_strCounter, old2, old2-nValue);
			}
		}
	}
	if (m_strCounter == LOYALTY_COUNTER && pCounter->GetCount() == 0) pCard->GetGame()->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);

	// To support if IsAlso mechanic may be all modifiers should be doubled globally / may be not / may be all modifications shoud be handled by listeners

	/*if (pCard->GetIsAlsoA() && pCounter->GetCount() != pCard->GetIsAlsoA()->GetCounterContainer()->GetCounter(m_strCounter)->GetCount())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(m_strCounter, m_nValue, m_bReplace);
		pModifier.RemoveFrom(pCard->GetIsAlsoA());
	}
	if (pCard->GetIsAlsoOf() && pCounter->GetCount() != pCard->GetIsAlsoOf()->GetCounterContainer()->GetCounter(m_strCounter)->GetCount())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(m_strCounter, m_nValue, m_bReplace);
		pModifier.RemoveFrom(pCard->GetIsAlsoOf());
	}*/

	__super::RemoveFrom(pCard);
}
//____________________________________________________________________________
//
void CTokenCreationModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	CPlayer* target = pPlayer;

	if (m_bOpp) target= m_pGame->GetNextPlayer(pPlayer);

	int nTokenCount = m_TokenCount;               // Doubling Season that doubles tokens
	if (m_bDoubling)
	{
		int nMultiplier = 0;
		if (target->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE) && m_pZoneId == ZoneId::Battlefield)
			nTokenCount <<= nMultiplier;
	}

	for (int i = 0; i < nTokenCount; ++i)
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));		

		if (!m_pGame->IsThinking())
			if (cpToken.GetPointer()->GetCardKeyword()->IsEmblem())
			{
				((CEffectCard*)cpToken.GetPointer())->SetUID(m_uID); ((CEffectCard*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName); 
			}
			else
			{ ((CTokenCreature*)cpToken.GetPointer())->SetUID(m_uID); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName); }

			target->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
			cpToken->Move(target->GetZoneById(m_pZoneId), target, MoveType::Others);
			if (m_pCreatedCards) m_pCreatedCards->AddCard(cpToken.GetPointer(), CardPlacement::Top);
	}
}
//____________________________________________________________________________
//
void CContainerEffectModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	CPlayer* target = pPlayer;

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));		

	if (!m_pGame->IsThinking())
	{
		((CContainerEffectCard*)cpToken.GetPointer())->SetUID(m_uID);
		((CContainerEffectCard*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName);
		((CContainerEffectCard*)cpToken.GetPointer())->ReadData(m_pPassed);
	}

	target->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
	cpToken->Move(target->GetZoneById(ZoneId::_Effects), target, MoveType::Others);
	if (m_pCreatedCards) m_pCreatedCards->AddCard(cpToken.GetPointer(), CardPlacement::Top);
}

//____________________________________________________________________________
//
void CDoubleContainerEffectModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	CPlayer* target = pPlayer;

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));		

	if (!m_pGame->IsThinking())
	{
		((CDoubleContainerEffectCard*)cpToken.GetPointer())->SetUID(m_uID);
		((CDoubleContainerEffectCard*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName);
		((CDoubleContainerEffectCard*)cpToken.GetPointer())->ReadData(m_pPassed1, m_pPassed2);
	}

	target->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
	cpToken->Move(target->GetZoneById(ZoneId::_Effects), target, MoveType::Others);
	if (m_pCreatedCards) m_pCreatedCards->AddCard(cpToken.GetPointer(), CardPlacement::Top);
}

//____________________________________________________________________________
//
void CNumberEffectModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	CPlayer* target = pPlayer;

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, m_strTokenName, m_uID));		

	if (!m_pGame->IsThinking())
	{
		((CNumberEffectCard*)cpToken.GetPointer())->SetUID(m_uID);
		((CNumberEffectCard*)cpToken.GetPointer())->SetTokenFullName(m_strTokenName);
		((CNumberEffectCard*)cpToken.GetPointer())->ReadData(nPassed);
	}

	target->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
	cpToken->Move(target->GetZoneById(ZoneId::_Effects), target, MoveType::Others);
	if (m_pCreatedCards) m_pCreatedCards->AddCard(cpToken.GetPointer(), CardPlacement::Top);
}

//____________________________________________________________________________
//
void CPoisonModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	CPlayer* target = pPlayer;

	if (m_opposite_player)
	{
	target = m_pGame->GetNextPlayer(pPlayer);
	}
	else
	{
	target = pPlayer;
	}

	if (!target->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGetPoisonCounters))
	{
	target->SetPoisonCounters(m_value, m_replace);

	CString strMessage;

	if (target->GetPoisonCounters() != 1)
	strMessage.Format(_T("%s has %d poison counters"), target->GetPlayerName(), target->GetPoisonCounters());
	else 
	strMessage.Format(_T("%s has %d poison counter"), target->GetPlayerName(), target->GetPoisonCounters());

	if (!m_pGame->IsThinking())
	m_pGame->Message(
					strMessage, 
					target->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
	}
}
//____________________________________________________________________________
//
void CFastCombatModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	const CEndOfCombatNode* pMainNode = (CEndOfCombatNode*)pPlayer->GetGraph()->GetNodeById(NodeId::EndOfCombatStep);
	const_cast<CEndOfCombatNode*>(pMainNode)->SetMaxFastCombatCount(pMainNode->GetMaxFastCombatCount() + 1);
}
//____________________________________________________________________________
//
void CExtraCombatModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	if (m_pGame->GetCurrentNode()->GetNodeId() != NodeId::MainPhaseStep)
		return;

	const CMainNode* pMainNode = (CMainNode*)pPlayer->GetGraph()->GetNodeById(NodeId::MainPhaseStep);
	const_cast<CMainNode*>(pMainNode)->IncreaseMaxCombatCount(1, TRUE);
}
//____________________________________________________________________________
//
void COpponentModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	m_pModifier->ApplyTo(m_pGame->GetNextPlayer(pPlayer));
}
//____________________________________________________________________________
//
void CCanAttackWithModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);	

	pPlayer->SetCanBeAttackedBy(m_pFilter, m_pThisTurnOnly);
}
//____________________________________________________________________________
//
void CGainControlModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	if (!m_ptoReturn)
	{
		pCard->GetControlStack()->AddControl(pCard->GetController(), m_pControlledBy);
		
		if (pCard->GetZone() != m_pControlledBy->GetController()->GetZoneById(ZoneId::Battlefield))
			pCard->Move(m_pControlledBy->GetController()->GetZoneById(ZoneId::Battlefield),m_pControlledBy->GetController(), MoveType::Others);
	}
	if (m_ptoReturn)
	{
		CPlayer* pPreviousController = pCard->GetControlStack()->RemoveControl(m_pControlledBy);

		if (pPreviousController) {
			CZone* pInplay = pPreviousController->GetZoneById(ZoneId::Battlefield);
			if (pCard->GetZone() != pInplay)
				pCard->Move(pInplay, m_pControlledBy->GetController(), MoveType::Others);	
		}
	}
}

//____________________________________________________________________________
//
void CTransferControlModifier::ApplyTo(CPlayer* pPlayer) const
{
	if (!pPlayer)
		return;

	__super::ApplyTo(pPlayer);

	if (m_pControlTo->GetZoneId() != ZoneId::Battlefield)
		return;

	if (!m_ptoReturn)
	{
		m_pControlTo->GetControlStack()->AddControl(m_pControlTo->GetController(), m_pControlledBy);
		
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		if (m_pControlTo->GetZone() != pInplay)
			m_pControlTo->Move(pInplay, m_pControlledBy->GetController(), MoveType::Others);
	}
	else
	{
		CPlayer* pPreviousController = m_pControlTo->GetControlStack()->RemoveControl(m_pControlledBy);
		
		if (pPreviousController) {
			CZone* pInplay = pPreviousController->GetZoneById(ZoneId::Battlefield);
			if (m_pControlTo->GetZone() != pInplay)
				m_pControlTo->Move(pInplay, m_pControlledBy->GetController(), MoveType::Others);	
		}
	}
}

//____________________________________________________________________________
//
void CEquipModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	for (int i = 0; i < m_pEquipment->GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(m_pEquipment->GetAbility(i));
		if (!pEquipAbility) 
			continue;
		if (pEquipAbility->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(pCard))
		{
		pEquipAbility->Equip(pCard);
		}
		else if (!m_pCheck) pEquipAbility->Equip(pCard);
	}
}
void CEquipModifier::RemoveFrom(CCreatureCard* pCard) const
{
	__super::RemoveFrom(pCard);
	
	for (int i = 0; i < m_pEquipment->GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(m_pEquipment->GetAbility(i));
		if (!pEquipAbility) 
			continue;
		pEquipAbility->Unequip();
		
	}
}
//____________________________________________________________________________
//
void CCreatureTypeModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	if (m_pAdd == TRUE)
		pCard->GetCreatureType().AddType(m_pType);
	else
		pCard->GetCreatureType().RemoveType(m_pType);

	pCard->GetCreatureTypeEventSource()->FireEvent(pCard);
}

void CCreatureTypeModifier::RemoveFrom(CCreatureCard* pCard) const
{
	__super::RemoveFrom(pCard);
	
	if (m_pAdd != TRUE)
		pCard->GetCreatureType().AddType(m_pType);
	else
		pCard->GetCreatureType().RemoveType(m_pType);

	pCard->GetCreatureTypeEventSource()->FireEvent(pCard);
}

//____________________________________________________________________________
//
void CReplaceCreatureTypeModifier::ApplyTo(CCreatureCard* pCard)
{
	__super::ApplyTo(pCard);
	
	m_OldCreatureType = pCard->GetCreatureType();
	pCard->GetCreatureType().RemoveAll();
	pCard->GetCreatureType().AddType(m_CreatureType);

	pCard->GetCreatureTypeEventSource()->FireEvent(pCard);
}

void CReplaceCreatureTypeModifier::RemoveFrom(CCreatureCard* pCard)
{
	__super::RemoveFrom(pCard);

	for (CreatureType::Iterator it = m_CreatureType.Begin(); it != m_CreatureType.End(); ++it)
		pCard->GetCreatureType().RemoveType(*it);
	
	pCard->GetCreatureType().AddType(m_OldCreatureType);

	pCard->GetCreatureTypeEventSource()->FireEvent(pCard);
}

//____________________________________________________________________________
//
void CSpecialEffectModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	const_cast<CCard*>(m_pFireTo)->SpecialTrigger(m_pFireTo, m_pIndex);
}

//____________________________________________________________________________
//
void CCantActivateAbilitiesModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	
	CPlayerEffectModifier pModifier = CPlayerEffectModifier(PlayerEffectType::CantPlayActivatedAbilities, (int)m_pCardFilter);
	
	pModifier.ApplyTo(pCard->GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(pCard->GetController()));
}

void CCantActivateAbilitiesModifier::RemoveFrom(CCard* pCard) const
{	
	
	CPlayerEffectModifier pModifier = CPlayerEffectModifier(PlayerEffectType::CantPlayActivatedAbilities, (int)m_pCardFilter);
	
	pModifier.RemoveFrom(pCard->GetController());
	pModifier.RemoveFrom(m_pGame->GetNextPlayer(pCard->GetController()));

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CCounterMultiplyModifier ::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	struct Multiply
	{
		Multiply(int i, CCard* card)
			: m_nIndex(i)
			, pCard(card)
		{}
		void operator()(Counter* c)
		{
			LPCTSTR name=c->GetName();
			int number=c->GetCount();
			CCardCounterModifier pModifier = CCardCounterModifier(name, number*(m_nIndex - 1), false);
			pModifier.ApplyTo(pCard);
		}
		const int m_nIndex;
		CCard* pCard;
	} multiply(m_nIndex,pCard);
	pCard->GetCounterContainer()->ForEachCounter(multiply);
}

//____________________________________________________________________________
//
void CCounterCopyModifier ::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	struct Multiply
	{
		Multiply(CCard* n_card, CCard* card)
			: m_n_card(n_card)
			, pCard(card)
		{}
		void operator()(Counter* c)
		{
			LPCTSTR name=c->GetName();
			int number=c->GetCount();
			CCardCounterModifier pModifier = CCardCounterModifier(name, number, true);
			pModifier.SetDoubling(false);
			if (number) pModifier.ApplyTo(m_n_card);
		}
		CCard* m_n_card;
		CCard* pCard;
	} multiply(m_pCard,pCard);
	pCard->GetCounterContainer()->ForEachCounter(multiply);
}

//____________________________________________________________________________
//
void CAllCounterMoveModifier ::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	struct Multiply
	{
		Multiply(CCard* n_card, CCard* card)
			: m_n_card(n_card)
			, pCard(card)
		{}
		void operator()(Counter* c)
		{
			LPCTSTR name=c->GetName();
			int number=c->GetCount();
			CCardCounterModifier pModifier = CCardCounterModifier(name, number, false, pCard);
			pModifier.SetDoubling(false);
			if (number) pModifier.ApplyTo(m_n_card);
		}
		CCard* m_n_card;
		CCard* pCard;
	} multiply(m_pCard,pCard);
	pCard->GetCounterContainer()->ForEachCounter(multiply);
}

//____________________________________________________________________________
//
void CCardCopyModifier ::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	CCard* pcCard;
	pcCard = pCard;

	if (pCard->GetIsAlsoOf()) pcCard = pCard->GetIsAlsoOf();

	int multiplied = 1;
	int nMultiplier = 0;
	if (m_pController->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleTokens, nMultiplier, FALSE) && m_pZoneId == ZoneId::Battlefield)
		multiplied <<= nMultiplier;

	for (int i = 0; i < multiplied ; ++i)
	{
	if (pCard->GetOrientation()->IsMorphed())
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame,_T("Morph"), 2932));
		((CTokenCreature*)cpToken.GetPointer())->SetUID(((CTokenCreature*)pcCard)->GetUID()); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(((CTokenCreature*)pcCard)->GetTokenFullName());
		m_pController->GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		cpToken->Move(m_pController->GetController()->GetZoneById(ZoneId::Battlefield), m_pController->GetController(), MoveType::Others);		
		pcCard = cpToken.GetPointer();
	}
	else
	if (pCard->GetCardType().IsToken() && !pCard->GetCardType().IsCopy() && (CTokenCreature*)pcCard)
	{
		CTokenCreature* pcToken = (CTokenCreature*)pcCard;

		CString strTokenFullName;

		if (pcToken->IsVariable())
			strTokenFullName = pcToken->strVariableName;
		else
			strTokenFullName = ((CTokenCreature*)pcCard)->GetTokenFullName();

		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, strTokenFullName, (pcToken->GetUID())));

		if (cpToken.GetPointer())
		{
			((CTokenCreature*)cpToken.GetPointer())->SetUID(pcToken->GetUID()); ((CTokenCreature*)cpToken.GetPointer())->SetTokenFullName(strTokenFullName);
			m_pController->GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());

			CTokenCreature* pCopyToken = (CTokenCreature*)cpToken.GetPointer();
			
			Power pPrintedPower = pcToken->GetPrintedPower();
			Life pPrintedToughness = pcToken->GetPrintedToughness();

			if (pPrintedPower != pCopyToken->GetPrintedPower())
				pCopyToken->SetPrintedPower(pPrintedPower);

			if (pPrintedToughness != pCopyToken->GetPrintedToughness())
				pCopyToken->SetPrintedToughness(pPrintedToughness);
			
			if (pcToken->IsVariable())
			{
				SingleCreatureType CT = pcToken->pCreatureType;

				if (CT != SingleCreatureType::Null)
				{
					pCopyToken->SetPrintedCardName(CT.ToString());
					pCopyToken->pCreatureType = CT;
					CCreatureTypeModifier pModifier = CCreatureTypeModifier(CT, true);
					pModifier.ApplyTo(pCopyToken);
				}
			}
			
			if (pcToken->IsCounterWatching())
			{
				pCopyToken->IsCopied = 1;
				pCopyToken->pPreviousCard = pcToken->pOriginatingCard;
			}

			cpToken->Move(m_pController->GetController()->GetZoneById(ZoneId::Battlefield), m_pController->GetController(), MoveType::Others);		
			pcCard = cpToken.GetPointer();
		}
		else
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateCard(m_pGame,pcCard->GetPrintedCardName(), pcCard->GetImageID()));

			m_pController->GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
			cpToken->AddCardType(CardType::Token, CardType::Null, CardTypeEntry::Permanent);
			cpToken->Move(m_pController->GetController()->GetZoneById(m_pZoneId), m_pController->GetController(), MoveType::Others);
			pcCard = cpToken.GetPointer();
		}
	}
	else
	{
		counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateCard(m_pGame,pcCard->GetOriginalPrintedCardName(), pcCard->GetImageID()));

		m_pController->GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
		cpToken->AddCardType(CardType::Token, CardType::Null, CardTypeEntry::Permanent);
		cpToken->AddCardType(CardType::Copy, CardType::Null, CardTypeEntry::Permanent);
		cpToken->Move(m_pController->GetController()->GetZoneById(m_pZoneId), m_pController->GetController(), MoveType::Others);
		pcCard = cpToken.GetPointer();
	}

	if (pcCard->GetCardType().IsCreature() && m_pCreatureModifier) m_pCreatureModifier->ApplyTo((CCreatureCard*)pcCard);
	if (m_pCardModifier) m_pCardModifier->ApplyTo(pcCard);

	if (m_pCreatedCards) m_pCreatedCards->AddCard(pcCard, CardPlacement::Top);
	}
}

//____________________________________________________________________________
//
void CRegenerateModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	pCard->AddRegenerationShield();
}

//____________________________________________________________________________
//
void CCreatureCanBlockAdditionModifier::ApplyTo(CCreatureCard* pCreature) const
{
	__super::ApplyTo(pCreature);

	pCreature->SetMaxBlockingCount(pCreature->GetMaxBlockingCount()+1);
}

void CCreatureCanBlockAdditionModifier::RemoveFrom(CCreatureCard* pCreature) const 
{
	pCreature->SetMaxBlockingCount(pCreature->GetMaxBlockingCount()-1);

	__super::RemoveFrom(pCreature);	
}

//____________________________________________________________________________
//
void CCardTypeModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_nTypeId = pCard->AddCardType(m_pType, m_pTypeRemove, m_pThisTurnOnly ? CardTypeEntry::UntilEOT : CardTypeEntry::Temporary );
}

void CCardTypeModifier::RemoveFrom(CCard* pCard) const 
{
	pCard->RemoveCardType(m_nTypeId);

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CCardColorModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_nTypeId = pCard->AddCardType(m_pType, CardType::_ColorMask, m_pThisTurnOnly ? CardTypeEntry::UntilEOT : CardTypeEntry::Temporary );
}

void CCardColorModifier::RemoveFrom(CCard* pCard) const 
{
	pCard->RemoveCardType(m_nTypeId);

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CZoneCreatureModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

	CZone* pZone = pPlayer->GetZoneById(m_ZoneId);

	CCountedCardContainer cards;
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		counted_ptr<CCard> cpCard(pZone->GetAt(i));
		if (m_pCardFilter->IsCardIncluded(cpCard.GetPointer()) && cpCard->GetCardType().IsCreature())
			cards.AddCard(cpCard.GetPointer(), CardPlacement::Top);
	}

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		
		CCard* pCard = cards.GetAt(i);
		CCreatureCard* pCreature = (CCreatureCard*)pCard;

		if (m_bApplyTo)
			m_apModifier->ApplyTo(pCreature);
		else
			m_apModifier->RemoveFrom(pCreature);
	}
}

void CZoneCreatureModifier::RemoveFrom(CPlayer* pPlayer) const
{
	CZone* pZone = pPlayer->GetZoneById(m_ZoneId);

	CCountedCardContainer cards;
	for (int i = 0; i < pZone->GetSize(); ++i)
	{
		counted_ptr<CCard> cpCard(pZone->GetAt(i));
		if (m_pCardFilter->IsCardIncluded(cpCard.GetPointer()) && cpCard->GetCardType().IsCreature())
			cards.AddCard(cpCard.GetPointer(), CardPlacement::Top);
	}

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		CCard* pCard = cards.GetAt(i);
		CCreatureCard* pCreature = (CCreatureCard*)pCard;

		if (m_bApplyTo)
			m_apModifier->RemoveFrom(pCreature);
		else
			m_apModifier->ApplyTo(pCreature);
	}

	__super::RemoveFrom(pPlayer);
}

//____________________________________________________________________________
//
void CCardCounterStopModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	pCard->GetCounterContainer()->GetCounter(m_strCounter)->SetStopped();
}

void CCardCounterStopModifier::RemoveFrom(CCard* pCard) const 
{
	pCard->GetCounterContainer()->GetCounter(m_strCounter)->SetStart();

	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CCardPlaneswalkModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	if (m_ForcePlaneswalk)
		Planeswalk(pCard);
	else
	if (m_pGame->IsThinking())
	{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(pCard, PLANAR_DIE_ROLL_TRIGGER_ID);       
				pModifier.ApplyTo(pCard);

				if (m_Away)
				{
				   Planeswalk(pCard);
				}
				else
				{
					CSpecialEffectModifier pModifier = CSpecialEffectModifier(pCard, CHAOS_SYMBOL_TRIGGER_ID);       
					pModifier.ApplyTo(pCard);
				}

	}
	else
	{
			int random = (pCard->GetController()->GetRand() % 6);

			CSpecialEffectModifier pModifier = CSpecialEffectModifier(pCard, PLANAR_DIE_ROLL_TRIGGER_ID);       
			pModifier.ApplyTo(pCard);

			if (random == 5)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(pCard, CHAOS_SYMBOL_TRIGGER_ID);       
				pModifier.ApplyTo(pCard);
			}
			else
			if (random == 0)
			{
				Planeswalk(pCard);
			}
			else
			{
				if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::EachBlankRollisChaosRoll, FALSE) )
				{
					CSpecialEffectModifier pModifier = CSpecialEffectModifier(pCard, CHAOS_SYMBOL_TRIGGER_ID);       
					pModifier.ApplyTo(pCard);
				}
			}

			CString strMessage;

			strMessage.Format(_T("%d rolled"), random+1);

			if (!m_pGame->IsThinking())
					m_pGame->Message(
					strMessage, 
					pCard->GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
	}
}
void CCardPlaneswalkModifier::Planeswalk(CCard* pCard) const
{
	CCountedCardContainer planes;
				CZone* pZone;
				bool fromPhenomenon = false;

				for (int ip = 0; ip < m_pGame->GetPlayerCount(); ++ip)
				{
					pZone = m_pGame->GetPlayer(ip)->GetZoneById(ZoneId::_Effects);
					m_CardFilter.GetIncluded(*pZone, planes);
				}

				if (planes.GetSize())
				{
					CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::_Effects, ZoneId::_Planes, TRUE, MoveType::Others, pCard->GetController());
					pModifier3.SetToTop(FALSE);
					for (int i = 0; i < planes.GetSize(); ++i)
					{
					//pModifier3.ApplyTo(planes.GetAt(i));
					if (((CPlaneCard*)(planes.GetAt(i)))->GetPlaneType() == PlaneType::Phenomenon) fromPhenomenon = true;
					}
				
					CZoneModifier* planeswalk_from = new CZoneModifier(m_pGame, ZoneId::_Effects, pCard->GetController()->GetZoneById(ZoneId::_Effects)->GetSize() , CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
						planeswalk_from->AddSelection(MinimumValue(planes.GetSize()), MaximumValue(planes.GetSize()), // select cards to reorder
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&m_CardFilter, // what cards
						ZoneId::_Planes, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Bottom, // put selected cards on 
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer);

					if (planes.GetSize()>1)
					{
						if (pCard->GetController()->GetZoneById(ZoneId::_Planes)->GetSize())
							planeswalk_from->ApplyTo(pCard->GetController());
						else
						{
							planeswalk_from->ApplyTo(pCard->GetController());
							CZone* pLib = pCard->GetController()->GetZoneById(ZoneId::_Planes);

							for (int i = pLib->GetSize() - 1 ; i > -1; i--)
							{
								pLib->GetAt(i)->Move(m_pGame->GetNextPlayer(pCard->GetController())->GetZoneById(ZoneId::_Planes),pCard->GetController(), MoveType::Others
														, CardPlacement::Bottom);
							}
						}
					}
					else
						pModifier3.ApplyTo(planes.GetTopCard());
				}

				if (pCard->GetController()->GetZoneById(ZoneId::_Planes)->GetSize())
				{
					planeswalkmodifier->ApplyTo(pCard->GetController());
				}
				else
				{
					CZone* peOppZone = m_pGame->GetNextPlayer(pCard->GetController())->GetZoneById(ZoneId::_Planes);
					if (peOppZone->GetSize())
						peOppZone->GetTopCard()->Move(pCard->GetController()->GetZoneById(ZoneId::_Effects),pCard->GetController(), MoveType::Others);
				}
				{
					if (!fromPhenomenon)
					{
						pCard->GetController()->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::EachBlankRollisChaosRoll, FALSE);
						m_pGame->GetNextPlayer(pCard->GetController())->GetPlayerEffect().RemovePlayerEffect(PlayerEffectType::EachBlankRollisChaosRoll, FALSE);
					}
				}
}
void CCardPlaneswalkModifier::RemoveFrom(CCard* pCard) const 
{
	__super::RemoveFrom(pCard);
}

//____________________________________________________________________________
//
void CRandomDiscardModifier::ApplyTo(CPlayer* pPlayer) const
{
	__super::ApplyTo(pPlayer);

    CZone* pFromZone = pPlayer->GetZoneById(m_FromZoneId);
	CZone* pToZone = pPlayer->GetZoneById(m_ToZoneId);
	CCard* pCard;

	for (int i = 0; i < m_nCount && pFromZone->GetSize() > 0; ++i)
	{
		pCard = pFromZone->GetAt(pPlayer->GetRand() % pFromZone->GetSize());
		pCard->Move(pToZone, pPlayer, m_MoveType, m_cardPlacement);
	}
}

CRandomDiscardModifier* CRandomDiscardModifier::ClonePlayerModifier() const
{
	CRandomDiscardModifier* pModifier = new CRandomDiscardModifier(m_nCount, m_FromZoneId, m_ToZoneId, m_MoveType);
	*pModifier = *this;
	return pModifier;
}

//____________________________________________________________________________
//
void CPTCostModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	int cost = pCard->GetConvertedManaCost();
	
	CPowerModifier pPowerModifier = CPowerModifier( Power(+1), FALSE);	

	CLifeModifier pLifeModifier = CLifeModifier(Life(+1), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);

	for (int i = 0; i < cost; ++i)
	{
		pPowerModifier.ApplyTo(pCard);
		pLifeModifier.ApplyTo(pCard);
	}
}
void CPTCostModifier::RemoveFrom(CCreatureCard* pCard) const
{
	__super::RemoveFrom(pCard);
	
	int cost = pCard->GetConvertedManaCost();

	CPowerModifier pPowerModifier = CPowerModifier( Power(+1), FALSE);	

	CLifeModifier pLifeModifier = CLifeModifier(Life(+1), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);

	for (int i = 0; i < cost; ++i)
	{
		pPowerModifier.RemoveFrom(pCard);
		pLifeModifier.RemoveFrom(pCard);
	}
}
//____________________________________________________________________________
//
void CLightfromWithinModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	int cost = pCard->GetManaCost(CManaCost::Color::White);
	
	CPowerModifier pPowerModifier = CPowerModifier( Power(+1), FALSE);	

	CLifeModifier pLifeModifier = CLifeModifier(Life(+1), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);

	for (int i = 0; i < cost; ++i)
	{
		pPowerModifier.ApplyTo((CCreatureCard*)pCard);
		pLifeModifier.ApplyTo((CCreatureCard*)pCard);
	}
}
void CLightfromWithinModifier::RemoveFrom(CCard* pCard) const
{
	__super::RemoveFrom(pCard);
	
	int cost = pCard->GetManaCost(CManaCost::Color::White);

	CPowerModifier pPowerModifier = CPowerModifier( Power(+1), FALSE);	

	CLifeModifier pLifeModifier = CLifeModifier(Life(+1), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);

	for (int i = 0; i < cost; ++i)
	{
		pPowerModifier.RemoveFrom((CCreatureCard*)pCard);
		pLifeModifier.RemoveFrom((CCreatureCard*)pCard);
	}
}
//____________________________________________________________________________
//
void CDetainModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::Detain);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

		pModifier->ApplyTo(pCard);

		pCard->GetGame()->GetNextPlayer(pCard->GetController())->AddDetainedCard(pCard);
}
/*void CDetainModifier::RemoveFrom(CCard* pCard) const
{
	__super::RemoveFrom(pCard);
	
	int cost = pCard->GetManaCost(CManaCost::Color::White);

	CPowerModifier pPowerModifier = CPowerModifier( Power(+1), FALSE);	

	CLifeModifier pLifeModifier = CLifeModifier(Life(+1), pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE);

	for (int i = 0; i < cost; ++i)
	{
		pPowerModifier.RemoveFrom((CCreatureCard*)pCard);
		pLifeModifier.RemoveFrom((CCreatureCard*)pCard);
	}
}*/
//____________________________________________________________________________
//
void CDamagetoItselfModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	int cost = GET_INTEGER(pCard->GetPower());	

	CLifeModifier pLifeModifier = CLifeModifier(Life(-cost), pCard, PreventableType::Preventable, m_nDamageType, TRUE);

	pLifeModifier.ApplyTo(pCard);

}
//____________________________________________________________________________
//
void CFightsModifier::ApplyTo(CCreatureCard* pCard) const
{
	__super::ApplyTo(pCard);
	
	int cost = GET_INTEGER(pCard->GetPower());	
	int cost1 = GET_INTEGER(m_pCard->GetPower());	

	CLifeModifier pLifeModifier1 = CLifeModifier(Life(-cost), pCard, PreventableType::Preventable, DamageType::NonCombatDamage, TRUE);
	CLifeModifier pLifeModifier2 = CLifeModifier(Life(-cost1), m_pCard, PreventableType::Preventable, DamageType::NonCombatDamage, TRUE);

	pLifeModifier1.ApplyTo(m_pCard);
	pLifeModifier2.ApplyTo(pCard);

}
//____________________________________________________________________________
/*//                           don't know why listeners doesn't work in modifiers
void CCardCounterDurationModifier::ApplyTo(CCard* pCard) const
{
	__super::ApplyTo(pCard);

	m_pModifier->ApplyTo(pCard);
	m_AffectedCards.Add(pCard);
	pCard->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CCardCounterDurationModifier ::RemoveFrom(CCard* pCard) const
{
	
	m_pModifier->RemoveFrom(pCard);
	pCard->GetCounterMovedEventSource()->RemoveListener(m_cpAListener.GetPointer());
	m_AffectedCards.Remove(pCard);


	__super::RemoveFrom(pCard);
}
void CCardCounterDurationModifier::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (!pFromCard->GetCounterContainer()->GetCounter(m_strCounter)->GetCount())
	for (int j = 0; j < m_AffectedCards.GetSize(); ++j)
	{
		CCard* pCard1 = m_AffectedCards.GetAt(j);
		if (pFromCard == pCard1)
		{
			RemoveFrom(pCard1);
		}
	}
}
//____________________________________________________________________________
//*/