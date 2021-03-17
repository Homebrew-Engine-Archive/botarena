#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
// Add new card class declaractions here
class CPlanechaseCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPlanechaseCard);

private:
	int_ CastingTimes;

	ListenerPtr<CounterMovedEventSource::Listener> m_cpCListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);

	counted_ptr<CManaProductionAbility> m_pAbility1;
	counted_ptr<CManaProductionAbility> m_pAbility2;

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFeedingGroundsCard : public CPlaneCard
{
	DECLARE_CARD_CSTOR(CFeedingGroundsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFieldsOfSummerCard : public CPlaneCard
{
	DECLARE_CARD_CSTOR(CFieldsOfSummerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CGoldmeadowCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CGoldmeadowCard);

private:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKrosaCard : public CPlaneCard
{
	DECLARE_CARD_CSTOR(CKrosaCard);
};

//____________________________________________________________________________
//
class CLlanowarCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CLlanowarCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CTheGreatForestCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CTheGreatForestCard);
};

//____________________________________________________________________________
//
class CPoolsofBecomingCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CPoolsofBecomingCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;

	bool SetTriggerContextE(CTriggeredAbility<>::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBantCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CBantCard);

	
protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	void ForceStart(CAbility* pAbility) const; 
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	ListenerPtr<CounterMovedEventSource::Listener> m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	CPtrContainer_<CCard>	m_AffectedCards;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpCListener;	

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSkybreenCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CSkybreenCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CSpecialChaosTrigger > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CVelisVelCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CVelisVelCard);
};

//____________________________________________________________________________
//
class CTheHippodromeCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CTheHippodromeCard);
};

//____________________________________________________________________________
//
class CAcademyAtTolariaWestCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CAcademyAtTolariaWestCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, //Template for cards works on effects zone when trigger does not support the correct trigger.
                            CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CShivCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CShivCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CTheAEtherFluesCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CTheAEtherFluesCard);

protected:
	CSelectionSupport m_CardSelection;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContextAux(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CIsleOfVesuvaCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CIsleOfVesuvaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility1;

	bool SetTriggerContext(TriggeredAbility1::TriggerContextType& triggerContext, CCard* pCard,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMurasaCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CMurasaCard);

private:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
