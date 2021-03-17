#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CLeatherbackBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeatherbackBalothCard);
};

//____________________________________________________________________________
//
class CCelestialColonnadeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCelestialColonnadeCard);
};

//____________________________________________________________________________
//
class CCreepingTarPitCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCreepingTarPitCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CStirringWildwoodCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CStirringWildwoodCard);
};

//____________________________________________________________________________
//
class CSmolderingSpiresCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSmolderingSpiresCard);
};

//____________________________________________________________________________
//
class CHalimarDepthsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHalimarDepthsCard);
};

//____________________________________________________________________________
//
class CRuthlessCullbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRuthlessCullbladeCard);
};

//____________________________________________________________________________
//
class CJoinTheRanksCard : public CCard
{
	DECLARE_CARD_CSTOR(CJoinTheRanksCard);
};

//____________________________________________________________________________
//
class CKorFirewalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorFirewalkerCard);
};

//____________________________________________________________________________
//
class CNovablastWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNovablastWurmCard);
};

//____________________________________________________________________________
//
class CFledglingGriffinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFledglingGriffinCard);
};

//____________________________________________________________________________
//
class CBattleHurdaCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleHurdaCard);
};

//____________________________________________________________________________
//
class CLodestoneGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLodestoneGolemCard);
};

//____________________________________________________________________________
//
class CCunningSparkmageCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CCunningSparkmageCard);
};

//____________________________________________________________________________
//
class CDreadStatuaryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDreadStatuaryCard);
};

//____________________________________________________________________________
//
class CSelectiveMemoryCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSelectiveMemoryCard);
};

//____________________________________________________________________________
//
class CBojukaBrigandCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBojukaBrigandCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGraypeltHunterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGraypeltHunterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHadaFreebladeCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHadaFreebladeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CJagwaspSwarmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJagwaspSwarmCard);
};

//____________________________________________________________________________
//
class CBullRushCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBullRushCard);
};

/*//____________________________________________________________________________
//
class CDragonmasterOutcastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonmasterOutcastCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};*/
//____________________________________________________________________________
//
class CGrapplerSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrapplerSpiderCard);
};

//____________________________________________________________________________
//
class CSnappingCreeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnappingCreeperCard);
};

//____________________________________________________________________________
//
class CHedronRoverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHedronRoverCard);
};

//____________________________________________________________________________
//
class CPilgrimsEyeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPilgrimsEyeCard);
};

//____________________________________________________________________________
//
class CWalkingAtlasCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkingAtlasCard);
};

//____________________________________________________________________________
//
class CKhalniGardenCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CKhalniGardenCard);
};

//____________________________________________________________________________
//
class CLoamLionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoamLionCard);
};

//____________________________________________________________________________
//
class CMarshThreaderCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshThreaderCard);
};

//____________________________________________________________________________
//
class CDispelCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDispelCard);
};

//____________________________________________________________________________
//
class CGoliathSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoliathSphinxCard);
};

//____________________________________________________________________________
//
class CIonasJudgmentCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CIonasJudgmentCard);
};

//____________________________________________________________________________
//
class CStoneforgeMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneforgeMysticCard);

	protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVeteransReflexesCard : public CCard
{
	DECLARE_CARD_CSTOR(CVeteransReflexesCard);
};

//____________________________________________________________________________
//
class CQuestfortheNihilStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestfortheNihilStoneCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(TriggeredAbility::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};
//____________________________________________________________________________
//
class CAbyssalPersecutorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalPersecutorCard);
};

//____________________________________________________________________________
//
class CSlaveringNullsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlaveringNullsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							   CWhenSelfDamageDealt::PlayerEventCallback, 
							   &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
							CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CSlaveringNullsCard::TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CShorelineSalvagerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShorelineSalvagerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt,
							   CWhenSelfDamageDealt::PlayerEventCallback, 
							   &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CShorelineSalvagerCard::TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CAdmonitionAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAdmonitionAngelCard);

protected:
	CCountedCardContainer_ pExiled;
	
	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CDragonmasterOutcastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonmasterOutcastCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//	
class CCausticCrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCausticCrawlerCard);
};

//____________________________________________________________________________
//
class CCosisRavagerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCosisRavagerCard);
};

//____________________________________________________________________________
//
class CExploreCard : public CCard
{
	DECLARE_CARD_CSTOR(CExploreCard);
};

//____________________________________________________________________________
//
class CKalastriaHighbornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKalastriaHighbornCard);
};

//____________________________________________________________________________
//
class CSeersSundialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSeersSundialCard);
};


//____________________________________________________________________________
//
class CButcherofMalakirCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CButcherofMalakirCard);
};

//____________________________________________________________________________
//
class CTectonicEdgeCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CTectonicEdgeCard);
	
protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTideforceElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTideforceElementalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSurrakarBanisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSurrakarBanisherCard);
};

//____________________________________________________________________________
//
class CAkoumBattlesingerCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CAkoumBattlesingerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAnowonTheRuinSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnowonTheRuinSageCard);
};

//____________________________________________________________________________
//
class CArchonOfRedemptionCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArchonOfRedemptionCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAvengerOfZendikarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvengerOfZendikarCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CGrotagThrasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrotagThrasherCard);
};

//____________________________________________________________________________
//
class CPulseTrackerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPulseTrackerCard);
};

//____________________________________________________________________________
//
class CHammerOfRuinCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHammerOfRuinCard);
};

//____________________________________________________________________________
//
class CVaporSnareCard : public CCard
{
	DECLARE_CARD_CSTOR(CVaporSnareCard);
};

//____________________________________________________________________________
//
class CNaturesClaimCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CNaturesClaimCard);
};

//____________________________________________________________________________
//
class CBestialMenaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CBestialMenaceCard);
};

//____________________________________________________________________________
//
class CBojukaBogCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBojukaBogCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};
	/*
protected:
	class TriggeredAbility :
		public TTriggeredAbility< CTriggeredAbility<>, 
								  CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > 
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		TriggeredAbility(CCard* pCard)
			: TTriggeredAbility(pCard)
		{
		}
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pPlayer, CTriggeredAction* pAction) 
		{
			if (!__super::ResolveSelection(pPlayer, pAction))
				return FALSE;

			// Create a temporary ability to reuse the resolution code
			counted_ptr<CActivatedAbility<CTargetPlayerCardsSpell>> // must be an ability here, spells cannot resolve correctly in here because of stack requirement
				cpAbility(CreateResolutionAbility<CActivatedAbility<CTargetPlayerCardsSpell>>(
				pPlayer, // to be generated actions' controller
				ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")))); // parameters into the ability's constructor after the card and mana cost parameters
			
			cpAbility->AddCardModifier(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE));

			// Get all actions from the ability
			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;

			// For this ability, we only care about the first action so just resolve that
			return cpAbility->Resolve(apActions->GetAt(0).GetPointer());
		}
	};
};*/
//____________________________________________________________________________
//
class CQuestforRenewalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestforRenewalCard);

	protected:
	typedef 
	TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};
//____________________________________________________________________________
//
class CWolfbriarElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWolfbriarElementalCard);

private:
	bool SetTriggerContextK(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBloodhuskRitualistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodhuskRitualistCard);

private:
	bool SetTriggerContextK(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CHalimarExcavatorCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHalimarExcavatorCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CJacetheMindSculptorCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CJacetheMindSculptorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDeathsShadowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathsShadowCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	bool SetTriggerContextS(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTreasureHuntCard : public CCard
{
	DECLARE_CARD_CSTOR(CTreasureHuntCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
}; 

//____________________________________________________________________________
//
class CSummitApesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSummitApesCard);
};

//____________________________________________________________________________
//
class CHarabazDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarabazDruidCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
	bool BeforeResolution4(CAbilityAction* pAction) const;
	bool BeforeResolution5(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTerraEternalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTerraEternalCard);
};

//____________________________________________________________________________
//
class CEverflowingChaliceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEverflowingChaliceCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	
};

//____________________________________________________________________________
//
class CHorizonDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHorizonDrakeCard);
};

//____________________________________________________________________________
//
class CCanopyCoverCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCanopyCoverCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CClawsOfValakutCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CClawsOfValakutCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CEyeOfUginCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CEyeOfUginCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCorruptedZendikonCard : public CCard
{
	DECLARE_CARD_CSTOR(CCorruptedZendikonCard);
}; 

//____________________________________________________________________________
//
class CCrusherZendikonCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrusherZendikonCard);
}; 

//____________________________________________________________________________
//
class CGuardianZendikonCard : public CCard
{
	DECLARE_CARD_CSTOR(CGuardianZendikonCard);
}; 

//____________________________________________________________________________
//
class CVastwoodZendikonCard : public CCard
{
	DECLARE_CARD_CSTOR(CVastwoodZendikonCard);
}; 

//____________________________________________________________________________
//
class CWindZendikonCard : public CCard
{
	DECLARE_CARD_CSTOR(CWindZendikonCard);
}; 

//____________________________________________________________________________
//
class CBasiliskCollarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBasiliskCollarCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	//bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CTalusPaladinCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTalusPaladinCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCalciteSnapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCalciteSnapperCard);
};

//____________________________________________________________________________
//
class CAEtherTradewindsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAEtherTradewindsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSejiriSteppeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSejiriSteppeCard);

/*protected:

	class TriggeredAbility :
		public TTriggeredTargetAbility< CTriggeredAbility<>, 
		CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > 
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		TriggeredAbility(CCard* pCard)
			: TTriggeredTargetAbility(pCard)
		{ 
		}

		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pPlayer, CTriggeredAction* pAction) 
		{
			if (!__super::ResolveSelection(pPlayer, pAction))
				return FALSE;

			counted_ptr<CActivatedAbility<CTargetGainProtectionSpell>>
				cpAbility(CreateResolutionAbility<CActivatedAbility<CTargetGainProtectionSpell>>(
				pPlayer, 
				new SpecificCardComparer(pAction->GetAssociatedCard())));

			cpAbility->AddCardTypeToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white creature"));
		cpAbility->AddCardTypeToSelection(CardKeyword::ProtectionFromBlue,  TRUE, _T("blue creature"));
		cpAbility->AddCardTypeToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black creature"));
		cpAbility->AddCardTypeToSelection(CardKeyword::ProtectionFromRed,  TRUE, _T("red creature"));
		cpAbility->AddCardTypeToSelection(CardKeyword::ProtectionFromGreen,  TRUE, _T("green creature"));
			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;
			
			return cpAbility->Resolve((CAbilityAction*)(apActions->GetAt(0).GetPointer()));
		}
	};	*/
};

//____________________________________________________________________________
//
class CScribNibblersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScribNibblersCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRestfortheWearyCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRestfortheWearyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGroundswellCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CGroundswellCard);

	protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMysteriesoftheDeepCard : public CCard
{
	DECLARE_CARD_CSTOR(CMysteriesoftheDeepCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTombHexCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTombHexCard);

	protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSearingBlazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSearingBlazeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLavaclawReachesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLavaclawReachesCard);
};

//____________________________________________________________________________
//
class CRagingRavineCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRagingRavineCard);

protected:
    BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction) const;

private:
	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard) const;
};

//____________________________________________________________________________
//
class CAmuletOfVigorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAmuletOfVigorCard);

private:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBazaarTraderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBazaarTraderCard);

};

//____________________________________________________________________________
//
class CPerimeterCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPerimeterCaptainCard);

};

//____________________________________________________________________________
//
class CKitesailApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKitesailApprenticeCard);
};

//____________________________________________________________________________
//
class CQuestForTheGoblinLordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestForTheGoblinLordCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CRuinGhostCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRuinGhostCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CSejiriMerfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSejiriMerfolkCard);
};
//____________________________________________________________________________
//
class CApexHawksCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CApexHawksCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CEnclaveEliteCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CEnclaveEliteCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CGnarlidPackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGnarlidPackCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CQuagVampiresCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CQuagVampiresCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CSkitterOfLizardsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSkitterOfLizardsCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CJoragaWarcallerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJoragaWarcallerCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);

};

//____________________________________________________________________________
//
class CLightkeeperOfEmeriaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLightkeeperOfEmeriaCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

};

//____________________________________________________________________________
//
class CChainReactionCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CChainReactionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTerastodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerastodonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	std::vector<int> nDeadCount;
};

//____________________________________________________________________________
//
class CAgadeemOccultistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgadeemOccultistCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKazuulTyrantOfTheCliffsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKazuulTyrantOfTheCliffsCard);
};

//____________________________________________________________________________
//
class CUrgeToFeedCard : public CCard
{
	DECLARE_CARD_CSTOR(CUrgeToFeedCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CSelectionSupport m_VampireSelection;
	CCountedCardContainer pVampires;
	CCountedCardContainer pRemainingVampires;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnVampireSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void VampireSelection(CPlayer* pPlayer);
	void Finale();
};

//____________________________________________________________________________
//
class CQuestForUlasTempleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestForUlasTempleCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	CSelectionSupport m_CounterSelection;
	void OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_LookSelection;
	void OnLookSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};
//____________________________________________________________________________
//
class CDeadReckoningCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeadReckoningCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_YesNoSelection;
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CMiresTollCard : public CCard
{
	DECLARE_CARD_CSTOR(CMiresTollCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMordantDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMordantDragonCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const;
};

//______________________________________________________________________________
//
class CVastwoodAnimistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVastwoodAnimistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CTuktukScrapperCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTuktukScrapperCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNemesisTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CNemesisTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSlingbowTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlingbowTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
