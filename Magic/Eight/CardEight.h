#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDeepwoodGhoulCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepwoodGhoulCard);
};

//____________________________________________________________________________
//
class CDuskImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskImpCard);
};

//____________________________________________________________________________
//
class CMossMonsterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMossMonsterCard);
};

//____________________________________________________________________________
//
class CNorwoodRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorwoodRangerCard);
};

//____________________________________________________________________________
//
class CCoralEelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoralEelCard);
};

//____________________________________________________________________________
//
class CFugitiveWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFugitiveWizardCard);
};

//____________________________________________________________________________
//
class CGlorySeekerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlorySeekerCard);
};

//____________________________________________________________________________
//
class CCarrionWallCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionWallCard);
};

//____________________________________________________________________________
//
class CNantukoDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoDiscipleCard);
};

//____________________________________________________________________________
//
class CPrimevalShamblerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimevalShamblerCard);
};

//____________________________________________________________________________
//
class CTidalKrakenCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CTidalKrakenCard);
};

//____________________________________________________________________________
//
class CHornedTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CHornedTrollCard);
};

//____________________________________________________________________________
//
class CRushwoodDryadCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CRushwoodDryadCard);
};

//____________________________________________________________________________
//
class CVineTrellisCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CVineTrellisCard);
};

//____________________________________________________________________________
//
class CRhoxCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxCard);
};

//____________________________________________________________________________
//
class CElvishScrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishScrapperCard);
};

//____________________________________________________________________________
//
class CForatogCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CForatogCard);
};

//____________________________________________________________________________
//
class CCanyonWildcatCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CCanyonWildcatCard);
};

//____________________________________________________________________________
//
class CLavaHoundsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CLavaHoundsCard);
};

//____________________________________________________________________________
//
class CSpittingSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpittingSpiderCard);
};

//____________________________________________________________________________
//
class CCinderWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderWallCard);
};

//____________________________________________________________________________
//
class CSwordDancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSwordDancerCard);
};

//____________________________________________________________________________
//
class CShockTroopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShockTroopsCard);
};

//____________________________________________________________________________
//
class CNekrataalCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CNekrataalCard);
};

//____________________________________________________________________________
//
class CSeveredLegionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeveredLegionCard);
};

//____________________________________________________________________________
//
class CLordOfTheUndeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfTheUndeadCard);
};

//____________________________________________________________________________
//
class CPhyrexianPlaguelordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianPlaguelordCard);
};

//____________________________________________________________________________
//
class CVampiricSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVampiricSpiritCard);
};

//____________________________________________________________________________
//
class CGluttonousZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGluttonousZombieCard);
};

//____________________________________________________________________________
//
class CSwarmOfRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSwarmOfRatsCard);
};

//____________________________________________________________________________
//
class CGiantBadgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantBadgerCard);
};

//____________________________________________________________________________
//
class CRidgelineRagerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CRidgelineRagerCard);
};

//____________________________________________________________________________
//
class CCoastalHornclawCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCoastalHornclawCard);
};

//____________________________________________________________________________
//
class CMasterDecoyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterDecoyCard);
};

//____________________________________________________________________________
//
class CSuntailHawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSuntailHawkCard);
};

//____________________________________________________________________________
//
class CSageOfLatNamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSageOfLatNamCard);
};

//____________________________________________________________________________
//
class CPuppeteerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPuppeteerCard);
};

//____________________________________________________________________________
//
class CUrborgVolcanoCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrborgVolcanoCard);
};

//____________________________________________________________________________
//
class CShivanOasisCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShivanOasisCard );
};

//____________________________________________________________________________
//
class CSaltMarshCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSaltMarshCard);
};

//____________________________________________________________________________
//
class CElfhamePalaceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CElfhamePalaceCard);
};

//____________________________________________________________________________
//
class CCoastalTowerCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCoastalTowerCard);
};

//____________________________________________________________________________
//
class CConcentrateCard : public CCard
{
	DECLARE_CARD_CSTOR(CConcentrateCard);
};

//____________________________________________________________________________
//
class CNaturalizeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CNaturalizeCard);
};

//____________________________________________________________________________
//
class CSolidarityCard : public CCard
{
	DECLARE_CARD_CSTOR(CSolidarityCard);
};

//____________________________________________________________________________
//
class CDemystifyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDemystifyCard);
};

//____________________________________________________________________________
//
class CManaLeakCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CManaLeakCard);
};

//____________________________________________________________________________
//
class CCatalogCard : public CCard
{
	DECLARE_CARD_CSTOR(CCatalogCard);
};

//____________________________________________________________________________
//
class CDemolishCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDemolishCard);
};

//____________________________________________________________________________
//
class CSkullOfOrmCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkullOfOrmCard);
};

//____________________________________________________________________________
//
class CDivingGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDivingGriffinCard);
};

//____________________________________________________________________________
//
class CFodderCannonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFodderCannonCard);
};

//____________________________________________________________________________
//
class CPlanarPortalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlanarPortalCard);
};

//____________________________________________________________________________
//
class CLlanowarBehemothCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarBehemothCard);
};

//____________________________________________________________________________
//
class CDeathgazerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathgazerCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CAvenFlockCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenFlockCard);
};

//____________________________________________________________________________
//
class CAvenCloudchaserCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenCloudchaserCard);
};

//____________________________________________________________________________
//
class CSpiketailHatchlingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiketailHatchlingCard);
};

//____________________________________________________________________________
//
class CAngelOfMercyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfMercyCard);
};

//____________________________________________________________________________
//
class CEnrageCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CEnrageCard);
};

//____________________________________________________________________________
//
class CNaturalAffinityCard : public CCard
{
	DECLARE_CARD_CSTOR(CNaturalAffinityCard);
};

//____________________________________________________________________________
//
class CRainOfBladesCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRainOfBladesCard);
};

//____________________________________________________________________________
//
class CSearingWindCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSearingWindCard);
};

//____________________________________________________________________________
//
class CPlagueWindCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlagueWindCard);
};

//____________________________________________________________________________
//
class CReviveCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReviveCard);
};

//____________________________________________________________________________
//
class CSizzleCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSizzleCard);
};

//____________________________________________________________________________
//
class CZombifyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CZombifyCard);
};

//____________________________________________________________________________
//
class CSeverSoulCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeverSoulCard);
};

//____________________________________________________________________________
//
class CDiabolicTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CDiabolicTutorCard);
};

//____________________________________________________________________________
//
class CPrimevalForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimevalForceCard);
};

//____________________________________________________________________________
//
class CMurderousBetrayalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMurderousBetrayalCard);
};

//____________________________________________________________________________
//
class CMindSlashCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMindSlashCard);
};

//____________________________________________________________________________
//
class CHolyDayCard : public CCard
{
	DECLARE_CARD_CSTOR(CHolyDayCard);
};

//____________________________________________________________________________
//
class CChastiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CChastiseCard);
};

//____________________________________________________________________________
//
class CFlashCounterCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFlashCounterCard);
};

//____________________________________________________________________________
//
class CPeachGardenOathCard : public CCard
{
	DECLARE_CARD_CSTOR(CPeachGardenOathCard);
};

//____________________________________________________________________________
//
class CIndexCard : public CCard
{
	DECLARE_CARD_CSTOR(CIndexCard);
};

//____________________________________________________________________________
//
class CMerchantScrollCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CMerchantScrollCard);
};

//____________________________________________________________________________
//
class CMerchantOfSecretsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerchantOfSecretsCard);
};

//____________________________________________________________________________
//
class CSneakyHomunculusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSneakyHomunculusCard);
};

//____________________________________________________________________________
//
class CViashinoSandstalkerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSandstalkerCard);
};

//____________________________________________________________________________
//
class CRavenousRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousRatsCard);
};

//____________________________________________________________________________
//
class CSpreadingAlgaeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpreadingAlgaeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;

//	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CTradeRoutesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTradeRoutesCard);
};

//____________________________________________________________________________
//
class CExecuteCard : public CCard
{
	DECLARE_CARD_CSTOR(CExecuteCard);
};

//____________________________________________________________________________
//
class CSlayCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlayCard);
};

//____________________________________________________________________________
//
class CViciousHungerCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CViciousHungerCard);
};

//____________________________________________________________________________
//
class CElvishPioneerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishPioneerCard);
};

//____________________________________________________________________________
//
class CAmbitionsCostCard : public CCard
{
	DECLARE_CARD_CSTOR(CAmbitionsCostCard);
};

//____________________________________________________________________________
//
class COrcishSpyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishSpyCard);
};

//____________________________________________________________________________
//
class CPlowUnderCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPlowUnderCard);
};

//____________________________________________________________________________
//
class CPanicAttackCard : public CCard
{
	DECLARE_CARD_CSTOR(CPanicAttackCard);
};

//____________________________________________________________________________
//
class CBriberyCard : public CCard
{
	DECLARE_CARD_CSTOR(CBriberyCard);
};

//____________________________________________________________________________
//
class CDehydrationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDehydrationCard);
};

//____________________________________________________________________________
//
class CRedeemCard : public CCard
{
	DECLARE_CARD_CSTOR(CRedeemCard);
};

//____________________________________________________________________________
//
class CObliterateCard : public CCard
{
	DECLARE_CARD_CSTOR(CObliterateCard);
};

//____________________________________________________________________________
//
class CChokeCard : public CCard
{
	DECLARE_CARD_CSTOR(CChokeCard);
};

//____________________________________________________________________________
//
class CLivingTerrainCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingTerrainCard);
};

//____________________________________________________________________________
//
class CIvoryMaskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIvoryMaskCard);
};

//____________________________________________________________________________
//
class CCollectiveUnconsciousCard : public CCard
{
	DECLARE_CARD_CSTOR(CCollectiveUnconsciousCard);
};

//____________________________________________________________________________
//
class CBalanceOfPowerCard : public CCard
{
	DECLARE_CARD_CSTOR(CBalanceOfPowerCard);
};

//____________________________________________________________________________
//
class CMindSludgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindSludgeCard);
};

//____________________________________________________________________________
//
class CGaeasHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGaeasHeraldCard);
};

//____________________________________________________________________________
//
class CMaggotCarrierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaggotCarrierCard);
};

//____________________________________________________________________________
//
class CAvenFisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenFisherCard);
};

//____________________________________________________________________________
//
class CUnderworldDreamsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUnderworldDreamsCard);
};

//____________________________________________________________________________
//
class CMoggSentryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggSentryCard);
};

//____________________________________________________________________________
//
class CDistortingLensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDistortingLensCard);
};

//____________________________________________________________________________
//
class CLarcenyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLarcenyCard);
};

//____________________________________________________________________________
//
class CUrzasArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUrzasArmorCard);
};

//____________________________________________________________________________
//
class CEmperorCrocodileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmperorCrocodileCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CLesserGargadonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLesserGargadonCard);
};

//____________________________________________________________________________
//
class CEliteJavelineerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEliteJavelineerCard);
};

//____________________________________________________________________________
//
class CRewindCard : public CCard
{
	DECLARE_CARD_CSTOR(CRewindCard);
};

//____________________________________________________________________________
//
class CFecundityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFecundityCard);
};

//____________________________________________________________________________
//
class CGuerrillaTacticsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CGuerrillaTacticsCard);
};

//____________________________________________________________________________
//
class CCuriosityCard : public CCard
{
	DECLARE_CARD_CSTOR(CCuriosityCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CPlayer* pToPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CFertileGroundCard : public CCard
{
	DECLARE_CARD_CSTOR(CFertileGroundCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CCoastalPiracyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCoastalPiracyCard);
};

//____________________________________________________________________________
//
class CDeathPitOfferingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeathPitOfferingCard);
};

//____________________________________________________________________________
//
class CWarpedDevotionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarpedDevotionCard);
};

//____________________________________________________________________________
//
class CNoblePurposeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNoblePurposeCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CDeathPitsOfRathCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeathPitsOfRathCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CIntruderAlarmCard : public CCard
{
	DECLARE_CARD_CSTOR(CIntruderAlarmCard);
};

//____________________________________________________________________________
//
class CWrathOfMaritLageCard : public CCard
{
	DECLARE_CARD_CSTOR(CWrathOfMaritLageCard);
};

//____________________________________________________________________________
//
class CGravePactCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGravePactCard);
};

//____________________________________________________________________________
//
class CPhyrexianArenaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianArenaCard);
};

//____________________________________________________________________________
//
class CRukhEggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRukhEggCard);
};

//____________________________________________________________________________
//
class CBlindingAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindingAngelCard);
};

//____________________________________________________________________________
//
class CCowardiceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCowardiceCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CFurnaceOfRathCard : public CCard
{
	DECLARE_CARD_CSTOR(CFurnaceOfRathCard);
};

//____________________________________________________________________________
//
class CStarCompassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStarCompassCard);
};

//____________________________________________________________________________
//
class CThievesAuctionCard : public CCard
{
	DECLARE_CARD_CSTOR(CThievesAuctionCard);
};

//____________________________________________________________________________
//
class CBrassHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrassHeraldCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//

class CTwoheadedDragonCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTwoheadedDragonCard);
};

//____________________________________________________________________________
//
class CAvatarOfHopeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvatarOfHopeCard);
};

//____________________________________________________________________________
//
class CStoryCircleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStoryCircleCard);
};

//____________________________________________________________________________
//
class CShiftingSkyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShiftingSkyCard);
};

//____________________________________________________________________________
//
class CHuntedWumpusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedWumpusCard);
};

//____________________________________________________________________________
//
class COraclesAttendantsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COraclesAttendantsCard);
};

//____________________________________________________________________________
//
class CSeaEagleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaEagleCard);
};

//____________________________________________________________________________
//
class CSilverbackApeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverbackApeCard);
};

//____________________________________________________________________________
//
class CBloodMoonCard : public CCard
{
	DECLARE_CARD_CSTOR(CBloodMoonCard);
};

//____________________________________________________________________________
//
class CEnormousBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnormousBalothCard);
};

//____________________________________________________________________________
//
class CVexingArcanixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVexingArcanixCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//