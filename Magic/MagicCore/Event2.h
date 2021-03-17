#pragma once

class CCreatureCard;
class CAbilityAction;
class CManaProductionAbilityAction;
class CZone;
class CSubjectGroup;
class CCreatureCard;
class CNode;
class CPlaneswalkerCard;

//____________________________________________________________________________
//
template <typename N>
class CNumberEventSource
	: public CEventSource2< N, N >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CNumberEventSource(LPCTSTR strEventSourceName, N nValue = 0)
		: CEventSource2(strEventSourceName)
		, m_nValue(nValue)
	{}

	virtual ~CNumberEventSource() {}

public:
	operator N() const
	{
		return m_nValue;
	}

	CNumberEventSource& operator=(N nValue)
	{
		if (m_nValue != nValue)
		{
			N nOldValue = m_nValue;
			m_nValue = nValue;
			FireEvent(nOldValue, m_nValue);
		}
		
		return *this;
	}

	CNumberEventSource& operator+=(N nValue)
	{
		N nOldValue = m_nValue;
		m_nValue += nValue;
		FireEvent(nOldValue, m_nValue);
		
		return *this;
	}

	CNumberEventSource& operator-=(N nValue)
	{
		N nOldValue = m_nValue;
		m_nValue -= nValue;
		FireEvent(nOldValue, m_nValue);
		
		return *this;
	}

protected:
	int_ m_nValue;
};

//____________________________________________________________________________
//
template <typename N, class C>
class CNumberEventSource1
	: public CEventSource3< N, N, C >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CNumberEventSource1(LPCTSTR strEventSourceName, C c, N nValue = 0)
		: CEventSource3(strEventSourceName)
		, m_nValue(nValue)
		, m_C(c)
	{}

	virtual ~CNumberEventSource1() {}

public:
	operator N() const
	{
		return m_nValue;
	}

	CNumberEventSource1& operator=(N nValue)
	{
		if (m_nValue != nValue)
		{
			N nOldValue = m_nValue;
			m_nValue = nValue;
			FireEvent(nOldValue, m_nValue, m_C);
		}
		
		return *this;
	}

	CNumberEventSource1& operator+=(N nValue)
	{
		N nOldValue = m_nValue;
		m_nValue += nValue;
		FireEvent(nOldValue, m_nValue, m_C);
		
		return *this;
	}

	CNumberEventSource1& operator-=(N nValue)
	{
		N nOldValue = m_nValue;
		m_nValue -= nValue;
		FireEvent(nOldValue, m_nValue, m_C);
		
		return *this;
	}

protected:
	int_ m_nValue;
	C m_C;
};

//____________________________________________________________________________
//
template <class E, class B, template <typename> class S>
class CBitflagEnumEventSource
	: public CEventSource3< E*, B, B >
{
public:
	B Get() const 
	{
		return m_Bitflag;
	}

protected:
	CBitflagEnumEventSource(LPCTSTR strEventSourceName, B bitflag)
		: CEventSource3(strEventSourceName)
		, m_Bitflag(bitflag)
	{}

	BOOL Set(B setBitflag, B mask)	// TRUE->Changed, FALSE->No change
	{
		B previousBitflag = m_Bitflag;
		B newBitflag = m_Bitflag;

		setBitflag &= mask;
		newBitflag &= ~mask;
		newBitflag |= setBitflag;
		
		B changed = previousBitflag ^ newBitflag;
		if (changed.Any())
		{
			m_Bitflag = newBitflag;
			FireEvent((E*)this, previousBitflag, m_Bitflag);
			return TRUE;
		}
		return FALSE;
	}

	S<B> m_Bitflag;
};

//____________________________________________________________________________
//
class CORE_EXPORT COrientation
	: public CBitflagEnumEventSource< COrientation, Orientation, CStateSupportEnumType >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	COrientation(CCard* pCard);
	virtual ~COrientation() {}

public:
	BOOL IsTapped() const;
	BOOL IsUntapped() const;
	BOOL IsFlipped() const;
	BOOL IsSecondFaced() const;
	BOOL IsMorphed() const;

	BOOL Tap();
	BOOL Untap();
	BOOL NoTapStance();

	BOOL IsFaceDown() const;
	BOOL FaceDown();
	BOOL FaceUp();
	BOOL NoFacing();
	BOOL Flip();
	BOOL UnFlip();
	BOOL SecondFace();
	BOOL FirstFace();
	//BOOL IsMorph();
	BOOL Morph();
	BOOL UnMorph();

	void ResetTapUntapCount();
	int GetTapCount() const;
	int GetUntapCount() const;

	CCard* GetCard() const { return m_pCard; }

protected:
	CCard*	m_pCard;
	int_	m_nTapCount;
	int_	m_nUntapCount;
};

//____________________________________________________________________________
//
template < class E, class B >
class CBitflagEventSourceModifier;

template < class E, class B >
class CTurnSupportBitflagEventSource
	: public CBitflagEnumEventSource< E, B, CStateSupportEnum64Type >
{
	friend class CBitflagEventSourceModifier< E, B >;
	friend class CCardFlag;

protected:
	CTurnSupportBitflagEventSource(LPCTSTR strEventSourceName, B positive, B negative)
		: CBitflagEnumEventSource(strEventSourceName, B::Null)
		, m_Positive(positive)
		, m_Negative(negative)
	{
	}

	virtual ~CTurnSupportBitflagEventSource() {}

public:
	void TurnReset()
	{
		for (int i = m_Bitflags.GetSize() - 1; i >= 0; --i)
		{
			const BitflagEntry& entry(m_Bitflags[i]);

			if (entry.m_bThisTurnOnly)
				m_Bitflags.RemoveAt(i);
		}

		SetBitflagImpl();
	}

	int GetCount() const			{ return GetCount(true, true); }
	int GetPositiveCount() const	{ return GetCount(true, false); }
	int GetNegativeCount() const	{ return GetCount(false, true); }

protected:
	struct EntryType
	{
		enum Enum
		{
			Addition,
			Removal
		};

		DEFINE_DISTINCT_ENUM_OPS(EntryType);
	};

	struct BitflagEntry
	{
		BitflagEntry(B bitflag = B::Null,		// Single bit only!
					 BOOL bThisTurnOnly = FALSE,
					 EntryType entryType = EntryType::Addition,
					 DWORD dwData = 0)
			: m_Bitflag(bitflag)
			, m_bThisTurnOnly(bThisTurnOnly)
			, m_bAddition(entryType == EntryType::Addition)
			, m_dwData(dwData)
		{
		}

		BitflagEntry(const BitflagEntry& entry)
		{
			m_Bitflag = entry.m_Bitflag;
			m_bThisTurnOnly = entry.m_bThisTurnOnly;
			m_dwData = entry.m_dwData;
			m_bAddition = entry.m_bAddition;
		}

		bool operator==(const BitflagEntry& entry) const
		{
			return m_Bitflag == entry.m_Bitflag 
				&& m_bThisTurnOnly == entry.m_bThisTurnOnly
				&& m_bAddition == entry.m_bAddition
				&& m_dwData == entry.m_dwData;
		}

		B m_Bitflag;
		BOOL m_bThisTurnOnly;
		DWORD m_dwData;
		BOOL m_bAddition;
	};

	int GetCount(bool bPositive, bool bNegative) const
	{
		int nCount = 0;

		for (int i = 0; i < m_Bitflags.GetSize(); ++i)
		{
			const BitflagEntry& entry(m_Bitflags[i]);

			if (bPositive)
				if ((entry.m_Bitflag & m_Positive).Any())
					++nCount;

			if (bNegative)
				if ((entry.m_Bitflag & m_Negative).Any())
					++nCount;
		}

		return nCount;
	}

	DWORD GetData(B bitflag) const
	{
		if (!(m_Bitflag & bitflag).Any())
			return 0;

		for (int i = m_Bitflags.GetSize() - 1; i >= 0; --i)
		{
			const BitflagEntry& entry(m_Bitflags.GetAt(i));

			if (entry.m_Bitflag == bitflag &&
				entry.m_bAddition)
				return entry.m_dwData;
		}

		return 0;
	}

	const CCardFilter* GetDataAsCardFilter(B bitflag) const	// Single bit only!
	{
		return (const CCardFilter*)GetDataAsInteger(bitflag);
	}

	int GetDataAsInteger(B bitflag) const
	{
		return GetData(bitflag);
	}

	// Caution: usaully for one turn only changes
	void AddEntry(const BitflagEntry& entry)
	{
		m_Bitflags.Add(entry);

		SetBitflagImpl();
	}

	// Caution: usually you want to use AddEntry() with m_bAddition == false when making one turn changes
	void RemoveEntry(const BitflagEntry& entry)
	{
		for (int i = m_Bitflags.GetSize() - 1; i >= 0; --i)
		{
			const BitflagEntry& entry2(m_Bitflags[i]);

			if (entry2 == entry)
			{
				m_Bitflags.RemoveAt(i);
				SetBitflagImpl();
				return;
			}
		}

		ATLASSERT(false); // may be okay
	}

private:
	class CBitflagEntryContainer_
		: public CValueContainerBase_<BitflagEntry>
	{
	public:
		virtual ~CBitflagEntryContainer_()
		{
			RemoveSavedState();
		}

	private:
		PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
		{
			int nCount = GetSize();
			for (int i = nCount - 1; i >= 0; --i)
			{
				const BitflagEntry& entry(GetAt(i));
				stateStack.AddTail64((PVOID64)entry.m_Bitflag.Get());
				stateStack.AddTail((PVOID)entry.m_bThisTurnOnly);
				stateStack.AddTail((PVOID)entry.m_bAddition);
				stateStack.AddTail((PVOID)entry.m_dwData);
			}

			stateStack.AddTail((PVOID)nCount);
		}

		PRIVATE_OVERRIDE(void, Pop)()
		{
			CValueContainer::RemoveAllImpl();

			int nCount = (int)m_Stack.RemoveTail();
			for (int i = 0; i < nCount; ++i)
			{
				BitflagEntry entry;

				entry.m_dwData = (DWORD)m_Stack.RemoveTail();
				entry.m_bAddition = (BOOL)m_Stack.RemoveTail();
				entry.m_bThisTurnOnly = (BOOL)m_Stack.RemoveTail();
				entry.m_Bitflag = (B::Enum)(B::ValueType)m_Stack.RemoveTail64();
				CValueContainer::AddImpl(entry);
			}
		}

		PRIVATE_OVERRIDE(void, Peek)()
		{
			CValueContainer::RemoveAllImpl();

			StateStack::Position pos = m_Stack.GetTailPosition();

			int nCount = (int)m_Stack.GetPrev(pos);
			for (int i = 0; i < nCount; ++i)
			{
				BitflagEntry entry;

				entry.m_dwData = (DWORD)m_Stack.GetPrev(pos);
				entry.m_bAddition = (BOOL)m_Stack.GetPrev(pos);
				entry.m_bThisTurnOnly = (BOOL)m_Stack.GetPrev(pos);
				entry.m_Bitflag = (B::Enum)(B::ValueType)m_Stack.GetPrev64(pos);
				CValueContainer::AddImpl(entry);
			}
		}
	};

	void SetBitflagImpl()
	{
		B bitflag = B::Null;

		std::map<B, UINT> counts;

		for (int i = 0; i < m_Bitflags.GetSize(); ++i)
		{
			const BitflagEntry& entry(m_Bitflags[i]);

			if (entry.m_bAddition)
			{
				std::map<B, UINT>::iterator i = counts.find(entry.m_Bitflag); 
				if (i != counts.end())
					++(i->second);
				else
				{
					counts[entry.m_Bitflag] = 1;
					bitflag |= entry.m_Bitflag;
				}
			}
			else
			{
				std::map<B, UINT>::iterator i = counts.find(entry.m_Bitflag); 
				if (i != counts.end())
				{
					if (i->second > 1)
						--(i->second);
					else
					{
						counts.erase(i);
						bitflag &= ~entry.m_Bitflag;
					}
				}
			}
		}

		Set(bitflag, B::_All);
	}
	
	CBitflagEntryContainer_		m_Bitflags;

	B	m_Positive;
	B	m_Negative;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardKeyword
	: public CTurnSupportBitflagEventSource< CCardKeyword, CardKeyword >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardKeyword(CCard* pCard);
	virtual ~CCardKeyword() {}

public:
	CCard* GetCard() const;

	void AddNoUntapInUntapPhase();
	BOOL NoUntapInUntapPhase() const;

	void AddNoUntapInNextContUntap();
	void RemoveNoUntapInNextContUntap(BOOL bThisTurnOnly);
	BOOL NoUntapInNextContUntap() const;

	void AddCantBeCountered(BOOL bThisTurnOnly);
	void RemoveCantBeCountered(BOOL bThisTurnOnly);
	BOOL CantBeCountered() const;

	BOOL Protection() const;
	CardKeyword GetProtection() const;
	void AddProtection(CardKeyword protection, BOOL bThisTurnOnly);
	void RemoveProtection(CardKeyword protection, BOOL bThisTurnOnly);
/* 
	BOOL Vanishing(int& nValue) const;
	void AddVanishing(BOOL bThisTurnOnly, int nValue);
	void RemoveVanishing(BOOL bThisTurnOnly, int nValue);
 */
	void AddShroud(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);
	void RemoveShroud(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);
	BOOL HasShroud(const CCard* pCard) const;

	void AddHexproof(BOOL bThisTurnOnly);
	void RemoveHexproof(BOOL bThisTurnOnly);
	BOOL HasHexproof() const;

	void AddCantGetCounters(BOOL bThisTurnOnly);
	void RemoveCantGetCounters(BOOL bThisTurnOnly);
	BOOL HasCantGetCounters() const;

	void AddPhyrexianMana(BOOL bThisTurnOnly);
	void RemovePhyrexianMana(BOOL bThisTurnOnly);
	BOOL HasPhyrexianMana() const;

	void AddUnpreventableDamage(BOOL bThisTurnOnly);
	void RemoveUnpreventableDamage(BOOL bThisTurnOnly);
	BOOL HasUnpreventableDamage() const;

	void AddFlash(BOOL bThisTurnOnly);
	void RemoveFlash(BOOL bThisTurnOnly);
	BOOL HasFlash() const;

	void AddPflash(BOOL bThisTurnOnly);
	void RemovePflash(BOOL bThisTurnOnly);
	BOOL HasPflash() const;

	void AddStormCopy(BOOL bThisTurnOnly);
	void RemoveStormCopy(BOOL bThisTurnOnly);
	BOOL HasStormCopy() const;

	void AddSplitSecond(BOOL bThisTurnOnly);
	void RemoveSplitSecond(BOOL bThisTurnOnly);
	BOOL HasSplitSecond() const;

	void AddChangeling(BOOL bThisTurnOnly);
	void RemoveChangeling(BOOL bThisTurnOnly);
	BOOL HasChangeling() const;

	void AddIndestructible(BOOL bThisTurnOnly);
	void RemoveIndestructible(BOOL bThisTurnOnly);
	BOOL HasIndestructible() const;

	void AddCanChooseNotUntap(BOOL bThisTurnOnly);
	void RemoveCanChooseNotUntap(BOOL bThisTurnOnly);
	BOOL HasCanChooseNotUntap() const;

	void AddDeathtouch(BOOL bThisTurnOnly);
	void RemoveDeathtouch(BOOL bThisTurnOnly);
	BOOL HasDeathtouch() const;

	void AddLifelink(BOOL bThisTurnOnly);
	void RemoveLifelink(BOOL bThisTurnOnly);
	BOOL HasLifelink() const;

	void AddWither(BOOL bThisTurnOnly);
	void RemoveWither(BOOL bThisTurnOnly);
	BOOL HasWither() const;

	BOOL HasDredge() const;
	void AddDredge(BOOL bThisTurnOnly, int nValue);
	void RemoveDredge(BOOL bThisTurnOnly, int nValue);

	BOOL HasTotemArmor() const;
	void AddTotemArmor(BOOL bThisTurnOnly);
	void RemoveTotemArmor(BOOL bThisTurnOnly);

	BOOL HasMovementReplacement() const;
	void AddMovementReplacement(BOOL bThisTurnOnly, ZoneId nfromZone, ZoneId ntoZone, MoveType nMoveType, int nValue, LPCTSTR nTag, CCardFilter* nFilter);
	//void RemoveMovementReplacement(BOOL bThisTurnOnly);

	void AddInfect(BOOL bThisTurnOnly);
	void RemoveInfect(BOOL bThisTurnOnly);
	BOOL HasInfect() const;

	void AddEmblem(BOOL bThisTurnOnly);
	void RemoveEmblem(BOOL bThisTurnOnly);
	BOOL IsEmblem() const;

	void AddFreecast(BOOL bThisTurnOnly);
	void RemoveFreecast(BOOL bThisTurnOnly);
	BOOL HasFreecast() const;

	BOOL HasMadness() const;
	void AddMadness(BOOL bThisTurnOnly);
	void RemoveMadness(BOOL bThisTurnOnly);

	BOOL HasPhasing() const;
	void AddPhasing(BOOL bThisTurnOnly);
	void RemovePhasing(BOOL bThisTurnOnly);

	BOOL HasCardHaste() const;
	void AddCardHaste(BOOL bThisTurnOnly);
	void RemoveCardHaste(BOOL bThisTurnOnly);

	BOOL HasSpellCopy() const;
	void AddSpellCopy(BOOL bThisTurnOnly);
	void RemoveSpellCopy(BOOL bThisTurnOnly);

	BOOL HasDetain() const;
	void AddDetain(BOOL bThisTurnOnly);
	void RemoveDetain(BOOL bThisTurnOnly);

	void AddSpecialProtection(BOOL bThisTurnOnly, const CCardFilter* pCardFilter);
	void AddSpecialProtectionSpellsOnly(BOOL bThisTurnOnly, const CCardFilter* pCardFilter);
	void RemoveSpecialProtection(BOOL bThisTurnOnly);
	BOOL HasSpecialProtection() const;

protected:
	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CReplacementKeyword
	: public CTurnSupportBitflagEventSource< CReplacementKeyword, ReplacementKeyword >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CReplacementKeyword(CCard* pCard);
	virtual ~CReplacementKeyword() {}

public:
	CCard* GetCard() const;

	void AddGraveyardToExile(BOOL bThisTurnOnly);
	void RemoveGraveyardToExile(BOOL bThisTurnOnly);
	BOOL HasGraveyardToExile() const;

	void AddCommanderFlag(BOOL bThisTurnOnly);
	void RemoveCommanderFlag(BOOL bThisTurnOnly);
	BOOL HasCommanderFlag() const;

	BOOL HasUnearth() const;

	void AddFlashback(BOOL bThisTurnOnly);
	BOOL HasFlashback() const;

	void RemoveFieldKeywords();

protected:
	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureKeyword
	: public CTurnSupportBitflagEventSource< CCreatureKeyword, CreatureKeyword >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCreatureKeyword(CCreatureCard* pCreatureCard);
	virtual ~CCreatureKeyword() {}

public:
	CCreatureCard* GetCreatureCard() const;

//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
//
	BOOL FirstStrike() const;
	BOOL DoubleStrike() const;
	BOOL Flying() const;
	BOOL Fear() const;
	BOOL Intimidate() const;
	BOOL Unleash() const;
	BOOL Paired() const;
	BOOL Soulbond() const;
	BOOL Shadow() const;
	BOOL ShadowReach() const;
	BOOL Horsemanship() const;
	BOOL Flanking() const;
	BOOL ReplacedDamage() const;
	BOOL FullReplacedDamage() const;
	BOOL SwitchedPT() const;
	BOOL Persist() const;
	BOOL TappedCanBlock() const;
	BOOL Haste() const;
	BOOL HasteCombat() const;
	BOOL HasteTap() const;
	BOOL Unblockable(const CCreatureCard* pCard) const;	// Is unblockable by *pCard?

	BOOL CanReach(const CCreatureCard* pCard) const;
	BOOL Vigilance() const;
	BOOL CanDefenderAttack() const;

	BOOL CantBeBlockedByMultiple(const CCreatureCard* pCard) const;
	BOOL CantBeBlockedByOne(const CCreatureCard* pCard) const;
	BOOL CantBeBlockedByOneOrTwo(const CCreatureCard* pCard) const;
	BOOL CanOnlyBlockFlying(const CCreatureCard* pCard) const;

	BOOL CantAttack() const;
	BOOL Defender() const;
	BOOL CantBlock(const CCreatureCard* pCard) const;		// Can't block *pCard?

	BOOL CanAssignDamageToPlayer() const;

	BOOL Landwalk() const;
	CreatureKeyword GetLandwalk() const;

	BOOL Lure() const;

	BOOL CowardAttacker() const;
	BOOL CowardBlocker() const;

	BOOL DealNoCombatDamage() const;
	BOOL DealNoNoncombatDamage() const;
	BOOL PreventAllCombatDamage() const;
	BOOL PreventAllNoncombatDamage() const;

	BOOL Trample() const;
	BOOL MustAttack() const;
	BOOL CantRegenerate() const;
	
	BOOL Devour() const;
	BOOL Amplify() const;

	BOOL HasNonBasicWalk() const;
	const CCardFilter* CCreatureKeyword::GetNonBasicWalkFilter() const;
	BOOL HasUnblockableWalk() const;
	const CCardFilter* CCreatureKeyword::GetUnblockableWalkFilter() const;
	BOOL CCreatureKeyword::LandwalkReach() const;

//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
//
	void AddFirstStrike(BOOL bThisTurnOnly);
	void AddDoubleStrike(BOOL bThisTurnOnly);
	void AddFlying(BOOL bThisTurnOnly);
	void AddFear(BOOL bThisTurnOnly);
	void AddIntimidate(BOOL bThisTurnOnly);
	void AddUnleash(BOOL bThisTurnOnly);
	void AddPaired(BOOL bThisTurnOnly);
	void AddSoulbond(BOOL bThisTurnOnly);
	void AddHaste(BOOL bThisTurnOnly);
	void AddHasteCombat(BOOL bThisTurnOnly);
	void AddHasteTap(BOOL bThisTurnOnly);
	void AddUnblockable(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);

	void AddReach(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);
	void AddVigilance(BOOL bThisTurnOnly);
	void AddDefenderMayAttack(BOOL bThisTurnOnly);

	void AddCantBeBlockedByMultiple(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);
	void AddCantBeBlockedByOne(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);
	void AddCantBeBlockedByOneOrTwo(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);
	void AddCanOnlyBlockFlying(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);

	void AddCantAttack(BOOL bThisTurnOnly);
	void AddDefender(BOOL bThisTurnOnly);
	void AddCantBlock(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter = NULL);

	void AddCanAssignDamageToPlayer(BOOL bThisTurnOnly);

	void AddLandwalk(CreatureKeyword landwalk, BOOL bThisTurnOnly);

	void AddLure(BOOL bThisTurnOnly);

	void AddCowardAttacker(BOOL bThisTurnOnly);
	void AddCowardBlocker(BOOL bThisTurnOnly);

	void AddDealNoCombatDamage(BOOL bThisTurnOnly);
	void AddDealNoNoncombatDamage(BOOL bThisTurnOnly);
	void AddPreventAllCombatDamage(BOOL bThisTurnOnly);
	void AddPreventAllNoncombatDamage(BOOL bThisTurnOnly);

	void AddTrample(BOOL bThisTurnOnly);
	void AddMustAttack(BOOL bThisTurnOnly);
	void AddCantRegenerate(BOOL bThisTurnOnly);
	void AddDeathtouch(BOOL bThisTurnOnly);

	void AddShadow(BOOL bThisTurnOnly);
	void AddShadowReach(BOOL bThisTurnOnly);
	void AddHorsemanship(BOOL bThisTurnOnly);
	void AddFlanking(BOOL bThisTurnOnly);
	void AddReplacedDamage(BOOL bThisTurnOnly);
	void AddFullReplacedDamage(BOOL bThisTurnOnly);
	void AddSwitchedPT(BOOL bThisTurnOnly);
	void AddPersist(BOOL bThisTurnOnly);
	void AddTappedCanBlock(BOOL bThisTurnOnly);

	void AddDevour(BOOL bThisTurnOnly);
	void AddAmplify(BOOL bThisTurnOnly);

	void AddNonBasicWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter);
	void AddUnblockableWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter);
	void AddLandwalkReach(BOOL bThisTurnOnly);

//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
//
	void RemoveFirstStrike(BOOL bThisTurnOnly);		// Don't pair RemoveXXX() with AddXXX() when using bThisTurnOnly == TRUE in AddXXX()
	void RemoveDoubleStrike(BOOL bThisTurnOnly);
	void RemoveFlying(BOOL bThisTurnOnly);
	void RemoveFear(BOOL bThisTurnOnly);
	void RemoveIntimidate(BOOL bThisTurnOnly);
	void RemoveUnleash(BOOL bThisTurnOnly);
	void RemovePaired(BOOL bThisTurnOnly);
	void RemoveSoulbond(BOOL bThisTurnOnly);
	void RemoveHaste(BOOL bThisTurnOnly);
	void RemoveHasteCombat(BOOL bThisTurnOnly);
	void RemoveHasteTap(BOOL bThisTurnOnly);
	void RemoveUnblockable(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);

	void RemoveReach(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);
	void RemoveVigilance(BOOL bThisTurnOnly);
	void RemoveDefenderMayAttack(BOOL bThisTurnOnly);

	void RemoveCantBeBlockedByMultiple(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);
	void RemoveCantBeBlockedByOne(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);
	void RemoveCantBeBlockedByOneOrTwo(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);
	void RemoveCanOnlyBlockFlying(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);

	void RemoveCantAttack(BOOL bThisTurnOnly);
	void RemoveDefender(BOOL bThisTurnOnly);
	void RemoveCantBlock(BOOL bThisTurnOnly, const CCardFilter* pExceptionFilter);

	void RemoveCanAssignDamageToPlayer(BOOL bThisTurnOnly);

	void RemoveLandwalk(CreatureKeyword landwalk, BOOL bThisTurnOnly);

	void RemoveLure(BOOL bThisTurnOnly);

	void RemoveCowardAttacker(BOOL bThisTurnOnly);
	void RemoveCowardBlocker(BOOL bThisTurnOnly);

	void RemoveDealNoCombatDamage(BOOL bThisTurnOnly);
	void RemoveDealNoNoncombatDamage(BOOL bThisTurnOnly);
	void RemovePreventAllCombatDamage(BOOL bThisTurnOnly);
	void RemovePreventAllNoncombatDamage(BOOL bThisTurnOnly);

	void RemoveTrample(BOOL bThisTurnOnly);
	void RemoveMustAttack(BOOL bThisTurnOnly);
	void RemoveCantRegenerate(BOOL bThisTurnOnly);
	void RemoveDeathtouch(BOOL bThisTurnOnly);

	void RemoveShadow(BOOL bThisTurnOnly);
	void RemoveShadowReach(BOOL bThisTurnOnly);
	void RemoveHorsemanship(BOOL bThisTurnOnly);
	void RemoveFlanking(BOOL bThisTurnOnly);
	void RemoveReplacedDamage(BOOL bThisTurnOnly);
	void RemoveFullReplacedDamage(BOOL bThisTurnOnly);
	void RemoveSwitchedPT(BOOL bThisTurnOnly);
	void RemovePersist(BOOL bThisTurnOnly);
	void RemoveTappedCanBlock(BOOL bThisTurnOnly);

	void RemoveDevour(BOOL bThisTurnOnly);
	void RemoveAmplify(BOOL bThisTurnOnly);

	void RemoveNonBasicWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter);
	void RemoveUnblockableWalk(BOOL bThisTurnOnly, const CCardFilter* pCardFilter);
	void RemoveLandwalkReach(BOOL bThisTurnOnly);

//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
//
protected:
	CCreatureCard*	m_pCreatureCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardFlag
	: public CTurnSupportBitflagEventSource< CCardFlag, CardFlag >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardFlag();
	virtual ~CCardFlag() {}

public:
	void AddAbilityFlag(DWORD dwFlag);
	bool HasAbilityFlag(DWORD dwFlag) const;

	void AddHasDealtCombatDamage();
	bool HasDealtCombatDamage() const;

	void AddHasDealtNonCombatDamage();
	bool HasDealtNonCombatDamage() const;

	void ZoneResetMark()
	{
		for (int i = m_Bitflags.GetSize() - 1; i >= 0; --i)
		{
			const BitflagEntry& entry(m_Bitflags[i]);
			if ((entry.m_Bitflag & CardFlag::EquippedEnchantedOnPhaseFlag).Any())
				m_Bitflags.RemoveAt(i);
		}

		SetBitflagImpl();
	}

	DWORD GetData(CardFlag cardFlag) const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureFlag
	: public CTurnSupportBitflagEventSource< CCreatureFlag, CreatureFlag >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCreatureFlag();
	virtual ~CCreatureFlag() {}

public:
	void AddHasTakenCombatDamage();
	bool HasTakenCombatDamage() const;

	void AddHasTakenNonCombatDamage();
	bool HasTakenNonCombatDamage() const;

	void AddHasAttacked();
	bool HasAttacked() const;
	
	void AddIsBlocked();
	void RemoveIsBlocked();
	bool IsBlocked() const;
	
	void AddHasBlocked();
	void RemoveHasBlocked();
	bool HasBlocked() const;

	void AddHasBeenBlocked();
	void RemoveHasBeenBlocked();
	bool HasBeenBlocked() const;
};

//____________________________________________________________________________
//
template <class T>
class CPtrEventSource
	: public CEventSource2< T*, T* >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPtrEventSource(LPCTSTR strEventSourceName, T* pT = NULL)
		: CEventSource2(strEventSourceName)
		, m_pT(pT)
	{}

	virtual ~CPtrEventSource() {}

public:
	CPtrEventSource& operator=(T* pT)
	{
		SetPointer(pT);
		return *this;
	}

	T* operator->() const	{ return m_pT.GetPointer(); }

	T& operator*() const	{ return *(m_pT.GetPointer()); }

	T* GetPointer()	const	{ return m_pT.GetPointer(); }

	void SetPointer(T* pT)	
	{ 
		if (pT != m_pT)
		{
			T* pFromPtr = m_pT.GetPointer();
			m_pT = pT;
			FireEvent(pFromPtr, pT);	
		}
	}

protected:
	// State managed
	CStateSupportPtrType<T> m_pT;
};

//____________________________________________________________________________
//
template <class T, class C>
class CPtrEventSource1
	: public CEventSource3< T*, T*, C >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPtrEventSource1(LPCTSTR strEventSourceName, C c, T* pT = NULL)
		: CEventSource3(strEventSourceName)
		, m_pT(pT)
		, m_C(c)
	{}

	virtual ~CPtrEventSource1() {}

public:
	CPtrEventSource1& operator=(T* pT)
	{
		SetPointer(pT);
		return *this;
	}

	T* operator->() const	{ return m_pT.GetPointer(); }

	T& operator*() const	{ return *(m_pT.GetPointer()); }

	T* GetPointer()	const	{ return m_pT.GetPointer(); }

	void SetPointer(T* pT)	
	{ 
		if (pT != m_pT)
		{
			T* pFromPtr = m_pT.GetPointer();
			m_pT = pT;
			FireEvent(pFromPtr, pT, m_C);	
		}
	}

protected:
	// State managed
	CStateSupportPtrType<T> m_pT;
	C m_C;
};

//____________________________________________________________________________
//
template <class T>
class CCountedPtrEventSource
	: public CEventSource2< T*, T* >
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCountedPtrEventSource(LPCTSTR strEventSourceName, T* pT = NULL)
		: CEventSource2(strEventSourceName)
		, m_cpT(pT)
	{}

	virtual ~CCountedPtrEventSource() {}

public:
	CCountedPtrEventSource& operator=(const counted_ptr<T>& rhs)
	{
		if (rhs.GetPointer() != m_cpT.GetPointer())
		{
			T* pFromPtr = m_cpT.GetPointer();
			m_cpT = rhs;	
			FireEvent(pFromPtr, rhs.GetPointer());
		}

		return *this;
	}

	T* operator->() const	{ return m_cpT.GetPointer(); }

	T& operator*() const	{ return *(m_cpT.GetPointer()); }

	T* GetPointer()	const
	{
		return m_cpT.GetPointer();
	}

protected:
	// State managed
	CStateSupportCountedPtrType<T> m_cpT;
};

//____________________________________________________________________________
//

// OnResolutionCompleted(CAbilityAction* pAbilityAction, BOOL bResult);
typedef CEventSource2<const CAbilityAction*, BOOL> ResolutionCompletedEventSource;

// OnTappedForMana(const CManaProductionAbilityAction* pManaProductionAbilityAction, BOOL bResult)
typedef CEventSource2<const CManaProductionAbilityAction*, BOOL> CardTapForManaEventSource;

// OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
typedef CEventSource8<	const std::vector<SelectionEntry>&, 
						int, CPlayer*, 
						DWORD, DWORD, DWORD, DWORD, DWORD > SelectionEventSource;

// OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
typedef CEventSource5<CCard*, CZone*, CZone*, CPlayer*, MoveType> CardMovementEventSource;

// OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
typedef CEventSource3<CCard*, CardType, CardType> CardTypeEventSource;

// OnCreatureTypeChanged(CCard* pCard)
typedef CEventSource1<CCard*> CreatureTypeEventSource;

// OnCardEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount)
typedef CEventSource3<CCard*, int, int> CardEnchantCountEventSource;

// OnCardEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard)
typedef CEventSource3<CCard*, CCard*, CCard*> CardEquippedEventSource;

// OnDealtDamage(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
typedef CEventSource5<CCard*, CPlayer*, CCreatureCard*, CPlaneswalkerCard* , Damage> DamageDealEventSource;

// BeforeDealtDamage(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage, int effect_index)
typedef CEventSource6<CCard*, CPlayer*, CCreatureCard*, CPlaneswalkerCard* , Damage, int> BeforeDamageDealtEventSource;

// OnPlayerChangedLife(CPlayer* pPlayer, Life nFromLife, Life nToLife)
typedef CEventSource3<CPlayer*, Life, Life> ChangeLifeEventSource;

// OnManaAdd(CPlayer* pPlayer, Life nFromLife, Life nToLife)
typedef CEventSource2<CPlayer*, const CManaPool> ManaAddEventSource;

// OnSpellCast(CCard* pCard)
typedef CEventSource1<CCard*> CastSpellEventSource;

// OnCardIsAlsoAChanged(CCard* pCard, CCard* pFromIsAlsoA, CCard* pToIsAlsoA)
typedef CEventSource3<CCard*, CCard*, CCard*> CardIsAlsoAEventSource;

// OnSubjectTargeted(const CSubjectGroup& subjectGroup, CPlayer* byPlayer)
typedef CEventSource2<const CSubjectGroup&, CPlayer*> TargetSubjectEventSource;

// OnCardOrientationMoved(CCard* pCard, Orientation fromOrientation, Orientation toOrientation)
typedef CEventSource3<CCard*, Orientation, Orientation> CardOrientationEventSource;

// OnCreatureBlocked(CCreatureCard* pCreature)
typedef CEventSource1<CCreatureCard*> CreatureBlockedEventSource;

// OnCreatureBlocking(CCreatureCard* pCreature)
typedef CEventSource1<CCreatureCard*> CreatureBlockingEventSource;

// OnCreatureAttacked(CCreatureCard* pCreature)
typedef CEventSource1<CCreatureCard*> CreatureAttackEventSource;

// OnNodeChanged(CNode* pToNode)
typedef CEventSource1<CNode*> ChangeNodeEventSource;

// OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int new)
typedef CEventSource4<CCard*, LPCTSTR, int, int> CounterMovedEventSource;

// OnSpecialTrigger(CCard* pCard, int n_value)
typedef CEventSource2<CCard*, int> SpecialTriggerEventSource;

// OnCardCycled(CCard* pCard, CPlayer* byPlayer)
typedef CEventSource2<CCard*, CPlayer*> CardCycledEventSource;

// OnBlockedByCreature(CCreatureCard* pAttackingCreature, CCreatureCard* pBlockingCreature, int nTotalBlocking, int nBlockingIndex)
typedef CEventSource4<CCreatureCard*, CCreatureCard*, int, int> BlockedByCreatureEventSource;

// OnBlockedCreature(CCreatureCard* pBlockingCreature, CCreatureCard* pAttackingCreature, int nTotalBlocked, int nBlockedIndex)
typedef CEventSource4<CCreatureCard*, CCreatureCard*, int, int> BlockedCreatureEventSource;

// OnAttackedPlayer
class CPlaneswalkerCard;

struct AttackSubject
{
	AttackSubject()
		: pPlayer(NULL)
	{}

	AttackSubject(CPlayer* pPlayer_)
		: pPlayer(pPlayer_)
	{}

	AttackSubject(CPlaneswalkerCard* pPlaneswalker)
		: cpPlaneswalker(pPlaneswalker)
		, pPlayer(NULL)
	{}

	AttackSubject(CCreatureCard* pCreature);

	bool IsNull() const { return !pPlayer && !cpPlaneswalker.GetPointer(); }

	CPlayer* pPlayer;
	counted_ptr<CPlaneswalkerCard> cpPlaneswalker;
};

typedef CEventSource2<AttackSubject, CCreatureCard*> AttackedPlayerEventSource;