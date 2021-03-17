
#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredDrawCardAbility
	: public CTriggeredAbility<>
{
public:
	void SetDrawCount(int nDrawCount) { m_nDrawCount = nDrawCount; }	// Default: 1
	int GetDrawCount() const { return m_nDrawCount; }

	void SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
		ZoneId discardToZone = ZoneId::Graveyard, BOOL bDiscardToOwner = TRUE,
		CardPlacement discardToPlacement = CardPlacement::Top);

protected:
	CTriggeredDrawCardAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nDrawCount); }
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	int		m_nDrawCount;

	int		m_nDiscardCount;
	BOOL	m_bFromDrawsOnly;
	ZoneId	m_DiscardToZone;
	BOOL	m_bDiscardToOwner;
	MoveType	m_DiscardMoveType;
	CardPlacement	m_DiscardToPlacement;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer_			m_DiscardedCards;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredRevealLibraryAbility 
	: public CTriggeredAbility<>
{
public:
	void SetRevealCount(int nRevealCount)		{ m_nRevealCount = nRevealCount; }		// Default: 1
	void SetRevealCardsToOthers(BOOL bReveal)	{ m_bRevealCardsToOthers = bReveal; }	// Default: FALSE
	void SetReorder(BOOL bReorder,
		ZoneId reorderToZone = ZoneId::Library,
		CardPlacement reorderToZonePlacement = CardPlacement::Top)				
	{ 
		m_bReorder = bReorder; 
		m_ReorderToZone = reorderToZone;
		m_ReorderToZonePlacement = reorderToZonePlacement;
	}				// Default: TRUE

protected:
	CTriggeredRevealLibraryAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nRevealCount); }
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	int		m_nRevealCount;
	BOOL	m_bRevealCardsToOthers;
	BOOL	m_bReorder;
	ZoneId	m_ReorderToZone;
	CardPlacement m_ReorderToZonePlacement;
};

//____________________________________________________________________________
//
struct _CTriggeredRevealHandAbility_TriggerContextType
{
	_CTriggeredRevealHandAbility_TriggerContextType()
		: m_pRevealTo(NULL)
	{}

	bool operator==(const _CTriggeredRevealHandAbility_TriggerContextType& rhs) const
	{
		return m_pRevealTo == rhs.m_pRevealTo;
	}

	CPlayer* m_pRevealTo; // Default: NULL -> all players
};

class CORE_EXPORT CTriggeredRevealHandAbility 
	: public CTriggeredAbility<_CTriggeredRevealHandAbility_TriggerContextType>
{
protected:
	CTriggeredRevealHandAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredSearchLibraryAbility 
	: public CTriggeredAbility<>
{
public:
	void SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount)		{ m_nMaxSearchCount = nMaxSearchCount; m_nMinSearchCount = nMinSearchCount; }		// Default: 1
	void SetRevealCardsToOthers(BOOL bReveal)	{ m_bRevealCardsToOthers = bReveal; }	// Default: TRUE

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

	void SetToZone(ZoneId toZoneId) { m_ToZoneId = toZoneId; } // Default: hand
	void SetToOwnersZone(BOOL bOwnersZone) { m_bToOwners = bOwnersZone; } // Default: FALSE (to caster's zone)
	void SetPlacement(CardPlacement cardPlacement) { m_CardPlacement = cardPlacement; } // Default: top

	void SetTapped(BOOL bTapped) { m_bTapped = bTapped; } // Default: false

protected:
	CTriggeredSearchLibraryAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(GET_INTEGER(m_nMaxSearchCount), GET_INTEGER(m_nMinSearchCount)); }
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	MaximumValue	m_nMaxSearchCount;
	MinimumValue	m_nMinSearchCount;
	BOOL	m_bRevealCardsToOthers;
	CCardFilterHelper m_CardFilterHelper;
	CString m_strSearchText;
	ZoneId	m_ToZoneId;
	BOOL	m_bTapped;
	BOOL m_bToOwners;
	CardPlacement m_CardPlacement;
};

//____________________________________________________________________________
//
struct _CTriggeredDiscardCardAbility_TriggerContextType
{
	_CTriggeredDiscardCardAbility_TriggerContextType()
		: m_pPicker(NULL)					// NULL -> random 
		, m_bPickerIsTriggeredPlayer(TRUE) // Default: true, if false -> use m_pPicker
	{}

	int m_nDiscardCount;
	CPlayer* m_pPicker;
	BOOL m_bPickerIsTriggeredPlayer;

	bool operator==(const _CTriggeredDiscardCardAbility_TriggerContextType& rhs) const
	{
		return m_nDiscardCount == rhs.m_nDiscardCount && m_pPicker == rhs.m_pPicker;
	}
};

class CORE_EXPORT CTriggeredDiscardCardAbility
	: public CTriggeredAbility<_CTriggeredDiscardCardAbility_TriggerContextType>
{
public:
	void SetDiscardCount(int nDiscardCount) { m_nDiscardCount = nDiscardCount; }	// Default: 1, supports SpecialNumber::All
	int GetDiscardCount() const { return m_nDiscardCount; }

	void SetDiscardMoveType(MoveType discardMoveType) { m_DiscardMoveType = discardMoveType; } // Default: MoveType::Discard

	void SetToZone(ZoneId zoneId) 
	{
		RemoveAbilityTag(AbilityTag(ZoneId::Hand, m_ToZone));
			
		m_ToZone = zoneId; 

		AddAbilityTag(AbilityTag(ZoneId::Hand, m_ToZone));
	} // Default: graveyard

	void SetToOwnersZone(BOOL bOwnersZone) { m_bToOwners = bOwnersZone; } // Default: TRUE
	void SetPlacement(CardPlacement cardPlacement) { m_CardPlacement = cardPlacement; } // Default: top
	void SetPickerIsTriggeredPlayer(BOOL bPlayer) { m_bPickerIsTriggeredPlayer = bPlayer; } // Default: TRUE

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }




protected:
	CTriggeredDiscardCardAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_nDiscardCount = m_nDiscardCount;
		triggerContext.m_bPickerIsTriggeredPlayer = m_bPickerIsTriggeredPlayer;

		return triggerContext; 
	}

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	int	m_nDiscardCount;
	MoveType m_DiscardMoveType;
	CCardFilterHelper m_CardFilterHelper;
	ZoneId m_ToZone;
	BOOL m_bToOwners;
	CardPlacement m_CardPlacement;
	BOOL m_bPickerIsTriggeredPlayer;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredDiscardCardAbility2	// Ref: Teferi's Puzzle Box
	: public CTriggeredDiscardCardAbility
{
protected:
	CTriggeredDiscardCardAbility2(CCard* pCard);
	
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};

//____________________________________________________________________________
//
struct _CTriggeredModifyLifeAbility_TriggerContextType
{
	_CTriggeredModifyLifeAbility_TriggerContextType()
		: m_pCreature(NULL)
	{}

	CCreatureCard* m_pCreature;
	CLifeModifier m_LifeModifier;

	bool operator==(const _CTriggeredModifyLifeAbility_TriggerContextType& rhs) const
	{
		return m_pCreature == rhs.m_pCreature 
			&& m_LifeModifier.Equals(rhs.m_LifeModifier);
	}
};

class CORE_EXPORT CTriggeredModifyLifeAbility
	: public CTriggeredAbility<_CTriggeredModifyLifeAbility_TriggerContextType>
{
public:
	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }

	void SetToCreature(CCreatureCard* pCreature) { m_pToCreature = pCreature; }

protected:
	CTriggeredModifyLifeAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_LifeModifier = m_LifeModifier;
		triggerContext.m_pCreature = m_pToCreature;
		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	CLifeModifier	m_LifeModifier;
	CCreatureCard*	m_pToCreature;
};

//____________________________________________________________________________
//
struct _CTriggeredModifyCreatureAbility_TriggerContextType
{
	_CTriggeredModifyCreatureAbility_TriggerContextType()
		: m_pCreature(NULL)
	{}

	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;
	CCreatureKeywordModifier	m_CreatureKeywordModifier;
	CCardKeywordModifier		m_CardKeywordModifier;
	CCreatureCard* m_pCreature;

	bool operator==(const _CTriggeredModifyCreatureAbility_TriggerContextType& rhs) const
	{
		return m_pCreature == rhs.m_pCreature 
			&& m_LifeModifier.Equals(rhs.m_LifeModifier)
			&& m_PowerModifier.Equals(rhs.m_PowerModifier)
			&& m_CreatureKeywordModifier.Equals(rhs.m_CreatureKeywordModifier)
			&& m_CardKeywordModifier.Equals(rhs.m_CardKeywordModifier);
	}
};

// Deprecated - use CTriggeredModifyCardAbility
class CORE_EXPORT CTriggeredModifyCreatureAbility
	: public CTriggeredAbility<_CTriggeredModifyCreatureAbility_TriggerContextType>
{
public:
	struct ModifyCreatureOption
	{
		enum Enum
		{
			ModifyTriggeredPlayersCreatures = 1,	// Use m_CardFilterHelper
			ModifyAllPlayersCreatures,				// Use m_CardFilterHelper
			ModifySingleCreature					// Use TriggerContextType::m_pCreature, Default
		};

		DEFINE_DISTINCT_ENUM_OPS(ModifyCreatureOption);
	};

	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }

	CPowerModifier& GetPowerModifier() { return m_PowerModifier; }
	const CPowerModifier& GetPowerModifier() const { return m_PowerModifier; }

	CCreatureKeywordModifier& GetCreatureKeywordMod() { return m_CreatureKeywordModifier; }
	const CCreatureKeywordModifier& GetCreatureKeywordMod() const { return m_CreatureKeywordModifier; }
	
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }
	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all creatures
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

	void SetModifyCreatureOption(ModifyCreatureOption creatureOption) { m_CreatureOption = creatureOption; } // Default: to m_pToCreature

	void SetToCreature(CCreatureCard* pCreature) { m_pToCreature = pCreature; } // Default: this card if a creature card

protected:
	CTriggeredModifyCreatureAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_LifeModifier = m_LifeModifier;
		triggerContext.m_PowerModifier = m_PowerModifier;
		triggerContext.m_CreatureKeywordModifier = m_CreatureKeywordModifier;
		triggerContext.m_CardKeywordModifier = m_CardKeywordModifier;
		triggerContext.m_pCreature = m_pToCreature;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;
	CCreatureKeywordModifier	m_CreatureKeywordModifier;
	CCardKeywordModifier		m_CardKeywordModifier;

	CCardFilterHelper m_CardFilterHelper;
	ModifyCreatureOption m_CreatureOption;
	CCreatureCard* m_pToCreature;
};


//____________________________________________________________________________
//
struct _CTriggeredModifyCardAbility_TriggerContextType
{
	_CTriggeredModifyCardAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	bool operator==(const _CTriggeredModifyCardAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard 
			&& m_CreatureModifiers.Equals(rhs.m_CreatureModifiers)
			&& m_CardModifiers.Equals(rhs.m_CardModifiers);
	}

	CCreatureModifiers m_CreatureModifiers;
	CCardModifiers m_CardModifiers;
	CCard* m_pCard;
};

class CORE_EXPORT CTriggeredModifyCardAbility
	: public CTriggeredAbility<_CTriggeredModifyCardAbility_TriggerContextType>
{
public:
	struct ModifyCardOption
	{
		enum Enum
		{
			ModifyTriggeredPlayersCards = 1,	// Use m_CardFilterHelper
			ModifyAllPlayersCards,				// Use m_CardFilterHelper
			ModifySingleCard					// Use TriggerContextType::m_pCard, Default
		};

		DEFINE_DISTINCT_ENUM_OPS(ModifyCardOption);
	};

	CCreatureModifiers& GetCreatureModifiers() { return m_CreatureModifiers; }
	const CCreatureModifiers& GetCreatureModifiers() const { return m_CreatureModifiers; }
	
	CCardModifiers& GetCardModifiers() { return m_CardModifiers; }
	const CCardModifiers& GetCardModifiers() const { return m_CardModifiers; }

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

	void SetModifyCardOption(ModifyCardOption cardOption) { m_CardOption = cardOption; } // Default: to m_pToCard

	void SetToCard(CCard* pCard) { m_pToCard = pCard; } // Default: this card

protected:
	CTriggeredModifyCardAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		m_CreatureModifiers.Clone(triggerContext.m_CreatureModifiers);
		m_CardModifiers.Clone(triggerContext.m_CardModifiers);
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	CCreatureModifiers m_CreatureModifiers;
	CCardModifiers m_CardModifiers;

	CCardFilterHelper m_CardFilterHelper;
	ModifyCardOption m_CardOption;
	CCard* m_pToCard;
};

//____________________________________________________________________________
//
struct _CTriggeredMoveCardAbility_TriggerContextType
{
	_CTriggeredMoveCardAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	CMoveCardModifier m_MoveCardModifier;
	CCard* m_pCard;

	bool operator==(const _CTriggeredMoveCardAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard
			&& m_MoveCardModifier.Equals(rhs.m_MoveCardModifier);
	}
};

class CORE_EXPORT CTriggeredMoveCardAbility 
	: public CTriggeredAbility<_CTriggeredMoveCardAbility_TriggerContextType>
{
public:	
	struct MoveCardOption
	{
		enum Enum
		{
			MoveMultipleCards = 1,	// Use m_CardFilterHelper
			MoveSingleCard			// Use TriggerContextType::m_pCard, default
		};

		DEFINE_DISTINCT_ENUM_OPS(MoveCardOption);
	};

	CMoveCardModifier& GetMoveCardModifier() { return m_MoveCardModifier; }	// Default: move card to owner's graveyard
	const CMoveCardModifier& GetMoveCardModifier() const { return m_MoveCardModifier; }

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

	void SetMoveCardOption(MoveCardOption moveCardOption) { m_MoveCardOption = moveCardOption; }

	void SetToCard(CCard* pCard) { m_pToCard = pCard; }	// Default: this card

	void SetScheduledNode(NodeId scheduledNode) { m_ScheduledNode = scheduledNode; } // Default: NodeId::Null -> at resolution time

protected:
	CTriggeredMoveCardAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_MoveCardModifier = m_MoveCardModifier;
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	CMoveCardModifier m_MoveCardModifier;
	CCardFilterHelper m_CardFilterHelper;
	MoveCardOption	m_MoveCardOption;
	CCard* m_pToCard;
	
	NodeId m_ScheduledNode;
};

//____________________________________________________________________________
//
struct _CTriggeredTapCardAbility_TriggerContextType
{
	_CTriggeredTapCardAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	bool operator==(const _CTriggeredTapCardAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
	}

	CCard* m_pCard;
	BOOL m_pTapped;
};

class CORE_EXPORT CTriggeredTapCardAbility 
	: public CTriggeredAbility<_CTriggeredTapCardAbility_TriggerContextType>
{
public:	
	struct TapCardOption
	{
		enum Enum
		{
			TapMultipleCards = 1,	// Use m_CardFilterHelper
			UntapMultipleCards,		// "
			TapSingleCard,			// Use TriggerContextType::m_pCard, default
			UntapSingleCard,		// "
			TapUntapSingleCard
		};

		DEFINE_DISTINCT_ENUM_OPS(TapCardOption);
	};

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

	void SetTapCardOption(TapCardOption tapCardOption) { m_TapCardOption = tapCardOption; }

	void SetToCard(CCard* pCard) { m_pToCard = pCard; }	// Default: this card

protected:
	CTriggeredTapCardAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_pCard = m_pToCard;
		triggerContext.m_pTapped = m_pIsTapped;
		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	CCardFilterHelper m_CardFilterHelper;
	TapCardOption	m_TapCardOption;
	BOOL m_pIsTapped;
	CCard* m_pToCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredPlayerEffectAbility 
	: public CTriggeredAbility<>
{
public:
	void SetPlayerEffect(PlayerEffectType playerEffect, BOOL bThisTurnOnly, int nParam = 0);
	void SetRemoveEffectWhenLeaveInplay(BOOL bRemove) { m_bRemoveEffectWhenLeaveInplay = bRemove; } // default: FALSE

protected:
	typedef CValueContainer<std::pair<CPlayer*, int>> CChangedList;

	class CORE_EXPORT CChangedList_
		: public CValueContainerBase_<std::pair<CPlayer*, int>, CChangedList>
	{
	public:
		CChangedList_()
		{}

		virtual ~CChangedList_()
		{
			RemoveSavedState();
		}

	private:
		PRIVATE_OVERRIDE(void, Push)(StateStack& stateStack)
		{
			int nCount = GetSize();
			for (int i = nCount - 1; i >= 0; --i)
			{
				const std::pair<CPlayer*, int>& entry = GetAt(i);

				stateStack.AddTail((PVOID)entry.first);
				stateStack.AddTail((PVOID)entry.second);
			}

			stateStack.AddTail((PVOID)nCount);
		}

		PRIVATE_OVERRIDE(void, Pop)()
		{
			CChangedList::RemoveAllImpl();

			int nCount = (int)m_Stack.RemoveTail();
			for (int i = 0; i < nCount; ++i)
			{
				std::pair<CPlayer*, int> entry;
				
				entry.second = (int)m_Stack.RemoveTail();
				entry.first = (CPlayer*)m_Stack.RemoveTail();

				CChangedList::AddImpl(entry);
			}
		}

		PRIVATE_OVERRIDE(void, Peek)()
		{
			CChangedList::RemoveAllImpl();

			StateStack::Position pos = m_Stack.GetTailPosition();

			int nCount = (int)m_Stack.GetPrev(pos);
			for (int i = 0; i < nCount; ++i)
			{
				std::pair<CPlayer*, int> entry;
				
				entry.second = (int)m_Stack.GetPrev(pos);
				entry.first = (CPlayer*)m_Stack.GetPrev(pos);

				CChangedList::AddImpl(entry);
			}
		}
	};

	CTriggeredPlayerEffectAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nParam); }
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	PlayerEffectType m_PlayerEffect;
	BOOL m_bThisTurnOnly;
	int m_nParam;

	BOOL m_bRemoveEffectWhenLeaveInplay;
	CWhenSelfInplay m_WhenInplay;
	CChangedList_ m_ChangedList;
};

//____________________________________________________________________________
//
// Sengir Autocrat: When Sengir Autocrat comes into play, put three 0/1 Serf creatures tokens into play. When Sengir Autocrat leaves play, remove all Serf tokens from play.
//
class CORE_EXPORT CTriggeredCreateTokenAbility
	: public CTriggeredAbility<>
{
public:
	void SetCreateTokenOption(BOOL bCreate,  // Note: if FALSE, all in-play tokens will be destroyed, not just those controlled by the triggered player
					 		  LPCTSTR strTokenName, 
							  UINT uID,
							  int nTokenCount); // Only supports SpecialNumber::All for destructions

	void SetCreationNode(NodeId nodeId) { m_CreationNodeId = nodeId; } // Default: NodeId::Null -> at resolution

	void FlagTokens(BOOL bFlag,								// if set, tokens will be flagged by CardFlag::AbilityFlag and the ability's instance ID.
					BOOL bKeepFlagUntilEndOfTurn = FALSE);	// if set, flags are cleared at end of turn. Normally flags are kept indefinitely. This is different from CTokenProductionSpell's use of FlagTokens

protected:
	CTriggeredCreateTokenAbility(CCard* pCard);
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nTokenCount); }

	BOOL	m_bCreate;
	int		m_nTokenCount;
	LPCTSTR	m_strTokenName;
	UINT	m_uID;
	NodeId	m_CreationNodeId;
	CCardFlagModifier	m_CardFlagModifier;
};

//____________________________________________________________________________
//
// Primal Clay: Primal Clay comes into play as your choice of a 3/3 artifact creature; a 2/2 artifact creature with flying; or a 1/6 Wall artifact creature.
//
class CORE_EXPORT CTriggeredMorphCreatureAbility
	: public CTriggeredAbility<>
{
public:
	void AddMorphToType(LPCTSTR strSelectionText, Power nPower, Life nToughness,
						const CreatureType& creatureTypeToAdd, CreatureKeyword creatureKeywordToAdd);

protected:
	CTriggeredMorphCreatureAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	struct MorphEntry
	{
		CString		 m_strSelectionText;
		Power		 m_nPower;
		Life		 m_nToughness;
		CreatureType m_CreatureTypeToAdd;
		CreatureKeyword m_CreatureKeywordToAdd;
	};

	CreatureKeyword			m_AllCreatureKeywordToAdd;
	std::vector<MorphEntry>	m_MorphEntries;
};

//____________________________________________________________________________
//
// Fertile Ground: Whenever enchanted land is tapped for mana, its controller adds one mana of any color to his or her mana pool.
//
class CORE_EXPORT CTriggeredProdManaAbility
	: public CTriggeredAbility<>
{
public:
	void SetManaCount(int nManaCount) { m_nManaCount = nManaCount; }	// Default 1

protected:
	CTriggeredProdManaAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	int m_nManaCount;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredProdManaAbilityX
	: public CTriggeredAbility<>
{
protected:
	CTriggeredProdManaAbilityX(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	void OnManaSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ManaSelection;
};

//____________________________________________________________________________
//
// Battle of Wits: At the beginning of your upkeep, if you have 200 or more cards in your library, you win the game
//
class CORE_EXPORT CTriggeredLoseGameAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredLoseGameAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};

//____________________________________________________________________________
//
// Pithing Needle: As <this> comes into play, name a card. Activated abilities of sources with the chosen name can't be played unless they're mana abilities.
//
class CORE_EXPORT CTriggeredPlayerEffectAbility2
	: public CTriggeredPlayerEffectAbility
{
protected:
	CTriggeredPlayerEffectAbility2(CCard* pCard);

public:
	void SetCardFilters(const CCardFilter* pRestrictionFilter, const CCardFilter* pPreferredFilter = NULL);

protected:
	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;

	const CCardFilter* m_pRestrictionFilter;	// default: all cards
	const CCardFilter* m_pPreferredFilter;		// default: same as restriction filter
	mutable std::vector<std::pair<CString, bool>> m_AvailableSelections; // card name, preferred
};

//____________________________________________________________________________
//
struct _CTriggeredMakeshiftTemporaryAbility_TriggerContextType
{
	_CTriggeredMakeshiftTemporaryAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	CMoveCardModifier m_MoveCardModifier;
	CCard* m_pCard;

	bool operator==(const _CTriggeredMakeshiftTemporaryAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard
			&& m_MoveCardModifier.Equals(rhs.m_MoveCardModifier);
	}
};

class CORE_EXPORT CTriggeredMakeshiftTemporaryAbility 
	: public CTriggeredAbility<_CTriggeredMakeshiftTemporaryAbility_TriggerContextType>
{
public:	
	struct MoveCardOption
	{
		enum Enum
		{
			MoveMultipleCards = 1,	// Use m_CardFilterHelper
			MoveSingleCard			// Use TriggerContextType::m_pCard, default
		};

		DEFINE_DISTINCT_ENUM_OPS(MoveCardOption);
	};

	CMoveCardModifier& GetMoveCardModifier() { return m_MoveCardModifier; }	// Default: move card to owner's graveyard
	const CMoveCardModifier& GetMoveCardModifier() const { return m_MoveCardModifier; }

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

	void SetMoveCardOption(MoveCardOption moveCardOption) { m_MoveCardOption = moveCardOption; }

	void SetToCard(CCard* pCard) { m_pToCard = pCard; }	// Default: this card

	void SetScheduledNode(NodeId scheduledNode) { m_ScheduledNode = scheduledNode; } // Default: NodeId::Null -> at resolution time

protected:
	CTriggeredMakeshiftTemporaryAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_MoveCardModifier = m_MoveCardModifier;
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	CMoveCardModifier m_MoveCardModifier;
	CCardFilterHelper m_CardFilterHelper;
	MoveCardOption	m_MoveCardOption;
	CCard* m_pToCard;
	
	NodeId m_ScheduledNode;
};

//____________________________________________________________________________
//
struct _CTriggeredDesecratorHagAbility_TriggerContextType
{
	_CTriggeredDesecratorHagAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	CMoveCardModifier m_MoveCardModifier;
	CCard* m_pCard;

	bool operator==(const _CTriggeredDesecratorHagAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard
			&& m_MoveCardModifier.Equals(rhs.m_MoveCardModifier);
	}
};

class CORE_EXPORT CTriggeredDesecratorHagAbility 
	: public CTriggeredAbility<_CTriggeredDesecratorHagAbility_TriggerContextType>
{
public:	
	struct MoveCardOption
	{
		enum Enum
		{
			MoveMultipleCards = 1,	// Use m_CardFilterHelper
			MoveSingleCard			// Use TriggerContextType::m_pCard, default
		};

		DEFINE_DISTINCT_ENUM_OPS(MoveCardOption);
	};

	CMoveCardModifier& GetMoveCardModifier() { return m_MoveCardModifier; }	// Default: move card to owner's graveyard
	const CMoveCardModifier& GetMoveCardModifier() const { return m_MoveCardModifier; }

	void SetMoveCardOption(MoveCardOption moveCardOption) { m_MoveCardOption = moveCardOption; }

protected:
	CTriggeredDesecratorHagAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_MoveCardModifier = m_MoveCardModifier;
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	VIRTUAL(void, GetSelectionEntries)(const CTriggeredAction* pAction, CPlayer* pPlayer, std::vector<SelectionEntry>& entries);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CMoveCardModifier m_MoveCardModifier;
	CCardFilterHelper m_CardFilterHelper;
	MoveCardOption	m_MoveCardOption;
	CCard* m_pToCard;
	
	CSelectionSupport m_SelectionSupport;	
};

//____________________________________________________________________________
//
/*
	701.30. Bolster
	701.30a "Bolster N" means "Choose a creature you control with the least toughness or tied for least toughness
	among creatures you control. Put N +1/+1 counters on that creature."
*/
struct _CTriggeredBolsterAbility_TriggerContextType
{
	_CTriggeredBolsterAbility_TriggerContextType()
		: m_pCard(NULL)
	{}
	CCardCounterModifier m_CardCounterModifier;
	CCard*				 m_pCard;

	bool operator==(const _CTriggeredBolsterAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard
			&& m_CardCounterModifier.Equals(rhs.m_CardCounterModifier);
	}
};

class CORE_EXPORT CTriggeredBolsterAbility 
	: public CTriggeredAbility<_CTriggeredBolsterAbility_TriggerContextType>

{
	public:	
			  CCardCounterModifier& GetCounterCardModifier()	   { return m_CardCounterModifier; }
		const CCardCounterModifier& GetCounterCardModifier() const { return m_CardCounterModifier; }
	protected:
		CTriggeredBolsterAbility(CCard* pCard);

		OVERRIDE(TriggerContextType, GetTriggerContext)() const 
		{ 
			TriggerContextType triggerContext;
			triggerContext.m_CardCounterModifier = m_CardCounterModifier;
			return triggerContext; 
		}

		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
		VIRTUAL(void, GetSelectionEntries)(const CTriggeredAction* pAction, CPlayer* pPlayer, std::vector<SelectionEntry>& entries);

		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

		CCardCounterModifier m_CardCounterModifier;
		CSelectionSupport	 m_SelectionSupport;	
};

//____________________________________________________________________________
//
struct _CTriggeredCounterSpellAbility_TriggerContextType
{
	_CTriggeredCounterSpellAbility_TriggerContextType()
		: m_pCard(NULL)
	{}
	
	CCard* m_pCard;

	bool operator==(const _CTriggeredCounterSpellAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
			
	}
};

class CORE_EXPORT CTriggeredCounterSpellAbility 
	: public CTriggeredAbility<_CTriggeredCounterSpellAbility_TriggerContextType>
{
public:	

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }


	void SetToCard(CCard* pCard) { m_pToCard = pCard; }	// Default: this card


protected:
	CTriggeredCounterSpellAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;		
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
		
	CCardFilterHelper m_CardFilterHelper;	
	CCard* m_pToCard;	
};

//____________________________________________________________________________
//
struct _CTriggeredGainKeywordAbility_TriggerContextType
{
	_CTriggeredGainKeywordAbility_TriggerContextType()
		: m_pCard(NULL)
	{}
	
	CCard* m_pCard;

	bool operator==(const _CTriggeredGainKeywordAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
			
	}
};

class CORE_EXPORT CTriggeredGainKeywordAbility 
	: public CTriggeredAbility<_CTriggeredGainKeywordAbility_TriggerContextType>
{
public:	

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }
	void AddCardKeywordToSelection(CardKeyword cardKeywordToAdd, BOOL bThisTurnOnly,
							    LPCTSTR strCardKeywordText);


	void SetToCard(CCard* pCard) { m_pToCard = pCard; }	// Default: this card


protected:
	CTriggeredGainKeywordAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;		
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	struct CardKeywordSelectionEntry
	{
		CardKeyword cardKeywordToAdd;
		BOOL	 bThisTurnOnly;
		CString	 strCardKeywordText;
	};

	vector<CardKeywordSelectionEntry>	m_Selection;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
		
	CCardFilterHelper m_CardFilterHelper;	
	CCard* m_pToCard;	
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredPoisonAbility
	: public CTriggeredAbility<>
{
public:
	void SetPoisonCount(int nPoisonCount) { m_nPoisonCount = nPoisonCount; }	// Default: 1
	int GetPoisonCount() const { return m_nPoisonCount; }
	void SetReplacePoisonCount(BOOL nReplace) { m_nReplace = nReplace; }	

protected:
	CTriggeredPoisonAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nPoisonCount); }
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	int	m_nPoisonCount;
	BOOL m_nReplace;
};

//____________________________________________________________________________
//
struct _CTriggeredProliferateAbility_TriggerContextType
{
	_CTriggeredProliferateAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	CCard* m_pCard;
//	CLifeModifier m_LifeModifier;

	bool operator==(const _CTriggeredProliferateAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard ;
		//	&& m_LifeModifier.Equals(rhs.m_LifeModifier);
	}
};

class CORE_EXPORT CTriggeredProliferateAbility
	: public CTriggeredAbility<_CTriggeredProliferateAbility_TriggerContextType>
{
public:
//	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
//	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }

//	void SetToCreature(CCreatureCard* pCreature) { m_pToCreature = pCreature; }

protected:
	CTriggeredProliferateAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		//triggerContext.m_LifeModifier = m_LifeModifier;
		triggerContext.m_pCard = m_pToCard;
		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;

	//CLifeModifier	m_LifeModifier;
	CCard*	m_pToCard;
	//Svector<LPCTSTR>	m_CounterNameSelection;
};

//____________________________________________________________________________
//
struct _CTriggeredDividedModifyLifeAbility_TriggerContextType
{
	_CTriggeredDividedModifyLifeAbility_TriggerContextType()
		: m_pCreature(NULL)
	{}

	CCreatureCard* m_pCreature;
	CLifeModifier m_LifeModifier;

	bool operator==(const _CTriggeredDividedModifyLifeAbility_TriggerContextType& rhs) const
	{
		return m_pCreature == rhs.m_pCreature 
			&& m_LifeModifier.Equals(rhs.m_LifeModifier);
	}
};

class CORE_EXPORT CTriggeredDividedModifyLifeAbility
	: public CTriggeredAbility<_CTriggeredDividedModifyLifeAbility_TriggerContextType>
{
public:
	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }

	void SetToCreature(CCreatureCard* pCreature) { m_pToCreature = pCreature; }

protected:
	CTriggeredDividedModifyLifeAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_LifeModifier = m_LifeModifier;
		triggerContext.m_pCreature = m_pToCreature;
		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	CLifeModifier	m_LifeModifier;
	CCreatureCard*	m_pToCreature;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredCascadeAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredCascadeAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};
//____________________________________________________________________________
//
struct _CTriggeredAllCounterSpellAbility_TriggerContextType
{
	_CTriggeredAllCounterSpellAbility_TriggerContextType()
		: m_pStackAction(NULL)
		, m_pTargetedCard(NULL)
	{}
	
	CCard* m_pTargetedCard;
	const CStackAbilityAction* m_pStackAction;

	bool operator==(const _CTriggeredAllCounterSpellAbility_TriggerContextType& rhs) const
	{
		return (m_pStackAction == rhs.m_pStackAction && m_pTargetedCard == rhs.m_pTargetedCard);
			
	}
};

class CORE_EXPORT CTriggeredAllCounterSpellAbility 
	: public CTriggeredAbility<_CTriggeredAllCounterSpellAbility_TriggerContextType>
{
public:	

	CCardFilterHelper& GetCardFilterHelper() { return m_CardFilterHelper; }	// Default: all cards
	const CCardFilterHelper& GetCardFilterHelper() const { return m_CardFilterHelper; }

protected:
	CTriggeredAllCounterSpellAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;		
		triggerContext.m_pStackAction = m_pStackAction;
		triggerContext.m_pTargetedCard = m_pTargetedCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
		
	CCardFilterHelper m_CardFilterHelper;	
	const CStackAbilityAction* m_pStackAction;	
	CCard* m_pTargetedCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredHideawayAbility
	: public CTriggeredAbility<>
{
protected:
	CTriggeredHideawayAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredFreeCastAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredFreeCastAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredSuspendCastAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredSuspendCastAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredCopyCastAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredCopyCastAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredMadnessAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredMadnessAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};
//____________________________________________________________________________
//
class CORE_EXPORT CAttackingTokenCreationAbility
	: public CTriggeredAbility<>
{
protected:
	CAttackingTokenCreationAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

public:
	void SetTokenNumber(int number) {m_nTokenCount = number;}
	void SetTokenName(LPCTSTR name) {m_pTokenName = name;}
	void SetTokenuID(UINT id)       {m_uID = id;}

protected:
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nTokenCount); }
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

protected:
	int		m_nTokenCount;
	LPCTSTR m_pTokenName;
	UINT	m_uID;

	
};
//____________________________________________________________________________
//
struct _CMoveAttackingAbility_TriggerContextType
{
	_CMoveAttackingAbility_TriggerContextType()
		: m_pCard(NULL)
	{}
	
	CCard* m_pCard;

	bool operator==(const _CMoveAttackingAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
	}
};

class CORE_EXPORT CMoveAttackingAbility
	: public  CTriggeredAbility<_CMoveAttackingAbility_TriggerContextType>
{
protected:
	CMoveAttackingAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

public:
	void SetFromZoneId(ZoneId id)       {m_fromZone = id;}

protected:
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);	
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

protected:
	ZoneId m_fromZone;
	CCard* m_pToCard;

	
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredEquipCardAbility
	: public CTriggeredAbility<>
{

protected:
	CTriggeredEquipCardAbility(CCard* pCard);
	
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredSpecialProdManaAbility
	: public CTriggeredAbility<>
{
public:
	void SetProduceRed (BOOL can_produce) { m_n_red = can_produce; }
	void SetProduceGreen (BOOL can_produce) { m_n_green = can_produce; }
	void SetProduceBlue (BOOL can_produce) { m_n_blue = can_produce; }
	void SetProduceBlack (BOOL can_produce) { m_n_black = can_produce; }
	void SetProduceWhite(BOOL can_produce) { m_n_white = can_produce; }
	void SetProduceColorless(BOOL can_produce) { m_n_colorless = can_produce; }


protected:
	CTriggeredSpecialProdManaAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	int m_nManaCount;
	BOOL m_n_colorless;
	BOOL m_n_black;
	BOOL m_n_blue;
	BOOL m_n_white;
	BOOL m_n_red;
	BOOL m_n_green;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredExchangeControlAbility
	: public CTriggeredAbility<>
{

protected:
	CTriggeredExchangeControlAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

};

//____________________________________________________________________________
//
struct _CTriggeredDoubleTargetingModifyLifeAbility_TriggerContextType
{
	_CTriggeredDoubleTargetingModifyLifeAbility_TriggerContextType()
		: m_pCreature(NULL)
	{}

	CCreatureCard* m_pCreature;
	CLifeModifier m_LifeModifier1;
	CLifeModifier m_LifeModifier2;

	bool operator==(const _CTriggeredDoubleTargetingModifyLifeAbility_TriggerContextType& rhs) const
	{
		return m_pCreature == rhs.m_pCreature 
			&& m_LifeModifier1.Equals(rhs.m_LifeModifier1)
			&& m_LifeModifier2.Equals(rhs.m_LifeModifier2);
	}
};

class CORE_EXPORT CTriggeredDoubleTargetingModifyLifeAbility
	: public CTriggeredAbility<_CTriggeredDoubleTargetingModifyLifeAbility_TriggerContextType>
{
public:
	CLifeModifier& GetLifeModifier1() { return m_LifeModifier1; }
	const CLifeModifier& GetLifeModifier1() const { return m_LifeModifier1; }
	CLifeModifier& GetLifeModifier2() { return m_LifeModifier2; }
	const CLifeModifier& GetLifeModifier2() const { return m_LifeModifier2; }

	void SetToCreature(CCreatureCard* pCreature) { m_pToCreature = pCreature; }

protected:
	CTriggeredDoubleTargetingModifyLifeAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_LifeModifier1 = m_LifeModifier1;
		triggerContext.m_LifeModifier2 = m_LifeModifier2;
		triggerContext.m_pCreature = m_pToCreature;
		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	CLifeModifier	m_LifeModifier1;
	CLifeModifier	m_LifeModifier2;
	CCreatureCard*	m_pToCreature;
};

//____________________________________________________________________________
//
struct _CTriggeredFreeCastAbility1_TriggerContextType
{
	_CTriggeredFreeCastAbility1_TriggerContextType()
		: m_pCard(NULL)
	{}

	CCard* m_pCard;

	bool operator==(const _CTriggeredFreeCastAbility1_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
	}
};
class CORE_EXPORT CTriggeredFreeCastAbility1 
	: public CTriggeredAbility<_CTriggeredFreeCastAbility1_TriggerContextType>
{
protected:
	CTriggeredFreeCastAbility1(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	CCard* m_pToCard;
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
struct _CTriggeredCopyCastAbility1_TriggerContextType
{
	_CTriggeredCopyCastAbility1_TriggerContextType()
		: m_pCard(NULL)
		 ,m_pStackAction(NULL)
	{}

	CStackAbilityAction* m_pStackAction;
	CCard* m_pCard;

	bool operator==(const _CTriggeredCopyCastAbility1_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard
			&& m_pStackAction == rhs.m_pStackAction;
	}
};
class CORE_EXPORT CTriggeredCopyCastAbility1 
	: public CTriggeredAbility<_CTriggeredCopyCastAbility1_TriggerContextType>
{
protected:
	CTriggeredCopyCastAbility1(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_pCard = m_pToCard;
		triggerContext.m_pStackAction = NULL;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	
	CCard* m_pToCard;

	bool HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredMiracleAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredMiracleAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredCipherCastAbility
	: public CTriggeredAbility<FreecastCardActionsSelection>
{
protected:
	CTriggeredCipherCastAbility(CCard* pCard);

	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
};
//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredExtraCombatAbility
	: public CTriggeredAbility<>
{
public:
	void SetAdditionalAttackCount(int nAdditionalAttackCount) { m_nAdditionalAttackCount = nAdditionalAttackCount; }	// Default: 1
	void SetUntapAttackedThisTurn(BOOL bUntapAttackedThisTurn) { m_bUntapAttackedThisTurn = bUntapAttackedThisTurn; }	// Default: FALSE
	void SetThisTurnOnly(BOOL bThisTurnOnly) { m_bThisTurnOnly = bThisTurnOnly; }	// Default: TRUE
	int GetAdditionalAttackCount() const { return m_nAdditionalAttackCount; }

protected:
	CTriggeredExtraCombatAbility(CCard* pCard);

	OVERRIDE(TriggerContextType, GetTriggerContext)() const { return TriggerContextType(m_nAdditionalAttackCount); }
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	BOOL	m_bUntapAttackedThisTurn;
	int		m_nAdditionalAttackCount;
	BOOL	m_bThisTurnOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredHellkiteChargerAbility
	: public CTriggeredAbility<>
{

protected:
	CTriggeredHellkiteChargerAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	BOOL	m_bUntapAttackedThisTurn;
	int		m_nAdditionalAttackCount;
	BOOL	m_bThisTurnOnly;
};

//____________________________________________________________________________
//