#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
// Add new card class declaractions here
class CCommanderCard : public CCard 
{
	DECLARE_CARD_CSTOR(CCommanderCard);

public:
	BOOL IdentityRed() {return red;}
	BOOL IdentityWhite() {return white;}
	BOOL IdentityBlack() {return black;}
	BOOL IdentityGreen() {return green;}
	BOOL IdentityBlue() {return blue;}

protected:

	int_ DamageDealtByOtherCommander;

private:
	int_ CastingTimes;
	
	ListenerPtr<CastSpellEventSource::Listener>	m_cpPListener;	// Listen to play card event
	void OnSpellCasted(CCard* pCard);

	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to zone change
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	ListenerPtr<DamageDealEventSource::Listener>	m_cpDListener;
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);

	ListenerPtr<CardMovementEventSource::Listener>	m_cpZListener;	// Listen to all players' zone changes
	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	ListenerPtr<ManaAddEventSource::Listener>	m_cpMListener;
	void OnManaAdd(CPlayer* pPlayer, const CManaPool pPool);
	
	counted_ptr<CConsExtraManaEnchantment> m_pAbility;

	BOOL_ red;
	BOOL_ blue;
	BOOL_ black;
	BOOL_ white;
	BOOL_ green;
	BOOL_ set;
};

//____________________________________________________________________________
//
class CSkullbriartheWalkingGraveCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSkullbriartheWalkingGraveCard);
};

//____________________________________________________________________________
//
class CKaradorGhostChieftainCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CKaradorGhostChieftainCard);

private:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDeathbyDragonsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDeathbyDragonsCard);
};

//____________________________________________________________________________
//
class CEdricSpymasterofTrestCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CEdricSpymasterofTrestCard);
};

//____________________________________________________________________________
//
class CAnimarSoulofElementsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAnimarSoulofElementsCard);
};

//____________________________________________________________________________
//
class CTarielReckonerofSoulsCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CTarielReckonerofSoulsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDamiaSageofStoneCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CDamiaSageofStoneCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CZedruutheGreatheartedCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CZedruutheGreatheartedCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSpellCrumpleCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSpellCrumpleCard);
};

//____________________________________________________________________________
//
class CCommandTowerCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCommandTowerCard);

protected:
	BOOL CanPlayWhite(BOOL bIncludeTricks);
	BOOL CanPlayBlue(BOOL bIncludeTricks);
	BOOL CanPlayBlack(BOOL bIncludeTricks);
	BOOL CanPlayRed(BOOL bIncludeTricks);
	BOOL CanPlayGreen(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHomewardPathCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHomewardPathCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGhaveGuruOfSporesCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CGhaveGuruOfSporesCard);
};

//____________________________________________________________________________
//
class CKaaliaOfTheVastCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CKaaliaOfTheVastCard);
};

//____________________________________________________________________________
//
class CCelestialForceCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CCelestialForceCard);
};

//____________________________________________________________________________
//
class CFlusterstormCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFlusterstormCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CTributeToTheWildCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTributeToTheWildCard);
};

//____________________________________________________________________________
//
class CHydraOmnivoreCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CHydraOmnivoreCard);
};

//____________________________________________________________________________
//
class CScavengingOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScavengingOozeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CHornetQueenCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CHornetQueenCard);

};

//____________________________________________________________________________
//
class CMagmaticForceCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMagmaticForceCard);

};

//____________________________________________________________________________
//
class CVishKalBloodArbiterCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CVishKalBloodArbiterCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNinThePainArtistCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CNinThePainArtistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAvatarOfSlaughterCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAvatarOfSlaughterCard);

};

//____________________________________________________________________________
//
class CChaosWarpCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CChaosWarpCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAcornCatapultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAcornCatapultCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRikuOfTwoReflectionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRikuOfTwoReflectionsCard);

protected:
	bool SetTriggerContext1(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard) const;

	bool SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDreadCacodemonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadCacodemonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	BOOL_ m_bHandStack;
};

//____________________________________________________________________________
//
class CRiddlekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiddlekeeperCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSoulSnareCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSoulSnareCard);

};

//____________________________________________________________________________
//
class CTrenchGorgerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CTrenchGorgerCard);

protected:
	CSelectionSupport m_ActionSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnActionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSyphonFleshCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSyphonFleshCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMartyrsBondCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMartyrsBondCard);

protected:
	CSelectionSupport m_CardSelection;
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CPlayerContainer Opponents;
	void Sacrifice(int nOpponent, CCard* pOriginalCard);
};

//______________________________________________________________________________
//
/*
class CCrescendoOfWarCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCrescendoOfWarCard);

};
*/
//____________________________________________________________________________
//
class CArchangelOfStrifeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArchangelOfStrifeCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	void SelectorFunction(int PlayerID);
	void Advance(int PlayerID);

	std::vector<int> m_nChoices;
	
	CCountedCardContainer_ Effects;
};

//____________________________________________________________________________
//
