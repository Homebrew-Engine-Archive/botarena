#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAbyssalNightstalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalNightstalkerCard);

private:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CAlabornCavalierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabornCavalierCard);
};

//____________________________________________________________________________
//
class CAlabornGrenadierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabornGrenadierCard);
};

//____________________________________________________________________________
//
class CAlabornMusketeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabornMusketeerCard);
};

//____________________________________________________________________________
//
class CAlabornTrooperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabornTrooperCard);
};

//____________________________________________________________________________
//
class CAlabornVeteranCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabornVeteranCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAlabornZealotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabornZealotCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CAncientCravingCard : public CCard
{
	DECLARE_CARD_CSTOR(CAncientCravingCard);
};

//____________________________________________________________________________
//
class CAngelOfFuryCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfFuryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
};

//____________________________________________________________________________
//
class CApprenticeSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CApprenticeSorcererCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CArmoredGalleonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredGalleonCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CArmoredGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredGriffinCard);
};

//____________________________________________________________________________
//
class CBarbtoothWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbtoothWurmCard);
};

//____________________________________________________________________________
//
class CBargainCard : public CCard
{
	DECLARE_CARD_CSTOR(CBargainCard);
};

//____________________________________________________________________________
//
class CBearCubCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBearCubCard);
};

//____________________________________________________________________________
//
class CBloodcurdlingScreamCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBloodcurdlingScreamCard);
};

//____________________________________________________________________________
//
class CBrimstoneDragonCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBrimstoneDragonCard);
};

//____________________________________________________________________________
//
class CBrutalNightstalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrutalNightstalkerCard);
};

//____________________________________________________________________________
//
class CChorusOfWoeCard : public CCard
{
	DECLARE_CARD_CSTOR(CChorusOfWoeCard);
};

//____________________________________________________________________________
//
class CDakmorBatCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDakmorBatCard);
};

//____________________________________________________________________________
//
class CDakmorPlagueCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDakmorPlagueCard);
};

//____________________________________________________________________________
//
class CDakmorScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDakmorScorpionCard);
};

//____________________________________________________________________________
//
class CDakmorSorceressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDakmorSorceressCard);
};

//____________________________________________________________________________
//
class CDarkOfferingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDarkOfferingCard);
};

//____________________________________________________________________________
//
class CDeathcoilWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathcoilWurmCard);
};

//____________________________________________________________________________
//
class CExtinguishCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CExtinguishCard);
};

//____________________________________________________________________________
//
class CFalseSummoningCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFalseSummoningCard);
};

//____________________________________________________________________________
//
class CFestivalOfTrokinCard : public CCard
{
	DECLARE_CARD_CSTOR(CFestivalOfTrokinCard);
};

//____________________________________________________________________________
//
class CFoulSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFoulSpiritCard);
};

//____________________________________________________________________________
//
class CGoblinCavaliersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinCavaliersCard);
};

//____________________________________________________________________________
//
class CGoblinFirestarterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinFirestarterCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGoblinGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinGeneralCard);
};

//____________________________________________________________________________
//
class CGoldenBearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldenBearCard);
};

//____________________________________________________________________________
//
class CIronhoofOxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIronhoofOxCard);
};

//____________________________________________________________________________
//
class CKissOfDeathCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CKissOfDeathCard);
};

//____________________________________________________________________________
//
class CLurkingNightstalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLurkingNightstalkerCard);
};

//____________________________________________________________________________
//
class CLynxCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CLynxCard);
};

//____________________________________________________________________________
//
class CMoaningSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoaningSpiritCard);
};

//____________________________________________________________________________
//
class CNightstalkerEngineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightstalkerEngineCard);
};

//____________________________________________________________________________
//
class CNorwoodArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorwoodArchersCard);
};

//____________________________________________________________________________
//
class CNorwoodRidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorwoodRidersCard);
};

//____________________________________________________________________________
//
class CNorwoodWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorwoodWarriorCard);
};

//____________________________________________________________________________
//
class CObsidianGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CObsidianGiantCard);
};

//____________________________________________________________________________
//
class COgreArsonistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreArsonistCard);
};

//____________________________________________________________________________
//
class COgreBerserkerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(COgreBerserkerCard);
};

//____________________________________________________________________________
//
class COgreWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreWarriorCard);
};

//____________________________________________________________________________
//
class CPlatedWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedWurmCard);
};

//____________________________________________________________________________
//
class CProwlingNightstalkerCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CProwlingNightstalkerCard);
};

//____________________________________________________________________________
//
class CRaidingNightstalkerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CRaidingNightstalkerCard);
};

//____________________________________________________________________________
//
class CRazorclawBearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorclawBearCard);
};

//____________________________________________________________________________
//
class CRenewingTouchCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRenewingTouchCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CReturnOfTheNightstalkersCard : public CCard
{
	DECLARE_CARD_CSTOR(CReturnOfTheNightstalkersCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRighteousChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CRighteousChargeCard);
};

//____________________________________________________________________________
//
class CSalvageCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSalvageCard);
};

//____________________________________________________________________________
//
class CSeaDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaDrakeCard);
};

//____________________________________________________________________________
//
class CSteamFrigateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteamFrigateCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSylvanYetiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanYetiCard);
};

//____________________________________________________________________________
//
class CTalasAirShipCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTalasAirShipCard);
};

//____________________________________________________________________________
//
class CTalasExplorerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTalasExplorerCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
											   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTalasMerchantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTalasMerchantCard);
};

//____________________________________________________________________________
//
class CTalasResearcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTalasResearcherCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTalasScoutCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTalasScoutCard);
};

//____________________________________________________________________________
//
class CTalasWarriorCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CTalasWarriorCard);
};

//____________________________________________________________________________
//
class CTempleAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTempleAcolyteCard);
};

//____________________________________________________________________________
//
class CTemporalManipulationCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemporalManipulationCard);
};

//____________________________________________________________________________
//
class CTownSentryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTownSentryCard);
};

//____________________________________________________________________________
//
class CTrokinHighGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrokinHighGuardCard);
};

//____________________________________________________________________________
//
class CVolunteerMilitiaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVolunteerMilitiaCard);
};

//____________________________________________________________________________
//
class CWildOxCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CWildOxCard);
};

//____________________________________________________________________________
//
class CWindSailCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWindSailCard);
};

//____________________________________________________________________________
//
class CPredatoryNightstalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPredatoryNightstalkerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinWarStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGoblinWarStrikeCard);
};

//____________________________________________________________________________
//
class CJaggedLightningCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CJaggedLightningCard);
};

//____________________________________________________________________________
//
class CMagmaGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagmaGiantCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CNorwoodPriestessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorwoodPriestessCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSteamCatapultCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteamCatapultCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTempleElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTempleElderCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CScreechingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingDrakeCard);
};

//____________________________________________________________________________
//
class CEyeSpyCard : public CCard
{
	DECLARE_CARD_CSTOR(CEyeSpyCard);
};

//____________________________________________________________________________
//
class CCoastalWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoastalWizardCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRainOfDaggersCard : public CCard
{
	DECLARE_CARD_CSTOR(CRainOfDaggersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int m_nCards;
};

//____________________________________________________________________________
//
class CRighteousFuryCard : public CCard
{
	DECLARE_CARD_CSTOR(CRighteousFuryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int m_nCards;
};

//____________________________________________________________________________
//
class CHarmonyOfNatureCard : public CCard
{
	DECLARE_CARD_CSTOR(CHarmonyOfNatureCard);

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