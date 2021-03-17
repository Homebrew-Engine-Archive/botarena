#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CElvishWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishWarriorCard);
};

//____________________________________________________________________________
//
class CGoblinPikerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinPikerCard);
};

//____________________________________________________________________________
//
class COrderOfTheSacredBellCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfTheSacredBellCard);
};

//____________________________________________________________________________
//
class CLumengridWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLumengridWardenCard);
};

//____________________________________________________________________________
//
class CKamiOfOldStoneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfOldStoneCard);
};

//____________________________________________________________________________
//
class CLeoninSkyhunterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninSkyhunterCard);
};

//____________________________________________________________________________
//
class CGoblinSkyRaiderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSkyRaiderCard);
};

//____________________________________________________________________________
//
class CPegasusChargerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPegasusChargerCard);
};

//____________________________________________________________________________
//
class CZodiacMonkeyCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZodiacMonkeyCard);
};

//____________________________________________________________________________
//
class CRiverBearCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverBearCard);
};

//____________________________________________________________________________
//
class CGoblinMountaineerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMountaineerCard);
};

//____________________________________________________________________________
//
class CSkyhunterProwlerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyhunterProwlerCard);
};

//____________________________________________________________________________
//
class CElvishBardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishBardCard);
};

//____________________________________________________________________________
//
class CTreeMonkeyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreeMonkeyCard);
};

//____________________________________________________________________________
//
class CVeteranCavalierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranCavalierCard);
};

//____________________________________________________________________________
//
class CUtopiaTreeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUtopiaTreeCard);
};

//____________________________________________________________________________
//
class CSandstoneWarriorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSandstoneWarriorCard);
};

//____________________________________________________________________________
//
class CFlowstoneCrusherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneCrusherCard);
};

//____________________________________________________________________________
//
class CFlowstoneShamblerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneShamblerCard);
};

//____________________________________________________________________________
//
class CSageAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSageAvenCard);
};

//____________________________________________________________________________
//
class CElvishBerserkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishBerserkerCard);
};

//____________________________________________________________________________
//
class CBloodfireColossusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodfireColossusCard);
};

//____________________________________________________________________________
//
class CFootSoldiersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFootSoldiersCard);
};

//____________________________________________________________________________
//
class CWhipSergeantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhipSergeantCard);
};

//____________________________________________________________________________
//
class CNantukoHuskCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoHuskCard);
};

//____________________________________________________________________________
//
class CBattlefieldForgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBattlefieldForgeCard);
};

//____________________________________________________________________________
//
class CCavesOfKoilosCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCavesOfKoilosCard);
};

//____________________________________________________________________________
//
class CLlanowarWastesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLlanowarWastesCard);
};

//____________________________________________________________________________
//
class CShivanReefCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShivanReefCard);
};

//____________________________________________________________________________
//
class CYavimayaCoastCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CYavimayaCoastCard);
};

//____________________________________________________________________________
//
class CQuicksandCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CQuicksandCard);
};

//____________________________________________________________________________
//
class CBottleGnomesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBottleGnomesCard);
};

//____________________________________________________________________________
//
class CGroundskeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGroundskeeperCard);
};

//____________________________________________________________________________
//
class CViridianShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianShamanCard);
};

//____________________________________________________________________________
//
class CTanglebloomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTanglebloomCard);
};

//____________________________________________________________________________
//
class CUrgolemsEyeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUrgolemsEyeCard);
};

//____________________________________________________________________________
//
class CTempestOfLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CTempestOfLightCard);
};

//____________________________________________________________________________
//
class CBoilingSeasCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoilingSeasCard);
};

//____________________________________________________________________________
//
class CCounselOfTheSoratamiCard : public CCard
{
	DECLARE_CARD_CSTOR(CCounselOfTheSoratamiCard);
};

//____________________________________________________________________________
//
class CNaturalSpringCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CNaturalSpringCard);
};

//____________________________________________________________________________
//
class CTidingsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTidingsCard);
};

//____________________________________________________________________________
//
class CThoughtCourierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtCourierCard);
};

//____________________________________________________________________________
//
class CMendingHandsCard : public CCard
{
	DECLARE_CARD_CSTOR(CMendingHandsCard);
};

//____________________________________________________________________________
//
class CAngelicBlessingCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAngelicBlessingCard);
};

//____________________________________________________________________________
//
class CNeedleStormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CNeedleStormCard);
};

//____________________________________________________________________________
//
class CSiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CSiftCard);
};

//____________________________________________________________________________
//
class CTimeEbbCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTimeEbbCard);
};

//____________________________________________________________________________
//
class CMarbleTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarbleTitanCard);
};

//____________________________________________________________________________
//
class CKavuClimberCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuClimberCard);
};

//____________________________________________________________________________
//
class CPeaceOfMindCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPeaceOfMindCard);
};

//____________________________________________________________________________
//
class CAnnexCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnnexCard);
};

//____________________________________________________________________________
//
class CTreetopBracersCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTreetopBracersCard);
};

//____________________________________________________________________________
//
class CFishliverOilCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFishliverOilCard);
};

//____________________________________________________________________________
//
class CSeasClaimCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeasClaimCard);
};

//____________________________________________________________________________
//
class CAngelsFeatherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelsFeatherCard);
};

//____________________________________________________________________________
//
class CDemonsHornCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDemonsHornCard);
};

//____________________________________________________________________________
//
class CDragonsClawCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDragonsClawCard);
};

//____________________________________________________________________________
//
class CKrakensEyeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKrakensEyeCard);
};

//____________________________________________________________________________
//
class CWurmsToothCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWurmsToothCard);
};

//____________________________________________________________________________
//
class CBlessedOratorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlessedOratorCard);
};

//____________________________________________________________________________
//
class CCraftyPathmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCraftyPathmageCard);
};

//____________________________________________________________________________
//
class CMagnivoreCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMagnivoreCard);
};

//____________________________________________________________________________
//
class CMortivoreCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CMortivoreCard);
};

//____________________________________________________________________________
//
class CRootwallaCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CRootwallaCard);
};

//____________________________________________________________________________
//
class CFlowstoneSlideCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlowstoneSlideCard);
};

//____________________________________________________________________________
//
class CBallistaSquadCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CBallistaSquadCard);
};

//____________________________________________________________________________
//
class CSilklashSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilklashSpiderCard);
};

//____________________________________________________________________________
//
class CShardPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShardPhoenixCard);
};

//____________________________________________________________________________
//
class CRathiDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRathiDragonCard);
};

//____________________________________________________________________________
//
class CWanderguardSentryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderguardSentryCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
											   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CThundermareCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CThundermareCard);
};

//____________________________________________________________________________
//
class CWitheringGazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CWitheringGazeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAnarchistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnarchistCard);
};

//____________________________________________________________________________
//
class CHellsCaretakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHellsCaretakerCard);
};

//____________________________________________________________________________
//
class CAvenWindreaderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenWindreaderCard);
};

//____________________________________________________________________________
//
class CKarplusanYetiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarplusanYetiCard);
};

//____________________________________________________________________________
//
class CInspiritCard : public CCard
{
	DECLARE_CARD_CSTOR(CInspiritCard);
};

//____________________________________________________________________________
//
class CConsumeSpiritCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CConsumeSpiritCard);
};

//____________________________________________________________________________
//
class CFlameWaveCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlameWaveCard);
};

//____________________________________________________________________________
//
class CWeatheredWayfarerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeatheredWayfarerCard);
};

//____________________________________________________________________________
//
class COvergrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(COvergrowthCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGiftOfEstatesCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CGiftOfEstatesCard);
};

//____________________________________________________________________________
//
class CPhyrexianGargantuaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianGargantuaCard);
};

//____________________________________________________________________________
//
class CContaminatedBondCard : public CCard
{
	DECLARE_CARD_CSTOR(CContaminatedBondCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CHighwayRobberCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHighwayRobberCard);
};

//____________________________________________________________________________
//
class CSlateOfAncestryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSlateOfAncestryCard);
};

//____________________________________________________________________________
//
class CSoulWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulWardenCard);
};

//____________________________________________________________________________
//
class CTraumatizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTraumatizeCard);
};

//____________________________________________________________________________
//
class CBiorhythmCard : public CCard
{
	DECLARE_CARD_CSTOR(CBiorhythmCard);
};

//____________________________________________________________________________
//
class CMindslicerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindslicerCard);
};

//____________________________________________________________________________
//
class CBattleOfWitsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBattleOfWitsCard);

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
			CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

			if (pLibrary->GetSize() < 200)
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CBattleOfWitsCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRogueKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRogueKavuCard);
};

//____________________________________________________________________________
//
class CDreamProwlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamProwlerCard);
};

//____________________________________________________________________________
//
class CKingCheetahCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKingCheetahCard);
};

//____________________________________________________________________________
//
class CRootbreakerWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootbreakerWurmCard);
};

//____________________________________________________________________________
//
class CThranGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThranGolemCard);
};

//____________________________________________________________________________
//
class CSeethingSongCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeethingSongCard);
};

//____________________________________________________________________________
//
class CVulshokMorningstarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVulshokMorningstarCard);
};

//____________________________________________________________________________
//
class CLoxodonWarhammerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLoxodonWarhammerCard);
};

//____________________________________________________________________________
//
class CYawgmothDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CYawgmothDemonCard);
};

//____________________________________________________________________________
//
class CVerdantForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVerdantForceCard);
};

//____________________________________________________________________________
//
class CSeedbornMuseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeedbornMuseCard);
};

//____________________________________________________________________________
//
class CFesteringGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFesteringGoblinCard);
};

//____________________________________________________________________________
//
class CReminisceCard : public CCard
{
	DECLARE_CARD_CSTOR(CReminisceCard);
};

//____________________________________________________________________________
//
class CGreaterGoodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGreaterGoodCard);
};

//____________________________________________________________________________
//
class CHorrorOfHorrorsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHorrorOfHorrorsCard);
};

//____________________________________________________________________________
//
class CGoblinBrigandCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinBrigandCard);
};

//____________________________________________________________________________
//
class CFinalPunishmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CFinalPunishmentCard);
};

//____________________________________________________________________________
//
class CCruelEdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CCruelEdictCard);
};

//____________________________________________________________________________
//
class CSanctumGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSanctumGuardianCard);
};

//____________________________________________________________________________
//
class CZealousInquisitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZealousInquisitorCard);
};

//____________________________________________________________________________
//
class CPaladinEnvecCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPaladinEnvecCard);
};

//____________________________________________________________________________
//
class CStorageMatrixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStorageMatrixCard);
};

//____________________________________________________________________________
//
class CImaginaryPetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CImaginaryPetCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CExhaustionCard : public CCard
{
	DECLARE_CARD_CSTOR(CExhaustionCard);
};

//____________________________________________________________________________
//
class CWeirdHarvestCard : public CCard
{
	DECLARE_CARD_CSTOR(CWeirdHarvestCard);
};

//____________________________________________________________________________
//
class CThreatenCard : public CCard
{
	DECLARE_CARD_CSTOR(CThreatenCard);
};

//____________________________________________________________________________
//
class CFormOfTheDragonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFormOfTheDragonCard);
};

//____________________________________________________________________________
//
class CBlackmailCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlackmailCard);
};

//____________________________________________________________________________
//