#pragma once

//____________________________________________________________________________
//
typedef CDictionary<PVOID, ContextValue> CSubjectValueContainer;

class CSubjectValueContainer_
	: public CDictionaryBase_<PVOID, ContextValue>
{
public:
	virtual ~CSubjectValueContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		for (Iterator it = Begin(); it != End(); ++it)
		{
			stateStack.AddTail(it->first);
			stateStack.AddTail((PVOID)it->second.nValue1);
			stateStack.AddTail((PVOID)it->second.nValue2);
		}

		stateStack.AddTail((PVOID)GetSize());
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CDictionary::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			ContextValue v;
			v.nValue2 = (int)m_Stack.RemoveTail();
			v.nValue1 = (int)m_Stack.RemoveTail();
			PVOID k = m_Stack.RemoveTail();
			CDictionary::SetImpl(k, v);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CDictionary::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			ContextValue v;
			v.nValue2 = (int)m_Stack.GetPrev(pos);
			v.nValue1 = (int)m_Stack.GetPrev(pos);
			PVOID k = m_Stack.GetPrev(pos);
			CDictionary::SetImpl(k, v);
		}
	}
};

typedef CDictionary<const CCard*, int> CCardZoneInfoContainer;

class CCardZoneInfoContainer_
	: public CDictionaryBase_<const CCard*, int>
{
public:
	virtual ~CCardZoneInfoContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		for (Iterator it = Begin(); it != End(); ++it)
		{
			stateStack.AddTail((PVOID)it->first);
			stateStack.AddTail((PVOID)it->second);
		}

		stateStack.AddTail((PVOID)GetSize());
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CDictionary::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			int nZoneMoveNumber = (int)m_Stack.RemoveTail();
			const CCard* pCard = (const CCard*)m_Stack.RemoveTail();
			CDictionary::SetImpl(pCard, nZoneMoveNumber);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CDictionary::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			int nZoneMoveNumber = (int)m_Stack.GetPrev(pos);
			const CCard* pCard = (const CCard*)m_Stack.GetPrev(pos);
			CDictionary::SetImpl(pCard, nZoneMoveNumber);
		}
	}
};

struct CardNameSetComparer
{
    bool operator()(const counted_ptr<const CCard>& cpCard1, const counted_ptr<const CCard>& cpCard2) const
    {
		return cpCard1->GetCardName().Compare(cpCard2->GetCardName()) < 0;
    }
};

struct PlayerNameSetComparer
{
    bool operator()(const CPlayer* pPlayer1, const CPlayer* pPlayer2) const
    {
		return pPlayer1->GetPlayerName().Compare(pPlayer2->GetPlayerName()) < 0;
    }
};


typedef CCountedPtrSet<const CCard, CardNameSetComparer>	CCardSubjectContainer;
typedef CSet<const CPlayer*, PlayerNameSetComparer>			CPlayerSubjectContainer;

typedef CCountedPtrSet_<const CCard, CCountedPtrSet<const CCard, CardNameSetComparer>>	CCardSubjectContainer_;
typedef CSet_<const CPlayer*, CSet<const CPlayer*, PlayerNameSetComparer>>				CPlayerSubjectContainer_;

//____________________________________________________________________________
//
template <class SourceCardType, 
		  class CardSubjectContainerType, 
		  class PlayerSubjectContainerType,
		  class SubjectValueContainerType,
		  class CardZoneInfoContainerType>
class CSubjectGroupBase
{
protected:
	typedef typename SubjectValueContainerType::Iterator SubjectValueIterator;
	typedef typename CardZoneInfoContainerType::Iterator CardZoneInfoIterator;

public:
	typedef typename CardSubjectContainerType::Iterator CardSubjectIterator;
	typedef typename PlayerSubjectContainerType::Iterator PlayerSubjectIterator;

	static size_t CalculateSubjectPermutations(int nSubjectCount,
											   int nPoint,
											   std::vector<IntArray>& subjectConfig)
	{
		ATLASSERT(nPoint && nSubjectCount);
		if (!nPoint || !nSubjectCount)
			return 0;

		if (nSubjectCount == 1)
		{
			IntArray result;
			result.push_back(nPoint);
			subjectConfig.push_back(result);
			return 1;
		}

		IntArray current;
		current.resize(nSubjectCount, 0);

		IntArray bound;
		bound.resize(nSubjectCount, nPoint);

		do
		{
			int nTotal = 0;
			for (int i = 0; i < nSubjectCount; ++i)
				nTotal += current[i];

			if (nTotal == nPoint)
				subjectConfig.push_back(current);

		} while (Permutation(bound, nSubjectCount, current, FALSE, FALSE));

		return subjectConfig.size();
	}

	CSubjectGroupBase()
	{}

	CSubjectGroupBase(const CSubjectGroupBase& subjectGroup)
	{
		operator=(subjectGroup);
	}

	virtual ~CSubjectGroupBase() {}

	bool operator==(const CSubjectGroupBase& subjectGroup) const
	{
		if (m_pSourceCard != subjectGroup.m_pSourceCard.GetPointer())
			return false;
		
		int nCardSize = m_Cards.GetSize();
		if (nCardSize != subjectGroup.m_Cards.GetSize())
			return false;

		int nPlayerSize = m_Players.GetSize();
		if (nPlayerSize != subjectGroup.m_Players.GetSize())
			return false;

		int nValueSize = m_Values.GetSize();
		if (nValueSize != subjectGroup.m_Values.GetSize())
			return false;

		int nZoneMoveNumberSize = m_CardZoneInfo.GetSize();
		if (nZoneMoveNumberSize != subjectGroup.m_CardZoneInfo.GetSize())
			return false;

		for (CardSubjectIterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
		{
			const CCard* pCard = i->GetPointer();

			if (!subjectGroup.HasSubject(pCard))
				return false;

			if (HasValue(pCard))
			{
				if (!subjectGroup.HasValue(pCard))
					return false;

				if (GetValue(pCard) != subjectGroup.GetValue(pCard))
					return false;
			}
			else
				if (subjectGroup.HasValue(pCard))
					return false;

			if (GetZoneMoveNumber(pCard) != subjectGroup.GetZoneMoveNumber(pCard))
				return false;
		}

		for (PlayerSubjectIterator i = m_Players.Begin(); i != m_Players.End(); ++i)
		{
			const CPlayer* pPlayer = *i;

			if (!subjectGroup.HasSubject(pPlayer))
				return false;

			if (HasValue(pPlayer))
			{
				if (!subjectGroup.HasValue(pPlayer))
					return false;

				if (GetValue(pPlayer) != subjectGroup.GetValue(pPlayer))
					return false;
			}
			else
				if (subjectGroup.HasValue(pPlayer))
					return false;
		}

		return true;
	}

	CSubjectGroupBase& operator=(const CSubjectGroupBase& subjectGroup)
	{
		if (&subjectGroup == this)
			return *this;

		m_pSourceCard = subjectGroup.m_pSourceCard;
		m_Cards = subjectGroup.m_Cards;
		m_Players = subjectGroup.m_Players;
		m_Values = subjectGroup.m_Values;
		m_CardZoneInfo = subjectGroup.m_CardZoneInfo;

		return *this;
	}

	void SetSourceCard(const CCard* pSourceCard)	
	{
		m_pSourceCard = pSourceCard;
	}

	const CCard* GetSourceCard() const					{ return m_pSourceCard.GetPointer(); }

	int GetCardSubjectCount() const						{ return m_Cards.GetSize(); }
	int GetPlayerSubjectCount() const					{ return m_Players.GetSize(); }
	int GetSubjectCount() const							{ return m_Cards.GetSize() + m_Players.GetSize(); }

	CardSubjectIterator CardSubjectBegin() const		{ return m_Cards.Begin(); }
	CardSubjectIterator CardSubjectEnd() const			{ return m_Cards.End(); }

	void GetCardSubjects(CCountedCardContainer& cards) const
	{
		cards.RemoveAll();
		for (CardSubjectIterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
			cards.AddCard(const_cast<CCard*>(i->GetPointer()), CardPlacement::Top);
	}

	const CCard* GetFirstCardSubject() const			{ return m_Cards.Begin()->GetPointer(); }
	const CPlayer* GetFirstPlayerSubject() const		{ return *m_Players.Begin(); }

	PlayerSubjectIterator PlayerSubjectBegin() const	{ return m_Players.Begin(); }
	PlayerSubjectIterator PlayerSubjectEnd() const		{ return m_Players.End(); }

	void GetPlayerSubjects(CPlayerContainer& players) const
	{
		players.RemoveAll();
		for (PlayerSubjectIterator i = m_Players.Begin(); i != m_Players.End(); ++i)
			players.Add(const_cast<CPlayer*>(*i));
	}

	void AddSubject(const CPlayer* pPlayer)
	{
		m_Players.Set(pPlayer);
	}

	void AddSubject(const CPlayer* pPlayer, const ContextValue& value)
	{
		m_Players.Set(pPlayer);
		m_Values.Set((PVOID)pPlayer, value);
	}

	void AddSubject(const CCard* pCard)
	{
		m_Cards.Set(pCard);
		m_CardZoneInfo.Set(pCard, pCard->GetZoneMoveNumber());
	}

	void AddSubject(const CCard* pCard, const ContextValue& value)
	{
		m_Cards.Set(pCard);
		m_Values.Set((PVOID)pCard, value);
		m_CardZoneInfo.Set(pCard, pCard->GetZoneMoveNumber());
	}

	void AddSubject(const CCard* pCard, int nZoneMoveNumber)
	{
		m_Cards.Set(pCard);
		m_CardZoneInfo.Set(pCard, nZoneMoveNumber);
	}

	void AddSubject(const CCard* pCard, const ContextValue& value, int nZoneMoveNumber)
	{
		m_Cards.Set(pCard);
		m_Values.Set((PVOID)pCard, value);
		m_CardZoneInfo.Set(pCard, nZoneMoveNumber);
	}

	BOOL HasValue(const CCard* pCard) const
	{
		return m_Values.ContainsKey((PVOID)pCard);
	}

	BOOL HasValue(const CPlayer* pPlayer) const
	{
		return m_Values.ContainsKey((PVOID)pPlayer);
	}

	void RemoveValue(const CCard* pCard)
	{
		m_Values.Remove((PVOID)pCard);
	}

	void RemoveValue(const CPlayer* pPlayer)
	{
		m_Values.Remove((PVOID)pPlayer);
	}

	void RemoveAllValues() 
	{
		m_Values.RemoveAll();
	}

	const ContextValue& GetValue(const CCard* pCard) const
	{
		static const ContextValue empty;

		SubjectValueIterator i = m_Values.Find((PVOID)pCard);
		if (i == m_Values.End())
		{
			ATLASSERT(false);
			return empty;
		}

		return i->second;
	}

	const ContextValue& GetValue(const CPlayer* pPlayer) const
	{
		static const ContextValue empty;

		SubjectValueIterator i = m_Values.Find((PVOID)pPlayer);
		if (i == m_Values.End())
		{
			ATLASSERT(false);
			return empty;
		}

		return i->second;
	}

	ContextValue GetTotalValue() const
	{
		ContextValue contextValue;
		for (SubjectValueIterator it = m_Values.Begin(); it != m_Values.End(); ++it)
			contextValue += it->second;

		return contextValue;
	}

	void SetValue(const CPlayer* pPlayer, const ContextValue& value)
	{
		m_Values.Set((PVOID)pPlayer, value);
	}

	void SetValue(const CCard* pCard, const ContextValue& value)
	{
		m_Values.Set((PVOID)pCard, value);
	}

	int GetZoneMoveNumber(const CCard* pCard) const
	{
		CardZoneInfoIterator i = m_CardZoneInfo.Find(pCard);
		ATLASSERT(i != m_CardZoneInfo.End());
		if (i == m_CardZoneInfo.End())
			return 0;

		return i->second;
	}

	void RemoveSubject(const CPlayer* pPlayer)
	{
		m_Players.Remove(pPlayer);
		m_Values.Remove((PVOID)pPlayer);
	}

	void RemoveSubject(const CCard* pCard)
	{
		m_Cards.Remove(pCard);
		m_Values.Remove((PVOID)pCard);
		m_CardZoneInfo.Remove(pCard);
	}

	void RemoveAll()
	{
		m_Players.RemoveAll();
		m_Cards.RemoveAll();
		m_Values.RemoveAll();
		m_CardZoneInfo.RemoveAll();
	}

	void AddSubjectGroup(const CSubjectGroupBase& subjectGroup, const ContextValue* pOverrideValue = NULL)
	{
		for (CardSubjectContainerType::Iterator i = subjectGroup.m_Cards.Begin(); i != subjectGroup.m_Cards.End(); ++i)
		{
			const CCard* pCard = i->GetPointer();
			if (pOverrideValue || !subjectGroup.HasValue(pCard))
			{
				if (pOverrideValue)
					AddSubject(pCard, *pOverrideValue, subjectGroup.GetZoneMoveNumber(pCard));
				else
					AddSubject(pCard, subjectGroup.GetZoneMoveNumber(pCard));
			}
			else
				AddSubject(pCard, subjectGroup.GetValue(pCard), subjectGroup.GetZoneMoveNumber(pCard));
		}
		
		for (PlayerSubjectContainerType::Iterator i = subjectGroup.m_Players.Begin(); i != subjectGroup.m_Players.End(); ++i)
		{
			const CPlayer* pPlayer = *i;
			if (pOverrideValue || !subjectGroup.HasValue(pPlayer))
			{
				if (pOverrideValue)
					AddSubject(pPlayer, *pOverrideValue);
				else
					AddSubject(pPlayer);
			}
			else
				AddSubject(pPlayer, subjectGroup.GetValue(pPlayer));
		}
	}

	BOOL HasSubject(const CPlayer* pPlayer) const	{ return m_Players.Contains(pPlayer); }
	BOOL HasSubject(const CCard* pCard) const		{ return m_Cards.Contains(pCard); }

	BOOL HasControlledCards(const CPlayer* pControlledBy) const
	{
		for (CardSubjectContainerType::Iterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
			if ((*i)->GetController() == pControlledBy)
				return TRUE;

		return FALSE;
	}

	BOOL HasControlledCreatures(const CPlayer* pControlledBy) const
	{
		for (CardSubjectContainerType::Iterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
		{
			const CCard* pCard = i->GetPointer();
			if (pCard->GetController() == pControlledBy &&
				pCard->GetCardType().IsCreature())
				return TRUE;
		}

		return FALSE;
	}

	BOOL HasOtherCardSubjects(const CPlayer* pExceptControlledBy) const
	{
		for (CardSubjectContainerType::Iterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
			if ((*i)->GetController() != pExceptControlledBy)
				return TRUE;

		return FALSE;
	}

	BOOL HasOtherCreatureSubjects(const CPlayer* pExceptControlledBy) const
	{
		for (CardSubjectContainerType::Iterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
		{
			const CCard* pCard = i->GetPointer();
			if (pCard->GetController() != pExceptControlledBy &&
				pCard->GetCardType().IsCreature())
				return TRUE;
		}

		return FALSE;
	}

	BOOL HasOtherCardSubjects(const CCard* pExceptCard) const
	{
		for (CardSubjectContainerType::Iterator i = m_Cards.Begin(); i != m_Cards.End(); ++i)
			if (*i != pExceptCard)
				return TRUE;

		return FALSE;
	}

	BOOL HasOtherPlayerSubjects(const CPlayer* pExceptPlayer) const
	{
		for (PlayerSubjectContainerType::Iterator i = m_Players.Begin(); i != m_Players.End(); ++i)
			if (*i != pExceptPlayer)
				return TRUE;

		return FALSE;
	}

protected:
	SourceCardType				m_pSourceCard;
	CardSubjectContainerType	m_Cards;
	PlayerSubjectContainerType	m_Players;
	SubjectValueContainerType	m_Values;
	CardZoneInfoContainerType	m_CardZoneInfo;
};

//____________________________________________________________________________
//
class CSubjectGroup_
	: public CSubjectGroupBase<
		CStateSupportCountedPtrType<const CCard>, 
		CCardSubjectContainer_, CPlayerSubjectContainer_, CSubjectValueContainer_, CCardZoneInfoContainer_>
{
	friend class CSubjectGroup;
};

class CSubjectGroup
	: public CSubjectGroupBase<
		counted_ptr<const CCard>, 
		CCardSubjectContainer, CPlayerSubjectContainer, CSubjectValueContainer, CCardZoneInfoContainer>
{
	friend class CSubjectGroupContainer_;

public:
	void AddSubjectGroup(const CSubjectGroup& subjectGroup, const ContextValue* pOverrideValue = NULL)
	{
		__super::AddSubjectGroup(subjectGroup, pOverrideValue);
	}

	void AddSubjectGroup(const CSubjectGroup_& subjectGroup, const ContextValue* pOverrideValue = NULL)
	{
		for (CSubjectGroup_::CardSubjectIterator i = subjectGroup.m_Cards.Begin(); i != subjectGroup.m_Cards.End(); ++i)
		{
			const CCard* pCard = i->GetPointer();
			if (pOverrideValue || !subjectGroup.HasValue(pCard))
			{
				if (pOverrideValue)
					AddSubject(pCard, *pOverrideValue, subjectGroup.GetZoneMoveNumber(pCard));
				else
					AddSubject(pCard, subjectGroup.GetZoneMoveNumber(pCard));
			}
			else
				AddSubject(pCard, subjectGroup.GetValue(pCard), subjectGroup.GetZoneMoveNumber(pCard));
		}
		
		for (CSubjectGroup_::PlayerSubjectIterator i = subjectGroup.m_Players.Begin(); i != subjectGroup.m_Players.End(); ++i)
		{
			const CPlayer* pPlayer = *i;
			if (pOverrideValue || !subjectGroup.HasValue(pPlayer))
			{
				if (pOverrideValue)
					AddSubject(pPlayer, *pOverrideValue);
				else
					AddSubject(pPlayer);
			}
			else
				AddSubject(pPlayer, subjectGroup.GetValue(pPlayer));
		}
	}
};

//____________________________________________________________________________
//
class CSubjectGroupContainer
	: public CValueContainer<CSubjectGroup>
{
public:
	BOOL HasSourceCard(const CCard* pCard) const;
	BOOL HasSubject(const CCard* pCard) const;
	BOOL HasSubject(const CPlayer* pPlayer) const;
};

class CSubjectGroupContainer_
	: public CValueContainerBase_<CSubjectGroup, CSubjectGroupContainer>
{
public:
	virtual ~CSubjectGroupContainer_()
	{
		RemoveSavedState();
	}

private:
	PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CSubjectGroup& subjectGroup(GetAt(i));

			for (CCardSubjectContainer::Iterator it = subjectGroup.m_Cards.Begin();
				it != subjectGroup.m_Cards.End(); ++it)
			{
				stateStack.AddTail((PVOID)it->GetPointer());
				it->AddRef();
			}

			stateStack.AddTail((PVOID)subjectGroup.m_Cards.GetSize());

			for (CPlayerSubjectContainer::Iterator it = subjectGroup.m_Players.Begin();
				it != subjectGroup.m_Players.End(); ++it)
			{
				stateStack.AddTail((PVOID)*it);
			}

			stateStack.AddTail((PVOID)subjectGroup.m_Players.GetSize());

			for (CSubjectValueContainer::Iterator it = subjectGroup.m_Values.Begin();
				it != subjectGroup.m_Values.End(); ++it)
			{
				stateStack.AddTail(it->first);
				stateStack.AddTail((PVOID)it->second.nValue1);
				stateStack.AddTail((PVOID)it->second.nValue2);
			}

			stateStack.AddTail((PVOID)subjectGroup.m_Values.GetSize());

			for (CCardZoneInfoContainer::Iterator it = subjectGroup.m_CardZoneInfo.Begin();
				it != subjectGroup.m_CardZoneInfo.End(); ++it)
			{
				stateStack.AddTail((PVOID)it->first);
				stateStack.AddTail((PVOID)it->second);
			}

			stateStack.AddTail((PVOID)subjectGroup.m_CardZoneInfo.GetSize());

			stateStack.AddTail((PVOID)subjectGroup.m_pSourceCard.GetPointer());
			subjectGroup.m_pSourceCard.AddRef();
		}

		stateStack.AddTail((PVOID)nCount);
	}

	PRIVATE_OVERRIDE(void, Pop)()
	{
		CValueContainer::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CSubjectGroup subjectGroup;
			CCard* pSourceCard = (CCard*)m_Stack.RemoveTail();
			subjectGroup.m_pSourceCard = pSourceCard;
			pSourceCard->Release();

			int nCardZoneInfoSize = (int)m_Stack.RemoveTail();
			for (int j = 0; j < nCardZoneInfoSize; ++j)
			{
				int nZoneMoveNumber = (int)m_Stack.RemoveTail();
				const CCard* pCard = (const CCard*)m_Stack.RemoveTail();

				subjectGroup.m_CardZoneInfo.Set(pCard, nZoneMoveNumber);
			}

			int nValueSize = (int)m_Stack.RemoveTail();
			for (int j = 0; j < nValueSize; ++j)
			{
				ContextValue value;
				value.nValue2 = (int)m_Stack.RemoveTail();
				value.nValue1 = (int)m_Stack.RemoveTail();
				PVOID pSubject = m_Stack.RemoveTail();

				subjectGroup.m_Values.Set(pSubject, value);
			}

			int nPlayerSize = (int)m_Stack.RemoveTail();
			for (int j = 0; j < nPlayerSize; ++j)
			{
				CPlayer* pPlayer = (CPlayer*)m_Stack.RemoveTail();
				subjectGroup.AddSubject(pPlayer);
			}

			int nCardSize = (int)m_Stack.RemoveTail();
			for (int j = 0; j < nCardSize; ++j)
			{
				CCard* pCard = (CCard*)m_Stack.RemoveTail();
				subjectGroup.AddSubject(pCard);
				pCard->Release();
			}

			CValueContainer::AddImpl(subjectGroup);
		}
	}

	PRIVATE_OVERRIDE(void, Peek)()
	{
		CValueContainer::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CSubjectGroup subjectGroup;
			subjectGroup.m_pSourceCard = (CCard*)m_Stack.GetPrev(pos);

			int nCardZoneInfoSize = (int)m_Stack.GetPrev(pos);
			for (int j = 0; j < nCardZoneInfoSize; ++j)
			{
				int nZoneMoveNumber = (int)m_Stack.GetPrev(pos);
				const CCard* pCard = (const CCard*)m_Stack.GetPrev(pos);

				subjectGroup.m_CardZoneInfo.Set(pCard, nZoneMoveNumber);
			}

			int nValueSize = (int)m_Stack.GetPrev(pos);
			for (int j = 0; j < nValueSize; ++j)
			{
				ContextValue value;
				value.nValue2 = (int)m_Stack.GetPrev(pos);
				value.nValue1 = (int)m_Stack.GetPrev(pos);
				PVOID pSubject = m_Stack.GetPrev(pos);

				subjectGroup.m_Values.Set(pSubject, value);				
			}

			int nPlayerSize = (int)m_Stack.GetPrev(pos);
			for (int j = 0; j < nPlayerSize; ++j)
			{
				CPlayer* pPlayer = (CPlayer*)m_Stack.GetPrev(pos);
				subjectGroup.AddSubject(pPlayer);
			}

			int nCardSize = (int)m_Stack.GetPrev(pos);
			for (int j = 0; j < nCardSize; ++j)
			{
				CCard* pCard = (CCard*)m_Stack.GetPrev(pos);
				subjectGroup.AddSubject(pCard);
			}

			CValueContainer::AddImpl(subjectGroup);
		}
	}
};

//____________________________________________________________________________
//
class CORE_EXPORT CSubjectGatherer	// Default: includes nothing
	: noncopyable
{
public:
	static Characteristic GetPwrTghAttrCharacteristic(
		Life nLifeDelta, Power nPowerDelta,
		Characteristic pwrTghHint = Characteristic::Neutral,
		CardKeyword cardKeywordToAdd = CardKeyword::Null,
		CardKeyword cardKeywordToRemove = CardKeyword::Null,
		CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null,
		CreatureKeyword creatureKeywordToRemove = CreatureKeyword::Null);

	/*
	static BOOL ResolveDamage(const CSubjectGroup& subjectGroup, DamageType damageType);
	static BOOL ResolvePowerToughness(const CSubjectGroup& subjectGroup, BOOL bThisTurnOnly);
	static BOOL ResolveDamagePrevention(const CSubjectGroup& subjectGroup);
	static BOOL ResolveDamageSourcePrevention(const CSubjectGroup& subjectGroup, CCard* pSourceCard);
	static BOOL ResolveMoveCard(const CSubjectGroup& subjectGroup, CPlayer* pByPlayer);
	*/

	CSubjectGatherer();

	struct DistributeMethodType
	{
		enum Enum : DWORD
		{
			Null,
			DistributeValues,
			Fireball
		};

		DEFINE_DISTINCT_ENUM_OPS( DistributeMethodType );
	};

	// Card subject options

	void SetSubjectZoneId(ZoneId uSubjectZoneId)	{ m_SubjectZoneId = uSubjectZoneId; }	// Default: in-play
	ZoneId GetSubjectZoneId() const					{ return m_SubjectZoneId; }

	const CCardFilter& GetSubjectCardFilter() const	{ return m_CardSubjectFilter; }
	CCardFilter& GetSubjectCardFilter()				{ return m_CardSubjectFilter; }

	void SetIncludeControllerCardsOnly()			{ m_CardSubjectFilter.SetThisCardsControllerOnly(m_pAbility->GetCard()); m_bControllerCardsOnly = TRUE; m_bNoncontrollerCardsOnly = FALSE; }
	void SetIncludeNonControllerCardsOnly()			{ m_CardSubjectFilter.SetNotThisCardsControllerOnly(m_pAbility->GetCard()); m_bControllerCardsOnly = FALSE; m_bNoncontrollerCardsOnly = TRUE; }
	void SetIncludeThisPlayersCardsOnly(const CPlayer* pPlayer)		{ m_CardSubjectFilter.SetThisPlayersCardsOnly(pPlayer); m_bControllerCardsOnly = FALSE; m_bNoncontrollerCardsOnly = FALSE; }
	void SetIncludeNotThisPlayersCardsOnly(const CPlayer* pPlayer)	{ m_CardSubjectFilter.SetNotThisPlayersCardsOnly(pPlayer); m_bControllerCardsOnly = FALSE; m_bNoncontrollerCardsOnly = FALSE; }

	void SetExcludeOwnerCard()										
	{ 
		m_CardSubjectFilter.AddNegateComparer(new SpecificCardComparer(m_pAbility->GetCard()));
	}

	VIRTUAL(BOOL, IsSubjectIncluded)(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const;

	// Player subject options

	void SetIncludePlayers(BOOL bIncludePlayers)	{ m_PlayerSubjectFilter.SetIncludes(bIncludePlayers, bIncludePlayers); }

	void SetIncludeOpponentPlayersOnly()			{ m_PlayerSubjectFilter.SetIncludes(TRUE, FALSE); }
	void SetIncludeControllerPlayerOnly()			{ m_PlayerSubjectFilter.SetIncludes(FALSE, TRUE); }

	const CPlayerFilter& GetPlayerFilter() const	{ return m_PlayerSubjectFilter; }

	VIRTUAL2(BOOL, IsSubjectIncluded)(const CPlayer* pPlayer,
			 						  BOOL bIncludeTricks,
									  BOOL& bTrick) const;

	// Common options

	void SetDistributeValues(int nMaxDistributedValue = SpecialNumber::Any,	// Max value allowed for each target (absolute value is used in comparsion)
							 BOOL bFirstValueOnly = FALSE);					// if false, all values will be the same in each configuration; if true, only the first value will be changed
	void SetFancyDistribute(DistributeMethodType method)			{ m_Distribute = method; }

	void SetSubjectCount(int nMinSubjectCount = 1,
						 int nMaxSubjectCount = 1,						// use SpecialNumber::Any for unlimited number of targets
						 BOOL bLowerMinWhenNotEnoughSubjects = FALSE);	// if true, GetSubjects() will still return subject groups with lowered subject count
	void SetSingleSourceZone(BOOL bSingleZone)	{ m_bSingleZone = bSingleZone; }
	void SetMultiZones(BOOL bMultiZones)  { m_bMultiZones = bMultiZones; }

	void SetAbility(const CAbility* pAbility)					{ m_pAbility = pAbility; }	// Also sets source card in subject groups if SetSourceCard() is not called
	const CAbility* GetAbility() const							{ return m_pAbility; }

	void SetSourceCard(const CCard* pCard)						{ m_pSourceCard = pCard; }
	const CCard* GetSourceCard() const							{ return m_pSourceCard ? m_pSourceCard : (m_pAbility ? m_pAbility->GetCard() : NULL); }

	// Optional: if set, overrides the controller of m_pAbility
	void SetController(const CPlayer* pController)				
	{ 
		m_pController = pController; 
		if (m_bControllerCardsOnly)
			m_CardSubjectFilter.SetThisPlayersCardsOnly(pController);
		else
		if (m_bNoncontrollerCardsOnly)
			m_CardSubjectFilter.SetNotThisPlayersCardsOnly(pController);
	}

	const CPlayer* GetController() const						{ return m_pController; }

	// Gathering

	BOOL HasLegalSubjects(BOOL bIncludeTricks) const;
	void GetSubjects(BOOL bIncludeTricks, 
					CSubjectGroupContainer& subjectGroups,
					std::vector<BOOL>& tricks,
					const ContextValue& value) const;

	// Trick options

	VIRTUAL(Characteristic, GetCharacteristic)() const			{ return m_DefaultChar; }
	void SetDefaultCharacteristic(Characteristic defaultChar)	{ m_DefaultChar = defaultChar; }

protected:
	const CPlayer* GetControllerImpl() const
	{
		if (m_pController)
			return m_pController;

		return m_pAbility->GetCard()->GetController();
	}

	const CAbility*	m_pAbility;
	const CPlayer*	m_pController;
	const CCard*	m_pSourceCard;

	// Card subject members

	CCardFilter		m_CardSubjectFilter;
	ZoneId			m_SubjectZoneId;
	BOOL			m_bControllerCardsOnly;
	BOOL			m_bNoncontrollerCardsOnly;
	BOOL            m_bMultiZones;

	// Player subject members

	CPlayerFilter	m_PlayerSubjectFilter;

	// Common subject members

	int				m_nMinSubjectCount;
	int				m_nMaxSubjectCount;
	BOOL			m_bLowerMinWhenNotEnoughSubjects;

	DistributeMethodType m_Distribute;
	int				m_nMaxDistributedValue;
	BOOL			m_bDistributeFirstValueOnly;
	BOOL			m_bSingleZone;

	Characteristic	m_DefaultChar;
};
