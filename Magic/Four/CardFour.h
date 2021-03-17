#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CElderLandWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElderLandWurmCard);
};

//____________________________________________________________________________
//
class CCosmicHorrorCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CCosmicHorrorCard);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CGiantTortoiseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantTortoiseCard);
};

//____________________________________________________________________________
//
class CAmuletOfKroogCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAmuletOfKroogCard);
};

//____________________________________________________________________________
//
class CClayStatueCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CClayStatueCard);
};

//____________________________________________________________________________
//
class CMishrasFactoryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMishrasFactoryCard);
};

//____________________________________________________________________________
//
class CStripMineCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CStripMineCard);
};

//____________________________________________________________________________
//
class CTawnossWandCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTawnossWandCard);
};

//____________________________________________________________________________
//
class CYotianSoldierCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CYotianSoldierCard);
};

//____________________________________________________________________________
//
class CAliBabaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAliBabaCard);
};

//____________________________________________________________________________
//
class CBirdMaidenCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CBirdMaidenCard);
	
};

//____________________________________________________________________________
//
class CAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbominationCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAmrouKithkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmrouKithkinCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CApprenticeWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CApprenticeWizardCard);
};

//____________________________________________________________________________
//
class CAshesToAshesCard : public CCard
{
	DECLARE_CARD_CSTOR(CAshesToAshesCard);
};

//____________________________________________________________________________
//
class CBackfireCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CBackfireCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CBrothersOfFireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrothersOfFireCard);
};

//____________________________________________________________________________
//
class CCarnivorousPlantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnivorousPlantCard);
};

//____________________________________________________________________________
//
class CCarrionAntsCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionAntsCard);
};

//____________________________________________________________________________
//
class CCavePeopleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCavePeopleCard);
};

//____________________________________________________________________________
//
class CCrimsonManticoreCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CCrimsonManticoreCard);
};

//____________________________________________________________________________
//
class CCyclopeanMummyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCyclopeanMummyCard);

/*public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);*/
};

//____________________________________________________________________________
//
class CDiabolicMachineCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDiabolicMachineCard);
};

//____________________________________________________________________________
//
class CDurkwoodBoarsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDurkwoodBoarsCard);
};

//____________________________________________________________________________
//
class CEternalWarriorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEternalWarriorCard);
};

//____________________________________________________________________________
//
class CFissureCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFissureCard);
};

//____________________________________________________________________________
//
class CFloodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFloodCard);
};

//____________________________________________________________________________
//
class CGhostShipCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostShipCard);
};

//____________________________________________________________________________
//
class CImmolationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CImmolationCard);
};

//____________________________________________________________________________
//
class CJununEfreetCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJununEfreetCard);
};

//____________________________________________________________________________
//
class CKillerBeesCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKillerBeesCard);
};

//____________________________________________________________________________
//
class CLandLeechesCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CLandLeechesCard);
};

//____________________________________________________________________________
//
class CLandTaxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLandTaxCard);

private:
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CMarshGasCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarshGasCard);
};

//____________________________________________________________________________
//
class CMoraleCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoraleCard);
};

//____________________________________________________________________________
//
class COasisCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COasisCard);
};

//____________________________________________________________________________
//
class CPietyCard : public CCard
{
	DECLARE_CARD_CSTOR(CPietyCard);
};

//____________________________________________________________________________
//
class CPsionicEntityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPsionicEntityCard);
};

//____________________________________________________________________________
//
class CSandstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSandstormCard);
};

//____________________________________________________________________________
//
class CSeekerCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSeekerCard);
};

//____________________________________________________________________________
//
class CSindbadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSindbadCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSistersOfTheFlameCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CSistersOfTheFlameCard);
};

//____________________________________________________________________________
//
class CSunkenCityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSunkenCityCard);
};

//____________________________________________________________________________
//
class CWordOfBindingCard : public CCard
{
	DECLARE_CARD_CSTOR(CWordOfBindingCard);
};

//____________________________________________________________________________
//
class CZephyrFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CZephyrFalconCard);
};

//____________________________________________________________________________
//
class CBallLightningCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBallLightningCard);
};

//____________________________________________________________________________
//
class CBlightCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlightCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CBogImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBogImpCard);
};

//____________________________________________________________________________
//
class CColossusOfSardiaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CColossusOfSardiaCard);
};

//____________________________________________________________________________
//
class CDivineTransformationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDivineTransformationCard);
};

//____________________________________________________________________________
//
class CElvenRidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvenRidersCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFellwarStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFellwarStoneCard);
};

//____________________________________________________________________________
//
class CGaseousFormCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGaseousFormCard);
};

//____________________________________________________________________________
//
class CGiantStrengthCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGiantStrengthCard);
};

//____________________________________________________________________________
//
class CGrapeshotCatapultCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrapeshotCatapultCard);
};

//____________________________________________________________________________
//
class CGreedCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGreedCard);
};

//____________________________________________________________________________
//
class CInfernoCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CInfernoCard);
};

//____________________________________________________________________________
//
class CKismetCard : public CCard
{
	DECLARE_CARD_CSTOR(CKismetCard);
};

//____________________________________________________________________________
//
class CLostSoulCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CLostSoulCard);
};

//____________________________________________________________________________
//
class CManaClashCard : public CCard
{
	DECLARE_CARD_CSTOR(CManaClashCard);
protected:
	CSelectionSupport m_FlipSelectionController;
	CSelectionSupport m_FlipSelectionTarget;
	BOOL CanPlay(BOOL bIncludeTricks);
	int ControllersFlip;
	int TargetsFlip;
	bool BeforeResolution (CAbilityAction* pAction);
	void FlipFunctionController (CPlayer* pController, CPlayer* pTarget);
	void FlipFunctionTarget (CPlayer* pController, CPlayer* pTarget);
	void FlipResult (CPlayer* pController, CPlayer* pTarget);
	void OnFlipSelectedController(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnFlipSelectedTarget(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPradeshGypsiesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPradeshGypsiesCard);
};

//____________________________________________________________________________
//
class CPyrotechnicsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPyrotechnicsCard);
};

//____________________________________________________________________________
//
class CRadjanSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRadjanSpiritCard);
};

//____________________________________________________________________________
//
class CRagManCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagManCard);
};

//____________________________________________________________________________
//
class CSegovianLeviathanCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSegovianLeviathanCard);
};

//____________________________________________________________________________
//
class CSpiritLinkCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiritLinkCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CTundraWolvesCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CTundraWolvesCard);
};

//____________________________________________________________________________
//
class CUntamedWildsCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CUntamedWildsCard);
};

//____________________________________________________________________________
//
class CVampireBatsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireBatsCard);
};

//____________________________________________________________________________
//
class CWallOfSpearsCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfSpearsCard);
};

//____________________________________________________________________________
//
class CHurrJackalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHurrJackalCard);
};

//____________________________________________________________________________
//
class CSpiritShackleCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiritShackleCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CVenomCard : public CCard
{
	DECLARE_CARD_CSTOR(CVenomCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CAlabasterPotionCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CAlabasterPotionCard);
};

//____________________________________________________________________________
//
class CShapeshifterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShapeshifterCard);
};

//____________________________________________________________________________
//
class CTriskelionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTriskelionCard);
};

//____________________________________________________________________________
//
class CMurkDwellersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMurkDwellersCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWindsofChangeCard : public CCard
{
	DECLARE_CARD_CSTOR(CWindsofChangeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMarshViperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshViperCard);
};

//____________________________________________________________________________
//
class CPitScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPitScorpionCard);
};

//____________________________________________________________________________
//
class CBloodLustCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBloodLustCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CUncleIstvanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUncleIstvanCard);
};

//____________________________________________________________________________
//
class CTheBruteCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTheBruteCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CWhiteManaBatteryCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CWhiteManaBatteryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBlueManaBatteryCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBlueManaBatteryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBlackManaBatteryCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBlackManaBatteryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRedManaBatteryCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CRedManaBatteryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGreenManaBatteryCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGreenManaBatteryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CEnergyTapCard : public CCard
{
	DECLARE_CARD_CSTOR(CEnergyTapCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class COsaiVulturesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COsaiVulturesCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CTimeElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTimeElementalCard);
};

//____________________________________________________________________________
//
class CLeviathanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeviathanCard);
};

//____________________________________________________________________________
//
class CVisionsCard : public CCard
{
	DECLARE_CARD_CSTOR(CVisionsCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnShuffleSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ShuffleSelection;
};

//______________________________________________________________________________
//
class CSylvanLibraryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSylvanLibraryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_PaymentSelection;
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_UseSelection;
	void OnUseSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CGoblinRockSledCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRockSledCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanUntap(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDetonateCard : public CCard
{
	DECLARE_CARD_CSTOR(CDetonateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CPlayer* pTargetController;
};

//____________________________________________________________________________
//
class CWhirlingDervishCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhirlingDervishCard);

protected:
	BOOL_ bHitOpponent;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CPlayer* pToPlayer, Damage damage);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
						    CNode* pToNode);
};

//____________________________________________________________________________
//
class CXenicPoltergeistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CXenicPoltergeistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
