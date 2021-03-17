#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAshioksAdeptCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshioksAdeptCard);
protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CVanguardOfBrimazCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVanguardOfBrimazCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CDawnToDuskCard : public CCard
{
	DECLARE_CARD_CSTOR(CDawnToDuskCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class COreskosSunGuideCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(COreskosSunGuideCard);
};

//____________________________________________________________________________
//
class CAspectOfHydraCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAspectOfHydraCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSanguimancyCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSanguimancyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAcolytesRewardCard : public CCard
{
	DECLARE_CARD_CSTOR(CAcolytesRewardCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHeroOfIroasCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeroOfIroasCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CAkroanSkyguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanSkyguardCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CPleaForGuidanceCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CPleaForGuidanceCard);
};

//____________________________________________________________________________
//
class CSilentSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentSentinelCard);
};

//______________________________________________________________________________
//
class CAkroanPhalanxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanPhalanxCard);
};

//______________________________________________________________________________
//
class CGlimpseTheSunGodCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlimpseTheSunGodCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CGodFavoredGeneralCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodFavoredGeneralCard);

private:
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAerieWorshippersCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAerieWorshippersCard);

private:
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CForlornPseudammaCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForlornPseudammaCard);

private:
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSatyrNyxSmithCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrNyxSmithCard);

private:
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPheresBandRaidersCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPheresBandRaidersCard);

private:
	// "Inspired" ability triggers every time this creature becomes untapped.
	// ability triggers when this card's (called 'Self') orientation has changed (CWhenSelfOrientationChanged)
	// i.e. has been untapped hence SetUntapEventCallback
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfOrientationChanged, 
						CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetUntapEventCallback> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDeepwaterHypnotistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepwaterHypnotistCard);
};

//____________________________________________________________________________
//
class CClaimOfErebosCard : public CCard
{
	DECLARE_CARD_CSTOR(CClaimOfErebosCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEpharasRadianceCard : public CCard
{
	DECLARE_CARD_CSTOR(CEpharasRadianceCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEpiphanyStormCard : public CCard
{
	DECLARE_CARD_CSTOR(CEpiphanyStormCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEvanescentIntellectCard : public CCard
{
	DECLARE_CARD_CSTOR(CEvanescentIntellectCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGrislyTransformationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGrislyTransformationCard);
};

//____________________________________________________________________________
//
class CKarametrasFavorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CKarametrasFavorCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility5(CCard* pCard);
};

//___________________________________________________________________________
//
class COraclesInsightCard : public CCard
{
	DECLARE_CARD_CSTOR(COraclesInsightCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStratusWalkCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStratusWalkCard);
};

//____________________________________________________________________________
//
class CFatedRetributionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFatedRetributionCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFatedInfatuationCard : public CCard
{
	DECLARE_CARD_CSTOR(CFatedInfatuationCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFatedConflagrationCard : public CCard
{
	DECLARE_CARD_CSTOR(CFatedConflagrationCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFatedReturnCard : public CCard
{
	DECLARE_CARD_CSTOR(CFatedReturnCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFatedInterventionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFatedInterventionCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSpiritOfTheLabyrinthCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritOfTheLabyrinthCard);
};

//____________________________________________________________________________
//
class CFateUnravelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFateUnravelerCard);
};

//____________________________________________________________________________
//
/*class CSatyrFiredancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrFiredancerCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};*/

//____________________________________________________________________________
//
class CCourserOfKruphixCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCourserOfKruphixCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//

class CEaterOfHopeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEaterOfHopeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CForgestokerDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CForgestokerDragonCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CChargingBadgerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingBadgerCard);
};

//____________________________________________________________________________
//
class CPharagaxGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPharagaxGiantCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CFanaticOfXenagosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFanaticOfXenagosCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CGreatHartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreatHartCard);
};

//____________________________________________________________________________
//
class CRecklessRevelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessRevelerCard);
};

//____________________________________________________________________________
//
class CRetractionHelixCard : public CCard
{
	DECLARE_CARD_CSTOR(CRetractionHelixCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CRiseToTheChallengeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CRiseToTheChallengeCard);
};

//____________________________________________________________________________
//
class CUnravelTheAetherCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUnravelTheAetherCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGorgonsHeadCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGorgonsHeadCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CDrownInSorrowCard : public CCard
{
	DECLARE_CARD_CSTOR(CDrownInSorrowCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPainSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPainSeerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};
//____________________________________________________________________________
//
class CRagemongerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagemongerCard);
};

//____________________________________________________________________________
//
class CNullifyCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CNullifyCard);
};

//____________________________________________________________________________
//
class CPeregrinationCard : public CCard
{
	DECLARE_CARD_CSTOR(CPeregrinationCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTempleOfEnlightenmentCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfEnlightenmentCard);
};

//____________________________________________________________________________
//
class CTempleOfMaliceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfMaliceCard);
};

//____________________________________________________________________________
//
class CTempleOfPlentyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfPlentyCard);
};

//____________________________________________________________________________
//
class CReapWhatIsSownCard : public CCard
{
	DECLARE_CARD_CSTOR(CReapWhatIsSownCard);
};

//____________________________________________________________________________
//
class CAsphyxiateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAsphyxiateCard);
};

//____________________________________________________________________________
//
class CBileBlightCard : public CCard
{
	DECLARE_CARD_CSTOR(CBileBlightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBlackOakOfOdunosCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBlackOakOfOdunosCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWeightOfTheUnderworldCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWeightOfTheUnderworldCard);
};

//____________________________________________________________________________
//
class CFelhideBrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFelhideBrawlerCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAkroanConscriptorCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanConscriptorCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBoltOfKeranosCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoltOfKeranosCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCyclopsOfOneEyedPassCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCyclopsOfOneEyedPassCard);
};

//____________________________________________________________________________
//
class CImpetuousSunchaserCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CImpetuousSunchaserCard);
};

//____________________________________________________________________________
//
class CFearsomeTemperCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFearsomeTemperCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	CCountedCardContainer_		m_AffectedCards;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);
};

//____________________________________________________________________________
//
class CKragmaButcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKragmaButcherCard);
};

//____________________________________________________________________________
//
/*class CLightningVolleyCard : public CCard
{
	DECLARE_CARD_CSTOR(CLightningVolleyCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};*/

//____________________________________________________________________________
//
class CPinnacleOfRageCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPinnacleOfRageCard);
};

//____________________________________________________________________________
//
class CScouringSandsCard : public CCard
{
	DECLARE_CARD_CSTOR(CScouringSandsCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CStormcallerOfKeranosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStormcallerOfKeranosCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CThunderBruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderBruteCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CThunderousMightCard : public CCard
{
	DECLARE_CARD_CSTOR(CThunderousMightCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEyeGougeCard : public CCard
{
	DECLARE_CARD_CSTOR(CEyeGougeCard);

protected:
	CCardFilter m_CardFilter;
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CForsakenDriftersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForsakenDriftersCard);
};
//____________________________________________________________________________
//
class CGriffinDreamfinderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGriffinDreamfinderCard);
};

//____________________________________________________________________________
//
class COdunosRiverTrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COdunosRiverTrawlerCard);
};

//____________________________________________________________________________
//
class CServantOfTymaretCard: public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CServantOfTymaretCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CShrikeHarpyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShrikeHarpyCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
	
	CSelectionSupport m_OnOpponentSCSelection;	// m_OnOpponentSCSelection is m_OnOpponentSacrificeCreatureSelection abbreviated
	// OnOpponentSCSelected is OnOpponentSacrificeCreatureSelected abbreviated
	void OnOpponentSCSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5); 
};

//______________________________________________________________________________
//
class CWarchanterOfMogisCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarchanterOfMogisCard);
};

//____________________________________________________________________________
//
class CGraverobberSpiderCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGraverobberSpiderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
/*class CHeroOfLeinaTowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeroOfLeinaTowerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
	bool BeforeResolution(CAbilityAction* pAction);
};*/

//____________________________________________________________________________
//
class CHuntersProwessCard : public CChgPwrTghAttrSpellCard 
{
	DECLARE_CARD_CSTOR(CHuntersProwessCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																							Damage damage) const;
};

//____________________________________________________________________________
//
class CMischiefAndMayhemCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMischiefAndMayhemCard);
};

//____________________________________________________________________________
//
class CMortalsResolveCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMortalsResolveCard);
};

//____________________________________________________________________________
//
class CNessianDemolokCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNessianDemolokCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	CSelectionSupport m_CardSelection;
	CSelectionSupport m_PlayerSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnPlayerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior
	CPlayerContainer Players;
};

//______________________________________________________________________________
//
class CPheresBandTromperCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPheresBandTromperCard);
};

//____________________________________________________________________________
//
class CRaisedByWolvesCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRaisedByWolvesCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CScourgeOfSkolaValeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeOfSkolaValeCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSetessanOathswornCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSetessanOathswornCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CSetessanStarbreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSetessanStarbreakerCard);
};

//____________________________________________________________________________
//
class CSkyreapingCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSkyreapingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSnakeOfTheGoldenGroveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnakeOfTheGoldenGroveCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CSwordwiseCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSwordwiseCentaurCard);
};

//____________________________________________________________________________
//
class CKiorasFollowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKiorasFollowerCard);
};

//____________________________________________________________________________
//
class CSirenSongLyreCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSirenSongLyreCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//_____________________________________________________________________________
//
class CChorusOfTheTidesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChorusOfTheTidesCard);
protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class COrnitharchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrnitharchCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CEliteSkirmisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEliteSkirmisherCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CMeletisAstronomerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMeletisAstronomerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSphinxsDiscipleCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxsDiscipleCard);
};

//____________________________________________________________________________
//
class CSuddenStormCard : public CCard
{
	DECLARE_CARD_CSTOR(CSuddenStormCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CThassasRebuffCard : public CCard
{
	DECLARE_CARD_CSTOR(CThassasRebuffCard);

protected:
	class CThassasRebuffAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CThassasRebuffAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CThassasRebuffAbility() {}
	};
};

//____________________________________________________________________________
//
class CWhelmingWaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhelmingWaveCard);
};

//____________________________________________________________________________
//
class CExcoriateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CExcoriateCard);
};

//____________________________________________________________________________
//
class CHoldAtBayCard : public CCard
{
	DECLARE_CARD_CSTOR(CHoldAtBayCard);
};

//____________________________________________________________________________
//
class CMortalsArdorCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMortalsArdorCard);
};

//____________________________________________________________________________
//
class CPillarOfWarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPillarOfWarCard);
};

//____________________________________________________________________________
//
class CSunbondCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CSunbondCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCrypsisCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CCrypsisCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
