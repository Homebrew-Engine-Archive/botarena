#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CYavimayaAncientsCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaAncientsCard);
};

//____________________________________________________________________________
//
class CAgentOfStromgaldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgentOfStromgaldCard);
};

//____________________________________________________________________________
//
class CDeadlyInsectCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeadlyInsectCard);
};

//____________________________________________________________________________
//
class CElvishRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishRangerCard);
};

//____________________________________________________________________________
//
class CEnslavedScoutCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CEnslavedScoutCard);
};

//____________________________________________________________________________
//
class CKaysaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKaysaCard);
};

//____________________________________________________________________________
//
class CLimDulsHighGuardCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLimDulsHighGuardCard);
};

//____________________________________________________________________________
//
class CWildAesthirCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWildAesthirCard);
};

//____________________________________________________________________________
//
class CAesthirGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAesthirGliderCard);
};

//____________________________________________________________________________
//
class CSchoolOfTheUnseenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSchoolOfTheUnseenCard);
};

//____________________________________________________________________________
//
class CInheritanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInheritanceCard);
};

//____________________________________________________________________________
//
class CNobleSteedsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNobleSteedsCard);
};

//____________________________________________________________________________
//
class CUnlikelyAllianceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUnlikelyAllianceCard);
};

//____________________________________________________________________________
//
class CVisceridArmorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVisceridArmorCard);
};

//____________________________________________________________________________
//
class CFeastOrFamineCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFeastOrFamineCard);
};

//____________________________________________________________________________
//
class CReinforcementsCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReinforcementsCard);
};

//____________________________________________________________________________
//
class CStenchOfDecayCard : public CCard
{
	DECLARE_CARD_CSTOR(CStenchOfDecayCard);
};

//____________________________________________________________________________
//
class CRitualOfTheMachineCard : public CCard
{
	DECLARE_CARD_CSTOR(CRitualOfTheMachineCard);
};

//____________________________________________________________________________
//
class CJuniperOrderAdvocateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJuniperOrderAdvocateCard);
};

//____________________________________________________________________________
//
class CShieldSphereCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShieldSphereCard);
};

//____________________________________________________________________________
//
class CNaturesWrathCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNaturesWrathCard);
};

//____________________________________________________________________________
//
class CIvoryGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIvoryGargoyleCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CVarchildsCrusaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVarchildsCrusaderCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPhyrexianWarBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianWarBeastCard);
};

//____________________________________________________________________________
//
class CForceOfWillCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CForceOfWillCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThawingGlaciersCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CThawingGlaciersCard);

private:
	bool SetTriggerContext1(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext,
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBalduvianDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianDeadCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CInsidiousBookwormsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInsidiousBookwormsCard);
};

//____________________________________________________________________________
//
class CFloodwaterDamCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFloodwaterDamCard);
};

//____________________________________________________________________________
//
class CGiftOfTheWoodsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGiftOfTheWoodsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CVeteransVoiceCard : public CCard 
{
	DECLARE_CARD_CSTOR(CVeteransVoiceCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CPyrokinesisCard : public CCard
{
	DECLARE_CARD_CSTOR(CPyrokinesisCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBalduvianWarMakersCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CBalduvianWarMakersCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGorillaBerserkersCard: public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGorillaBerserkersCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CKjeldoranHomeGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranHomeGuardCard);

protected:
	BOOL_ bAttackedOrBlocked;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCreatureCard* pCreatureCard);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContextAux3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CCarrierPigeonsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrierPigeonsCard);
};

//____________________________________________________________________________
//
class CAstrolabeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAstrolabeCard);
};

//____________________________________________________________________________
//
class CBestialFuryCard : public CCard
{
	DECLARE_CARD_CSTOR(CBestialFuryCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFeveredStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFeveredStrengthCard);
};

//____________________________________________________________________________
//
class CForesightCard : public CCard
{
	DECLARE_CARD_CSTOR(CForesightCard);
};

//____________________________________________________________________________
//
class CSoldeviDiggerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoldeviDiggerCard);
};

//____________________________________________________________________________
//
class CArcaneDenialCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CArcaneDenialCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGorillaWarCryCard : public CCard
{
	DECLARE_CARD_CSTOR(CGorillaWarCryCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CContagionCard : public CCard
{
	DECLARE_CARD_CSTOR(CContagionCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CElvishSpiritGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishSpiritGuideCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEnergyArcCard : public CCard
{
	DECLARE_CARD_CSTOR(CEnergyArcCard);
};

//____________________________________________________________________________
//
class CHailStormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHailStormCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLatNamsLegacyCard : public CCard
{
	DECLARE_CARD_CSTOR(CLatNamsLegacyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLordOfTresserhornCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfTresserhornCard);
};

//____________________________________________________________________________
//
//class CMisinformationCard : public CTargetMoveCardSpellCard
//{
//	DECLARE_CARD_CSTOR(CMisinformationCard);
//};
//
////____________________________________________________________________________
////
class CSoldeviSteamBeastCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSoldeviSteamBeastCard);
};

//____________________________________________________________________________
//
class CVisceridDroneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVisceridDroneCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWanderingMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderingMageCard);
};

//____________________________________________________________________________
//
class CSoldierOfFortuneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoldierOfFortuneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhantasmalFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantasmalFiendCard);
};

//____________________________________________________________________________
//

class CKjeldoranOutpostCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKjeldoranOutpostCard);
	protected:
    CCardFilter m_CardFilter;	
};

//____________________________________________________________________________
//

class CLakeOfTheDeadCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLakeOfTheDeadCard);
	protected:
    CCardFilter m_CardFilter;	
};

//____________________________________________________________________________
//

class CHeartOfYavimayaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHeartOfYavimayaCard);
	protected:
    CCardFilter m_CardFilter;	
};

//____________________________________________________________________________
//

class CSoldeviExcavationsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSoldeviExcavationsCard);
	protected:
    CCardFilter m_CardFilter;	
};

//____________________________________________________________________________
//
class CBalduvianTradingPostCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBalduvianTradingPostCard);
	protected:
    CCardFilter m_CardFilter;	
};

//____________________________________________________________________________
//

class CShelteredValleyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShelteredValleyCard);
	
protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	CCardFilter m_CardFilter;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBurnoutCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurnoutCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhyrexianBoonCard : public CCard
{
	DECLARE_CARD_CSTOR(CPhyrexianBoonCard);
};

//___________________________________________________________________________
//
class CSwampMosquitoCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSwampMosquitoCard);

private:
	bool SetTriggerContext(CTriggeredPoisonAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CSurgeOfStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSurgeOfStrengthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CYavimayaAntsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaAntsCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSustainingSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSustainingSpiritCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDystopiaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDystopiaCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CRoyalDecreeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRoyalDecreeCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CGorillaShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGorillaShamanCard);
};

//____________________________________________________________________________
//
class CTasteOfParadiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CTasteOfParadiseCard);
};

//___________________________________________________________________________
//
class CScarabOfTheUnseenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScarabOfTheUnseenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFalseDemiseCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFalseDemiseCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDeathSparkCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDeathSparkCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CKrovikanHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrovikanHorrorCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CCastingOfBonesCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CCastingOfBonesCard);
};

//____________________________________________________________________________
//
class CNaturesChosenCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CNaturesChosenCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPhelddagrifCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhelddagrifCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVarchildsWarRidersCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CVarchildsWarRidersCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction);
	CSelectionSupport m_CUSelection;
	CSelectionSupport m_OpponentSelection;

	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OpponentSelection(CPlayer* pPlayer, DWORD CurrentLand, DWORD TotalLands);
};

//____________________________________________________________________________
//
class CKrovikanPlagueCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CKrovikanPlagueCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLimDulsVaultCard : public CCard
{
	DECLARE_CARD_CSTOR(CLimDulsVaultCard);

protected:
	CSelectionSupport m_PaymentSelection;
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
};

//____________________________________________________________________________
//
class CSolGrailCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSolGrailCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	BOOL CanPlayW(BOOL bIncludeTricks);
	BOOL CanPlayU(BOOL bIncludeTricks);
	BOOL CanPlayB(BOOL bIncludeTricks);
	BOOL CanPlayR(BOOL bIncludeTricks);
	BOOL CanPlayG(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSpinyStarfishCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinyStarfishCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode);
	bool CSpinyStarfishCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMishrasGroundbreakerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMishrasGroundbreakerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHelmOfObedienceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHelmOfObedienceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPhantasmalSphereCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantasmalSphereCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
	
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//