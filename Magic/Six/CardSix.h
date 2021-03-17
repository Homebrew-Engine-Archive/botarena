#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CLightningBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLightningBlastCard);
};

//____________________________________________________________________________
//
class CStormCrowCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormCrowCard);
};

//____________________________________________________________________________
//
class CAnabaBodyguardCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAnabaBodyguardCard);
};

//____________________________________________________________________________
//
class CWindDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindDrakeCard);
};

//____________________________________________________________________________
//
class CPhantomWarriorCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomWarriorCard);
};

//____________________________________________________________________________
//
class CVenerableMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVenerableMonkCard);
};

//____________________________________________________________________________
//
class CHornedTurtleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHornedTurtleCard);
};

//____________________________________________________________________________
//
class CPantherWarriorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPantherWarriorsCard);
};

//____________________________________________________________________________
//
class CTrainedArmodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedArmodonCard);
};

//____________________________________________________________________________
//
class CManaPrismCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CManaPrismCard);
};

//____________________________________________________________________________
//
class CBlazeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBlazeCard);
};

//____________________________________________________________________________
//
class CCreepingMoldCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCreepingMoldCard);
};

//____________________________________________________________________________
//
class CTremorCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTremorCard);
};

//____________________________________________________________________________
//
class CWarriorsHonorCard : public CCard
{
	DECLARE_CARD_CSTOR(CWarriorsHonorCard);
};

//____________________________________________________________________________
//
class CCallOfTheWildCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCallOfTheWildCard);
};

//____________________________________________________________________________
//
class CArdentMilitiaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArdentMilitiaCard);
};

//____________________________________________________________________________
//
class CBloodPetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodPetCard);
};

//____________________________________________________________________________
//
class CRampantGrowthCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CRampantGrowthCard);
};

//____________________________________________________________________________
//
class CHiddenHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHiddenHorrorCard);
};

//____________________________________________________________________________
//
class CFitOfRageCard : public CCard
{
	DECLARE_CARD_CSTOR(CFitOfRageCard);
};

//____________________________________________________________________________
//
class CMischievousPoltergeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMischievousPoltergeistCard);
};

//____________________________________________________________________________
//
class CGravebaneZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravebaneZombieCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CHerosResolveCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CHerosResolveCard);
};

//____________________________________________________________________________
//
class CEnfeeblementCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEnfeeblementCard);
};

//____________________________________________________________________________
//
class CArmoredPegasusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredPegasusCard);
};

//____________________________________________________________________________
//
class CGorillaChieftainCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CGorillaChieftainCard);
};

//____________________________________________________________________________
//
class CAnabaShamanCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CAnabaShamanCard);
};

//____________________________________________________________________________
//
class CStandingTroopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStandingTroopsCard);
};

//____________________________________________________________________________
//
class CRedwoodTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRedwoodTreefolkCard);
};

//____________________________________________________________________________
//
class CRegalUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRegalUnicornCard);
};

//____________________________________________________________________________
//
class CFeralShadowCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFeralShadowCard);
};

//____________________________________________________________________________
//
class CPythonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPythonCard);
};

//____________________________________________________________________________
//
class CEkunduGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEkunduGriffinCard);
};

//____________________________________________________________________________
//
class CViashinoWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoWarriorCard);
};

//____________________________________________________________________________
//
class CStaunchDefendersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStaunchDefendersCard);
};

//____________________________________________________________________________
//
class CWarthogCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CWarthogCard);
};

//____________________________________________________________________________
//
class CRiverBoaCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverBoaCard);
};

//____________________________________________________________________________
//
class CBalduvianBarbariansCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianBarbariansCard);
};

//____________________________________________________________________________
//
class CTalruumMinotaurCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CTalruumMinotaurCard);
};

//____________________________________________________________________________
//
class CRagingGoblinCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingGoblinCard);
};

//____________________________________________________________________________
//
class CMossDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMossDiamondCard);
};

//____________________________________________________________________________
//
class CMarbleDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMarbleDiamondCard);
};

//____________________________________________________________________________
//
class CSkyDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSkyDiamondCard);
};

//____________________________________________________________________________
//
class CCharcoalDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCharcoalDiamondCard);
};

//____________________________________________________________________________
//
class CBoilCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoilCard);
};

//____________________________________________________________________________
//
class CPerishCard : public CCard
{
	DECLARE_CARD_CSTOR(CPerishCard);
};

//____________________________________________________________________________
//
class CVitalizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CVitalizeCard);
};

//____________________________________________________________________________
//
class CTranquilGroveCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTranquilGroveCard);
};

//____________________________________________________________________________
//
class CCrystalVeinCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCrystalVeinCard);
};

//____________________________________________________________________________
//
class CLongbowArcherCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CLongbowArcherCard);
};

//____________________________________________________________________________
//
class CUnseenWalkerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CUnseenWalkerCard);
};

//____________________________________________________________________________
//
class CInfantryVeteranCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfantryVeteranCard);
};

//____________________________________________________________________________
//
class CHarmattanEfreetCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHarmattanEfreetCard);
};

//____________________________________________________________________________
//
class CFeastOfTheUnicornCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFeastOfTheUnicornCard);
};

//____________________________________________________________________________
//
class CPatagiaGolemCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPatagiaGolemCard);
};

//____________________________________________________________________________
//
class CFemerefArchersCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CFemerefArchersCard);
};

//____________________________________________________________________________
//
class CDrySpellCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDrySpellCard);
};

//____________________________________________________________________________
//
class CShockCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CShockCard);
};

//____________________________________________________________________________
//
class CVolcanicGeyserCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CVolcanicGeyserCard);
};

//____________________________________________________________________________
//
class CRemedyCard : public CCard
{
	DECLARE_CARD_CSTOR(CRemedyCard);
};

//____________________________________________________________________________
//
class CSerrasBlessingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSerrasBlessingCard);
};

//____________________________________________________________________________
//
class CHulkingCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHulkingCyclopsCard);
};

//____________________________________________________________________________
//
class CPacifismCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPacifismCard);
};

//____________________________________________________________________________
//
class CProsperityCard : public CCard
{
	DECLARE_CARD_CSTOR(CProsperityCard);
};

//____________________________________________________________________________
//
class CInspirationCard : public CCard
{
	DECLARE_CARD_CSTOR(CInspirationCard);
};

//____________________________________________________________________________
//
class CFervorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFervorCard);
};

//____________________________________________________________________________
//
class CRelearnCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRelearnCard);
};

//____________________________________________________________________________
//
class CElvenCacheCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CElvenCacheCard);
};

//____________________________________________________________________________
//
class CAEtherFlashCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherFlashCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCoercionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCoercionCard);
};

//____________________________________________________________________________
//
class CPainfulMemoriesCard : public CCard
{
	DECLARE_CARD_CSTOR(CPainfulMemoriesCard);
};

//____________________________________________________________________________
//
class CAgonizingMemoriesCard : public CCard
{
	DECLARE_CARD_CSTOR(CAgonizingMemoriesCard);
};

//____________________________________________________________________________
//
class CDarajaGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDarajaGriffinCard);
};

//____________________________________________________________________________
//
class CLightOfDayCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLightOfDayCard);
};

//____________________________________________________________________________
//
class CUnyaroGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUnyaroGriffinCard);
};

//____________________________________________________________________________
//
class CSeaMonsterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeaMonsterCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSummerBloomCard : public CCard
{
	DECLARE_CARD_CSTOR(CSummerBloomCard);
};

//____________________________________________________________________________
//
class CHeavyBallistaCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CHeavyBallistaCard);
};

//____________________________________________________________________________
//
class CPearlDragonCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPearlDragonCard);
};

//____________________________________________________________________________
//
class CVolcanicDragonCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CVolcanicDragonCard);
};

//____________________________________________________________________________
//
class CFireDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CFireDiamondCard);
};

//____________________________________________________________________________
//
class CFyndhornBrownieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFyndhornBrownieCard);
};

//____________________________________________________________________________
//
class CInfernalContractCard : public CCard
{
	DECLARE_CARD_CSTOR(CInfernalContractCard);
};

//____________________________________________________________________________
//
class CFallowEarthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFallowEarthCard);
};

//____________________________________________________________________________
//
class CEarlyHarvestCard : public CCard
{
	DECLARE_CARD_CSTOR(CEarlyHarvestCard);
};

//____________________________________________________________________________
//
class CRazortoothRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazortoothRatsCard);
};

//____________________________________________________________________________
//
class CPsychicTransferCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicTransferCard);
};

//____________________________________________________________________________
//
class CWorldlyTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CWorldlyTutorCard);
};

//____________________________________________________________________________
//
class CEnlightenedTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CEnlightenedTutorCard);
};

//____________________________________________________________________________
//
class CMysticalTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CMysticalTutorCard);
};

//____________________________________________________________________________
//
class CVampiricTutorCard : public CCard //CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CVampiricTutorCard);
};

//____________________________________________________________________________
//
class CAshenPowderCard : public CCard
{
	DECLARE_CARD_CSTOR(CAshenPowderCard);
};

//____________________________________________________________________________
//
class CPillageCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPillageCard);
};

//____________________________________________________________________________
//
class CDaringApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDaringApprenticeCard);
};

//____________________________________________________________________________
//
class CSunwebCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSunwebCard);
};

//____________________________________________________________________________
//
class CMaroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaroCard);
};

//____________________________________________________________________________
//
class CCrimsonHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCrimsonHellkiteCard);
};

//____________________________________________________________________________
//
class CArchangelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArchangelCard);
};

//____________________________________________________________________________
//
class CUktabiWildcatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUktabiWildcatsCard);
};

//____________________________________________________________________________
//
class CStrandsOfNightCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CStrandsOfNightCard);
};

//____________________________________________________________________________
//
class CBlightedShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightedShamanCard);
};

//____________________________________________________________________________
//
class CPhyrexianVaultCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CPhyrexianVaultCard);
};

//____________________________________________________________________________
//
class CSoldeviSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoldeviSageCard);
};

//____________________________________________________________________________
//
class CSageOwlCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSageOwlCard);
};

//____________________________________________________________________________
//
class CAncestralMemoriesCard : public CCard
{
	DECLARE_CARD_CSTOR(CAncestralMemoriesCard);
};

//____________________________________________________________________________
//
class CFamiliarGroundCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFamiliarGroundCard);
};

//____________________________________________________________________________
//
class CReprisalCard : public CCard
{
	DECLARE_CARD_CSTOR(CReprisalCard);
};

//____________________________________________________________________________
//
class CStalkingTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStalkingTigerCard);
};

//____________________________________________________________________________
//
class CRecklessEmbermageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessEmbermageCard);
};

//____________________________________________________________________________
//
class CVertigoCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CVertigoCard);
};

//____________________________________________________________________________
//
class CSpittingEarthCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpittingEarthCard);
};

//____________________________________________________________________________
//
class CUktabiOrangutanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUktabiOrangutanCard);
};

//____________________________________________________________________________
//
class CGravediggerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravediggerCard);
};

//____________________________________________________________________________
//
class CGoblinRecruiterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRecruiterCard);
};

//____________________________________________________________________________
//
class CDreadOfNightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDreadOfNightCard);
};

//____________________________________________________________________________
//
class CGoblinEliteInfantryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinEliteInfantryCard);
};

//____________________________________________________________________________
//
class CRelentlessAssaultCard : public CCard
{
	DECLARE_CARD_CSTOR(CRelentlessAssaultCard);
};

//____________________________________________________________________________
//
class CFinalFortuneCard : public CCard
{
	DECLARE_CARD_CSTOR(CFinalFortuneCard);
};

//____________________________________________________________________________
//
class CStormCauldronCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStormCauldronCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							const CManaProductionAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNaturesResurgenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CNaturesResurgenceCard);
};

//____________________________________________________________________________
//
class CRowenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRowenCard);

protected:
	int_ m_ActivatedLastTurn;

	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
		CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer);
};

//____________________________________________________________________________
//
class CSnakeBasketCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSnakeBasketCard);
};

//____________________________________________________________________________
//
class CChillCard : public CCard
{
	DECLARE_CARD_CSTOR(CChillCard);
};

//____________________________________________________________________________
//
class CSpittingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpittingDrakeCard);
};

//____________________________________________________________________________
//
class CEtherealChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtherealChampionCard);
};

//____________________________________________________________________________
//
class CAbyssalHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalHunterCard);
};

//____________________________________________________________________________
//
class CFatalBlowCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFatalBlowCard);
};

//____________________________________________________________________________
//
class CFogElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFogElementalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLeadGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeadGolemCard);
};

//____________________________________________________________________________
//
class CDragonMaskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDragonMaskCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CNecrosavantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecrosavantCard);
};

//____________________________________________________________________________
//
class CStuporCard : public CCard
{
	DECLARE_CARD_CSTOR(CStuporCard);
};

//____________________________________________________________________________
//
class CResistanceFighterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CResistanceFighterCard);
};

//____________________________________________________________________________
//
class CInsightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInsightCard);
};

//____________________________________________________________________________
//
class CWarmthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarmthCard);
};

//____________________________________________________________________________
//
class CHammerOfBogardanCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHammerOfBogardanCard);
};

//____________________________________________________________________________
//
class CBalduvianHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianHordeCard);
};

//____________________________________________________________________________
//
class CDesertionCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDesertionCard);
};

//____________________________________________________________________________
//
class CSyphonSoulCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSyphonSoulCard);
};

//____________________________________________________________________________
//
class CWaitingInTheWeedsCard : public CCard
{
	DECLARE_CARD_CSTOR(CWaitingInTheWeedsCard);
};

//____________________________________________________________________________
//
class CAbductionCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbductionCard);
};

//____________________________________________________________________________
//
class CSerenityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSerenityCard);
};

//____________________________________________________________________________
//
class CTidalSurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTidalSurgeCard);
};

//____________________________________________________________________________
//
class CExileCard : public CCard
{
	DECLARE_CARD_CSTOR(CExileCard);
};

//____________________________________________________________________________
//
class CBrowseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBrowseCard);
};

//____________________________________________________________________________
//
class CMysticCompassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMysticCompassCard);
};

//____________________________________________________________________________
//
class CDreamCacheCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreamCacheCard);
};

//____________________________________________________________________________
//
class CPolymorphCard : public CCard
{
	DECLARE_CARD_CSTOR(CPolymorphCard);

protected:	
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCursedTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCursedTotemCard);
};

//____________________________________________________________________________
//
class CDoomsdayCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CDoomsdayCard);
};

//____________________________________________________________________________
//
class CDiminishingReturnsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDiminishingReturnsCard);
};

//____________________________________________________________________________
//
class CDenseFoliageCard : public CCard
{
	DECLARE_CARD_CSTOR(CDenseFoliageCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlashCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlashCard);
};

//____________________________________________________________________________
//
class CTariffCard : public CCard
{
	DECLARE_CARD_CSTOR(CTariffCard);
};

//____________________________________________________________________________
//
class CTeferisPuzzleBoxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTeferisPuzzleBoxCard);
};

//____________________________________________________________________________
//
class CWandOfDenialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWandOfDenialCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_PaymentSelection;
};

//______________________________________________________________________________
//
class CIllicitAuctionCard : public CCard
{
	DECLARE_CARD_CSTOR(CIllicitAuctionCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void BidFunction(int PlayerID, CCard* pTarget, int Base);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nHighBid;
	int_ HighBidderID;
};

//______________________________________________________________________________
//
