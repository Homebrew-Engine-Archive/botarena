#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAngelOfRetributionCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfRetributionCard);
};

//____________________________________________________________________________
//
class CAnuridScavengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnuridScavengerCard);
};

//_____________________________________________________________________________
//
class CCephalidSnitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidSnitchCard);
};

//_____________________________________________________________________________
//
class CSternJudgeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSternJudgeCard);
};

//_____________________________________________________________________________
//
class CDeepAnalysisCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeepAnalysisCard);
};

//_____________________________________________________________________________
//
class CAcornHarvestCard : public CCard
{
	DECLARE_CARD_CSTOR(CAcornHarvestCard);
};

//_____________________________________________________________________________
//
class CChainersEdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CChainersEdictCard);
};

//_____________________________________________________________________________
//
class CCripplingFatigueCard : public CCard
{
	DECLARE_CARD_CSTOR(CCripplingFatigueCard);
};

//_____________________________________________________________________________
//
class CAvenTrooperCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenTrooperCard);
};

//____________________________________________________________________________
//
class CBalshanCollaboratorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBalshanCollaboratorCard);
};

//____________________________________________________________________________
//
class CBalthorTheStoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalthorTheStoutCard);
};

//____________________________________________________________________________
//
class CBarbarianOutcastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbarianOutcastCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCentaurVeteranCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurVeteranCard);
};

//____________________________________________________________________________
//
class CEnslavedDwarfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnslavedDwarfCard);
};

//____________________________________________________________________________
//
class CGrotesqueHybridCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrotesqueHybridCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CKrosanConstrictorCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanConstrictorCard);
};

//____________________________________________________________________________
//
class CLlawanCephalidEmpressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlawanCephalidEmpressCard);
};

//____________________________________________________________________________
//
class CNantukoCalmerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoCalmerCard);
};

//____________________________________________________________________________
//
class CCentaurChieftainCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurChieftainCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTerohsVanguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerohsVanguardCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPardicArsonistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPardicArsonistCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGloomdrifterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGloomdrifterCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCephalidSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidSageCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMysticFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticFamiliarCard);
};

//____________________________________________________________________________
//
class CCabalTorturerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalTorturerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCabalRitualCard : public CCard
{
	DECLARE_CARD_CSTOR(CCabalRitualCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPutridImpCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPutridImpCard);
};

//____________________________________________________________________________
//
class CSetonsScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSetonsScoutCard);
};

//____________________________________________________________________________
//
class CMajorTerohCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMajorTerohCard);
};

//____________________________________________________________________________
//
class CMilitantMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMilitantMonkCard);
};

//____________________________________________________________________________
//
class CPardicCollaboratorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPardicCollaboratorCard);
};

//____________________________________________________________________________
//
class CSkywingAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkywingAvenCard);
};

//____________________________________________________________________________
//
class CTerohsFaithfulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerohsFaithfulCard);
};

//____________________________________________________________________________
//
class CZombieTrailblazerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieTrailblazerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCabalCoffersCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCabalCoffersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTaintedFieldCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTaintedFieldCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTaintedIsleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTaintedIsleCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTaintedPeakCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTaintedPeakCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTaintedWoodCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTaintedWoodCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCompulsionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCompulsionCard);
};

//____________________________________________________________________________
//
class CCracklingClubCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCracklingClubCard);
};

//____________________________________________________________________________
//
class CHypochondriaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHypochondriaCard);
};

//____________________________________________________________________________
//
class CMortiphobiaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMortiphobiaCard);
};

//____________________________________________________________________________
//
class CNarcissismCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNarcissismCard);
};

//____________________________________________________________________________
//
class CAccelerateCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAccelerateCard);
};

//____________________________________________________________________________
//
class CWasteAwayCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWasteAwayCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlashOfDefianceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlashOfDefianceCard);
};

//____________________________________________________________________________
//
class CMorningtideCard : public CCard
{
	DECLARE_CARD_CSTOR(CMorningtideCard);
};

//____________________________________________________________________________
//
class CUnhingeCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnhingeCard);
};

//____________________________________________________________________________
//
class CFacelessButcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFacelessButcherCard);

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

//____________________________________________________________________________
//
class CPetravarkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPetravarkCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CPetradonCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPetradonCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CCabalSurgeonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalSurgeonCard);
};

//____________________________________________________________________________
//
class CCephalidAristocratCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidAristocratCard);
};

//____________________________________________________________________________
//
class CCephalidIllusionistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidIllusionistCard);
};

//____________________________________________________________________________
//
class CKrosanRestorerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanRestorerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class COrganGrinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrganGrinderCard);
};

//____________________________________________________________________________
//
class CMesmericFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMesmericFiendCard);

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

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CIchoridCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CIchoridCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool CIchoridCard::BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CInvigoratingFallsCard : public CCard
{
	DECLARE_CARD_CSTOR(CInvigoratingFallsCard);
};

//____________________________________________________________________________
//
class CGravegougerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravegougerCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSlitheryStalkerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSlitheryStalkerCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDawnOfTheDeadCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDawnOfTheDeadCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFalseMemoriesCard : public CCard
{
	DECLARE_CARD_CSTOR(CFalseMemoriesCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CChurningEddyCard : public CCard
{
	DECLARE_CARD_CSTOR(CChurningEddyCard);
};

//____________________________________________________________________________
//
class CDwellOnThePastCard : public CCard
{
	DECLARE_CARD_CSTOR(CDwellOnThePastCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CKamahlsSledgeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CKamahlsSledgeCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBreakthroughCard : public CCard
{
	DECLARE_CARD_CSTOR(CBreakthroughCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//_____________________________________________________________________________
//
class CGhostlyWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGhostlyWingsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CAquamoebaCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAquamoebaCard);
};

//_____________________________________________________________________________
//
class CHypnoxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHypnoxCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolveSelection(TriggeredAbility1::TriggeredActionType* pAction);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CFieryTemperCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFieryTemperCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CBaskingRootwallaCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBaskingRootwallaCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CArrogantWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArrogantWurmCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CFranticPurificationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFranticPurificationCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CViolentEruptionCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CViolentEruptionCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CObsessiveSearchCard : public CCard
{
	DECLARE_CARD_CSTOR(CObsessiveSearchCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CPsychoticHazeCard : public  CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPsychoticHazeCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CStrengthOfIsolationCard : public  CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStrengthOfIsolationCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CStrengthOfLunacyCard : public  CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStrengthOfLunacyCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CInsidiousDreamsCard : public CCard
{
	DECLARE_CARD_CSTOR(CInsidiousDreamsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CSickeningDreamsCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSickeningDreamsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShadesFormCard : public CCard
{
	DECLARE_CARD_CSTOR(CShadesFormCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFarWanderingsCard : public CCard
{
	DECLARE_CARD_CSTOR(CFarWanderingsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CChainerDementiaMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChainerDementiaMasterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBoneshardSlasherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBoneshardSlasherCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CPossessedAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPossessedAvenCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CPossessedBarbarianCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPossessedBarbarianCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CPossessedCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPossessedCentaurCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CPossessedNomadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPossessedNomadCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CRancidEarthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRancidEarthCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCrazedFirecatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrazedFirecatCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	int FlipCount;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void FlipFunction(CPlayer* pController);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CSkullscorchCard : public CCard
{
	DECLARE_CARD_CSTOR(CSkullscorchCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CLonghornFirebeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLonghornFirebeastCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void Advance(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CNantukoCultivatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoCultivatorCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CRetracedImageCard : public CCard
{
	DECLARE_CARD_CSTOR(CRetracedImageCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCircularLogicCard : public CCard
{
	DECLARE_CARD_CSTOR(CCircularLogicCard);

protected:
	class CCircularLogicAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CCircularLogicAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CCircularLogicAbility() {}
	};

	BOOL CanPlay1(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLaquatussChampionCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLaquatussChampionCard);

protected:
	CPlayer* pAffected;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CGurzigostCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGurzigostCard);
};

//_____________________________________________________________________________
//
class CPitchstoneWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPitchstoneWallCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardDiscarded > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											CPlayer* pPlayer1, CCard* pCard, CPlayer* pByPlayer) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	CSelectionSupport m_UseSelection;
	void OnUseSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_____________________________________________________________________________
//