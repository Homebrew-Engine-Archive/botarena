#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CRhoxMaulersCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxMaulersCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKnightOfThePilgrimsRoadCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfThePilgrimsRoadCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFieryImpulseCard : public CCard
{
	DECLARE_CARD_CSTOR(CFieryImpulseCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CBoggartBruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartBruteCard);
};

//____________________________________________________________________________
//
class CAnointerOfChampionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnointerOfChampionsCard);
};

//____________________________________________________________________________
//
class CHitchclawRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHitchclawRecluseCard);
};

//____________________________________________________________________________
//
class CAmprynTacticianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmprynTacticianCard);
};

//____________________________________________________________________________
//
class CFoundryOfTheConsulsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFoundryOfTheConsulsCard);
};

//____________________________________________________________________________
//
class CMageRingNetworkCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMageRingNetworkCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_______________________________________________________________________________________________
//
class CVeteransSidearmCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVeteransSidearmCard);
};

//____________________________________________________________________________
//
class CGuardianAutomatonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianAutomatonCard);
};

//____________________________________________________________________________
//
class CAlchemistsVialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAlchemistsVialCard);
};

//____________________________________________________________________________
//
class CWarHornCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarHornCard);
};

//____________________________________________________________________________
//
class CRamrollerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRamrollerCard);
};

//____________________________________________________________________________
//
/*class CMeteoriteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMeteoriteCard);
};*/

//____________________________________________________________________________
//
class CPrismRingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrismRingCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	bool cWhite, cBlue, cBlack, cRed, cGreen;
};

//____________________________________________________________________________
//
class CChiefOfTheFoundryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChiefOfTheFoundryCard);
};

//____________________________________________________________________________
//
class CBrawlersPlateCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBrawlersPlateCard);
};

//____________________________________________________________________________
//
class CSwordOfTheAnimistCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfTheAnimistCard);
private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//_____________________________________________________________________________
//
class CMageRingResponderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMageRingResponderCard);
};

//____________________________________________________________________________
//
class CHelmOfTheGodsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHelmOfTheGodsCard);
private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CIroassChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIroassChampionCard);
};

//_____________________________________________________________________________
//
class CPossessedSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPossessedSkaabCard);
public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//_____________________________________________________________________________
//
class CThunderclapWyvernCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderclapWyvernCard);
};

//____________________________________________________________________________
//
class CBloodCursedKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodCursedKnightCard);
};

//____________________________________________________________________________
//
class CBoundingKrasisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoundingKrasisCard);
};

//____________________________________________________________________________
//
class CCitadelCastellanCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCitadelCastellanCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CReclusiveArtificerCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CReclusiveArtificerCard);
protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBlazingHellhoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlazingHellhoundCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CZendikarIncarnateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZendikarIncarnateCard);
};

//____________________________________________________________________________
//
class CShamanOfThePackCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CShamanOfThePackCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWildInstinctsCard : public CCard
{
	DECLARE_CARD_CSTOR(CWildInstinctsCard);

protected:
	class CHuntTheHunterSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CHuntTheHunterSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CUnholyHungerCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUnholyHungerCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CAkroanJailerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanJailerCard);
};

//____________________________________________________________________________
//
class CAvenBattlePriestCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenBattlePriestCard);
};

//____________________________________________________________________________
//
class CBlessedSpiritsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlessedSpiritsCard);
};

//____________________________________________________________________________
//
class CClericOfTheForwardOrderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClericOfTheForwardOrderCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CConsulsLieutenantCard: public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CConsulsLieutenantCard);
protected:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CEnlightenedAsceticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnlightenedAsceticCard);
};

//____________________________________________________________________________
//
class CEnshroudingMistCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CEnshroudingMistCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGideonsPhalanxCard : public CCard
{
	DECLARE_CARD_CSTOR(CGideonsPhalanxCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CGraspOfTheHieromancerCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGraspOfTheHieromancerCard);
protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CHealingHandsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHealingHandsCard);
};

//____________________________________________________________________________
//
class CHeavyInfantryCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeavyInfantryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKytheonsIrregularsCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKytheonsIrregularsCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKytheonsTacticsCard : public CCard
{
	DECLARE_CARD_CSTOR(CKytheonsTacticsCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CPatronOfTheValiantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPatronOfTheValiantCard);
};

//____________________________________________________________________________
//
class CRelicSeekerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRelicSeekerCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSentinelOfTheEternalWatchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSentinelOfTheEternalWatchCard);
};

//____________________________________________________________________________
//
class CStalwartAvenCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStalwartAvenCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSwiftReckoningCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwiftReckoningCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//___________________________________________________________________________
//
class CTopanFreebladeCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTopanFreebladeCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CValorInAkrosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CValorInAkrosCard);
};

//____________________________________________________________________________
//
class CVrynWingmareCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVrynWingmareCard);
};

//_____________________________________________________________________________
//
class CWarOracleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarOracleCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAnchorToTheAetherCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAnchorToTheAetherCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAcolyteOfTheInfernoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAcolyteOfTheInfernoCard);
protected:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						    CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						    CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CAkroanSergeantCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanSergeantCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CPlayer* pByPlayer, Damage damage) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAvariciousDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvariciousDragonCard);
};

//____________________________________________________________________________
//
class CCallOfTheFullMoonCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCallOfTheFullMoonCard);
protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//___________________________________________________________________________
//
class CConsecratedByBloodCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CConsecratedByBloodCard);
protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CDarkDabblingCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarkDabblingCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CDarkPetitionCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CDarkPetitionCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CDeadbridgeShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeadbridgeShamanCard);
};

//____________________________________________________________________________
//
class CDespoilerOfSoulsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDespoilerOfSoulsCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEyeblightAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEyeblightAssassinCard);
};

//____________________________________________________________________________
//
class CEyeblightMassacreCard : public CCard
{
	DECLARE_CARD_CSTOR(CEyeblightMassacreCard);
};

//____________________________________________________________________________
//
class CFetidImpCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFetidImpCard);
};

//____________________________________________________________________________
//
class CLanguishCard : public CCard
{
	DECLARE_CARD_CSTOR(CLanguishCard);
};

//____________________________________________________________________________
//
class CGravebladeMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravebladeMarauderCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CRoguesPassageCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRoguesPassageCard);
};

//____________________________________________________________________________
//
class CDragonFodderCard : public CCard
{
	DECLARE_CARD_CSTOR(CDragonFodderCard);
};

//____________________________________________________________________________
//
class CBellowsLizardCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBellowsLizardCard);
};

//____________________________________________________________________________
//
class CAngelsTombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelsTombCard);
};

//____________________________________________________________________________
//
class CBoneToAshCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CBoneToAshCard);
};

//____________________________________________________________________________
//
class CCatacombSlugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCatacombSlugCard);
};

//____________________________________________________________________________
//
class CCobblebruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCobblebruteCard);
};

//____________________________________________________________________________
//
class CCruelRevivalCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCruelRevivalCard);
};

//____________________________________________________________________________
//
class CDreadwatersCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreadwatersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFieryConclusionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFieryConclusionCard);
};

//____________________________________________________________________________
//
class CFleshbagMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshbagMarauderCard);
};

//____________________________________________________________________________
//
class CGoblinPiledriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinPiledriverCard);

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
class CGoldForgedSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldForgedSentinelCard);
};

//____________________________________________________________________________
//
class CGuardiansOfMeletisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardiansOfMeletisCard);
};

//____________________________________________________________________________
//
class CKnightOfTheWhiteOrchidCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfTheWhiteOrchidCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CKnightOfTheWhiteOrchidCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CKnightlyValorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CKnightlyValorCard);
};

//____________________________________________________________________________
//
class CLeafGilderCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CLeafGilderCard);
};

//___________________________________________________________________________
//
class CLlanowarEmpathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarEmpathCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMacabreWaltzCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMacabreWaltzCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMightOfTheMassesCard : public CCard
{
	DECLARE_CARD_CSTOR(CMightOfTheMassesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMurderInvestigationCard : public CEnchantCard
{
    DECLARE_CARD_CSTOR(CMurderInvestigationCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
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
class CReadTheBonesCard : public CCard 
{
	DECLARE_CARD_CSTOR(CReadTheBonesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CReturnedCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReturnedCentaurCard);
};

//____________________________________________________________________________
//
class CRunedServitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRunedServitorCard);
};

//____________________________________________________________________________
//
class CScrapskinDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScrapskinDrakeCard);
};

//____________________________________________________________________________
//
class CScreechingSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingSkaabCard);
};

//____________________________________________________________________________
//
class CSigilOfTheEmptyThroneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSigilOfTheEmptyThroneCard);
};

//____________________________________________________________________________
//
class CSigiledStarfishCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSigiledStarfishCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSkaabGoliathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkaabGoliathCard);
};

//____________________________________________________________________________
//
class CSmashToSmithereensCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSmashToSmithereensCard);
};

//____________________________________________________________________________
//
class CStratusWalkCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStratusWalkCard);
};

//____________________________________________________________________________
//
class CSylvanMessengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanMessengerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTitansStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTitansStrengthCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTotemGuideHartebeestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTotemGuideHartebeestCard);
};

//____________________________________________________________________________
//
class CTowerGeistCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CTowerGeistCard);
};

//____________________________________________________________________________
//
class CWeightOfTheUnderworldCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWeightOfTheUnderworldCard);
};

//____________________________________________________________________________
//
class CYokedOxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYokedOxCard);
};

//____________________________________________________________________________
//