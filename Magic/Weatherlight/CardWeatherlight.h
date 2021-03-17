#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CRogueElephantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRogueElephantCard);
};

//____________________________________________________________________________
//
class CParadigmShiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CParadigmShiftCard);
};

//____________________________________________________________________________
//
class CNullRodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNullRodCard);
};

//____________________________________________________________________________
//
class CArgivianFindCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CArgivianFindCard);
};

//____________________________________________________________________________
//
class CArgivianRestorationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CArgivianRestorationCard);
};

//____________________________________________________________________________
//
class CCloudDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudDjinnCard);

};

//____________________________________________________________________________
//
class CDingusStaffCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDingusStaffCard);
};

//____________________________________________________________________________
//
class CDisruptCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDisruptCard);
};

//____________________________________________________________________________
//
class CDuskriderFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskriderFalconCard);
};

//____________________________________________________________________________
//
class CFallowWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFallowWurmCard);
};

//____________________________________________________________________________
//
class CFledglingDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFledglingDjinnCard);
};

//____________________________________________________________________________
//
class CForiysianBrigadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForiysianBrigadeCard);
};

//____________________________________________________________________________
//
class CGuidedStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGuidedStrikeCard);
};

//____________________________________________________________________________
//
class CHarvestWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarvestWurmCard);
};

//____________________________________________________________________________
//
class CInfernalTributeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInfernalTributeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMerfolkTradersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkTradersCard);
};

//____________________________________________________________________________
//
class COdylicWraithCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(COdylicWraithCard);
};

//____________________________________________________________________________
//
class CPeacekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPeacekeeperCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStripedBearsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStripedBearsCard);
};

//____________________________________________________________________________
//
class CTendrilsOfDespairCard : public CCard
{
	DECLARE_CARD_CSTOR(CTendrilsOfDespairCard);
};

//____________________________________________________________________________
//
class CThunderboltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CThunderboltCard);
};

//____________________________________________________________________________
//
class CTimidDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTimidDrakeCard);
};

//____________________________________________________________________________
//
class CBuriedAliveCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CBuriedAliveCard);
};

//____________________________________________________________________________
//
class CGemstoneMineCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGemstoneMineCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                           const CManaProductionAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAbyssalGatekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalGatekeeperCard);
};

//____________________________________________________________________________
//
class CBenalishMissionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishMissionaryCard);
};

//____________________________________________________________________________
//
class CCinderGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderGiantCard);
};

//____________________________________________________________________________
//
class CDwarvenBerserkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenBerserkerCard);
};

//____________________________________________________________________________
//
class CHurloonShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHurloonShamanCard);
};

//____________________________________________________________________________
//
class CMantaRayCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CMantaRayCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMaraxusOfKeldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaraxusOfKeldCard);
};

//____________________________________________________________________________
//
class CNobleBenefactorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNobleBenefactorCard);
};

//____________________________________________________________________________
//
class COrcishSettlersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishSettlersCard);
};

//____________________________________________________________________________
//
class CSoulShepherdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulShepherdCard);
};

//____________________________________________________________________________
//
class CTolarianSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTolarianSerpentCard);
};

//____________________________________________________________________________
//
class CVeteranExplorerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranExplorerCard);
};

//____________________________________________________________________________
//
class CJanglingAutomatonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJanglingAutomatonCard);
};

//____________________________________________________________________________
//
class CStrawGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrawGolemCard);
};

//____________________________________________________________________________
//
class CBubbleMatrixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBubbleMatrixCard);
};

//____________________________________________________________________________
//
class CTouchstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTouchstoneCard);
};

//____________________________________________________________________________
//
class CDowndraftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDowndraftCard);
};

//____________________________________________________________________________
//
class CEmpyrialArmorCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmpyrialArmorCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CFesteringEvilCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFesteringEvilCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CFireWhipCard : public CCard
{
	DECLARE_CARD_CSTOR(CFireWhipCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CHeatStrokeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeatStrokeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAbjureCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CAbjureCard);
};

//____________________________________________________________________________
//
class CBlossomingWreathCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlossomingWreathCard);
};

//____________________________________________________________________________
//
class CBoilingBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoilingBloodCard);
};

//____________________________________________________________________________
//
class CLavaStormCard : public CCard
{
	DECLARE_CARD_CSTOR(CLavaStormCard);
};

//____________________________________________________________________________
//
class CXanthicStatueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CXanthicStatueCard);
};

//____________________________________________________________________________
//
class CChimericSphereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChimericSphereCard);
};

//____________________________________________________________________________
//
class CGaeasBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CGaeasBlessingCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPhyrexianFurnaceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianFurnaceCard);
};

//____________________________________________________________________________
//
class CSerratedBiskelionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerratedBiskelionCard);
};

//____________________________________________________________________________
//
class CAvizoaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvizoaCard);
};

//____________________________________________________________________________
//
class CLlanowarDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarDruidCard);
};

//____________________________________________________________________________
//
class CThranForgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThranForgeCard);
};

//____________________________________________________________________________
//
class CShadowRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowRiderCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CSylvanHierophantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanHierophantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShatteredCryptCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CShatteredCryptCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//___________________________________________________________________________
//
class CPhantomWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPhantomWingsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CDwarvenThaumaturgistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenThaumaturgistCard);
};

//____________________________________________________________________________
//
class CPendrellMistsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPendrellMistsCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//_____________________________________________________________________________
//
class CLotusValeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLotusValeCard);

protected:
    CCardFilter m_CardFilter;	
};

//_____________________________________________________________________________
//
class CScorchedRuinsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CScorchedRuinsCard);

protected:
    CCardFilter m_CardFilter;	
};

//_____________________________________________________________________________
//
class CWindingCanyonsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWindingCanyonsCard);
};

//_____________________________________________________________________________
//
class CGallowbraidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGallowbraidCard);

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
class CUktabiEfreetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUktabiEfreetCard);

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
class CMorinfenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMorinfenCard);

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
class CArcticWolvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcticWolvesCard);

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
class CInnerSanctumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInnerSanctumCard);

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
class CBriarShieldCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBriarShieldCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CApathyCard : public CCard
{
	DECLARE_CARD_CSTOR(CApathyCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CHauntingMiseryCard : public CCard
{
	DECLARE_CARD_CSTOR(CHauntingMiseryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBarishiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarishiCard);
};

//____________________________________________________________________________
//
class CAbeyanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbeyanceCard);
};

//____________________________________________________________________________
//
class CMasterOfArmsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfArmsCard);
};

//____________________________________________________________________________
//
class CTolarianDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTolarianDrakeCard);
};

//____________________________________________________________________________
//
class CMwonvuliOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMwonvuliOozeCard);

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
class CFungusElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFungusElementalCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRocHatchlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRocHatchlingCard);
};

//____________________________________________________________________________
//
class CAngelicRenewalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicRenewalCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMistmoonGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMistmoonGriffinCard);

private:

void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CGoblinBombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinBombCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CAborothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAborothCard);

protected:
	CSelectionSupport m_CUSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CAncestralKnowledgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAncestralKnowledgeCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		bool BeforeResolution(CAbilityAction* pAction);

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CPsychicVortexCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPsychicVortexCard);

protected:
	CSelectionSupport m_CUSelection;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CWaveOfTerrorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWaveOfTerrorCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
		void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CBetrothedOfFireCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBetrothedOfFireCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CThranTomeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThranTomeCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CUrborgJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CUrborgJusticeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSawtoothOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSawtoothOgreCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//______________________________________________________________________________
//
