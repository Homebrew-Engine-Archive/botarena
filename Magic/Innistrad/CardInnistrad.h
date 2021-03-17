#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
// Add new card class declaractions here

class CMikaeustheLunarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMikaeustheLunarchCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//______________________________________________________________________________
//
class CSpectralRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralRiderCard);
};

//______________________________________________________________________________
//
class CMurderOfCrowsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMurderOfCrowsCard);
};

//______________________________________________________________________________
//
class CAbbeyGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAbbeyGriffinCard);
};

//______________________________________________________________________________
//
class CBattlegroundGeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlegroundGeistCard);
};

//______________________________________________________________________________
//
class CGraspOfPhantomsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGraspOfPhantomsCard);
};

//____________________________________________________________________________
//
class CSpideryGraspCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpideryGraspCard);
};

//______________________________________________________________________________
//
class CVampireInterloperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireInterloperCard);
};

//______________________________________________________________________________
//
class CStitchersApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStitchersApprenticeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CBoneyardWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoneyardWurmCard);
};

//______________________________________________________________________________
//
class CDiregrafGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiregrafGhoulCard);
};

//______________________________________________________________________________
//
class CEliteInquisitorCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CEliteInquisitorCard);

protected:
	CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CStitchedDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStitchedDrakeCard);
};

//______________________________________________________________________________
//
class CClifftopRetreatCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CClifftopRetreatCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
};

//____________________________________________________________________________
//
class CHinterlandHarborCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHinterlandHarborCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
};

//____________________________________________________________________________
//
class CIsolatedChapelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CIsolatedChapelCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
};

//____________________________________________________________________________
//
class CSulfurFallsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSulfurFallsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
};

//____________________________________________________________________________
//
class CWoodlandCemeteryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWoodlandCemeteryCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
};

//____________________________________________________________________________
//
class CFiendHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFiendHunterCard);

protected:
	CCountedCardContainer_ pExiled;

	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CSilentDepartureCard : public CCard
{
	DECLARE_CARD_CSTOR(CSilentDepartureCard);
};

//____________________________________________________________________________
//
class CInvisibleStalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInvisibleStalkerCard);
};

//____________________________________________________________________________
//
class CStromkirkNobleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStromkirkNobleCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAngelOfFlightAlabasterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfFlightAlabasterCard);
};

//______________________________________________________________________________
//
class CEndlessRanksOfTheDeadCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEndlessRanksOfTheDeadCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkirsdagCultistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirsdagCultistCard);
};

//______________________________________________________________________________
//
class CMoanOfTheUnhallowedCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoanOfTheUnhallowedCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CSlayerOfTheWickedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlayerOfTheWickedCard);
};

//______________________________________________________________________________
//
class CVillageCannibalsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVillageCannibalsCard);
};

//______________________________________________________________________________
//
//class CRooftopStormCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CRooftopStormCard);
//
//protected:
//	counted_ptr<CSpell> CreateSpell(CCard* pCard);
//};
//
//____________________________________________________________________________
//
class CArmyOfTheDamnedCard : public CCard
{
	DECLARE_CARD_CSTOR(CArmyOfTheDamnedCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CBalefireDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBalefireDragonCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const;
};

//______________________________________________________________________________
//
class CGrimgrinCorpseBornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrimgrinCorpseBornCard);

protected:
	CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CChampionOfTheParishCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChampionOfTheParishCard);
};

//______________________________________________________________________________
//
class CKessigWolfRunCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKessigWolfRunCard);
};

//____________________________________________________________________________
//
class CSkeletalGrimaceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSkeletalGrimaceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSpiderSpawningCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiderSpawningCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAvacynsPilgrimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvacynsPilgrimCard);
};

//______________________________________________________________________________
//
class CAngelicOverseerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelicOverseerCard);
};

//______________________________________________________________________________
//
class CFalkenrathMaraudersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFalkenrathMaraudersCard);
};

//______________________________________________________________________________
//
class CGavonyTownshipCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGavonyTownshipCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLudevicsTestSubjectCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CLudevicsTestSubjectCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLudevicsAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLudevicsAbominationCard);
};

//____________________________________________________________________________
//
class CMayorofAvabruckCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CMayorofAvabruckCard);

protected:
	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CHowlpackAlphaCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CHowlpackAlphaCard);

protected:
	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CGarrukRelentlessCard : public CDoubleFacedPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CGarrukRelentlessCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCard* pFromCard, LPCTSTR name, int old, int n_value) const;

	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGarruktheVeilCursedCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CGarruktheVeilCursedCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSkirsdagHighPriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirsdagHighPriestCard);

private:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//______________________________________________________________________________
//
class CBumpInTheNightCard : public CCard
{
	DECLARE_CARD_CSTOR(CBumpInTheNightCard);
};

//____________________________________________________________________________
//
class CKessigCagebreakersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKessigCagebreakersCard);

protected:
	typedef
		TTriggeredAbility< CAttackingTokenCreationAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* pAbility;
};

//____________________________________________________________________________
//
class CNephaliaDrownyardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNephaliaDrownyardCard);
};

//____________________________________________________________________________
//
class CVampiricFuryCard : public CCard
{
	DECLARE_CARD_CSTOR(CVampiricFuryCard);
};

//____________________________________________________________________________
//
class CSplinterfrightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSplinterfrightCard);
};

//____________________________________________________________________________
//
class CSkaabRuinatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkaabRuinatorCard);
};

//____________________________________________________________________________
//
class CSkaabGoliathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkaabGoliathCard);
};

//____________________________________________________________________________
//
class CHeartlessSummoningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeartlessSummoningCard);
};

//____________________________________________________________________________
//
class CLaboratoryManiacCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLaboratoryManiacCard);
};

//____________________________________________________________________________
//
class CParallelLivesCard : public CCard
{
	DECLARE_CARD_CSTOR(CParallelLivesCard);
};

//____________________________________________________________________________
//
class CForbiddenAlchemyCard : public CCard
{
	DECLARE_CARD_CSTOR(CForbiddenAlchemyCard);
};

//_____________________________________________________________________________
//
class CStensiaBloodhallCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CStensiaBloodhallCard);
};

//____________________________________________________________________________
//
class CGeistHonoredMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGeistHonoredMonkCard);
};

//____________________________________________________________________________
//
class CUnburialRitesCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnburialRitesCard);
};

//____________________________________________________________________________
//
class CCreepingRenaissanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CCreepingRenaissanceCard);
};

//____________________________________________________________________________
//
class CAmbushViperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmbushViperCard);
};

//____________________________________________________________________________
//
class CCobbledWingsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCobbledWingsCard);
};

//____________________________________________________________________________
//
class CVictimOfNightCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVictimOfNightCard);
};

//____________________________________________________________________________
//
class CInfernalPlungeCard : public CCard
{
	DECLARE_CARD_CSTOR(CInfernalPlungeCard);
};

//____________________________________________________________________________
//
class CIntangibleVirtueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIntangibleVirtueCard);
};

//____________________________________________________________________________
//
class CMomentOfHeroismCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMomentOfHeroismCard);
};

//____________________________________________________________________________
//
class CNightTerrorsCard : public CCard
{
	DECLARE_CARD_CSTOR(CNightTerrorsCard);
};

//____________________________________________________________________________
//
class CArmoredSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredSkaabCard);
};

//____________________________________________________________________________
//
class CSmiteTheMonstrousCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSmiteTheMonstrousCard);
};

//____________________________________________________________________________
//
class CTrepanationBladeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrepanationBladeCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<CAbility> CTrepanationBladeCard::CreateEquipmentAbility(CCard* pCard);
	bool CTrepanationBladeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGraveBrambleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGraveBrambleCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFortressCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFortressCrabCard);
};

//______________________________________________________________________________
//
class CMarkovPatricianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarkovPatricianCard);
};

//______________________________________________________________________________
//
class CVoicelessSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoicelessSpiritCard);
};

//______________________________________________________________________________
//
class CMirrorMadPhantasmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMirrorMadPhantasmCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CAvacynianPriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvacynianPriestCard);
};

//______________________________________________________________________________
//
class CChapelGeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChapelGeistCard);
};

//______________________________________________________________________________
//
class CDoomedTravelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoomedTravelerCard);
};

//______________________________________________________________________________
//
class CFeelingOfDreadCard : public CCard
{
	DECLARE_CARD_CSTOR(CFeelingOfDreadCard);
};

//____________________________________________________________________________
//
class CGallowsWardenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGallowsWardenCard);
};

//______________________________________________________________________________
//
class CGhostlyPossessionCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGhostlyPossessionCard);
};

//____________________________________________________________________________
//
class CMausoleumGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMausoleumGuardCard);
};

//______________________________________________________________________________
//
class CMentorOfTheMeekCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMentorOfTheMeekCard);
};

//______________________________________________________________________________
//
class CMidnightHauntingCard : public CCard
{
	DECLARE_CARD_CSTOR(CMidnightHauntingCard);
};

//____________________________________________________________________________
//
class CParaseleneCard : public CCard
{
	DECLARE_CARD_CSTOR(CParaseleneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int m_nEnchantments;
};

//____________________________________________________________________________
//
class CPurifyTheGraveCard : public CCard
{
	DECLARE_CARD_CSTOR(CPurifyTheGraveCard);
};

//____________________________________________________________________________
//
class CRallyThePeasantsCard : public CCard
{
	DECLARE_CARD_CSTOR(CRallyThePeasantsCard);
};

//____________________________________________________________________________
//
class CRebukeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRebukeCard);
};

//____________________________________________________________________________
//
class CSelflessCatharCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelflessCatharCard);
};

//______________________________________________________________________________
//
class CSilverchaseFoxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverchaseFoxCard);
};

//______________________________________________________________________________
//
class CSpareFromEvilCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpareFromEvilCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStonySilenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStonySilenceCard);
};

//____________________________________________________________________________
//
class CThrabenPurebloodsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrabenPurebloodsCard);
};

//______________________________________________________________________________
//
class CUnrulyMobCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUnrulyMobCard);
};

//______________________________________________________________________________
//
class CUrgentExorcismCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUrgentExorcismCard);
};

//____________________________________________________________________________
//
class CVillageBellRingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVillageBellRingerCard);
};

//______________________________________________________________________________
//
class CDreamTwistCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreamTwistCard);
};

//____________________________________________________________________________
//
class CHystericalBlindnessCard : public CCard
{
	DECLARE_CARD_CSTOR(CHystericalBlindnessCard);
};

//____________________________________________________________________________
//
class CLanternSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLanternSpiritCard);
};

//______________________________________________________________________________
//
class CMakeshiftMaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMakeshiftMaulerCard);
};

//______________________________________________________________________________
//
class CMemorysJourneyCard : public CCard
{
	DECLARE_CARD_CSTOR(CMemorysJourneyCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMindshriekerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMindshriekerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CMoonHeronCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonHeronCard);
};

//______________________________________________________________________________
//
class CSpectralFlightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSpectralFlightCard);
};

//______________________________________________________________________________
//
class CSturmgeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSturmgeistCard);
};

//______________________________________________________________________________
//
class CAbattoirGhoulCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAbattoirGhoulCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//______________________________________________________________________________
//
class CBrainWeevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrainWeevilCard);
};

//______________________________________________________________________________
//
class CCorpseLungeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCorpseLungeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeadWeightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDeadWeightCard);
};

//______________________________________________________________________________
//
class CDiscipleOfGriselbrandCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfGriselbrandCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CGhoulcallersChantCard : public CCard
{
	DECLARE_CARD_CSTOR(CGhoulcallersChantCard);
};

//____________________________________________________________________________
//
class CManorSkeletonCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CManorSkeletonCard);
};

//____________________________________________________________________________
//
class CMawOfTheMireCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMawOfTheMireCard);
};

//____________________________________________________________________________
//
class CRottingFensnakeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottingFensnakeCard);
};

//______________________________________________________________________________
//
class CSeverTheBloodlineCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeverTheBloodlineCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStromkirkPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStromkirkPatrolCard);
};

//______________________________________________________________________________
//
class CBloodcrazedNeonateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodcrazedNeonateCard);
};

//______________________________________________________________________________
//
class CTyphoidRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTyphoidRatsCard);
};

//______________________________________________________________________________
//
class CAshmouthHoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshmouthHoundCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
								CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;

};

//______________________________________________________________________________
//
class CCharmbreakerDevilsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCharmbreakerDevilsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//______________________________________________________________________________
//
class CCrosswayVampireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrosswayVampireCard);
};

//______________________________________________________________________________
//
class CDevilsPlayCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevilsPlayCard);
};

//____________________________________________________________________________
//
class CFeralRidgewolfCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFeralRidgewolfCard);
};

//______________________________________________________________________________
//
class CFurorOfTheBittenCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFurorOfTheBittenCard);
};

//______________________________________________________________________________
//
class CGeistflameCard : public CCard
{
	DECLARE_CARD_CSTOR(CGeistflameCard);
};

//____________________________________________________________________________
//
class CHarvestPyreCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHarvestPyreCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHereticsPunishmentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHereticsPunishmentCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIntoTheMawOfHellCard : public CCard
{
	DECLARE_CARD_CSTOR(CIntoTheMawOfHellCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNightbirdsClutchesCard : public CCard
{
	DECLARE_CARD_CSTOR(CNightbirdsClutchesCard);
};

//______________________________________________________________________________
//
class CRageThrowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRageThrowerCard);
};

//______________________________________________________________________________
//
class CRakishHeirCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRakishHeirCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
								CCard* pCard, CPlayer* pPlayer, Damage d_damage) const;
};

//______________________________________________________________________________
//
class CRiotDevilsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiotDevilsCard);
};

//______________________________________________________________________________
//
class CRollingTemblorCard : public CCard
{
	DECLARE_CARD_CSTOR(CRollingTemblorCard);
};

//____________________________________________________________________________
//
class CTraitorousBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CTraitorousBloodCard);
};

//____________________________________________________________________________
//
class CDarkthicketWolfCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkthicketWolfCard);
};

//______________________________________________________________________________
//
class CElderOfLaurelsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElderOfLaurelsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CGnawToTheBoneCard : public CCard
{
	DECLARE_CARD_CSTOR(CGnawToTheBoneCard);
};

//____________________________________________________________________________
//
class CHamletCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHamletCaptainCard);
};

//______________________________________________________________________________
//
class CKindercatchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKindercatchCard);
};

//______________________________________________________________________________
//
class CLumberknotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLumberknotCard);
};

//____________________________________________________________________________
//
class COrchardSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrchardSpiritCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDemonmailHauberkCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDemonmailHauberkCard);
};

//____________________________________________________________________________
//
class CGeistcatchersRigCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGeistcatchersRigCard);
};

//____________________________________________________________________________
//
class CTravelPreparationsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTravelPreparationsCard);
};

//____________________________________________________________________________
//
class CTreeOfRedemptionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreeOfRedemptionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CWreathOfGeistsCard : public CCard
{
	DECLARE_CARD_CSTOR(CWreathOfGeistsCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CCellarDoorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCellarDoorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGraveyardShovelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGraveyardShovelCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGalvanicJuggernautCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGalvanicJuggernautCard);
};

//____________________________________________________________________________
//
class CTravelersAmuletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTravelersAmuletCard);
};

//____________________________________________________________________________
//
class CRunechantersPikeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRunechantersPikeCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class COneEyedScarecrowCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(COneEyedScarecrowCard);
};

//____________________________________________________________________________
//
class CMaskOfAvacynCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMaskOfAvacynCard);
};

//____________________________________________________________________________
//
class CBrimstoneVolleyCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBrimstoneVolleyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCaravanVigilCard : public CCard
{
	DECLARE_CARD_CSTOR(CCaravanVigilCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks) const;
};

//____________________________________________________________________________
//
class CFesterhideBoarCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFesterhideBoarCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CHollowhengeScavengerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHollowhengeScavengerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMorkrutBansheeCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMorkrutBansheeCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CReaperFromTheAbyssCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CReaperFromTheAbyssCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//______________________________________________________________________________
//
class CSomberwaldSpiderCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSomberwaldSpiderCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CWoodlandSleuthCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodlandSleuthCard);

protected:
	typedef	TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CHanweirWatchkeepCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CHanweirWatchkeepCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBaneOfHanweirCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CBaneOfHanweirCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CGatstafShepherdCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CGatstafShepherdCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CGatstafHowlerCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CGatstafHowlerCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CVillagersOfEstwaldCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CVillagersOfEstwaldCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CHowlpackOfEstwaldCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CHowlpackOfEstwaldCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CRecklessWaifCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessWaifCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CMercilessPredatorCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CMercilessPredatorCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CInstigatorGangCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CInstigatorGangCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWildbloodPackCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CWildbloodPackCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CKruinOutlawCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CKruinOutlawCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CTerrorOfKruinPassCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CTerrorOfKruinPassCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CUlvenwaldMysticsCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CUlvenwaldMysticsCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CUlvenwaldPrimordialsCard: public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CUlvenwaldPrimordialsCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CFalkenrathNobleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFalkenrathNobleCard);
};

//______________________________________________________________________________
//
class CFrightfulDelusionCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFrightfulDelusionCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CGrizzledOutcastsCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CGrizzledOutcastsCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CKrallenhordeWantonsCard: public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CKrallenhordeWantonsCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CVillageIronsmithCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CVillageIronsmithCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CIronfangCard: public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CIronfangCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CSnapcasterMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnapcasterMageCard);
};

//______________________________________________________________________________
//
class CTributetoHungerCard : public CCard
{
	DECLARE_CARD_CSTOR(CTributetoHungerCard);
};

//______________________________________________________________________________
//
class CMoorlandHauntCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMoorlandHauntCard);

};

//____________________________________________________________________________
//
class CNightRevelersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightRevelersCard);
};

//______________________________________________________________________________
//
class CBloodlineKeeperCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodlineKeeperCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks) const;
};

//____________________________________________________________________________
//
class CLordOfLineageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfLineageCard);
};

//______________________________________________________________________________
//
class CFullMoonsRiseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFullMoonsRiseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGhoulraiserCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhoulraiserCard);

protected:
	typedef TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNevermoreCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNevermoreCard);
};

//____________________________________________________________________________
//
class CKessigWolfCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKessigWolfCard);
};

//______________________________________________________________________________
//
class CBloodgiftDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodgiftDemonCard);
};

//______________________________________________________________________________
//
class CTormentedPariahCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CTormentedPariahCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CRampagingWerewolfCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CRampagingWerewolfCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CCloisteredYouthCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CCloisteredYouthCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CUnholyFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUnholyFiendCard);
};

//______________________________________________________________________________
//
class CScreechingBatCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingBatCard);
};

//____________________________________________________________________________
//
class CStalkingVampireCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CStalkingVampireCard);
};

//____________________________________________________________________________
//
class CThrabenSentryCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CThrabenSentryCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CThrabenMilitiaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrabenMilitiaCard);
};

//______________________________________________________________________________
//
class CMakeAWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CMakeAWishCard);
};

//____________________________________________________________________________
//
class CMoldgrafMonstrosityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoldgrafMonstrosityCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CWoodenStakeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWoodenStakeCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CDelverOfSecretsCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CDelverOfSecretsCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
};

//____________________________________________________________________________
//
class CInsectileAberrationCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CInsectileAberrationCard);
};

//______________________________________________________________________________
//
class CGhoulcallersBellCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGhoulcallersBellCard);
};

//____________________________________________________________________________
//
class CPastInFlamesCard : public CCard
{
	DECLARE_CARD_CSTOR(CPastInFlamesCard);
};

//____________________________________________________________________________
//
class CDesperateRavingsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDesperateRavingsCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCacklingCounterpartCard : public CCard
{
	DECLARE_CARD_CSTOR(CCacklingCounterpartCard);
};

//____________________________________________________________________________
//
class COliviaVoldarenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COliviaVoldarenCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
	CAbility* m_pStealAbility;
	CCardFilter m_CardFilter;
 };

//____________________________________________________________________________
//
class CLilianaoftheVeilCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CLilianaoftheVeilCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;

	CCountedCardContainer m_SelectedCards1;
	CCountedCardContainer m_SelectedCards2;
	void ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2);


	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;
};

//____________________________________________________________________________
//
class CGruesomeDeformityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGruesomeDeformityCard);
};

//____________________________________________________________________________
//
class CDaybreakRangerCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CDaybreakRangerCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CNightfallPredatorCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CNightfallPredatorCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBurningVengeanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBurningVengeanceCard);

};

//____________________________________________________________________________
//
class CGeistOfSaintTraftCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGeistOfSaintTraftCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void OnSubjectSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_SubjectSelection;
};

//____________________________________________________________________________
//
class CSelhoffOccultistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelhoffOccultistCard);
};

//____________________________________________________________________________
//
class CScourgeOfGeierReachCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeOfGeierReachCard);
};

//______________________________________________________________________________
//
class CRooftopStormCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRooftopStormCard);

protected:
	counted_ptr<CSpell> CreateSpell(CCard* pCard);
};

//____________________________________________________________________________
//
class CCreepyDollCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCreepyDollCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
				CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CGrimoireOfTheDeadCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrimoireOfTheDeadCard);

protected:
	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CElderCatharCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElderCatharCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CDivineReckoningCard : public CCard
{
	DECLARE_CARD_CSTOR(CDivineReckoningCard);

protected:
	CSelectionSupport m_CreatureSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CPlayerContainer Players;
	CCountedCardContainer_ Cards;
	void CreatureSelection(int nPlayer, CPlayer* pController);
};

//______________________________________________________________________________
//
class CUnbreathingHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUnbreathingHordeCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CUnbreathingHordeCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CDearlyDepartedCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDearlyDepartedCard);
};
//______________________________________________________________________________
//
/*
class CBlasphemousActCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBlasphemousActCard);

protected:
	CCardFilter m_CardFilter;
};
*/
//____________________________________________________________________________
//
class CGutterGrimeCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGutterGrimeCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CUndeadAlchemistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadAlchemistCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CCivilizedScholarCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CCivilizedScholarCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution1(CAbilityAction* pAction);
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHomicidalBruteCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CHomicidalBruteCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution1(CAbilityAction* pAction);
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMoonmistCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoonmistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
