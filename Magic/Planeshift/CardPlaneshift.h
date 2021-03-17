#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDiabolicIntentCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CDiabolicIntentCard);
};

//____________________________________________________________________________
//
class CEladamrisCallCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CEladamrisCallCard);
};

//____________________________________________________________________________
//
class CErtaitheCorruptedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CErtaitheCorruptedCard);

	protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CManaCylixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaCylixCard);
};

//____________________________________________________________________________
//
class CMeddlingMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMeddlingMageCard);
};

//____________________________________________________________________________
//
class CTerminateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTerminateCard);
};

//____________________________________________________________________________
//
class CPhyrexianScutaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianScutaCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CAlphaKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlphaKavuCard);
};

//____________________________________________________________________________
//
class CAmphibiousKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmphibiousKavuCard);
};

//____________________________________________________________________________
//
class CAncientSpiderCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientSpiderCard);
};

//____________________________________________________________________________
//
class CAuroraGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAuroraGriffinCard);
};

//____________________________________________________________________________
//
class CCalderaKavuCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCalderaKavuCard);
};

//____________________________________________________________________________
//
class CCavernHarpyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCavernHarpyCard);
};

//____________________________________________________________________________
//
class CFlametongueKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlametongueKavuCard);
};

//____________________________________________________________________________
//
class CFleetfootPantherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleetfootPantherCard);
};

//____________________________________________________________________________
//
class CHornedKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHornedKavuCard);
};

//____________________________________________________________________________
//
class CHuntingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntingDrakeCard);
};

//____________________________________________________________________________
//
class CKavuRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuRecluseCard);
};

//____________________________________________________________________________
//
class CLavaZombieCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLavaZombieCard);
};

//____________________________________________________________________________
//
class CMarshCrocodileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshCrocodileCard);
};

//____________________________________________________________________________
//
class CMireKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMireKavuCard);
};

//____________________________________________________________________________
//
class CMirrorwoodTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMirrorwoodTreefolkCard);
};

//____________________________________________________________________________
//
class CMorgueToadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMorgueToadCard);
};

//____________________________________________________________________________
//
class CNemataGroveGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNemataGroveGuardianCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPhyrexianBloodstockCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianBloodstockCard);
};

//____________________________________________________________________________
//
class CQuirionExplorerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionExplorerCard);
};

//____________________________________________________________________________
//
class CRazingSniddCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazingSniddCard);
};

//____________________________________________________________________________
//
class CRootGreevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootGreevilCard);
};

//____________________________________________________________________________
//
class CSeaSniddCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaSniddCard);
};

//____________________________________________________________________________
//
class CShivanWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanWurmCard);
};

//____________________________________________________________________________
//
class CSilverDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverDrakeCard);
};

//____________________________________________________________________________
//
class CSlingshotGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlingshotGoblinCard);
};

//____________________________________________________________________________
//
class CSparkcasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSparkcasterCard);
};

//____________________________________________________________________________
//
class CSteelLeafPaladinCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelLeafPaladinCard);
};

//____________________________________________________________________________
//
class CStoneKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneKavuCard);
};

//____________________________________________________________________________
//
class CTahngarthTalruumHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTahngarthTalruumHeroCard);
};

//____________________________________________________________________________
//
class CVolcanoImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVolcanoImpCard);
};

//____________________________________________________________________________
//
class CTerminalMoraineCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTerminalMoraineCard);
};

//____________________________________________________________________________
//
class CDeadapultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeadapultCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDestructiveFlowCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDestructiveFlowCard);
};

//____________________________________________________________________________
//
class CEscapeRoutesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEscapeRoutesCard);
};

//____________________________________________________________________________
//
class CInsolenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CInsolenceCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CNaturalEmergenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNaturalEmergenceCard);
};

//____________________________________________________________________________
//
class CAuraBlastCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAuraBlastCard);
};

//____________________________________________________________________________
//
class CCrosissCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrosissCharmCard);
};

//____________________________________________________________________________
//
class CDarigaazsCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarigaazsCharmCard);
};

//____________________________________________________________________________
//
class CDaringLeapCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDaringLeapCard);
};

//____________________________________________________________________________
//
class CDeathBombCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathBombCard);
};

//____________________________________________________________________________
//
class CDromarsCharmCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDromarsCharmCard);
};

//____________________________________________________________________________
//
class CFallingTimberCard : public CCard
{
	DECLARE_CARD_CSTOR(CFallingTimberCard);
};

//____________________________________________________________________________
//
class CGaeasMightCard : public CCard
{
	DECLARE_CARD_CSTOR(CGaeasMightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGainsayCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CGainsayCard);
};

//____________________________________________________________________________
//
class CGerrardsCommandCard : public CCard
{
	DECLARE_CARD_CSTOR(CGerrardsCommandCard);
};

//____________________________________________________________________________
//
class CMagmaBurstCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagmaBurstCard);
};

//____________________________________________________________________________
//
class CPollenRemedyCard : public CCard
{
	DECLARE_CARD_CSTOR(CPollenRemedyCard);
};

//____________________________________________________________________________
//
class CRushingRiverCard : public CCard
{
	DECLARE_CARD_CSTOR(CRushingRiverCard);
};

//____________________________________________________________________________
//
class CShriekOfDreadCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CShriekOfDreadCard);
};

//____________________________________________________________________________
//
class CSkyshroudBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSkyshroudBlessingCard);
};

//____________________________________________________________________________
//
class CTrevasCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CTrevasCharmCard);
};

//____________________________________________________________________________
//
class CBogDownCard : public CCard
{
	DECLARE_CARD_CSTOR(CBogDownCard);
};

//____________________________________________________________________________
//
class CImplodeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CImplodeCard);
};

//____________________________________________________________________________
//
class CPrimalGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CPrimalGrowthCard);
};

//____________________________________________________________________________
//
class CStrafeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CStrafeCard);
};

//____________________________________________________________________________
//
class CUrzasGuiltCard : public CCard
{
	DECLARE_CARD_CSTOR(CUrzasGuiltCard);
};

//____________________________________________________________________________
//
class CRadiantKavuCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRadiantKavuCard);
};

//____________________________________________________________________________
//
class CSisaysIngenuityCard : public CCard
{
	DECLARE_CARD_CSTOR(CSisaysIngenuityCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CMultanisHarmonyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMultanisHarmonyCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility5(CCard* pCard);
};

//___________________________________________________________________________
//
class CMoggJailerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggJailerCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArcticMerfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcticMerfolkCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CDiscipleOfKangeeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfKangeeCard);
};

//____________________________________________________________________________
//
class CDralnusPetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDralnusPetCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHonorableScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHonorableScoutCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPygmyKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPygmyKavuCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHobbleCard : public CCard
{
	DECLARE_CARD_CSTOR(CHobbleCard);
};

//___________________________________________________________________________
//
class CMaliciousAdviceCard : public CCard
{
	DECLARE_CARD_CSTOR(CMaliciousAdviceCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CSingeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSingeCard);
};

//___________________________________________________________________________
//
class CHullBreachCard : public CCard
{
	DECLARE_CARD_CSTOR(CHullBreachCard);
};

//___________________________________________________________________________
//
class CNightscapeBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightscapeBattlemageCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost1;
	CManaCost	m_KickerCost2;
};

//____________________________________________________________________________
//
class CStormscapeBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStormscapeBattlemageCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost1;
	CManaCost	m_KickerCost2;
};

//____________________________________________________________________________
//
class CSunscapeBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunscapeBattlemageCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost1;
	CManaCost	m_KickerCost2;
};

//____________________________________________________________________________
//
class CThornscapeBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornscapeBattlemageCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost1;
	CManaCost	m_KickerCost2;
};

//____________________________________________________________________________
//
class CThunderscapeBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderscapeBattlemageCard);

protected:
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost1;
	CManaCost	m_KickerCost2;
};

//____________________________________________________________________________
//
class CNightscapeFamiliarCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CNightscapeFamiliarCard);
};

//___________________________________________________________________________
//
class CStormscapeFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormscapeFamiliarCard);
};

//___________________________________________________________________________
//
class CSunscapeFamiliarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunscapeFamiliarCard);
};

//___________________________________________________________________________
//
class CThornscapeFamiliarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornscapeFamiliarCard);
};

//___________________________________________________________________________
//
class CThunderscapeFamiliarCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderscapeFamiliarCard);
};

//___________________________________________________________________________
//
class CCloudCoverCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCloudCoverCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CAlliedStrategiesCard : public CCard
{
	DECLARE_CARD_CSTOR(CAlliedStrategiesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CExoticDiseaseCard : public CCard
{
	DECLARE_CARD_CSTOR(CExoticDiseaseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class COrimsChantCard : public CCard
{
	DECLARE_CARD_CSTOR(COrimsChantCard);
};

//____________________________________________________________________________
//
class CCrosissCatacombsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCrosissCatacombsCard);
};

//____________________________________________________________________________
//
class CDarigaazsCalderaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDarigaazsCalderaCard);
};

//____________________________________________________________________________
//
class CDromarsCavernCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDromarsCavernCard);
};

//____________________________________________________________________________
//
class CRithsGroveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRithsGroveCard);
};

//____________________________________________________________________________
//
class CTrevasRuinsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTrevasRuinsCard);
};

//____________________________________________________________________________
//
class CSleepingPotionCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSleepingPotionCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//___________________________________________________________________________
//
class CQuestingPhelddagrifCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuestingPhelddagrifCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSamiteElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSamiteElderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSawtoothLoonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSawtoothLoonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhyrexianTyrannyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianTyrannyCard);
};

//____________________________________________________________________________
//
class CForsakenCityCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CForsakenCityCard);

protected:
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPlaneswalkersFavorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlaneswalkersFavorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlaneswalkersFuryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlaneswalkersFuryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlaneswalkersMirthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlaneswalkersMirthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlaneswalkersScornCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlaneswalkersScornCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMagnigothTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagnigothTreefolkCard);
};

//____________________________________________________________________________
//
/*
class CDralnusCrusadeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDralnusCrusadeCard);
};
*/
//____________________________________________________________________________
//
class CDominariasJudgmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CDominariasJudgmentCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMeteorCraterCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMeteorCraterCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	BOOL CanPlay3(BOOL bIncludeTricks);
	BOOL CanPlay4(BOOL bIncludeTricks);
	BOOL CanPlay5(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMarchOfSoulsCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarchOfSoulsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	std::vector<int> m_nCards;
};

//____________________________________________________________________________
//
class CSurpriseDeploymentCard : public CCard
{
    DECLARE_CARD_CSTOR(CSurpriseDeploymentCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
