#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CHoofSkulkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHoofSkulkinCard);
};

//____________________________________________________________________________
//
class CJawboneSkulkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJawboneSkulkinCard);
};

//____________________________________________________________________________
//
class CNettleSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNettleSentinelCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAltarGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAltarGolemCard);
};

//____________________________________________________________________________
//
class CBallynockTrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBallynockTrapperCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCacheRaidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCacheRaidersCard);
};

//____________________________________________________________________________
//
class CCascadeBluffsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCascadeBluffsCard);
};

//____________________________________________________________________________
//
class CCinderPyromancerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderPyromancerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCreakwoodGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCreakwoodGhoulCard);
};

//____________________________________________________________________________
//
class CDrainTheWellCard : public CCard
{
	DECLARE_CARD_CSTOR(CDrainTheWellCard);
};

//____________________________________________________________________________
//
class CFetidHeathCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFetidHeathCard);
};

//____________________________________________________________________________
//
class CFireAtWillCard : public CCard
{
	DECLARE_CARD_CSTOR(CFireAtWillCard);
};

//____________________________________________________________________________
//
class CFloodedGroveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFloodedGroveCard);
};

//____________________________________________________________________________
//
class CIndigoFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIndigoFaerieCard);
};

//____________________________________________________________________________
//
class CLeeringEmblemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeeringEmblemCard);
};

//____________________________________________________________________________
//
class CLoyalGyrfalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLoyalGyrfalconCard);
};

//____________________________________________________________________________
//
class CMarshdrinkerGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshdrinkerGiantCard);
};

//____________________________________________________________________________
//
class CMerrowLevitatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowLevitatorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRecumbentBlissCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRecumbentBlissCard);
};

//____________________________________________________________________________
//
class CRuggedPrairieCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRuggedPrairieCard);
};

//____________________________________________________________________________
//
class CScarecroneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScarecroneCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShellSkulkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShellSkulkinCard);
};

//____________________________________________________________________________
//
class CSootImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSootImpCard);
};

//____________________________________________________________________________
//
class CSutureSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSutureSpiritCard);
};

//____________________________________________________________________________
//
class CTalonrendCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTalonrendCard);
};

//____________________________________________________________________________
//
class CTillingTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTillingTreefolkCard);
};

//____________________________________________________________________________
//
class CTwilightMireCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTwilightMireCard);
};

//_____________________________________________________________________________
//
class CSavageConceptionCard : public CCard
{
    DECLARE_CARD_CSTOR(CSavageConceptionCard);
};

//_____________________________________________________________________________
//
class CCalltheSkybreakerCard : public CCard
{
    DECLARE_CARD_CSTOR(CCalltheSkybreakerCard);
};

//_____________________________________________________________________________
//
class CCennsEnlistmentCard : public CCard
{
    DECLARE_CARD_CSTOR(CCennsEnlistmentCard);
};

//_____________________________________________________________________________
//
class CFlameJabCard : public CCard
{
    DECLARE_CARD_CSTOR(CFlameJabCard);
};

//_____________________________________________________________________________
//
class COonasGraceCard : public CCard
{
    DECLARE_CARD_CSTOR(COonasGraceCard);
};

//_____________________________________________________________________________
//
class CSyphonLifeCard : public CCard
{
    DECLARE_CARD_CSTOR(CSyphonLifeCard);
};

//_____________________________________________________________________________
//
class CRavensCrimeCard : public CCard
{
    DECLARE_CARD_CSTOR(CRavensCrimeCard);
};

//_____________________________________________________________________________
//
class CMonstrifyCard : public CCard
{
    DECLARE_CARD_CSTOR(CMonstrifyCard);
};

//_____________________________________________________________________________
//
class CWavesofAggressionCard : public CCard
{
    DECLARE_CARD_CSTOR(CWavesofAggressionCard);
};

//____________________________________________________________________________
//
class CUnmakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnmakeCard);
};

//____________________________________________________________________________
//
class CWakeThrasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWakeThrasherCard);
};

//____________________________________________________________________________
//
class CWildernessHypnotistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildernessHypnotistCard);
};

//____________________________________________________________________________
//
class CDoubleCleaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CDoubleCleaveCard);
};

//____________________________________________________________________________
//
class CSlipperyBogleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlipperyBogleCard);
};

//____________________________________________________________________________
//
class CAerieOuphesCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CAerieOuphesCard);
};

//____________________________________________________________________________
//
class CBalefireLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalefireLiegeCard);
};

//____________________________________________________________________________
//
class CCreakwoodLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCreakwoodLiegeCard);
};

//____________________________________________________________________________
//
class CDuergarAssailantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuergarAssailantCard);
};

//____________________________________________________________________________
//
class CGlenElendraArchmageCard : public CFlyingCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CGlenElendraArchmageCard);
};

//____________________________________________________________________________
//
class CGrazingKelpieCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CGrazingKelpieCard);
};

//____________________________________________________________________________
//
class CHearthfireHobgoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHearthfireHobgoblinCard);
};

//____________________________________________________________________________
//
class CHobgoblinDragoonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHobgoblinDragoonCard);
};

//____________________________________________________________________________
//
class CKithkinSpelldusterCard : public CFlyingCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CKithkinSpelldusterCard);
};

//____________________________________________________________________________
//
class CLingeringTormentorCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CLingeringTormentorCard);
};

//____________________________________________________________________________
//
class CMindwrackLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindwrackLiegeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMurkfiendLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMurkfiendLiegeCard);
};

//____________________________________________________________________________
//
class CNipGwyllionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNipGwyllionCard);
};

//____________________________________________________________________________
//
class CNobilisOfWarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNobilisOfWarCard);
};

//____________________________________________________________________________
//
class CNoggleBanditCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoggleBanditCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNoggleBridgebreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoggleBridgebreakerCard);
};

//____________________________________________________________________________
//
class CNucklaveeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNucklaveeCard);
};

//____________________________________________________________________________
//
class COdiousTrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COdiousTrowCard);
};

//____________________________________________________________________________
//
class COverbeingOfMythCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COverbeingOfMythCard);
};

//____________________________________________________________________________
//
class CRestlessApparitionCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CRestlessApparitionCard);
};

//____________________________________________________________________________
//
class CSoulSnuffersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulSnuffersCard);
};

//____________________________________________________________________________
//
class CSpitemareCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpitemareCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CStalkerHagCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CStalkerHagCard);
};

//____________________________________________________________________________
//
class CStillmoonCavalierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStillmoonCavalierCard);
};

//____________________________________________________________________________
//
class CStreamHopperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStreamHopperCard);
};

//____________________________________________________________________________
//
class CTrapjawKelpieCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CTrapjawKelpieCard);
};

//____________________________________________________________________________
//
class CWistfulSelkieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWistfulSelkieCard);
};

//____________________________________________________________________________
//
class CFableOfWolfAndOwlCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFableOfWolfAndOwlCard);
};

//____________________________________________________________________________
//
class CBeckonApparitionCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeckonApparitionCard);
};

//____________________________________________________________________________
//
class CInundateCard : public CCard
{
	DECLARE_CARD_CSTOR(CInundateCard);
};

//____________________________________________________________________________
//
class CDuergarHedgeMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuergarHedgeMageCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHagHedgeMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHagHedgeMageCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRekindledFlameCard : public CCard
{
	DECLARE_CARD_CSTOR(CRekindledFlameCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSelkieHedgeMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelkieHedgeMageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGwyllionHedgeMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGwyllionHedgeMageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CNoggleHedgeMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoggleHedgeMageCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGroundlingPouncerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGroundlingPouncerCard);
	
protected:
    BOOL CanPlay(BOOL bIncludeTricks);
	CAbility* m_pAbility1;
	CAbility* m_pAbility2;
};

//____________________________________________________________________________
//
class CBattlegateMimicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlegateMimicCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNightskyMimicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightskyMimicCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRiverfallMimicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverfallMimicCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShorecrasherMimicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShorecrasherMimicCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDeathbringerLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathbringerLiegeCard);
	 
protected:
 	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDivinityofPrideCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDivinityofPrideCard);
};

//____________________________________________________________________________
//
class CCankerousThirstCard : public  CCard
{
	DECLARE_CARD_CSTOR(CCankerousThirstCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CColdEyedSelkieCard : public CLandwalkCreatureCard
{
		DECLARE_CARD_CSTOR(CColdEyedSelkieCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback,
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																								Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CBelligerentHatchlingCard : public  CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBelligerentHatchlingCard);

/*private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;*/
};

//____________________________________________________________________________
//
class CRiseoftheHobgoblinsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRiseoftheHobgoblinsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

};

//____________________________________________________________________________
//
class CSturdyHatchlingCard : public  CCreatureCard
{
	DECLARE_CARD_CSTOR(CSturdyHatchlingCard);

/*private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;*/
};

//____________________________________________________________________________
//
class CVoraciousHatchlingCard : public  CCreatureCard
{
	DECLARE_CARD_CSTOR(CVoraciousHatchlingCard);

/*private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;*/
};

//____________________________________________________________________________
//
class CDeityofScarsCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDeityofScarsCard);
};

//____________________________________________________________________________
//
class CBloodiedGhostCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodiedGhostCard);
};

//____________________________________________________________________________
//
class CCrumblingAshesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrumblingAshesCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWickerboughElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWickerboughElderCard);
};

//____________________________________________________________________________
//
class CWormHarvestCard : public CCard
{
	DECLARE_CARD_CSTOR(CWormHarvestCard);

	protected:
	typedef
	TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);	
	

};

//_____________________________________________________________________________
//
class CSpringjackShepherdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpringjackShepherdCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);	
};

//____________________________________________________________________________
//
class CUmbraStalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUmbraStalkerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDuergarCaveGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuergarCaveGuardCard);
};

//____________________________________________________________________________
//
class CHarvestGwyllionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarvestGwyllionCard);
};

//____________________________________________________________________________
//
class CNoxiousHatchlingCard : public  CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoxiousHatchlingCard);

/*private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;*/
};

//____________________________________________________________________________
//
class CRendclawTrowCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CRendclawTrowCard);
};

//____________________________________________________________________________
//
class CSmolderingButcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSmolderingButcherCard);
};

//____________________________________________________________________________
//
class CTwinbladeSlasherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTwinbladeSlasherCard);
};

//____________________________________________________________________________
//
class CPunctureBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPunctureBlastCard);
};

//____________________________________________________________________________
//
class CFigureofDestinyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFigureofDestinyCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPrimalcruxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimalcruxCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHeartlashCinderCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartlashCinderCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);	
};

//____________________________________________________________________________
//
class COutrageShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COutrageShamanCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);	
};

//____________________________________________________________________________
//
class CFieryBombardmentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFieryBombardmentCard);
	
private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	
	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;
};

//____________________________________________________________________________
//
class CSanityGrindingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSanityGrindingCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CDreamFractureCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDreamFractureCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CHallowedBurialCard : public CCard
{
	DECLARE_CARD_CSTOR(CHallowedBurialCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

/*//____________________________________________________________________________
//
class CPyrrhicRevivalCard : public CCard
{
	DECLARE_CARD_CSTOR(CPyrrhicRevivalCard);
};*/
/*private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};*/

//____________________________________________________________________________
//
class CUnnervingAssaultCard : public  CCard
{
	DECLARE_CARD_CSTOR(CUnnervingAssaultCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CInverttheSkiesCard : public  CCard
{
	DECLARE_CARD_CSTOR(CInverttheSkiesCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CChaoticBacklashCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CChaoticBacklashCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CNoggleRansackerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoggleRansackerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility,  CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRegalForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRegalForceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDoomgapeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoomgapeCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CNeedleSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNeedleSpecterCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback,
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																								Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CBloomTenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloomTenderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPatrolSignalerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPatrolSignalerCard);
};

//____________________________________________________________________________
//
class CDuergarMineCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuergarMineCaptainCard);
};

//____________________________________________________________________________
//
class CHateflayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHateflayerCard);
};

//____________________________________________________________________________
//
class CStigmaLasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStigmaLasherCard);
};

//____________________________________________________________________________
//
class CBatwingBrumeCard : public  CCard
{
	DECLARE_CARD_CSTOR(CBatwingBrumeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFlickerwispCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFlickerwispCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CSwirlingSprigganCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSwirlingSprigganCard);
};

//____________________________________________________________________________
//
class CQuillspikeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuillspikeCard);
};

//____________________________________________________________________________
//
class CHatchetBullyCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CHatchetBullyCard);
};

//____________________________________________________________________________
//
class CTalarasBattalionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTalarasBattalionCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CEndureCard : public  CCard
{
	DECLARE_CARD_CSTOR(CEndureCard);
};

//____________________________________________________________________________
//
class CSoulReapCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSoulReapCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CKithkinZealotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinZealotCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CEdgeoftheDivinityCard : public CCard
{
	DECLARE_CARD_CSTOR(CEdgeoftheDivinityCard);
};

//___________________________________________________________________________
//
class CScourgeoftheNobilisCard : public CCard
{
	DECLARE_CARD_CSTOR(CScourgeoftheNobilisCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
};

//___________________________________________________________________________
//
class CCloutoftheDominusCard : public CCard
{
	DECLARE_CARD_CSTOR(CCloutoftheDominusCard);
};

//___________________________________________________________________________
//
class CFavoroftheOverbeingCard : public CCard
{
	DECLARE_CARD_CSTOR(CFavoroftheOverbeingCard);
};

//___________________________________________________________________________
//
class CGiftoftheDeityCard : public CCard
{
	DECLARE_CARD_CSTOR(CGiftoftheDeityCard);
};

//___________________________________________________________________________
//
class CDesecratorHagCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDesecratorHagCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDesecratorHagAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
};

//____________________________________________________________________________
//
class CMerrowBonegnawerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowBonegnawerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWoodlurkerMimicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodlurkerMimicCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRazorfinAbolisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorfinAbolisherCard);
};

//____________________________________________________________________________
//
class CUnwillingRecruitCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CUnwillingRecruitCard);
};

//____________________________________________________________________________
//
class CFangSkulkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFangSkulkinCard);
};

//____________________________________________________________________________
//
class CCragPucaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCragPucaCard);
};

//____________________________________________________________________________
//
class CInsideOutCard : public CCard
{
	DECLARE_CARD_CSTOR(CInsideOutCard);
};

//____________________________________________________________________________
//
class CSpiritOfTheHearthCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritOfTheHearthCard);
};

//____________________________________________________________________________
//
class CBanishingKnackCard : public CCard
{
	DECLARE_CARD_CSTOR(CBanishingKnackCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSaplingOfColfenorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaplingOfColfenorCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CGilderBairnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGilderBairnCard);
};

//____________________________________________________________________________
//
class CSpittingImageCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSpittingImageCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;	
};

//____________________________________________________________________________
//
class CThunderblustCard : public CHasteCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CThunderblustCard);
};

//____________________________________________________________________________
//
class CNecroskitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecroskitterCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

};

//____________________________________________________________________________
//
class CCrackleburrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrackleburrCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CIdleThoughtsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIdleThoughtsCard);

	
private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CLightfromWithinCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLightfromWithinCard);
};

//____________________________________________________________________________
//
class CCauldronHazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CCauldronHazeCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAntlerSkulkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAntlerSkulkinCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CHelixPinnacleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHelixPinnacleCard);
private:	
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();

			if (pPlayer->GetLife() < Life(40))
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;
	bool BeforeResolution1(CAbilityAction* pAction);
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const;
	bool BeforeResolution2(CHelixPinnacleCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAshlingTheExtinguisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshlingTheExtinguisherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CPlayer* Affected;
};

//___________________________________________________________________________
//
class CDominusofFealtyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDominusofFealtyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CShrewdHatchlingCard : public  CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CShrewdHatchlingCard);

protected:
	CCountedCardContainer_		m_AffectedCards;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);
};

//____________________________________________________________________________
//
class CMirrorSheenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMirrorSheenCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEndlessHorizonsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEndlessHorizonsCard);

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

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSpringjackPastureCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSpringjackPastureCard);

protected:
	CCardFilter m_CardFilter;

	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
	bool BeforeResolution4(CAbilityAction* pAction) const;
	bool BeforeResolution5(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
