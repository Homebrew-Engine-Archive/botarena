#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAzoriusChanceryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAzoriusChanceryCard);
};

//____________________________________________________________________________
//
class CRakdosCarnariumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRakdosCarnariumCard);
};

//____________________________________________________________________________
//
class CSimicGrowthChamberCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSimicGrowthChamberCard);
};

//____________________________________________________________________________
//
class CSimicRagwormCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimicRagwormCard);
};

//____________________________________________________________________________
//
class CSimicSkySwallowerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSimicSkySwallowerCard);
};

//____________________________________________________________________________
//
class CBloodCryptCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CBloodCryptCard);
};

//____________________________________________________________________________
//
class CBreedingPoolCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CBreedingPoolCard);
};

//____________________________________________________________________________
//
class CHallowedFountainCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CHallowedFountainCard);
};

//____________________________________________________________________________
//
class CTidespoutTyrantCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CTidespoutTyrantCard);
};

//____________________________________________________________________________
//
class CProteanHulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CProteanHulkCard);

private:
	bool SetTriggerContext1(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext4(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext5(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext6(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext7(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
	CCardFilter m_CardFilter4;
	CCardFilter m_CardFilter5;
	CCardFilter m_CardFilter6;
	CCardFilter m_CardFilter7;
    typedef 
        TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTransguildCourierCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CTransguildCourierCard);
};

//____________________________________________________________________________
//
class CAssaultZeppelidCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CAssaultZeppelidCard);
};

//____________________________________________________________________________
//
class CAvatarOfDiscordCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CAvatarOfDiscordCard);
};

//____________________________________________________________________________
//
class CAzoriusAEthermageCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAzoriusAEthermageCard);
};

//____________________________________________________________________________
//
class CBeaconHawkCard : public CPumpCreatureCard 
{
	DECLARE_CARD_CSTOR(CBeaconHawkCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCelestialAncientCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CCelestialAncientCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDemonsJesterCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CDemonsJesterCard);
};

//____________________________________________________________________________
//
class CDreadSlagCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CDreadSlagCard);
};

//____________________________________________________________________________
//
class CDrekavacCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CDrekavacCard);
};

//____________________________________________________________________________
//
class CGnatAlleyCreeperCard : public CFearCreatureCard 
{
	DECLARE_CARD_CSTOR(CGnatAlleyCreeperCard);
};

//____________________________________________________________________________
//
class CHaazdaExoneratorCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CHaazdaExoneratorCard);
};

//____________________________________________________________________________
//
class CHaazdaShieldMateCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CHaazdaShieldMateCard);
};

//____________________________________________________________________________
//
class CIndrikStomphowlerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CIndrikStomphowlerCard);
};

//____________________________________________________________________________
//
class CMinisterOfImpedimentsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMinisterOfImpedimentsCard);
};

//____________________________________________________________________________
//
class CMistralChargerCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CMistralChargerCard);
};

//____________________________________________________________________________
//
class CRagamuffynCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRagamuffynCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGobhobblerRatsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CGobhobblerRatsCard);

protected:
	counted_ptr<CAbility> CreateRegenerationAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CRakdosGuildmageCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRakdosGuildmageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRakdosPitDragonCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRakdosPitDragonCard);
};

//____________________________________________________________________________
//
class CRatcatcherCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRatcatcherCard);
};

//____________________________________________________________________________
//
class CSilkwingScoutCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CSilkwingScoutCard);
};

//____________________________________________________________________________
//
class CSlitheringShadeCard : public CPumpCreatureCard 
{
	DECLARE_CARD_CSTOR(CSlitheringShadeCard);
};

//____________________________________________________________________________
//
class CSoulswornJuryCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSoulswornJuryCard);
};

//____________________________________________________________________________
//
class CStoicEphemeraCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CStoicEphemeraCard);
};

//____________________________________________________________________________
//
class CTrygonPredatorCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CTrygonPredatorCard);
};

//____________________________________________________________________________
//
class CUtvaraScalperCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CUtvaraScalperCard);
};

//____________________________________________________________________________
//
class CVesperGhoulCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CVesperGhoulCard);
};

//____________________________________________________________________________
//
class CWhiptailMolochCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CWhiptailMolochCard);
};

//____________________________________________________________________________
//
class CAzoriusSignetCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAzoriusSignetCard);
};

//____________________________________________________________________________
//
class CRakdosSignetCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CRakdosSignetCard);
};

//____________________________________________________________________________
//
class CSimicSignetCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSimicSignetCard);
};

//____________________________________________________________________________
//
class CSkullmeadCauldronCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSkullmeadCauldronCard);
};

//____________________________________________________________________________
//
class CLeafdrakeRoostCard : public CCard 
{
	DECLARE_CARD_CSTOR(CLeafdrakeRoostCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CNihilisticGleeCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CNihilisticGleeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CProperBurialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CProperBurialCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPsychoticFuryCard : public CChgPwrTghAttrSpellCard 
{
	DECLARE_CARD_CSTOR(CPsychoticFuryCard);
};

//____________________________________________________________________________
//
class CSpellSnareCard : public CCounterSpellCard 
{
	DECLARE_CARD_CSTOR(CSpellSnareCard);
};

//____________________________________________________________________________
//
class CVisionSkeinsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CVisionSkeinsCard);
};

//____________________________________________________________________________
//
class CWeightOfSpiresCard : public CCard 
{
	DECLARE_CARD_CSTOR(CWeightOfSpiresCard);
};

//____________________________________________________________________________
//
class CWreckingBallCard : public CTargetMoveCardSpellCard 
{
	DECLARE_CARD_CSTOR(CWreckingBallCard);
};

//____________________________________________________________________________
//
class CPureSimpleCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPureSimpleCard);
};

//____________________________________________________________________________
//
class CSupplyDemandCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSupplyDemandCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSlaughterhouseBouncerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlaughterhouseBouncerCard);
	
protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPalliationAccordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPalliationAccordCard);
};

//____________________________________________________________________________
//
class COgreGatecrasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreGatecrasherCard);
};

//____________________________________________________________________________
//
class CAzoriusPloyCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAzoriusPloyCard);
};

//____________________________________________________________________________
//
class CMacabreWaltzCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMacabreWaltzCard);
};

//____________________________________________________________________________
//
class CMomirVigSimicVisionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMomirVigSimicVisionaryCard);
	
protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSpellCast > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CCoilingOracleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoilingOracleCard);
	
protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CSproutingPhytohydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSproutingPhytohydraCard);
   
protected:
	typedef
		TTriggeredAbility<CTriggeredAbility<>, CWhenDamageDealt,
									CWhenDamageDealt::CreatureEventCallback, 
									&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPatagiaViperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPatagiaViperCard);
   
protected:	
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAzoriusHeraldCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CAzoriusHeraldCard);

protected:	
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCryptChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptChampionCard);
   
protected:	
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPlaxmantaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlaxmantaCard);
   
protected:	
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCytoplastRootkinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCytoplastRootkinCard);

protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CSimicInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimicInitiateCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CVigeanHydroponCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVigeanHydroponCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CAquastrandSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAquastrandSpiderCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CCytospawnShamblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCytospawnShamblerCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CHeliumSquirterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeliumSquirterCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CPlaxcasterFroglingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlaxcasterFroglingCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CSporebackTrollCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSporebackTrollCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CVigeanGraftmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVigeanGraftmageCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CNovijenHeartOfProgressCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNovijenHeartOfProgressCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCytoplastManipulatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCytoplastManipulatorCard);
	
protected:
	CGraftKeyword m_GraftKeyword;	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAzoriusFirstWingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAzoriusFirstWingCard);
};

//____________________________________________________________________________
//
class CEnemyOfTheGuildpactCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnemyOfTheGuildpactCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNovijenSagesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNovijenSagesCard);
	
protected:
	CGraftKeyword m_GraftKeyword;	
};

//____________________________________________________________________________
//
class CGhostQuarterCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGhostQuarterCard);
};

//____________________________________________________________________________
//
class CGrandArbiterAugustinIVCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrandArbiterAugustinIVCard);
};

//____________________________________________________________________________
//
class CAuroraEidolonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuroraEidolonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CEnigmaEidolonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnigmaEidolonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CEntropicEidolonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEntropicEidolonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSandstormEidolonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandstormEidolonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CVerdantEidolonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVerdantEidolonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
//class COcularHaloCard : public CChgPwrTghAttrEnchantCard
//{
//	DECLARE_CARD_CSTOR(COcularHaloCard);
//
//protected:
//	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
//	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
//};
//
////___________________________________________________________________________
////
class CWindreaverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindreaverCard);
};

//____________________________________________________________________________
//
class CCourtHussarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCourtHussarCard);

protected:	
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFlameKinWarScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlameKinWarScoutCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRakdosIckspitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosIckspitterCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStalkingVengeanceCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CStalkingVengeanceCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CWakestoneGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWakestoneGargoyleCard);
};

//____________________________________________________________________________
//
class CWalkingArchiveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkingArchiveCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRixMaadiDungeonPalaceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRixMaadiDungeonPalaceCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMightOfTheNephilimCard : public CCard
{
	DECLARE_CARD_CSTOR(CMightOfTheNephilimCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeliriumSkeinsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeliriumSkeinsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CStompAndHowlCard : public CCard
{
	DECLARE_CARD_CSTOR(CStompAndHowlCard);
};

//___________________________________________________________________________
//
class CSimicBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimicBasiliskCard);

protected:
	CGraftKeyword m_GraftKeyword;
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
//class CEvolutionVatCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CEvolutionVatCard);
//
//protected:
//	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
//	bool BeforeResolution(CAbilityAction* pAction) const;
//};
//
////____________________________________________________________________________
////
class CVoidslimeCard : public CCard
{
	DECLARE_CARD_CSTOR(CVoidslimeCard);
};

//____________________________________________________________________________
//
class CAzoriusGuildmageCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAzoriusGuildmageCard);
};

//____________________________________________________________________________
//
class CStreetSavvyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStreetSavvyCard);
};

//____________________________________________________________________________
//
class CGuardianOfTheGuildpactCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianOfTheGuildpactCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CProclamationOfRebirthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CProclamationOfRebirthCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGovernTheGuildlessCard : public CCard 
{
	DECLARE_CARD_CSTOR(CGovernTheGuildlessCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPlumesOfPeaceCard : public CChgPwrTghAttrEnchantCard 
{
	DECLARE_CARD_CSTOR(CPlumesOfPeaceCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPrideOfTheCloudsCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CPrideOfTheCloudsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkyscribingCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSkyscribingCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSteelingStanceCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSteelingStanceCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkyHussarCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CSkyHussarCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CDovescapeCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CDovescapeCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility;
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CPainMagnificationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPainMagnificationCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CCacklingFlamesCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCacklingFlamesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEvolutionVatCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEvolutionVatCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CJaggedPoppetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJaggedPoppetCard);

private:
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						   CPlayer* pPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CLyzoldaTheBloodWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLyzoldaTheBloodWitchCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
	CCardFilter m_CardFilter4;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRakdosTheDefilerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosTheDefilerCard);

protected:
	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	TriggeredAbility1* m_pTriggeredAbility1;

	typedef 
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	TriggeredAbility2* m_pTriggeredAbility2;
};

//____________________________________________________________________________
//
class CAnthemOfRakdosCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnthemOfRakdosCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CCrimePunishmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrimePunishmentCard);
};

//____________________________________________________________________________
//
class CFertileImaginationCard : public CCard
{
	DECLARE_CARD_CSTOR(CFertileImaginationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_TypeSelection;
};

//____________________________________________________________________________
//
class CUnlivingPsychopathCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CUnlivingPsychopathCard);

protected:
	class CUnlivingPsychopathTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHellholeRatsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CHellholeRatsCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CHitRunCard : public CCard
{
	DECLARE_CARD_CSTOR(CHitRunCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CNettlingCurseCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CNettlingCurseCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetAttackingOrBlockingEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CRiseFallCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiseFallCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CBrainPryCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrainPryCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CInfernalTutorCard : public CCard
{
	DECLARE_CARD_CSTOR(CInfernalTutorCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CIsperiaTheInscrutableCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIsperiaTheInscrutableCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSwiftSilenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwiftSilenceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//

class CVigeanIntuitionCard : public CCard
{
	DECLARE_CARD_CSTOR(CVigeanIntuitionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_TypeSelection;
};

//____________________________________________________________________________
//
class CTrialErrorCard : public CCard
{
	DECLARE_CARD_CSTOR(CTrialErrorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CResearchDevelopmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CResearchDevelopmentCard);

protected:
	CSelectionSupport m_PunisherSelection;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Advance(int PlayerID, CPlayer* pController);
	
	int_ bSomeonePaid;

	int_ nIteration;
};

//______________________________________________________________________________
//
class CHideSeekCard : public CCard
{
	DECLARE_CARD_CSTOR(CHideSeekCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBoundDeterminedCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoundDeterminedCard);

protected:
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAEthermagesTouchCard : public CCard
{
	DECLARE_CARD_CSTOR(CAEthermagesTouchCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CRiotSpikesCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRiotSpikesCard);
};

//____________________________________________________________________________
//
class CTwinstrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwinstrikeCard);

protected:
	CTargetSpell* m_cSpell;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIgnorantBlissCard : public CCard
{
	DECLARE_CARD_CSTOR(CIgnorantBlissCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
