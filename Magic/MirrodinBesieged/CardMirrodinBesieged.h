#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CPeaceStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPeaceStriderCard);
};

//____________________________________________________________________________
//
class CPierceStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPierceStriderCard);
};

//____________________________________________________________________________
//
class CPhyrexianCrusaderCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianCrusaderCard);
};

//____________________________________________________________________________
//
class CMirranCrusaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMirranCrusaderCard);
};

//____________________________________________________________________________
//
class CThopterAssemblyCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CThopterAssemblyCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

 protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGlissaTheTraitorCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CGlissaTheTraitorCard);
};

//____________________________________________________________________________
//
class CHeroOfBladeholdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeroOfBladeholdCard);
};

//____________________________________________________________________________
//
class CMastersCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CMastersCallCard);
};

//____________________________________________________________________________
//
class CPlagueMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueMyrCard);
};

//____________________________________________________________________________
//
class CSignalPestCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSignalPestCard);

 protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAccorderPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAccorderPaladinCard);
};

//____________________________________________________________________________
//
class CRazorfieldRhinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorfieldRhinoCard);
};

//____________________________________________________________________________
//
class CPriestsOfNornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPriestsOfNornCard);
};

//____________________________________________________________________________
//
class CSepticRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSepticRatsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CThrunTheLastTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CThrunTheLastTrollCard);
};

//____________________________________________________________________________
//
class CShimmerMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShimmerMyrCard);
};

//____________________________________________________________________________
//
class CKuldothaFlamefiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKuldothaFlamefiendCard);
};

//____________________________________________________________________________
//
class CViridianCorrupterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianCorrupterCard);
};

//____________________________________________________________________________
//
class CGreenSunsZenithCard : public CCard
{
	DECLARE_CARD_CSTOR(CGreenSunsZenithCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFlensermiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlensermiteCard);
};

//____________________________________________________________________________
//
class CConsecratedSphinxCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CConsecratedSphinxCard);
};

//____________________________________________________________________________
//
class CFangrenMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFangrenMarauderCard);
};

//____________________________________________________________________________
//
class CMirranSpyCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CMirranSpyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhyresisCard : public CCard
{
	DECLARE_CARD_CSTOR(CPhyresisCard);
};

//____________________________________________________________________________
//
class CPhyrexianHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianHydraCard);

protected:
	typedef
	TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhyrexianHydraCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CCreatureCard* pCreature, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CPhyrexianRevokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianRevokerCard);
};

//____________________________________________________________________________
//
class CPhyrexianVatmotherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianVatmotherCard);
};

//____________________________________________________________________________
//
class CSteelSabotageCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSteelSabotageCard);
};

//____________________________________________________________________________
//
class CBlightsteelColossusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightsteelColossusCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CSphereOfTheSunsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSphereOfTheSunsCard);
};
//_____________________________________________________________________________
//
class CVedalkenInfuserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenInfuserCard);
};

//____________________________________________________________________________
//
class CVictorysHeraldCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVictorysHeraldCard);
};

//____________________________________________________________________________
//
class CCrushCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCrushCard);
};

//____________________________________________________________________________
//
class CGoblinWardriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinWardriverCard);
};

//____________________________________________________________________________
//
class CLeadTheStampedeCard : public CCard
{
	DECLARE_CARD_CSTOR(CLeadTheStampedeCard);
};

//____________________________________________________________________________
//
class CLeoninRelicWarderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninRelicWarderCard);

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
class CVedalkenAnatomistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenAnatomistCard);
};

//____________________________________________________________________________
//
class CTreasureMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreasureMageCard);
};

//____________________________________________________________________________
//
class CIntoTheCoreCard : public CCard
{
	DECLARE_CARD_CSTOR(CIntoTheCoreCard);
};

//____________________________________________________________________________
//
class CSpiralingDuelistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiralingDuelistCard);
};

//____________________________________________________________________________
//
class CTitanForgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTitanForgeCard);
};
//_____________________________________________________________________________
//
class CViridianEmissaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianEmissaryCard);
};

//___________________________________________________________________________
//
class CVivisectionCard : public CCard
{
	DECLARE_CARD_CSTOR(CVivisectionCard);
};

//____________________________________________________________________________
//
class CInkmothNexusCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CInkmothNexusCard);
};

//____________________________________________________________________________
//
class CBlackSunsZenithCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlackSunsZenithCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBlueSunsZenithCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlueSunsZenithCard);
};

//____________________________________________________________________________
//
class CCoreProwlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoreProwlerCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//___________________________________________________________________________
//
class CSangromancerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSangromancerCard);
};

//___________________________________________________________________________
//
class CScourgeServantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeServantCard);
};

//___________________________________________________________________________
//
class CSpineOfIshSahCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpineOfIshSahCard);
};
//_____________________________________________________________________________
//
class CGoForTheThroatCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGoForTheThroatCard);
};

//____________________________________________________________________________
//
class CNeurokCommandoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokCommandoCard);
};

//____________________________________________________________________________
//
class CHellkiteIgniterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHellkiteIgniterCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIchorWellspringCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIchorWellspringCard);
};
//_____________________________________________________________________________
//
class CSlagstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSlagstormCard);
};
//_____________________________________________________________________________
//
class CCreepingCorrosionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCreepingCorrosionCard);
};

//____________________________________________________________________________
//
class CHeroOfOxidRidgeCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CHeroOfOxidRidgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKothsCourierCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CKothsCourierCard);
};

//____________________________________________________________________________
//
class CPsychosisCrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPsychosisCrawlerCard);
};

//____________________________________________________________________________
//
class CGoreVassalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoreVassalCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSwordOfFeastAndFamineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfFeastAndFamineCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFlayerHuskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFlayerHuskCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CBonehoardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBonehoardCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CTezzeretAgentOfBolasCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CTezzeretAgentOfBolasCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhyrexianJuggernautCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CPhyrexianJuggernautCard);
};

//____________________________________________________________________________
//
class CWhiteSunsZenithCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhiteSunsZenithCard);
};

//____________________________________________________________________________
//
class CDecimatorWebCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDecimatorWebCard);
};
//_____________________________________________________________________________
//
class CGlissasCourierCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CGlissasCourierCard);
};

//____________________________________________________________________________
//
class CArdentRecruitCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CArdentRecruitCard);
};

//____________________________________________________________________________
//
class CPhyrexianDigesterCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CPhyrexianDigesterCard);
};

//____________________________________________________________________________
//
class CSkinwingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkinwingCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CPraetorsCounselCard : public CCard
{
	DECLARE_CARD_CSTOR(CPraetorsCounselCard);
};

//____________________________________________________________________________
//
class CBlightwidowCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CBlightwidowCard);
};

//____________________________________________________________________________
//
class COculusCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(COculusCard);
};

//____________________________________________________________________________
//
class CMyrTurbineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMyrTurbineCard);

private:
	CCardFilter		m_CardFilter1;
	CCardFilter		m_CardFilter2;
};

//____________________________________________________________________________
//
class CBurnTheImpureCard : public CTargetChgLifeSpellCard 
{
	DECLARE_CARD_CSTOR(CBurnTheImpureCard);

private:
	bool BeforeResolution1(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMirranMettleCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMirranMettleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlaguemawBeastCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CPlaguemawBeastCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CMirrorworksCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMirrorworksCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CContestedWarZoneCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CContestedWarZoneCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CCard* pCard, CPlayer* pToPlayer, Damage pDamage);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CQuilledSlagwurmCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CQuilledSlagwurmCard);
};

//____________________________________________________________________________
//
class CConcussiveBoltCard : public CTargetChgLifeSpellCard 
{
	DECLARE_CARD_CSTOR(CConcussiveBoltCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBanishmentDecreeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBanishmentDecreeCard);
};

//____________________________________________________________________________
//
class CBlisterstickShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlisterstickShamanCard);
};

//____________________________________________________________________________
//
class CPistonSledgeCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CPistonSledgeCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSerumRakerCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSerumRakerCard);
};

//____________________________________________________________________________
//
class CTineShrikeCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CTineShrikeCard);
};

//____________________________________________________________________________
//
class CShriekhornCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CShriekhornCard);
};

//____________________________________________________________________________
//
class CMagneticMineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMagneticMineCard);
};

//____________________________________________________________________________
//
class CGustSkimmerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGustSkimmerCard);
};

//____________________________________________________________________________
//
class CHexplateGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHexplateGolemCard);
};

//____________________________________________________________________________
//
class CSpireSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpireSerpentCard);
};

//____________________________________________________________________________
//
class COgreResisterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreResisterCard);
};

//____________________________________________________________________________
//
class CLumengridGargoyleCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CLumengridGargoyleCard);
};

//____________________________________________________________________________
//
class CFleshEaterImpCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CFleshEaterImpCard);
};

//____________________________________________________________________________
//
class CGnathosaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGnathosaurCard);
};

//____________________________________________________________________________
//
class CMyrSireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrSireCard);
};

//____________________________________________________________________________
//
class CUnnaturalPredationCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnnaturalPredationCard);
};

//____________________________________________________________________________
//
class CTurnTheTideCard : public CCard
{
	DECLARE_CARD_CSTOR(CTurnTheTideCard);
};

//____________________________________________________________________________
//
class CRallyTheForcesCard : public CCard
{
	DECLARE_CARD_CSTOR(CRallyTheForcesCard);
};

//____________________________________________________________________________
//
class CLoxodonPartisanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonPartisanCard);
};

//____________________________________________________________________________
//
class CChokingFumesCard : public CCard
{
	DECLARE_CARD_CSTOR(CChokingFumesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDrossRipperCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossRipperCard);
};

//____________________________________________________________________________
//
class CFranticSalvageCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFranticSalvageCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CQuicksilverGeyserCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CQuicksilverGeyserCard);
};

//____________________________________________________________________________
//
class CRustedSlasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRustedSlasherCard);
};

//____________________________________________________________________________
//
class CCausticHoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCausticHoundCard);
};

//____________________________________________________________________________
//
class CCopperCarapaceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCopperCarapaceCard);
};

//____________________________________________________________________________
//
class CTangleHulkCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTangleHulkCard);
};

//____________________________________________________________________________
//
class CNestedGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNestedGhoulCard);
};

//____________________________________________________________________________
//
class CPistusStrikeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPistusStrikeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBladedSentinelCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBladedSentinelCard);
};

//____________________________________________________________________________
//
class CMortarpodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMortarpodCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CMassacreWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMassacreWurmCard);
};

//____________________________________________________________________________
//
class CTangleMantisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTangleMantisCard);
};

//____________________________________________________________________________
//
class CRotWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRotWolfCard);
};

//____________________________________________________________________________
//
class CKuldothaRingleaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKuldothaRingleaderCard);
};

//____________________________________________________________________________
//
class CDarksteelPlateCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelPlateCard);
};

//____________________________________________________________________________
//
class CHorrifyingRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CHorrifyingRevelationCard);
};

//____________________________________________________________________________
//
class CStrandwalkerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStrandwalkerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CMorbidPlunderCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMorbidPlunderCard);
};

//____________________________________________________________________________
//
class CViridianClawCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CViridianClawCard);
};

//____________________________________________________________________________
//
class CCorruptedConscienceCard : public CCard
{
	DECLARE_CARD_CSTOR(CCorruptedConscienceCard);
};

//____________________________________________________________________________
//
class CMitoticManipulationCard : public CCard 
{
	DECLARE_CARD_CSTOR(CMitoticManipulationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDistantMemoriesCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDistantMemoriesCard);
};

//____________________________________________________________________________
//
class CSilverskinArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSilverskinArmorCard);
};

//____________________________________________________________________________
//
class CSpreadTheSicknessCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSpreadTheSicknessCard);

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ProliferateSelection;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFuelfortheCauseCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFuelfortheCauseCard);

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ProliferateSelection;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRedSunsZenithCard : public CCard
{
	DECLARE_CARD_CSTOR(CRedSunsZenithCard);
};

//____________________________________________________________________________
//
class CBrassSquireCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CBrassSquireCard);
};

//____________________________________________________________________________
//
class CMetallicMasteryCard : public CCard
{
	DECLARE_CARD_CSTOR(CMetallicMasteryCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSpinEngineCard : public  CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinEngineCard);

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
class CMelirasKeepersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMelirasKeepersCard);
};

//____________________________________________________________________________
//
class CPhyrexianRebirthCard : public CCard
{
	DECLARE_CARD_CSTOR(CPhyrexianRebirthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int_ m_nCards;
};

//____________________________________________________________________________
//
class CVirulentWoundCard : public CCard
{
	DECLARE_CARD_CSTOR(CVirulentWoundCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGruesomeEncoreCard : public CCard
{
	DECLARE_CARD_CSTOR(CGruesomeEncoreCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
