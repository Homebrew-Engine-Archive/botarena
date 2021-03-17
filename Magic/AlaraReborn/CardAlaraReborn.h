#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CLordOfExtinctionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfExtinctionCard);
};

//_____________________________________________________________________________
//
class CTimeSieveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTimeSieveCard);
};

//_____________________________________________________________________________
//
class CThopterFoundryCard : public CInPlaySpellCard
{
DECLARE_CARD_CSTOR(CThopterFoundryCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVedalkenGhoulCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR (CVedalkenGhoulCard);
};

//____________________________________________________________________________
//
class CBehemothSledgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBehemothSledgeCard);
};

//____________________________________________________________________________
//
class CBrainbiteCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrainbiteCard);
};

//____________________________________________________________________________
//
class CBreathOfMalfegorCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBreathOfMalfegorCard);
};

//____________________________________________________________________________
//
class CCerodonYearlingCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CCerodonYearlingCard);
};

//____________________________________________________________________________
//
class CBlitzHellionCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBlitzHellionCard);
};

//____________________________________________________________________________
//
class CColossalMightCard : public CCard
{
	DECLARE_CARD_CSTOR(CColossalMightCard);
};

//____________________________________________________________________________
//
class CEthercasteKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEthercasteKnightCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CGodtrackerOfJundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodtrackerOfJundCard);
};

//____________________________________________________________________________
//
class CGrizzledLeotauCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrizzledLeotauCard);
};

//____________________________________________________________________________
//
class CJenaraAsuraOfWarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJenaraAsuraOfWarCard);
};

//____________________________________________________________________________
//
class CLeoninArmorguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninArmorguardCard);
};

//____________________________________________________________________________
//
class CLorescaleCoatlCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLorescaleCoatlCard);
};

//____________________________________________________________________________
//
class CMadrushCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMadrushCyclopsCard);
};

//____________________________________________________________________________
//
class CMagefireWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMagefireWingsCard);
};

//____________________________________________________________________________
//
class CPutridLeechCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPutridLeechCard);
};

//____________________________________________________________________________
//
class CQasaliPridemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQasaliPridemageCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CRhoxBruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxBruteCard);
};

//____________________________________________________________________________
//
class CSigiledBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSigiledBehemothCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CTalonTrooperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTalonTrooperCard);
};

//____________________________________________________________________________
//
class CVithianRenegadesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVithianRenegadesCard);
};

//____________________________________________________________________________
//
class CWallOfDenialCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfDenialCard);
};

//____________________________________________________________________________
//
class CWingedCoatlCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWingedCoatlCard);
};

//____________________________________________________________________________
//
class CUnbenderTineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUnbenderTineCard);
};

//____________________________________________________________________________
//
class COfferingToAshaCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(COfferingToAshaCard);
};

//____________________________________________________________________________
//
class CLavalancheCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLavalancheCard);
};

//____________________________________________________________________________
//
class CBantSojournersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBantSojournersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGrixisSojournersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrixisSojournersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CJundSojournersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJundSojournersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDeadshotMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeadshotMinotaurCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGlassdustHulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlassdustHulkCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSanctumPlowbeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSanctumPlowbeastCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CIllusoryDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIllusoryDemonCard);
};

//____________________________________________________________________________
//
class CJhessianZombiesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJhessianZombiesCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMaskOfRiddlesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMaskOfRiddlesCard);
};

//____________________________________________________________________________
//
class CIgneousPouncerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CIgneousPouncerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMonstrousCarabidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMonstrousCarabidCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSanityGnawersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSanityGnawersCard);
};

//____________________________________________________________________________
//
class CSpellbreakerBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpellbreakerBehemothCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CValleyRannetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CValleyRannetCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMycoidShepherdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMycoidShepherdCard);
};

//____________________________________________________________________________
//
class CPaleRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPaleRecluseCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRebornHopeCard : public CCard
{
	DECLARE_CARD_CSTOR(CRebornHopeCard);
};

//____________________________________________________________________________
//
class CFightToTheDeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CFightToTheDeathCard);
};

//____________________________________________________________________________
//
class CStunSniperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStunSniperCard);
};

//____________________________________________________________________________
//
class CNulltreadGargantuanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNulltreadGargantuanCard);
};

//____________________________________________________________________________
//
class CVedalkenHereticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenHereticCard);
};

//____________________________________________________________________________
//
class CGloryscaleViashinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGloryscaleViashinoCard);
};

//____________________________________________________________________________
//
class CAnathemancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnathemancerCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDragonBroodmotherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonBroodmotherCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDrasticRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDrasticRevelationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEtheriumAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtheriumAbominationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKathariBomberCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKathariBomberCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGorgerWurmCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CGorgerWurmCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMessengerFalconsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMessengerFalconsCard);
};

//____________________________________________________________________________
//
class CSewnEyeDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSewnEyeDrakeCard);
};

//____________________________________________________________________________
//
class CMaelstromPulseCard : public CCard
{
	DECLARE_CARD_CSTOR(CMaelstromPulseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArchitectsOfWillCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchitectsOfWillCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSphinxOfTheSteelWindCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxOfTheSteelWindCard);
};

//____________________________________________________________________________
//
class CNemesisofReasonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNemesisofReasonCard);
};

//____________________________________________________________________________
//
class CDoubleNegativeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDoubleNegativeCard);
};

//____________________________________________________________________________
//
class CMarrowChomperCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CMarrowChomperCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CMarisisTwinclawsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarisisTwinclawsCard);
};

//____________________________________________________________________________
//
class CNayaSojournersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNayaSojournersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSigilOfTheNayanGodsCard : public CCard
{
	DECLARE_CARD_CSTOR(CSigilOfTheNayanGodsCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSoulManipulationCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSoulManipulationCard);
};

//____________________________________________________________________________
//
class CZealousPersecutionCard : public CCard
{
	DECLARE_CARD_CSTOR(CZealousPersecutionCard);

protected:	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFiligreeAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFiligreeAngelCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CLightningReaverCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CLightningReaverCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CEtherswornShieldmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtherswornShieldmageCard);
};

//____________________________________________________________________________
//
class CDeathbringerThoctarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathbringerThoctarCard);
};

//____________________________________________________________________________
//
class CMindFuneralCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindFuneralCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIdentityCrisisCard : public CCard
{
	DECLARE_CARD_CSTOR(CIdentityCrisisCard);
};

//____________________________________________________________________________
//
class CSoulquakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulquakeCard);

	private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSlaveOfBolasCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlaveOfBolasCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBantSurebladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBantSurebladeCard);
};

//____________________________________________________________________________
//
class CGrixisGrimbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrixisGrimbladeCard);
};

//____________________________________________________________________________
//
class CJundHackbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJundHackbladeCard);
};

//____________________________________________________________________________
//
class CNayaHushbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNayaHushbladeCard);
};

//____________________________________________________________________________
//
class CEsperStormbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEsperStormbladeCard);
};

//____________________________________________________________________________
//
class CDauntlessEscortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauntlessEscortCard);	
};

//____________________________________________________________________________
//	
class CFinestHourCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFinestHourCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature,
		AttackSubject attacked) const;	
	bool SetTriggerContext2(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature,
										AttackSubject attacked) const;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//_____________________________________________________________________________
//
class CWildfieldBorderpostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWildfieldBorderpostCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKnotvinePaladinCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKnotvinePaladinCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCrystallizationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCrystallizationCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CTraceofAbundanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CTraceofAbundanceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CFieldmistBorderpostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFieldmistBorderpostCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CFirewildBorderpostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFirewildBorderpostCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CVeinfireBorderpostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVeinfireBorderpostCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CMistveinBorderpostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMistveinBorderpostCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CShieldOfTheRighteousCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShieldOfTheRighteousCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//_____________________________________________________________________________
//
class CEsperSojournersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEsperSojournersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMorbidBloomCard : public CCard
{
	DECLARE_CARD_CSTOR(CMorbidBloomCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//___________________________________________________________________________
//
class CIntimidationBoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CIntimidationBoltCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMageSlayerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMageSlayerCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSovereignsofLostAlaraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSovereignsofLostAlaraCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature,
		AttackSubject attacked) const;	

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingAloneEventCallback> TriggeredAbility2;
	bool BeforeResolution(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CThoughtHemorrhageCard : public CCard
{
    DECLARE_CARD_CSTOR(CThoughtHemorrhageCard);
protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CSangriteBacklashCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSangriteBacklashCard);
};

//___________________________________________________________________________
//
class CDragonAppeasementCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDragonAppeasementCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//_____________________________________________________________________________
//
class CThraximundarCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CThraximundarCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//_____________________________________________________________________________
//
class CBloodbraidElfCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodbraidElfCard);
};

//_____________________________________________________________________________
//
class CEnlistedWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnlistedWurmCard);
};

//_____________________________________________________________________________
//
class CBituminousBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBituminousBlastCard);
};

//____________________________________________________________________________
//
class CCapturedSunlightCard : public CCard
{
	DECLARE_CARD_CSTOR(CCapturedSunlightCard);
};

//____________________________________________________________________________
//
class CArdentPleaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArdentPleaCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CDemonicDreadCard : public CCard
{
	DECLARE_CARD_CSTOR(CDemonicDreadCard);
};

//____________________________________________________________________________
//
class CDenyRealityCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDenyRealityCard);
};

//____________________________________________________________________________
//
class CKathariRemnantCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CKathariRemnantCard);
};

//____________________________________________________________________________
//
class CStormcallersBoonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStormcallersBoonCard);
};

//____________________________________________________________________________
//
class CViolentOutburstCard : public CCard
{
	DECLARE_CARD_CSTOR(CViolentOutburstCard);
};

//____________________________________________________________________________
//
class CKnightOfNewAlaraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfNewAlaraCard);
};

//_____________________________________________________________________________
//
class CMaelstromNexusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMaelstromNexusCard);

private:
	bool SetTriggerContext(CTriggeredCascadeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CWargateCard : public CCard
{
	DECLARE_CARD_CSTOR(CWargateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArsenalThresherCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CArsenalThresherCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CUriltheMiststalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUriltheMiststalkerCard);
};

//____________________________________________________________________________
//
class CVengefulRebirthCard : public CCard
{
	DECLARE_CARD_CSTOR(CVengefulRebirthCard);
};

//____________________________________________________________________________
//
class CRetaliatorGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRetaliatorGriffinCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTaintedSigilCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTaintedSigilCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//_____________________________________________________________________________
//
class CLichLordofUnxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLichLordofUnxCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CDefilerOfSoulsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDefilerOfSoulsCard);
};

//____________________________________________________________________________
//
class CClovenCastingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CClovenCastingCard);

protected:
	bool SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//_____________________________________________________________________________
//
class CKarrthusTyrantOfJundCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKarrthusTyrantOfJundCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CMayaelsAriaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMayaelsAriaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CNecromancersCovenantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecromancersCovenantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CSkyclawThrashCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyclawThrashCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CSpellboundDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpellboundDragonCard);

protected:
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//______________________________________________________________________________
//
class CVectisDominatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVectisDominatorCard);

protected:
	CSelectionSupport m_PunisherSelection;
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CSingeMindOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSingeMindOgreCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CSigilCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSigilCaptainCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFlurryOfWingsCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlurryOfWingsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEtherwroughtPageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEtherwroughtPageCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CNode* pNode);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPredatoryAdvantageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPredatoryAdvantageCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};
	
//____________________________________________________________________________
//
class CEnigmaSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEnigmaSphinxCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
