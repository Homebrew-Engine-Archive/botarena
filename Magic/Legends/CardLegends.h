#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAcidRainCard : public CCard
{
	DECLARE_CARD_CSTOR(CAcidRainCard);
};

//____________________________________________________________________________
//
class CAdunOakenshieldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAdunOakenshieldCard);
};

//____________________________________________________________________________
//
class CAlchorsTombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAlchorsTombCard);
};

//____________________________________________________________________________
//
class CActiveVolcanoCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CActiveVolcanoCard);
};

//____________________________________________________________________________
//
class CAngusMackenzieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAngusMackenzieCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CArcadesSabbothCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArcadesSabbothCard);
};

//____________________________________________________________________________
//
class CArenaOfTheAncientsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArenaOfTheAncientsCard);
};

//____________________________________________________________________________
//
class CBarbaryApesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbaryApesCard);
};

//____________________________________________________________________________
//
class CBarktoothWarbeardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarktoothWarbeardCard);
};

//____________________________________________________________________________
//
class CBartelRuneaxeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBartelRuneaxeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCleanseCard : public CCard
{
	DECLARE_CARD_CSTOR(CCleanseCard);
};

//____________________________________________________________________________
//
class CDakkonBlackbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDakkonBlackbladeCard);
};

//____________________________________________________________________________
//
class CDarknessCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarknessCard);
};

//____________________________________________________________________________
//
class CDemonicTormentCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDemonicTormentCard);
};

//____________________________________________________________________________
//
class CDevouringDeepCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CDevouringDeepCard);
};

//____________________________________________________________________________
//
class CEmeraldDragonflyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmeraldDragonflyCard);
};

//____________________________________________________________________________
//
class CFireSpritesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFireSpritesCard);
};

//____________________________________________________________________________
//
class CFlashFloodCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFlashFloodCard);
};

//____________________________________________________________________________
//
class CGhostsOfTheDamnedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostsOfTheDamnedCard);
};

//____________________________________________________________________________
//
class CGwendlynDiCorciCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGwendlynDiCorciCard);
};

//____________________________________________________________________________
//
class CHeadlessHorsemanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeadlessHorsemanCard);
};

//____________________________________________________________________________
//
class CHellSwarmCard : public CCard
{
	DECLARE_CARD_CSTOR(CHellSwarmCard);
};

//____________________________________________________________________________
//
class CHornOfDeafeningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHornOfDeafeningCard);
};

//____________________________________________________________________________
//
class CHornetCobraCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CHornetCobraCard);
};

//____________________________________________________________________________
//
class CHyperionBlacksmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHyperionBlacksmithCard);
};

//____________________________________________________________________________
//
class CIndestructibleAuraCard : public CCard
{
	DECLARE_CARD_CSTOR(CIndestructibleAuraCard);
};

//____________________________________________________________________________
//
class CInfernalMedusaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfernalMedusaCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;

private:
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;

//private:
//	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
//											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CJacquesLeVertCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJacquesLeVertCard);
};

//____________________________________________________________________________
//
class CJasmineBorealCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJasmineBorealCard);
};

//____________________________________________________________________________
//
class CJeditOjanenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJeditOjanenCard);
};

//____________________________________________________________________________
//
class CJerrardOfTheClosedFistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJerrardOfTheClosedFistCard);
};

//____________________________________________________________________________
//
class CKasimirTheLoneWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKasimirTheLoneWolfCard);
};

//____________________________________________________________________________
//
class CKeepersOfTheFaithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeepersOfTheFaithCard);
};

//____________________________________________________________________________
//
class CKeiTakahashiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeiTakahashiCard);
};

//____________________________________________________________________________
//
class CKoboldDrillSergeantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKoboldDrillSergeantCard);
};

//____________________________________________________________________________
//
class CKoboldOverlordCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKoboldOverlordCard);
};

//____________________________________________________________________________
//
class CKoboldTaskmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKoboldTaskmasterCard);
};

//____________________________________________________________________________
//
class CLadyCaleriaCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CLadyCaleriaCard);
};

//____________________________________________________________________________
//
class CLadyEvangelaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLadyEvangelaCard);
};

//____________________________________________________________________________
//
class CLadyOrcaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLadyOrcaCard);
};

//____________________________________________________________________________
//
class CLifebloodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLifebloodCard);
};

//____________________________________________________________________________
//
class CMoatCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CMoatCard);
};

//____________________________________________________________________________
//
class CMoldDemonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoldDemonCard);
};

//____________________________________________________________________________
//
class CMountainYetiCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMountainYetiCard);
};

//____________________________________________________________________________
//
class CNicolBolasCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNicolBolasCard);
};

//____________________________________________________________________________
//
class CPalladiaMorsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPalladiaMorsCard);
};

//____________________________________________________________________________
//
class CPavelMalikiCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPavelMalikiCard);
};

//____________________________________________________________________________
//
class CPixieQueenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPixieQueenCard);
};

//____________________________________________________________________________
//
class CPrincessLucreziaCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CPrincessLucreziaCard);
};

//____________________________________________________________________________
//
class CPsychicPurgeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPsychicPurgeCard);
};

//____________________________________________________________________________
//
class CRagingBullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingBullCard);
};

//____________________________________________________________________________
//
class CRagnarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagnarCard);
};

//____________________________________________________________________________
//
class CRamirezDePietroCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRamirezDePietroCard);
};

//____________________________________________________________________________
//
class CRelicBarrierCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRelicBarrierCard);
};

//____________________________________________________________________________
//
class CRivenTurnbullCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CRivenTurnbullCard);
};

//____________________________________________________________________________
//
class CSirShandlarOfEberynCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSirShandlarOfEberynCard);
};

//____________________________________________________________________________
//
class CSivitriScarzamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSivitriScarzamCard);
};

//____________________________________________________________________________
//
class CSolkanarTheSwampKingCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSolkanarTheSwampKingCard);
};

//____________________________________________________________________________
//
class CSpinalVillainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinalVillainCard);
};

//____________________________________________________________________________
//
class CStormSeekerCard : public CCard
{
	DECLARE_CARD_CSTOR(CStormSeekerCard);
};

//____________________________________________________________________________
//
class CSunastianFalconerCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CSunastianFalconerCard);
};

//____________________________________________________________________________
//
class CRighteousAvengersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CRighteousAvengersCard);
};

//____________________________________________________________________________
//
class CTetsuoUmezawaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTetsuoUmezawaCard);
};

//____________________________________________________________________________
//
class CTheLadyOfTheMountainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTheLadyOfTheMountainCard);
};

//____________________________________________________________________________
//
class CThunderSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderSpiritCard);
};

//____________________________________________________________________________
//
class CTobiasAndrionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTobiasAndrionCard);
};

//____________________________________________________________________________
//
class CTorWaukiCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CTorWaukiCard);
};

//____________________________________________________________________________
//
class CTorstenVonUrsusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTorstenVonUrsusCard);
};

//____________________________________________________________________________
//
class CTuknirDeathlockCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTuknirDeathlockCard);
};

//____________________________________________________________________________
//
class CVaevictisAsmadiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVaevictisAsmadiCard);
};

//____________________________________________________________________________
//
class CWalkingDeadCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkingDeadCard);
};

//____________________________________________________________________________
//
class CWallOfEarthCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfEarthCard);
};

//____________________________________________________________________________
//
class CWallOfHeatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfHeatCard);
};

//____________________________________________________________________________
//
class CWallOfLightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfLightCard);
};

//____________________________________________________________________________
//
class CWallOfOppositionCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfOppositionCard);
};

//____________________________________________________________________________
//
class CXiraArienCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CXiraArienCard);
};

//____________________________________________________________________________
//
class CBorisDevilboonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorisDevilboonCard);
};

//____________________________________________________________________________
//
class CAxelrodGunnarsonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAxelrodGunnarsonCard);
};

//____________________________________________________________________________
//
class CTeleportCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTeleportCard);
};

//____________________________________________________________________________
//
class CMirrorUniverseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMirrorUniverseCard);
};

//____________________________________________________________________________
//
class CCrimsonKoboldsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrimsonKoboldsCard);
};

//____________________________________________________________________________
//
class CCrookshankKoboldsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrookshankKoboldsCard);
};

//____________________________________________________________________________
//
class CKoboldsOfKherKeepCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKoboldsOfKherKeepCard);
};

//____________________________________________________________________________
//
class CKarakasCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKarakasCard);
};

//____________________________________________________________________________
//
class CHammerheimCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHammerheimCard);
};

//____________________________________________________________________________
//
class CPendelhavenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPendelhavenCard);
};

//____________________________________________________________________________
//
class CTyphoonCard : public CCard
{
	DECLARE_CARD_CSTOR(CTyphoonCard);
};

//____________________________________________________________________________
//
class CDwarvenSongCard : public CCard
{
	DECLARE_CARD_CSTOR(CDwarvenSongCard);
};

//____________________________________________________________________________
//
class CHeavensGateCard : public CCard
{
	DECLARE_CARD_CSTOR(CHeavensGateCard);
};

//____________________________________________________________________________
//
class CSeaKingsBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeaKingsBlessingCard);
};

//____________________________________________________________________________
//
class CSylvanParadiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CSylvanParadiseCard);
};

//____________________________________________________________________________
//
class CTouchOfDarknessCard : public CCard
{
	DECLARE_CARD_CSTOR(CTouchOfDarknessCard);
};

//____________________________________________________________________________
//
class CElderSpawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElderSpawnCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStanggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStanggCard);
};

//____________________________________________________________________________
//
class CBeastsOfBogardanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBeastsOfBogardanCard);
};

//____________________________________________________________________________
//
class CUrborgCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrborgCard);
};

//____________________________________________________________________________
//
class CPartWaterCard : public CCard
{
	DECLARE_CARD_CSTOR(CPartWaterCard);
};

//____________________________________________________________________________
//
class CAErathiBerserkerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAErathiBerserkerCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CChromiumCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CChromiumCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CFrostGiantCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CFrostGiantCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CHundingGjornersenCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHundingGjornersenCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTriassicEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTriassicEggCard);

private:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMarhaultElsdragonCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMarhaultElsdragonCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGlyphOfDestructionCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CGlyphOfDestructionCard);
};

//____________________________________________________________________________
//
class CLifeChiselCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLifeChiselCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CConcordantCrossroadsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConcordantCrossroadsCard);
};

//____________________________________________________________________________
//
class CGravitySphereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGravitySphereCard);
};

//____________________________________________________________________________
//
class CLivingPlaneCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingPlaneCard);
};

//____________________________________________________________________________
//
class CStormWorldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStormWorldCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTheAbyssCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTheAbyssCard);
};

//____________________________________________________________________________
//
class CWoodElementalCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodElementalCard);

protected:
	CCardFilter m_CardFilter;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CDreamCoatCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreamCoatCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CRingOfImmortalsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfImmortalsCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAvoidFateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CAvoidFateCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTransmutationCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTransmutationCard);
};

//____________________________________________________________________________
//
class CTheTabernacleatPendrellValeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTheTabernacleatPendrellValeCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
//class CLifeMatrixCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CLifeMatrixCard);
//
//protected:
//	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
//};
//
////____________________________________________________________________________
////
class CGreatDefenderCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CGreatDefenderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEurekaCard : public CCard
{
	DECLARE_CARD_CSTOR(CEurekaCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRustCard : public CCard
{
	DECLARE_CARD_CSTOR(CRustCard);
};

//____________________________________________________________________________
//
class CJovialEvilCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CJovialEvilCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CLivonyaSiloneCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CLivonyaSiloneCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCrevasseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrevasseCard);
};

//____________________________________________________________________________
//
class CGostaDirkCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CGostaDirkCard);
};

//____________________________________________________________________________
//
class CDeadfallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeadfallCard);
};

//____________________________________________________________________________
//
class CGreatWallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGreatWallCard);
};

//____________________________________________________________________________
//
class CQuagmireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuagmireCard);
};

//____________________________________________________________________________
//
class CUndertowCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUndertowCard);
};

//____________________________________________________________________________
//
class CUrDragoCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CUrDragoCard);
};

//____________________________________________________________________________
//
class CLordMagnusCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CLordMagnusCard);
};

//____________________________________________________________________________
//
class CHalfdaneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHalfdaneCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRamsesOverdarkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRamsesOverdarkCard);
};

//____________________________________________________________________________
//
class CLesserWerewolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLesserWerewolfCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CManaDrainCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CManaDrainCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPuppetMasterCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CPuppetMasterCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTakklemaggotCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CTakklemaggotCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CStateSupportPtrType<CPlayer> m_Player;

	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAllHallowsEveCard : public CCard
{
	DECLARE_CARD_CSTOR(CAllHallowsEveCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener2;
};

//____________________________________________________________________________
//
class CFieldOfDreamsCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CFieldOfDreamsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CAngelicVoicesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicVoicesCard);
};

//____________________________________________________________________________
//
class CDisharmonyCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisharmonyCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBlazingEffigyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlazingEffigyCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGiantTurtleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantTurtleCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CNebuchadnezzarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNebuchadnezzarCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPetraSphinxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPetraSphinxCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKnowledgeVaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKnowledgeVaultCard);

protected:
	CCountedCardContainer_ pExiled;
	
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);
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
class CWallOfTombstonesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfTombstonesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGabrielAngelfireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGabrielAngelfireCard);

protected:
	CSelectionSupport m_Selection;
	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCreatureCard* pCreature1, CCreatureCard* pCreature2, int n1, int n2) const;
	bool BeforeResolutionRampage(TriggeredAbility::TriggeredActionType* pAction) const;

	int_ Rampage;
};

//____________________________________________________________________________
//