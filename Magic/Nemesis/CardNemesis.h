#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CFlameRiftCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlameRiftCard);
};

//____________________________________________________________________________
//
class CFlowstoneOverseerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneOverseerCard);
};

//____________________________________________________________________________
//
class CFlowstoneStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlowstoneStrikeCard);
};

//____________________________________________________________________________
//
class CFlowstoneSurgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFlowstoneSurgeCard);
};

//____________________________________________________________________________
//
class CArcMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcMageCard);
};

//____________________________________________________________________________
//
class CAvengerEnDalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvengerEnDalCard);
};

//____________________________________________________________________________
//
class CBattlefieldPercherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlefieldPercherCard);
};

//____________________________________________________________________________
//
class CBelbesPercherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBelbesPercherCard);
};

//____________________________________________________________________________
//
class CBolaWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBolaWarriorCard);
};

//____________________________________________________________________________
//
class CChieftainEnDalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChieftainEnDalCard);
};

//____________________________________________________________________________
//
class CCoilingWoodwormCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoilingWoodwormCard);
};

//____________________________________________________________________________
//
class CDefiantFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDefiantFalconCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlowstoneWallCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneWallCard);
};

//____________________________________________________________________________
//
class CLawbringerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLawbringerCard);
};

//____________________________________________________________________________
//
class CLightbringerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLightbringerCard);
};

//____________________________________________________________________________
//
class CMoggcatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggcatcherCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNestingWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNestingWurmCard);
};

//____________________________________________________________________________
//
class CNetterEnDalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNetterEnDalCard);
};

//____________________________________________________________________________
//
class COraxidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COraxidCard);
};

//____________________________________________________________________________
//
class CPhyrexianDriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianDriverCard);
};

//____________________________________________________________________________
//
class CPlagueWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueWitchCard);
};

//____________________________________________________________________________
//
class CRathiAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRathiAssassinCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRathiFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRathiFiendCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRathiIntimidatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRathiIntimidatorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSeahunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeahunterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShriekingMoggCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekingMoggCard);
};

//____________________________________________________________________________
//
class CSilkenfistFighterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilkenfistFighterCard);
};

//____________________________________________________________________________
//
class CSilkenfistOrderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilkenfistOrderCard);
};

//____________________________________________________________________________
//
class CSkyshroudPoacherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudPoacherCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkyshroudSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudSentinelCard);
};

//____________________________________________________________________________
//
class CSliptideSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSliptideSerpentCard);
};

//____________________________________________________________________________
//
class CSpitefulBullyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpitefulBullyCard);
};

//____________________________________________________________________________
//
class CStampedeDriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStampedeDriverCard);
};

//____________________________________________________________________________
//
class CStrongholdBiologistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdBiologistCard);
};

//____________________________________________________________________________
//
class CStrongholdMachinistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdMachinistCard);
};

//____________________________________________________________________________
//
class CStrongholdZeppelinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdZeppelinCard);
};

//____________________________________________________________________________
//
class CTricksterMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTricksterMageCard);
};

//____________________________________________________________________________
//
class CVoiceOfTruthCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfTruthCard);
};

//____________________________________________________________________________
//
class CComplexAutomatonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CComplexAutomatonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CFlintGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlintGolemCard);
};

//____________________________________________________________________________
//
class CFlowstoneThopterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneThopterCard);
};

//____________________________________________________________________________
//
class CKorHavenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKorHavenCard);
};

//____________________________________________________________________________
//
class CRathsEdgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRathsEdgeCard);
};

//____________________________________________________________________________
//
class CBelbesArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBelbesArmorCard);
};

//____________________________________________________________________________
//
class CPredatorFlagshipCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPredatorFlagshipCard);
};

//____________________________________________________________________________
//
class CAirBladderCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAirBladderCard);
};

//____________________________________________________________________________
//
class CFanaticalDevotionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFanaticalDevotionCard);
};

//____________________________________________________________________________
//
class CNobleStandCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNobleStandCard);
};

//____________________________________________________________________________
//
class CRisingWatersCard : public CCard
{
	DECLARE_CARD_CSTOR(CRisingWatersCard);
};

//____________________________________________________________________________
//
class CSealOfCleansingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSealOfCleansingCard);
};

//____________________________________________________________________________
//
class CSealOfDoomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSealOfDoomCard);
};

//____________________________________________________________________________
//
class CSealOfFireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSealOfFireCard);
};

//____________________________________________________________________________
//
class CSealOfRemovalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSealOfRemovalCard);
};

//____________________________________________________________________________
//
class CSealOfStrengthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSealOfStrengthCard);
};

//____________________________________________________________________________
//
class CSpiritualAsylumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpiritualAsylumCard);
};

//____________________________________________________________________________
//
class CRacklingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRacklingCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CViselingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViselingCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CInfiltrateCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CInfiltrateCard);
};

//____________________________________________________________________________
//
class COffBalanceCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(COffBalanceCard);
};

//____________________________________________________________________________
//
class CMoggAlarmCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoggAlarmCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSkyshroudClaimCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSkyshroudClaimCard);
};

//____________________________________________________________________________
//
class CBlastodermCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlastodermCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAncientHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientHydraCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCloudskateCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudskateCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDefenderEnVecCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDefenderEnVecCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CJoltingMerfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJoltingMerfolkCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPhyrexianProwlerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianProwlerCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRejuvenationChamberCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CRejuvenationChamberCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSkyshroudBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudBehemothCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);

};

//____________________________________________________________________________
//
class CSkyshroudRidgebackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudRidgebackCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);

};

//____________________________________________________________________________
//
class CWoodripperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodripperCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);

};

//____________________________________________________________________________
//
class COverlaidTerrainCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COverlaidTerrainCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CAccumulatedKnowledgeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CAccumulatedKnowledgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDazeCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDazeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CEnsnareCard : public CCard
{
	DECLARE_CARD_CSTOR(CEnsnareCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAngelicFavorCard : public CCard
{
    DECLARE_CARD_CSTOR(CAngelicFavorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	BOOL CanPlay1(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDarkTriumphCard : public CCard
{
    DECLARE_CARD_CSTOR(CDarkTriumphCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMassacreCard : public CCard
{
    DECLARE_CARD_CSTOR(CMassacreCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CMoggSalvageCard : public CCard
{
    DECLARE_CARD_CSTOR(CMoggSalvageCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CMoggToadyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggToadyCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRefreshingRainCard : public CCard
{
    DECLARE_CARD_CSTOR(CRefreshingRainCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CReverentSilenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CReverentSilenceCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSivvisRuseCard : public CCard
{
    DECLARE_CARD_CSTOR(CSivvisRuseCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CSkyshroudCutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudCutterCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSubmergeCard : public CCard
{
    DECLARE_CARD_CSTOR(CSubmergeCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CMossdogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMossdogCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CDownhillChargeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDownhillChargeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTangleWireCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTangleWireCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredTapCardAbility, CWhenCardKeywordChanged > TriggeredAbility;
	bool SetTriggerContext1(TriggeredAbility::TriggerContextType& triggerContext,
                            CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	TriggeredAbility* m_pTriggeredAbility;

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRustingGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRustingGolemCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSaprolingBurstCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSaprolingBurstCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
	
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter		m_CardFilter;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CEyeOfYawgmothCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEyeOfYawgmothCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLinSivviDefiantHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLinSivviDefiantHeroCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDominateCard : public CCard
{
	DECLARE_CARD_CSTOR(CDominateCard);
};

//____________________________________________________________________________
//
class CWildMammothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildMammothCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CVolrathTheFallenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVolrathTheFallenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAEtherBarrierCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherBarrierCard);
};

//____________________________________________________________________________
//
class CBelbesPortalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBelbesPortalCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	SingleCreatureType SelectedType;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDiviningWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiviningWitchCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPackHuntCard : public CCard
{
	DECLARE_CARD_CSTOR(CPackHuntCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CParallaxWaveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CParallaxWaveCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CParallaxTideCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CParallaxTideCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
/*
class CParallaxNexusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CParallaxNexusCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;

 bool BeforeResolution(CAbilityAction* pAction);
};
*/
//____________________________________________________________________________
//
class CTerrainGeneratorCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTerrainGeneratorCard);
};

//____________________________________________________________________________
//
class CAnimateLandCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnimateLandCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//