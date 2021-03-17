#pragma once

class CAbility;
class CSpell;

//____________________________________________________________________________
//
class CORE_EXPORT CCardModifier
{
public:
	virtual ~CCardModifier();

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;
	virtual CCardModifier* CloneCardModifier() const = 0;
	virtual bool Equals(const CCardModifier& modifier) const;

	void LinkCardModifier(const CCardModifier* pModifier);

protected:
	std::list<const CCardModifier*> m_LinkedCardModifiers;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardModifiers 
{
public:
	CCardModifiers()
	{}

	CCardModifiers(const CCardModifiers& rhs)
	{
		operator=(rhs);
	}

	~CCardModifiers()
	{
		Clear();
	}

	void Clear();

	void Add(CCardModifier* pModifier);
	void push_back(CCardModifier* pModifier) // provided for backward compatibility
	{
		Add(pModifier);
	}

	void Clone(CCardModifiers& modifiers) const;

	void ApplyTo(CCard* pCard) const;
	void RemoveFrom(CCard* pCard) const;

	bool Equals(const CCardModifiers& modifiers) const;

	CCardModifiers& operator=(const CCardModifiers& modifiers);

protected:
	std::list<CCardModifier*> m_Modifiers;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CCreatureModifier
{
	virtual ~CCreatureModifier();

	virtual void ApplyTo(CCreatureCard* pCreature) const;
	virtual void RemoveFrom(CCreatureCard* pCreature) const;
	virtual CCreatureModifier* CloneCreatureModifier() const = 0;
	virtual bool Equals(const CCreatureModifier& modifier) const;

	void LinkCardModifier(const CCardModifier* pModifier);
	void LinkCreatureModifier(const CCreatureModifier* pModifier);

protected:
	std::list<const CCardModifier*> m_LinkedCardModifiers;
	std::list<const CCreatureModifier*> m_LinkedCreatureModifiers;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureModifiers
{
public:
	CCreatureModifiers()
	{}

	CCreatureModifiers(const CCreatureModifiers& rhs)
	{
		operator=(rhs);
	}

	~CCreatureModifiers()
	{
		Clear();
	}

	void Clear();

	void Add(CCreatureModifier* pModifier);
	void push_back(CCreatureModifier* pModifier) // provided for backward compatibility
	{
		Add(pModifier);
	}

	void Clone(CCreatureModifiers& modifiers) const;

	void ApplyTo(CCreatureCard* pCreature) const;
	void RemoveFrom(CCreatureCard* pCreature) const;

	bool Equals(const CCreatureModifiers& modifiers) const;

	CCreatureModifiers& operator=(const CCreatureModifiers& modifiers);

protected:
	std::list<CCreatureModifier*> m_Modifiers;
};

//____________________________________________________________________________
//
struct CORE_EXPORT CPlayerModifier
{
	virtual ~CPlayerModifier();

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;
	virtual CPlayerModifier* ClonePlayerModifier() const = 0;
	virtual bool Equals(const CPlayerModifier& modifier) const;

	void LinkPlayerModifier(const CPlayerModifier* pModifier);

protected:
	std::list<const CPlayerModifier*> m_LinkedPlayerModifiers;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerModifiers
{
public:
	CPlayerModifiers()
	{}

	CPlayerModifiers(const CPlayerModifiers& rhs)
	{
		operator=(rhs);
	}

	~CPlayerModifiers()
	{
		Clear();
	}

	void Clear();

	void Add(CPlayerModifier* pModifier);
	void push_back(CPlayerModifier* pModifier) // provided for backward compatibility
	{
		Add(pModifier);
	}

	void Clone(CPlayerModifiers& modifiers) const;

	void ApplyTo(CPlayer* pPlayer) const;
	void RemoveFrom(CPlayer* pPlayer) const;

	bool Equals(const CPlayerModifiers& modifiers) const;

	CPlayerModifiers& operator=(const CPlayerModifiers& modifiers);

protected:
	std::list<CPlayerModifier*> m_Modifiers;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSubjectModifier
	: public CPlayerModifiers
	, public CCardModifiers
	, public CCreatureModifiers
{
};

//____________________________________________________________________________
//
template<class E, class B>
class CBitflagEventSourceModifier
{
public:
	CBitflagEventSourceModifier()
		: m_BitflagToAdd(B::Null)
		, m_BitflagToRemove(B::Null)
		, m_dwAdditionData(0)
		, m_dwRemovalData(0)
		, m_bOneTurnOnly(TRUE)
	{}

	/*
	CBitflagEventSourceModifier& operator=(const CBitflagEventSourceModifier& modifier)
	{
		if (&modifier == this)
			return *this;

		m_BitflagToAdd = modifier.m_BitflagToAdd;
		m_BitflagToRemove = modifier.m_BitflagToRemove;
		m_dwAdditionData = modifier.m_dwAdditionData;
		m_dwRemovalData = modifier.m_dwRemovalData;
		m_bOneTurnOnly = modifier.m_bOneTurnOnly;

		return *this;
	}
	*/

	bool IsNull() const							{ return !m_BitflagToAdd.Any() && !m_BitflagToRemove.Any(); }
	void RemoveAll()							{ m_BitflagToAdd = B::Null; m_BitflagToRemove = B::Null; }

	void SetToAdd(B bitflag)					{ m_BitflagToAdd = bitflag; }
	void SetToRemove(B bitflag)					{ m_BitflagToRemove = bitflag; }

	B GetToAdd() const							{ return m_BitflagToAdd; }
	B GetToRemove() const						{ return m_BitflagToRemove; }

	void SetOneTurnOnly(BOOL bOneTurnOnly)		{ m_bOneTurnOnly = bOneTurnOnly; } // common to both additions and removals; Default: TRUE
	BOOL GetOneTurnOnly() const					{ return m_bOneTurnOnly; }

	void SetAdditionData(DWORD dwAdditionData)	{ m_dwAdditionData = dwAdditionData; }
	void SetRemovalData(DWORD dwRemovalData)	{ m_dwRemovalData = dwRemovalData; }

	DWORD GetAdditionData() const				{ return m_dwAdditionData; }
	DWORD GetRemovalData() const				{ return m_dwRemovalData; }

	void ApplyTo(CTurnSupportBitflagEventSource<E, B>* pBitflag) const
	{
		if (m_BitflagToAdd.Any())
		{
			for (int i = 0; i < sizeof(B::Enum) * 8; ++i)
				if ((m_BitflagToAdd & (B::Enum)((B::ValueType)1 << i)).Any())
					pBitflag->AddEntry(
						CTurnSupportBitflagEventSource<E, B>::BitflagEntry(
						(B::Enum)((B::ValueType)1 << i), m_bOneTurnOnly, CTurnSupportBitflagEventSource<E, B>::EntryType::Addition, m_dwAdditionData));
		}

		if (m_BitflagToRemove.Any())
		{
			for (int i = 0; i < sizeof(B::Enum) * 8; ++i)
				if ((m_BitflagToRemove & (B::Enum)((B::ValueType)1 << i)).Any())
				{
				//	if (m_bOneTurnOnly)
						pBitflag->AddEntry(
							CTurnSupportBitflagEventSource<E, B>::BitflagEntry(
								(B::Enum)((B::ValueType)1 << i), m_bOneTurnOnly, CTurnSupportBitflagEventSource<E, B>::EntryType::Removal, m_dwRemovalData));
				/*	else
						pBitflag->RemoveEntry(
							CTurnSupportBitflagEventSource<E, B>::BitflagEntry(
								(B::Enum)((B::ValueType)1 << i), m_bOneTurnOnly, CTurnSupportBitflagEventSource<E, B>::EntryType::Addition, m_dwRemovalData));*/
				}
		}
	}

	void RemoveFrom(CTurnSupportBitflagEventSource<E, B>* pBitflag) const
	{
		ATLASSERT(!m_bOneTurnOnly);

		if (m_BitflagToAdd.Any())
		{
			for (int i = 0; i < sizeof(B::Enum) * 8; ++i)
				if ((m_BitflagToAdd & (B::Enum)((B::ValueType)1 << i)).Any())
					pBitflag->RemoveEntry(
						CTurnSupportBitflagEventSource<E, B>::BitflagEntry(
							(B::Enum)((B::ValueType)1 << i), m_bOneTurnOnly, CTurnSupportBitflagEventSource<E, B>::EntryType::Addition, m_dwAdditionData));
		}

		if (m_BitflagToRemove.Any())
		{
			for (int i = 0; i < sizeof(B::Enum) * 8; ++i)
				if ((m_BitflagToRemove & (B::Enum)(1 << i)).Any())
				{
		//			if (m_bOneTurnOnly)
						pBitflag->RemoveEntry(
							CTurnSupportBitflagEventSource<E, B>::BitflagEntry(
								(B::Enum)((B::ValueType)1 << i), m_bOneTurnOnly, CTurnSupportBitflagEventSource<E, B>::EntryType::Removal, m_dwRemovalData));
			/*		else
						pBitflag->AddEntry(
							CTurnSupportBitflagEventSource<E, B>::BitflagEntry(
								(B::Enum)((B::ValueType)1 << i), m_bOneTurnOnly, CTurnSupportBitflagEventSource<E, B>::EntryType::Addition, m_dwRemovalData));*/
				}
		}
	}

	bool operator==(const CBitflagEventSourceModifier& modifier) const
	{
		return m_BitflagToAdd == modifier.m_BitflagToAdd &&
			m_BitflagToRemove == modifier.m_BitflagToRemove &&
			m_bOneTurnOnly == modifier.m_bOneTurnOnly &&
			m_dwAdditionData == modifier.m_dwAdditionData &&
			m_dwRemovalData == modifier.m_dwRemovalData;
	}

protected:
	B		m_BitflagToAdd;
	B		m_BitflagToRemove;
	DWORD	m_dwAdditionData;
	DWORD	m_dwRemovalData;
	BOOL	m_bOneTurnOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardKeywordModifier 
	: public CCardModifier
{
public:
	CCardKeywordModifier(CardKeyword keyword, BOOL bAdd, BOOL bOneTurnOnly = TRUE);
	CCardKeywordModifier() {}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	CBitflagEventSourceModifier<CCardKeyword, CardKeyword>& GetModifier() { return m_Modifier; }
	const CBitflagEventSourceModifier<CCardKeyword, CardKeyword>& GetModifier() const { return m_Modifier; }

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardKeywordModifier* pModifier = new CCardKeywordModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardKeywordModifier* pThis = dynamic_cast<const CCardKeywordModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_Modifier == pThis->m_Modifier;
	}

protected:
	CBitflagEventSourceModifier<CCardKeyword, CardKeyword> m_Modifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CReplacementKeywordModifier 
	: public CCardModifier
{
public:
	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	CBitflagEventSourceModifier<CReplacementKeyword, ReplacementKeyword>& GetModifier() { return m_Modifier; }
	const CBitflagEventSourceModifier<CReplacementKeyword, ReplacementKeyword>& GetModifier() const { return m_Modifier; }

	virtual CCardModifier* CloneCardModifier() const
	{
		CReplacementKeywordModifier* pModifier = new CReplacementKeywordModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CReplacementKeywordModifier* pThis = dynamic_cast<const CReplacementKeywordModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_Modifier == pThis->m_Modifier;
	}

protected:
	CBitflagEventSourceModifier<CReplacementKeyword, ReplacementKeyword> m_Modifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureKeywordModifier 
	: public CCreatureModifier
{
public:
	CCreatureKeywordModifier(CreatureKeyword keyword, BOOL bAdd, BOOL bOneTurnOnly = TRUE);
	CCreatureKeywordModifier() {}

	virtual void ApplyTo(CCreatureCard* pCreature) const;
	virtual void RemoveFrom(CCreatureCard* pCreature) const;

	CBitflagEventSourceModifier<CCreatureKeyword, CreatureKeyword>& GetModifier() { return m_Modifier; }
	const CBitflagEventSourceModifier<CCreatureKeyword, CreatureKeyword>& GetModifier() const { return m_Modifier; }

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& modifier) const
	{
		const CCreatureKeywordModifier* pThis = dynamic_cast<const CCreatureKeywordModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_Modifier == pThis->m_Modifier;
	}

protected:
	CBitflagEventSourceModifier<CCreatureKeyword, CreatureKeyword> m_Modifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardFlagModifier 
	: public CCardModifier
{
public:
	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	CBitflagEventSourceModifier<CCardFlag, CardFlag>& GetModifier() { return m_Modifier; }
	const CBitflagEventSourceModifier<CCardFlag, CardFlag>& GetModifier() const { return m_Modifier; }

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardFlagModifier* pModifier = new CCardFlagModifier();
		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		pModifier->m_Modifier = m_Modifier;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardFlagModifier* pThis = dynamic_cast<const CCardFlagModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_Modifier == pThis->m_Modifier;
	}

protected:
	CBitflagEventSourceModifier<CCardFlag, CardFlag> m_Modifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureFlagModifier 
	: public CCreatureModifier
{
public:
	virtual void ApplyTo(CCreatureCard* pCreature) const;
	virtual void RemoveFrom(CCreatureCard* pCreature) const;

	CBitflagEventSourceModifier<CCreatureFlag, CreatureFlag>& GetModifier() { return m_Modifier; }
	const CBitflagEventSourceModifier<CCreatureFlag, CreatureFlag>& GetModifier() const { return m_Modifier; }

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CCreatureFlagModifier* pModifier = new CCreatureFlagModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& modifier) const
	{
		const CCreatureFlagModifier* pThis = dynamic_cast<const CCreatureFlagModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_Modifier == pThis->m_Modifier;
	}

protected:
	CBitflagEventSourceModifier<CCreatureFlag, CreatureFlag> m_Modifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CLifeModifier 
	: public CCreatureModifier
	, public CPlayerModifier
{
public:
	CLifeModifier(Life nLifeDelta = Life(0), // for creatures, support these special numbers: DivideBy2RoundUp, DivideBy2RoundDown and MultiplyBy2
				  const CCard* pSourceCard = NULL,
				  PreventableType preventable = PreventableType::Preventable,
				  DamageType damageType = DamageType::NonCombatDamage,
				  BOOL bOneTurnOnly = TRUE, BOOL bToBase = FALSE)	// Not applicable for players
		: m_nLifeDelta(nLifeDelta)
		, m_bOneTurnOnly(bOneTurnOnly)
		, m_bToBase(bToBase)
		, m_Preventable(preventable)
		, m_pSourceCard(pSourceCard)
		, m_DamageType(damageType)
		, m_bReplacement(FALSE)
	{
		if (m_Preventable == PreventableType::NotPreventable)
		{
			if ((m_DamageType & (DamageType::CombatDamage | DamageType::NonCombatDamage)).Any())
			{
				if (m_nLifeDelta < Life(0))
					ATLASSERT(false);
				m_DamageType = DamageType::NotDealingDamage;
			}
		}
	}

	CLifeModifier(const CLifeModifier& modifier)
	{
		operator=(modifier);
	}

	CLifeModifier& operator=(const CLifeModifier& modifier)
	{
		if (this == &modifier)
			return *this;

		m_LinkedCardModifiers = modifier.m_LinkedCardModifiers;
		m_LinkedCreatureModifiers = modifier.m_LinkedCreatureModifiers;
		m_LinkedPlayerModifiers == modifier.m_LinkedPlayerModifiers;

		m_nLifeDelta = modifier.m_nLifeDelta;
		m_bOneTurnOnly = modifier.m_bOneTurnOnly;
		m_bToBase = modifier.m_bToBase;
		m_Preventable = modifier.m_Preventable;
		m_pSourceCard = modifier.m_pSourceCard;
		m_DamageType = modifier.m_DamageType;
		m_bReplacement = modifier.m_bReplacement;

		return *this;
	}

	bool Equals(const CLifeModifier& modifier) const
	{
		if (&modifier == this)
			return true;		

		return
			CCreatureModifier::Equals(modifier) &&
			CPlayerModifier::Equals(modifier) &&
			m_nLifeDelta == modifier.m_nLifeDelta &&
			m_bOneTurnOnly == modifier.m_bOneTurnOnly &&
			m_bToBase == modifier.m_bToBase &&
			m_Preventable == modifier.m_Preventable &&
			m_pSourceCard == modifier.m_pSourceCard &&
			m_DamageType == modifier.m_DamageType &&
			m_bReplacement == modifier.m_bReplacement;
	}

	virtual bool Equals(const CCreatureModifier& modifier) const
	{
		const CLifeModifier* pThis = dynamic_cast<const CLifeModifier*>(&modifier);
		if (!pThis)
			return false;

		return Equals(*pThis);
	}

	virtual bool Equals(const CPlayerModifier& modifier) const
	{
		const CLifeModifier* pThis = dynamic_cast<const CLifeModifier*>(&modifier);
		if (!pThis)
			return false;

		return Equals(*pThis);
	}

	BOOL GetOneTurnOnly() const { return m_bOneTurnOnly; }
	void SetOneTurnOnly(BOOL bOneTurnOnly) { m_bOneTurnOnly = bOneTurnOnly; }

	BOOL GetToBase() const { return m_bToBase; }
	void SetToBase(BOOL bToBase) { m_bToBase = bToBase; }

	Life GetLifeDelta() const { return m_nLifeDelta; }
	void SetLifeDelta(Life nLifeDelta) { m_nLifeDelta = nLifeDelta; }

	PreventableType GetPreventable() const { return m_Preventable; }
	void SetPreventable(PreventableType preventable) 
	{ 
		m_Preventable = preventable; 
		if (m_Preventable == PreventableType::NotPreventable)
		{
			if ((m_DamageType & (DamageType::CombatDamage | DamageType::NonCombatDamage)).Any())
			{
				if (m_nLifeDelta < Life(0))
					ATLASSERT(false);
				m_DamageType = DamageType::NotDealingDamage;
			}
		}
	}

	const CCard* GetSourceCard() const { return m_pSourceCard; }
	void SetSourceCard(const CCard* pSourceCard) { m_pSourceCard = pSourceCard; }

	DamageType GetDamageType() const { return m_DamageType; }
	void SetDamageType(DamageType damageType) { m_DamageType = damageType; }

	void SetReplacement(BOOL bReplace) { m_bReplacement = bReplace; } // Default: FALSE
	BOOL GetReplacement() const { return m_bReplacement; }

	Life GetEffectiveLifeDelta(const CCreatureCard* pCard) const;
	Life GetEffectiveLifeDelta(const CPlayer* pPlayer) const;

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;

	virtual void ApplyTo(CCreatureCard* pCard) const;
	virtual void RemoveFrom(CCreatureCard* pCard) const;

	virtual void ApplyTo(CPlaneswalkerCard* pPlaneswalker) const;
	virtual void RemoveFrom(CPlaneswalkerCard* pPlaneswalker) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CLifeModifier* pModifier = new CLifeModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CLifeModifier* pModifier = new CLifeModifier();
		*pModifier = *this;
		return pModifier;
	}

protected:
	Life			m_nLifeDelta;
	BOOL			m_bOneTurnOnly;
	BOOL			m_bToBase;
	PreventableType	m_Preventable;
	const CCard*	m_pSourceCard;
	DamageType		m_DamageType;
	BOOL			m_bReplacement;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPowerModifier 
	: public CCreatureModifier
{
public:
	CPowerModifier(Power nPowerDelta = Power(0),  // support for some SpecialNumber in some cases
				   BOOL bOneTurnOnly = TRUE, BOOL bToBase = FALSE)
		: m_nPowerDelta(nPowerDelta)
		, m_bOneTurnOnly(bOneTurnOnly)
		, m_bToBase(bToBase)
		, m_bReplacement(FALSE)
	{}

	CPowerModifier(const CPowerModifier& modifier)
	{
		operator=(modifier);
	}

	/*
	CPowerModifier& operator=(const CPowerModifier& modifier)
	{
		if (this == &modifier)
			return *this;

		*this = modifier;

		return *this;
	}
	*/

	virtual bool Equals(const CCreatureModifier& modifier) const
	{
		const CPowerModifier* pThis = dynamic_cast<const CPowerModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_nPowerDelta == pThis->m_nPowerDelta &&
			m_bOneTurnOnly == pThis->m_bOneTurnOnly &&
			m_bToBase == pThis->m_bToBase &&
			m_bReplacement == pThis->m_bReplacement;
	}

	Power GetPowerDelta() const { return m_nPowerDelta; }
	void SetPowerDelta(Power nPowerDelta) { m_nPowerDelta = nPowerDelta; }

	BOOL GetOneTurnOnly() const { return m_bOneTurnOnly; }
	void SetOneTurnOnly(BOOL bOneTurnOnly) { m_bOneTurnOnly = bOneTurnOnly; }

	BOOL GetToBase() const { return m_bToBase; }
	void SetToBase(BOOL bToBase) { m_bToBase = bToBase; }

	void SetReplacement(BOOL bReplace) { m_bReplacement = bReplace; } // Default: FALSE
	BOOL GetReplacement() const { return m_bReplacement; }

	Power GetEffectivePowerDelta(const CCreatureCard* pCard) const;

	virtual void ApplyTo(CCreatureCard* pCard) const;
	virtual void RemoveFrom(CCreatureCard* pCard) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CPowerModifier* pModifier = new CPowerModifier();
		*pModifier = *this;
		return pModifier;
	}

protected:
	Power	m_nPowerDelta;
	BOOL	m_bOneTurnOnly;
	BOOL	m_bToBase;
	BOOL	m_bReplacement;
};

//____________________________________________________________________________
//
CString GetCreatureGainString(const CCreatureCard* pCreature, 
							  const CPowerModifier* pPowerModifier, 
							  const CLifeModifier* pLifeModifier,
							  const CCreatureKeywordModifier* pCreatureKeywordModifier = NULL,
							  const CCardKeywordModifier* pCardKeywordModifier = NULL);

//____________________________________________________________________________
//
class CORE_EXPORT CCardAbilityModifier 
	: public CCardModifier
{
public:
	typedef FastDelegate< counted_ptr<CAbility> ( CCard* ) > CreateAbilityCallback;
	typedef FastDelegate< void ( CAbility* ) > PostAdditionCallback;

	CCardAbilityModifier()
	{}
	
	CCardAbilityModifier(CreateAbilityCallback createAbilityCallback,
		PostAdditionCallback postAdditionCallback = PostAdditionCallback());

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const; // Remove only the last added ability to the card!

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardAbilityModifier* pModifier = new CCardAbilityModifier();

		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		pModifier->m_CreateAbilityCallback = m_CreateAbilityCallback;
		pModifier->m_PostAdditionCallback = m_PostAdditionCallback;

		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardAbilityModifier* pThis = dynamic_cast<const CCardAbilityModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_CreateAbilityCallback == pThis->m_CreateAbilityCallback &&
			m_PostAdditionCallback == pThis->m_PostAdditionCallback;
	}

protected:
	CreateAbilityCallback	m_CreateAbilityCallback;
	PostAdditionCallback	m_PostAdditionCallback;
	
	mutable CPtrContainer_<CAbility> m_AddedAbilities;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardSpellModifier 
	: public CCardModifier
{
public:
	typedef FastDelegate< counted_ptr<CSpell> ( CCard* ) > CreateSpellCallback;
	typedef FastDelegate< void ( CSpell* ) > PostAdditionCallback;

	CCardSpellModifier()
	{}
	
	CCardSpellModifier(CreateSpellCallback createSpellCallback,
		PostAdditionCallback postAdditionCallback = PostAdditionCallback());

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const; // Remove only the last added ability to the card!

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardSpellModifier* pModifier = new CCardSpellModifier();

		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		pModifier->m_CreateSpellCallback = m_CreateSpellCallback;
		pModifier->m_PostAdditionCallback = m_PostAdditionCallback;

		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardSpellModifier* pThis = dynamic_cast<const CCardSpellModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_CreateSpellCallback == pThis->m_CreateSpellCallback &&
			m_PostAdditionCallback == pThis->m_PostAdditionCallback;
	}

protected:
	CreateSpellCallback	m_CreateSpellCallback;
	PostAdditionCallback	m_PostAdditionCallback;
	
	mutable CPtrContainer_<CSpell> m_AddedAbilities;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardOrientationModifier 
	: public CCardModifier
{
public:
	CCardOrientationModifier(BOOL bToTap = TRUE)
		: m_bToTap(bToTap)
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardOrientationModifier* pModifier = new CCardOrientationModifier(m_bToTap);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardOrientationModifier* pThis = dynamic_cast<const CCardOrientationModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_bToTap == pThis->m_bToTap;
	}

protected:
	BOOL m_bToTap;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardFlipModifier 
	: public CCardModifier
{
public:
	CCardFlipModifier()
	{}

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardFlipModifier* pModifier = new CCardFlipModifier();
		*pModifier = *this;
		return pModifier;
	}
};

//____________________________________________________________________________
//
class CORE_EXPORT CFaceTransformModifier 
	: public CCardModifier
{
public:
	virtual void ApplyTo(CCard* pCard) const;

	virtual CFaceTransformModifier* CloneCardModifier() const
	{
		CFaceTransformModifier* pModifier = new CFaceTransformModifier;
		*pModifier = *this;
		return pModifier;
	}
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardMorphModifier 
	: public CCardModifier
{
public:
	CCardMorphModifier(BOOL bToMorph = TRUE)
		: m_bToMorph(bToMorph)
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardMorphModifier* pModifier = new CCardMorphModifier(m_bToMorph);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardMorphModifier* pThis = dynamic_cast<const CCardMorphModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_bToMorph == pThis->m_bToMorph;
	}

protected:
	BOOL m_bToMorph;
};

//____________________________________________________________________________
//
class CORE_EXPORT CMoveCardModifier 
	: public CCardModifier
{
public:
	CMoveCardModifier(ZoneId fromZoneId,			// use ZoneId::_AllZones for any zones
					  ZoneId toZoneId,
					  BOOL bToOwnersZone,
					  MoveType moveType = MoveType::Others,
					  CPlayer* pByPlayer = NULL)
		: m_FromZoneId(fromZoneId)
		, m_ToZoneId(toZoneId)
		, m_bToOwnersZone(bToOwnersZone)
		, m_pByPlayer(pByPlayer)
		, m_bToTop(TRUE)
		, m_pToPlayer(NULL)
		, m_bTapped(FALSE)
		, m_MoveType(moveType)
		, m_bShuffle(FALSE) // only usable when toZoneId is Library
	{}

	CMoveCardModifier()
		: m_FromZoneId(ZoneId::Null)
		, m_ToZoneId(ZoneId::Null)
		, m_bToOwnersZone(TRUE)
		, m_pByPlayer(NULL)
		, m_bToTop(TRUE)
		, m_pToPlayer(NULL)
		, m_bTapped(FALSE)
		, m_MoveType(MoveType::Others)
		, m_bShuffle(FALSE) // only usable when toZoneId is Library
	{}

	void SetFromZone(ZoneId fromZoneId) { m_FromZoneId = fromZoneId; }
	ZoneId GetFromZone() const { return m_FromZoneId; }

	void SetToZone(ZoneId toZoneId) { m_ToZoneId = toZoneId; }
	ZoneId GetToZoneId() const { return m_ToZoneId; }
	CZone* GetToZone(CCard* pCard) const;

	void SetToOwnersZone(BOOL bToOwners) { m_bToOwnersZone = bToOwners; }
	BOOL GetToOwnersZone() const { return m_bToOwnersZone; }

	// if NULL, default to the card's current controller
	void SetByPlayer(CPlayer* pPlayer) { m_pByPlayer = pPlayer; }
	CPlayer* GetByPlayer() const { return m_pByPlayer; }

	void SetToTop(BOOL bToTop) { m_bToTop= bToTop; }
	BOOL GetToTop() const { return m_bToTop; }

	// To this card's controller's zone if NULL and bToOwnersZone is FALSE
	void SetToPlayer(CPlayer* pToPlayer) { m_pToPlayer = pToPlayer; }
	CPlayer* GetToPlayer() const { return m_pToPlayer; }

	void SetTapped(BOOL bTapped) { m_bTapped = bTapped; }
	BOOL GetTapped() const { return m_bTapped; }

	void SetMoveType(MoveType moveType) { m_MoveType = moveType; }
	MoveType GetMoveType() const { return m_MoveType; }

	void SetShuffle(BOOL bShuffle) { m_bShuffle = bShuffle; }
	BOOL GetShuffle() const { return m_bShuffle; }

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CMoveCardModifier* pModifier = new CMoveCardModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CMoveCardModifier* pThis = dynamic_cast<const CMoveCardModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&
			m_FromZoneId == pThis->m_FromZoneId &&
			m_ToZoneId == pThis->m_ToZoneId &&
			m_bToOwnersZone == pThis->m_bToOwnersZone &&
			m_pByPlayer == pThis->m_pByPlayer &&
			m_bToTop == pThis->m_bToTop &&
			m_pToPlayer == pThis->m_pToPlayer &&
			m_bTapped == pThis->m_bTapped &&
			m_MoveType == pThis->m_MoveType &&
			m_bShuffle == pThis->m_bShuffle;
	}

protected:
	ZoneId m_FromZoneId;
	ZoneId m_ToZoneId;
	BOOL m_bToOwnersZone;
	CPlayer* m_pByPlayer;
	BOOL m_bToTop;
	CPlayer* m_pToPlayer;
	BOOL m_bTapped;
	MoveType m_MoveType;
	BOOL m_bShuffle;
};

//____________________________________________________________________________
//
class CORE_EXPORT CScheduledCardModifier
	: public CCardModifier
{
public:
	struct Operation
	{
		enum Enum
		{
			ApplyToNowRemoveLater,
			ApplyToLater,
			RemoveFromLater, 
		};

		DEFINE_DISTINCT_ENUM_OPS(Operation)
	};

	struct DeltaOption
	{
		enum Enum
		{
			GameTurn,			// count from game's turn number
			ActivePlayerTurn,	// count from active player's turn number
			PriorityPlayerTurn,	// count from priority player's turn number
			CustomPlayerTurn	// count from pThisPlayersTurn player's turn number
		};

		DEFINE_DISTINCT_ENUM_OPS(DeltaOption)
	};

	CScheduledCardModifier(CGame* pGame,
					  CCardModifier* pModifier,
					  TurnNumberDelta nTurnNumberDelta,
					  NodeId nodeId,
					  bool bInplayOnly = true,
					  Operation operation = Operation::ApplyToNowRemoveLater,
					  DeltaOption deltaOption = DeltaOption::GameTurn,
					  CPlayer* pThisPlayersTurn = NULL)
		: m_pGame(pGame)
		, m_apModifier(pModifier)
		, m_nTurnNumberDelta(nTurnNumberDelta)
		, m_NodeId(nodeId)
		, m_bInplayOnly(bInplayOnly)
		, m_Operation(operation)
		, m_DeltaOption(deltaOption)
		, m_pThisPlayersTurn(pThisPlayersTurn)
	{}

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CScheduledCardModifier* pModifier = new CScheduledCardModifier(m_pGame, m_apModifier->CloneCardModifier(), m_nTurnNumberDelta, m_NodeId, m_bInplayOnly, m_Operation, m_DeltaOption, m_pThisPlayersTurn);
		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CScheduledCardModifier* pThis = dynamic_cast<const CScheduledCardModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		if (!m_apModifier.get() || !pThis->m_apModifier.get())
			return false;

		return
			__super::Equals(rhs) &&
			m_pGame == pThis->m_pGame &&
			m_apModifier->Equals(*(pThis->m_apModifier.get())) &&
			m_nTurnNumberDelta == pThis->m_nTurnNumberDelta &&
			m_NodeId == pThis->m_NodeId &&
			m_bInplayOnly == pThis->m_bInplayOnly &&
			m_Operation == pThis->m_Operation &&
			m_DeltaOption == pThis->m_DeltaOption &&
			m_pThisPlayersTurn == pThis->m_pThisPlayersTurn;
	}

protected:
	CGame* m_pGame;
	std::auto_ptr<CCardModifier> m_apModifier;
	TurnNumberDelta m_nTurnNumberDelta;
	NodeId m_NodeId;
	bool m_bInplayOnly;
	Operation m_Operation;
	DeltaOption m_DeltaOption;
	CPlayer* m_pThisPlayersTurn;
};

//____________________________________________________________________________
//
class CORE_EXPORT CScheduledCreatureModifier
	: public CCreatureModifier
{
public:
	struct Operation
	{
		enum Enum
		{
			ApplyToNowRemoveLater,
			ApplyToLater,
			RemoveFromLater, 
		};

		DEFINE_DISTINCT_ENUM_OPS(Operation)
	};

	struct DeltaOption
	{
		enum Enum
		{
			GameTurn,			// count from game's turn number
			ActivePlayerTurn,	// count from active player's turn number
			PriorityPlayerTurn,	// count from priority player's turn number
			CustomPlayerTurn	// count from pThisPlayersTurn player's turn number
		};

		DEFINE_DISTINCT_ENUM_OPS(DeltaOption)
	};

	CScheduledCreatureModifier(CGame* pGame,
					  CCreatureModifier* pModifier,
					  TurnNumberDelta nTurnNumberDelta,
					  NodeId nodeId,
					  bool bInplayOnly = true,
					  Operation operation = Operation::ApplyToNowRemoveLater,
					  DeltaOption deltaOption = DeltaOption::GameTurn,
					  CPlayer* pThisPlayersTurn = NULL)
		: m_pGame(pGame)
		, m_apModifier(pModifier)
		, m_nTurnNumberDelta(nTurnNumberDelta)
		, m_NodeId(nodeId)
		, m_bInplayOnly(bInplayOnly)
		, m_Operation(operation)
		, m_DeltaOption(deltaOption)
		, m_pThisPlayersTurn(pThisPlayersTurn)
	{}

	virtual void ApplyTo(CCreatureCard* pCreature) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CScheduledCreatureModifier* pModifier = new CScheduledCreatureModifier(m_pGame, m_apModifier->CloneCreatureModifier(), m_nTurnNumberDelta, m_NodeId, m_bInplayOnly, m_Operation, m_DeltaOption, m_pThisPlayersTurn);

		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		pModifier->m_LinkedCreatureModifiers = m_LinkedCreatureModifiers;

		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CScheduledCreatureModifier* pThis = dynamic_cast<const CScheduledCreatureModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		if (!m_apModifier.get() || !pThis->m_apModifier.get())
			return false;

		return
			__super::Equals(rhs) &&
			m_pGame == pThis->m_pGame &&
			m_apModifier->Equals(*(pThis->m_apModifier.get())) &&
			m_nTurnNumberDelta == pThis->m_nTurnNumberDelta &&
			m_NodeId == pThis->m_NodeId &&
			m_bInplayOnly == pThis->m_bInplayOnly &&
			m_Operation == pThis->m_Operation &&
			m_DeltaOption == pThis->m_DeltaOption &&
			m_pThisPlayersTurn == pThis->m_pThisPlayersTurn;
	}

protected:
	CGame* m_pGame;
	std::auto_ptr<CCreatureModifier> m_apModifier;
	TurnNumberDelta m_nTurnNumberDelta;
	NodeId m_NodeId;
	bool m_bInplayOnly;
	Operation m_Operation;
	DeltaOption m_DeltaOption;
	CPlayer* m_pThisPlayersTurn;
};

//____________________________________________________________________________
//
class CORE_EXPORT CScheduledPlayerModifier
	: public CPlayerModifier
{
public:
	struct Operation
	{
		enum Enum
		{
			ApplyToNowRemoveLater,
			ApplyToLater,
			RemoveFromLater, 
		};

		DEFINE_DISTINCT_ENUM_OPS(Operation)
	};

	struct DeltaOption
	{
		enum Enum
		{
			GameTurn,			// count from game's turn number
			ActivePlayerTurn,	// count from active player's turn number
			PriorityPlayerTurn,	// count from priority player's turn number
			CustomPlayerTurn	// count from pThisPlayersTurn player's turn number
		};

		DEFINE_DISTINCT_ENUM_OPS(DeltaOption)
	};

	CScheduledPlayerModifier(CGame* pGame,
					  CPlayerModifier* pModifier,
					  TurnNumberDelta nTurnNumberDelta,
					  NodeId nodeId,
					  Operation operation = Operation::ApplyToNowRemoveLater,
					  DeltaOption deltaOption = DeltaOption::GameTurn,
					  CPlayer* pThisPlayersTurn = NULL)
		: m_pGame(pGame)
		, m_apModifier(pModifier)
		, m_nTurnNumberDelta(nTurnNumberDelta)
		, m_NodeId(nodeId)
		, m_Operation(operation)
		, m_DeltaOption(deltaOption)
		, m_pThisPlayersTurn(pThisPlayersTurn)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CScheduledPlayerModifier* pModifier = new CScheduledPlayerModifier(m_pGame, m_apModifier->ClonePlayerModifier(), m_nTurnNumberDelta, m_NodeId, m_Operation, m_DeltaOption, m_pThisPlayersTurn);

		pModifier->m_LinkedPlayerModifiers = m_LinkedPlayerModifiers;

		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CScheduledPlayerModifier* pThis = dynamic_cast<const CScheduledPlayerModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		if (!m_apModifier.get() || !pThis->m_apModifier.get())
			return false;

		return
			__super::Equals(rhs) &&
			m_pGame == pThis->m_pGame &&
			m_apModifier->Equals(*(pThis->m_apModifier.get())) &&
			m_nTurnNumberDelta == pThis->m_nTurnNumberDelta &&
			m_NodeId == pThis->m_NodeId &&
			m_Operation == pThis->m_Operation &&
			m_DeltaOption == pThis->m_DeltaOption &&
			m_pThisPlayersTurn == pThis->m_pThisPlayersTurn;
	}

protected:
	CGame* m_pGame;
	std::auto_ptr<CPlayerModifier> m_apModifier;
	TurnNumberDelta m_nTurnNumberDelta;
	NodeId m_NodeId;
	Operation m_Operation;
	DeltaOption m_DeltaOption;
	CPlayer* m_pThisPlayersTurn;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardIsAlsoAModifier 
	: public CCardModifier
{
public:
	CCardIsAlsoAModifier(LPCTSTR strToken, UINT uID, CPlayer* pByPlayer)
		: m_nUniqueId(-1)
		, m_strToken(strToken)
		, m_uID(uID)
		, m_pByPlayer(pByPlayer)
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardIsAlsoAModifier* pModifier = new CCardIsAlsoAModifier(m_strToken, m_uID, m_pByPlayer);
		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		pModifier->m_nUniqueId = m_nUniqueId;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCardIsAlsoAModifier* pThis = dynamic_cast<const CCardIsAlsoAModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_strToken == pThis->m_strToken &&
			m_uID == pThis->m_uID &&
			m_pByPlayer == pThis->m_pByPlayer;
	}

protected:
	CString m_strToken;
	UINT m_uID;
	CPlayer* m_pByPlayer;
	mutable int m_nUniqueId;
};

//____________________________________________________________________________
//
class CORE_EXPORT CManaPoolModifier 
	: public CPlayerModifier
{
public:
	struct Operation
	{
		enum Enum
		{
			Empty = 0,
			Add,
			Remove 
		};

		DEFINE_DISTINCT_ENUM_OPS(Operation)
	};

	CManaPoolModifier(Operation operation, const CManaPool& pool = CManaPool())
		: m_Operation(operation)
		, m_Pool(pool)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CManaPoolModifier* pModifier = new CManaPoolModifier(m_Operation, m_Pool);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CManaPoolModifier* pThis = dynamic_cast<const CManaPoolModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_Operation == pThis->m_Operation &&
			m_Pool == pThis->m_Pool;
	}

protected:
	Operation	m_Operation;
	CManaPool	m_Pool;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerEffectModifier 
	: public CPlayerModifier
{
public:
	CPlayerEffectModifier(PlayerEffectType playerEffect,
						  int nParam = 0,
						  BOOL bAdd = TRUE)
		: m_PlayerEffect(playerEffect)
		, m_nParam(nParam)
		, m_bAdd(bAdd)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CPlayerEffectModifier * pModifier = new CPlayerEffectModifier (m_PlayerEffect, m_nParam, m_bAdd);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CPlayerEffectModifier* pThis = dynamic_cast<const CPlayerEffectModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_PlayerEffect == pThis->m_PlayerEffect &&
			m_bAdd == pThis->m_bAdd;
	}

protected:
	PlayerEffectType	m_PlayerEffect;

	int		m_nParam;
	BOOL	m_bAdd;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerLostModifier 
	: public CPlayerModifier
{
public:
	CPlayerLostModifier()
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CPlayerLostModifier* pModifier = new CPlayerLostModifier;
		*pModifier = *this;
		return pModifier;
	}
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerSearchModifier 
	: public CPlayerModifier
{
public:
	CPlayerSearchModifier(CPlayer* pPlayer,						// Search this player's zone
								   MinimumValue nMinSearchCount,
								   MaximumValue nMaxSearchCount,
								   CPlayer* pByPlayer,						// To this player's zone
								   ZoneId fromZoneId = ZoneId::Library,		// Can be combinations of library and graveyard
								   const CCardFilter* pCardFilter = NULL,	// NULL -> any card
								   ZoneId toZoneId = ZoneId::Hand,
								   BOOL bToOwnersZone = FALSE,
								   CardPlacement discardToPlacement = CardPlacement::Top,	// If TopOrBottom, no action will be performed but the selected cards will be put in pSelectedCards
								   BOOL bTapped = FALSE,
								   BOOL bRevealCardsToOthers = TRUE,
								   BOOL bRemoveRemainingCardsFromGame = FALSE,
								   CCountedCardContainer* pSelectedCards = NULL,
								   BOOL pShuffle = TRUE)
								   :m_pPlayer(pPlayer)
								   ,m_nMinSearchCount(nMinSearchCount)
								   ,m_nMaxSearchCount(nMaxSearchCount)
								   ,m_pByPlayer(pByPlayer)
								   ,m_fromZoneId(fromZoneId)
								   ,m_pCardFilter(pCardFilter)
								   ,m_toZoneId(toZoneId)
								   ,m_bToOwnersZone(bToOwnersZone)
								   ,m_discardToPlacement(discardToPlacement)
								   ,m_bTapped(bTapped)
								   ,m_bRevealCardsToOthers(bRevealCardsToOthers)
								   ,m_bRemoveRemainingCardsFromGame(bRemoveRemainingCardsFromGame)
								   ,m_pSelectedCards(pSelectedCards)
								   ,m_pShuffle(pShuffle)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CPlayerSearchModifier* pModifier = new CPlayerSearchModifier(m_pPlayer, m_nMinSearchCount, m_nMaxSearchCount, m_pByPlayer, m_fromZoneId, m_pCardFilter, m_toZoneId, m_bToOwnersZone, m_discardToPlacement,
																	m_bTapped, m_bRevealCardsToOthers, m_bRemoveRemainingCardsFromGame, m_pSelectedCards,m_pShuffle);
		pModifier->m_pPlayer = m_pPlayer;
		pModifier->m_nMinSearchCount = m_nMinSearchCount;
		pModifier->m_nMaxSearchCount = m_nMaxSearchCount;
		pModifier->m_pByPlayer = m_pByPlayer;
		pModifier->m_fromZoneId = m_fromZoneId;
		pModifier->m_pCardFilter = m_pCardFilter;
		pModifier->m_toZoneId = m_toZoneId;
		pModifier->m_bToOwnersZone = m_bToOwnersZone;
		pModifier->m_discardToPlacement = m_discardToPlacement;
		pModifier->m_bTapped = m_bTapped;
		pModifier->m_bRevealCardsToOthers = m_bRevealCardsToOthers;
		pModifier->m_bRemoveRemainingCardsFromGame = m_bRemoveRemainingCardsFromGame;
		pModifier->m_pSelectedCards = m_pSelectedCards;
		pModifier->m_pShuffle = m_pShuffle;
		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CPlayerSearchModifier* pThis = dynamic_cast<const CPlayerSearchModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_pPlayer == pThis->m_pPlayer &&
			m_nMinSearchCount == pThis->m_nMinSearchCount &&
			m_nMaxSearchCount == pThis->m_nMaxSearchCount &&
			m_nMaxSearchCount == pThis->m_nMaxSearchCount &&
			m_pByPlayer == pThis->m_pByPlayer &&
			m_fromZoneId == pThis->m_fromZoneId &&
			m_pCardFilter == pThis->m_pCardFilter &&
			m_toZoneId == pThis->m_toZoneId &&
			m_bToOwnersZone == pThis->m_bToOwnersZone &&
			m_discardToPlacement == pThis->m_discardToPlacement &&
			m_bTapped == pThis->m_bTapped &&
			m_bRevealCardsToOthers == pThis->m_bRevealCardsToOthers &&
			m_bRemoveRemainingCardsFromGame == pThis->m_bRemoveRemainingCardsFromGame &&
			m_pSelectedCards == pThis->m_pSelectedCards &&
			m_pShuffle == pThis->m_pShuffle;
	}

protected:

	CPlayer* m_pPlayer;
	MinimumValue m_nMinSearchCount;
	MaximumValue m_nMaxSearchCount;
	CPlayer*  m_pByPlayer;
	ZoneId m_fromZoneId;
	const CCardFilter* m_pCardFilter;
	ZoneId m_toZoneId;
	BOOL m_bToOwnersZone;
	CardPlacement m_discardToPlacement;
	BOOL m_bTapped;
	BOOL m_bRevealCardsToOthers;
	BOOL m_bRemoveRemainingCardsFromGame;
	CCountedCardContainer* m_pSelectedCards;
	BOOL m_pShuffle;

};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerUntapCardTypeModifier 
	: public CPlayerModifier
{
public:
	enum TaskType
	{
		ResetUntapCardType,
		ResetCantUntapCardType
	};

	CPlayerUntapCardTypeModifier(CardType cardType, CardType cardTypeMask, TaskType taskType)
		: m_CardType(cardType)
		, m_CardTypeMask(cardTypeMask)
		, m_nUniqueId(-1)
		, m_TaskType(taskType)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CPlayerUntapCardTypeModifier* pModifier = new CPlayerUntapCardTypeModifier(m_CardType, m_CardTypeMask, m_TaskType);
		pModifier->m_nUniqueId = m_nUniqueId;
		pModifier->m_LinkedPlayerModifiers == m_LinkedPlayerModifiers;
		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CPlayerUntapCardTypeModifier* pThis = dynamic_cast<const CPlayerUntapCardTypeModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_CardType == pThis->m_CardType &&
			m_CardTypeMask == pThis->m_CardTypeMask &&
			m_TaskType == pThis->m_TaskType;
	}

protected:
	CardType m_CardType;
	CardType m_CardTypeMask;
	mutable int m_nUniqueId;
	TaskType m_TaskType;
};

//____________________________________________________________________________
//
class CORE_EXPORT CZoneCardModifier 
	: public CPlayerModifier
{
public:
	CZoneCardModifier(ZoneId zoneId, const CCardFilter* pCardFilter,
				  std::auto_ptr<CCardModifier>& apModifier,
				  bool bApplyTo = true)
		: m_ZoneId(zoneId)
		, m_pCardFilter(pCardFilter)
		, m_apModifier(apModifier)
		, m_bApplyTo(bApplyTo)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(m_ZoneId, m_pCardFilter,
			std::auto_ptr<CCardModifier>(m_apModifier->CloneCardModifier()), m_bApplyTo);
		pModifier->m_LinkedPlayerModifiers = m_LinkedPlayerModifiers;
		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CZoneCardModifier* pThis = dynamic_cast<const CZoneCardModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		if (!m_apModifier.get() || !pThis->m_apModifier.get())
			return false;

		return
			__super::Equals(rhs) &&
			m_apModifier->Equals(*(pThis->m_apModifier.get())) &&
			m_bApplyTo == pThis->m_bApplyTo &&
			m_ZoneId == pThis->m_ZoneId &&
			m_pCardFilter != pThis->m_pCardFilter;
	}

protected:
	std::auto_ptr<CCardModifier> m_apModifier;
	bool m_bApplyTo;
	ZoneId m_ZoneId;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CZoneModifier
	: public CPlayerModifier
{
public:
	struct RoleType
	{
		enum Enum
		{
			None,
			PrimaryPlayer,		// applied to player
			SecondaryPlayer,	// pre-set player
			RandomSelector,
			AllPlayers
		};

		DEFINE_DISTINCT_ENUM_OPS(RoleType)
	};

	struct SelectionSetting
	{
		MaximumValue nMaxSelectionCount;
		MinimumValue nMinSelectionCount;
		RoleType selectPlayer;
		RoleType revealTo;
		const CCardFilter* pSelectionCardFilter;
		ZoneId selectToZone;
		RoleType selectToZoneOwner;
		CardPlacement selectPlacement;
		MoveType moveType;
		RoleType orderPlayer;
		bool bSelectFromPreviousSelection;

		bool operator==(const SelectionSetting& rhs) const
		{
			return nMaxSelectionCount == rhs.nMaxSelectionCount &&
				nMinSelectionCount == rhs.nMinSelectionCount &&
				selectPlayer == rhs.selectPlayer &&
				revealTo == rhs.revealTo &&
				pSelectionCardFilter == rhs.pSelectionCardFilter &&
				selectToZone == rhs.selectToZone &&
				selectToZoneOwner == rhs.selectToZoneOwner &&
				selectPlacement == rhs.selectPlacement &&
				moveType == rhs.moveType &&
				orderPlayer == rhs.orderPlayer &&
				bSelectFromPreviousSelection == rhs.bSelectFromPreviousSelection;
		}
	};

	// From -> Reveal -> Select -> Select ... -> Reorder

	CZoneModifier(CGame* pGame,
				   ZoneId fromZone,
				   int nCount,												// supports SpecialNumber
				   RoleType fromZoneOwner = RoleType::PrimaryPlayer,		// allowed: PrimaryPlayer, SecondaryPlayer
				   CardPlacement fromZoneLocation = CardPlacement::Top,
				   RoleType revealTo = RoleType::PrimaryPlayer,             // allowed: PrimaryPlayer, SecondaryPlayer, AllPlayers, None
				   CCountedCardContainer* pSelectedCards = NULL)		    // Only working with AddSelection
		: m_pGame(pGame)
		, m_nCount(nCount)
		, m_FromZone(fromZone)
		, m_FromZoneOwner(fromZoneOwner)
		, m_FromZoneLocation(fromZoneLocation)
		, m_RevealTo(revealTo)
		, m_pSecondaryPlayer(NULL)
		, m_bReorder(false)
		, m_bOptimizeReveals(true)
		, m_pSelectedCards(pSelectedCards)
	{}

	void SetFromZone(ZoneId zoneId) { m_FromZone = zoneId; }
	void SetCount(int nCount) { m_nCount = nCount; }
	void SetFromZoneOwner(RoleType fromZoneOwner) { m_FromZoneOwner = fromZoneOwner; }
	void SetFromZoneLocation(CardPlacement fromZoneLocation) { m_FromZoneLocation = fromZoneLocation; }
	void SetRevealTo(RoleType revealTo) { m_RevealTo = revealTo; }

	void SetSecondaryPlayer(CPlayer* pSecondaryPlayer) { m_pSecondaryPlayer = pSecondaryPlayer; }
	void OptimizeRevealsForVisibleZones(bool bOptimizeReveals) { m_bOptimizeReveals = bOptimizeReveals; }

	void AddSelection(MinimumValue nMinSelectionCount,
					  MaximumValue nMaxSelectionCount,						// supports SpecialNumber::Any
					  RoleType selectPlayer = RoleType::PrimaryPlayer,		// allowed: PrimaryPlayer, SecondaryPlayer, RandomSelector
					  RoleType revealTo = RoleType::PrimaryPlayer,			// allowed: PrimaryPlayer, SecondaryPlayer, AllPlayers, None
					  const CCardFilter* pSelectionCardFilter = NULL,
					  ZoneId selectToZone = ZoneId::Hand,
					  RoleType selectToZoneOwner = RoleType::PrimaryPlayer,	// allowed: PrimaryPlayer, SecondaryPlayer
					  CardPlacement selectPlacement = CardPlacement::NotApplicable,
					  MoveType moveType = MoveType::Draw,
					  RoleType orderPlayer = RoleType::PrimaryPlayer,		// allowed: PrimaryPlayer, SecondaryPlayer
					  bool bSelectFromPreviousSelection = false)
	{
		SelectionSetting selectionSetting;

		selectionSetting.nMinSelectionCount = nMinSelectionCount;
		selectionSetting.nMaxSelectionCount = nMaxSelectionCount;
		selectionSetting.selectPlayer = selectPlayer;
		selectionSetting.revealTo = revealTo;
		selectionSetting.moveType = moveType;
		selectionSetting.pSelectionCardFilter = pSelectionCardFilter;
		selectionSetting.selectToZone = selectToZone;
		selectionSetting.selectToZoneOwner = selectToZoneOwner;
		selectionSetting.selectPlacement = selectPlacement;
		selectionSetting.orderPlayer = orderPlayer;
		selectionSetting.bSelectFromPreviousSelection = bSelectFromPreviousSelection;

		m_SelectionSettings.push_back(selectionSetting);
	}

	void RemoveSelection()
	{
		m_SelectionSettings.clear();
	}

	SelectionSetting& GetSelection(int nIndex) { return m_SelectionSettings[nIndex]; }
	const SelectionSetting& GetSelection(int nIndex) const { return m_SelectionSettings[nIndex]; }

	void SetReorderInformation(bool bReorder = true, 
							   ZoneId reorderToZone = ZoneId::Library,	
							   RoleType reorderToZoneOwner = RoleType::PrimaryPlayer,	// allowed: PrimaryPlayer, SecondaryPlayer
							   CardPlacement reorderToPlacement = CardPlacement::Top,
							   MoveType reorderToMoveType = MoveType::Others,
							   RoleType reorderByPlayer = RoleType::PrimaryPlayer,		// allowed: PrimaryPlayer, SecondaryPlayer
							   RoleType revealReorderTo = RoleType::PrimaryPlayer)
	{
		m_bReorder = bReorder;
		m_ReorderToZone = reorderToZone;
		m_ReorderToZoneOwner = reorderToZoneOwner;
		m_ReorderToPlacement = reorderToPlacement;
		m_ReorderToMoveType = reorderToMoveType;
		m_ReorderByPlayer = reorderByPlayer;
		m_RevealReorderTo = revealReorderTo;
	}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const { ATLASSERT(false); }

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CZoneModifier* pModifier = new CZoneModifier(m_pGame, m_FromZone,
				   m_nCount,
				   m_FromZoneOwner,
				   m_FromZoneLocation,
				   m_RevealTo);

		pModifier->m_LinkedPlayerModifiers = m_LinkedPlayerModifiers;

		pModifier->m_pSecondaryPlayer = m_pSecondaryPlayer;
		pModifier->m_bOptimizeReveals = m_bOptimizeReveals;

		pModifier->m_SelectionSettings = m_SelectionSettings;

		pModifier->m_bReorder = m_bReorder;
		pModifier->m_ReorderToZone = m_ReorderToZone;
		pModifier->m_ReorderToZoneOwner = m_ReorderToZoneOwner;
		pModifier->m_ReorderToPlacement = m_ReorderToPlacement;
		pModifier->m_ReorderToMoveType = m_ReorderToMoveType;
		pModifier->m_ReorderByPlayer = m_ReorderByPlayer;
		pModifier->m_RevealReorderTo = m_RevealReorderTo;

		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CZoneModifier* pThis = dynamic_cast<const CZoneModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_pGame == pThis->m_pGame &&
			m_FromZone == pThis->m_FromZone &&
			m_nCount == pThis->m_nCount &&
			m_FromZoneOwner == pThis->m_FromZoneOwner &&
			m_FromZoneLocation == pThis->m_FromZoneLocation &&
			m_RevealTo == pThis->m_RevealTo &&
			m_pSecondaryPlayer == pThis->m_pSecondaryPlayer &&
			m_bOptimizeReveals == pThis->m_bOptimizeReveals &&
			m_SelectionSettings == pThis->m_SelectionSettings &&
			m_bReorder == pThis->m_bReorder &&
			m_ReorderToZone == pThis->m_ReorderToZone &&
			m_ReorderToZoneOwner == pThis->m_ReorderToZoneOwner &&
			m_ReorderToPlacement == pThis->m_ReorderToPlacement &&
			m_ReorderToMoveType == pThis->m_ReorderToMoveType &&
			m_ReorderByPlayer == pThis->m_ReorderByPlayer &&
			m_RevealReorderTo == pThis->m_RevealReorderTo;
	}

protected:
	// Basic settings

	CGame* m_pGame;
	ZoneId m_FromZone;
	int m_nCount;
	RoleType m_FromZoneOwner;
	CardPlacement m_FromZoneLocation;
	RoleType m_RevealTo;
	CPlayer* m_pSecondaryPlayer;
	bool m_bOptimizeReveals;
	CCountedCardContainer* m_pSelectedCards;

	// Selection

	std::vector<SelectionSetting> m_SelectionSettings;

	// Reorder

	bool m_bReorder;
	ZoneId m_ReorderToZone;
	RoleType m_ReorderToZoneOwner;
	CardPlacement m_ReorderToPlacement;
	MoveType m_ReorderToMoveType;
	RoleType m_ReorderByPlayer;
	RoleType m_RevealReorderTo;	
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardModifier
	: public CZoneModifier
{
public:
	CDrawCardModifier(CGame* pGame,
					  MinimumValue nMinDrawCount,
					  MaximumValue nMaxDrawCount,								// supports SpecialNumber
					  RoleType revealTo = RoleType::PrimaryPlayer)	// allowed: PrimaryPlayer, SecondaryPlayer, AllPlayers, None
		: CZoneModifier(pGame, ZoneId::Library, GET_INTEGER(nMaxDrawCount), 
			RoleType::PrimaryPlayer, CardPlacement::Top, 
			RoleType::None)
	{
		AddSelection(nMinDrawCount, nMaxDrawCount, RoleType::PrimaryPlayer, revealTo);
	}
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardCounterModifier 
	: public CCardModifier
{
public:
	CCardCounterModifier(LPCTSTR strCounter, int nValue, 
						 bool bReplace = false,		// true: replace counter value with nValue (must be positive); false: add (+n) or subtract (-n) the counter value
						 CCard* pFromCard = NULL)	// if set: move counter from/to this card (bReplace parameter is ignored and nValue is the number of counter moved)
		: m_strCounter(strCounter)
		, m_nValue(nValue)
		, m_bReplace(bReplace)
		, m_cpFromCard(pFromCard)
		, m_bDoubling(true)
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;


	void SetDoubling(bool nDouble) { m_bDoubling = nDouble; }

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardCounterModifier* pModifier = new CCardCounterModifier(m_strCounter, m_nValue, m_bReplace, m_cpFromCard.GetPointer());
		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCardCounterModifier* pThis = dynamic_cast<const CCardCounterModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_strCounter == pThis->m_strCounter &&
			m_nValue == pThis->m_nValue &&
			m_bReplace == pThis->m_bReplace &&
			m_cpFromCard == pThis->m_cpFromCard &&
			m_bDoubling == pThis->m_bDoubling;
	}

protected:
	CString m_strCounter;
	int m_nValue;
	bool m_bReplace;
	counted_ptr<CCard> m_cpFromCard;
	bool m_bDoubling;
};
//____________________________________________________________________________
//
class CORE_EXPORT CTokenCreationModifier 
	: public CPlayerModifier
{
public:
	CTokenCreationModifier(CGame* pGame, LPCTSTR strTokenName,
						  UINT uID,
						  int nTokenCount,
						  BOOL bToOpp = FALSE, ZoneId pZoneId = ZoneId::Battlefield,  CCountedCardContainer* pCreatedCards = NULL)
	    : m_pGame(pGame)
		, m_strTokenName(strTokenName)
		, m_uID(uID)
		, m_TokenCount(nTokenCount)
		, m_bOpp(bToOpp)
		, m_pZoneId(pZoneId)
		, m_pCreatedCards(pCreatedCards)
		, m_bDoubling(true)

	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;	

	void SetDoubling(bool nDouble) { m_bDoubling = nDouble; }
	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CTokenCreationModifier * pModifier = new CTokenCreationModifier (m_pGame, m_strTokenName, m_uID, m_TokenCount, m_bOpp, m_pZoneId, m_pCreatedCards);
		*pModifier = *this;
		return pModifier;
	}

protected:
	CGame* m_pGame;
	LPCTSTR m_strTokenName;

	UINT		m_uID;
	int m_TokenCount;
	BOOL	m_bOpp;
	ZoneId m_pZoneId;
	CCountedCardContainer* m_pCreatedCards;
	bool m_bDoubling;

};
//____________________________________________________________________________
//
class CORE_EXPORT CPoisonModifier 
	: public CPlayerModifier
{
public:
	CPoisonModifier(CGame* pGame, int value, BOOL replace = FALSE, BOOL opposite_player = FALSE)
		: m_pGame(pGame)
	    , m_value(value)
		, m_replace(replace)
		, m_opposite_player(opposite_player)
		
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;	

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CPoisonModifier * pModifier = new CPoisonModifier (m_pGame, m_value, m_replace, m_opposite_player);
		*pModifier = *this;
		return pModifier;
	}

protected:	
	CGame* m_pGame;
	int m_value;
	BOOL	m_replace;
	BOOL    m_opposite_player;

};
//____________________________________________________________________________
//
class CORE_EXPORT COpponentModifier 
	: public CPlayerModifier
{
public:
	COpponentModifier(CGame* pGame, CPlayerModifier* pModifier)
		: m_pGame(pGame)
	    , m_pModifier(pModifier)
		
		
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;	

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		COpponentModifier * pModifier = new COpponentModifier(m_pGame, m_pModifier);
		*pModifier = *this;
		return pModifier;
	}

protected:	
	CGame* m_pGame;
	CPlayerModifier* m_pModifier;

};
//____________________________________________________________________________
//
class CORE_EXPORT CCanAttackWithModifier 
	: public CPlayerModifier
{
public:
	CCanAttackWithModifier(CGame* pGame, const CCardFilter* pFilter, BOOL pThisTurnOnly = TRUE)
		: m_pGame(pGame)
	    , m_pFilter(pFilter)
		, m_pThisTurnOnly(pThisTurnOnly)
		
		
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;	

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CCanAttackWithModifier * pModifier = new CCanAttackWithModifier(m_pGame, m_pFilter, m_pThisTurnOnly);
		*pModifier = *this;
		return pModifier;
	}

protected:	
	CGame* m_pGame;
	const CCardFilter*  m_pFilter;
	BOOL m_pThisTurnOnly;

};
//____________________________________________________________________________
//
class CORE_EXPORT CGainControlModifier 
	: public CCardModifier
{
public:
	CGainControlModifier(CGame* pGame, CCard* pControlledBy,						
						 bool toReturn=false)		
		: m_pGame(pGame)
		, m_pControlledBy(pControlledBy)		
		, m_ptoReturn(toReturn)
	{}

	CGainControlModifier()		
		: m_pGame(NULL)
		, m_pControlledBy(NULL)		
		, m_ptoReturn(false)		
	{}
	

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CGainControlModifier* pModifier = new CGainControlModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CGainControlModifier* pThis = dynamic_cast<const CGainControlModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pGame == pThis->m_pGame &&
			m_pControlledBy == pThis->m_pControlledBy &&			
			m_ptoReturn == pThis->m_ptoReturn; 			
	}

protected:	
	CGame* m_pGame;
	CCard* m_pControlledBy;	
	bool m_ptoReturn;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTransferControlModifier
	: public CPlayerModifier
{
public:
	CTransferControlModifier(CGame* pGame, CCard* pControlTo, CCard* pControlledBy,
		bool toReturn = false)
		: m_pGame(pGame)
		, m_pControlTo(pControlTo)
		, m_pControlledBy(pControlledBy)
		, m_ptoReturn(toReturn)
	{}

	CTransferControlModifier()
		: m_pGame(NULL)
		, m_pControlTo(NULL)
		, m_pControlledBy(NULL)
		, m_ptoReturn(false)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;

	virtual CTransferControlModifier* ClonePlayerModifier() const
	{
		CTransferControlModifier* pModifier = new CTransferControlModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CTransferControlModifier& rhs) const
	{
		const CTransferControlModifier* pThis = dynamic_cast<const CTransferControlModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_pGame == pThis->m_pGame &&
			m_pControlTo == pThis->m_pControlTo &&
			m_pControlledBy == pThis->m_pControlledBy &&
			m_ptoReturn == pThis->m_ptoReturn;
	}

protected:
	CGame* m_pGame;
	CCard* m_pControlTo;
	CCard* m_pControlledBy;
	bool m_ptoReturn;
};

//____________________________________________________________________________
//
class CORE_EXPORT CEquipModifier 
	: public CCreatureModifier
{
public:
	CEquipModifier(CCard* pEquipment, BOOL pCheck = TRUE)		
		: m_pEquipment(pEquipment)
		, m_pCheck(pCheck)
	{}

	CEquipModifier()		
		: m_pEquipment(NULL)
		, m_pCheck(TRUE)
	{}
	

	virtual void ApplyTo(CCreatureCard* pCard) const;
	virtual void RemoveFrom(CCreatureCard* pCard) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CEquipModifier* pModifier = new CEquipModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CEquipModifier* pThis = dynamic_cast<const CEquipModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pEquipment == pThis->m_pEquipment && 
			m_pCheck == pThis->m_pCheck; 			
	}

protected:	
	CCard* m_pEquipment;	
	BOOL m_pCheck;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureTypeModifier
	: public CCreatureModifier
{
public:
	CCreatureTypeModifier(SingleCreatureType pType, BOOL pAdd = TRUE)		
		: m_pType(pType)
		, m_pAdd(pAdd)
	{}

	virtual void ApplyTo(CCreatureCard* pCard) const;
	virtual void RemoveFrom(CCreatureCard* pCard) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(m_pType, m_pAdd);
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CCreatureTypeModifier* pThis = dynamic_cast<const CCreatureTypeModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pType == pThis->m_pType && 
			m_pAdd == pThis->m_pAdd;
	}

protected:	
	SingleCreatureType m_pType;
	BOOL m_pAdd;
};

//____________________________________________________________________________
//
class CORE_EXPORT CReplaceCreatureTypeModifier
	: public CCreatureModifier
{
public:
	CReplaceCreatureTypeModifier(const CreatureType& creatureType)
		: m_CreatureType(creatureType)
	{}

	virtual void ApplyTo(CCreatureCard* pCard);
	virtual void RemoveFrom(CCreatureCard* pCard);

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CReplaceCreatureTypeModifier* pModifier = new CReplaceCreatureTypeModifier(m_CreatureType);
		pModifier->m_OldCreatureType = m_OldCreatureType;
		return pModifier;
	}

	virtual bool Equals(const CReplaceCreatureTypeModifier& rhs) const
	{
		const CReplaceCreatureTypeModifier* pThis = dynamic_cast<const CReplaceCreatureTypeModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_CreatureType == pThis->m_CreatureType && 
			m_OldCreatureType == pThis->m_OldCreatureType;
	}

protected:	
	CreatureType m_CreatureType;
	CreatureType_ m_OldCreatureType;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSpecialEffectModifier 
	: public CCardModifier
{
public:
	CSpecialEffectModifier(CCard* pForCard,						
						 int pIndex)		
		: m_pFireTo(pForCard)		
		, m_pIndex(pIndex)
	{}

	CSpecialEffectModifier()		
		: m_pFireTo(NULL)		
		, m_pIndex(0)		
	{}
	

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CSpecialEffectModifier* pModifier = new CSpecialEffectModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CSpecialEffectModifier* pThis = dynamic_cast<const CSpecialEffectModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pFireTo == pThis->m_pFireTo &&
			m_pIndex == pThis->m_pIndex; 			
	}

protected:		
	CCard* m_pFireTo;	
	int m_pIndex;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCantActivateAbilitiesModifier 
	: public CCardModifier
{
public:
	CCantActivateAbilitiesModifier(CGame* pGame, const CCardFilter* pCardFilter)	
						 : m_pGame(pGame)
						 , m_pCardFilter(pCardFilter)
	{}

	CCantActivateAbilitiesModifier()
		 :m_pGame(NULL)
		 ,m_pCardFilter(NULL)
	{}
	

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCantActivateAbilitiesModifier* pThis = dynamic_cast<const CCantActivateAbilitiesModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&
			 m_pGame == this->m_pGame &&
			 m_pCardFilter == this->m_pCardFilter; 			
	}

protected:
	CGame* m_pGame;

private:
	CCardFilter* pComparer;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCounterMultiplyModifier 
	: public CCardModifier
{
public:
	CCounterMultiplyModifier(int pIndex)		
		: m_nIndex(pIndex)
	{}

	CCounterMultiplyModifier()		
		: m_nIndex(0)		
	{}
	

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCounterMultiplyModifier* pModifier = new CCounterMultiplyModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCounterMultiplyModifier* pThis = dynamic_cast<const CCounterMultiplyModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_nIndex == pThis->m_nIndex; 			
	}

protected:		
	int m_nIndex;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCounterCopyModifier 
	: public CCardModifier
{
public:
	CCounterCopyModifier(CCard* pCard)		
		: m_pCard(pCard)
	{}

	CCounterCopyModifier()		
		: m_pCard(NULL)		
	{}
	

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCounterCopyModifier* pModifier = new CCounterCopyModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCounterCopyModifier* pThis = dynamic_cast<const CCounterCopyModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pCard == pThis->m_pCard; 			
	}

private:		
	CCard* m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CAllCounterMoveModifier 
	: public CCardModifier
{
public:
	CAllCounterMoveModifier(CCard* pCard)		
		: m_pCard(pCard)
	{}

	CAllCounterMoveModifier()		
		: m_pCard(NULL)		
	{}
	

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CAllCounterMoveModifier* pModifier = new CAllCounterMoveModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CAllCounterMoveModifier* pThis = dynamic_cast<const CAllCounterMoveModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pCard == pThis->m_pCard; 			
	}

private:		
	CCard* m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardCopyModifier 
	: public CCardModifier
{
public:
	CCardCopyModifier(CGame* pGame, CCard* pController, CCardModifier* pCardModifier = NULL, CCreatureModifier* pCreatureModifier = NULL,  CCountedCardContainer* pCreatedCards = NULL, ZoneId pZoneId = ZoneId::Battlefield)		
		: m_pController(pController)
		, m_pGame(pGame)
		, m_pCardModifier(pCardModifier)
		, m_pCreatureModifier(pCreatureModifier)
		, m_pCreatedCards(pCreatedCards)
		, m_pZoneId(pZoneId)
	{}

	CCardCopyModifier()		
		: m_pController(NULL)	
		, m_pGame(NULL)
		, m_pCardModifier(NULL)
		, m_pCreatureModifier(NULL)
		, m_pCreatedCards(NULL)
		, m_pZoneId(ZoneId::Null)
	{}
	

	virtual void ApplyTo(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardCopyModifier* pModifier = new CCardCopyModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCardCopyModifier* pThis = dynamic_cast<const CCardCopyModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs) &&	
			m_pController == pThis->m_pController &&
			m_pGame == pThis->m_pGame &&
			m_pCardModifier == pThis->m_pCardModifier &&
			m_pCreatureModifier == pThis->m_pCreatureModifier &&
			m_pCreatedCards == pThis->m_pCreatedCards &&
			m_pZoneId == pThis->m_pZoneId; 			
	}

protected:		
	CCard* m_pController;
	CGame* m_pGame;
	CCardModifier* m_pCardModifier;
	CCreatureModifier* m_pCreatureModifier;
	CCountedCardContainer* m_pCreatedCards;
	ZoneId m_pZoneId;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRegenerateModifier 
	: public CCreatureModifier
{
public:
	CRegenerateModifier()		
	{}
	
	virtual void ApplyTo(CCreatureCard* pCard) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CRegenerateModifier* pModifier = new CRegenerateModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CRegenerateModifier* pThis = dynamic_cast<const CRegenerateModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs);
	}

};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureCanBlockAdditionModifier 
	: public CCreatureModifier
{
public:
	virtual void ApplyTo(CCreatureCard* pCreature) const;
	virtual void RemoveFrom(CCreatureCard* pCreature) const;
	

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CCreatureCanBlockAdditionModifier* pModifier = new CCreatureCanBlockAdditionModifier();
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& modifier) const
	{
		const CCreatureCanBlockAdditionModifier* pThis = dynamic_cast<const CCreatureCanBlockAdditionModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier);
	}
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardTypeModifier
	: public CCardModifier
{
public:
	CCardTypeModifier(CardType pType, BOOL pThisTurnOnly = FALSE, CardType pTypeRemove = CardType::Null)
		: m_nTypeId(0)
		, m_pType(pType)
		, m_pThisTurnOnly(pThisTurnOnly)
		, m_pTypeRemove(pTypeRemove)
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardTypeModifier* pModifier = new CCardTypeModifier(m_pType, m_pThisTurnOnly, m_pTypeRemove);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardTypeModifier* pThis = dynamic_cast<const CCardTypeModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_pType == pThis->m_pType &&
			m_pThisTurnOnly == pThis->m_pThisTurnOnly &&
			m_pTypeRemove == pThis->m_pTypeRemove;
	}

protected:
	mutable int m_nTypeId;
	CardType m_pType;
	CardType m_pTypeRemove;
	BOOL m_pThisTurnOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardColorModifier
	: public CCardModifier
{
public:
	CCardColorModifier(CardType pType, BOOL pThisTurnOnly = FALSE)
		: m_nTypeId(0)
		, m_pType(pType)
		, m_pThisTurnOnly(pThisTurnOnly)
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardColorModifier* pModifier = new CCardColorModifier(m_pType, m_pThisTurnOnly);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardColorModifier* pThis = dynamic_cast<const CCardColorModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_pType == pThis->m_pType &&
			m_pThisTurnOnly == pThis->m_pThisTurnOnly;
	}

protected:
	mutable int m_nTypeId;
	CardType m_pType;
	BOOL m_pThisTurnOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CZoneCreatureModifier 
	: public CPlayerModifier
{
public:
	CZoneCreatureModifier(ZoneId zoneId, const CCardFilter* pCardFilter,
				  std::auto_ptr<CCreatureModifier>& apModifier,
				  bool bApplyTo = true)
		: m_ZoneId(zoneId)
		, m_pCardFilter(pCardFilter)
		, m_apModifier(apModifier)
		, m_bApplyTo(bApplyTo)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual void RemoveFrom(CPlayer* pPlayer) const;

	virtual CPlayerModifier* ClonePlayerModifier() const
	{
		CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(m_ZoneId, m_pCardFilter,
			std::auto_ptr<CCreatureModifier>(m_apModifier->CloneCreatureModifier()), m_bApplyTo);
		pModifier->m_LinkedPlayerModifiers = m_LinkedPlayerModifiers;
		return pModifier;
	}

	virtual bool Equals(const CPlayerModifier& rhs) const
	{
		const CZoneCreatureModifier* pThis = dynamic_cast<const CZoneCreatureModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		if (!m_apModifier.get() || !pThis->m_apModifier.get())
			return false;

		return
			__super::Equals(rhs) &&
			m_apModifier->Equals(*(pThis->m_apModifier.get())) &&
			m_bApplyTo == pThis->m_bApplyTo &&
			m_ZoneId == pThis->m_ZoneId &&
			m_pCardFilter != pThis->m_pCardFilter;
	}

protected:
	std::auto_ptr<CCreatureModifier> m_apModifier;
	bool m_bApplyTo;
	ZoneId m_ZoneId;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardCounterStopModifier 
	: public CCardModifier
{
public:
	CCardCounterStopModifier(LPCTSTR strCounter)	// if set: move counter from/to this card (bReplace parameter is ignored and nValue is the number of counter moved)
		: m_strCounter(strCounter)		
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;	

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardCounterStopModifier* pModifier = new CCardCounterStopModifier(m_strCounter);
		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CCardCounterStopModifier* pThis = dynamic_cast<const CCardCounterStopModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs) &&
			m_strCounter == pThis->m_strCounter;
	}

protected:
	CString m_strCounter;	
};
//____________________________________________________________________________
//
class CORE_EXPORT CCardPlaneswalkModifier
	: public CCardModifier
{
public:
	 CCardPlaneswalkModifier(CGame* pGame, BOOL pAway = TRUE, BOOL pForcePlaneswalk = FALSE, CZoneModifier* pModifier = NULL )	// if set: move counter from/to this card (bReplace parameter is ignored and nValue is the number of counter moved)
		: m_pGame(pGame)		
		, m_Away(pAway)
		, m_ForcePlaneswalk(pForcePlaneswalk)
		, m_CardFilter(_T("plane card"), _T("planes"), new CardTypeComparer(CardType::Plane, false))
		, planeswalkmodifier(pModifier)

	{
	 
		if (!pModifier)
		{
		planeswalkmodifier = new CZoneModifier(m_pGame, ZoneId::_Planes, 1, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		planeswalkmodifier->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::AllPlayers, // reveal to
				NULL, // what cards
				ZoneId::_Effects, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer);
		}
	 
	 }

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;	

	virtual CCardModifier* CloneCardModifier() const
	{
		 CCardPlaneswalkModifier* pModifier = new  CCardPlaneswalkModifier(m_pGame);
		pModifier->m_LinkedCardModifiers = m_LinkedCardModifiers;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const  CCardPlaneswalkModifier* pThis = dynamic_cast<const  CCardPlaneswalkModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;

		return
			__super::Equals(rhs);
	}

	CZoneModifier* GetPlaneswalkModifier()			{return planeswalkmodifier;}


protected:
	void Planeswalk(CCard* pCard) const;

protected:
	CGame* m_pGame;	
	BOOL m_Away;
	CCardFilter m_CardFilter;
	BOOL m_ForcePlaneswalk;
	CZoneModifier* planeswalkmodifier;

};
//____________________________________________________________________________
//
class CORE_EXPORT CRandomDiscardModifier : public CPlayerModifier
{
public:
	CRandomDiscardModifier(int nCount,
							ZoneId fromZoneId = ZoneId::Hand, ZoneId toZoneId = ZoneId::Graveyard,
							MoveType moveType = MoveType::Discard, CardPlacement cardPlacement = CardPlacement::Top)
		: m_nCount(nCount)
		, m_FromZoneId(fromZoneId)
		, m_ToZoneId(toZoneId)
		, m_MoveType(moveType)
		, m_cardPlacement(cardPlacement)
	{}

	virtual void ApplyTo(CPlayer* pPlayer) const;
	virtual CRandomDiscardModifier* ClonePlayerModifier() const;

protected:
	int m_nCount;
	ZoneId m_FromZoneId;
	ZoneId m_ToZoneId;
	MoveType m_MoveType;
	CardPlacement m_cardPlacement;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPTCostModifier 
	: public CCreatureModifier
{
public:
	CPTCostModifier()		
	{}

	virtual void ApplyTo(CCreatureCard* pCard) const;
	virtual void RemoveFrom(CCreatureCard* pCard) const;

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CPTCostModifier* pModifier = new CPTCostModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CPTCostModifier* pThis = dynamic_cast<const CPTCostModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs); 			
	}

};

//____________________________________________________________________________
//
class CORE_EXPORT CLightfromWithinModifier 
	: public CCardModifier
{
public:
	CLightfromWithinModifier()		
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CLightfromWithinModifier* pModifier = new CLightfromWithinModifier;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CLightfromWithinModifier* pThis = dynamic_cast<const CLightfromWithinModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs); 			
	}

};

//____________________________________________________________________________
//
class CORE_EXPORT CDetainModifier 
	: public CCardModifier
{
public:
	CDetainModifier ()		
	{}

	virtual void ApplyTo(CCard* pCard) const;
	//virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CDetainModifier * pModifier = new CDetainModifier ;
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& rhs) const
	{
		const CDetainModifier * pThis = dynamic_cast<const CDetainModifier *>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs); 			
	}

};

//____________________________________________________________________________
//
class CORE_EXPORT CDamagetoItselfModifier 
	: public CCreatureModifier
{
public:
	CDamagetoItselfModifier(DamageType nDamageType)	
		:m_nDamageType(nDamageType)
	{}

	virtual void ApplyTo(CCreatureCard* pCard) const;	

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CDamagetoItselfModifier* pModifier = new CDamagetoItselfModifier(m_nDamageType);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CDamagetoItselfModifier* pThis = dynamic_cast<const CDamagetoItselfModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs); 			
	}

protected:
	DamageType m_nDamageType;
};

//____________________________________________________________________________
//
class CORE_EXPORT CFightsModifier 
	: public CCreatureModifier
{
public:
	CFightsModifier(CCreatureCard* pCard)	
		:m_pCard(pCard)
	{}

	virtual void ApplyTo(CCreatureCard* pCard) const;	

	virtual CCreatureModifier* CloneCreatureModifier() const
	{
		CFightsModifier* pModifier = new CFightsModifier(m_pCard);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCreatureModifier& rhs) const
	{
		const CFightsModifier* pThis = dynamic_cast<const CFightsModifier*>(&rhs);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return
			__super::Equals(rhs); 			
	}

protected:
	CCreatureCard* m_pCard;
};

/*/____________________________________________________________________________
//
class CORE_EXPORT CCardCounterDurationModifier 
	: public CCardModifier
{
public:
	CCardCounterDurationModifier(LPCTSTR strCounter, CCardModifier* pModifier)
		: m_pModifier(pModifier)
		, m_strCounter(strCounter)
		, m_cpAListener(VAR_NAME(m_cpAListener), 
	CounterMovedEventSource::Listener::EventCallback(this, &CCardCounterDurationModifier::OnCounterMoved))
	{}

	virtual void ApplyTo(CCard* pCard) const;
	virtual void RemoveFrom(CCard* pCard) const;

	virtual CCardModifier* CloneCardModifier() const
	{
		CCardCounterDurationModifier* pModifier = new CCardCounterDurationModifier(m_strCounter, m_pModifier);
		*pModifier = *this;
		return pModifier;
	}

	virtual bool Equals(const CCardModifier& modifier) const
	{
		const CCardCounterDurationModifier* pThis = dynamic_cast<const CCardCounterDurationModifier*>(&modifier);
		if (!pThis)
			return false;

		if (pThis == this)
			return true;		

		return 
			__super::Equals(modifier) &&
			m_pModifier == pThis->m_pModifier &&
			m_strCounter == pThis->m_strCounter;
	}

protected:
	BOOL m_bToTap;
	CCardModifier* m_pModifier;
	LPCTSTR m_strCounter;
	ListenerPtr<CounterMovedEventSource::Listener> m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	mutable CPtrContainer_<CCard>	m_AffectedCards;
};

//____________________________________________________________________________
//*/