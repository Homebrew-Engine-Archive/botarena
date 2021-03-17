#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAbyssalNocturnusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalNocturnusCard);
};

//____________________________________________________________________________
//
class CAngelOfDespairCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfDespairCard);
};

//____________________________________________________________________________
//
class CGruulTurfCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGruulTurfCard);
};

//____________________________________________________________________________
//
class CIzzetBoilerworksCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CIzzetBoilerworksCard);
};

//____________________________________________________________________________
//
class CNivMizzettheFiremindCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNivMizzettheFiremindCard);
};

//____________________________________________________________________________
//
class COrzhovBasilicaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COrzhovBasilicaCard);
};

//____________________________________________________________________________
//
class CGodlessShrineCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CGodlessShrineCard);
};

//____________________________________________________________________________
//
class CSteamVentsCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CSteamVentsCard);
};

//____________________________________________________________________________
//
class CStompingGroundCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CStompingGroundCard);
};

//____________________________________________________________________________
//
class CDebtorsKnellCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CDebtorsKnellCard);
};

//____________________________________________________________________________
//
class CSilhanaLedgewalkerCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSilhanaLedgewalkerCard);
};

//____________________________________________________________________________
//
class CBorborygmosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorborygmosCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCrystalSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrystalSeerCard);
};

//____________________________________________________________________________
//
class CDaggerclawImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDaggerclawImpCard);
};

//____________________________________________________________________________
//
class CDrownedRusalkaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrownedRusalkaCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGelectrodeCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CGelectrodeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGhorClanBloodscaleCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGhorClanBloodscaleCard);
};

//____________________________________________________________________________
//
class CGiantSolifugeCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantSolifugeCard);
};

//____________________________________________________________________________
//
class CGruulGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGruulGuildmageCard);
};

//____________________________________________________________________________
//
class CGruulNodorogCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGruulNodorogCard);
};

//____________________________________________________________________________
//
class CHarrierGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHarrierGriffinCard);
};

//____________________________________________________________________________
//
class CIzzetChronarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIzzetChronarchCard);
};

//____________________________________________________________________________
//
class CLionheartMaverickCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLionheartMaverickCard);
};

//____________________________________________________________________________
//
//class CLivingInfernoCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CLivingInfernoCard);
//};
//
////____________________________________________________________________________
////
class CMartyredRusalkaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMartyredRusalkaCard);
};

//____________________________________________________________________________
//
class CMourningThrullCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMourningThrullCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class COrzhovGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrzhovGuildmageCard);
};

//____________________________________________________________________________
//
class COstiaryThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COstiaryThrullCard);
};

//____________________________________________________________________________
//
class CPetrahydroxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPetrahydroxCard);
};

//____________________________________________________________________________
//
class CPlaguedRusalkaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlaguedRusalkaCard);
};

//____________________________________________________________________________
//
class CPoisonbellyOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPoisonbellyOgreCard);
};

//____________________________________________________________________________
//
class CRestlessBonesCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRestlessBonesCard);
};

//____________________________________________________________________________
//
class CRumblingSlumCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRumblingSlumCard);
};

//____________________________________________________________________________
//
class CScorchedRusalkaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScorchedRusalkaCard);
};

//____________________________________________________________________________
//
class CSkeletalVampireCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletalVampireCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkyriderTraineeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyriderTraineeCard);
};

//____________________________________________________________________________
//
class CSmogsteedRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSmogsteedRiderCard);
};

//____________________________________________________________________________
//
class CStarvedRusalkaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStarvedRusalkaCard);
};

//____________________________________________________________________________
//
class CStratozeppelidCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStratozeppelidCard);
};

//____________________________________________________________________________
//
class CStreetbreakerWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStreetbreakerWurmCard);
};

//____________________________________________________________________________
//
class CTeysaOrzhovScionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTeysaOrzhovScionCard);
};

//____________________________________________________________________________
//
class CTiborAndLumiaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTiborAndLumiaCard);
};

//____________________________________________________________________________
//
class CTorchDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTorchDrakeCard);
};

//____________________________________________________________________________
//
class CWeeDragonautsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWeeDragonautsCard);
};

//____________________________________________________________________________
//
class CWildCantorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildCantorCard);
};

//____________________________________________________________________________
//
class COrzhovaTheChurchOfDealsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COrzhovaTheChurchOfDealsCard);
};

//____________________________________________________________________________
//
class CSkarrgTheRagePitsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSkarrgTheRagePitsCard);
};

//____________________________________________________________________________
//
class CGruulSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGruulSignetCard);
};

//____________________________________________________________________________
//
class CGruulWarPlowCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGruulWarPlowCard);
};

//____________________________________________________________________________
//
class CIzzetSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIzzetSignetCard);
};

//____________________________________________________________________________
//
class COrzhovSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrzhovSignetCard);
};

//____________________________________________________________________________
//
class CHatchingPlansCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHatchingPlansCard);
};

//____________________________________________________________________________
//
class CHissingMiasmaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHissingMiasmaCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CHypervoltGraspCard : public CCard
{
	DECLARE_CARD_CSTOR(CHypervoltGraspCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSinstrikersWillCard : public CCard
{
	DECLARE_CARD_CSTOR(CSinstrikersWillCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDouseInGloomCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDouseInGloomCard);
};

//____________________________________________________________________________
//
class CElectrolyzeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CElectrolyzeCard);
};

//____________________________________________________________________________
//
class CFrazzleCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFrazzleCard);
};

//____________________________________________________________________________
//
class CMortifyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMortifyCard);
};

//____________________________________________________________________________
//
class CRuneboggleCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CRuneboggleCard);
};

//____________________________________________________________________________
//
class CToArmsCard : public CCard
{
	DECLARE_CARD_CSTOR(CToArmsCard);
};

//____________________________________________________________________________
//
class CWildsizeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWildsizeCard);
};

//____________________________________________________________________________
//
class CWithstandCard : public CCard
{
	DECLARE_CARD_CSTOR(CWithstandCard);
};

//____________________________________________________________________________
//
class CCastigateCard : public CCard
{
	DECLARE_CARD_CSTOR(CCastigateCard);
};

//____________________________________________________________________________
//
class CCausticRainCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCausticRainCard);
};

//____________________________________________________________________________
//
class CCullingSunCard : public CCard
{
	DECLARE_CARD_CSTOR(CCullingSunCard);
};

//____________________________________________________________________________
//
class CInvokeTheFiremindCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CInvokeTheFiremindCard);
};

//____________________________________________________________________________
//
class CPredatoryFocusCard : public CCard
{
	DECLARE_CARD_CSTOR(CPredatoryFocusCard);
};

//____________________________________________________________________________
//
class CPrimevalLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CPrimevalLightCard);
};

//____________________________________________________________________________
//
class CWreakHavocCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWreakHavocCard);
};

//____________________________________________________________________________
//
class CAgentOfMasksCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgentOfMasksCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCryptwailingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCryptwailingCard);
};

//____________________________________________________________________________
//
class CDuneBroodNephilimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuneBroodNephilimCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CWitchMawNephilimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWitchMawNephilimCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		                     AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGruulScrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGruulScrapperCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class COgreSavantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreSavantCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CShriekingGrotesqueCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekingGrotesqueCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSteamcoreWeirdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteamcoreWeirdCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTinStreetHooliganCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTinStreetHooliganCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGlintEyeNephilimCard : public CPumpCreatureCard
{
		DECLARE_CARD_CSTOR(CGlintEyeNephilimCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																								Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CBloodscaleProwlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodscaleProwlerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGhorClanSavageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhorClanSavageCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CScabClanMaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScabClanMaulerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSkarrganSkybreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkarrganSkybreakerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkarrganFirebirdCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkarrganFirebirdCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CUlashttheHateSeedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUlashttheHateSeedCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CPilloryOfTheSleeplessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPilloryOfTheSleeplessCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CGhostCouncilOfOrzhovaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostCouncilOfOrzhovaCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CStormHerdCard : public CCard
{
	DECLARE_CARD_CSTOR(CStormHerdCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGristlebackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGristlebackCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSchismotivateCard : public CCard
{
	DECLARE_CARD_CSTOR(CSchismotivateCard);
};

//____________________________________________________________________________
//
class CLeylineOfLifeforceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfLifeforceCard);
};

//____________________________________________________________________________
//
class CLeylineOfLightningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfLightningCard);
};

//____________________________________________________________________________
//
class CLeylineOfSingularityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfSingularityCard);
};

//____________________________________________________________________________
//
class CLeylineOfTheMeekCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfTheMeekCard);
};

//____________________________________________________________________________
//
class COrderOfTheStarsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfTheStarsCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CardKeyword SelectedProtection;
};

//____________________________________________________________________________
//
class CBioplasmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBioplasmCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFeralAnimistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CFeralAnimistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPetrifiedWoodKinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPetrifiedWoodKinCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSanguinePraetorCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSanguinePraetorCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
//class CSoulsOfTheFaultlessCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CSoulsOfTheFaultlessCard);
//
//private:
//	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
//						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
//	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
//						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
//};
//
////_____________________________________________________________________________
////
class CShadowLanceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CShadowLanceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCrashLandingCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrashLandingCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CParallectricFeedbackCard : public CCard
{
	DECLARE_CARD_CSTOR(CParallectricFeedbackCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRepealCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRepealCard);
};

//____________________________________________________________________________
//
class CYoreTillerNephilimCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CYoreTillerNephilimCard);
};

//____________________________________________________________________________
//
class CGathererOfGracesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGathererOfGracesCard);
};

//____________________________________________________________________________
//
class CSkySwallowerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkySwallowerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

private:
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRevenantPatriarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRevenantPatriarchCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CVedalkenPlotterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenPlotterCard);
};

//____________________________________________________________________________
//
class CDryadSophisticateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDryadSophisticateCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWurmweaverCoilCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWurmweaverCoilCard);
};

//___________________________________________________________________________
//
class CSkarrganPitSkulkCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSkarrganPitSkulkCard);

protected:
    CCardFilter m_CardFilter;
	
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CBatteringWurmCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CBatteringWurmCard);

protected:
    CCardFilter m_CardFilter;
	
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CIzzetGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIzzetGuildmageCard);
};

//____________________________________________________________________________
//
class CStitchInTimeCard : public CCard
{
	DECLARE_CARD_CSTOR(CStitchInTimeCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCerebralVortexCard : public CCard
{
	DECLARE_CARD_CSTOR(CCerebralVortexCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CSilhanaStarfletcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilhanaStarfletcherCard);

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
class CMoratoriumStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoratoriumStoneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBlindHunterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindHunterCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CCryOfContritionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCryOfContritionCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CExhumerThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CExhumerThrullCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CAbsolverThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbsolverThrullCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CBelfrySpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBelfrySpiritCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CBenedictionOfMoonsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBenedictionOfMoonsCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	CCountedCardContainer_ pHaunting;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CGravenDominatorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGravenDominatorCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution3(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class COrzhovEuthanistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrzhovEuthanistCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class COrzhovPontiffCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrzhovPontiffCard);

protected:
	CCountedCardContainer_ pHaunting;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;
};

//____________________________________________________________________________
//
class CSeizeTheSoulCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeizeTheSoulCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);

	CCountedCardContainer_ pHaunting;

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CGhostwayCard : public CCard
{
	DECLARE_CARD_CSTOR(CGhostwayCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKillerInstinctCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKillerInstinctCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVertigoSpawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVertigoSpawnCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//