#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CArashinClericCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArashinClericCard);
};

//____________________________________________________________________________
//
class CAvenSkirmisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenSkirmisherCard);
};

//____________________________________________________________________________
//
class CGreatHornKrushokCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreatHornKrushokCard);
};

//____________________________________________________________________________
//
class CJeskaiBarricadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJeskaiBarricadeCard);
};

//____________________________________________________________________________
//
class CPressurePointCard : public CCard
{
	DECLARE_CARD_CSTOR(CPressurePointCard);
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRefocusCard : public CCard
{
	DECLARE_CARD_CSTOR(CRefocusCard);
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSandblastCard : public CCard
{
	DECLARE_CARD_CSTOR(CSandblastCard);
};

//____________________________________________________________________________
//
class CDragonBellMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonBellMonkCard);
};

//____________________________________________________________________________
//
class CLotusPathDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLotusPathDjinnCard);
};

//____________________________________________________________________________
//
class CLotusEyeMysticsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLotusEyeMysticsCard);
};

//____________________________________________________________________________
//
class CPilgrimOfTheFiresCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPilgrimOfTheFiresCard);
};

//____________________________________________________________________________
//
class CHewedStoneRetainersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHewedStoneRetainersCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAleshasVanguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAleshasVanguardCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMarduShadowspearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduShadowspearCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMarduStrikeLeaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduStrikeLeaderCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinHeelcutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinHeelcutterCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CKolaghanTheStormsFuryCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKolaghanTheStormsFuryCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCreatureCard* pCreature,
						   AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CMarduScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduScoutCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CVaultbreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVaultbreakerCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CGurmagAnglerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGurmagAnglerCard);
};

//____________________________________________________________________________
//
class CTasigursCrueltyCard : public CCard
{
	DECLARE_CARD_CSTOR(CTasigursCrueltyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRiteOfUndoingCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiteOfUndoingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSibsigMuckdraggersCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSibsigMuckdraggersCard);
};

//____________________________________________________________________________
//
class CTemporalTrespassCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemporalTrespassCard);
};

//____________________________________________________________________________
//
class CArchersOfQarsiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchersOfQarsiCard);
};

//____________________________________________________________________________
//
class CBatheInDragonfireCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBatheInDragonfireCard);
};

//____________________________________________________________________________
//
class CCollateralDamageCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCollateralDamageCard);
};

//____________________________________________________________________________
//
class CMercilessExecutionerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMercilessExecutionerCard);
};

//____________________________________________________________________________
//
class CNoxiousDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNoxiousDragonCard);
};

//____________________________________________________________________________
//
class CAncestralVengeanceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAncestralVengeanceCard);
};

//___________________________________________________________________________________________
//
class CBattleBrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleBrawlerCard);
};

//____________________________________________________________________________
//
class CCruxOfFateCard : public CCard
{
	DECLARE_CARD_CSTOR(CCruxOfFateCard);
protected:
	void OnOptionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_OptionSelection;
	CCardFilter				m_CardFilter1;
	CCardFilter				m_CardFilter2;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDarkDealCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarkDealCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CDiplomacyOfTheWastesCard : public CCard
{
	DECLARE_CARD_CSTOR(CDiplomacyOfTheWastesCard);
	protected:
		CCardFilter m_CardFilter1;
		bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//