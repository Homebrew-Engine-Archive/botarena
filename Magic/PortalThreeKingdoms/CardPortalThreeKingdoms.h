#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAlertShuInfantryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlertShuInfantryCard);
};

//____________________________________________________________________________
//
class CBarbarianHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbarianHordeCard);
};

//____________________________________________________________________________
//
class CBorrowing100000ArrowsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBorrowing100000ArrowsCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBrilliantPlanCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrilliantPlanCard);
};

//____________________________________________________________________________
//
class CBurningFieldsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBurningFieldsCard);
};

//____________________________________________________________________________
//
class CCaptureOfJingzhouCard : public CCard
{
	DECLARE_CARD_CSTOR(CCaptureOfJingzhouCard);
};

//____________________________________________________________________________
//
class CCorruptCourtOfficialCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorruptCourtOfficialCard);
};

//____________________________________________________________________________
//
class CCorruptEunuchsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorruptEunuchsCard);
};

//____________________________________________________________________________
//
class CCouncilOfAdvisorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCouncilOfAdvisorsCard);
};

//____________________________________________________________________________
//
class CCounterintelligenceCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCounterintelligenceCard);
};

//____________________________________________________________________________
//
class CDeceptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeceptionCard);
};

//____________________________________________________________________________
//
class CDesertSandstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDesertSandstormCard);
};

//____________________________________________________________________________
//
class CDesperateChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDesperateChargeCard);
};

//____________________________________________________________________________
//
class CFalseDefeatCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFalseDefeatCard);
};

//____________________________________________________________________________
//
class CFalseMourningCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFalseMourningCard);
};

//____________________________________________________________________________
//
class CFamineCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFamineCard);
};

//____________________________________________________________________________
//
class CFireAmbushCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFireAmbushCard);
};

//____________________________________________________________________________
//
class CFlankingTroopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlankingTroopsCard);
};

//____________________________________________________________________________
//
class CForcedRetreatCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CForcedRetreatCard);
};

//____________________________________________________________________________
//
class CForestBearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForestBearCard);
};

//____________________________________________________________________________
//
class CGhostlyVisitCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGhostlyVisitCard);
};

//____________________________________________________________________________
//
class CGuanYus1000LiMarchCard : public CCard
{
	DECLARE_CARD_CSTOR(CGuanYus1000LiMarchCard);
};

//____________________________________________________________________________
//
class CHuangZhongShuGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuangZhongShuGeneralCard);
};

//____________________________________________________________________________
//
class CHuntingCheetahCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntingCheetahCard);
};

//____________________________________________________________________________
//
class CImperialRecruiterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CImperialRecruiterCard);
};

//____________________________________________________________________________
//
class CImperialSealCard : public CCard//CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CImperialSealCard);
};

//____________________________________________________________________________
//
class CIndependentTroopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIndependentTroopsCard);
};

//____________________________________________________________________________
//
class CKongmingSleepingDragonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKongmingSleepingDragonCard);
};

//____________________________________________________________________________
//
class CMengHuoBarbarianKingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMengHuoBarbarianKingCard);
};

//____________________________________________________________________________
//
class CMengHuosHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMengHuosHordeCard);
};

//____________________________________________________________________________
//
class CMisfortunesGainCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMisfortunesGainCard);
};

//____________________________________________________________________________
//
class CMountainBanditCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMountainBanditCard);
};

//____________________________________________________________________________
//
class CPoisonArrowCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPoisonArrowCard);
};

//____________________________________________________________________________
//
class CPreemptiveStrikeCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CPreemptiveStrikeCard);
};

//____________________________________________________________________________
//
class CRavagesOfWarCard : public CCard
{
	DECLARE_CARD_CSTOR(CRavagesOfWarCard);
};

//____________________________________________________________________________
//
class CRavagingHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRavagingHordeCard);
};

//____________________________________________________________________________
//
class CRedCliffsArmadaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRedCliffsArmadaCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRenegadeTroopsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRenegadeTroopsCard);
};

//____________________________________________________________________________
//
class CReturnToBattleCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReturnToBattleCard);
};

//____________________________________________________________________________
//
class CRockslideAmbushCard : public CCard
{
	DECLARE_CARD_CSTOR(CRockslideAmbushCard);
};

//____________________________________________________________________________
//
class CSagesKnowledgeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSagesKnowledgeCard);
};

//____________________________________________________________________________
//
class CShuDefenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuDefenderCard);
};

//____________________________________________________________________________
//
class CShuEliteInfantryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuEliteInfantryCard);
};

//____________________________________________________________________________
//
class CShuFarmerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuFarmerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CShuFootSoldiersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuFootSoldiersCard);
};

//____________________________________________________________________________
//
class CShuGrainCaravanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuGrainCaravanCard);
};

//____________________________________________________________________________
//
class CShuSoldierFarmersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuSoldierFarmersCard);
};

//____________________________________________________________________________
//
class CSimaYiWeiFieldMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimaYiWeiFieldMarshalCard);
};

//____________________________________________________________________________
//
class CSlashingTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlashingTigerCard);
};

//____________________________________________________________________________
//
class CSouthernElephantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSouthernElephantCard);
};

//____________________________________________________________________________
//
class CSpringOfEternalPeaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpringOfEternalPeaceCard);
};

//____________________________________________________________________________
//
class CStolenGrainCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CStolenGrainCard);
};

//____________________________________________________________________________
//
class CStrategicPlanningCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrategicPlanningCard);
};

//____________________________________________________________________________
//
class CStrawSoldiersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrawSoldiersCard);
};

//____________________________________________________________________________
//
class CTaoistHermitCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTaoistHermitCard);
};

//____________________________________________________________________________
//
class CTauntingChallengeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTauntingChallengeCard);
};

//____________________________________________________________________________
//
class CThreeVisitsCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CThreeVisitsCard);
};

//____________________________________________________________________________
//
class CTrainedCheetahCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedCheetahCard);
};

//____________________________________________________________________________
//
class CTrainedJackalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedJackalCard);
};

//____________________________________________________________________________
//
class CVirtuousChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CVirtuousChargeCard);
};

//____________________________________________________________________________
//
class CWarriorsOathCard : public CCard
{
	DECLARE_CARD_CSTOR(CWarriorsOathCard);
};

//____________________________________________________________________________
//
class CWeiAmbushForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiAmbushForceCard);
};

//____________________________________________________________________________
//
class CWeiInfantryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiInfantryCard);
};

//____________________________________________________________________________
//
class CWieldingTheGreenDragonCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWieldingTheGreenDragonCard);
};

//____________________________________________________________________________
//
class CWolfPackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWolfPackCard);
};

//____________________________________________________________________________
//
class CWuAdmiralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuAdmiralCard);
};

//____________________________________________________________________________
//
class CWuInfantryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuInfantryCard);
};

//____________________________________________________________________________
//
class CWuWarshipCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuWarshipCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CYellowScarvesTroopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYellowScarvesTroopsCard);
};

//____________________________________________________________________________
//
class CYoungWeiRecruitsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYoungWeiRecruitsCard);
};

//____________________________________________________________________________
//
class CYuanShaosInfantryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYuanShaosInfantryCard);
};

//____________________________________________________________________________
//
class CZhangLiaoHeroOfHefeiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhangLiaoHeroOfHefeiCard);
};

//____________________________________________________________________________
//
class CZhouYuChiefCommanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhouYuChiefCommanderCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CZodiacDogCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacDogCard);
};

//____________________________________________________________________________
//
class CZodiacDragonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacDragonCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
};

//____________________________________________________________________________
//
class CZodiacGoatCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacGoatCard);
};

//____________________________________________________________________________
//
class CZodiacHorseCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacHorseCard);
};

//____________________________________________________________________________
//
class CZodiacOxCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacOxCard);
};

//____________________________________________________________________________
//
class CZodiacPigCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacPigCard);
};

//____________________________________________________________________________
//
class CZodiacRabbitCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacRabbitCard);
};

//____________________________________________________________________________
//
class CZodiacRatCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacRatCard);
};

//____________________________________________________________________________
//
class CZodiacRoosterCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacRoosterCard);
};

//____________________________________________________________________________
//
class CZodiacSnakeCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacSnakeCard);
};

//____________________________________________________________________________
//
class CZodiacTigerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacTigerCard);
};

//____________________________________________________________________________
//
class CCaoCaoLordOfWeiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaoCaoLordOfWeiCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCunningAdvisorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCunningAdvisorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CFireBowmanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFireBowmanCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHuaTuoHonoredPhysicianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuaTuoHonoredPhysicianCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLoyalRetainersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoyalRetainersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLuSuWuAdvisorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLuSuWuAdvisorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPangTongYoungPhoenixCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPangTongYoungPhoenixCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CStoneCatapultCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneCatapultCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWuLongbowmanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuLongbowmanCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CXunYuWeiAdvisorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CXunYuWeiAdvisorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CZhugeJinWuStrategistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhugeJinWuStrategistCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CControlOfTheCourtCard : public CCard
{
	DECLARE_CARD_CSTOR(CControlOfTheCourtCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWeiEliteCompanionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiEliteCompanionsCard);
};

//____________________________________________________________________________
//
class CBarbarianGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbarianGeneralCard);
};

//____________________________________________________________________________
//
class CCaoRenWeiCommanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaoRenWeiCommanderCard);
};

//____________________________________________________________________________
//
class CGuanYuSaintedWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuanYuSaintedWarriorCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
};

//____________________________________________________________________________
//
class CLadyZhurongWarriorQueenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLadyZhurongWarriorQueenCard);
};

//____________________________________________________________________________
//
class CLiuBeiLordOfShuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLiuBeiLordOfShuCard);
};

//____________________________________________________________________________
//
class CLuBuMasterAtArmsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CLuBuMasterAtArmsCard);
};

//____________________________________________________________________________
//
class CLuMengWuGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLuMengWuGeneralCard);
};

//____________________________________________________________________________
//
class CLuXunScholarGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLuXunScholarGeneralCard);
};

//____________________________________________________________________________
//
class CMaChaoWesternWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaChaoWesternWarriorCard);
};

//____________________________________________________________________________
//
class CShuCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuCavalryCard);
};

//____________________________________________________________________________
//
class CShuEliteCompanionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuEliteCompanionsCard);
};

//____________________________________________________________________________
//
class CShuGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShuGeneralCard);
};

//____________________________________________________________________________
//
class CSunCeYoungConquererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunCeYoungConquererCard);
};

//____________________________________________________________________________
//
class CSunQuanLordOfWuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunQuanLordOfWuCard);
};

//____________________________________________________________________________
//
class CTaoistMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTaoistMysticCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWeiNightRaidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiNightRaidersCard);
};

//____________________________________________________________________________
//
class CWeiScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiScoutCard);
};

//____________________________________________________________________________
//
class CWeiStrikeForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiStrikeForceCard);
};

//____________________________________________________________________________
//
class CWuEliteCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuEliteCavalryCard);
};

//____________________________________________________________________________
//
class CWuLightCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuLightCavalryCard);
};

//____________________________________________________________________________
//
class CWuScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuScoutCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
											   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CXiahouDunTheOneEyedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CXiahouDunTheOneEyedCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CYellowScarvesCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYellowScarvesCavalryCard);
};

//____________________________________________________________________________
//
class CYellowScarvesGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYellowScarvesGeneralCard);
};

//____________________________________________________________________________
//
class CYuanShaoTheIndecisiveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYuanShaoTheIndecisiveCard);
};

//____________________________________________________________________________
//
class CZhangFeiFierceWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhangFeiFierceWarriorCard);
};

//____________________________________________________________________________
//
class CZhangHeWeiGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhangHeWeiGeneralCard);
};

//____________________________________________________________________________
//
class CZhaoZilongTigerGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhaoZilongTigerGeneralCard);
};

//____________________________________________________________________________
//
class CZuoCiTheMockingSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZuoCiTheMockingSageCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBorrowingTheEastWindCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBorrowingTheEastWindCard);
};

//____________________________________________________________________________
//
class CBrokenDamCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrokenDamCard);
};

//____________________________________________________________________________
//
class CRidingRedHareCard : public CCard
{
	DECLARE_CARD_CSTOR(CRidingRedHareCard);
};

//____________________________________________________________________________
//
class CRidingTheDiluHorseCard : public CCard
{
	DECLARE_CARD_CSTOR(CRidingTheDiluHorseCard);
};

//____________________________________________________________________________
//
class CRollingEarthquakeCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRollingEarthquakeCard);
};

//____________________________________________________________________________
//
class CTripWireCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTripWireCard);
};

//____________________________________________________________________________
//
class CSpoilsOfVictoryCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSpoilsOfVictoryCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWeiAssassinsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeiAssassinsCard);
};

//____________________________________________________________________________
//
class CImperialEdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CImperialEdictCard);
};

//____________________________________________________________________________
//
class CLadySunCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLadySunCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CEmptyCityRuseCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmptyCityRuseCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class COverwhelmingForcesCard : public CCard
{
	DECLARE_CARD_CSTOR(COverwhelmingForcesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int m_nCards;
};

//____________________________________________________________________________
//
class CMarshalingTheTroopsCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarshalingTheTroopsCard);

protected:
	CSelectionSupport m_CreatureSelection;
	CCountedCardContainer pCreatures;
	CCountedCardContainer pRemainingCreatures;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void CreatureSelection(CPlayer* pPlayer);
	void Finale(CPlayer* pPlayer);
};

//____________________________________________________________________________
//
class CWuSpyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWuSpyCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_CardSelection;
};

//____________________________________________________________________________
//