#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//

class CFaithlessLootingCard : public CCard
{
	DECLARE_CARD_CSTOR(CFaithlessLootingCard);
};

//____________________________________________________________________________
//
class CGatherTheTownsfolkCard : public CCard
{
	DECLARE_CARD_CSTOR(CGatherTheTownsfolkCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGravecrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravecrawlerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRavenousDemonCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousDemonCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CArchdemonOfGreedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchdemonOfGreedCard);
};

//______________________________________________________________________________
//
class CMondronenShamanCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CMondronenShamanCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CTovolarsMagehunterCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CTovolarsMagehunterCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CGhoultreeCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CGhoultreeCard);

private:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHungerOfTheHowlpackCard : public CCard
{
	DECLARE_CARD_CSTOR(CHungerOfTheHowlpackCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDrogskolReaverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDrogskolReaverCard);

private:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CSecretsOfTheDeadCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSecretsOfTheDeadCard);
};

//____________________________________________________________________________
//
class CFalkenrathAristocratCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFalkenrathAristocratCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CMoonveilDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonveilDragonCard);
};

//____________________________________________________________________________
//
class CScornedVillagerCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CScornedVillagerCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CMoonscarredWerewolfCard: public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonscarredWerewolfCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CThaliaGuardianOfThrabenCard : public CFirstStrikeCreatureCard 
{
	DECLARE_CARD_CSTOR(CThaliaGuardianOfThrabenCard);
};

//____________________________________________________________________________
//
class CLambholtElderCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CLambholtElderCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pToPlayer, Damage damage) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CSilverpeltWerewolfCard: public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverpeltWerewolfCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pToPlayer, Damage damage) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWolfbittenCaptiveCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CWolfbittenCaptiveCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CKrallenhordeKillerCard: public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CKrallenhordeKillerCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CZombieApocalypseCard : public CCard
{
	DECLARE_CARD_CSTOR(CZombieApocalypseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVaultOfTheArchangelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CVaultOfTheArchangelCard);

};

//____________________________________________________________________________
//
class CPredatorOozeCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CPredatorOozeCard);
};

//____________________________________________________________________________
//
class CHellriderCard : public CHasteCreatureCard 
{
	DECLARE_CARD_CSTOR(CHellriderCard);
};

//____________________________________________________________________________
//
class CChantOfTheSkifsangCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CChantOfTheSkifsangCard);
};

//____________________________________________________________________________
//
class CLingeringSoulsCard : public CCard
{
	DECLARE_CARD_CSTOR(CLingeringSoulsCard);
};

//_____________________________________________________________________________
//
class CThoughtScourCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtScourCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//_____________________________________________________________________________
//
class CStromkirkCaptainCard : public CFirstStrikeCreatureCard 
{
	DECLARE_CARD_CSTOR(CStromkirkCaptainCard);
};

//____________________________________________________________________________
//
class CMarkovBlademasterCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMarkovBlademasterCard);
};

//____________________________________________________________________________
//
class CMikaeusTheUnhallowedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMikaeusTheUnhallowedCard);

protected:
    counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContextU1(CTriggeredUndyingAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CCard* pCard, CPlayer* pToPlayer, Damage pDamage) ;
};

//____________________________________________________________________________
//
class CNearheathStalkerCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CNearheathStalkerCard);
};

//____________________________________________________________________________
//
class CFalkenrathTorturerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFalkenrathTorturerCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CSkirsdagFlayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirsdagFlayerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTalonsOfFalkenrathCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTalonsOfFalkenrathCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CGravetillerWurmCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravetillerWurmCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CHecklingFiendsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHecklingFiendsCard);
};

//____________________________________________________________________________
//
class CHeadlessSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeadlessSkaabCard);
};

//____________________________________________________________________________
//
class CTragicSlipCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTragicSlipCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHavengulRunebinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHavengulRunebinderCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CIncreasingDevotionCard : public CCard
{
	DECLARE_CARD_CSTOR(CIncreasingDevotionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CIncreasingConfusionCard : public CCard
{
	DECLARE_CARD_CSTOR(CIncreasingConfusionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CGeralfsMessengerCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CGeralfsMessengerCard);
};

//____________________________________________________________________________
//
class CFlayerOfTheHateboundCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CFlayerOfTheHateboundCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPyreheartWolfCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CPyreheartWolfCard);
};

//____________________________________________________________________________
//
class CIncreasingSavageryCard : public CCard
{
	DECLARE_CARD_CSTOR(CIncreasingSavageryCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CStranglerootGeistCard : public CHasteCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CStranglerootGeistCard);
};

//____________________________________________________________________________
//
class CGrimBackwoodsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGrimBackwoodsCard);

};

//____________________________________________________________________________
//
class CHauntedFengrafCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHauntedFengrafCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIncreasingAmbitionCard : public CCard
{
	DECLARE_CARD_CSTOR(CIncreasingAmbitionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//_____________________________________________________________________________
//
class CDiregrafCaptainCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CDiregrafCaptainCard);
};

//____________________________________________________________________________
//
class CVorapedeCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CVorapedeCard);
};

//____________________________________________________________________________
//
class CArchangelsLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CArchangelsLightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBarTheDoorCard : public CCard
{
	DECLARE_CARD_CSTOR(CBarTheDoorCard);
};

//____________________________________________________________________________
//
class CBreakOfDayCard : public CCard 
{
	DECLARE_CARD_CSTOR(CBreakOfDayCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBurdenOfGuiltCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CBurdenOfGuiltCard);
};

//____________________________________________________________________________
//
class CElgaudInquisitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElgaudInquisitorCard);
};

//______________________________________________________________________________
//
class CNiblisOfTheMistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNiblisOfTheMistCard);
};

//____________________________________________________________________________
//
class CNiblisOfTheUrnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNiblisOfTheUrnCard);
};

//____________________________________________________________________________
//
class CRequiemAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRequiemAngelCard);
};

//____________________________________________________________________________
//
class CSanctuaryCatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSanctuaryCatCard);
};

//_____________________________________________________________________________
//
class CSilverclawGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverclawGriffinCard);
};

//_____________________________________________________________________________
//
class CSkillfulLungeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSkillfulLungeCard);
};

//____________________________________________________________________________
//
class CThrabenHereticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrabenHereticCard);
};

//_____________________________________________________________________________
//
class CArtfulDodgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CArtfulDodgeCard);
};

//____________________________________________________________________________
//
class CBoneToAshCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CBoneToAshCard);
};

//____________________________________________________________________________
//
class CChillOfForebodingCard : public CCard
{
	DECLARE_CARD_CSTOR(CChillOfForebodingCard);
};

//____________________________________________________________________________
//
class CGeralfsMindcrusherCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CGeralfsMindcrusherCard);
};

//____________________________________________________________________________
//
class CGriptideCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGriptideCard);
};

//____________________________________________________________________________
//
class CMysticRetrievalCard : public CCard
{
	DECLARE_CARD_CSTOR(CMysticRetrievalCard);
};

//_____________________________________________________________________________
//
class CNiblisOfTheBreathCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNiblisOfTheBreathCard);
};

//____________________________________________________________________________
//
class CRelentlessSkaabsCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CRelentlessSkaabsCard);
};

//____________________________________________________________________________
//
class CSavingGraspCard : public CCard
{
	DECLARE_CARD_CSTOR(CSavingGraspCard);
};

//____________________________________________________________________________
//
class CScreechingSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingSkaabCard);
};

//____________________________________________________________________________
//
class CShriekgeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekgeistCard);
};

//____________________________________________________________________________
//
class CStormboundGeistCard : public CFlyingCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CStormboundGeistCard);
};

//____________________________________________________________________________
//
class CTowerGeistCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CTowerGeistCard);
};

//____________________________________________________________________________
//
class CChosenOfMarkovCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CChosenOfMarkovCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMarkovsServantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarkovsServantCard);
};

//______________________________________________________________________________
//
class CFarbogBoneflingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFarbogBoneflingerCard);
};

//____________________________________________________________________________
//
class CGravepurgeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGravepurgeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CHarrowingJourneyCard : public CCard
{
	DECLARE_CARD_CSTOR(CHarrowingJourneyCard);
};

//____________________________________________________________________________
//
class CHighbornGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHighbornGhoulCard);
};

//____________________________________________________________________________
//
class CReapTheSeagrafCard : public CCard
{
	DECLARE_CARD_CSTOR(CReapTheSeagrafCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CSightlessGhoulCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CSightlessGhoulCard);
};

//____________________________________________________________________________
//
class CUndyingEvilCard : public CCard
{
	DECLARE_CARD_CSTOR(CUndyingEvilCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContextU1(CTriggeredUndyingAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CVengefulVampireCard : public CFlyingCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CVengefulVampireCard);
};

//____________________________________________________________________________
//
class CWakedancerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWakedancerCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBurningOilCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurningOilCard);
};

//____________________________________________________________________________
//
class CErdwalRipperCard : public CHasteCreatureCard 
{
	DECLARE_CARD_CSTOR(CErdwalRipperCard);
};

//____________________________________________________________________________
//
class CFiresOfUndeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CFiresOfUndeathCard);
};

//____________________________________________________________________________
//
class CMarkovWarlordCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMarkovWarlordCard);
};

//____________________________________________________________________________
//
class CRussetWolvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRussetWolvesCard);
};

//_____________________________________________________________________________
//
class CScorchTheFieldsCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CScorchTheFieldsCard);

protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CShatteredPerceptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CShatteredPerceptionCard);
};

//____________________________________________________________________________
//
class CCrushingVinesCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCrushingVinesCard);
};

//____________________________________________________________________________
//
class CDawntreaderElkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDawntreaderElkCard);
};

//____________________________________________________________________________
//
class CDerangedOutcastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDerangedOutcastCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGrimFloweringCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrimFloweringCard);
};

//____________________________________________________________________________
//
class CHollowhengeBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHollowhengeBeastCard);
};

//_____________________________________________________________________________
//
class CKessigRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKessigRecluseCard);
};

//____________________________________________________________________________
//
class CSomberwaldDryadCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSomberwaldDryadCard);
};

//____________________________________________________________________________
//
class CTrackersInstinctsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTrackersInstinctsCard);
};

//____________________________________________________________________________
//
class CWildHungerCard : public CCard
{
	DECLARE_CARD_CSTOR(CWildHungerCard);
};

//____________________________________________________________________________
//
class CYoungWolfCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CYoungWolfCard);
};

//____________________________________________________________________________
//
class CDrogskolCaptainCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CDrogskolCaptainCard);
};

//____________________________________________________________________________
//
class CWolfhuntersQuiverCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWolfhuntersQuiverCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CWrackwithMadnessCard : public CCard
{
	DECLARE_CARD_CSTOR(CWrackwithMadnessCard);
};

//____________________________________________________________________________
//
class CSorinLordofInnistradCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CSorinLordofInnistradCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	bool BeforeResolution(CAbilityAction* pAction);
	CCountedCardContainer m_SelectedCards1;
};

//____________________________________________________________________________
//
class CExecutionersHoodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExecutionersHoodCard);
};

//____________________________________________________________________________
//
class CDeathsCaressCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathsCaressCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	bool BeforeResolution(CAbilityAction* pAction);
	int_ m_pLife;
};

//____________________________________________________________________________
//
class CElbrustheBindingBladeCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CElbrustheBindingBladeCard);

/*
private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
*/

protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWithengarUnboundCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CWithengarUnboundCard);
};

//____________________________________________________________________________
//
class CAlphaBrawlCard : public CCard
{
	DECLARE_CARD_CSTOR(CAlphaBrawlCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBloodFeudCard : public CCard
{
	DECLARE_CARD_CSTOR(CBloodFeudCard);

protected:
	class CBloodFeudSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CBloodFeudSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CBloodFeudSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CImmerwolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CImmerwolfCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
};

//____________________________________________________________________________
//
class CHuntmasteroftheFellsCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntmasteroftheFellsCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const;
	bool SetTriggerContext4(CTriggeredDoubleTargetingModifyLifeAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const;
};

//____________________________________________________________________________
//
class CRavageroftheFellsCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CRavageroftheFellsCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const;
	bool SetTriggerContext4(CTriggeredDoubleTargetingModifyLifeAbility::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const;
};

//____________________________________________________________________________
//
class CGrafdiggersCageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrafdiggersCageCard);
};

//____________________________________________________________________________
//
class CGavonyIronwrightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGavonyIronwrightCard);
};

//____________________________________________________________________________
//
class CThrabenDoomsayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrabenDoomsayerCard);
};

//____________________________________________________________________________
//
class CVillageSurvivorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVillageSurvivorsCard);
};

//____________________________________________________________________________
//
class CFeedThePackCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFeedThePackCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged> TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CHollowhengeSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHollowhengeSpiritCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CLostInTheWoodsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLostInTheWoodsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CJarOfEyeballsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJarOfEyeballsCard);
	
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
/*class CCounterlashCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCounterlashCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer toCastCard;
	void CardtoCastSelectionRun(CPlayer* pPlayer);
	CSelectionSupport m_CardSelection;
	void FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer);
	std::vector<FreecastCardActionsSelection>	m_Selection;
	void OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, 
		DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void CCounterlashCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};*/

//____________________________________________________________________________
//
class CHelvaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHelvaultCard);

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
class CAfflictedDeserterCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CAfflictedDeserterCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWerewolfRansackerCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CWerewolfRansackerCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												CCard* pCard, int pId) const;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLoyalCatharCard : public CDoubleFacedCreatureCard
{
	DECLARE_CARD_CSTOR(CLoyalCatharCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

	BOOL_ bDyingAsHimself;
	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												CCard* pCard, int pId);
};

//____________________________________________________________________________
//
class CUnhallowedCatharCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUnhallowedCatharCard);
};

//______________________________________________________________________________
//
class CChaliceOfLifeCard : public CDoubleFacedInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChaliceOfLifeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CChaliceOfDeathCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChaliceOfDeathCard);
};

//______________________________________________________________________________
//
class CFaithsShieldCard : public CCard
{
	DECLARE_CARD_CSTOR(CFaithsShieldCard);

protected:
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSeanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSeanceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSuddenDisappearanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSuddenDisappearanceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//