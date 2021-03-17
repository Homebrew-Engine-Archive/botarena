#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CNemesisMaskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNemesisMaskCard);
};

//____________________________________________________________________________
//
class COxidizeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(COxidizeCard);
};

//____________________________________________________________________________
//
class CRebukingCeremonyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRebukingCeremonyCard);
};

//____________________________________________________________________________
//
class CRetractCard : public CCard
{
	DECLARE_CARD_CSTOR(CRetractCard);
};

//____________________________________________________________________________
//
class CRoaringSlagwurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoaringSlagwurmCard);
};

//____________________________________________________________________________
//
class CSoulscourCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulscourCard);
};

//____________________________________________________________________________
//
class CSkullclampCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkullclampCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CEchoingTruthCard : public CCard
{
	DECLARE_CARD_CSTOR(CEchoingTruthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSwordOfFireAndIceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfFireAndIceCard);
};

//____________________________________________________________________________
//
class CAgelessEntityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgelessEntityCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CChitteringRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChitteringRatsCard);
};

//____________________________________________________________________________
//
class CCrazedGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrazedGoblinCard);
};

//____________________________________________________________________________
//
class CFangrenFirstbornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFangrenFirstbornCard);
};

//____________________________________________________________________________
//
class CGreaterHarvesterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterHarvesterCard);
};

//____________________________________________________________________________
//
class CGrimclawBatsCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGrimclawBatsCard);
};

//____________________________________________________________________________
//
class CHoverguardObserverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHoverguardObserverCard);
};

//____________________________________________________________________________
//
class CKrarkClanStokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrarkClanStokerCard);
};

//____________________________________________________________________________
//
class CLeoninBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninBattlemageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMephiticOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMephiticOozeCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CNeurokProdigyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokProdigyCard);
};

//____________________________________________________________________________
//
class CNimAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNimAbominationCard);
};

//____________________________________________________________________________
//
class CPteronGhostCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPteronGhostCard);
};

//____________________________________________________________________________
//
class CScavengingScarabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScavengingScarabCard);
};

//____________________________________________________________________________
//
class CSteelshaperApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelshaperApprenticeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSynodArtificerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSynodArtificerCard);
};

//____________________________________________________________________________
//
class CTelJiladWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladWolfCard);
};

//____________________________________________________________________________
//
class CViridianAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianAcolyteCard);
};

//____________________________________________________________________________
//
class CViridianZealotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianZealotCard);
};

//____________________________________________________________________________
//
class CVulshokWarBoarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVulshokWarBoarCard);
};

//____________________________________________________________________________
//
class CEaterOfDaysCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEaterOfDaysCard);
};

//____________________________________________________________________________
//
class CMemnarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMemnarchCard);
};

//____________________________________________________________________________
//
class CMyrLandshaperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrLandshaperCard);
};

//____________________________________________________________________________
//
class CNeurokTransmuterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokTransmuterCard);
};

//____________________________________________________________________________
//
class CMyrMoonvesselCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrMoonvesselCard);
};

//____________________________________________________________________________
//
class CVoltaicConstructCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVoltaicConstructCard);
};

//____________________________________________________________________________
//
class CBlinkmothNexusCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBlinkmothNexusCard);
};

//____________________________________________________________________________
//
class CGenesisChamberCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGenesisChamberCard);
};

//____________________________________________________________________________
//
class CGethsGrimoireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGethsGrimoireCard);
};

//____________________________________________________________________________
//
class CSpectersShroudCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpectersShroudCard);
};

//____________________________________________________________________________
//
class CSwordOfLightAndShadowCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfLightAndShadowCard);
};

//____________________________________________________________________________
//
class CWandOfTheElementsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWandOfTheElementsCard);
};

//____________________________________________________________________________
//
class CArcaneSpyglassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArcaneSpyglassCard);
};

//____________________________________________________________________________
//
class CSpawningPitCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpawningPitCard);
};

//____________________________________________________________________________
//
class CBarbedLightningCard : public CCard
{
	DECLARE_CARD_CSTOR(CBarbedLightningCard);

protected:
	CManaCost	m_EntwineCost;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CEchoingCalmCard : public CCard
{
	DECLARE_CARD_CSTOR(CEchoingCalmCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMagneticFluxCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagneticFluxCard);
};

//____________________________________________________________________________
//
class CMetalFatigueCard : public CCard
{
	DECLARE_CARD_CSTOR(CMetalFatigueCard);
};

//____________________________________________________________________________
//
class CNourishCard : public CCard
{
	DECLARE_CARD_CSTOR(CNourishCard);
};

//____________________________________________________________________________
//
class CPurgeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPurgeCard);
};

//____________________________________________________________________________
//
class CStandTogetherCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CStandTogetherCard);
};

//____________________________________________________________________________
//
class CEchoingRuinCard : public CCard
{
	DECLARE_CARD_CSTOR(CEchoingRuinCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlamebreakCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlamebreakCard);
};

//____________________________________________________________________________
//
class CHungerOfTheNimCard : public CCard
{
	DECLARE_CARD_CSTOR(CHungerOfTheNimCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CReapAndSowCard : public CCard
{
	DECLARE_CARD_CSTOR(CReapAndSowCard);

private: 
	CManaCost	m_EntwineCost;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRitualOfRestorationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRitualOfRestorationCard);
};

//____________________________________________________________________________
//
class CEchoingCourageCard : public CCard
{
	DECLARE_CARD_CSTOR(CEchoingCourageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEchoingDecayCard : public CCard
{
	DECLARE_CARD_CSTOR(CEchoingDecayCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLastWordCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CLastWordCard);
};

//____________________________________________________________________________
//
class CChimericEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChimericEggCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMirrodinsCoreCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMirrodinsCoreCard);
};

//____________________________________________________________________________
//
class CCoretapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoretapperCard);
};

//____________________________________________________________________________
//
class CKarstodermCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarstodermCard);
};

//____________________________________________________________________________
//
class CSpincrusherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSpincrusherCard);
};

//____________________________________________________________________________
//
class CDeathCloudCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathCloudCard);

private:
	typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility3;
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility3* m_pTriggeredAbility1;
	TriggeredAbility3* m_pTriggeredAbility3;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

};

//____________________________________________________________________________
//
class CAEtherVialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherVialCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
protected:
	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CSlobadGoblinTinkererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlobadGoblinTinkererCard);
};

//____________________________________________________________________________
//
class CDarksteelGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDarksteelGargoyleCard);
};

//____________________________________________________________________________
//
class CDarksteelCitadelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDarksteelCitadelCard);
};

//____________________________________________________________________________
//
class CDarksteelBruteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelBruteCard);
};

//____________________________________________________________________________
//
class CDarksteelPendantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelPendantCard);
};

//____________________________________________________________________________
//
class CMyrMatrixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMyrMatrixCard);
};

//____________________________________________________________________________
//
class CShieldOfKaldraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShieldOfKaldraCard);
};

//____________________________________________________________________________
//
class CInfestedRootholdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfestedRootholdCard);
};

//____________________________________________________________________________
//
class CTelJiladOutriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladOutriderCard);
};

//____________________________________________________________________________
//
class CPulseOfTheTangleCard : public CCard
{
	DECLARE_CARD_CSTOR(CPulseOfTheTangleCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPulseOfTheGridCard : public CCard
{
	DECLARE_CARD_CSTOR(CPulseOfTheGridCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPulseOfTheDrossCard : public CCard
{
	DECLARE_CARD_CSTOR(CPulseOfTheDrossCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPulseOfTheFieldsCard : public CCard
{
	DECLARE_CARD_CSTOR(CPulseOfTheFieldsCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPulseOfTheForgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CPulseOfTheForgeCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CArcboundBruiserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundBruiserCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundCrusherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundCrusherCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundHybridCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundHybridCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundLancerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundLancerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundRavagerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundRavagerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundReclaimerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundReclaimerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundSlithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundSlithCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundStingerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundStingerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundWorkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundWorkerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CArcboundOverseerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundOverseerCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CQuicksilverBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuicksilverBehemothCard);

protected:
	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDrossGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossGolemCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COxiddaGolemCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(COxiddaGolemCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRazorGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorGolemCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSpireGolemCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpireGolemCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTangleGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTangleGolemCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CChromescaleDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChromescaleDrakeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAEtherSnapCard : public CCard
{
	DECLARE_CARD_CSTOR(CAEtherSnapCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEmissaryOfDespairCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmissaryOfDespairCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CEmissaryOfHopeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmissaryOfHopeCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CDrillSkimmerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDrillSkimmerCard);
};

//____________________________________________________________________________
//
class CFurnaceDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFurnaceDragonCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CDroolingOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDroolingOgreCard);
};

//____________________________________________________________________________
//
class CAuriokGlaivemasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokGlaivemasterCard);
};

//____________________________________________________________________________
//
class CReshapeCard : public CCard
{
	DECLARE_CARD_CSTOR(CReshapeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPristineAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPristineAngelCard);

protected:
	ListenerPtr<COrientation::Listener> m_cpOListener;

	void OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation);

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPsychicOverloadCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicOverloadCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CTanglewalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTanglewalkerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CUnforgeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUnforgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMurderousSpoilsCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMurderousSpoilsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CScreamsFromWithinCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CScreamsFromWithinCard);
};

//____________________________________________________________________________
//
class CDarksteelReactorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelReactorCard);
protected:
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CSunderingTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunderingTitanCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility2;

	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);

	CCountedCardContainer pLands;

	void OnSelectionDone1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSelectionDone2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSelectionDone3(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSelectionDone4(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSelectionDone5(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener1;
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener2;
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener3;
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener4;
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener5;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinArchaeologistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinArchaeologistCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CWireflyHiveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWireflyHiveCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSecondSightCard : public CCard
{
	DECLARE_CARD_CSTOR(CSecondSightCard);

protected:
	CManaCost	m_EntwineCost;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CArcboundFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcboundFiendCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution1 (CAbilityAction* pAction);
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CThoughtDissectorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThoughtDissectorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMachinateCard : public CCard
{
	DECLARE_CARD_CSTOR(CMachinateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSavageBeatingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSavageBeatingCard);

private: 
	CManaCost	m_EntwineCost;

	BOOL CanPlay(BOOL bIncludeTricks);

	bool BeforeResolution(CAbilityAction* pAction) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTearsOfRageCard : public CCard
{
    DECLARE_CARD_CSTOR(CTearsOfRageCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGeminiEngineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGeminiEngineCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void OnSubjectSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_SubjectSelection;
};

//____________________________________________________________________________
//