#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBloodVassalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodVassalCard);
};

//____________________________________________________________________________
//
class CCatastropheCard : public CCard
{
	DECLARE_CARD_CSTOR(CCatastropheCard);

protected:
	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCloakOfMistsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCloakOfMistsCard);
};

//____________________________________________________________________________
//
class CExplorationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExplorationCard);
};

//____________________________________________________________________________
//
class CGaeasEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGaeasEmbraceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CMorphlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMorphlingCard);
};

//____________________________________________________________________________
//
class COrderOfYawgmothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfYawgmothCard);
};

//____________________________________________________________________________
//
class CStrokeOfGeniusCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrokeOfGeniusCard);
};

//____________________________________________________________________________
//
class CWhirlwindCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhirlwindCard);
};

//____________________________________________________________________________
//
class CArgothianElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArgothianElderCard);
};

//____________________________________________________________________________
//
class CArgothianEnchantressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArgothianEnchantressCard);
};

//____________________________________________________________________________
//
class CArgothianSwineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArgothianSwineCard);
};

//____________________________________________________________________________
//
class CBarrinMasterWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarrinMasterWizardCard);
};

//____________________________________________________________________________
//
class CBlanchwoodTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlanchwoodTreefolkCard);
};

//____________________________________________________________________________
//
class CCacklingFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCacklingFiendCard);
};

//____________________________________________________________________________
//
class CCarrionBeetlesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionBeetlesCard);
};

//____________________________________________________________________________
//
class CCaveTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaveTigerCard);
};

//____________________________________________________________________________
//
class CChildOfGaeaCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CChildOfGaeaCard);
};

//____________________________________________________________________________
//
class CCrazedSkirgeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCrazedSkirgeCard);
};

//____________________________________________________________________________
//
class CDarkHatchlingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkHatchlingCard);
};

//____________________________________________________________________________
//
class CDiscipleOfGraceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfGraceCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDiscipleOfLawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfLawCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDisruptiveStudentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDisruptiveStudentCard);
};

//____________________________________________________________________________
//
class CDriftingDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDriftingDjinnCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDromosaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDromosaurCard);
};

//____________________________________________________________________________
//
class CElvishHerderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishHerderCard);
};

//____________________________________________________________________________
//
class CEndlessWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEndlessWurmCard);
};

//____________________________________________________________________________
//
class CFireAntsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFireAntsCard);
};

//____________________________________________________________________________
//
class CGoblinLackeyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinLackeyCard);
};

//____________________________________________________________________________
//
class CGumaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGumaCard);
};

//____________________________________________________________________________
//
class CHawkeaterMothCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHawkeaterMothCard);
};

//____________________________________________________________________________
//
class CMonkIdealistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMonkIdealistCard);
};

//____________________________________________________________________________
//
class CMonkRealistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMonkRealistCard);
};

//____________________________________________________________________________
//
class CPendrellDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPendrellDrakeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPhyrexianGhoulCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianGhoulCard);
};

//____________________________________________________________________________
//
class CPriestOfGixCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPriestOfGixCard);
};

//____________________________________________________________________________
//
class CRavenousSkirgeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousSkirgeCard);
};

//____________________________________________________________________________
//
class CSanctumCustodianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSanctumCustodianCard);
};

//____________________________________________________________________________
//
class CSandbarMerfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandbarMerfolkCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSandbarSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandbarSerpentCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSanguineGuardCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSanguineGuardCard);
};

//____________________________________________________________________________
//
class CSerraZealotCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraZealotCard);
};

//____________________________________________________________________________
//
class CShimmeringBarrierCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CShimmeringBarrierCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSilentAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentAttendantCard);
};

//____________________________________________________________________________
//
class CSkirgeFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirgeFamiliarCard);
};

//____________________________________________________________________________
//
class CSkitteringSkirgeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkitteringSkirgeCard);
};

//____________________________________________________________________________
//
class CSongstitcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSongstitcherCard);
};

//____________________________________________________________________________
//
class CSpinedFlukeCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinedFlukeCard);
};

//____________________________________________________________________________
//
class CSpireOwlCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpireOwlCard);
};

//____________________________________________________________________________
//
class CSternProctorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSternProctorCard);
};

//____________________________________________________________________________
//
class CTitaniasChosenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTitaniasChosenCard);
};

//____________________________________________________________________________
//
class CTreetopRangersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreetopRangersCard);
};

//____________________________________________________________________________
//
class CUnworthyDeadCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CUnworthyDeadCard);
};

//____________________________________________________________________________
//
class CViashinoWeaponsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoWeaponsmithCard);
};

//____________________________________________________________________________
//
class CVoiceOfGraceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfGraceCard);
};

//____________________________________________________________________________
//
class CVoiceOfLawCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfLawCard);
};

//____________________________________________________________________________
//
class CZephidCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CZephidCard);
};

//____________________________________________________________________________
//
class CCathodionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCathodionCard);
};

//____________________________________________________________________________
//
class CCopperGnomesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCopperGnomesCard);
};

//____________________________________________________________________________
//
class CHoppingAutomatonCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CHoppingAutomatonCard);
};

//____________________________________________________________________________
//
class CMobileFortCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMobileFortCard);
};

//____________________________________________________________________________
//
class CWallOfJunkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfJunkCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBlastedLandscapeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBlastedLandscapeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDriftingMeadowCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDriftingMeadowCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPhyrexianTowerCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPhyrexianTowerCard);
};

//____________________________________________________________________________
//
class CPollutedMireCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPollutedMireCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRemoteIsleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRemoteIsleCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CShivanGorgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShivanGorgeCard);
};

//____________________________________________________________________________
//
class CSlipperyKarstCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSlipperyKarstCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSmolderingCraterCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSmolderingCraterCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CThranQuarryCard : public CNonbasicLandCard
{
    DECLARE_CARD_CSTOR(CThranQuarryCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CClawsOfGixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CClawsOfGixCard);
};

//____________________________________________________________________________
//
class CCrystalChimesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrystalChimesCard);
};

//____________________________________________________________________________
//
class CDragonBloodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDragonBloodCard);
};

//____________________________________________________________________________
//
class CMetrognomeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMetrognomeCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CMishrasHelixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMishrasHelixCard);
};

//____________________________________________________________________________
//
class CWornPowerstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWornPowerstoneCard);
};

//____________________________________________________________________________
//
class CAbsoluteGraceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAbsoluteGraceCard);
};

//____________________________________________________________________________
//
class CAbsoluteLawCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAbsoluteLawCard);
};

//____________________________________________________________________________
//
class CBackToBasicsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBackToBasicsCard);
};

//____________________________________________________________________________
//
class CBrilliantHaloCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBrilliantHaloCard);
};

//____________________________________________________________________________
//
class CCrosswindsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrosswindsCard);
};

//____________________________________________________________________________
//
class CDespondencyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDespondencyCard);
};

//____________________________________________________________________________
//
class CDouseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDouseCard);
};

//____________________________________________________________________________
//
class CFieryMantleCard : public CCard
{
	DECLARE_CARD_CSTOR(CFieryMantleCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFortitudeCard : public CCard
{
	DECLARE_CARD_CSTOR(CFortitudeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CLaunchCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLaunchCard);
};

//____________________________________________________________________________
//
class CLingeringMirageCard : public CCard
{
	DECLARE_CARD_CSTOR(CLingeringMirageCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CParasiticBondCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CParasiticBondCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CRuneOfProtectionBlackCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRuneOfProtectionBlackCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRuneOfProtectionBlueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRuneOfProtectionBlueCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRuneOfProtectionGreenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRuneOfProtectionGreenCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRuneOfProtectionRedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRuneOfProtectionRedCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRuneOfProtectionWhiteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRuneOfProtectionWhiteCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CScaldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScaldCard);
};

//____________________________________________________________________________
//
class CSickenCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSickenCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CZephidsEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CZephidsEmbraceCard);
};

//____________________________________________________________________________
//
class CAnnulCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CAnnulCard);
};

//____________________________________________________________________________
//
class CBreachCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBreachCard);
};

//____________________________________________________________________________
//
class CClearCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CClearCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CExpungeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CExpungeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CFalterCard : public CCard
{
	DECLARE_CARD_CSTOR(CFalterCard);
};

//____________________________________________________________________________
//
class CFaultLineCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFaultLineCard);
};

//____________________________________________________________________________
//
class CHeadlongRushCard : public CCard
{
	DECLARE_CARD_CSTOR(CHeadlongRushCard);
};

//____________________________________________________________________________
//
class CHeatRayCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHeatRayCard);
};

//____________________________________________________________________________
//
class CLullCard : public CCard
{
	DECLARE_CARD_CSTOR(CLullCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class COutmaneuverCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(COutmaneuverCard);
};

//____________________________________________________________________________
//
class CRescindCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRescindCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CScrapCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CScrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSunderCard : public CCard
{
	DECLARE_CARD_CSTOR(CSunderCard);
};

//____________________________________________________________________________
//
class CSymbiosisCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSymbiosisCard);
};

//____________________________________________________________________________
//
class CAcidicSoilCard : public CCard
{
	DECLARE_CARD_CSTOR(CAcidicSoilCard);
};

//____________________________________________________________________________
//
class CArcLightningCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CArcLightningCard);
};

//____________________________________________________________________________
//
class CGaeasBountyCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CGaeasBountyCard);
};

//____________________________________________________________________________
//
class CGoblinOffensiveCard : public CCard
{
	DECLARE_CARD_CSTOR(CGoblinOffensiveCard);
};

//____________________________________________________________________________
//
class CHushCard : public CCard
{
	DECLARE_CARD_CSTOR(CHushCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLayWasteCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CLayWasteCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRazeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRazeCard);
};

//____________________________________________________________________________
//
class CRejuvenateCard : public CCard
{
	DECLARE_CARD_CSTOR(CRejuvenateCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSteamBlastCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSteamBlastCard);
};

//____________________________________________________________________________
//
class CTitaniasBoonCard : public CCard
{
	DECLARE_CARD_CSTOR(CTitaniasBoonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAcridianCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAcridianCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CAlbinoTrollCard : public CRegenerationCreatureCard
{
    DECLARE_CARD_CSTOR(CAlbinoTrollCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CCitanulCentaursCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CCitanulCentaursCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CCradleGuardCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CCradleGuardCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CCraterHellionCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CCraterHellionCard);

protected:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGambleCard : public CCard
{
	DECLARE_CARD_CSTOR(CGambleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGoblinPatrolCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinPatrolCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CGoblinWarBuggyCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinWarBuggyCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CHeraldOfSerraCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CHeraldOfSerraCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CLightningDragonCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CLightningDragonCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CPouncingJaguarCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CPouncingJaguarCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CShivanRaptorCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CShivanRaptorCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CViashinoOutriderCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CViashinoOutriderCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CVugLizardCard : public CLandwalkCreatureCard
{
    DECLARE_CARD_CSTOR(CVugLizardCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CWindingWurmCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWindingWurmCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CTolarianAcademyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTolarianAcademyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGaeasCradleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGaeasCradleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSerrasSanctumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSerrasSanctumCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGreatWhaleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreatWhaleCard);
};

//____________________________________________________________________________
//
class CPeregrineDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPeregrineDrakeCard);
};

//____________________________________________________________________________
//
class CWaylayCard : public CCard
{
	DECLARE_CARD_CSTOR(CWaylayCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CUnnerveCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnnerveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTimeSpiralCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimeSpiralCard);
};

//____________________________________________________________________________
//
class CAttunementCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAttunementCard);
};

//____________________________________________________________________________
//
class CPlanarVoidCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlanarVoidCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCitanulHierophantsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCitanulHierophantsCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBravadoCard : public CCard
{
	DECLARE_CARD_CSTOR(CBravadoCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CDestructiveUrgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDestructiveUrgeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CHermeticStudyCard : public CCard
{
	DECLARE_CARD_CSTOR(CHermeticStudyCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CRetaliationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRetaliationCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CVenomousFangsCard : public CCard
{
	DECLARE_CARD_CSTOR(CVenomousFangsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CSmokestackCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSmokestackCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	TriggeredAbility* m_pTriggeredAbility;
/* private:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
	TriggeredAbility* m_pTriggeredAbility; */
};

//____________________________________________________________________________
//
class CVebulidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVebulidCard);
};

//____________________________________________________________________________
//
class CPriestOfTitaniaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPriestOfTitaniaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSneakAttackCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSneakAttackCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CVampiricEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVampiricEmbraceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CWizardMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWizardMentorCard);
};

//____________________________________________________________________________
//
class CReclusiveWightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReclusiveWightCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAntagonismCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAntagonismCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CFleshReaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshReaverCard);

private:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCreatureCard* pToCreature, Damage damage) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CPlayer* pToPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CRainOfFilthCard : public CCard
{
	DECLARE_CARD_CSTOR(CRainOfFilthCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CShowerOfSparksCard : public CCard
{
	DECLARE_CARD_CSTOR(CShowerOfSparksCard);
};

//____________________________________________________________________________
//
class CVictimizeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVictimizeCard);
};

//____________________________________________________________________________
//
class CWirecatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirecatCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CYawgmothsWillCard : public CCard
{
	DECLARE_CARD_CSTOR(CYawgmothsWillCard);
};

//____________________________________________________________________________
//
class CFaithHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaithHealerCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRetromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRetromancerCard);
};

//____________________________________________________________________________
//
class CExhumeCard : public CCard
{
	DECLARE_CARD_CSTOR(CExhumeCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CShowandTellCard : public CCard
{
	DECLARE_CARD_CSTOR(CShowandTellCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWitchEngineCard : public CLandwalkCreatureCard
{
    DECLARE_CARD_CSTOR(CWitchEngineCard);
};

//____________________________________________________________________________
//
class CIllGottenGainsCard : public CCard
{
	DECLARE_CARD_CSTOR(CIllGottenGainsCard);
};

//____________________________________________________________________________
//
class CWindfallCard : public CCard
{
	DECLARE_CARD_CSTOR(CWindfallCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinCadetsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinCadetsCard);
};

//____________________________________________________________________________
//
class CWhetstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWhetstoneCard);
};

//____________________________________________________________________________
//
class CDiabolicServitudeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDiabolicServitudeCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef	TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility3;
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolveSelection(TriggeredAbility3::TriggeredActionType* pAction) const;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	CStateSupportPtrType<CCard> m_pCard;
};

//____________________________________________________________________________
//
class CPowerTaintCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CPowerTaintCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTurnaboutCard : public CCard
{
	DECLARE_CARD_CSTOR(CTurnaboutCard);

protected:
	class CTurnaboutSpell : public CTargetSpell
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CTurnaboutSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost);

		virtual ~CTurnaboutSpell() {}

		OVERRIDE(void, ResolvePlayer)(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value);

		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
		CSelectionSupport m_SelectionSupport;
	};
};

//____________________________________________________________________________
//
class CWildDogsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildDogsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPlanarBirthCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlanarBirthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBrandCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrandCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMeltdownCard : public CCard
{
	DECLARE_CARD_CSTOR(CMeltdownCard);
};

//____________________________________________________________________________
//
class CViashinoSandswimmerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSandswimmerCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CArgothianWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArgothianWurmCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void Advance(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CUmbilicusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUmbilicusCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_PaymentSelection;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CRemembranceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRemembranceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	CSelectionSupport m_YesNoSelection;
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCarpetOfFlowersCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCarpetOfFlowersCard);

protected:
	CSelectionSupport m_NumberSelection;
	CSelectionSupport m_ColorSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool bUsed;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

};

//____________________________________________________________________________
//
class CDiscordantDirgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDiscordantDirgeCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CMidsummerRevelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMidsummerRevelCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CTorchSongCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTorchSongCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CWarDanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarDanceCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CKarnSilverGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarnSilverGolemCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
/*
class CLiltingRefrainCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLiltingRefrainCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	
	class CLiltingRefrainAbility: public CCounterSpell	
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

		public:
			OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

		protected:
			CLiltingRefrainAbility(CCard* pCard, LPCTSTR strManaCost);
			virtual ~CLiltingRefrainAbility() {}
	};
};
*/
//____________________________________________________________________________
//
class CBarrinsCodexCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBarrinsCodexCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CLotusBlossomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLotusBlossomCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);

	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
	bool BeforeResolution4(CAbilityAction* pAction) const;
	bool BeforeResolution5(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CGreenerPasturesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGreenerPasturesCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSporogenesisCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSporogenesisCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhyrexianProcessorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianProcessorCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nLifePaid;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CElectryteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElectryteCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CLifelineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLifelineCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCurfewCard : public CCard
{
	DECLARE_CARD_CSTOR(CCurfewCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void ReturnFunction(int PlayerID);
	void Advance(int PlayerID);
	CCountedCardContainer_ pReturned;

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//