#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBlazingArchonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlazingArchonCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBorosGarrisonCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBorosGarrisonCard);
};

//____________________________________________________________________________
//
class CDimirAqueductCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDimirAqueductCard);
};

//____________________________________________________________________________
//
class CFistsOfIronwoodCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFistsOfIronwoodCard);
};

//____________________________________________________________________________
//
class CGlimpseTheUnthinkableCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlimpseTheUnthinkableCard);
};

//____________________________________________________________________________
//
class CGolgariRotFarmCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGolgariRotFarmCard);
};

//____________________________________________________________________________
//
class CMoroiiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoroiiCard);
};

//____________________________________________________________________________
//
class CPrimordialSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimordialSageCard);
};

//____________________________________________________________________________
//
class CPutrefyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPutrefyCard);
};

//____________________________________________________________________________
//
class CRemandCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CRemandCard);
};

//____________________________________________________________________________
//
class CSelesnyaSanctuaryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSelesnyaSanctuaryCard);
};

//____________________________________________________________________________
//
class CSurveillingSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSurveillingSpriteCard);
};

//____________________________________________________________________________
//
class CWatchwolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWatchwolfCard);
};

//____________________________________________________________________________
//
class CFlowOfIdeasCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlowOfIdeasCard);
};

//____________________________________________________________________________
//
class COvergrownTombCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(COvergrownTombCard);
};

//____________________________________________________________________________
//
class CSacredFoundryCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CSacredFoundryCard);
};

//____________________________________________________________________________
//
class CTempleGardenCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CTempleGardenCard);
};

//____________________________________________________________________________
//
class CWateryGraveCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CWateryGraveCard);
};

//____________________________________________________________________________
//
class CDarkConfidantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkConfidantCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
//
//	----------------------------- Old variant below -------------------------------
//
/*	bool SetTriggerContext1(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CNode* pToNode) const;

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);*/
};

//____________________________________________________________________________
//
class CLightningHelixCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLightningHelixCard);
};

//____________________________________________________________________________
//
class CHuntedDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedDragonCard);
};

//____________________________________________________________________________
//
class CHuntedHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedHorrorCard);
};

//____________________________________________________________________________
//
class CHuntedLammasuCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedLammasuCard);
};

//____________________________________________________________________________
//
class CHuntedPhantasmCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedPhantasmCard);
};

//____________________________________________________________________________
//
class CHuntedTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedTrollCard);
};

//____________________________________________________________________________
//
class CAgrusKosWojekVeteranCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgrusKosWojekVeteranCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBarbarianRiftcutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbarianRiftcutterCard);
};

//____________________________________________________________________________
//
class CBenevolentAncestorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenevolentAncestorCard);
};

//____________________________________________________________________________
//
class CBorosGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorosGuildmageCard);
};

//____________________________________________________________________________
//
class CBorosRecruitCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBorosRecruitCard);
};

//____________________________________________________________________________
//
class CBorosSwiftbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorosSwiftbladeCard);
};

//____________________________________________________________________________
//
class CCaregiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaregiverCard);
};

//____________________________________________________________________________
//
class CCarrionHowlerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionHowlerCard);
};

//____________________________________________________________________________
//
class CCarvenCaryatidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarvenCaryatidCard);
};

//____________________________________________________________________________
//
class CCentaurSafeguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurSafeguardCard);
};

//____________________________________________________________________________
//
class CCeruleanSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCeruleanSphinxCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCoalhaulerSwineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoalhaulerSwineCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CCourierHawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCourierHawkCard);
};

//____________________________________________________________________________
//
class CDimirCutpurseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDimirCutpurseCard);
};

//____________________________________________________________________________
//
class CDimirGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDimirGuildmageCard);
};

//____________________________________________________________________________
//
class CDimirHouseGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDimirHouseGuardCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDimirInfiltratorCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CDimirInfiltratorCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDivebomberGriffinCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CDivebomberGriffinCard);
};

//____________________________________________________________________________
//
class CDowsingShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDowsingShamanCard);
};

//____________________________________________________________________________
//
class CDrakeFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDrakeFamiliarCard);
};

//____________________________________________________________________________
//
class CDriftOfPhantasmsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDriftOfPhantasmsCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDromadPurebredCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDromadPurebredCard);
};

//____________________________________________________________________________
//
class CElvishSkysweeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishSkysweeperCard);
};

//____________________________________________________________________________
//
class CEtherealUsherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtherealUsherCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlameKinZealotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlameKinZealotCard);
};

//____________________________________________________________________________
//
class CFrenziedGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrenziedGoblinCard);
};

//____________________________________________________________________________
//
class CGateHoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGateHoundCard);
};

//____________________________________________________________________________
//
class CGolgariGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariGuildmageCard);
};

//____________________________________________________________________________
//
class CGolgariRotwurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariRotwurmCard);
};

//____________________________________________________________________________
//
class CGoliathSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoliathSpiderCard);
};

//____________________________________________________________________________
//
class CGrayscaledGharialCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CGrayscaledGharialCard);
};

//____________________________________________________________________________
//
class CGreaterForgelingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterForgelingCard);
};

//____________________________________________________________________________
//
class CGrozothCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGrozothCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHammerfistGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHammerfistGiantCard);
};

//____________________________________________________________________________
//
class CHelldozerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHelldozerCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CInfectiousHostCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfectiousHostCard);
};

//____________________________________________________________________________
//
class CIvyDancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIvyDancerCard);
};

//____________________________________________________________________________
//
class CKeeningBansheeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKeeningBansheeCard);
};

//____________________________________________________________________________
//
class CLoxodonGatekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonGatekeeperCard);
};

//____________________________________________________________________________
//
class CMortipedeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMortipedeCard);
};

//____________________________________________________________________________
//
class CNightguardPatrolCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CNightguardPatrolCard);
};

//____________________________________________________________________________
//
class CNullmageShepherdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNullmageShepherdCard);
};

//____________________________________________________________________________
//
class COathswornGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COathswornGiantCard);
};

//____________________________________________________________________________
//
class COrdruunCommandoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrdruunCommandoCard);
};

//____________________________________________________________________________
//
//class CPhytohydraCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CPhytohydraCard);
//
//private:
//	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
//};
//
////_____________________________________________________________________________
////
class CRoofstalkerWightCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CRoofstalkerWightCard);
};

//____________________________________________________________________________
//
class CSandsowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandsowerCard);
};

//____________________________________________________________________________
//
class CSelesnyaEvangelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelesnyaEvangelCard);
};

//____________________________________________________________________________
//
class CSelesnyaGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelesnyaGuildmageCard);
};

//____________________________________________________________________________
//
class CSelesnyaSagittarsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelesnyaSagittarsCard);
};

//____________________________________________________________________________
//
class CSellSwordBruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSellSwordBruteCard);
};

//____________________________________________________________________________
//
class CSewerdregCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSewerdregCard);
};

//____________________________________________________________________________
//
class CSkyknightLegionnaireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyknightLegionnaireCard);
};

//____________________________________________________________________________
//
class CStoneSeederHierophantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneSeederHierophantCard);
};

//____________________________________________________________________________
//
class CStoneshakerShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneshakerShamanCard);
};

//____________________________________________________________________________
//
class CSunhomeEnforcerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSunhomeEnforcerCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CTatteredDrakeCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTatteredDrakeCard);
};

//____________________________________________________________________________
//
class CThundersongTrumpeterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThundersongTrumpeterCard);
};

//____________________________________________________________________________
//
class CTidewaterMinionCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTidewaterMinionCard);
};

//____________________________________________________________________________
//
class CTolsimirWolfbloodCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTolsimirWolfbloodCard);
};

//____________________________________________________________________________
//
class CTorpidMolochCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTorpidMolochCard);
};

//____________________________________________________________________________
//
//class CTrophyHunterCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CTrophyHunterCard);
//
//private:
//	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//									   CCard* pCard) const;
//};

//____________________________________________________________________________
//
class CUndercityShadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndercityShadeCard);
};

//____________________________________________________________________________
//
class CUrsapineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrsapineCard);
};

//____________________________________________________________________________
//
class CVedalkenDismisserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenDismisserCard);
};

//____________________________________________________________________________
//
class CVeteranArmorerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranArmorerCard);
};

//____________________________________________________________________________
//
class CViashinoFangtailCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoFangtailCard);
};

//____________________________________________________________________________
//
class CViashinoSlasherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSlasherCard);
};

//____________________________________________________________________________
//
class CVindictiveMobCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVindictiveMobCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVinelasherKudzuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVinelasherKudzuCard);
};

//____________________________________________________________________________
//
class CVotaryOfTheConclaveCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CVotaryOfTheConclaveCard);
};

//____________________________________________________________________________
//
class CVulturousZombieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVulturousZombieCard);
};

//____________________________________________________________________________
//
class CWarTorchGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarTorchGoblinCard);
};

//____________________________________________________________________________
//
class CZephyrSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZephyrSpiritCard);
};

//____________________________________________________________________________
//
class CGlassGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlassGolemCard);
};

//____________________________________________________________________________
//
class CJunktrollerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJunktrollerCard);
};

//____________________________________________________________________________
//
class CDuskmantleHouseOfShadowCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDuskmantleHouseOfShadowCard);
};

//____________________________________________________________________________
//
class CSunhomeFortressOfTheLegionCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSunhomeFortressOfTheLegionCard);
};

//____________________________________________________________________________
//
class CSvogthosTheRestlessTombCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSvogthosTheRestlessTombCard);
};

//____________________________________________________________________________
//
class CVituGhaziTheCityTreeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CVituGhaziTheCityTreeCard);
};

//____________________________________________________________________________
//
class CBorosSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBorosSignetCard);
};

//____________________________________________________________________________
//
class CCyclopeanSnareCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCyclopeanSnareCard);
};

//____________________________________________________________________________
//
class CDimirSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDimirSignetCard);
};

//____________________________________________________________________________
//
class CGolgariSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGolgariSignetCard);
};

//____________________________________________________________________________
//
class CPeregrineMaskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPeregrineMaskCard);
};

//____________________________________________________________________________
//
class CSelesnyaSignetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSelesnyaSignetCard);
};

//____________________________________________________________________________
//
class CTerrarionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTerrarionCard);
};

//____________________________________________________________________________
//
class CBlockbusterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlockbusterCard);
};

//____________________________________________________________________________
//
class CClingingDarknessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CClingingDarknessCard);
};

//____________________________________________________________________________
//
class CFlightOfFancyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFlightOfFancyCard);
};

//____________________________________________________________________________
//
class CGalvanicArcCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGalvanicArcCard);
};

//____________________________________________________________________________
//
class CGlareOfSubdualCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGlareOfSubdualCard);
};

//____________________________________________________________________________
//
class CGolgariGerminationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGolgariGerminationCard);
};

//____________________________________________________________________________
//
class CNecromanticThirstCard : public CCard
{
	DECLARE_CARD_CSTOR(CNecromanticThirstCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CPrivilegedPositionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrivilegedPositionCard);
};

//____________________________________________________________________________
//
class CSearingMeditationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSearingMeditationCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CStrandsOfUndeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrandsOfUndeathCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CCharCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCharCard);
};

//____________________________________________________________________________
//
class CClutchOfTheUndercityCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CClutchOfTheUndercityCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCongregationAtDawnCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CCongregationAtDawnCard);
};

//____________________________________________________________________________
//
class CConvoluteCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CConvoluteCard);
};

//____________________________________________________________________________
//
class CDizzySpellCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDizzySpellCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDogpileCard : public CCard
{
	DECLARE_CARD_CSTOR(CDogpileCard);
};

//____________________________________________________________________________
//
class CFieryConclusionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFieryConclusionCard);
};

//____________________________________________________________________________
//
class CLastGaspCard : public CCard
{
	DECLARE_CARD_CSTOR(CLastGaspCard);
};

//____________________________________________________________________________
//
class CMnemonicNexusCard : public CCard
{
	DECLARE_CARD_CSTOR(CMnemonicNexusCard);
};

//____________________________________________________________________________
//
class CMuddleTheMixtureCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMuddleTheMixtureCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CQuickchangeCard : public CCard
{
	DECLARE_CARD_CSTOR(CQuickchangeCard);
};

//____________________________________________________________________________
//
class CShredMemoryCard : public CCard
{
	DECLARE_CARD_CSTOR(CShredMemoryCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CConsultTheNecrosagesCard : public CCard
{
	DECLARE_CARD_CSTOR(CConsultTheNecrosagesCard);
};

//____________________________________________________________________________
//
class CEmptyTheCatacombsCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmptyTheCatacombsCard);
};

//____________________________________________________________________________
//
class CHexCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHexCard);
};

//____________________________________________________________________________
//
class CRainOfEmbersCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRainOfEmbersCard);
};

//____________________________________________________________________________
//
class CSeismicSpikeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSeismicSpikeCard);
};

//____________________________________________________________________________
//
class CFiremaneAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFiremaneAngelCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPerilousForaysCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPerilousForaysCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlameFusilladeCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlameFusilladeCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSadisticAugermageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSadisticAugermageCard);
};

//____________________________________________________________________________
//
class CLurkingInformantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLurkingInformantCard);
};

//____________________________________________________________________________
//
class CNetherbornPhalanxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNetherbornPhalanxCard);

protected:
    CCardFilter m_CardFilter;

	typedef 
		TTriggeredAbility < CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CDryadsCaressCard : public CCard
{
	DECLARE_CARD_CSTOR(CDryadsCaressCard);
   
protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSeedSparkCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSeedSparkCard);
   
protected:	
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSeedsOfStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSeedsOfStrengthCard);
};

//____________________________________________________________________________
//
class CRibbonsOfNightCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRibbonsOfNightCard);
   
protected:	
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRollingSpoilCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRollingSpoilCard);
   
protected:	
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTwilightDroverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTwilightDroverCard);
};

//____________________________________________________________________________
//
class CPsychicDrainCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicDrainCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCircuDimirLobotomistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCircuDimirLobotomistCard);

protected:
    CCardFilter m_CardFilter;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDoublingSeasonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDoublingSeasonCard);
};

//____________________________________________________________________________
//
class CWoodwraithStranglerCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodwraithStranglerCard);
};

//____________________________________________________________________________
//
class CPollenbrightWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPollenbrightWingsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																								Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//___________________________________________________________________________
//
class CVoyagerStaffCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVoyagerStaffCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CInstillFurorCard : public CCard
{
	DECLARE_CARD_CSTOR(CInstillFurorCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CGolgariBrownscaleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariBrownscaleCard);
};

//____________________________________________________________________________
//
class CGolgariGraveTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariGraveTrollCard);

protected:
	CCardFilter m_CardFilter;
	/*typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	/*bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility* m_pTriggeredAbility;*/
	//bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGolgariThugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariThugCard);
};

//____________________________________________________________________________
//
class CGraveShellScarabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGraveShellScarabCard);
};

//____________________________________________________________________________
//
class CGreaterMossdogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterMossdogCard);
};

//____________________________________________________________________________
//
class CShamblingShellCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamblingShellCard);
};

//____________________________________________________________________________
//
class CStinkweedImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStinkweedImpCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CMoldervineCloakCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMoldervineCloakCard);
};

//____________________________________________________________________________
//
class CDarkblastCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarkblastCard);
};

//____________________________________________________________________________
//
class CLifeFromTheLoamCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CLifeFromTheLoamCard);
};

//____________________________________________________________________________
//
class CNightmareVoidCard : public CCard
{
	DECLARE_CARD_CSTOR(CNightmareVoidCard);
};

//____________________________________________________________________________
//
class CThoughtpickerWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtpickerWitchCard);
};

//____________________________________________________________________________
//
class CVigorMortisCard : public CCard
{
	DECLARE_CARD_CSTOR(CVigorMortisCard);

protected:
	bool CVigorMortisCard::BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMausoleumTurnkeyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMausoleumTurnkeyCard);
};

//____________________________________________________________________________
//
class CSavraQueenoftheGolgariCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavraQueenoftheGolgariCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
						     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	typedef
		TTriggeredAbility< CTriggeredAbility<>,CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSzadekLordofSecretsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSzadekLordofSecretsCard);

protected:
	typedef
	TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
							CBeforeDamageDealt::PlayerEventCallback, 
							&CBeforeDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CPlayer* pPlayer, Damage damage, int effect_index) const;

	TriggeredAbility* m_pTriggeredAbility;

};

//____________________________________________________________________________
//
class CPeelFromRealityCard : public CCard
{
	DECLARE_CARD_CSTOR(CPeelFromRealityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCompulsiveResearchCard : public CCard
{
	DECLARE_CARD_CSTOR(CCompulsiveResearchCard);
};

//____________________________________________________________________________
//
class CLoxodonHierarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonHierarchCard);
};

//____________________________________________________________________________
//
class CBrambleElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrambleElementalCard);
};

//____________________________________________________________________________
//
class CLoreBrokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoreBrokerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CNecroplasmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecroplasmCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTransluminantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTransluminantCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWoebringerDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWoebringerDemonCard);
};

//____________________________________________________________________________
//
class CBloodletterQuillCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodletterQuillCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPlagueBoilerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlagueBoilerCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
//class CTwistedJusticeCard : public CCard
//{
//	DECLARE_CARD_CSTOR(CTwistedJusticeCard);
//
//protected:
//	bool BeforeResolution(CAbilityAction* pAction) const;
//};
//
////____________________________________________________________________________
////
class CFlashConscriptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlashConscriptionCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CInduceParanoiaCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CInduceParanoiaCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTwistedJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwistedJusticeCard);
};

//____________________________________________________________________________
//
class CDroolingGroodionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDroolingGroodionCard);
};

//____________________________________________________________________________
//
class CDisembowelCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisembowelCard);
};

//____________________________________________________________________________
//
class CFaithsFettersCard : public CCard
{
	DECLARE_CARD_CSTOR(CFaithsFettersCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	CCardFilter m_CardFilter1;
	counted_ptr<CPwrTghAttrEnchantment> m_pAbility;
};

//____________________________________________________________________________
//
class CDreamLeashCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreamLeashCard);
};

//____________________________________________________________________________
//
class CMarkOfEvictionCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarkOfEvictionCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGleancrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGleancrawlerCard);
};

//____________________________________________________________________________
//
class CBrainspoilCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBrainspoilCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLeaveNoTraceCard : public CCard
{
	DECLARE_CARD_CSTOR(CLeaveNoTraceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBatheInLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CBatheInLightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CSelectionSupport m_ColorSelection;
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCleansingBeamCard : public CCard
{
	DECLARE_CARD_CSTOR(CCleansingBeamCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CInciteHysteriaCard : public CCard
{
	DECLARE_CARD_CSTOR(CInciteHysteriaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSurgeOfZealCard : public CCard
{
	DECLARE_CARD_CSTOR(CSurgeOfZealCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWojekEmbermageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWojekEmbermageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWojekSirenCard : public CCard
{
	DECLARE_CARD_CSTOR(CWojekSirenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMindleechMassCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindleechMassCard);
};

//____________________________________________________________________________
//
class CScreechingGriffinCard : public  CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingGriffinCard);

protected:
	CCountedCardContainer_		m_AffectedCards;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);
};

//____________________________________________________________________________
//
class CRallyTheRighteousCard : public CCard
{
	DECLARE_CARD_CSTOR(CRallyTheRighteousCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};
//____________________________________________________________________________
//
class CDimirMachinationsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDimirMachinationsCard);

protected:
    CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CMoonlightBargainCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoonlightBargainCard);

protected:
	CSelectionSupport m_PaymentSelection;
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBloodbondMarchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodbondMarchCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CThreeDreamsCard : public CCard
{
	DECLARE_CARD_CSTOR(CThreeDreamsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTunnelVisionCard : public CCard
{
	DECLARE_CARD_CSTOR(CTunnelVisionCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCloudstoneCurioCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCloudstoneCurioCard);

protected:
	CSelectionSupport m_CardSelection;
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CRaziasPurificationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRaziasPurificationCard);

protected:
	CSelectionSupport m_FirstPermanentSelection;
	CSelectionSupport m_SecondPermanentSelection;
	CSelectionSupport m_ThirdPermanentSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnFirstPermanentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSecondPermanentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnThirdPermanentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CPlayerContainer Players;
	CCountedCardContainer_ Cards;
	void FirstPermanentSelection(int nPlayer);
	void SecondPermanentSelection(int nPlayer);
	void ThirdPermanentSelection(int nPlayer);
};

//______________________________________________________________________________
//
/*
class CCrownOfConvergenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrownOfConvergenceCard);

protected:
	CCardFilter m_CardFilter;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};
*/
//____________________________________________________________________________
//
class CExcruciatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CExcruciatorCard);
};

//____________________________________________________________________________
//
class CBottledCloisterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBottledCloisterCard);

protected:
	CCountedCardContainer_ pExiled;
	
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbilityAux;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWoodwraithCorrupterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodwraithCorrupterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CFollowedFootstepsCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFollowedFootstepsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool CFollowedFootstepsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CFlickerformCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFlickerformCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//___________________________________________________________________________
//
class CTerraformerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CTerraformerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void OnLandTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_LandTypeSelection;
};

//____________________________________________________________________________
//
class CSpectralSearchlightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpectralSearchlightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void OnPlayerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_PlayerSelection;

	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
};

//____________________________________________________________________________
//
