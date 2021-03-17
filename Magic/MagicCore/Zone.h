#pragma once

class CPlayer;
class CNonStackAbilityAction;

//____________________________________________________________________________
//
class CORE_EXPORT CZone
	: private CCountedCardContainer_
{
	friend class CCard;
	friend class CManaProductionAbility;
public:
	// Event Sources

	// OnCardMoved(CZone* pFromZone, CZone* pToZone, CCard* pCard, CPlayer* pByPlayer)
	CardMovementEventSource* GetCardMovedEventSource() const			{ return m_cpCardMovedEventSource.GetPointer(); }

	// OnCardMoving(CZone* pFromZone, CZone* pToZone, CCard* pCard, CPlayer* pByPlayer)
	CardMovementEventSource* GetCardMovingEventSource() const			{ return m_cpCardMovingEventSource.GetPointer(); }

	// OnCardOrientationMoved(CCard* pCard, Orientation fromOrientation, Orientation toOrientation)
	CardOrientationEventSource* GetCardOrientationEventSource() const	{ return m_cpCardOrientationEventSource.GetPointer(); }

	// OnCardTappedForMana(const CManaProductionAbilityAction* pAction)
	CardTapForManaEventSource* GetCardTapForManaEventSource() const		{ return m_cpCardTapForManaEventSource.GetPointer(); }

	// OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
	CardTypeEventSource* GetCardTypeEventSource() const					{ return m_cpCardTypeEventSource.GetPointer(); }

	// OnCardEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount)
	CardEnchantCountEventSource* GetCardEnchantCountEventSource() const { return m_cpCardEnchantCountEventSource.GetPointer(); }

	// OnCardEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard)
	CardEquippedEventSource* GetCardEquippedEventSource() const { return m_cpCardEquippedEventSource.GetPointer(); }

	// OnCardIsAlsoAChanged(CCard* pCard, CCard* pFromIsAlsoA, CCard* pToIsAlsoA)
	CardIsAlsoAEventSource* GetIsAlsoAEventSource() const				{ return m_cpCardIsAlsoAEventSource.GetPointer(); }

	static BOOL HasOrdering(ZoneId zoneId);
	static BOOL IsBadCardMovement(const CPlayer* pByPlayer, const CZone* pMoveFromZone, const CZone* pMoveToZone);
	static BOOL IsBadCardMovement(ZoneId fromZone, ZoneId toZone);
	static BOOL IsSamePhysicalZone(const CZone* pZone1, const CZone* pZone2);

	CZone(ZoneId zoneId,
		  BOOL bVisibleToOwner,
		  BOOL bVisibleToOthers,
		  BOOL bHasTapStance,
		  CPlayer* pPlayer);
	virtual ~CZone() {}

	// Zone properties

	CGame* GetGame() const										{ return m_pGame; }

	ZoneId GetZoneId() const									{ return m_ZoneId; }
	CString GetZoneName() const									{ return m_strZoneName; }

	CPlayer* GetPlayer() const									{ return m_pPlayer; }

	BOOL IsVisibleToOwner()	const								{ return m_bVisibleToOwner; }
	void SetVisibleToOwner(BOOL bVisible)						{ m_bVisibleToOwner = bVisible; }

	BOOL IsVisibleToOthers() const;
	void SetVisibleToOthers(BOOL bVisible)						{ m_bVisibleToOthers = bVisible; }

	BOOL IsVisibleTo(const CPlayer* pPlayer) const;

	BOOL HasOrdering() const									{ return m_bHasOrdering; }
	BOOL HasTapStance() const									{ return m_bHasTapStance; }

	// Card container operations

	int GetSize() const											{ return __super::GetSize(); }
	CCard* GetAt(int nIndex) const								{ return __super::GetAt(nIndex); }
	CCard* GetTopCard() const									{ return __super::GetTopCard(); }
	BOOL HasCard(const CCard* pCard) const						{ return __super::HasCard(pCard); }
	int FindCardIndex(const CCard* pCard) const					{ return __super::FindIndex(pCard); }
	void GetCardColorSummary(std::map<CManaPool::Color, int>& summary,
							 CManaPool::Color& prominentColor,
							 bool bFine) const					{ return __super::GetCardColorSummary(summary, prominentColor, bFine); }
	const CCountedCardContainer& GetCardContainer() const		{ return *this; }

	void RemoveCard(CCard* pCard)								{ __super::Remove(pCard); }
	void RemoveAt(int nIndex)									{ __super::RemoveAt(nIndex); }
	void RemoveTopCard()										{ __super::RemoveTopCard(); }
	OVERRIDE(void, Shuffle)();
	void ReorderCards(const CCountedCardContainer& cards, 
					  CardPlacement placement)					{ __super::ReorderCards(cards, placement); }

	BOOL AddCard(CCard* pCard, const CPlayer* pByPlayer = NULL, MoveType moveType = MoveType::Others, CardPlacement placement = CardPlacement::Top, BOOL bTapped = FALSE);
	void AddCards(const CCountedCardContainer& cards, const CPlayer* pByPlayer = NULL, MoveType moveType = MoveType::Others, CardPlacement placement = CardPlacement::Top, BOOL bTapped = FALSE);

protected:
	void OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation);
	void OnCardTappedForMana(const CManaProductionAbilityAction* pAction, BOOL bResult);
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);
	void OnCardEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount);	
	void OnCardIsAlsoAChanged(CCard* pCard, CCard* pFromIsAlsoA, CCard* pToIsAlsoA);

	void FixCardStatus(CCard* pCard, BOOL bTapped);
	void OnAddedCard(CCard* pCard, CZone* pFromZone, const CPlayer* pByPlayer, MoveType moveType,
					 const CCountedPtrContainer<CardMovementEventSource::Listener>& firedListeners);
	void OnRemovedCard(CCard* pCard, CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType);

	void OnAddingCard(CCard* pCard, CZone* pFromZone, const CPlayer* pByPlayer, MoveType moveType,
					 const CCountedPtrContainer<CardMovementEventSource::Listener>& firedListeners);
	void OnRemovingCard(CCard* pCard, CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType);

	CGame*		m_pGame;
	ZoneId		m_ZoneId;
	CPlayer*	m_pPlayer;
	CString		m_strZoneName;
	BOOL		m_bHasOrdering;

	// State managed
	BOOL_	m_bVisibleToOwner;
	BOOL_	m_bVisibleToOthers;
	BOOL_	m_bHasTapStance;

	counted_ptr<CardMovementEventSource>	m_cpCardMovedEventSource;
	counted_ptr<CardMovementEventSource>	m_cpCardMovingEventSource;
	counted_ptr<CardOrientationEventSource>	m_cpCardOrientationEventSource;
	counted_ptr<CardTapForManaEventSource>	m_cpCardTapForManaEventSource;
	counted_ptr<CardTypeEventSource>		m_cpCardTypeEventSource;
	counted_ptr<CardEnchantCountEventSource> m_cpCardEnchantCountEventSource;
	counted_ptr<CardEquippedEventSource>	m_cpCardEquippedEventSource;
	counted_ptr<CardIsAlsoAEventSource>		m_cpCardIsAlsoAEventSource;

	ListenerPtr<COrientation::Listener>		m_cpOListener;	// Listen to orientation events
};

//____________________________________________________________________________
//
class CORE_EXPORT CZoneContainer
	: public CPtrContainer<CZone>
{
public:
	CZone* GetZoneById(ZoneId zoneId) const;
};
