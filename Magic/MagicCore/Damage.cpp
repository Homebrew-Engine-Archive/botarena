#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CDamagePreventionEntry::CDamagePreventionEntry()
	: m_nValue(Life(PreventionType::Null))
	, m_bOneTurnOnly(TRUE)
{
}

CDamagePreventionEntry::CDamagePreventionEntry(Life nValue)
	: m_nValue(nValue)
	, m_bOneTurnOnly(TRUE)
{
}

CDamagePreventionEntry::CDamagePreventionEntry(const CDamagePreventionEntry& entry)
{
	operator=(entry);
}

CDamagePreventionEntry& CDamagePreventionEntry::operator=(const CDamagePreventionEntry& entry)
{
	if (this == &entry)
		return *this;

	m_nValue = entry.m_nValue;
	m_bOneTurnOnly = entry.m_bOneTurnOnly;

	return *this;
}
	
void CDamagePreventionEntry::SetValue(Life nValue)
{
	m_nValue = nValue;	
}

void CDamagePreventionEntry::AddValue(Life nValue)
{
	if (nValue == Life(PreventionType::PreventAllDamage))
		m_nValue = nValue;
	else
		if (nValue == Life(PreventionType::PreventNextDamage))
		{
			if (m_nValue != Life(PreventionType::PreventAllDamage))
				m_nValue = nValue;
		}
		else
			m_nValue += nValue;
}

void CDamagePreventionEntry::AddValue(const CDamagePreventionEntry& entry)
{
	AddValue(entry.m_nValue);
}

Life CDamagePreventionEntry::GetValue() const
{
	return m_nValue;
}

BOOL CDamagePreventionEntry::PreventDamage(Life& nLifeDelta)
{
	ATLASSERT(nLifeDelta <= Life(0));

	if (nLifeDelta >= Life(0))
		return FALSE;

	if (m_nValue == Life(PreventionType::Null))
		return FALSE;

	if (m_nValue == Life(PreventionType::PreventAllDamage))
	{
		nLifeDelta = Life(0);
		return FALSE;
	}

	if (m_nValue == Life(PreventionType::PreventNextDamage))
	{
		m_nValue = Life(PreventionType::Null);
		nLifeDelta = Life(0);
		return TRUE;
	}

	if (m_nValue == Life(PreventionType::ReverseNextDamage))
	{
		m_nValue = Life(PreventionType::Null);
		nLifeDelta = -nLifeDelta;
		return TRUE;
	}

	if (m_nValue >= -nLifeDelta)
	{
		m_nValue += nLifeDelta;
		nLifeDelta = Life(0);
		return TRUE;
	}

	nLifeDelta += m_nValue;
	m_nValue = Life(PreventionType::Null);
	return TRUE;
}

BOOL CDamagePreventionEntry::PreventDamage(Life_& nLifeDelta)
{
	Life nTempLifeDelta = nLifeDelta;
	BOOL bReturn = PreventDamage(nTempLifeDelta);
	nLifeDelta = nTempLifeDelta;
	return bReturn;
}

//____________________________________________________________________________
//
CDamageRedirectionEntry::CDamageRedirectionEntry()
	: m_bThisTurnOnly(FALSE)
	, m_pRedirectToCreature(NULL)
	, m_pRedirectToPlayer(NULL)
	//, m_pRedirectToPlaneswalker(NULL)
	, m_pFromSource(NULL)
	, m_nRedirectValue(0)
	, m_DamageType(DamageType::NotDealingDamage)
{
}

CDamageRedirectionEntry::CDamageRedirectionEntry(
	CCreatureCard* pRedirectToCreature,
	Life nRedirectValue, 
	DamageType damageType,
	CCard* pFromSource,
	BOOL bThisTurnOnly)
	: m_pRedirectToCreature(pRedirectToCreature)
	, m_pRedirectToPlayer(NULL)
	//, m_pRedirectToPlaneswalker(NULL)
	, m_pFromSource(pFromSource)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nRedirectValue(nRedirectValue)
	, m_DamageType(damageType)
{
}

CDamageRedirectionEntry::CDamageRedirectionEntry(
	CPlayer* pRedirectToPlayer,
	Life nRedirectValue,
	DamageType damageType,
	CCard* pFromSource,
	BOOL bThisTurnOnly)
	: m_pRedirectToCreature(NULL)
	, m_pRedirectToPlayer(pRedirectToPlayer)
	//, m_pRedirectToPlaneswalker(NULL)
	, m_pFromSource(pFromSource)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nRedirectValue(nRedirectValue)
	, m_DamageType(damageType)
{
}

/*
CDamageRedirectionEntry::CDamageRedirectionEntry(
	CPlaneswalkerCard* pRedirectToPlaneswalker,
	Life nRedirectValue,
	DamageType damageType,
	CCard* pFromSource,
	BOOL bThisTurnOnly)
	: m_pRedirectToCreature(NULL)
	, m_pRedirectToPlayer(NULL)
	, m_pRedirectToPlaneswalker(pPlaneswalker)
	, m_pFromSource(pFromSource)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nRedirectValue(nRedirectValue)
	, m_DamageType(damageType)
{
}
*/

CString CDamageRedirectionEntry::ToString() const
{
	CString str;

	if (m_nRedirectValue == Life(RedirectionType::RedirectAllDamage))
		str = _T("redirects all damage to ");
	else
	if (m_nRedirectValue == Life(RedirectionType::RedirectNextDamage))
		str = _T("redirects next damage to ");
	else
		str.Format(_T("redirects %d damage to "), GET_INTEGER(m_nRedirectValue));

	if (m_pRedirectToPlayer)
		str += m_pRedirectToPlayer->GetPlayerName();
	else
	if (m_pRedirectToCreature)
		str += m_pRedirectToCreature->GetCreatureName(TRUE);
	/*
	else
		str += m_pRedirectToPlaneswalker->CardCardName(TRUE);
	*/

	if (m_bThisTurnOnly)
		str += _T(" this turn");

	return str;
}

CDamageRedirectionEntry::CDamageRedirectionEntry(const CDamageRedirectionEntry& entry)
{
	operator=(entry);
}

CDamageRedirectionEntry& CDamageRedirectionEntry::operator=(const CDamageRedirectionEntry& entry)
{
	if (this == &entry)
		return *this;

	m_pRedirectToCreature = entry.m_pRedirectToCreature;
	m_pRedirectToPlayer = entry.m_pRedirectToPlayer;
	//m_pRedirectTofPlaneswalker = entry.m_pRedirectToPlaneswalker;
	m_bThisTurnOnly = entry.m_bThisTurnOnly;
	m_pFromSource = entry.m_pFromSource;	
	m_nRedirectValue = entry.m_nRedirectValue;
	m_DamageType = entry.m_DamageType;

	return *this;
}

bool CDamageRedirectionEntry::operator==(const CDamageRedirectionEntry& entry) const
{
	if (this == &entry)
		return true;

	return (m_pRedirectToCreature == entry.m_pRedirectToCreature) &&
		(m_pRedirectToPlayer == entry.m_pRedirectToPlayer) &&
		//(m_pRedirectToPlaneswalker == entry.m_pRedirectToPlaneswalker) &&
		(m_bThisTurnOnly == entry.m_bThisTurnOnly) &&
		(m_pFromSource == entry.m_pFromSource) &&
		(m_nRedirectValue == entry.m_nRedirectValue) &&
		(m_DamageType == entry.m_DamageType);
}

BOOL CDamageRedirectionEntry::CanRedirectDamage(const Damage& damage) const
{
	if (damage.m_nLifeDelta >= Life(0))
		return FALSE;

	if (m_pFromSource && (damage.m_pSourceCard != m_pFromSource))
		return FALSE;

	if (!(m_DamageType & damage.m_DamageType).Any())
		return FALSE;

	if (m_nRedirectValue == Life(RedirectionType::RedirectAllDamage) ||
		m_nRedirectValue == Life(RedirectionType::RedirectNextDamage))
		return TRUE;

	return m_nRedirectValue > Life(0);
}
	
BOOL CDamageRedirectionEntry::RedirectDamage(Damage& damage)
{
	if (damage.m_nLifeDelta >= Life(0))
		return FALSE;

	if (m_pFromSource && (damage.m_pSourceCard != m_pFromSource))
		return FALSE;

	if (!(m_DamageType & damage.m_DamageType).Any())
		return FALSE;

	if (m_pRedirectToCreature)
	{
		if (m_nRedirectValue == Life(RedirectionType::RedirectAllDamage))
		{
			m_pRedirectToCreature->ChangeLife(damage, FALSE);
			damage.m_nLifeDelta = Life(0);

			return FALSE;
		}

		if (m_nRedirectValue == Life(RedirectionType::RedirectNextDamage))
		{
			m_pRedirectToCreature->ChangeLife(damage, FALSE);
			damage.m_nLifeDelta = Life(0);

			m_nRedirectValue = Life(0);

			return TRUE;
		}

		if (m_nRedirectValue <= Life(0))
		{
			ATLASSERT(m_nRedirectValue == Life(0));
			return FALSE;
		}

		if (m_nRedirectValue >= -damage.m_nLifeDelta)
		{
			m_nRedirectValue += damage.m_nLifeDelta;

			m_pRedirectToCreature->ChangeLife(damage, FALSE);

			damage.m_nLifeDelta = Life(0);
			return TRUE;
		}

		damage.m_nLifeDelta += m_nRedirectValue;

		Damage damageTemp(damage);
		damageTemp.m_nLifeDelta = -m_nRedirectValue;

		m_nRedirectValue = Life(0);

		m_pRedirectToCreature->ChangeLife(damageTemp, FALSE);

		return TRUE;
	}
	else
	if (m_pRedirectToPlayer)
	{
		if (m_nRedirectValue == Life(RedirectionType::RedirectAllDamage))
		{
			m_pRedirectToPlayer->ChangeLife(damage);
			damage.m_nLifeDelta = Life(0);

			return FALSE;
		}

		if (m_nRedirectValue == Life(RedirectionType::RedirectNextDamage))
		{
			m_pRedirectToPlayer->ChangeLife(damage);
			damage.m_nLifeDelta = Life(0);

			m_nRedirectValue = Life(0);

			return TRUE;
		}

		if (m_nRedirectValue <= Life(0))
		{
			ATLASSERT(m_nRedirectValue == Life(0));
			return FALSE;
		}

		if (m_nRedirectValue >= -damage.m_nLifeDelta)
		{
			m_nRedirectValue += damage.m_nLifeDelta;

			m_pRedirectToPlayer->ChangeLife(damage);

			damage.m_nLifeDelta = Life(0);
			return TRUE;
		}

		damage.m_nLifeDelta += m_nRedirectValue;

		Damage damageTemp(damage);
		damageTemp.m_nLifeDelta = -m_nRedirectValue;

		m_nRedirectValue = Life(0);

		m_pRedirectToPlayer->ChangeLife(damageTemp);

		return TRUE;
	}
	/*
	else
	if (m_pRedirectToPlaneswalker)
	{
		Counter* pLoyaltyCounter = m_pRedirectToPlaneswalker->GetLoyaltyCounter();
		if (m_nRedirectValue == Life(RedirectionType::RedirectAllDamage))
		{
			pLoyaltyCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));
			
			damage.m_nLifeDelta = Life(0);

			return FALSE;
		}

		if (m_nRedirectValue == Life(RedirectionType::RedirectNextDamage))
		{
			pLoyaltyCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));
			damage.m_nLifeDelta = Life(0);

			m_nRedirectValue = Life(0);

			return TRUE;
		}

		if (m_nRedirectValue <= Life(0))
		{
			ATLASSERT(m_nRedirectValue == Life(0));
			return FALSE;
		}

		if (m_nRedirectValue >= -damage.m_nLifeDelta)
		{
			m_nRedirectValue += damage.m_nLifeDelta;

			pLoyaltyCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));

			damage.m_nLifeDelta = Life(0);
			return TRUE;
		}

		damage.m_nLifeDelta += m_nRedirectValue;

		Damage damageTemp(damage);
		damageTemp.m_nLifeDelta = -m_nRedirectValue;

		m_nRedirectValue = Life(0);

		pLoyaltyCounter->DecreaseCount(-GET_INTEGER(damageTemp.m_nLifeDelta));

		return TRUE;
	}
	*/

	return FALSE;
}

/*
void CDamageRedirectionEntry::AdjustDamage(Damage& damage) const
{
	if (damage.m_nLifeDelta >= Life(0))
		return;

	if (m_pFromSource && (damage.m_pSourceCard != m_pFromSource))
		return;

	if (!(m_DamageType & damage.m_DamageType).Any())
		return;

	if (m_nRedirectValue == Life(RedirectionType::RedirectAllDamage) ||
		m_nRedirectValue == Life(RedirectionType::RedirectNextDamage) ||
		m_nRedirectValue >= -damage.m_nLifeDelta)
	{
		damage.m_nLifeDelta = Life(0);
		return;
	}

	damage.m_nLifeDelta += m_nRedirectValue;
}
*/