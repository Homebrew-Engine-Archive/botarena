#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBalduvianBearsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianBearsCard);
};

//____________________________________________________________________________
//
class CBrineShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrineShamanCard);
};

//____________________________________________________________________________
//
class CCentaurArcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurArcherCard);
};

//____________________________________________________________________________
//
class CFolkOfThePinesCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFolkOfThePinesCard);
};

//____________________________________________________________________________
//
class CFoulFamiliarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFoulFamiliarCard);
};

//____________________________________________________________________________
//
class CFyndhornElvesCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CFyndhornElvesCard);
};

//____________________________________________________________________________
//
class CGorillaPackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGorillaPackCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CHoarShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CHoarShadeCard);
};

//____________________________________________________________________________
//
class CHyalopterousLemureCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHyalopterousLemureCard);
};

//____________________________________________________________________________
//
class CJuniperOrderDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJuniperOrderDruidCard);
};

//____________________________________________________________________________
//
class CKelsinkoRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKelsinkoRangerCard);
};

//____________________________________________________________________________
//
class CMinionOfLeshracCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinionOfLeshracCard);
};

//____________________________________________________________________________
//
class CMinionOfTeveshSzatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinionOfTeveshSzatCard);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CMoorFiendCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMoorFiendCard);
};

//____________________________________________________________________________
//
class COrcishCannoneersCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishCannoneersCard);
};

//____________________________________________________________________________
//
class COrcishLumberjackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishLumberjackCard);
};

//____________________________________________________________________________
//
class CPaleBearsCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CPaleBearsCard);
};

//____________________________________________________________________________
//
class CPygmyAllosaurusCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CPygmyAllosaurusCard);
};

//____________________________________________________________________________
//
class CShamblingStriderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CShamblingStriderCard);
};

//____________________________________________________________________________
//
class CSilverErneCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverErneCard);
};

//____________________________________________________________________________
//
class CStormSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormSpiritCard);
};

//____________________________________________________________________________
//
class CThunderWallCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderWallCard);
};

//____________________________________________________________________________
//
class CTorGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTorGiantCard);
};

//____________________________________________________________________________
//
class CWallOfLavaCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfLavaCard);
};

//____________________________________________________________________________
//
class CWallOfPineNeedlesCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfPineNeedlesCard);
};

//____________________________________________________________________________
//
class CZuranEnchanterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZuranEnchanterCard);
};

//____________________________________________________________________________
//
class CZuranSpellcasterCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CZuranSpellcasterCard);
};

//____________________________________________________________________________
//
class CAdarkarSentinelCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAdarkarSentinelCard);
};

//____________________________________________________________________________
//
class CWalkingWallCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkingWallCard);
};

//____________________________________________________________________________
//
class CCelestialSwordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCelestialSwordCard);
};

//____________________________________________________________________________
//
class CFyndhornBowCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFyndhornBowCard);
};

//____________________________________________________________________________
//
class CHematiteTalismanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHematiteTalismanCard);
};

//____________________________________________________________________________
//
class CLapisLazuliTalismanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLapisLazuliTalismanCard);
};

//____________________________________________________________________________
//
class CMalachiteTalismanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMalachiteTalismanCard);
};

//____________________________________________________________________________
//
class CNacreTalismanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNacreTalismanCard);
};

//____________________________________________________________________________
//
class COnyxTalismanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COnyxTalismanCard);
};

//____________________________________________________________________________
//
class CShieldOfTheAgesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShieldOfTheAgesCard);
};

//____________________________________________________________________________
//
class CWarChariotCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarChariotCard);
};

//____________________________________________________________________________
//
class CWhaleboneGliderCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWhaleboneGliderCard);
};

//____________________________________________________________________________
//
class CCurseOfMaritLageCard : public CCard
{
	DECLARE_CARD_CSTOR(CCurseOfMaritLageCard);
};

//____________________________________________________________________________
//
class CFreyaliseSCharmCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFreyaliseSCharmCard);
};

//____________________________________________________________________________
//
class CGlaciersCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlaciersCard);
};

//____________________________________________________________________________
//
class CSoulKissCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulKissCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CWingsOfAesthirCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWingsOfAesthirCard);
};

//____________________________________________________________________________
//
class CFanaticalFeverCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFanaticalFeverCard);
};

//____________________________________________________________________________
//
class CRallyCard : public CCard
{
	DECLARE_CARD_CSTOR(CRallyCard);
};

//____________________________________________________________________________
//
class CTrailblazerCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTrailblazerCard);
};

//____________________________________________________________________________
//
class CWarningCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWarningCard);
};

//____________________________________________________________________________
//
class CAltarOfBoneCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CAltarOfBoneCard);
};

//____________________________________________________________________________
//
class CDiabolicVisionCard : public CCard
{
	DECLARE_CARD_CSTOR(CDiabolicVisionCard);
};

//____________________________________________________________________________
//
class CHymnOfRebirthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHymnOfRebirthCard);
};

//____________________________________________________________________________
//
class CPestilenceRatsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CPestilenceRatsCard);
};

//____________________________________________________________________________
//
class CZuranOrbCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CZuranOrbCard);
};

//____________________________________________________________________________
//
class CAnarchyCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnarchyCard);
};

//____________________________________________________________________________
//
class CEssenceFilterCard : public CCard
{
	DECLARE_CARD_CSTOR(CEssenceFilterCard);

protected:
	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CYavimayaGnatsCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaGnatsCard);
};

//____________________________________________________________________________
//
class CEarthlinkCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEarthlinkCard);
};

//____________________________________________________________________________
//
class CKjeldoranFrostbeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranFrostbeastCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CRunedArchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRunedArchCard);
};

//____________________________________________________________________________
//
class CStuntedGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CStuntedGrowthCard);
};

//____________________________________________________________________________
//
class CWoollySpiderCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWoollySpiderCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CMeteorShowerCard : public CTargetChgLifeSpellCard
{
    DECLARE_CARD_CSTOR(CMeteorShowerCard);
};

//____________________________________________________________________________
//
class CElementalAuguryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElementalAuguryCard);
};

//____________________________________________________________________________
//
class CKrovikanElementalistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKrovikanElementalistCard);
};

//____________________________________________________________________________
//
class CGrizzledWolverineCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGrizzledWolverineCard);
};

//____________________________________________________________________________
//
class CAegisOfTheMeekCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAegisOfTheMeekCard);
};

//____________________________________________________________________________
//
class CDespoticScepterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDespoticScepterCard);
};

//____________________________________________________________________________
//
class CLimDulsCohortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLimDulsCohortCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
                                             CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CLostOrderOfJarkeldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLostOrderOfJarkeldCard);
};

//____________________________________________________________________________
//
class COrcishHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishHealerCard);
};

//____________________________________________________________________________
//
class CSkeletonShipCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletonShipCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSnowFortressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnowFortressCard);

protected:
	class CSnowFortressTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDwarvenArmoryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDwarvenArmoryCard);
};

//____________________________________________________________________________
//
class CEarthloreCard : public CEnchantCard 
{
	DECLARE_CARD_CSTOR(CEarthloreCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CForbiddenLoreCard : public CCard 
{
	DECLARE_CARD_CSTOR(CForbiddenLoreCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CHotSpringsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CHotSpringsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CBattleFrenzyCard : public CCard
{
	DECLARE_CARD_CSTOR(CBattleFrenzyCard);
};

//____________________________________________________________________________
//
class CFieryJusticeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFieryJusticeCard);
};

//____________________________________________________________________________
//
class CGoblinSappersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSappersCard);
};

//____________________________________________________________________________
//
class CBalduvianHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CIcebergCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIcebergCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CSnowCoveredForestCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CSnowCoveredForestCard);
};

//____________________________________________________________________________
//
class CSnowCoveredIslandCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CSnowCoveredIslandCard);
};

//____________________________________________________________________________
//
class CSnowCoveredMountainCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CSnowCoveredMountainCard);
};

//____________________________________________________________________________
//
class CSnowCoveredPlainsCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CSnowCoveredPlainsCard);
};

//____________________________________________________________________________
//
class CSnowCoveredSwampCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CSnowCoveredSwampCard);
};

//____________________________________________________________________________
//
class CDriftOfTheDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDriftOfTheDeadCard);
};

//____________________________________________________________________________
//
class CGoblinSkiPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSkiPatrolCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKarplusanGiantCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKarplusanGiantCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWoollyMammothsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoollyMammothsCard);
};

//____________________________________________________________________________
//
class CSunstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSunstoneCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGlacialCrevassesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGlacialCrevassesCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHallowedGroundCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHallowedGroundCard);
};

//____________________________________________________________________________
//
class CMeltingCard : public CCard
{
	DECLARE_CARD_CSTOR(CMeltingCard);
};

//____________________________________________________________________________
//
class CWhiteoutCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhiteoutCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAvalancheCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAvalancheCard);
};

//____________________________________________________________________________
//
class CPykniteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPykniteCard);
};

//____________________________________________________________________________
//
class CClairvoyanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CClairvoyanceCard);
};

//____________________________________________________________________________
//
class CForceVoidCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CForceVoidCard);
};

//____________________________________________________________________________
//
class CGravebindCard : public CCard
{
	DECLARE_CARD_CSTOR(CGravebindCard);
};

//____________________________________________________________________________
//
class CInfuseCard : public CCard
{
	DECLARE_CARD_CSTOR(CInfuseCard);
};

//____________________________________________________________________________
//
class CLightningBlowCard : public CCard
{
	DECLARE_CARD_CSTOR(CLightningBlowCard);
};

//____________________________________________________________________________
//
class CRayOfErasureCard : public CCard
{
	DECLARE_CARD_CSTOR(CRayOfErasureCard);
};

//____________________________________________________________________________
//
class CBlackScarabCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBlackScarabCard);

protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBlueScarabCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBlueScarabCard);

protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CEssenceFlareCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEssenceFlareCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CGreenScarabCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGreenScarabCard);

protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CRedScarabCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRedScarabCard);

protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CWhiteScarabCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWhiteScarabCard);

protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CAggressionCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAggressionCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//___________________________________________________________________________
//
class CArcumsWeathervaneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArcumsWeathervaneCard);
};

//____________________________________________________________________________
//
class CFumaroleCard : public CCard
{
	DECLARE_CARD_CSTOR(CFumaroleCard);
};

//____________________________________________________________________________
//
class CFylgjaCard : public CCard
{
	DECLARE_CARD_CSTOR(CFylgjaCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CArcumsSleighCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArcumsSleighCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGoblinMutantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMutantCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
    CCardFilter m_CardFilter1;
};

//____________________________________________________________________________
//
class CSnowHoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnowHoundCard);
};

//____________________________________________________________________________
//
class CMistfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistfolkCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArcticFoxesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcticFoxesCard);

protected:
    CCardFilter m_CardFilter;

private:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext4(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CardType fromCardType, CardType toCardType) const;
	bool SetTriggerContext5(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CardType fromCardType, CardType toCardType) const;
};

//____________________________________________________________________________
//
class CIcequakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CIcequakeCard);
};

//____________________________________________________________________________
//
class CThermokarstCard : public CCard
{
	DECLARE_CARD_CSTOR(CThermokarstCard);
};

//____________________________________________________________________________
//
class CIllusionsOfGrandeurCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIllusionsOfGrandeurCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CGlacialChasmCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGlacialChasmCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CIllusionaryForcesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIllusionaryForcesCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CIllusionaryWallCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIllusionaryWallCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSoldeviSimulacrumCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSoldeviSimulacrumCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CFlowOfMaggotsCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowOfMaggotsCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//	
class CFyndhornPollenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFyndhornPollenCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CColdSnapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CColdSnapCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction) const;

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CMesmericTranceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMesmericTranceCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CMysticMightCard : public CCard 
{
	DECLARE_CARD_CSTOR(CMysticMightCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CArnjlotsAscentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArnjlotsAscentCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CMaddeningWindCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CMaddeningWindCard);

protected:
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

	TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger >* m_pTriggeredAbility;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CBrownOupheCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrownOupheCard);
};

//____________________________________________________________________________
//
class CStonehandsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStonehandsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSpectralShieldCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSpectralShieldCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAshenGhoulCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenGhoulCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CRimeDryadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRimeDryadCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLegionsOfLimDulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLegionsOfLimDulCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStaffOfTheAgesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheAgesCard);
};

//____________________________________________________________________________
//
class CBarbarianGuidesCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBarbarianGuidesCard);

protected:
	CSelectionSupport m_LandwalkSelection;

	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnLandwalkSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CWordOfUndoingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWordOfUndoingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFreyaliseSupplicantCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CFreyaliseSupplicantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTinderWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTinderWallCard);
};

//____________________________________________________________________________
//
class CGoblinSnowmanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSnowmanCard);
};

//____________________________________________________________________________
//
class CDanceOfTheDeadCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDanceOfTheDeadCard);

protected:
	bool SetTriggerContext0(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext1(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CChaosLordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChaosLordCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	//bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSongsOfTheDamnedCard : public CCard
{
	DECLARE_CARD_CSTOR(CSongsOfTheDamnedCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CPolarKrakenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPolarKrakenCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
	TriggeredAbility* m_pTriggeredAbility;

private:
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CLandCapCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLandCapCard);

};
//____________________________________________________________________________
//
class CLavaTubesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLavaTubesCard);

};
//____________________________________________________________________________
//
class CRiverDeltaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRiverDeltaCard);

};
//____________________________________________________________________________
//
class CTimberlineRidgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTimberlineRidgeCard);

};
//____________________________________________________________________________
//
class CVeldtCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CVeldtCard);

};
//____________________________________________________________________________
//
class CGangrenousZombiesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGangrenousZombiesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMartonStromgaldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMartonStromgaldCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility1;
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility2;

	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGoblinLyreCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinLyreCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CBlizzardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlizzardCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CIllusionaryPresenceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIllusionaryPresenceCard);

protected:
	CSelectionSupport m_LandwalkSelection;

	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnLandwalkSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CMysticRemoraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMysticRemoraCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		bool BeforeResolution(CAbilityAction* pAction);

		CSelectionSupport m_DrawSelection;
		void OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CGiantTrapDoorSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantTrapDoorSpiderCard);

protected:
	class CGiantTrapDoorSpiderTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class COrcishLibrarianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishLibrarianCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDemonicConsultationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDemonicConsultationCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBurntOfferingCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurntOfferingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBalduvianConjurerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianConjurerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
