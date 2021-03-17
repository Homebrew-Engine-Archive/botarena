#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDawnElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDawnElementalCard);
};

//____________________________________________________________________________
//
class CArkOfBlightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArkOfBlightCard);
};

//____________________________________________________________________________
//
class CAmbushCommanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmbushCommanderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBladewingTheRisenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBladewingTheRisenCard);
};

//____________________________________________________________________________
//
class CCarrionFeederCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionFeederCard);
};

//____________________________________________________________________________
//
class CCoastWatcherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCoastWatcherCard);
};

//____________________________________________________________________________
//
class CDeathsHeadBuzzardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathsHeadBuzzardCard);
};

//____________________________________________________________________________
//
class CElvishAberrationCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishAberrationCard);
};

//____________________________________________________________________________
//
class CNobleTemplarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNobleTemplarCard);
};

//____________________________________________________________________________
//
class CShorelineRangerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShorelineRangerCard);
};

//____________________________________________________________________________
//
class CSilverKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverKnightCard);
};

//____________________________________________________________________________
//
class CTreetopScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreetopScoutCard);
};

//____________________________________________________________________________
//
class CTwistedAbominationCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTwistedAbominationCard);
};

//____________________________________________________________________________
//
class CWirewoodGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodGuardianCard);
};

//____________________________________________________________________________
//
class CUnspeakableSymbolCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUnspeakableSymbolCard);
};

//____________________________________________________________________________
//
class CChartoothCougarCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CChartoothCougarCard);
};

//____________________________________________________________________________
//
class CEternalDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEternalDragonCard);
};

//____________________________________________________________________________
//
class CSliverOverlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSliverOverlordCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVengefulDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVengefulDeadCard);
};

//____________________________________________________________________________
//
class CPrimitiveEtchingsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrimitiveEtchingsCard);

protected:
	int_ m_ActivatedLastTurn;

	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
		CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer);
};

//____________________________________________________________________________
//
class CUncontrolledInfestationCard : public CCard
{
	DECLARE_CARD_CSTOR(CUncontrolledInfestationCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CDecreeOfSavageryCard : public CCard
{
	DECLARE_CARD_CSTOR(CDecreeOfSavageryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGildedLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CGildedLightCard);
};

//____________________________________________________________________________
//
class CRecuperateCard : public CCard
{
	DECLARE_CARD_CSTOR(CRecuperateCard);
};

//____________________________________________________________________________
//
class CSparkSprayCard : public CCard
{
	DECLARE_CARD_CSTOR(CSparkSprayCard);
};

//____________________________________________________________________________
//
class CWipeCleanCard : public CCard
{
	DECLARE_CARD_CSTOR(CWipeCleanCard);
};

//____________________________________________________________________________
//
class CBreakAsunderCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBreakAsunderCard);
};

//____________________________________________________________________________
//
class CClawsOfWirewoodCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CClawsOfWirewoodCard);
};

//____________________________________________________________________________
//
class CMisguidedRageCard : public CCard
{
	DECLARE_CARD_CSTOR(CMisguidedRageCard);
};

//____________________________________________________________________________
//
class CSkulltapCard : public CCard
{
	DECLARE_CARD_CSTOR(CSkulltapCard);
};

//____________________________________________________________________________
//
class CUnburdenCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnburdenCard);
};

//____________________________________________________________________________
//
class CAgelessSentinelsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAgelessSentinelsCard);
};

//____________________________________________________________________________
//
class CDragonTyrantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonTyrantCard);
};

//____________________________________________________________________________
//
class CFierceEmpathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFierceEmpathCard);
};

//____________________________________________________________________________
//
class CKurgadonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKurgadonCard);
};

//____________________________________________________________________________
//
class CNefashuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNefashuCard);
};

//____________________________________________________________________________
//
class CTempleOfTheFalseGodCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfTheFalseGodCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPyrostaticPillarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyrostaticPillarCard);
};

//____________________________________________________________________________
//
class CDecreeOfJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDecreeOfJusticeCard);
};

//____________________________________________________________________________
//
class CDecreeOfAnnihilationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDecreeOfAnnihilationCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;};

//____________________________________________________________________________
//
class CXantidSwarmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CXantidSwarmCard);
};

//____________________________________________________________________________
//
class CExtraArmsCard : public CCard
{
	DECLARE_CARD_CSTOR(CExtraArmsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CLingeringDeathCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CLingeringDeathCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class COneWithNatureCard : public CCard
{
	DECLARE_CARD_CSTOR(COneWithNatureCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CMetamorphoseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMetamorphoseCard);
};

//____________________________________________________________________________
//
class CDivergentGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CDivergentGrowthCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CWirewoodSymbioteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodSymbioteCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDragonstalkerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonstalkerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFrozenSolidCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFrozenSolidCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//___________________________________________________________________________
//
class CGoblinWarchiefCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinWarchiefCard);
};

//____________________________________________________________________________
//
class CDaruWarchiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruWarchiefCard);
};

//____________________________________________________________________________
//
class CDragonspeakerShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonspeakerShamanCard);
};

//____________________________________________________________________________
//
class CEdgewalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEdgewalkerCard);
};

//____________________________________________________________________________
//
class CKrosanWarchiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanWarchiefCard);
};

//____________________________________________________________________________
//
class CUndeadWarchiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadWarchiefCard);
};

//____________________________________________________________________________
//
class CThundercloudElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThundercloudElementalCard);
};

//____________________________________________________________________________
//
class CDragonShadowCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDragonShadowCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKrosanDroverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanDroverCard);
};

//____________________________________________________________________________
//
class CDragonMageCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonMageCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDragonFangsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDragonFangsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDragonScalesCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDragonScalesCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDragonWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDragonWingsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBladewingsThrallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBladewingsThrallCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDragonBreathCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDragonBreathCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPemminsAuraCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CPemminsAuraCard);
};

//____________________________________________________________________________
//
class CSulfuricVortexCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSulfuricVortexCard);
};

//____________________________________________________________________________
//
class CConsumptiveGooCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CConsumptiveGooCard);
};

//____________________________________________________________________________
//
class CTrapDiggerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrapDiggerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStifleCard : public CCard
{
	DECLARE_CARD_CSTOR(CStifleCard);
};

//____________________________________________________________________________
//
class CTendrilsofAgonyCard : public CCard
{
	DECLARE_CARD_CSTOR(CTendrilsofAgonyCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CAstralSteelCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAstralSteelCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CBrainFreezeCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrainFreezeCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CDragonstormCard : public CCard
{
	DECLARE_CARD_CSTOR(CDragonstormCard);

protected:
	CCardFilter m_CardFilter;
private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CHinderingTouchCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CHinderingTouchCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CHuntingPackCard : public CCard
{
	DECLARE_CARD_CSTOR(CHuntingPackCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CReapingTheGravesCard : public CCard
{
	DECLARE_CARD_CSTOR(CReapingTheGravesCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CScattershotCard : public CCard
{
	DECLARE_CARD_CSTOR(CScattershotCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CSproutingVinesCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSproutingVinesCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CTemporalFissureCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemporalFissureCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CWingShardsCard : public CCard
{
	DECLARE_CARD_CSTOR(CWingShardsCard);

protected:
	CCardFilter m_CardFilter;
private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CAcceleratedMutationCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAcceleratedMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCabalConditioningCard : public CCard
{
	DECLARE_CARD_CSTOR(CCabalConditioningCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDispersalShieldCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDispersalShieldCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRewardTheFaithfulCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRewardTheFaithfulCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRushOfKnowledgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CRushOfKnowledgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTorrentOfFireCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTorrentOfFireCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAncientOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientOozeCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCarbonizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CCarbonizeCard);
};

//____________________________________________________________________________
//
class CTitanicBulvoxCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CTitanicBulvoxCard);
};

//____________________________________________________________________________
//
class CChillHauntingCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CChillHauntingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPutridRaptorCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CPutridRaptorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRootElementalCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRootElementalCard);
};

//____________________________________________________________________________
//
class CRavenGuildInitiateCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenGuildInitiateCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScornfulEgotistCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CScornfulEgotistCard);
};

//____________________________________________________________________________
//
class CZombieCutthroatCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieCutthroatCard);
};

//____________________________________________________________________________
//
class CAvenLiberatorCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenLiberatorCard);
};

//____________________________________________________________________________
//
class CSkirkVolcanistCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkVolcanistCard);
};

//____________________________________________________________________________
//
class CWoodcloakerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodcloakerCard);
};

//____________________________________________________________________________
//
class CDaruSpiritualistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruSpiritualistCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CDecreeOfPainCard : public CCard
{
	DECLARE_CARD_CSTOR(CDecreeOfPainCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int_ m_nCards;
};

//____________________________________________________________________________
//
class CForgottenAncientCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForgottenAncientCard);

protected:
	CSelectionSupport m_CardSelection;
	CSelectionSupport m_NumberSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void CardSelection(CPlayer* pPlayer);
	void NumberSelection(CCard* pCard, CPlayer* pPlayer);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CDayOfTheDragonsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDayOfTheDragonsCard);

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
};

//____________________________________________________________________________
//
