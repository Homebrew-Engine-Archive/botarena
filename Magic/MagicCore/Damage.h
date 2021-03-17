#pragma once

class CPlayer;
class CCard;
class CCreatureCard;

//____________________________________________________________________________
//
struct Damage
{
	Damage()
		: m_nLifeDelta(Life(0))
		, m_Preventable(PreventableType::NotPreventable)
		, m_DamageType(DamageType::NotDealingDamage)
		, m_pSourceCard(NULL)
	{
	}

	Damage(const CCard* pSourceCard, Life nLifeDelta, PreventableType preventable, DamageType damageType)
		: m_pSourceCard(pSourceCard)
		, m_nLifeDelta(nLifeDelta)
		, m_Preventable(preventable)
		, m_DamageType(damageType)
	{
		if (m_nLifeDelta > Life(0))
			m_DamageType = DamageType::NotDealingDamage;
	}

	bool operator==(const Damage& damage) const
	{
		return (m_nLifeDelta == damage.m_nLifeDelta) &&
			(m_Preventable == damage.m_Preventable) &&
			(m_DamageType == damage.m_DamageType) &&
			(m_pSourceCard == damage.m_pSourceCard);
	}

	VIRTUAL(bool, Equals)(const Damage* pDamage) const { return operator==(*pDamage); }

	Life			m_nLifeDelta;		// < 0 - Get damage, > 0 - Gain life, see also SPECIAL_NUMBERS
	PreventableType	m_Preventable;

	DamageType		m_DamageType;
	const CCard*	m_pSourceCard;
};

//____________________________________________________________________________
//
struct Damage_
{
	Damage_()
		: m_nLifeDelta(Life(0))
		, m_Preventable(PreventableType::NotPreventable)
		, m_DamageType(DamageType::NotDealingDamage)
		, m_pSourceCard(NULL)
	{
	}

	Damage_(CCard* pSourceCard, Life nLifeDelta, PreventableType preventable, DamageType damageType)
		: m_pSourceCard(pSourceCard)
		, m_nLifeDelta(nLifeDelta)
		, m_Preventable(preventable)
		, m_DamageType(damageType)
	{
		if ((Life)m_nLifeDelta > Life(0))
			m_DamageType = DamageType::NotDealingDamage;
	}

	bool operator==(const Damage_& damage) const
	{
		return ((Life)m_nLifeDelta == (Life)damage.m_nLifeDelta) &&
			(m_Preventable == damage.m_Preventable) &&
			(m_DamageType == damage.m_DamageType) &&
			(m_pSourceCard == damage.m_pSourceCard);
	}

	VIRTUAL(bool, Equals)(const Damage_* pDamage) const { return operator==(*pDamage); }

	Damage_& operator=(const Damage& damage)
	{
		m_nLifeDelta = damage.m_nLifeDelta;
		m_Preventable = damage.m_Preventable;
		m_DamageType = damage.m_DamageType;
		m_pSourceCard = damage.m_pSourceCard;

		return *this;
	}

	operator Damage() const
	{
		return Damage(m_pSourceCard.GetPointer(), m_nLifeDelta, m_Preventable, m_DamageType);
	}

	Life_	m_nLifeDelta;		// < 0 - Get damage, > 0 - Gain life

	CStateSupportEnumType<PreventableType> m_Preventable;

	CStateSupportEnumType<DamageType>	m_DamageType;
	CStateSupportPtrType<const CCard>	m_pSourceCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDamagePreventionEntry
{
public:
	CDamagePreventionEntry();
	CDamagePreventionEntry(Life nValue);
	CDamagePreventionEntry(const CDamagePreventionEntry& entry);

	CDamagePreventionEntry& operator=(const CDamagePreventionEntry& entry);

	bool operator==(const CDamagePreventionEntry& entry) const
	{
		return m_nValue == entry.m_nValue;
	}
	
	void SetValue(Life nValue);
	void AddValue(Life nValue);
	void AddValue(const CDamagePreventionEntry& entry);
	Life GetValue() const;

	BOOL PreventDamage(Life& nLifeDelta);	// TRUE -> changed
	BOOL PreventDamage(Life_& nLifeDelta);

	void SetOneTurnOnly(BOOL bOneTurnOnly) { m_bOneTurnOnly = bOneTurnOnly; }
	BOOL GetOneTurnOnly() const { return m_bOneTurnOnly; }

protected:
	Life m_nValue;
	BOOL m_bOneTurnOnly;
};

//____________________________________________________________________________
//
typedef std::pair<CCard*, CDamagePreventionEntry> CDamagePreventionEntryPair;

typedef CValueContainer<CDamagePreventionEntryPair> CPreventionContainer;

class CPreventionContainer_
	: public CValueContainerBase_<CDamagePreventionEntryPair, CPreventionContainer>
{
public:
	CPreventionContainer_()
	{}

	virtual ~CPreventionContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CDamagePreventionEntryPair& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.first);
			stateStack.AddTail((PVOID)GET_INTEGER(entry.second.GetValue()));
			stateStack.AddTail((PVOID)entry.second.GetOneTurnOnly());
		}

		stateStack.AddTail((PVOID)nCount);
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CPreventionContainer::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CDamagePreventionEntryPair entry;
			
			entry.second.SetOneTurnOnly((BOOL)m_Stack.RemoveTail());
			entry.second.SetValue(Life((int)m_Stack.RemoveTail()));
			entry.first = reinterpret_cast<CCard*>(m_Stack.RemoveTail());

			CPreventionContainer::AddImpl(entry);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CPreventionContainer::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CDamagePreventionEntryPair entry;
			
			entry.second.SetOneTurnOnly((BOOL)m_Stack.GetPrev(pos));
			entry.second.SetValue(Life((int)m_Stack.GetPrev(pos)));
			entry.first = reinterpret_cast<CCard*>(m_Stack.GetPrev(pos));

			CPreventionContainer::AddImpl(entry);
		}
	}
};

//____________________________________________________________________________
//
template <class DamagePreventionContainerType>
class CDamagePreventionBase
{
public:
	CDamagePreventionBase() {}
	CDamagePreventionBase(const CDamagePreventionBase& damagePrevention)
	{
		operator=(damagePrevention);
	}

	CDamagePreventionBase& operator=(const CDamagePreventionBase& damagePrevention)
	{
		if (this == &damagePrevention)
			return *this;

		m_PreventionsCards.RemoveAll();
		m_PreventionsCards.Add(damagePrevention.m_PreventionsCards);

		return *this;
	}

	void AddDamagePrevention(const CDamagePreventionBase& damagePrevention)
	{
		for (int i = 0; i < damagePrevention.m_PreventionsCards.GetSize(); ++i)
		{
			CDamagePreventionEntryPair entry2 =
				damagePrevention.m_PreventionsCards.GetAt(i);

			bool bFound = false;
			for (int j = 0; j < m_PreventionsCards.GetSize(); ++j)
			{
				CDamagePreventionEntryPair entry =
					m_PreventionsCards.GetAt(j);

				if (entry.first == entry2.first &&
					entry.second.GetOneTurnOnly() == entry2.second.GetOneTurnOnly())
				{
					bFound = true;
					entry.second.AddValue(entry2.second);
					m_PreventionsCards.SetAt(j, entry);
					break;
				}
			}

			if (!bFound)
				m_PreventionsCards.Add(entry2);
		}
	}

	void AddDamagePreventionEntry(const CDamagePreventionEntry& entry,
								  CCard* pFromSourceCard = NULL)	// NULL -> From all sources
	{
		for (int i = 0; i < m_PreventionsCards.GetSize(); ++i)
		{
			CDamagePreventionEntryPair entry2 =
				m_PreventionsCards.GetAt(i);

			if (entry2.first == pFromSourceCard &&
				entry2.second.GetOneTurnOnly() == entry.GetOneTurnOnly())
			{
				entry2.second.AddValue(entry);
				m_PreventionsCards.SetAt(i, entry2);
				return;
			}
		}

		m_PreventionsCards.Add(std::make_pair(pFromSourceCard, entry));
	}

	void PreventDamage(Damage& damage)
	{
		if (damage.m_nLifeDelta >= Life(0))
			return;

		int nPreventAllEntryIndex = -1;

		// Rule not followed: always try to use the more specific source prevention entries first.
		//					  If there are still damage left, the 'all sources' prevention entry will be used.
		// The rule says that the player can select which prevention effect to apply first.
		for (int i = 0; i < m_PreventionsCards.GetSize(); ++i)
		{
			const CDamagePreventionEntryPair& entry =
				m_PreventionsCards.GetAt(i);

			if (!entry.first)
			{
				ATLASSERT(nPreventAllEntryIndex == -1);
				nPreventAllEntryIndex = i;
				continue;
			}

			if (damage.m_pSourceCard == entry.first)
			{
				CDamagePreventionEntryPair entryTemp(entry);

				if (entryTemp.second.PreventDamage(damage.m_nLifeDelta))
					m_PreventionsCards.SetAt(i, entryTemp);

				if (damage.m_nLifeDelta >= Life(0))
					return;
			}
		}

		if (nPreventAllEntryIndex != -1)
		{
			CDamagePreventionEntryPair entry(
				m_PreventionsCards.GetAt(nPreventAllEntryIndex));

			if (entry.second.PreventDamage(damage.m_nLifeDelta))
				m_PreventionsCards.SetAt(nPreventAllEntryIndex, entry);
		}
	}

	void RemoveTurnPreventions()
	{
		for (int i = m_PreventionsCards.GetSize() - 1; i >= 0; --i)
		{
			CDamagePreventionEntryPair entry =
				m_PreventionsCards.GetAt(i);		

			if (entry.second.GetOneTurnOnly())
				m_PreventionsCards.RemoveAt(i);
		}
	}

	void RemoveAll() { m_PreventionsCards.RemoveAll(); }

	BOOL IsEmpty() const
	{
		for (int i = 0; i < m_PreventionsCards.GetSize(); ++i)
		{
			CDamagePreventionEntryPair entry =
				m_PreventionsCards.GetAt(i);		

			if (GET_INTEGER(entry.second.GetValue()) != PreventionType::Null)
				return FALSE;
		}

		return TRUE;
	}

	CString ToString() const
	{
		CString str;
		for (int i = 0; i < m_PreventionsCards.GetSize(); ++i)
		{
			CDamagePreventionEntryPair entry =
				m_PreventionsCards.GetAt(i);

			int nValue = GET_INTEGER(entry.second.GetValue());

			if (nValue == PreventionType::Null)
				continue;

			if (entry.first)
				str += _T("^");

			if (nValue > 0)
				str.AppendFormat(_T("p%d"), nValue);
			else
			switch (nValue)
			{
			case PreventionType::PreventNextDamage: str += _T("pnx"); break;
			case PreventionType::PreventAllDamage: str += _T("pall"); break;
			case PreventionType::ReverseNextDamage: str += _T("rnx"); break;
			}
		}

		return str;
	}

protected:
	DamagePreventionContainerType m_PreventionsCards;
};

class CDamagePrevention : public CDamagePreventionBase<CPreventionContainer>
{
	friend class CDamagePrevention_;
};

class CDamagePrevention_ : public CDamagePreventionBase<CPreventionContainer_>
{
public:
	operator CDamagePrevention() const
	{
		CDamagePrevention noStateSupport;
		noStateSupport.m_PreventionsCards.Add(m_PreventionsCards);
		return noStateSupport;
	}
};

//____________________________________________________________________________
//
class CDamageRedirectionEntry
{
	friend class CDamageRedirection;
	friend class CRedirectionContainer_;
public:
	CDamageRedirectionEntry();
	CDamageRedirectionEntry(CCreatureCard* pRedirectTo, 
		Life nRedirectValue,		
		DamageType damageType,
		CCard* pFromSource = NULL, BOOL bThisTurnOnly = FALSE);
	CDamageRedirectionEntry(CPlayer* pRedirectTo, 
		Life nRedirectValue,
		DamageType damageType,
		CCard* pFromSource = NULL, BOOL bThisTurnOnly = FALSE);
	/*
	CDamageRedirectionEntry(CPlaneswalkerCard* pRedirectTo, 
		Life nRedirectValue,
		CCard* pFromSource = NULL, BOOL bThisTurnOnly = FALSE);
	*/
	CDamageRedirectionEntry(const CDamageRedirectionEntry& Entry);

	CDamageRedirectionEntry& operator=(const CDamageRedirectionEntry& Entry);
	bool operator==(const CDamageRedirectionEntry& Entry) const;

	Life GetValue() const { return m_nRedirectValue; }

	BOOL CanRedirectDamage(const Damage& damage) const;

	BOOL RedirectDamage(Damage& damage);
	//void AdjustDamage(Damage& damage) const;

	BOOL IsThisTurnOnly() const { return m_bThisTurnOnly; }

	CString ToString() const;

protected:
	CCreatureCard*		m_pRedirectToCreature;
	CPlayer*			m_pRedirectToPlayer;
	//CPlaneswalkerCard*	m_pRedirectToPlaneswalker;
	BOOL				m_bThisTurnOnly;
	CCard*				m_pFromSource;
	Life				m_nRedirectValue;
	DamageType			m_DamageType;
};

//____________________________________________________________________________
//
typedef CValueContainer<CDamageRedirectionEntry> CRedirectionContainer;

class CRedirectionContainer_
	: public CValueContainerBase_<CDamageRedirectionEntry, CRedirectionContainer>
{
public:
	CRedirectionContainer_()
	{}

	virtual ~CRedirectionContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CDamageRedirectionEntry& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.m_pRedirectToCreature);
			stateStack.AddTail((PVOID)entry.m_pRedirectToPlayer);
			//stateStack.AddTail((PVOID)entry.m_pRedirectToPlaneswalker;
			stateStack.AddTail((PVOID)entry.m_pFromSource);
			stateStack.AddTail((PVOID)entry.m_bThisTurnOnly);
			stateStack.AddTail((PVOID)GET_INTEGER(entry.m_nRedirectValue));
			stateStack.AddTail((PVOID)entry.m_DamageType.Get());
		}

		stateStack.AddTail((PVOID)nCount);
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CRedirectionContainer::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CDamageRedirectionEntry entry;
			
			entry.m_DamageType = (DamageType::Enum)(DWORD)m_Stack.RemoveTail();
			entry.m_nRedirectValue = (Life)(DWORD)m_Stack.RemoveTail();
			entry.m_bThisTurnOnly = (BOOL)m_Stack.RemoveTail();
			entry.m_pFromSource = reinterpret_cast<CCard*>(m_Stack.RemoveTail());
			//entry.m_pRedirectToPlaneswalker = reinterpret_cast<CPlaneswalkerCard*>(m_Stack.RemoveTail());
			entry.m_pRedirectToPlayer = reinterpret_cast<CPlayer*>(m_Stack.RemoveTail());
			entry.m_pRedirectToCreature = reinterpret_cast<CCreatureCard*>(m_Stack.RemoveTail());

			CRedirectionContainer::AddImpl(entry);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CRedirectionContainer::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CDamageRedirectionEntry entry;

			entry.m_DamageType = (DamageType::Enum)(DWORD)m_Stack.GetPrev(pos);
			entry.m_nRedirectValue = (Life)(DWORD)m_Stack.GetPrev(pos);
			entry.m_bThisTurnOnly = (BOOL)m_Stack.GetPrev(pos);
			entry.m_pFromSource = reinterpret_cast<CCard*>(m_Stack.GetPrev(pos));
			//entry.m_pRedirectToPlaneswalker = reinterpret_cast<CPlaneswalkerCard*>(m_Stack.GetPrev(pos));
			entry.m_pRedirectToPlayer = reinterpret_cast<CPlayer*>(m_Stack.GetPrev(pos));
			entry.m_pRedirectToCreature = reinterpret_cast<CCreatureCard*>(m_Stack.GetPrev(pos));

			CRedirectionContainer::AddImpl(entry);
		}
	}
};

//____________________________________________________________________________
//
template <class RedirectCardsContainerType>
class CDamageRedirectionBase
{
public:
	CDamageRedirectionBase() {}
	CDamageRedirectionBase(const CDamageRedirectionBase& creatureDamageRedirection)
	{
		operator=(creatureDamageRedirection);
	}

	CDamageRedirectionBase& operator=(const CDamageRedirectionBase& creatureDamageRedirection)
	{
		if (this == &creatureDamageRedirection)
			return *this;

		m_RedirectEntries.RemoveAll();
		m_RedirectEntries.Add(creatureDamageRedirection.m_RedirectEntries);

		return *this;
	}

	void AddRedirection(const CDamageRedirectionBase& redirection)
	{
		for (int i = 0; i < redirection.m_RedirectEntries.GetSize(); ++i)
			m_RedirectEntries.Add(redirection.m_RedirectEntries[i]);
	}

	void AddRedirection(const CDamageRedirectionEntry& entry)
	{
		m_RedirectEntries.Add(entry);
	}

	void RemoveRedirection(const CDamageRedirectionEntry& entry)
	{
		for (int i = 0; i < m_RedirectEntries.GetSize(); ++i)
			if (entry == m_RedirectEntries[i])
			{
				m_RedirectEntries.RemoveAt(i);
				break;
			}
	}

	BOOL HasRedirection(const CDamageRedirectionEntry& entry) const
	{
		for (int i = 0; i < m_RedirectEntries.GetSize(); ++i)
			if (m_RedirectEntries[i] == entry)
				return TRUE;

		return FALSE;
	}

	void GetRedirections(const Damage& damage, std::vector<int>& redirections) const
	{
		for (int i = 0; i < m_RedirectEntries.GetSize(); ++i)
		{
			const CDamageRedirectionEntry& entry(m_RedirectEntries[i]);

			if (entry.CanRedirectDamage(damage))
				redirections.push_back(i);
		}
	}

	const CDamageRedirectionEntry& GetRedirection(int nIndex) const
	{
		return m_RedirectEntries[nIndex];
	}

	void RedirectDamage(Damage& damage, int nEntryIndex)
	{
		ATLASSERT(nEntryIndex < m_RedirectEntries.GetSize());
		if (nEntryIndex >= m_RedirectEntries.GetSize())
			return;

		if (damage.m_nLifeDelta >= Life(0))
			return;

		CDamageRedirectionEntry entry(m_RedirectEntries[nEntryIndex]);

		ATLASSERT(entry.CanRedirectDamage(damage));

		if (entry.RedirectDamage(damage))
			m_RedirectEntries.SetAt(nEntryIndex, entry);
	}

	/*
	void AdjustDamage(Damage& damage) const
	{
		if (damage.m_nLifeDelta >= Life(0))
			return;

		BOOL bFound = FALSE;

		Damage minDamage(damage);

		for (int i = 0; i < m_RedirectEntries.GetSize(); ++i)
		{
			const CDamageRedirectionEntry& entry(m_RedirectEntries[i]);

			if (entry.CanRedirectDamage(damage))
			{
				Damage tempDamage(damage);
				entry.AdjustDamage(tempDamage);
				if (!bFound ||
					tempDamage.m_nLifeDelta > minDamage.m_nLifeDelta)
				{
					minDamage = tempDamage;
					bFound = TRUE;
				}
			}
		}

		if (bFound)
			damage = minDamage;
	}
	*/

	void RemoveTurnRedirections()
	{
		for (int i = m_RedirectEntries.GetSize() - 1; i >= 0; --i)
			if (m_RedirectEntries[i].IsThisTurnOnly())
				m_RedirectEntries.RemoveAt(i);
	}

	void RemoveAll()
	{
		m_RedirectEntries.RemoveAll();
	}

	BOOL IsEmpty() const	{ return m_RedirectEntries.GetSize() == 0; }

protected:
	RedirectCardsContainerType m_RedirectEntries;
};

class CDamageRedirection : public CDamageRedirectionBase<CRedirectionContainer>
{
	friend class CDamageRedirection_;
};

class CDamageRedirection_ : public CDamageRedirectionBase<CRedirectionContainer_>
{
public:
	operator CDamageRedirection() const
	{
		CDamageRedirection noStateSupport;
		noStateSupport.m_RedirectEntries.Add(m_RedirectEntries);
		return noStateSupport;
	}
};

