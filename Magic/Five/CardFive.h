#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CGreaterRealmOfPreservationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGreaterRealmOfPreservationCard);
};

//____________________________________________________________________________
//
class CJusticeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJusticeCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CObeliskOfUndoingCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CObeliskOfUndoingCard);
};

//____________________________________________________________________________
//
class CAbbeyGargoylesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAbbeyGargoylesCard);
};

//____________________________________________________________________________
//
class CAkronLegionnaireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkronLegionnaireCard);
};

//____________________________________________________________________________
//
class CAmbushPartyCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAmbushPartyCard);
};

//____________________________________________________________________________
//
class CAnHavvaConstableCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnHavvaConstableCard);
};

//____________________________________________________________________________
//
class CArensonSAuraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArensonSAuraCard);
};

//____________________________________________________________________________
//
class CAysenBureaucratsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAysenBureaucratsCard);
};

//____________________________________________________________________________
//
//class CBlessedWineCard : public CCard
//{
//	DECLARE_CARD_CSTOR(CBlessedWineCard);
//};

//____________________________________________________________________________
//
class CBrainstormCard: public CCard
{
	DECLARE_CARD_CSTOR (CBrainstormCard);
};

//____________________________________________________________________________
//
class CBrassclawOrcsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrassclawOrcsCard);
};

//____________________________________________________________________________
//
class CBreedingPitCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBreedingPitCard);
};

//____________________________________________________________________________
//
class CChubToadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChubToadCard);
};

//____________________________________________________________________________
//
class CDandanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDandanCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDarkMazeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkMazeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDeathSpeakersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathSpeakersCard);
};

//____________________________________________________________________________
//
class CReefPiratesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReefPiratesCard);
};

//____________________________________________________________________________
//
class CDustToDustCard : public CCard
{
	DECLARE_CARD_CSTOR(CDustToDustCard);
};

//____________________________________________________________________________
//
class CDwarvenSoldierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenSoldierCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFireDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFireDrakeCard);
};

//____________________________________________________________________________
//
class CHungryMistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHungryMistCard);
};

//____________________________________________________________________________
//
class CHydroblastCard : public CCard
{
	DECLARE_CARD_CSTOR(CHydroblastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPyroblastCard : public CCard
{
	DECLARE_CARD_CSTOR(CPyroblastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIcatianScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIcatianScoutCard);
};

//____________________________________________________________________________
//
class CImposingVisageCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CImposingVisageCard);
};

//____________________________________________________________________________
//
class CJovensToolsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJovensToolsCard);
};

//____________________________________________________________________________
//
class CKnightOfStromgaldCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfStromgaldCard);
};

//____________________________________________________________________________
//
class CKrovikanSorcererCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKrovikanSorcererCard);
};

//____________________________________________________________________________
//
class CNatureSLoreCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CNatureSLoreCard);
};

//____________________________________________________________________________
//
class COrderOfTheWhiteShieldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfTheWhiteShieldCard);
};

//____________________________________________________________________________
//
class CPrimalOrderCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrimalOrderCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CRepentantBlacksmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRepentantBlacksmithCard);
};

//____________________________________________________________________________
//
class CSeaSpiritCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaSpiritCard);
};

//____________________________________________________________________________
//
class CSeaSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaSpriteCard);
};

//____________________________________________________________________________
//
class CSerraPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraPaladinCard);
};

//____________________________________________________________________________
//
class CShrinkCard : public CCard
{
	DECLARE_CARD_CSTOR(CShrinkCard);
};

//____________________________________________________________________________
//
class CStampedeCard : public CCard
{
	DECLARE_CARD_CSTOR(CStampedeCard);
};

//____________________________________________________________________________
//
class CStoneSpiritCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneSpiritCard);
};

//____________________________________________________________________________
//
class CTarpanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTarpanCard);
};

//____________________________________________________________________________
//
class CAbyssalSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalSpecterCard);
};

//____________________________________________________________________________
//
class CAdarkarWastesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAdarkarWastesCard);
};

//____________________________________________________________________________
//
class CAshnodsAltarCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAshnodsAltarCard);
};

//____________________________________________________________________________
//
class CAzureDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAzureDrakeCard);
};

//____________________________________________________________________________
//
class CBlinkingSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlinkingSpiritCard);
};

//____________________________________________________________________________
//
class CBogRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogRatsCard);
};

//____________________________________________________________________________
//
class CBoomerangCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBoomerangCard);
};

//____________________________________________________________________________
//
class CBrushlandCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBrushlandCard);
};

//____________________________________________________________________________
//
class CCatWarriorsCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CCatWarriorsCard);
};

//____________________________________________________________________________
//
class CCityOfBrassCard 
	: public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCityOfBrassCard);

/*protected:
	void OnTapped(CCard* pCard);

	CWhenSelfOrientationChanged m_WhenSelfOrientationChanged;
	CLifeModifier m_LifeModifier;*/
};

//____________________________________________________________________________
//
class CConquerCard : public CCard
{
	DECLARE_CARD_CSTOR(CConquerCard);
};

//____________________________________________________________________________
//
class CDAvenantArcherCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CDAvenantArcherCard);
};

//____________________________________________________________________________
//
class CDeflectionCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeflectionCard);
};

//____________________________________________________________________________
//
class CDerelorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDerelorCard);
};

//____________________________________________________________________________
//
class CDwarvenRuinsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDwarvenRuinsCard);
};

//____________________________________________________________________________
//
class CEbonStrongholdCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CEbonStrongholdCard);
};

//____________________________________________________________________________
//
class CElderDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElderDruidCard);
};

//____________________________________________________________________________
//
class CEvilEyeOfOrmsByGoreCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CEvilEyeOfOrmsByGoreCard);
};

//____________________________________________________________________________
//
class CFallenAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFallenAngelCard);
};

//____________________________________________________________________________
//
class CFerozsBanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFerozsBanCard);
};

//____________________________________________________________________________
//
class CFlameSpiritCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlameSpiritCard);
};

//____________________________________________________________________________
//
class CForceSpikeCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CForceSpikeCard);
};

//____________________________________________________________________________
//
class CForgetCard : public CCard
{
	DECLARE_CARD_CSTOR(CForgetCard);
};

//____________________________________________________________________________
//
class CFountainOfYouthCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CFountainOfYouthCard);
};

//____________________________________________________________________________
//
class CFyndhornElderCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CFyndhornElderCard);
};

//____________________________________________________________________________
//
class CGlacialWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlacialWallCard);
};

//____________________________________________________________________________
//
class CGoblinDiggingTeamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinDiggingTeamCard);
};

//____________________________________________________________________________
//
class CGoblinHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinHeroCard);
};

//____________________________________________________________________________
//
class CGoblinWarDrumsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinWarDrumsCard);
};

//____________________________________________________________________________
//
class CGoblinWarrensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinWarrensCard);
};

//____________________________________________________________________________
//
class CHavenwoodBattlegroundCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHavenwoodBattlegroundCard);
};

//____________________________________________________________________________
//
class CHecatombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHecatombCard);
};

//____________________________________________________________________________
//
class CIcatianTownCard : public CCard
{
	DECLARE_CARD_CSTOR(CIcatianTownCard);
};

//____________________________________________________________________________
//
class CIncinerateCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CIncinerateCard);
};

//____________________________________________________________________________
//
class CJalumTomeCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CJalumTomeCard);
};

//____________________________________________________________________________
//
class CJestersCapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJestersCapCard);
};

//____________________________________________________________________________
//
class CJokulhaupsCard : public CCard
{
	DECLARE_CARD_CSTOR(CJokulhaupsCard);
};

//____________________________________________________________________________
//
class CJuxtaposeCard : public CCard
{
	DECLARE_CARD_CSTOR(CJuxtaposeCard);
};

//____________________________________________________________________________
//
class CKarplusanForestCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKarplusanForestCard);
};

//____________________________________________________________________________
//
class CKjeldoranDeadCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranDeadCard);
};

//____________________________________________________________________________
//
class CKjeldoranRoyalGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranRoyalGuardCard);
};

//____________________________________________________________________________
//
class CLeshracsRiteCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLeshracsRiteCard);
};

//____________________________________________________________________________
//
class CLhurgoyfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLhurgoyfCard);
};

//____________________________________________________________________________
//
class CMemoryLapseCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMemoryLapseCard);
};

//____________________________________________________________________________
//
class CMesaFalconCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMesaFalconCard);
};

//____________________________________________________________________________
//
class CMindWarpCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindWarpCard);
};

//____________________________________________________________________________
//
class CMountainGoatCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMountainGoatCard);
};

//____________________________________________________________________________
//
class COrderOfTheSacredTorchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfTheSacredTorchCard);
};

//____________________________________________________________________________
//
class CPentagramOfTheAgesCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CPentagramOfTheAgesCard);
};

//____________________________________________________________________________
//
class CRecallCard : public CCard
{
	DECLARE_CARD_CSTOR(CRecallCard);
};

//____________________________________________________________________________
//
class CRemoveSoulCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CRemoveSoulCard);
};

//____________________________________________________________________________
//
class CRuinsOfTrokairCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRuinsOfTrokairCard);
};

//____________________________________________________________________________
//
class CSabretoothTigerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CSabretoothTigerCard);
};

//____________________________________________________________________________
//
class CScaledWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScaledWurmCard);
};

//____________________________________________________________________________
//
class CScavengerFolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScavengerFolkCard);
};

//____________________________________________________________________________
//
class CSengirAutocratCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSengirAutocratCard);
};

//____________________________________________________________________________
//
class CShieldWallCard : public CCard
{
	DECLARE_CARD_CSTOR(CShieldWallCard);
};

//____________________________________________________________________________
//
class CSibilantSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSibilantSpiritCard);
};

//____________________________________________________________________________
//
class CSkullCatapultCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSkullCatapultCard);
};

//____________________________________________________________________________
//
class CStromgaldCabalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStromgaldCabalCard);
};

//____________________________________________________________________________
//
class CSulfurousSpringsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSulfurousSpringsCard);
};

//____________________________________________________________________________
//
class CSvyeluniteTempleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSvyeluniteTempleCard);
};

//____________________________________________________________________________
//
class CUndergroundRiverCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUndergroundRiverCard);
};

//____________________________________________________________________________
//
class CUrzasMineCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrzasMineCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CUrzasPowerPlantCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrzasPowerPlantCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CUrzasTowerCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrzasTowerCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVodalianSoldiersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianSoldiersCard);
};

//____________________________________________________________________________
//
class CWindSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindSpiritCard);
};

//____________________________________________________________________________
//
class CWyluliWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWyluliWolfCard);
};

//____________________________________________________________________________
//
class CTortureCard : public CCard
{
	DECLARE_CARD_CSTOR(CTortureCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CCaribouRangeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CCaribouRangeCard);

protected:
	CCardFilter m_CardFilter;

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CIvoryGuardiansCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIvoryGuardiansCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCrawGiantCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CCrawGiantCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CJohtullWurmCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CJohtullWurmCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CWolverinePackCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWolverinePackCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::BlockEventCallback,
						   &CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CAurochsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAurochsCard);

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
class CAshnodsTransmograntCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAshnodsTransmograntCard);
};

//____________________________________________________________________________
//
class CBarlsCageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBarlsCageCard);
};

//____________________________________________________________________________
//
class CBarbedSextantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBarbedSextantCard);
};

//____________________________________________________________________________
//
class CKrovikanFetishCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CKrovikanFetishCard);
};

//____________________________________________________________________________
//
class CBlessedWineCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlessedWineCard);
};

//____________________________________________________________________________
//
class CEnervateCard : public CCard
{
	DECLARE_CARD_CSTOR(CEnervateCard);
};

//____________________________________________________________________________
//
class CFlareCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlareCard);
};

//____________________________________________________________________________
//
class CFoxfireCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFoxfireCard);
};

//____________________________________________________________________________
//
class CHealCard : public CCard
{
	DECLARE_CARD_CSTOR(CHealCard);
};

//____________________________________________________________________________
//
class CUpdraftCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CUpdraftCard);
};

//____________________________________________________________________________
//
class CMindRavelCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindRavelCard);
};

//____________________________________________________________________________
//
class CTouchOfDeathCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTouchOfDeathCard);
};

//____________________________________________________________________________
//
class CPoxCard : public CCard
{
	DECLARE_CARD_CSTOR(CPoxCard);

private:
	typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility3;
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	TriggeredAbility3* m_pTriggeredAbility1;
	TriggeredAbility3* m_pTriggeredAbility2;
	TriggeredAbility3* m_pTriggeredAbility3;
	TriggeredAbility3* m_pTriggeredAbility4;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

};

//____________________________________________________________________________
//
class CNecriteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecriteCard);

protected:
	CCardFilter m_CardFilter;

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CMindstabThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindstabThrullCard);

protected:
	CCardFilter m_CardFilter;

private:
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility1;
	bool SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const;
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CLabyrinthMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLabyrinthMinotaurCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CPanicCard : public CCard
{
	DECLARE_CARD_CSTOR(CPanicCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHomaridWarriorCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHomaridWarriorCard);
};

//____________________________________________________________________________
//
class CInitiatesOfTheEbonHandCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CInitiatesOfTheEbonHandCard);

protected:
	CAbility* m_pAbility;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class COrggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrggCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
    CCardFilter m_CardFilter1;
};

//____________________________________________________________________________
//
class CDivineOfferingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDivineOfferingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWordOfBlastingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWordOfBlastingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFeldonsCaneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFeldonsCaneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSerpentGeneratorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSerpentGeneratorCard);
};

//____________________________________________________________________________
//
class CSerraBestiaryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSerraBestiaryCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRabidWombatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRabidWombatCard);
};

//____________________________________________________________________________
//
class CArmorOfFaithCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CArmorOfFaithCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCarapaceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCarapaceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CThrullRetainerCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CThrullRetainerCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBottomlessVaultCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBottomlessVaultCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDwarvenHoldCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDwarvenHoldCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHollowTreesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHollowTreesCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CIcatianStoreCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CIcatianStoreCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSandSilosCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSandSilosCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGauntletsOfChaosCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGauntletsOfChaosCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
	const CCard* m_pCard1;
	const CCard* m_pCard2;
};

//____________________________________________________________________________
//
class CBindingGraspCard: public CCard
{
	DECLARE_CARD_CSTOR (CBindingGraspCard);
};

//____________________________________________________________________________
//
class CFuneralMarchCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFuneralMarchCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CGhazbanOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhazbanOgreCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGameOfChaosCard : public CCard
{
	DECLARE_CARD_CSTOR(CGameOfChaosCard);
protected:
	CSelectionSupport m_FlipSelection;
	CSelectionSupport m_Continue;
	int FlipCount;
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution (CAbilityAction* pAction);
	void FlipFunction (CPlayer* pController, CPlayer* pTarget);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnContinueSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class COrcishCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishCaptainCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CDwarvenCatapultCard : public CCard
{
	DECLARE_CARD_CSTOR(CDwarvenCatapultCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CPortentCard : public CCard
{
	DECLARE_CARD_CSTOR(CPortentCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnShuffleSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ShuffleSelection;
};

//______________________________________________________________________________
//
class CUrzasBaubleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUrzasBaubleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSoulBarrierCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoulBarrierCard);
};

//____________________________________________________________________________
//
class CTimeBombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTimeBombCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CNecropotenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecropotenceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardDiscarded > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											CPlayer* pPlayer1, CCard* pCard, CPlayer* pByPlayer) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBrokenVisageCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrokenVisageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CClockworkSteedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkSteedCard);

protected:
	BOOL_ bAttackedOrBlocked;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCreatureCard* pCreatureCard);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContextAux3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSeraphCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeraphCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt2 > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGreaterWerewolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterWerewolfCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//