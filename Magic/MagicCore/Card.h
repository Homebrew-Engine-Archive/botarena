#pragma once

class CZone;
class COrientation;
class CPlayer;
class CSpell;
class CUntapAbility;
class CDiscardAbility;
class CounterContainer;
class CCard;

//____________________________________________________________________________
//
struct CardTypeEntry
{
public:
	enum Enum : DWORD
	{
		Permanent,
		Temporary,
		UntilEOT
	};

	CardTypeEntry(CardType cardType = CardType::Null, CardType mask = CardType::Null, Enum persistence = Permanent, int nUniqueId = 0)
		: m_CardType(cardType)
		, m_Mask(mask)
		, m_Persistence(persistence)
		, m_nUniqueId(nUniqueId)
	{}

	bool operator==(const CardTypeEntry& entry) const
	{
		return m_CardType	 == entry.m_CardType	&&
			   m_Mask		 == entry.m_Mask		&&
			   m_Persistence == entry.m_Persistence &&
			   m_nUniqueId	 == entry.m_nUniqueId;
	}
	
	CardType	m_CardType;	
	CardType	m_Mask;

	Enum	m_Persistence;
	int		m_nUniqueId;
};

class CCardTypeStack
	: protected CValueContainerBase_<CardTypeEntry>
{
public:
	CCardTypeStack(CGame* pGame, CardType cardType)
		: m_pGame(pGame)
	{
		AddCardType(cardType, CardType::_All, CardTypeEntry::Permanent);
	}

	virtual ~CCardTypeStack()
	{
		RemoveSavedState();
	}

	int  AddCardType(CardType cardType, CardType mask, CardTypeEntry::Enum persistence);
	void RemoveCardType(int nUniqueId);
	void ResetTurnCardTypes();
	void ResetTemporaryCardTypes();

	operator CardType() const { return m_CardType; }
             
private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CardTypeEntry& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.m_CardType.Get());
			stateStack.AddTail((PVOID)entry.m_Mask.Get());
			stateStack.AddTail((PVOID)entry.m_Persistence);
			stateStack.AddTail((PVOID)entry.m_nUniqueId);
		}
		stateStack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<CardTypeEntry>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CardTypeEntry entry;
			entry.m_nUniqueId   = (int)m_Stack.RemoveTail();
			entry.m_Persistence = (CardTypeEntry::Enum)(DWORD)m_Stack.RemoveTail();
			entry.m_Mask		= (CardType::Enum)(DWORD)m_Stack.RemoveTail();
			entry.m_CardType	= (CardType::Enum)(DWORD)m_Stack.RemoveTail();

			CValueContainer<CardTypeEntry>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<CardTypeEntry>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CardTypeEntry entry;
			entry.m_nUniqueId	= (int)m_Stack.GetPrev(pos);
			entry.m_Persistence = (CardTypeEntry::Enum)(DWORD)m_Stack.GetPrev(pos);
			entry.m_Mask		= (CardType::Enum)(DWORD)m_Stack.GetPrev(pos);
			entry.m_CardType	= (CardType::Enum)(DWORD)m_Stack.GetPrev(pos);

			CValueContainer<CardTypeEntry>::AddImpl(entry);
		}
	}

	CGame* m_pGame;
	CStateSupportEnumType<CardType>	m_CardType;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCard
	: public CReferenceCounted<SingleThreadedPolicy>
	, noncopyable
{
	friend class CZone;

protected:
	CCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uImageID);
	virtual ~CCard();

public:
	// Event Sources

	// OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer)
	CardMovementEventSource* GetMovedEventSource()			const		{ return m_cpMovedEventSource.GetPointer();		}

	// OnCardMoving(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer)
	CardMovementEventSource* GetMovingEventSource()			const		{ return m_cpMovingEventSource.GetPointer();	}

	// OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
	CardTypeEventSource* GetCardTypeEventSource()			const		{ return m_cpCardTypeEventSource.GetPointer();	}

	// void OnDealtDamage(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, Damage damage)
	DamageDealEventSource* GetDealDamageEventSource()		const		{ return m_cpDamageDealEventSource.GetPointer();}

	// void BeforeDealtDamage(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, Damage damage)
	BeforeDamageDealtEventSource* GetBeforeDealDamageEventSource() const { return m_cpBeforeDamageDealtEventSource.GetPointer(); }

	// void CounterMoved(CCard* pFromCard, LPCTSTR name, int old, int new)
	CounterMovedEventSource* GetCounterMovedEventSource()	const		{ return m_cpCounterMovedEventSource.GetPointer();  }

	SpecialTriggerEventSource* GetSpecialEventSource()		const		{ return m_cpSpecialTriggerEventSource.GetPointer();}

	// void CardCycled(CCard* pCard, CPlyaer* byPlayer)
	CardCycledEventSource* GetCardCycledEventSource()		const		{ return m_cpCardCycledEventSource.GetPointer(); }

	CNumberEventSource<int>* GetEnchantCountEventSource()	const		{ return m_cpEnchantCount.GetPointer();			 }
	CPtrEventSource1<CPlayer, CCard*>* GetControllerEventSource() const	{ return m_cpController.GetPointer();			 }
	CCardKeyword* GetCardKeyword()							const		{ return m_cpCardKeyword.GetPointer();			 }
	CReplacementKeyword* GetReplacementKeyword()			const		{ return m_cpReplacementKeyword.GetPointer();	 }
	CCountedPtrEventSource<CCard>* GetIsAlsoAEventSource()	const		{ return m_cpIsAlsoA.GetPointer();				 }

	CCardFlag* GetCardFlag()								const		{ return m_cpCardFlag.GetPointer();				 }


	void OnDealDamage(CPlayer* pToPlayer,
					  CCreatureCard* pToCreature,
					  CPlaneswalkerCard* pToPlaneswalker,
					  Damage damage);

	void BeforeDealDamage(CPlayer* pToPlayer,
						  CCreatureCard* pToCreature,
						  CPlaneswalkerCard* pToPlaneswalker,
						  Damage damage, int effect_index);
	
	void CounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	void SpecialTrigger(CCard* pCard, int n_value);

	void CardCycled(CCard* pCard, CPlayer* byPlayer);

	// Identity

	/*
		Instance ID (USHORT) - each card object will has a unique number
		Image ID (UINT) - each card with different card image will has a unique number
		Class ID (USHORT) - each card class will has a unique number
	*/

	static void ResetInstanceID()					{ s_uNextInstanceID = 1;		  }

	DECLARE_GAME_CLASS_ID							// Unique among all declared classes 
	UINT GetImageID()			  const				{ return m_uImageID;			  }
	USHORT GetInstanceID()		  const				{ return m_uInstanceID;			  }
	int GetInplayGameTurnNumber() const				{ return m_nInplayGameTurnNumber; }

	// General Properties

	CGame* GetGame()			  const				{ return m_pGame; }

	CardType GetCardType()		  const;
	int AddCardType(CardType cardType, CardType mask, CardTypeEntry::Enum persistence = CardTypeEntry::Permanent); // Returns a unique Id for later removal
	void RemoveCardType(int nUniqueId);				// Remove this particular entry

	void AllowUnlimitedCopies(BOOL bAllow)			{ m_bAllowUnlimitedCopies = bAllow;}
	BOOL AllowUnlimitedCopies()	  const				{ return m_bAllowUnlimitedCopies;  }

	VIRTUAL (CString, GetCardName)(BOOL bIncludeDetails = TRUE)			const;
	VIRTUAL (CString, GetTrCardName)(BOOL)								const;
	VIRTUAL (CString, AppendToCardName)(LPCTSTR strSuffix);
	VIRTUAL (CString, GetPrintedCardName)()								const	{ return m_strPrintedCardName; }
	VIRTUAL (CString, GetSecondPrintedCardName)()						const	{ return m_strPrintedCardName; }
	VIRTUAL (CString, GetSecondCardName)(BOOL bIncludeDetails = TRUE)	const;

	VIRTUAL (DWORD, GetConvertedManaCost)()								const;
	VIRTUAL (DWORD, GetManaCost)(CManaCostBase::Color manaCost, BOOL bMax = TRUE);

	CString GetOriginalPrintedCardName()								const	{ return m_strPrintedCardName; }

	BOOL IsDoubleNamed()												const   { return m_nDoubleCardName;	   }
	void SetDoubleNamed(BOOL named)												{ m_nDoubleCardName = named;   }

	BOOL IsColor(CManaPool::Color color)					const;

	SourceColor GetSourceColor()							const;

	VIRTUAL(int, GetScore)()								const;

	BOOL HasProtectionFrom(const CCard* pCard, BOOL pSpell) const;

	CounterContainer* GetCounterContainer()						  { return m_apCounters.get(); }
	const CounterContainer* GetCounterContainer()			const { return m_apCounters.get(); }

	// Abilities

	void AddSpell(CSpell* pSpell);
	BOOL IsSpell(const CAbility* pAbility)		const  { return m_Spells.FindIndex((const CSpell*)pAbility) != -1; }
	void RemoveSpell(int i);
	void RemoveSpell(CSpell* pAbility);
	const CPtrContainer_<CSpell>& GetSpells()	const  { return m_Spells; }
	
	
	
	VIRTUAL(void, AddAbility)(CAbility* pAbility);
	void RemoveAbility(CAbility* pAbility);
	int GetAbilityCount()						 const { return m_Abilities.GetSize();					}
	CAbility* GetAbility(int nIndex)			 const { return m_Abilities.GetAt(nIndex).GetPointer(); }
	CAbility* GetAbility(LPCTSTR strAbilityName) const { return m_Abilities.GetAbility(strAbilityName); }
	int FindAbility(CAbility* pAbility)			 const { return m_Abilities.FindIndex(pAbility);		}
	CAbilityContainer GetAbilities()			 const { return m_Abilities;							}

	void AddUpkeepCost(LPCTSTR strManaCost);

	int GetDredgeNumber()						 const;

	BOOL GetToZoneIdReplacement(ZoneId pToZone)  const;

	CUntapAbility* GetUntapAbility()			 const { return m_pUntapAbility;				 }

	CDiscardAbility* GetDiscardAbility()		 const { return m_pDiscardAbility;				 }

	CManaProductionHint* GetManaProductionHint()	   { return &m_ManaProductionHint;			 }
	void UpdateManaProductionHint()					   { m_ManaProductionHint.SetFromCard(this); }

	void AddModification();
	void RemoveModification();
	BOOL IsModified()							 const { return m_nModificationCount > 0;  }

	void AddEnchant();
	void RemoveEnchant();
	BOOL IsEnchanted()							 const { return *m_cpEnchantCount > 0;	   }
	int GetEnchantCount()						 const { return *m_cpEnchantCount;		   }

	int SetIsAlsoA(LPCTSTR strToken, UINT uID, CPlayer* pByPlayer);
	void RemoveIsAlsoA(int nUniqueId, CPlayer* pByPlayer);

	CCard* GetIsAlsoA()							 const { return m_cpIsAlsoA->GetPointer(); }
	CCard* GetEnchantedOn()						 const;
	CCard* GetEquippedOn()						 const;

	// Location Properties

	BOOL IsInplay()								 const;
	BOOL IsInGraveyard()						 const;

	void SetIntoPlayTapped()							{ m_bIntoPlayTapped = TRUE;			   }

	COrientation* GetOrientation()				 const	{ return m_cpOrientation.GetPointer(); }

	CPlayer* GetController()					 const	{ return m_cpController->GetPointer(); }

	void SetController(CPlayer* pPlayer);			

	int GetControllerTurnChanged()				 const	{ return m_nControllerTurnChanged; }

	CPlayer* GetOwner()							 const	{ return m_pOwner;				   }
//	CPlayer* GetPreviousController()			 const	{ return m_pPreviousController;	   }
//	USHORT GetControlledBy()					 const	{ return m_pControlledBy;		   }

//	void SetPreviousController(CPlayer* pPlayer) 		{ m_pPreviousController = pPlayer; }
//	void SetControlledBy(USHORT Instance) 				{ m_pControlledBy = Instance;	   }

	void SetOwner(CPlayer* pPlayer)						{ m_pOwner = pPlayer;	    }

	CZone* GetZone()							 const	{ return m_pZone;			}
	ZoneId GetZoneId()							 const;

	BOOL SetZone(CZone* pZone, const CPlayer* pByPlayer, MoveType moveType);
	int GetZoneMoveNumber()						 const	{ return m_nZoneMoveNumber; }

	VIRTUAL(void, Move)(CZone* pToZone,
					    const CPlayer* pByPlayer,	// Card moved by this player (NULL if not applicable)
						MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CZone* GetGoingToZone()						 const	{ return m_pGoingToZone.GetPointer();				 }
	void SetGoingToZone(CZone* pZone)					{ ATLASSERT(m_pGoingToZone); m_pGoingToZone = pZone; }	
													// This function is only valid when a card is on its way 
													// to a zone and you want to return it to a different
													// zone in a zone changed listener. Note that the returning
													// will be performed after the original move has finished.


	void Destroy(const CPlayer* pByPlayer, MoveType moveType);			// Destroy tokens/dynamic cards

	BOOL IsVisibleTo(const CPlayer* pPlayer) const;

	// Misc

	void SetLastCastingManaCost(const CManaPool& castingCost)				{ m_LastCastingManaCost.SetMana(castingCost); }
	const CManaPool_& GetLastCastingManaCost()				const			{ return m_LastCastingManaCost;				  }

	void SetLastCastingCostConfigEntry(const  CCostConfigEntry& casting)	{ m_LastCastingCostConfigEntry = casting;	  }
	const CCostConfigEntry& GetLastCastingCostConfigEntry() const			{ return m_LastCastingCostConfigEntry;		  }

	void SetLastCastingExtraValue(int nExtraValue)							{ m_nLastCastingExtraValue   = nExtraValue;	  }
	int GetLastCastingExtraValue()							const			{ return m_nLastCastingExtraValue;			  }

	void SetLastKnownp11Counters(int nCounters)								{ m_nLastKnownp11Counters    = nCounters;	  }
	void SetLastKnownm11Counters(int nCounters)								{ m_nLastKnownm11Counters    = nCounters;	  }
	void SetLastKnownFungusCounters(int nCounters)							{ m_nLastKnownFungusCounters = nCounters;	  }

	int GetLastKnownp11Counters()							const           { return m_nLastKnownp11Counters;			  }
	int GetLastKnownm11Counters()							const           { return m_nLastKnownm11Counters;			  }
	int GetLastKnownFungusCounters()						const           { return m_nLastKnownFungusCounters;		  }

	void IncreaseTargetedNumber()											{ m_nTargetedNumber = m_nTargetedNumber + 1;  }
	int GetTargetedNumber()									const           { return m_nTargetedNumber;					  }
	void SetTargetedNumber(int nCount)										{ m_nTargetedNumber = nCount;				  }

	CCard* GetIsAlsoOf()									const           { return m_IsAlsoOf;	}
	void SetIsAlsoOf(CCard* pCard)											{ m_IsAlsoOf = pCard;	}

	VIRTUAL(void, ResetTurnProperties)		();
	VIRTUAL(void, ResetTurnPropertiesNoFlag)();
	VIRTUAL(void, ResetProperties)			();

protected:
	struct IsAlsoAEntry
	{
		IsAlsoAEntry(LPCTSTR _strToken = NULL, UINT _uID = 0, int _nUniqueId = 0)
			: strToken(_strToken)
			, uID(_uID)
			, nUniqueId(_nUniqueId)
		{}

		bool operator==(const IsAlsoAEntry& entry) const
		{
			return !_tcscmp(strToken, entry.strToken) &&
				uID == entry.uID &&
				nUniqueId == entry.nUniqueId;
		}

		LPCTSTR	strToken;
		UINT	uID;
		int		nUniqueId;
	};

	class CIsAlsoAEntryContainer_
		: public CValueContainerBase_<IsAlsoAEntry>
	{
	public:
		CIsAlsoAEntryContainer_()
		{}

		virtual ~CIsAlsoAEntryContainer_()
		{
			RemoveSavedState();
		}

	private:
		OVERRIDE(void, Push)(StateStack& stateStack)
		{
			int nCount = GetSize();
			for (int i = nCount - 1; i >= 0; --i)
			{
				const IsAlsoAEntry& entry = GetAt(i);

				stateStack.AddTail((PVOID)entry.strToken);
				stateStack.AddTail((PVOID)entry.uID);
				stateStack.AddTail((PVOID)entry.nUniqueId);
			}

			stateStack.AddTail((PVOID)nCount);
		}

		OVERRIDE(void, Pop)()
		{
			CValueContainer<IsAlsoAEntry>::RemoveAllImpl();

			int nCount = (int)m_Stack.RemoveTail();
			for (int i = 0; i < nCount; ++i)
			{
				IsAlsoAEntry entry;
				entry.nUniqueId = (int)m_Stack.RemoveTail();
				entry.uID		= (UINT)m_Stack.RemoveTail();
				entry.strToken  = (LPCTSTR)m_Stack.RemoveTail();

				CValueContainer<IsAlsoAEntry>::AddImpl(entry);
			}
		}

		OVERRIDE(void, Peek)()
		{
			CValueContainer<IsAlsoAEntry>::RemoveAllImpl();

			StateStack::Position pos = m_Stack.GetTailPosition();

			int nCount = (int)m_Stack.GetPrev(pos);
			for (int i = 0; i < nCount; ++i)
			{
				IsAlsoAEntry entry;
				entry.nUniqueId = (int)m_Stack.GetPrev(pos);
				entry.uID		= (UINT)m_Stack.GetPrev(pos);
				entry.strToken  = (LPCTSTR)m_Stack.GetPrev(pos);

				CValueContainer<IsAlsoAEntry>::AddImpl(entry);
			}
		}
	};

	static USHORT	s_uNextInstanceID;

	void OnISAAZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnISAADamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);
	void OnISAAOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation);

	void OnSelfCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	void OnAlsoCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	void OnCardTypeChanged(CardType fromCardType);

	void SetIsAlsoA(CCard* pCard);

	void ResetTurnCardTypes();

	// Control stack

	typedef CValueContainer<std::pair<CPlayer*, const CCard*>> CControlContainer;

	class CControlStack
		: public CValueContainerBase_<std::pair<CPlayer*, const CCard*>, CControlContainer>
	{
	public:
		CControlStack()	{}

		virtual ~CControlStack()
		{
			RemoveSavedState();
		}

		void AddControl(CPlayer* pPreviousController, const CCard* pControllingCard = NULL);
		CPlayer* RemoveControl(const CCard* pControllingCard);
		BOOL UpdateControl(CPlayer* NewController, const CCard* pControllingCard);
		bool HasControl(const CCard* pControllingCard) const;

	private:
		int FindCardIndex(const CCard* pControllingCard) const;
		CPlayer* RemoveControlAt(int nIndex);

	private:
		OVERRIDE(void, Push)(StateStack& stateStack)
		{
			int nCount = GetSize();
			for (int i = nCount - 1; i >= 0; --i)
			{
				const std::pair<CPlayer*, const CCard*>& entry = GetAt(i);
				stateStack.AddTail((PVOID)entry.first);
				stateStack.AddTail((PVOID)entry.second);
			}

			stateStack.AddTail((PVOID)nCount);
		}

		OVERRIDE(void, Pop)()
		{
			CControlContainer::RemoveAllImpl();

			int nCount = (int)m_Stack.RemoveTail();
			for (int i = 0; i < nCount; ++i)
			{
				std::pair<CPlayer*, const CCard*> entry;

				entry.second = reinterpret_cast<CCard*>(m_Stack.RemoveTail());
				entry.first  = reinterpret_cast<CPlayer*>(m_Stack.RemoveTail());

				CControlContainer::AddImpl(entry);
			}
		}

		OVERRIDE(void, Peek)()
		{
			CControlContainer::RemoveAllImpl();

			StateStack::Position pos = m_Stack.GetTailPosition();

			int nCount = (int)m_Stack.GetPrev(pos);
			for (int i = 0; i < nCount; ++i)
			{
				std::pair<CPlayer*, const CCard*> entry;

				entry.second = reinterpret_cast<CCard*>(m_Stack.GetPrev(pos));
				entry.first  = reinterpret_cast<CPlayer*>(m_Stack.GetPrev(pos));

				CControlContainer::AddImpl(entry);
			}
		}
	}; 

public:
	CControlStack* GetControlStack() const				{ return &m_ControlStack; }

	// Identity
	
protected:
	BOOL		m_bInitialized;
	BOOL		m_bAllowUnlimitedCopies;

	CGame*		m_pGame;
	CString		m_strCardName;
	CString		m_strPrintedCardName;
	UINT		m_uImageID;
	USHORT		m_uInstanceID;

	// Ownership

	CPlayer*										m_pOwner;
//	CPlayer*										m_pPreviousController;
//	USHORT											m_pControlledBy;
	mutable CControlStack							m_ControlStack;
	counted_ptr<CPtrEventSource1<CPlayer, CCard*>>	m_cpController;
	int_											m_nControllerTurnChanged;

	// Abilities

private: 
	CAbilityContainer_			m_Abilities;
protected:
	CPtrContainer_<CSpell>		m_Spells;
	CUntapAbility*				m_pUntapAbility;
	CDiscardAbility*			m_pDiscardAbility;
	
	// Attributes

	counted_ptr<CCardKeyword>			m_cpCardKeyword;
	counted_ptr<CReplacementKeyword>	m_cpReplacementKeyword;

	// Card Type

	CCardTypeStack									m_CardType;
	counted_ptr<CardTypeEventSource>				m_cpCardTypeEventSource;

	counted_ptr<CCountedPtrEventSource<CCard>>		m_cpIsAlsoA;
	CCard*                                          m_IsAlsoOf;
	CIsAlsoAEntryContainer_							m_IsAlsoAStack;
	ListenerPtr<CardMovementEventSource::Listener>	m_cpISAAZoneListener;
	ListenerPtr<COrientation::Listener>				m_cpISAAOrientationListener;
	ListenerPtr<DamageDealEventSource::Listener>	m_cpISAADamageListener;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpISAACounterListener;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpISAOCounterListener;

	int_											m_nModificationCount;
	counted_ptr<CNumberEventSource<int>>			m_cpEnchantCount;

	counted_ptr<CCardFlag>							m_cpCardFlag;

	// Zone and Orientation

	int_									m_nZoneMoveNumber;

	CStateSupportPtrType<CZone>				m_pGoingToZone;
	CStateSupportPtrType<CZone>				m_pZone;	
	counted_ptr<CardMovementEventSource>	m_cpMovedEventSource;
	counted_ptr<CardMovementEventSource>	m_cpMovingEventSource;
	counted_ptr<COrientation>				m_cpOrientation;

	BOOL									m_bIntoPlayTapped;
	int_									m_nInplayGameTurnNumber;

	// Misc

	BOOL									m_nDoubleCardName;

	CManaProductionHint						m_ManaProductionHint;
	CManaPool_								m_LastCastingManaCost;
	CCostConfigEntry						m_LastCastingCostConfigEntry;
	int_									m_nLastCastingExtraValue;
	int_                                    m_nLastKnownp11Counters;
	int_                                    m_nLastKnownm11Counters;
	int_                                    m_nLastKnownFungusCounters;
	int_                                    m_nTargetedNumber;

	counted_ptr<DamageDealEventSource>				m_cpDamageDealEventSource;
	counted_ptr<BeforeDamageDealtEventSource>		m_cpBeforeDamageDealtEventSource;
	counted_ptr<CounterMovedEventSource>			m_cpCounterMovedEventSource;
	counted_ptr<SpecialTriggerEventSource>			m_cpSpecialTriggerEventSource;
	counted_ptr<CardCycledEventSource>				m_cpCardCycledEventSource;

	std::auto_ptr<CounterContainer>					m_apCounters;

	void OnDredgeSelected   (const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_DredgeSelection;

	void OnCommanderSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_CommanderSelection;

	void OnToBattlefieldSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ToBattlefield;

	void OnToDiscardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ToDiscard;
};

//____________________________________________________________________________
//
// 0 (bottom) ..... n-1 (top)
//
// Generic container: Add, Remove, etc.
// Card container: AddCard, AddCards, RemoveCard, etc.
//
template <template<class> class C>
class CCardContainerBase
	: protected C<CCard>
{
public:
	void AddCard(CCard* pCard, CardPlacement placement)	
	{ 
		if (placement != CardPlacement::Bottom)
			Add(pCard); 
		else
			InsertAt(0, pCard);
	}

	void AddCards(const CCardContainerBase& cardContainer, CardPlacement placement)
	{
		if (placement != CardPlacement::Bottom)
			Add(cardContainer);
		else
			__super::InsertAt(0, cardContainer);
	}

	template <class C>
	void AddCards(const C& cardContainer, CardPlacement placement)
	{
		int nCount = cardContainer.GetSize();

		if (placement != CardPlacement::Bottom)
		{
			for (int i = 0; i < nCount; ++i)
				Add(cardContainer.GetAt(i));
		}
		else
		{
			for (int i = 0; i < nCount; ++i)
				__super::InsertAt(i, cardContainer.GetAt(i));
		}
	}

	void SetAt(int nIndex, CCard* pCard)	{ __super::SetAt(nIndex, pCard);    }
	void InsertAt(int nIndex, CCard* pCard)	{ __super::InsertAt(nIndex, pCard); }
	
	/*VIRTUAL(void, RemoveCard)(LPCTSTR strCardName)
	{
		for (int i = 0; i < GetSize(); ++i)
		{
			CCard* pCard = GetAt(i);
			
			if (!_tcsicmp(pCard->GetCardName(), strCardName))
			{
				RemoveAt(i);
				return;
			}
		}
	}*/

	VIRTUAL2(void, RemoveCard)(CCard* pCard)
	{
		int nIndex = __super::FindIndex(pCard);
		if (nIndex != -1)
			__super::RemoveAt(nIndex);
	}

	VIRTUAL(void, RemoveTopCard)	()		{ __super::RemoveAt(GetSize() - 1); }
	VIRTUAL(void, RemoveBottomCard) ()		{ __super::RemoveAt(0);				}
	void RemoveAt(int nIndex)				{ __super::RemoveAt(nIndex);		}
	void RemoveAll()						{ __super::RemoveAll();				}

	int GetSize()					  const	{ return __super::GetSize();						 }
	int FindIndex(const CCard* pCard) const	{ return __super::FindIndex(pCard);					 }
	CCard* GetAt(int nIndex)		  const	{ return __super::GetAt(nIndex).GetPointer();		 }
	CCard* GetTopCard()				  const	{ return __super::GetAt(GetSize() - 1).GetPointer(); }
	CCard* GetBottomCard()			  const	{ return __super::GetAt(0).GetPointer();			 }

	BOOL HasCard(const CCard* pCard)  const	{ return __super::FindIndex(pCard) != -1;			 }

	bool operator==(const CCardContainerBase& cardContainer) const
	{
		int nCount = __super::GetSize();
		if (cardContainer.GetSize() != nCount)
			return false;

		CCountedCardContainer temp;
		temp.AddCards(cardContainer, CardPlacement::Top);

		for (int i = 0; i < nCount; ++i)
		{
			BOOL bFound = FALSE;
			for (int j = 0; j < temp.GetSize(); ++j)
				if (temp.GetAt(j) == GetAt(i))
				{
					bFound = TRUE;
					temp.RemoveAt(j);
					break;
				}

			if (!bFound)
				return false;
		}

		return true;
	}

	bool operator!=(const CCardContainerBase& cardContainer) const { return !operator==(cardContainer); }

	void Sort(BOOL bAscending = FALSE)	// Ascending           = bottom card->min score, top card->max score
										// Descending(default) = bottom card->max score, top card->min score
	{
		int nCount = __super::GetSize();
		if (nCount < 2)
			return;

		BOOL bChanged;
		do
		{
			bChanged = FALSE;
			for (int i = 0; i < nCount - 1; ++i)
			{
				counted_ptr<CCard> cpCard1(__super::GetAt(i));
				counted_ptr<CCard> cpCard2(__super::GetAt(i + 1));

				if ((!bAscending && (cpCard1->GetScore() < cpCard2->GetScore())) ||
					(bAscending && (cpCard1->GetScore() > cpCard2->GetScore())))
				{
					__super::SetAt(i, cpCard2.GetPointer());
					__super::SetAt(i + 1, cpCard1.GetPointer());
					bChanged = TRUE;
				}
			}
		} while (bChanged);

	#ifdef _MY_DEBUG
		if (false)
		{
			for (int i = 0; i < nCount; ++i)
				if (!i)
					ATLTRACE(_T("%d [Top]) %s - Score %d\n"), i, GetAt(i)->GetCardName(), GetAt(i)->GetScore());
				else
					if (i == nCount - 1)
						ATLTRACE(_T("%d [Bottom]) %s - Score %d\n"), i, GetAt(i)->GetCardName(), GetAt(i)->GetScore());
					else
						ATLTRACE(_T("%d) %s - Score %d\n"), i, GetAt(i)->GetCardName(), GetAt(i)->GetScore());
			ATLTRACE(_T("\n"));
		}
	#endif
	}

	VIRTUAL(void, Shuffle)(CPlayer* pPlayer)
	{
		int nCardCount = __super::GetSize();
		if (nCardCount <= 1)
			return;

		if (!pPlayer->GetGame()->IsThinking())
			for (int i = 0; i < nCardCount - 1; ++i)
			{
				unsigned nRand = pPlayer->GetRand();
				int nFromIndex = i;
				int nToIndex = i + nRand % (nCardCount - i);

				ATLASSERT((nFromIndex >= 0) && (nToIndex >= 0) &&
					(nFromIndex < nCardCount) && (nToIndex < nCardCount));

				if (nFromIndex != nToIndex)
				{
					counted_ptr<CCard> cpCard1(__super::GetAt(nFromIndex));
					counted_ptr<CCard> cpCard2(__super::GetAt(nToIndex));

					__super::SetAt(nToIndex, cpCard1.GetPointer());
					__super::SetAt(nFromIndex, cpCard2.GetPointer());
				}
			}
			/*
			for (int i = 1; i < nCount; ++i)
			{
				unsigned nRand1 = pPlayer->GetRand();
				unsigned nRand2 = pPlayer->GetRand();
				int nFromIndex = nRand1 % nCardCount;
				int nToIndex = (nFromIndex + (nRand2 % (nCardCount - 1)) + 1) % nCardCount;

				ATLASSERT((nFromIndex >= 0) && (nToIndex >= 0) && (nFromIndex != nToIndex) &&
					(nFromIndex < nCardCount) && (nToIndex < nCardCount));

				counted_ptr<CCard> cpCard1(__super::GetAt(nFromIndex));
				counted_ptr<CCard> cpCard2(__super::GetAt(nToIndex));

				__super::SetAt(nToIndex, cpCard1.GetPointer());
				__super::SetAt(nFromIndex, cpCard2.GetPointer());
			}
			*/
	}

	void ReorderCards(const CCardContainerBase& cards, CardPlacement placement)
	{
		if (placement == CardPlacement::Top)
			for (int i = 0; i < cards.GetSize(); ++i)
			{
				CCard* pCard = cards.GetAt(i);
				if (Remove(pCard))
					Add(pCard);
			}
		else
			if (placement == CardPlacement::Bottom)
				for (int i = cards.GetSize() - 1; i >= 0; --i)
				{
					CCard* pCard = cards.GetAt(i);
					if (Remove(pCard))
						InsertAt(0, pCard);
				}
	}

	void GetCardColorSummary(std::map<CManaPool::Color, int>& summary,
							 CManaPool::Color& prominentColor,		// Will not return colorless if there are other non-zero colors
							 bool bFine) const
	{
		summary.clear();
		summary[CManaPool::Color::Black]	 = 0;
		summary[CManaPool::Color::Blue ]	 = 0;
		summary[CManaPool::Color::Red  ]	 = 0;
		summary[CManaPool::Color::Green]	 = 0;
		summary[CManaPool::Color::White]	 = 0;
		summary[CManaPool::Color::Colorless] = 0;

		prominentColor = CManaPool::Color::Colorless;

		for (int i = 0; i < __super::GetSize(); ++i)
		{
			const CCard* pCard = __super::GetAt(i).GetPointer();

			const CPtrContainer_<CSpell>& spells(pCard->GetSpells());

			for (int j = 0; j < spells.GetSize(); ++j)
			{
				const CSpell* pSpell = spells.GetAt(j);
				CManaCost manaCost(pSpell->GetCost().GetManaCost());

				if (bFine)
				{
					summary[CManaPool::Color::Black] += manaCost.GetCost(CManaCost::Color::Black);
					summary[CManaPool::Color::Blue ] += manaCost.GetCost(CManaCost::Color::Blue);
					summary[CManaPool::Color::Red  ] += manaCost.GetCost(CManaCost::Color::Red);
					summary[CManaPool::Color::Green] += manaCost.GetCost(CManaCost::Color::Green);
					summary[CManaPool::Color::White] += manaCost.GetCost(CManaCost::Color::White);
					summary[CManaPool::Color::Colorless] += manaCost.GetCost(CManaCost::Color::Generic);
				}
				else
				{
					summary[CManaPool::Color::Black] += (manaCost.GetCost(CManaCost::Color::Black) > 0 ? 1 : 0);
					summary[CManaPool::Color::Blue ] += (manaCost.GetCost(CManaCost::Color::Blue)  > 0 ? 1 : 0);
					summary[CManaPool::Color::Red  ] += (manaCost.GetCost(CManaCost::Color::Red)   > 0 ? 1 : 0);
					summary[CManaPool::Color::Green] += (manaCost.GetCost(CManaCost::Color::Green) > 0 ? 1 : 0);
					summary[CManaPool::Color::White] += (manaCost.GetCost(CManaCost::Color::White) > 0 ? 1 : 0);
					summary[CManaPool::Color::Colorless] += (manaCost.GetCost(CManaCost::Color::Generic)  > 0 ? 1 : 0);
				}

				if (summary[CManaPool::Color::Black] > summary[prominentColor])
					prominentColor = CManaPool::Color::Black;

				if (summary[CManaPool::Color::Blue]  > summary[prominentColor])
					prominentColor = CManaPool::Color::Blue;

				if (summary[CManaPool::Color::Red]   > summary[prominentColor])
					prominentColor = CManaPool::Color::Red;

				if (summary[CManaPool::Color::Green] > summary[prominentColor])
					prominentColor = CManaPool::Color::Green;

				if (summary[CManaPool::Color::White] > summary[prominentColor])
					prominentColor = CManaPool::Color::White;

				if (summary[CManaPool::Color::Colorless] > summary[prominentColor])
					prominentColor = CManaPool::Color::Colorless;
			}
		}

		if (prominentColor == CManaPool::Color::Colorless)
		{
			int nMaxCount = 0;
			for (std::map<CManaPool::Color, int>::iterator it = summary.begin(); it != summary.end(); ++it)
				if ((it->first != CManaPool::Color::Colorless) &&
					(it->second > nMaxCount))
				{
					prominentColor = it->first;
					nMaxCount	   = it->second;
				}
		}
	}

};

/*

	CCountedPtrContainer < CCard >
		protected
	CCardContainerBase < CCountedPtrContainer >

	CCountedCardContainer

*/
class CCountedCardContainer							// No state support, reference counted
	: public CCardContainerBase<CCountedPtrContainer>
{
};

/*

	CCountedPtrContainer < CCard >
		protected
	CCardContainerBase < CCountedPtrContainer >

	CCountedCardContainer    CStateSupport

	CCountedPtrContainer_ < CCard, CCountedCardContainer >

	CCountedCardContainer_

*/
class CCountedCardContainer_						// State support, reference counted
	: public CCountedPtrContainer_<CCard, CCountedCardContainer>
{
public:
	template <class C>
	CCountedCardContainer_& operator=(const C& cardContainer)
	{
		RemoveAll();

		int nCount = cardContainer.GetSize();
		for (int i = 0; i < nCount; ++i)
			Add(cardContainer.GetAt(i));

		return *this;
	}	
};
