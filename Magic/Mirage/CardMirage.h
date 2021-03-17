#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDisempowerCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDisempowerCard);
};

//____________________________________________________________________________
//
class CFemerefHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFemerefHealerCard);
};

//____________________________________________________________________________
//
class CFemerefScoutsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFemerefScoutsCard);
};

//____________________________________________________________________________
//
class CIronTuskElephantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIronTuskElephantCard);
};

//____________________________________________________________________________
//
class CMelesseSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMelesseSpiritCard);
};

//____________________________________________________________________________
//
class CZuberiGoldenFeatherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CZuberiGoldenFeatherCard);
};

//____________________________________________________________________________
//
class CAzimaetDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAzimaetDrakeCard);
};

//____________________________________________________________________________
//
class CBayFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBayFalconCard);
};

//____________________________________________________________________________
//
class CCeruleanWyvernCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCeruleanWyvernCard);
};

//____________________________________________________________________________
//
class CBreathstealerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBreathstealerCard);
};

//____________________________________________________________________________
//
class CDirtwaterWraithCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDirtwaterWraithCard);
};

//____________________________________________________________________________
//
class CDreadSpecterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadSpecterCard);

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
class CFetidHorrorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFetidHorrorCard);
};

//____________________________________________________________________________
//
class CPhyrexianTributeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianTributeCard);
};

//____________________________________________________________________________
//
class CRestlessDeadCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRestlessDeadCard);
};

//____________________________________________________________________________
//
class CSewerRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSewerRatsCard);
};

//____________________________________________________________________________
//
class CShaperGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShaperGuildmageCard);
};

//____________________________________________________________________________
//
class CArmorerGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmorerGuildmageCard);
};

//____________________________________________________________________________
//
class CBlisteringBarrierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlisteringBarrierCard);
};

//____________________________________________________________________________
//
class CBurningPalmEfreetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBurningPalmEfreetCard);
};

//____________________________________________________________________________
//
class CChaosCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CChaosCharmCard);
};

//____________________________________________________________________________
//
class CIvoryCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CIvoryCharmCard);
};

//____________________________________________________________________________
//
class CDwarvenMinerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenMinerCard);
};

//____________________________________________________________________________
//
class CDwarvenNomadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenNomadCard);
};

//____________________________________________________________________________
//
class CFlameElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlameElementalCard);
};

//____________________________________________________________________________
//
class CWildfireEmissaryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWildfireEmissaryCard);
};

//____________________________________________________________________________
//
class CBrushwaggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrushwaggCard);
};

//____________________________________________________________________________
//
class CCanopyDragonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCanopyDragonCard);
};

//____________________________________________________________________________
//
class CCrashOfRhinosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrashOfRhinosCard);
};

//____________________________________________________________________________
//
class CGiantMantisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantMantisCard);
};

//____________________________________________________________________________
//
class CGibberingHyenasCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGibberingHyenasCard);
};

//____________________________________________________________________________
//
class CGrangerGuildmageCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CGrangerGuildmageCard);
};

//____________________________________________________________________________
//
class CKarooMeerkatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarooMeerkatCard);
};

//____________________________________________________________________________
//
class CNettletoothDjinnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNettletoothDjinnCard);
};

//____________________________________________________________________________
//
class CUktabiFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUktabiFaerieCard);
};

//____________________________________________________________________________
//
class CUnyaroBeeStingCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CUnyaroBeeStingCard);
};

//____________________________________________________________________________
//
class CVillageElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVillageElderCard);
};

//____________________________________________________________________________
//
class CWildElephantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildElephantCard);
};

//____________________________________________________________________________
//
class CBenthicDjinnCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBenthicDjinnCard);
};

//____________________________________________________________________________
//
class CSereneHeartCard : public CCard
{
	DECLARE_CARD_CSTOR(CSereneHeartCard);
};

//____________________________________________________________________________
//
class CSpiritOfTheNightCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritOfTheNightCard);
};

//____________________________________________________________________________
//
class CTranquilDomainCard : public CCard
{
	DECLARE_CARD_CSTOR(CTranquilDomainCard);
};

//____________________________________________________________________________
//
class CWindreaperFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindreaperFalconCard);
};

//____________________________________________________________________________
//
class CHarborGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarborGuardianCard);
};

//____________________________________________________________________________
//
class CHazeriderDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHazeriderDrakeCard);
};

//____________________________________________________________________________
//
class CLeeringGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLeeringGargoyleCard);
};

//____________________________________________________________________________
//
class CCircleOfDespairCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCircleOfDespairCard);
};

//____________________________________________________________________________
//
class CUnfulfilledDesiresCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CUnfulfilledDesiresCard);
};

//____________________________________________________________________________
//
class CEmberwildeCaliphCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmberwildeCaliphCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility
		::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CShaukusMinionCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CShaukusMinionCard);
};

//____________________________________________________________________________
//
class CJungleTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CJungleTrollCard);
};

//____________________________________________________________________________
//
class CRockBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRockBasiliskCard);

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
class CSavageTwisterCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSavageTwisterCard);
};

//____________________________________________________________________________
//
class CEnergyBoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEnergyBoltCard);
};

//____________________________________________________________________________
//
class CVitalizingCascadeCard : public CCard
{
	DECLARE_CARD_CSTOR(CVitalizingCascadeCard);
};

//____________________________________________________________________________
//
class CZebraUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZebraUnicornCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility
		::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CAmuletOfUnmakingCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAmuletOfUnmakingCard);
};

//____________________________________________________________________________
//
class CElixirOfVitalityCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CElixirOfVitalityCard);
};

//____________________________________________________________________________
//
class CIgneousGolemCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CIgneousGolemCard);
};

//____________________________________________________________________________
//
class CLionsEyeDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CLionsEyeDiamondCard);
};

//____________________________________________________________________________
//
class CPaupersCageCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CPaupersCageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CMisersCageCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMisersCageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTelimTorsDartsCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTelimTorsDartsCard);
};

//____________________________________________________________________________
//
class CBadRiverCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CBadRiverCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFloodPlainCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CFloodPlainCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGrasslandsCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGrasslandsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRockyTarPitCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CRockyTarPitCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMountainValleyCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMountainValleyCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAlarumCard : public CCard
{
	DECLARE_CARD_CSTOR(CAlarumCard);
};

//____________________________________________________________________________
//
class CAuspiciousAncestorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuspiciousAncestorCard);
};

//____________________________________________________________________________
//
class CBlindingLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlindingLightCard);
};

//____________________________________________________________________________
//
class CCivicGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCivicGuildmageCard);
};

//____________________________________________________________________________
//
class CMireShadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMireShadeCard);
};

//____________________________________________________________________________
//
class CRashidaScalebaneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRashidaScalebaneCard);
};

//____________________________________________________________________________
//
class CShadowGuildmageCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowGuildmageCard);
};

//____________________________________________________________________________
//
class CDivineRetributionCard : public CCard
{
	DECLARE_CARD_CSTOR(CDivineRetributionCard);
};

//____________________________________________________________________________
//
class CJabarisInfluenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CJabarisInfluenceCard);
};

//____________________________________________________________________________
//
class CMtendaGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMtendaGriffinCard);
};

//____________________________________________________________________________
//
class CNullChamberCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNullChamberCard);
};

//____________________________________________________________________________
//
class CSacredMesaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSacredMesaCard);
};

//____________________________________________________________________________
//
class CShadowbaneCard : public CCard
{
	DECLARE_CARD_CSTOR(CShadowbaneCard);
};

//____________________________________________________________________________
//
class CSpectralGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralGuardianCard);
};

//____________________________________________________________________________
//
class CSkulkingGhostCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkulkingGhostCard);
};

//____________________________________________________________________________
//
class CWallOfResistanceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfResistanceCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
};

//____________________________________________________________________________
//
//class CWardOfLightsCard : public CCard
//{
//	DECLARE_CARD_CSTOR(CWardOfLightsCard);
//};
//
//____________________________________________________________________________
//
class CKukemssaSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKukemssaSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMerfolkSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkSeerCard);
};

//____________________________________________________________________________
//
class CSeaScryerCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaScryerCard);
};

//____________________________________________________________________________
//
class CTidalWaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CTidalWaveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWaveElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWaveElementalCard);
};

//____________________________________________________________________________
//
class CHarbingerOfNightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarbingerOfNightCard);
};

//____________________________________________________________________________
//
class CAfterlifeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAfterlifeCard);
};

//____________________________________________________________________________
//
class CGrimFeastCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrimFeastCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCrimsonRocCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CCrimsonRocCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CGoblinSoothsayerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinSoothsayerCard);
};

//____________________________________________________________________________
//
class CHauntingApparitionCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CHauntingApparitionCard);
};

//____________________________________________________________________________
//
class CJunglePatrolCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CJunglePatrolCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLocustSwarmCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLocustSwarmCard);
};

//____________________________________________________________________________
//
class CPurrajOfUrborgCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPurrajOfUrborgCard);
};

//____________________________________________________________________________
//
class CPyricSalamanderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPyricSalamanderCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRadiantEssenceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRadiantEssenceCard);
};

//____________________________________________________________________________
//
class CSubterraneanSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSubterraneanSpiritCard);
};

//____________________________________________________________________________
//
class CSuqAtaFirewalkerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CSuqAtaFirewalkerCard);
};

//____________________________________________________________________________
//
class CEbonyCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CEbonyCharmCard);
};

//____________________________________________________________________________
//
class CPrismaticBoonCard : public CCard
{
	DECLARE_CARD_CSTOR(CPrismaticBoonCard);
};

//____________________________________________________________________________
//
//class CSeedlingCharmCard : public CChgPwrTghAttrSpellCard
//{
//	DECLARE_CARD_CSTOR(CSeedlingCharmCard);
//};
//
////____________________________________________________________________________
////
class CWitheringBoonCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CWitheringBoonCard);
};

//____________________________________________________________________________
//
class CGoblinScoutsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGoblinScoutsCard);
};

//____________________________________________________________________________
//
class CKaerveksHexCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CKaerveksHexCard);
};

//____________________________________________________________________________
//
class CTropicalStormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTropicalStormCard);
};

//____________________________________________________________________________
//
class CBarbedBackWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbedBackWurmCard);
};

//____________________________________________________________________________
//
class CHorribleHordesCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHorribleHordesCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTeekasDragonCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CTeekasDragonCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CJungleWurmCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CJungleWurmCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CWallOfRootsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfRootsCard);
};

//____________________________________________________________________________
//
class CRitualOfSteelCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRitualOfSteelCard);
};

//____________________________________________________________________________
//
class CBoneHarvestCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBoneHarvestCard);
};

//____________________________________________________________________________
//
class CJoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CJoltCard);
};

//____________________________________________________________________________
//
class CTelimTorsEdictCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTelimTorsEdictCard);
};

//____________________________________________________________________________
//
class CChaosphereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChaosphereCard);
};

//____________________________________________________________________________
//
class CCadaverousBloomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCadaverousBloomCard);
};

//____________________________________________________________________________
//
class CShaukuEndbringerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShaukuEndbringerCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBindingAgonyCard : public CCard
{
	DECLARE_CARD_CSTOR(CBindingAgonyCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CChariotOfTheSunCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChariotOfTheSunCard);
};

//____________________________________________________________________________
//
class CMangarasBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CMangarasBlessingCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
//class CMtendaLionCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CMtendaLionCard);
//};
//
////____________________________________________________________________________
////
class CRagingSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingSpiritCard);
};

//____________________________________________________________________________
//
class CRavenousVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousVampireCard);
};

//____________________________________________________________________________
//
class CSawbackManticoreCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSawbackManticoreCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPrismaticLaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CPrismaticLaceCard);
};

//____________________________________________________________________________
//
class CBurningShieldAskariCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBurningShieldAskariCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CCadaverousKnightCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCadaverousKnightCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CFemerefKnightCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFemerefKnightCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CJolraelsCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJolraelsCentaurCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CMtendaHerderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMtendaHerderCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CSearingSpearAskariCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSearingSpearAskariCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CSidarJabariCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSidarJabariCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CTelimTorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelimTorCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CZhalfirinCommanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhalfirinCommanderCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CZhalfirinKnightCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CZhalfirinKnightCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CAgilityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAgilityCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//___________________________________________________________________________
//
class CCarrionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCarrionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIlluminationCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CIlluminationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CForsakenWastesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CForsakenWastesCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CVigilantMartyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVigilantMartyrCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CChokingSandsCard : public CCard
{
	DECLARE_CARD_CSTOR(CChokingSandsCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CSoulRendCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulRendCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCryptCobraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptCobraCard);

private:
	bool SetTriggerContext(CTriggeredPoisonAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CMindHarnessCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindHarnessCard);

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
class CPrismaticCircleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrismaticCircleCard);

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
class CThirstCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CThirstCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CUrborgPantherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgPantherCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
};

//____________________________________________________________________________
//
class CPoliticalTrickeryCard : public CCard
{
	DECLARE_CARD_CSTOR(CPoliticalTrickeryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	const CCard* m_pCard1;
	const CCard* m_pCard2;
};

//____________________________________________________________________________
//
class CHakimLoreweaverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHakimLoreweaverCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWallOfCorpsesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfCorpsesCard);
};

//____________________________________________________________________________
//
class CAsmiraHolyAvengerCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CAsmiraHolyAvengerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};
 
//____________________________________________________________________________
//
class CVentifactBottleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVentifactBottleCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMerfolkRaidersCard : public CLandwalkCreatureCard 
{
	DECLARE_CARD_CSTOR(CMerfolkRaidersCard);

};
 
//____________________________________________________________________________
//
class CSandbarCrocodileCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSandbarCrocodileCard);

};
 
//____________________________________________________________________________
//
class CTeferisDrakeCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CTeferisDrakeCard);

};
 
//____________________________________________________________________________
//
class CTeferisIsleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTeferisIsleCard);

};
 
//____________________________________________________________________________
//
class CMistDragonCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMistDragonCard);

};
 
//____________________________________________________________________________
//
class CRealityRippleCard : public CCard
{
	DECLARE_CARD_CSTOR(CRealityRippleCard);
};

//____________________________________________________________________________
//
class CYareCard : public CCard
{
	DECLARE_CARD_CSTOR(CYareCard);
protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAleatoryCard : public CCard
{
	DECLARE_CARD_CSTOR(CAleatoryCard);

protected:
	CSelectionSupport m_FlipSelection;
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CFreneticEfreetCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFreneticEfreetCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CSeedsOfInnocenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeedsOfInnocenceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTaniwhaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTaniwhaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAfiyaGroveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAfiyaGroveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CPhyrexianDreadnoughtCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianDreadnoughtCard);

protected:
	CSelectionSupport m_CreatureSelection;
	CSelectionSupport m_MainSelection;
	CCountedCardContainer pCreatures;
	CCountedCardContainer pRemainingCreatures;
	int nSacrificedPower;
	int nRemainingPower;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnMainSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void CreatureSelection(CPlayer* pPlayer);
	void Finale(CPlayer* pPlayer);
};

//____________________________________________________________________________
//
class CMalignantGrowthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMalignantGrowthCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CTombstoneStairwellCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTombstoneStairwellCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution(CAbilityAction* pAction);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener2;	// Listen to this card's zone changes
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	CCountedCardContainer pTokens;
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener1;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CTaintedSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTaintedSpecterCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CSealedFateCard : public CCard
{
	DECLARE_CARD_CSTOR(CSealedFateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CMangarasEquityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMangarasEquityCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility1;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
						CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility2;

	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage);
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard, CCreatureCard* pToCreature, Damage damage);
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cBlack;
	bool cRed;
};

//____________________________________________________________________________
//
/*
class CSapphireCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CSapphireCharmCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};*/
//______________________________________________________________________________
//
class CQuirionElvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionElvesCard);

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
class CRootsOfLifeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRootsOfLifeCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, Orientation fromOrientation, Orientation toOrientation);
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cIsland;
	bool cSwamp;
};

//____________________________________________________________________________
//
class CBazaarOfWondersCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBazaarOfWondersCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility2;

	bool BeforeResolution(TriggeredAbility2::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CCatacombDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCatacombDragonCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CShallowGraveCard: public CCard
{
	DECLARE_CARD_CSTOR (CShallowGraveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSoulshriekCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulshriekCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSandGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandGolemCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CZombieMobCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieMobCard);

protected:
	CCardFilter m_CardFilter;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CEtherWellCard : public CCard
{
	DECLARE_CARD_CSTOR(CEtherWellCard);

protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CDiscordantSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscordantSpiritCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CReignOfTerrorCard : public CCard
{
	DECLARE_CARD_CSTOR(CReignOfTerrorCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCinderCloudCard : public CCard
{
	DECLARE_CARD_CSTOR(CCinderCloudCard);

protected:
	bool BeforeResolution (CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKaerveksPurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CKaerveksPurgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int_ m_nCards;
	int_ nPower;
	int_ pTargetController;
};

//____________________________________________________________________________
//
class CAcidicDaggerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAcidicDaggerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDeliriumCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeliriumCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	class CDeliriumTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CZirilanOfTheClawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZirilanOfTheClawCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CBasaltGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBasaltGolemCard);

protected:
	CCardFilter m_CardFilter;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CConsumingFerocityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CConsumingFerocityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//