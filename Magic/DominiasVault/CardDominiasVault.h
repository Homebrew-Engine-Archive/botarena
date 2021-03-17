#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CWindseekerCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWindseekerCentaurCard);
};

//____________________________________________________________________________
//
class CJohnnyComboPlayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJohnnyComboPlayerCard);
};

//____________________________________________________________________________
//
class CUktabiKongCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUktabiKongCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPaperTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPaperTigerCard);
};

//____________________________________________________________________________
//
class CRockLobsterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRockLobsterCard);
};

//____________________________________________________________________________
//
class CScissorsLizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScissorsLizardCard);
};

//____________________________________________________________________________
//
class CBlackerLotusCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBlackerLotusCard);
};

//____________________________________________________________________________
//
class CFormOfTheSquirrelCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CFormOfTheSquirrelCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWhoWhatWhenWhereWhyCard : public CTargetChgLifeSpellCard 
{
	DECLARE_CARD_CSTOR(CWhoWhatWhenWhereWhyCard);
};

//____________________________________________________________________________
//
class CIncomingCard : public CCard 
{
	DECLARE_CARD_CSTOR(CIncomingCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CManaCryptCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CManaCryptCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CGemBazaarCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGemBazaarCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	CAbility* pAbility;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	CManaPool::Color ChooseRandomColor(void);
};

//____________________________________________________________________________
//
class CPerhapsYouveMetMyCohortCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CPerhapsYouveMetMyCohortCard);
};

//____________________________________________________________________________
//
class CDrenchTheSoilInTheirBloodCard : public CSchemeCard
{
	DECLARE_CARD_CSTOR(CDrenchTheSoilInTheirBloodCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CShichifukujinDragonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShichifukujinDragonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
