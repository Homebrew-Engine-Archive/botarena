#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CNightsWhisperCard : public CCard
{
	DECLARE_CARD_CSTOR(CNightsWhisperCard);
};

//____________________________________________________________________________
//
class CGemstoneArrayCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGemstoneArrayCard);
};

//____________________________________________________________________________
//
class CPlasmaElementalCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CPlasmaElementalCard);
};

//____________________________________________________________________________
//
class CSteelshapersGiftCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSteelshapersGiftCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAdvancedHoverguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAdvancedHoverguardCard);
};

//____________________________________________________________________________
//
class CAuriokChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokChampionCard);
};

//____________________________________________________________________________
//
class CAuriokSalvagersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokSalvagersCard);
};

//____________________________________________________________________________
//
class CBlindCreeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindCreeperCard);
};

//____________________________________________________________________________
//
class CBringerOfTheBlueDawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBringerOfTheBlueDawnCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBringerOfTheGreenDawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBringerOfTheGreenDawnCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBringerOfTheBlackDawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBringerOfTheBlackDawnCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBringerOfTheWhiteDawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBringerOfTheWhiteDawnCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCacklingImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCacklingImpCard);
};

//____________________________________________________________________________
//
class CCosmicLarvaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCosmicLarvaCard);
};

//____________________________________________________________________________
//
class CDesecrationElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDesecrationElementalCard);
};

//____________________________________________________________________________
//
class CEbonDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEbonDrakeCard);
};

//____________________________________________________________________________
//
class CEternalWitnessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEternalWitnessCard);
};

//____________________________________________________________________________
//
class CFangrenPathcutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFangrenPathcutterCard);
};

//____________________________________________________________________________
//
class CFleshgrafterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshgrafterCard);
};

//____________________________________________________________________________
//
class CHoverguardSweepersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHoverguardSweepersCard);
};

//____________________________________________________________________________
//
class CIronBarbHellionCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CIronBarbHellionCard);
};

//____________________________________________________________________________
//
class CKrarkClanEngineersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrarkClanEngineersCard);
};

//____________________________________________________________________________
//
class CKrarkClanOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrarkClanOgreCard);
};

//____________________________________________________________________________
//
class CLeoninSquireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninSquireCard);
};

//____________________________________________________________________________
//
class CLoxodonAnchoriteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonAnchoriteCard);
};

//____________________________________________________________________________
//
class CLoxodonStalwartCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonStalwartCard);
};

//____________________________________________________________________________
//
class CMoriokRiggerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoriokRiggerCard);
};

//____________________________________________________________________________
//
class CNimGrotesqueCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNimGrotesqueCard);
};

//____________________________________________________________________________
//
class CSylvokExplorerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvokExplorerCard);
};

//____________________________________________________________________________
//
class CTangleAspCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTangleAspCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CTelJiladLifebreatherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladLifebreatherCard);
};

//____________________________________________________________________________
//
class CTornadoElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTornadoElementalCard);
};

//____________________________________________________________________________
//
class CTrinketMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrinketMageCard);
};

//____________________________________________________________________________
//
class CTyrranaxCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTyrranaxCard);
};

//____________________________________________________________________________
//
class CViridianScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianScoutCard);
};

//____________________________________________________________________________
//
class CVulshokSorcererCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CVulshokSorcererCard);
};

//____________________________________________________________________________
//
class CAnodetLurkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnodetLurkerCard);
};

//____________________________________________________________________________
//
class CArachnoidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArachnoidCard);
};

//____________________________________________________________________________
//
class CBatteredGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBatteredGolemCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;};

//____________________________________________________________________________
//
class CSynodCenturionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSynodCenturionCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CThermalNavigatorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CThermalNavigatorCard);
};

//____________________________________________________________________________
//
class CBlastingStationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlastingStationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CConjurersBaubleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConjurersBaubleCard);
};

//____________________________________________________________________________
//
class CCranialPlatingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCranialPlatingCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGrindingStationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrindingStationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGuardianIdolCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGuardianIdolCard);
};

//____________________________________________________________________________
//
class CHealersHeaddressCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHealersHeaddressCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHornedHelmCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHornedHelmCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKrarkClanIronworksCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKrarkClanIronworksCard);
};

//____________________________________________________________________________
//
class CNeurokStealthsuitCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNeurokStealthsuitCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CParadiseMantleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CParadiseMantleCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CSalvagingStationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSalvagingStationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSparringCollarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSparringCollarCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStaffOfDominationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfDominationCard);
};

//____________________________________________________________________________
//
class CSummoningStationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSummoningStationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWayfarersBaubleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWayfarersBaubleCard);
};

//____________________________________________________________________________
//
class CArtificersIntuitionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArtificersIntuitionCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArmedResponseCard : public CCard
{
	DECLARE_CARD_CSTOR(CArmedResponseCard);
};

//____________________________________________________________________________
//
class CEarlyFrostCard : public CCard
{
	DECLARE_CARD_CSTOR(CEarlyFrostCard);
};

//____________________________________________________________________________
//
class CFeedbackBoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CFeedbackBoltCard);
};

//____________________________________________________________________________
//
class CRainOfRustCard : public CCard
{
	DECLARE_CARD_CSTOR(CRainOfRustCard);

private: 
	CManaCost	m_EntwineCost;

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CVanquishCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVanquishCard);
};

//____________________________________________________________________________
//
class CAcquireCard : public CCard
{
	DECLARE_CARD_CSTOR(CAcquireCard);
};

//____________________________________________________________________________
//
class CBeaconOfCreationCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeaconOfCreationCard);
};

//____________________________________________________________________________
//
class CChannelTheSunsCard : public CCard
{
	DECLARE_CARD_CSTOR(CChannelTheSunsCard);
};

//____________________________________________________________________________
//
class CGranulateCard : public CCard
{
	DECLARE_CARD_CSTOR(CGranulateCard);
};

//____________________________________________________________________________
//
class CRoarOfReclamationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRoarOfReclamationCard);
};

//____________________________________________________________________________
//
class CScreamingFuryCard : public CCard
{
	DECLARE_CARD_CSTOR(CScreamingFuryCard);
};

//____________________________________________________________________________
//
class CShatteredDreamsCard : public CCard
{
	DECLARE_CARD_CSTOR(CShatteredDreamsCard);
};

//____________________________________________________________________________
//
class CRiteOfPassageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRiteOfPassageCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CClearwaterGobletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CClearwaterGobletCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSkyreachMantaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyreachMantaCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CSuntouchedMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSuntouchedMyrCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CBatonofCourageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBatonofCourageCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CPentadPrismCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPentadPrismCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CEtchedOracleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtchedOracleCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CLunarAvengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLunarAvengerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CSawtoothThresherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSawtoothThresherCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CSuncrusherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSuncrusherCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CEyesOfTheWatcherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEyesOfTheWatcherCard);
};

//____________________________________________________________________________
//
class CCondescendCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCondescendCard);
};

//____________________________________________________________________________
//
class CFerociousChargeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFerociousChargeCard);
};

//____________________________________________________________________________
//
class CLoseHopeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CLoseHopeCard);
};

//____________________________________________________________________________
//
class CMagmaJetCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CMagmaJetCard);
};

//____________________________________________________________________________
//
class CStandFirmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CStandFirmCard);
};

//____________________________________________________________________________
//
class CTelJiladJusticeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTelJiladJusticeCard);
};

//____________________________________________________________________________
//
class CFillWithFrightCard : public CCard
{
	DECLARE_CARD_CSTOR(CFillWithFrightCard);
};

//____________________________________________________________________________
//
class CSerumVisionsCard : public CCard
{
	DECLARE_CARD_CSTOR(CSerumVisionsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinCannonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinCannonCard);
};

//____________________________________________________________________________
//
class CBeaconOfTomorrowsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeaconOfTomorrowsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CVedalkenShacklesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVedalkenShacklesCard);

private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												  CNode* pNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIonStormCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIonStormCard);
};

//____________________________________________________________________________
//
class CEngineeredExplosivesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEngineeredExplosivesCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CDevourInShadowCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevourInShadowCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHelmofKaldraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHelmofKaldraCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	bool BeforeResolution(CAbilityAction* pAction) const;

	CCardFilter	m_CardFilter;
	CCardFilter	m_HelmFilter;
	CCardFilter	m_ShieldFilter;
	CCardFilter	m_SwordFilter;
};

//____________________________________________________________________________
//
class CMyrQuadropodCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrQuadropodCard);
};

//____________________________________________________________________________
//
class CArcboundWandererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundWandererCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CQumuloxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CQumuloxCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBlinkmothInfusionCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlinkmothInfusionCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CIntoThinAirCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CIntoThinAirCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBringerOfTheRedDawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBringerOfTheRedDawnCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CViridianLorebearersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianLorebearersCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMyrServitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrServitorCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAbunasChantCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbunasChantCard);

private: 
	CManaCost	m_EntwineCost;
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CManaGeyserCard : public CCard
{
	DECLARE_CARD_CSTOR(CManaGeyserCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVedalkenOrreryCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CVedalkenOrreryCard);
};

//____________________________________________________________________________
//
class CEnsouledScimitarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEnsouledScimitarCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAuriokWindwalkerCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CAuriokWindwalkerCard);
};

//____________________________________________________________________________
//
class CMagneticTheftCard : public CCard 
{
	DECLARE_CARD_CSTOR(CMagneticTheftCard);
};

//____________________________________________________________________________
//
class CGraftedWargearCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGraftedWargearCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pEquipCard, CCard* pFromCard, CCard* pToCard) const;
};

//____________________________________________________________________________
//
class CHeliophialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeliophialCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CSkullcageCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSkullcageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CViciousBetrayalCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CViciousBetrayalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CInfusedArrowsCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CInfusedArrowsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDawnsReflectionCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CDawnsReflectionCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSolarionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSolarionCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSpinalParasiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinalParasiteCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class COpalineBracersCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COpalineBracersCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

};

//____________________________________________________________________________
//
class CAvariceTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAvariceTotemCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPlungeIntoDarknessCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlungeIntoDarknessCard);

protected:
	CManaCost	m_EntwineCost;
	CSelectionSupport m_NumberSelection;
	CSelectionSupport m_LifeSelection;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnLifeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void LifeChoose(CPlayer* pPlayer);
};

//____________________________________________________________________________
//
/*
class CMephidrossVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMephidrossVampireCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	void ForceStart(CAbility* pAbility) const; 
};
*/
//____________________________________________________________________________
//
class CFerropedeCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CFerropedeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CounterSelection;
	void OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRudeAwakeningCard : public CCard
{
	DECLARE_CARD_CSTOR(CRudeAwakeningCard);

private: 
	CManaCost	m_EntwineCost;
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEnergyChamberCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEnergyChamberCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	BOOL TargetCheck(CCard* pCard);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CNode* pNode);
};

//____________________________________________________________________________
//