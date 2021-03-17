#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBlackLotusCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBlackLotusCard);
};

//____________________________________________________________________________
//
class CMoxEmeraldCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMoxEmeraldCard);
};

//____________________________________________________________________________
//
class CMoxJetCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMoxJetCard);
};

//____________________________________________________________________________
//
class CMoxPearlCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMoxPearlCard);
};

//____________________________________________________________________________
//
class CMoxRubyCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMoxRubyCard);
};

//____________________________________________________________________________
//
class CMoxSapphireCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMoxSapphireCard);
};

//____________________________________________________________________________
//
class CAncestralRecallCard : public CCard 
{
	DECLARE_CARD_CSTOR(CAncestralRecallCard);
};

//____________________________________________________________________________
//
class CTimeWalkCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTimeWalkCard);
};

//____________________________________________________________________________
//
class CTimetwisterCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTimetwisterCard);
};

//____________________________________________________________________________
//
class CTundraCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CTundraCard);
};

//____________________________________________________________________________
//
class CBadlandsCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CBadlandsCard);
};

//____________________________________________________________________________
//
class CBayouCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CBayouCard);
};

//____________________________________________________________________________
//
class CPlateauCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CPlateauCard);
};

//____________________________________________________________________________
//
class CSavannahCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CSavannahCard);
};

//____________________________________________________________________________
//
class CScrublandCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CScrublandCard);
};

//____________________________________________________________________________
//
class CTaigaCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CTaigaCard);
};

//____________________________________________________________________________
//
class CTropicalIslandCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CTropicalIslandCard);
};

//____________________________________________________________________________
//
class CUndergroundSeaCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CUndergroundSeaCard);
};

//____________________________________________________________________________
//
class CVolcanicIslandCard : public CDualLandCard 
{
	DECLARE_CARD_CSTOR(CVolcanicIslandCard);
};

//____________________________________________________________________________
//
class CSolRingCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSolRingCard);
};

//____________________________________________________________________________
//
class CRegrowthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRegrowthCard);
};

//____________________________________________________________________________
//
class CDemonicTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CDemonicTutorCard);
};

//____________________________________________________________________________
//
class CWheelOfFortuneCard : public CCard 
{
	DECLARE_CARD_CSTOR(CWheelOfFortuneCard);
};

//____________________________________________________________________________
//
class CBlackViseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlackViseCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CPlayer* SelectedPlayer;
};

//____________________________________________________________________________
//
class CLightningBoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLightningBoltCard);
};

//____________________________________________________________________________
//
class CDarkRitualCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDarkRitualCard);
};

//____________________________________________________________________________
//
class CJuggernautCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CJuggernautCard);
};

//____________________________________________________________________________
//
class CMindTwistCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindTwistCard);
};

//____________________________________________________________________________
//
class CSwordsToPlowsharesCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwordsToPlowsharesCard);
};

//____________________________________________________________________________
//
class CNevinyrralsDiskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNevinyrralsDiskCard);
};

//____________________________________________________________________________
//
class CControlMagicCard : public CCard
{
	DECLARE_CARD_CSTOR(CControlMagicCard);
};

//____________________________________________________________________________
//
class CBraingeyserCard : public CCard
{
	DECLARE_CARD_CSTOR(CBraingeyserCard);
};

//____________________________________________________________________________
//
class CBadMoonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBadMoonCard);
};

//____________________________________________________________________________
//
class CBlackKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBlackKnightCard);
};

//____________________________________________________________________________
//
class CFrozenShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFrozenShadeCard);
};

//____________________________________________________________________________
//
class CCockatriceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCockatriceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDwarvenWarriorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenWarriorsCard);
};

//____________________________________________________________________________
//
class CGraniteGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGraniteGargoyleCard);
};

//____________________________________________________________________________
//
class CGrayOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrayOgreCard);
};

//____________________________________________________________________________
//
class CHurloonMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHurloonMinotaurCard);
};

//____________________________________________________________________________
//
class CIronclawOrcsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIronclawOrcsCard);
};

//____________________________________________________________________________
//
class CIronrootTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIronrootTreefolkCard);
};

//____________________________________________________________________________
//
class CKeldonWarlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeldonWarlordCard);
};

//____________________________________________________________________________
//
class CMonssGoblinRaidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMonssGoblinRaidersCard);
};

//____________________________________________________________________________
//
class CPearledUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPearledUnicornCard);
};

//____________________________________________________________________________
//
class CPhantomMonsterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomMonsterCard);
};

//____________________________________________________________________________
//
class CRocOfKherRidgesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRocOfKherRidgesCard);
};

//____________________________________________________________________________
//
class CScrybSpritesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScrybSpritesCard);
};

//____________________________________________________________________________
//
class CSedgeTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSedgeTrollCard);
};

//____________________________________________________________________________
//
class CTwoheadedGiantOfForiysCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTwoheadedGiantOfForiysCard);
};

//____________________________________________________________________________
//
class CUthdenTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CUthdenTrollCard);
};

//____________________________________________________________________________
//
class CWallOfBramblesCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfBramblesCard);
};

//____________________________________________________________________________
//
class CWallOfIceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfIceCard);
};

//____________________________________________________________________________
//
class CWallOfWaterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfWaterCard);
};

//____________________________________________________________________________
//
class CWarMammothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarMammothCard);
};

//____________________________________________________________________________
//
class CWaterElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWaterElementalCard);
};

//____________________________________________________________________________
//
class CWhiteKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CWhiteKnightCard);
};

//____________________________________________________________________________
//
class CKormusBellCard : public CCard
{
	DECLARE_CARD_CSTOR(CKormusBellCard);
};

//____________________________________________________________________________
//
class CConservatorCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CConservatorCard);
};

//____________________________________________________________________________
//
class CGauntletOfMightCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGauntletOfMightCard);
};

//____________________________________________________________________________
//
class CDeathgripCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CDeathgripCard);
};

//____________________________________________________________________________
//
class CLifeforceCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CLifeforceCard);
};

//____________________________________________________________________________
//
class CPlagueRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueRatsCard);
};

//____________________________________________________________________________
//
class CBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlessingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEvilPresenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CEvilPresenceCard);
};

//____________________________________________________________________________
//
class CSinkholeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSinkholeCard);
};

//____________________________________________________________________________
//
class CIceStormCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CIceStormCard);
};

//____________________________________________________________________________
//
class CTsunamiCard : public CCard
{
	DECLARE_CARD_CSTOR(CTsunamiCard);
};

//____________________________________________________________________________
//
class CCursedLandCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CCursedLandCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CLivingWallCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLivingWallCard);
};

//____________________________________________________________________________
//
class CPhantasmalForcesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantasmalForcesCard);
};

//____________________________________________________________________________
//
class CResurrectionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CResurrectionCard);
};

//____________________________________________________________________________
//
class CWeaknessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWeaknessCard);
};

//____________________________________________________________________________
//
class CJumpCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CJumpCard);
};

//____________________________________________________________________________
//
class CLanceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLanceCard);
};

//____________________________________________________________________________
//
class CLifetapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLifetapCard);
};

//____________________________________________________________________________
//
class CTunnelCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTunnelCard);
};

//____________________________________________________________________________
//
class CDeathWardCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathWardCard);
};

//____________________________________________________________________________
//
class CCopperTabletCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCopperTabletCard);
};

//____________________________________________________________________________
//
class CBasaltMonolithCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBasaltMonolithCard);
};

//____________________________________________________________________________
//
class CFeedbackCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFeedbackCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWanderlustCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CWanderlustCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWarpArtifactCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CWarpArtifactCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CCelestialPrismCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCelestialPrismCard);
};

//____________________________________________________________________________
//
class CSeaSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPirateShipCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CPirateShipCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPsionicBlastCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPsionicBlastCard);
};

//____________________________________________________________________________
//
class CBlueElementalBlastCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CBlueElementalBlastCard);
};

//____________________________________________________________________________
//
class CRedElementalBlastCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CRedElementalBlastCard);
};

//____________________________________________________________________________
//
class CStasisCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStasisCard);
};

//____________________________________________________________________________
//
class CBlackWardCard : public CCard 
{
	DECLARE_CARD_CSTOR(CBlackWardCard);
};

//____________________________________________________________________________
//
class CBlueWardCard : public CCard 
{
	DECLARE_CARD_CSTOR(CBlueWardCard);
};

//____________________________________________________________________________
//
class CGreenWardCard : public CCard 
{
	DECLARE_CARD_CSTOR(CGreenWardCard);
};

//____________________________________________________________________________
//
class CRedWardCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRedWardCard);
};

//____________________________________________________________________________
//
class CFarmsteadCard : public CCard
{
	DECLARE_CARD_CSTOR(CFarmsteadCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard,
												ContextValue_& contextValue);
	counted_ptr<CAbility> CreateTemporaryAbility();
};

//____________________________________________________________________________
//
//class CGuardianAngelCard : public CCard 
//{
//	DECLARE_CARD_CSTOR(CGuardianAngelCard);
//
//protected:
//	counted_ptr<CAbility> CreatePreventionAbility(CCard* pCard);
//};
//
//____________________________________________________________________________
//
//class CVeteranBodyguardCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CVeteranBodyguardCard);
//};
//
//____________________________________________________________________________
//
class CManaVaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaVaultCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAirElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAirElementalCard);
};

//____________________________________________________________________________
//
class CAnimateWallCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAnimateWallCard);
};

//____________________________________________________________________________
//
class CAnkhOfMishraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAnkhOfMishraCard);
};

//____________________________________________________________________________
//
class CArmageddonCard : public CCard
{
	DECLARE_CARD_CSTOR(CArmageddonCard);
};

//____________________________________________________________________________
//
class CBirdsOfParadiseCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBirdsOfParadiseCard);
};

//____________________________________________________________________________
//
class CBogWraithCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBogWraithCard);
};

//____________________________________________________________________________
//
class CBurrowingCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBurrowingCard);
};

//____________________________________________________________________________
//
class CCastleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCastleCard);
};

//____________________________________________________________________________
//
class CCircleOfProtectionBlackCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCircleOfProtectionBlackCard);
};

//____________________________________________________________________________
//
class CCircleOfProtectionBlueCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCircleOfProtectionBlueCard);
};

//____________________________________________________________________________
//
class CCircleOfProtectionGreenCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCircleOfProtectionGreenCard);
};

//____________________________________________________________________________
//
class CCircleOfProtectionRedCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCircleOfProtectionRedCard);
};

//____________________________________________________________________________
//
class CCircleOfProtectionWhiteCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCircleOfProtectionWhiteCard);
};

//____________________________________________________________________________
//
class CCounterspellCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCounterspellCard);
};

//____________________________________________________________________________
//
class CCrawWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrawWurmCard);
};

//____________________________________________________________________________
//
class CCrusadeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrusadeCard);
};

//____________________________________________________________________________
//
class CIvoryCupCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CIvoryCupCard);
};

//____________________________________________________________________________
//
class CWoodenSphereCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CWoodenSphereCard);
};

//____________________________________________________________________________
//
class CCrystalRodCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCrystalRodCard);
};

//____________________________________________________________________________
//
class CIronStarCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CIronStarCard);
};

//____________________________________________________________________________
//
class CThroneOfBoneCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CThroneOfBoneCard);
};

//____________________________________________________________________________
//
class CDingusEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDingusEggCard);
};

//____________________________________________________________________________
//
class CDisenchantCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDisenchantCard);
};

//____________________________________________________________________________
//
class CDisruptingScepterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDisruptingScepterCard);
};

//____________________________________________________________________________
//
class CDrudgeSkeletonsCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDrudgeSkeletonsCard);
};

//____________________________________________________________________________
//
class CDwarvenDemolitionTeamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenDemolitionTeamCard);
};

//____________________________________________________________________________
//
class CEarthElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEarthElementalCard);
};

//____________________________________________________________________________
//
class CEarthquakeCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEarthquakeCard);
};

//____________________________________________________________________________
//
class CElvishArchersCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishArchersCard);
};

//____________________________________________________________________________
//
class CFearCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFearCard);
};

//____________________________________________________________________________
//
class CFireElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFireElementalCard);
};

//____________________________________________________________________________
//
class CFirebreathingCard : public CCard
{
	DECLARE_CARD_CSTOR(CFirebreathingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFlashfiresCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlashfiresCard);
};

//____________________________________________________________________________
//
class CFlightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFlightCard);
};

//____________________________________________________________________________
//
class CFogCard : public CCard
{
	DECLARE_CARD_CSTOR(CFogCard);
};

//____________________________________________________________________________
//
class CForceOfNatureCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForceOfNatureCard);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CFungusaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFungusaurCard );
};

//____________________________________________________________________________
//
class CGiantGrowthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CGiantGrowthCard);
};

//____________________________________________________________________________
//
class CGiantSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantSpiderCard);
};

//____________________________________________________________________________
//
class CGlassesOfUrzaCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CGlassesOfUrzaCard);
};

//____________________________________________________________________________
//
class CGoblinBalloonBrigadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinBalloonBrigadeCard);
};

//____________________________________________________________________________
//
class CGoblinKingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinKingCard);
};

//____________________________________________________________________________
//
class CGrizzlyBearsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrizzlyBearsCard);
};

//____________________________________________________________________________
//
class CHealingSalveCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHealingSalveCard);
};

//____________________________________________________________________________
//
class CHillGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHillGiantCard);
};

//____________________________________________________________________________
//
class CHolyStrengthCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CHolyStrengthCard);
};

//____________________________________________________________________________
//
class CHowlFromBeyondCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CHowlFromBeyondCard);
};

//____________________________________________________________________________
//
class CHowlingMineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHowlingMineCard);
};

//____________________________________________________________________________
//
class CHurricaneCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHurricaneCard);
};

//____________________________________________________________________________
//
class CHypnoticSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHypnoticSpecterCard);
};

//____________________________________________________________________________
//
class CIcyManipulatorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIcyManipulatorCard);
};

//____________________________________________________________________________
//
class CInvisibilityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CInvisibilityCard);
};

//____________________________________________________________________________
//
class CJadeMonolithCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJadeMonolithCard);
};

//____________________________________________________________________________
//
class CJayemdaeTomeCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CJayemdaeTomeCard);
};

//____________________________________________________________________________
//
class CKarmaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKarmaCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLeyDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeyDruidCard);
};

//____________________________________________________________________________
//
class CLivingLandsCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingLandsCard);
};

//____________________________________________________________________________
//
class CLlanowarElvesCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarElvesCard);
};

//____________________________________________________________________________
//
class CLordOfAtlantisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfAtlantisCard);
};

//____________________________________________________________________________
//
class CLordOfThePitCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfThePitCard);
};

//____________________________________________________________________________
//
class CLureCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLureCard);
};

//____________________________________________________________________________
//
class CMahamotiDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMahamotiDjinnCard);
};

//____________________________________________________________________________
//
class CManaShortCard : public CCard
{
	DECLARE_CARD_CSTOR(CManaShortCard);
};

//____________________________________________________________________________
//
class CManabarbsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManabarbsCard);
};

//____________________________________________________________________________
//
class CMeekstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMeekstoneCard);
};

//____________________________________________________________________________
//
class CMerfolkOfThePearlTridentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkOfThePearlTridentCard);
};

//____________________________________________________________________________
//
class CNightmareCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNightmareCard);
};

//____________________________________________________________________________
//
class CNorthernPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorthernPaladinCard);
};

//____________________________________________________________________________
//
class CObsianusGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CObsianusGolemCard);
};

//____________________________________________________________________________
//
class COrcishArtilleryCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishArtilleryCard);
};

//____________________________________________________________________________
//
class COrcishOriflammeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrcishOriflammeCard);
};

//____________________________________________________________________________
//
class CPestilenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPestilenceCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPhantasmalTerrainCard : public CCard
{
	DECLARE_CARD_CSTOR(CPhantasmalTerrainCard);
};

//____________________________________________________________________________
//
class CPowerSinkCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CPowerSinkCard);
};

//____________________________________________________________________________
//
class CProdigalSorcererCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CProdigalSorcererCard);
};

//____________________________________________________________________________
//
class CPsychicVenomCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicVenomCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CRaiseDeadCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRaiseDeadCard);
};

//____________________________________________________________________________
//
class CRegenerationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRegenerationCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CReverseDamageCard : public CCard
{
	DECLARE_CARD_CSTOR(CReverseDamageCard);
};

//____________________________________________________________________________
//
class CRighteousnessCard : public CCard
{
	DECLARE_CARD_CSTOR(CRighteousnessCard);
};

//____________________________________________________________________________
//
class CRodOfRuinCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CRodOfRuinCard);
};

//____________________________________________________________________________
//
class CRoyalAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoyalAssassinCard);
};

//____________________________________________________________________________
//
class CSamiteHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSamiteHealerCard);
};

//____________________________________________________________________________
//
class CSavannahLionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavannahLionsCard);
};

//____________________________________________________________________________
//
class CScatheZombiesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScatheZombiesCard);
};

//____________________________________________________________________________
//
class CSengirVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSengirVampireCard);
};

//____________________________________________________________________________
//
class CSerraAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraAngelCard);
};

//____________________________________________________________________________
//
class CShanodinDryadsCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CShanodinDryadsCard);
};

//____________________________________________________________________________
//
class CShatterCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CShatterCard);
};

//____________________________________________________________________________
//
class CShivanDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanDragonCard);
};

//____________________________________________________________________________
//
class CSoulNetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoulNetCard);

protected:
	counted_ptr<CAbility> CreateTemporaryAbility();
};

//____________________________________________________________________________
//
class CSpellBlastCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSpellBlastCard);
};

//____________________________________________________________________________
//
class CStealArtifactCard : public CCard
{
	DECLARE_CARD_CSTOR(CStealArtifactCard);
};

//____________________________________________________________________________
//
class CStoneRainCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CStoneRainCard);
};

//____________________________________________________________________________
//
class CStreamOfLifeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CStreamOfLifeCard);
};

//____________________________________________________________________________
//
class CTerrorCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTerrorCard);
};

//____________________________________________________________________________
//
class CTheHiveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTheHiveCard);
};

//____________________________________________________________________________
//
class CThicketBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThicketBasiliskCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTranquilityCard : public CCard
{
	DECLARE_CARD_CSTOR(CTranquilityCard);
};

//____________________________________________________________________________
//
class CTwiddleCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwiddleCard);
};

//____________________________________________________________________________
//
class CUnholyStrengthCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CUnholyStrengthCard);
};

//____________________________________________________________________________
//
class CUnsummonCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUnsummonCard);
};

//____________________________________________________________________________
//
class CVerduranEnchantressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVerduranEnchantressCard);
};

//____________________________________________________________________________
//
class CWallOfAirCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfAirCard);
};

//____________________________________________________________________________
//
class CWallOfBoneCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfBoneCard);
};

//____________________________________________________________________________
//
class CWallOfFireCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfFireCard);
};

//____________________________________________________________________________
//
class CWallOfStoneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfStoneCard);
};

//____________________________________________________________________________
//
class CWallOfSwordsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfSwordsCard);
};

//____________________________________________________________________________
//
class CWallOfWoodCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfWoodCard);
};

//____________________________________________________________________________
//
class CWebCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWebCard);
};

//____________________________________________________________________________
//
class CWildGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CWildGrowthCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CWillOTheWispCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWillOTheWispCard);
};

//____________________________________________________________________________
//
class CWrathOfGodCard : public CCard
{
	DECLARE_CARD_CSTOR(CWrathOfGodCard);
};

//____________________________________________________________________________
//
class CZombieMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieMasterCard);

	protected:
	counted_ptr<CAbility> CreateRegenerationAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CFastbondCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFastbondCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CWinterOrbCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWinterOrbCard);
};

//____________________________________________________________________________
//
class CSmokeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSmokeCard);
};

//____________________________________________________________________________
//
class CBerserkCard : public CCard
{
	DECLARE_CARD_CSTOR(CBerserkCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	BOOL CanPlay(BOOL bIncludeTricks);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CDragonWhelpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonWhelpCard);

protected:
	CAbility* m_pAbility;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CConversionCard : public CCard
{
	DECLARE_CARD_CSTOR(CConversionCard);
};

//____________________________________________________________________________
//
class CBalanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CBalanceCard);

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
};

//____________________________________________________________________________
//
class CInstillEnergyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CInstillEnergyCard);
};

//___________________________________________________________________________
//
class CChaoslaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CChaoslaceCard);
};

//____________________________________________________________________________
//
class CDeathlaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathlaceCard);
};

//____________________________________________________________________________
//
class CLifelaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CLifelaceCard);
};

//____________________________________________________________________________
//
class CPurelaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CPurelaceCard);
};

//____________________________________________________________________________
//
class CThoughtlaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtlaceCard);
};

//____________________________________________________________________________
//
class CSacrificeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSacrificeCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CChannelCard : public CCard
{
	DECLARE_CARD_CSTOR(CChannelCard);
};

//____________________________________________________________________________
//
class CDisintegrateCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisintegrateCard);
};

//____________________________________________________________________________
//
class CHolyArmorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CHolyArmorCard);

private:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CParalyzeCard : public CCard
{
	DECLARE_CARD_CSTOR(CParalyzeCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	bool SetTriggerContext3(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	CEnchant* m_pEnchantSpell;

	
	
};

//____________________________________________________________________________
//
class CJadeStatueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJadeStatueCard);
};

//____________________________________________________________________________
//
class CManaFlareCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaFlareCard);

private:
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility* m_pTriggeredAbility;

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility1* m_pTriggeredAbility1;
};

//____________________________________________________________________________
//
class CNetherShadowCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CNetherShadowCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CLivingArtifactCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingArtifactCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCreatureBondCard : public CEnchantCard 
{
	DECLARE_CARD_CSTOR(CCreatureBondCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFireballCard : public CTargetChgLifeSpellCard
{
    DECLARE_CARD_CSTOR(CFireballCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTimeVaultCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTimeVaultCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
 class CScavengingGhoulCard : public CRegenerationCreatureCard 
{
	DECLARE_CARD_CSTOR(CScavengingGhoulCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};
 
//____________________________________________________________________________
//
class CDrainLifeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDrainLifeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAnimateDeadCard : public CCard 
{
	DECLARE_CARD_CSTOR(CAnimateDeadCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CEnchant* m_pSpell;
};

//____________________________________________________________________________
//
class CNaturalSelectionCard : public CCard
{
	DECLARE_CARD_CSTOR(CNaturalSelectionCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnShuffleSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ShuffleSelection;
};

//______________________________________________________________________________
//
class CStoneGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneGiantCard);

protected:
	class CStoneGiantTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CVolcanicEruptionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVolcanicEruptionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int_ m_nCards;
};

//____________________________________________________________________________
//
class CClockworkBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkBeastCard);

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
};

//____________________________________________________________________________
//
class CNettlingImpCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNettlingImpCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	bool BeforeResolution (CAbilityAction* pAction);

	class CNettlingImpTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class CSirensCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CSirensCallCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
