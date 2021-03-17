#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CCoralMerfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoralMerfolkCard);
};

//____________________________________________________________________________
//
class CCanopySpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCanopySpiderCard);
};

//____________________________________________________________________________
//
class CSkyshroudFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudFalconCard);
};

//____________________________________________________________________________
//
class CMerfolkLooterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkLooterCard);
};

//____________________________________________________________________________
//
class CKnightErrantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightErrantCard);
};

//____________________________________________________________________________
//
class CAngelicPageCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelicPageCard);
};

//____________________________________________________________________________
//
class CEagerCadetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEagerCadetCard);
};

//____________________________________________________________________________
//
class CRazorfootGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorfootGriffinCard);
};

//____________________________________________________________________________
//
class CSerraAdvocateCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraAdvocateCard);
};

//____________________________________________________________________________
//
class CMasterHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterHealerCard);
};

//____________________________________________________________________________
//
class CCrossbowInfantryCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CCrossbowInfantryCard);
};

//____________________________________________________________________________
//
class CSerrasEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSerrasEmbraceCard);
};

//____________________________________________________________________________
//
class CGloriousAnthemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGloriousAnthemCard);
};

//____________________________________________________________________________
//
class CGoblinChariotCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinChariotCard);
};

//____________________________________________________________________________
//
class CGoblinRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRaiderCard);
};

//____________________________________________________________________________
//
class CGoblinGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinGliderCard);
};

//____________________________________________________________________________
//
class CTrainedOrggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedOrggCard);
};

//____________________________________________________________________________
//
class CFoulImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFoulImpCard);
};

//____________________________________________________________________________
//
class CSerpentWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerpentWarriorCard);
};

//____________________________________________________________________________
//
class CLoomingShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLoomingShadeCard);
};

//____________________________________________________________________________
//
class CSpinedWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinedWurmCard);
};

//____________________________________________________________________________
//
class CAncientSilverbackCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientSilverbackCard);
};

//____________________________________________________________________________
//
class CFightingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFightingDrakeCard);
};

//____________________________________________________________________________
//
class CPhyrexianHulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianHulkCard);
};

//____________________________________________________________________________
//
class CDarkBanishingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDarkBanishingCard);
};

//____________________________________________________________________________
//
class CBefoulCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBefoulCard);
};

//____________________________________________________________________________
//
class CDuressCard : public CCard
{
	DECLARE_CARD_CSTOR(CDuressCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThievingMagpieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThievingMagpieCard);
};

//____________________________________________________________________________
//
class CConfiscateCard : public CCard
{
	DECLARE_CARD_CSTOR(CConfiscateCard);
};

//____________________________________________________________________________
//
class CMightOfOaksCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMightOfOaksCard);
};

//____________________________________________________________________________
//
class CTreasureTroveCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTreasureTroveCard);
};

//____________________________________________________________________________
//
class CElvishLyristCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishLyristCard);
};

//____________________________________________________________________________
//
class CTreefolkSeedlingsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreefolkSeedlingsCard);
};

//____________________________________________________________________________
//
class COpportunityCard : public CCard
{
	DECLARE_CARD_CSTOR(COpportunityCard);
};

//____________________________________________________________________________
//
class CWingSnareCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWingSnareCard);
};

//____________________________________________________________________________
//
class CYavimayaEnchantressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaEnchantressCard);
};

//____________________________________________________________________________
//
class CHibernationCard : public CCard
{
	DECLARE_CARD_CSTOR(CHibernationCard);
};

//____________________________________________________________________________
//
class CLevitationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLevitationCard);
};

//____________________________________________________________________________
//
class CPyroclasmCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPyroclasmCard);
};

//____________________________________________________________________________
//
class CWindDancerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindDancerCard);
};

//____________________________________________________________________________
//
class CFugueCard : public CCard
{
	DECLARE_CARD_CSTOR(CFugueCard);
};

//____________________________________________________________________________
//
class CDisorderCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisorderCard);
};

//____________________________________________________________________________
//
class CBlanchwoodArmorCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlanchwoodArmorCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CBullHippoCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBullHippoCard);
};

//____________________________________________________________________________
//
class CVizzerdrixCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVizzerdrixCard);
};

//____________________________________________________________________________
//
class CLightningElementalCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CLightningElementalCard);
};

//____________________________________________________________________________
//
class CGoblinSpelunkersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSpelunkersCard);
};

//____________________________________________________________________________
//
class CPlagueBeetleCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueBeetleCard);
};

//____________________________________________________________________________
//
class CGiantCockroachCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantCockroachCard);
};

//____________________________________________________________________________
//
class CSpinelessThugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinelessThugCard);
};

//____________________________________________________________________________
//
class CGiantOctopusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantOctopusCard);
};

//____________________________________________________________________________
//
class COgreTaskmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreTaskmasterCard);
};

//____________________________________________________________________________
//
class CBenthicBehemothCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBenthicBehemothCard);
};

//____________________________________________________________________________
//
class CAnacondaCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CAnacondaCard);
};

//____________________________________________________________________________
//
class CEliteArchersCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CEliteArchersCard);
};

//____________________________________________________________________________
//
class CHonorGuardCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CHonorGuardCard);
};

//____________________________________________________________________________
//
class CRevenantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRevenantCard);
};

//____________________________________________________________________________
//
class CSisaysRingCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSisaysRingCard);
};

//____________________________________________________________________________
//
class CStrongholdAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdAssassinCard);
};

//____________________________________________________________________________
//
class CPitTrapCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CPitTrapCard);
};

//____________________________________________________________________________
//
class CBeastOfBurdenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBeastOfBurdenCard);
};

//____________________________________________________________________________
//
class CMawcorCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CMawcorCard);
};

//____________________________________________________________________________
//
class CStormShamanCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CStormShamanCard);
};

//____________________________________________________________________________
//
class CSeekerOfSkybreakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeekerOfSkybreakCard);
};

//____________________________________________________________________________
//
class CEasternPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEasternPaladinCard);
};

//____________________________________________________________________________
//
class CSouthernPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSouthernPaladinCard);
};

//____________________________________________________________________________
//
class CWesternPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWesternPaladinCard);
};

//____________________________________________________________________________
//
class CPygmyPyrosaurCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPygmyPyrosaurCard);
};

//____________________________________________________________________________
//
class CCryptRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptRatsCard);
};

//____________________________________________________________________________
//
class CVigilantDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVigilantDrakeCard);
};

//____________________________________________________________________________
//
class CIntrepidHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIntrepidHeroCard);
};

//____________________________________________________________________________
//
class CWallOfWonderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfWonderCard);
};

//____________________________________________________________________________
//
class CArchivistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchivistCard);
};

//____________________________________________________________________________
//
class CReflexesCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CReflexesCard);
};

//____________________________________________________________________________
//
class CGraniteGripCard : public CCard
{
	DECLARE_CARD_CSTOR(CGraniteGripCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CElvishChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishChampionCard);
};

//____________________________________________________________________________
//
class CTemporalAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTemporalAdeptCard);
};

//____________________________________________________________________________
//
class CBedlamCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBedlamCard);
};

//____________________________________________________________________________
//
class CRollingStonesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRollingStonesCard);
};

//____________________________________________________________________________
//
class CKnighthoodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKnighthoodCard);
};

//____________________________________________________________________________
//
class CLavaAxeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLavaAxeCard);
};

//____________________________________________________________________________
//
class CMonstrousGrowthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMonstrousGrowthCard);
};

//____________________________________________________________________________
//
class CVolcanicHammerCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CVolcanicHammerCard);
};

//____________________________________________________________________________
//
class CNauseaCard : public CCard
{
	DECLARE_CARD_CSTOR(CNauseaCard);
};

//____________________________________________________________________________
//
class CBreathOfLifeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBreathOfLifeCard);
};

//____________________________________________________________________________
//
class CVengeanceCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVengeanceCard);
};

//____________________________________________________________________________
//
class CPurifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CPurifyCard);
};

//____________________________________________________________________________
//
class CMindRotCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindRotCard);
};

//____________________________________________________________________________
//
class CSacredNectarCard : public CCard
{
	DECLARE_CARD_CSTOR(CSacredNectarCard);
};

//____________________________________________________________________________
//
class CSquallCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSquallCard);
};

//____________________________________________________________________________
//
class CNocturnalRaidCard : public CCard
{
	DECLARE_CARD_CSTOR(CNocturnalRaidCard);
};

//____________________________________________________________________________
//
class CReclaimCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReclaimCard);
};

//____________________________________________________________________________
//
class CEvacuationCard : public CCard
{
	DECLARE_CARD_CSTOR(CEvacuationCard);
};

//____________________________________________________________________________
//
class CElvishPiperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishPiperCard);
};

//____________________________________________________________________________
//
class CCorruptCard : public CCard
{
	DECLARE_CARD_CSTOR(CCorruptCard);
};

//____________________________________________________________________________
//
class CGoblinGardenerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinGardenerCard);
};

//____________________________________________________________________________
//
class CCloudchaserEagleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudchaserEagleCard);
};

//____________________________________________________________________________
//
class CDakmorLancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDakmorLancerCard);
};

//____________________________________________________________________________
//
class CGoblinMatronCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMatronCard);
};

//____________________________________________________________________________
//
class CPrideOfLionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrideOfLionsCard);
};

//____________________________________________________________________________
//
class CLoneWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoneWolfCard);
};

//____________________________________________________________________________
//
class CThornElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornElementalCard);
};

//____________________________________________________________________________
//
class CSeismicAssaultCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSeismicAssaultCard);
};

//____________________________________________________________________________
//
class CSoulFeastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSoulFeastCard);
};

//____________________________________________________________________________
//
class CGangOfElkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGangOfElkCard);
};

//____________________________________________________________________________
//
class CHollowDogsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHollowDogsCard);
};

//____________________________________________________________________________
//
class CSustainerOfTheRealmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSustainerOfTheRealmCard);
};

//____________________________________________________________________________
//
class CGerrardsWisdomCard : public CCard
{
	DECLARE_CARD_CSTOR(CGerrardsWisdomCard);
};

//____________________________________________________________________________
//
class CBlessedReversalCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlessedReversalCard);
};

//____________________________________________________________________________
//
class CStarlightCard : public CCard
{
	DECLARE_CARD_CSTOR(CStarlightCard);
};

//____________________________________________________________________________
//
class COstracizeCard : public CCard
{
	DECLARE_CARD_CSTOR(COstracizeCard);
};

//____________________________________________________________________________
//
class CWoodElvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodElvesCard);
};

//____________________________________________________________________________
//
class CWorshipCard : public CCard
{
	DECLARE_CARD_CSTOR(CWorshipCard);
};

//____________________________________________________________________________
//
class CEnsnaringBridgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEnsnaringBridgeCard);
};

//____________________________________________________________________________
//
class CFleetingImageCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFleetingImageCard);
};

//____________________________________________________________________________
//
class CMegrimCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMegrimCard);
};

//____________________________________________________________________________
//
class CSeasonedMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeasonedMarshalCard);
};

//____________________________________________________________________________
//
class COppositionCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(COppositionCard);
};

//____________________________________________________________________________
//
class CDelusionsOfMediocrityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDelusionsOfMediocrityCard);
};

//____________________________________________________________________________
//
class CStaticOrbCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaticOrbCard);
};

//____________________________________________________________________________
//
class CArcaneLaboratoryCard : public CCard
{
	DECLARE_CARD_CSTOR(CArcaneLaboratoryCard);
};

//____________________________________________________________________________
//
class CSpellbookCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpellbookCard);
};

//____________________________________________________________________________
//
class CTelepathyCard : public CCard
{
	DECLARE_CARD_CSTOR(CTelepathyCard);
};

//____________________________________________________________________________
//
class CDregsOfSorrowCard : public CCard
{
	DECLARE_CARD_CSTOR(CDregsOfSorrowCard);
};

//____________________________________________________________________________
//
class CTolarianWindsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTolarianWindsCard);
};

//____________________________________________________________________________
//
class CImpatienceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CImpatienceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSuddenImpactCard : public CCard
{
	DECLARE_CARD_CSTOR(CSuddenImpactCard);
};

//____________________________________________________________________________
//
class COkkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COkkCard);
};

//____________________________________________________________________________
//
class COppressionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COppressionCard);
};

//____________________________________________________________________________
//
class CAbyssalHorrorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAbyssalHorrorCard);
};

//____________________________________________________________________________
//
class CTelepathicSpiesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelepathicSpiesCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
											   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBellowingFiendCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBellowingFiendCard);
};

//____________________________________________________________________________
//
class CYawgmothsEdictCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CYawgmothsEdictCard);
};

//____________________________________________________________________________
//
class CEquilibriumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEquilibriumCard);
};

//____________________________________________________________________________
//
class CManaBreachCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaBreachCard);
};

//____________________________________________________________________________
//
class CTaintedAEtherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTaintedAEtherCard);
};

//____________________________________________________________________________
//
class CBereavementCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBereavementCard);
};

//____________________________________________________________________________
//
class CVernalBloomCard : public CCard
{
	DECLARE_CARD_CSTOR(CVernalBloomCard);
};

//____________________________________________________________________________
//
class CCompostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCompostCard);
};

//____________________________________________________________________________
//
class CCaltropsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCaltropsCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSacredGroundCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSacredGroundCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CThoughtleechCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThoughtleechCard);
};

//____________________________________________________________________________
//
class CSanctimonyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSanctimonyCard);
};

//____________________________________________________________________________
//
class CBalefulStareCard : public CCard
{
	DECLARE_CARD_CSTOR(CBalefulStareCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSleightOfHandCard : public CCard
{
	DECLARE_CARD_CSTOR(CSleightOfHandCard);
};

//____________________________________________________________________________
//
class CReprocessCard : public CCard
{
	DECLARE_CARD_CSTOR(CReprocessCard);
};

//____________________________________________________________________________
//
class CBloodshotCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodshotCyclopsCard);
};

//____________________________________________________________________________
//
class CGhituFireEaterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhituFireEaterCard);
};

//____________________________________________________________________________
//
class CGraftedSkullcapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGraftedSkullcapCard);
};

//____________________________________________________________________________
//
class CNecrologiaCard : public CCard
{
	DECLARE_CARD_CSTOR(CNecrologiaCard);
};

//____________________________________________________________________________
//
class CPhyrexianColossusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianColossusCard);
};

//____________________________________________________________________________
//
class CCoatOfArmsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCoatOfArmsCard);
};

//____________________________________________________________________________
//
class CPariahCard : public CCard
{
	DECLARE_CARD_CSTOR(CPariahCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CPersecuteCard : public CCard
{
	DECLARE_CARD_CSTOR(CPersecuteCard);
};

//____________________________________________________________________________
//
class CEngineeredPlagueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEngineeredPlagueCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;
};

//____________________________________________________________________________
//
class CWildfireCard : public CCard
{
	DECLARE_CARD_CSTOR(CWildfireCard);
};

//____________________________________________________________________________
//
class CDarkestHourCard : public CCard
{
	DECLARE_CARD_CSTOR(CDarkestHourCard);
};

//____________________________________________________________________________
//
class CNaturesRevoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CNaturesRevoltCard);
};

//____________________________________________________________________________
//
