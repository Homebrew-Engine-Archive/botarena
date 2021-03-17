#pragma once

class CCountedCardContainer;

// TODO: convert to modifiers

class CORE_EXPORT CDrawCardCommon
{
public:
															// Returns: TRUE -> Draw successful; FALSE -> Not enough cards in Library
	static BOOL ResolveDrawCards(CPlayer* pPlayer,			// Draw from this player's library
									CPlayer* pByPlayer,		// Draw to this player's hand (also the caster)
									int nDrawCount,
									MoveType discardMoveType = MoveType::Discard,
									int nDiscardCount = 0,
									BOOL bFromDrawsOnly = FALSE,
									ZoneId discardToZone = ZoneId::Null,
									BOOL bToOwnersZone = TRUE,
									CardPlacement discardToPlacement = CardPlacement::NotApplicable,	// If TopOrBottom, no action will be performed but the selected cards will be put in pDiscardedCards
									BOOL bTapped = FALSE,
									CCountedCardContainer* pDiscardedCards = NULL);

	static BOOL ResolveRevealZone(CPlayer* pPlayer,		// This player's library
									CPlayer* pByPlayer,
									int nRevealCount,
									BOOL bRevealCardsToOthers = FALSE,
									BOOL bReorder = FALSE,
									ZoneId reorderToZone = ZoneId::Library,					// Require bReorder to work
									CardPlacement reorderToZonePlacement = CardPlacement::Top, // Require bReorder to work
									CCountedCardContainer* pRevealedCards = NULL,
									MaximumValue nMaxSelectionCount = MaximumValue(0),			// put this many revealed cards into the (pPlayer)'s zone (supports SpecialNumber::Any)
									MinimumValue nMinSelectionCount = MinimumValue(1),			// supports SpecialNumber::All
									ZoneId fromZoneId = ZoneId::Library,
									ZoneId selectToZone = ZoneId::Hand,
									CardPlacement selectToZonePlacement = CardPlacement::NotApplicable,
									const CCardFilter* pSelectionCardFilter = NULL,
									BOOL bRevealOnlySelected = FALSE);			// require bRevealCardsToOthers set to TRUE
};

class CORE_EXPORT CDiscardCardCommon
{
public:
	static BOOL ResolveDiscardCards(CPlayer* pDiscarder,
									CPlayer* pPicker,						// NULL -> Random (note: if discarding a sub-set of cards at random from hand or library, usually you need to show the entire hand or library before doing the discards)
									CPlayer* pCaster,
									int nDiscardCount,						// SpecialNumber::Any -> All cards specified by the card filter (pPicker ignored)
									MoveType discardMoveType,
									const CCountedCardContainer& cards,
									BOOL bRevealCardsBeforeDiscard = FALSE,	// Applicable only if picker is the discarder
									const CCardFilter* pCardFilter = NULL,	// NULL -> any card
									ZoneId toZoneId = ZoneId::Graveyard,
									BOOL bToOwnersZone = TRUE,
									CardPlacement discardToPlacement = CardPlacement::Top,	// If TopOrBottom, no action will be performed but the selected cards will be put in pDiscardedCards
									BOOL bDiscarderOrder = TRUE,							// otherwise caster order cards
									BOOL bTapped = FALSE,
									CCountedCardContainer* pDiscardedCards = NULL);


	static BOOL ResolveDiscardCards(CPlayer* pDiscarder,
									CPlayer* pPicker,						// NULL -> Random (note: if discarding a sub-set of cards at random from hand or library, usually you need to show the entire hand or library before doing the discards)
									CPlayer* pCaster,
									int nDiscardCount,						// SpecialNumber::Any -> All cards specified by the card filter (pPicker ignored)
									MoveType discardMoveType,
									ZoneId fromZoneId = ZoneId::Hand,
									BOOL bRevealCardsBeforeDiscard = FALSE,	// Applicable only if picker is the discarder
									const CCardFilter* pCardFilter = NULL,	// NULL -> any card
									ZoneId toZoneId = ZoneId::Graveyard,
									BOOL bToOwnersZone = TRUE,
									CardPlacement discardToPlacement = CardPlacement::Top,	// If TopOrBottom, no action will be performed but the selected cards will be put in pDiscardedCards
									BOOL bDiscarderOrder = TRUE,							// otherwise caster order cards
									BOOL bTapped = FALSE,
									CCountedCardContainer* pDiscardedCards = NULL);

	static BOOL ResolveDiscardAll(CPlayer* pDiscarder,
									CPlayer* pCaster,
									MoveType discardMoveType,
									ZoneId toZoneId = ZoneId::Graveyard,
									BOOL bToOwnersZone = TRUE,
									CardPlacement discardToPlacement = CardPlacement::Top,	// If TopOrBottom, no action will be performed but the selected cards will be put in pDiscardedCards
									BOOL bDiscarderOrder = TRUE,							// otherwise caster order cards
									BOOL bTapped = FALSE,
									CCountedCardContainer* pDiscardedCards = NULL);
									
	static BOOL ResolveRevealHand(CPlayer* pRevealPlayer,
									CPlayer* pRevealToPlayer,
									CPlayer* pCaster);
};

class CORE_EXPORT CSearchCardCommon
{
public:
	static BOOL ResolveSearchCards(CPlayer* pPlayer,						// Search this player's zone
									MinimumValue nMinSearchCount,
									MaximumValue nMaxSearchCount,
									CPlayer* pByPlayer,						// To this player's zone
									ZoneId fromZoneId = ZoneId::Library,	// Can be combinations of library and graveyard
									const CCardFilter* pCardFilter = NULL,	// NULL -> any card
									ZoneId toZoneId = ZoneId::Hand,
									BOOL bToOwnersZone = FALSE,
									CardPlacement discardToPlacement = CardPlacement::Top,	// If TopOrBottom, no action will be performed but the selected cards will be put in pSelectedCards
									BOOL bTapped = FALSE,
									BOOL bRevealCardsToOthers = TRUE,
									BOOL bRemoveRemainingCardsFromGame = FALSE,
									CCountedCardContainer* pSelectedCards = NULL);
};

//____________________________________________________________________________
//
