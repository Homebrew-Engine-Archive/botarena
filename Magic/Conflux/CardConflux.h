#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CFontOfMythosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFontOfMythosCard);
};

//____________________________________________________________________________
//
class CAerieMysticsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAerieMysticsCard);
};

//____________________________________________________________________________
//
class CBeaconBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBeaconBehemothCard);
};

//____________________________________________________________________________
//
class CChildOfAlaraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChildOfAlaraCard);
};

//____________________________________________________________________________
//
class CDreadwingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadwingCard);
};

//____________________________________________________________________________
//
class CFrontlineSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrontlineSageCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CFusionElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFusionElementalCard);
};

//____________________________________________________________________________
//
class CGoblinOutlanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinOutlanderCard);
};

//____________________________________________________________________________
//
class CGrixisIllusionistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrixisIllusionistCard);
};

//____________________________________________________________________________
//
class CJhessianBalmgiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJhessianBalmgiverCard);
};

//____________________________________________________________________________
//
class CKnightOfTheReliquaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfTheReliquaryCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKnotvineMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnotvineMysticCard);
};

//____________________________________________________________________________
//
class CKraniocerosCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKraniocerosCard);
};

//____________________________________________________________________________
//
class CNacatlOutlanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNacatlOutlanderCard);
};

//____________________________________________________________________________
//
class CNobleHierarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNobleHierarchCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CPestilentKathariCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPestilentKathariCard);
};

//____________________________________________________________________________
//
class CRakkaMarCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRakkaMarCard);
};

//____________________________________________________________________________
//
class CRhoxBodyguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxBodyguardCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSacellumArchersCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CSacellumArchersCard);
};

//____________________________________________________________________________
//
class CScarlandThrinaxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScarlandThrinaxCard);
};

//____________________________________________________________________________
//
class CScattershotArcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScattershotArcherCard);
};

//____________________________________________________________________________
//
class CSkywardEyeProphetsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkywardEyeProphetsCard);
};

//____________________________________________________________________________
//
class CTukatongueThallidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTukatongueThallidCard);
};

//____________________________________________________________________________
//
class CVagrantPlowbeastsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVagrantPlowbeastsCard);
};

//____________________________________________________________________________
//
class CValeronOutlanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CValeronOutlanderCard);
};

//____________________________________________________________________________
//
class CValiantGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CValiantGuardCard);
};

//____________________________________________________________________________
//
class CWildLeotauCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildLeotauCard);
};

//____________________________________________________________________________
//
class CZombieOutlanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieOutlanderCard);
};

//____________________________________________________________________________
//
class CDarklitGargoyleCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDarklitGargoyleCard);
};

//____________________________________________________________________________
//
class CEsperCormorantsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEsperCormorantsCard);
};

//____________________________________________________________________________
//
class CEsperzoaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEsperzoaCard);
};

//____________________________________________________________________________
//
class CEtherswornAdjudicatorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEtherswornAdjudicatorCard);
};

//____________________________________________________________________________
//
class CInkwellLeviathanCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CInkwellLeviathanCard);
};

//____________________________________________________________________________
//
class CSalvageSlasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSalvageSlasherCard);
};

//____________________________________________________________________________
//
class CScornfulAEtherLichCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScornfulAEtherLichCard);
};

//____________________________________________________________________________
//
class CSphinxSummonerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxSummonerCard);
};

//____________________________________________________________________________
//
class CVectisAgentsCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CVectisAgentsCard);
};

//____________________________________________________________________________
//
class CVedalkenOutlanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenOutlanderCard);
};

//____________________________________________________________________________
//
class CExoticOrchardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CExoticOrchardCard);
};

//____________________________________________________________________________
//
class CUnstableFrontierCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUnstableFrontierCard);
};

//____________________________________________________________________________
//
class CArmillarySphereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArmillarySphereCard);
};

//____________________________________________________________________________
//
class CBoneSawCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBoneSawCard);
};

//____________________________________________________________________________
//
class CCumberStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCumberStoneCard);
};

//____________________________________________________________________________
//
class CKaleidostoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKaleidostoneCard);
};

//____________________________________________________________________________
//
class CObeliskOfAlaraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CObeliskOfAlaraCard);
};

//____________________________________________________________________________
//
class CScepterOfDominanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScepterOfDominanceCard);
};

//____________________________________________________________________________
//
class CScepterOfFugueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScepterOfFugueCard);
};

//____________________________________________________________________________
//
class CScepterOfInsightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScepterOfInsightCard);
};

//____________________________________________________________________________
//
class CAshasFavorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAshasFavorCard);
};

//____________________________________________________________________________
//
class CSigilOfTheEmptyThroneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSigilOfTheEmptyThroneCard);
};

//____________________________________________________________________________
//
class CSuicidalChargeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSuicidalChargeCard);
};

//____________________________________________________________________________
//
class CLapseOfCertaintyCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CLapseOfCertaintyCard);
};

//____________________________________________________________________________
//
class CVolcanicFalloutCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CVolcanicFalloutCard);
};

//____________________________________________________________________________
//
class CAvenTrailblazerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenTrailblazerCard);
};

//____________________________________________________________________________
//
class CCharnelhoardWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCharnelhoardWurmCard);
};

//____________________________________________________________________________
//
class CControlledInstinctsCard : public CCard
{
	DECLARE_CARD_CSTOR(CControlledInstinctsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CCorruptedRootsCard : public CCard
{
	DECLARE_CARD_CSTOR(CCorruptedRootsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CCourtHomunculusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCourtHomunculusCard);
};

//____________________________________________________________________________
//
class CCylianSunsingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCylianSunsingerCard);
};

//____________________________________________________________________________
//
class CInfectiousHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfectiousHorrorCard);
};

//____________________________________________________________________________
//
class CMatcaRiotersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMatcaRiotersCard);
};

//____________________________________________________________________________
//
class CPaleolothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPaleolothCard);
};

//____________________________________________________________________________
//
class CGleamOfResistanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CGleamOfResistanceCard);
};

//____________________________________________________________________________
//
class CMarkOfAsylumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMarkOfAsylumCard);
};

//____________________________________________________________________________
//
class CRhoxMeditantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxMeditantCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CConstrictingTendrilsCard : public CCard
{
	DECLARE_CARD_CSTOR(CConstrictingTendrilsCard);
};

//____________________________________________________________________________
//
class CTraumaticVisionsCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CTraumaticVisionsCard);
};

//____________________________________________________________________________
//
class CAbsorbVisCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CAbsorbVisCard);
};

//____________________________________________________________________________
//
class CSedraxisAlchemistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSedraxisAlchemistCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBloodhallOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodhallOozeCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CFieryFallCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFieryFallCard);
};

//____________________________________________________________________________
//
class CMoltenFrameCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMoltenFrameCard);
};

//____________________________________________________________________________
//
class CSylvanBountyCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSylvanBountyCard);
};

//____________________________________________________________________________
//
class CMagisterSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMagisterSphinxCard);
};

//____________________________________________________________________________
//
class CParasiticStrixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CParasiticStrixCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSludgeStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSludgeStriderCard);
};

//____________________________________________________________________________
//
class CRuptureSpireCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRuptureSpireCard);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CMirrorSigilSergeantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMirrorSigilSergeantCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMartialCoupCard : public CCard
{
	DECLARE_CARD_CSTOR(CMartialCoupCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CViewFromAboveCard : public CCard
{
	DECLARE_CARD_CSTOR(CViewFromAboveCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CDragDownCard : public CCard
{
	DECLARE_CARD_CSTOR(CDragDownCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCountersquallCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCountersquallCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CConfluxCard : public CCard
{
	DECLARE_CARD_CSTOR(CConfluxCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCliffrunnerBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCliffrunnerBehemothCard);
};

//____________________________________________________________________________
//
class CEmberWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmberWeaverCard);
};

//____________________________________________________________________________
//
class CGluttonousSlimeCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CGluttonousSlimeCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGrixisSlavedriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrixisSlavedriverCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHellkiteHatchlingCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CHellkiteHatchlingCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHellsparkElementalCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CHellsparkElementalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPathToExileCard : public CCard
{
	DECLARE_CARD_CSTOR(CPathToExileCard);
};

//____________________________________________________________________________
//
class CRottingRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottingRatsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShamblingRemainsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamblingRemainsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShardConvergenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CShardConvergenceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CViashinoSlaughtermasterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSlaughtermasterCard);
};

//____________________________________________________________________________
//
class CBloodTyrantCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CBloodTyrantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBrackwaterElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrackwaterElementalCard);

private:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDarkTemperCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarkTemperCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CExplodingBordersCard : public CCard
{
	DECLARE_CARD_CSTOR(CExplodingBordersCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CExtractorDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CExtractorDemonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFiligreeFractureCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFiligreeFractureCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKederektParasiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKederektParasiteCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMalfegorCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CMalfegorCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								  CWhenSelfInplay::EventCallback,
								  &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CManaforceMaceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaforceMaceCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CMightOfAlaraCard : public CCard
{
	DECLARE_CARD_CSTOR(CMightOfAlaraCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMeglonothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMeglonothCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CNyxathidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNyxathidCard);
};

//____________________________________________________________________________
//
class CToxicIguanarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CToxicIguanarCard);
};

//____________________________________________________________________________
//
class CVoicesFromTheVoidCard : public CCard
{
	DECLARE_CARD_CSTOR(CVoicesFromTheVoidCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWorldheartPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWorldheartPhoenixCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CYokeOfTheDamnedCard : public CCard
{
	DECLARE_CARD_CSTOR(CYokeOfTheDamnedCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CWanderingGoblinsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderingGoblinsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWretchedBanquetCard : public CCard
{
	DECLARE_CARD_CSTOR(CWretchedBanquetCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CProgenitusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CProgenitusCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CApocalypseHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CApocalypseHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CWallofReverenceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWallofReverenceCard);

private: 
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSporeBurstCard : public CCard
{
	DECLARE_CARD_CSTOR(CSporeBurstCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSoulsMajestyCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulsMajestyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};
//____________________________________________________________________________
//
class CTeleminPerformanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CTeleminPerformanceCard);

protected:	
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CElderMasteryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CElderMasteryCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CThornlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornlingCard);
};

//____________________________________________________________________________
//
class CMasterTransmuterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterTransmuterCard);
};

//____________________________________________________________________________
//
class CNacatlSavageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNacatlSavageCard);
};

//____________________________________________________________________________
//
class CBanefireCard : public CCard
{
	DECLARE_CARD_CSTOR(CBanefireCard);

protected:	
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGwafaHazidProfiteerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGwafaHazidProfiteerCard);

private: 
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFaerieMechanistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieMechanistCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDragonsoulKnightCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonsoulKnightCard);
};

//____________________________________________________________________________
//
class CParagonOfTheAmeshaCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CParagonOfTheAmeshaCard);
};

//____________________________________________________________________________
//
class CFleshformerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshformerCard);
};

//____________________________________________________________________________
//
class CGoblinRazerunnersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRazerunnersCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CVoraciousDragonCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CVoraciousDragonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
