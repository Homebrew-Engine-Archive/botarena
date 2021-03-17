#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CPlagueOfDamnationCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPlagueOfDamnationCard);
};

//____________________________________________________________________________
//
class CGuardianOfTheStarsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CGuardianOfTheStarsCard);
};

//____________________________________________________________________________
//
class CAEtherPortalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherPortalCard);
};

//____________________________________________________________________________
//
class CReflectingMoxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CReflectingMoxCard);
};

//____________________________________________________________________________
//
class CSilenciateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSilenciateCard);
};

//____________________________________________________________________________
//
class CNamelessDesolationCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CNamelessDesolationCard);
};

//____________________________________________________________________________
//
class CGiveAndTakeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGiveAndTakeCard);
};

//____________________________________________________________________________
//
class CMoldSporeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoldSporeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSurvivalOfTheSickestCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSurvivalOfTheSickestCard);

protected:
	counted_ptr<CAbility> CreateRegenerationAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateRegenerationAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CMoldeazaLordOfTheSporesCard : public CPumpCreatureCard 
{
	DECLARE_CARD_CSTOR(CMoldeazaLordOfTheSporesCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								  CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

	counted_ptr<CAbility> CreateRegenerationAbility(CCard* pCard);

	TriggeredAbility* m_pTriggeredAbility;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSheilaRecyclerofDreamsCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CSheilaRecyclerofDreamsCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
