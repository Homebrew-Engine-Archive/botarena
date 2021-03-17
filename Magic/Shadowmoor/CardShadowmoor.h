#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBloodmarkMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodmarkMentorCard);
};

//____________________________________________________________________________
//
class CHeapDollCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeapDollCard);
};

//____________________________________________________________________________
//
class CSmashToSmithereensCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSmashToSmithereensCard);
};

//____________________________________________________________________________
//
class CApothecaryInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CApothecaryInitiateCard);
};

//____________________________________________________________________________
//
class CBlisteringDieflynCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlisteringDieflynCard);
};

//____________________________________________________________________________
//
class CBloodshedFeverCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBloodshedFeverCard);
};

//____________________________________________________________________________
//
class CBoggartArsonistsCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartArsonistsCard);
};

//____________________________________________________________________________
//
class CCeruleanWispsCard : public CCard
{
	DECLARE_CARD_CSTOR(CCeruleanWispsCard);
};

//____________________________________________________________________________
//
class CAphoticWispsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAphoticWispsCard);
};

//____________________________________________________________________________
//
class CCrimsonWispsCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrimsonWispsCard);
};

//____________________________________________________________________________
//
class CCrowdOfCindersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrowdOfCindersCard);
};

//____________________________________________________________________________
//
class CCursecatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCursecatcherCard);
};

//____________________________________________________________________________
//
class CDeepchannelMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepchannelMentorCard);
};

//____________________________________________________________________________
//
class CDeepSlumberTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepSlumberTitanCard);
};

//____________________________________________________________________________
//
class CDramaticEntranceCard : public CCard
{
	DECLARE_CARD_CSTOR(CDramaticEntranceCard);
};

//____________________________________________________________________________
//
class CDroveOfElvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDroveOfElvesCard);
};

//____________________________________________________________________________
//
class CFaerieMacabreCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieMacabreCard);
};

//____________________________________________________________________________
//
class CFaerieSwarmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieSwarmCard);
};

//____________________________________________________________________________
//
class CFarhavenElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFarhavenElfCard);
};

//____________________________________________________________________________
//
class CFireLitThicketCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFireLitThicketCard);
};

//____________________________________________________________________________
//
class CFoxfireOakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFoxfireOakCard);
};

//____________________________________________________________________________
//
class CGloomwidowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGloomwidowCard);
};

//____________________________________________________________________________
//
class CGutturalResponseCard : public CCard
{
	DECLARE_CARD_CSTOR(CGutturalResponseCard);
};

//____________________________________________________________________________
//
class CHollowbornBarghestCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CHollowbornBarghestCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CHollowsageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHollowsageCard);
};

//____________________________________________________________________________
//
class CHordeOfBoggartsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHordeOfBoggartsCard);
};

//____________________________________________________________________________
//
class CHungrySprigganCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHungrySprigganCard);
};

//____________________________________________________________________________
//
class CIntimidatorInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIntimidatorInitiateCard);
};

//____________________________________________________________________________
//
class CKinscaerHarpoonistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKinscaerHarpoonistCard);
};

//____________________________________________________________________________
//
class CKithkinRabbleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinRabbleCard);
};

//____________________________________________________________________________
//
class CKithkinShielddareCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinShielddareCard);
};

//____________________________________________________________________________
//
class CKnollspineInvocationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKnollspineInvocationCard);

protected:
	CCardFilter m_CardFilter0;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
	CCardFilter m_CardFilter4;
	CCardFilter m_CardFilter5;
	CCardFilter m_CardFilter6;
	CCardFilter m_CardFilter7;
	CCardFilter m_CardFilter8;
	CCardFilter m_CardFilter9;
	CCardFilter m_CardFilter10;
	CCardFilter m_CardFilter11;
	CCardFilter m_CardFilter12;
	CCardFilter m_CardFilter14;
	CCardFilter m_CardFilter15;
	CCardFilter m_CardFilter16;
};

//____________________________________________________________________________
//
class CLeechriddenSwampCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLeechriddenSwampCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLochKorriganCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLochKorriganCard);
};

//____________________________________________________________________________
//
class CManamorphoseCard : public CCard
{
	DECLARE_CARD_CSTOR(CManamorphoseCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMistveilPlainsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMistveilPlainsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMoonringIslandCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMoonringIslandCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMysticGateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMysticGateCard);
};

//____________________________________________________________________________
//
class CNiveousWispsCard : public CCard
{
	DECLARE_CARD_CSTOR(CNiveousWispsCard);
};

//____________________________________________________________________________
//
class CNurturerInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNurturerInitiateCard);
};

//____________________________________________________________________________
//
class CParapetWatchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CParapetWatchersCard);
};

//____________________________________________________________________________
//
class CPollutedBondsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPollutedBondsCard);
};

//____________________________________________________________________________
//
class CPyreChargerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPyreChargerCard);
};

//____________________________________________________________________________
//
class CRakingCanopyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRakingCanopyCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CRevelsongHornCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRevelsongHornCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRoughshodMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoughshodMentorCard);
};

//____________________________________________________________________________
//
class CRuneCervinRiderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRuneCervinRiderCard);
};

//____________________________________________________________________________
//
class CSafewrightQuestCard : public CCard
{
	DECLARE_CARD_CSTOR(CSafewrightQuestCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSapseepForestCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSapseepForestCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSmolderInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSmolderInitiateCard);
};

//____________________________________________________________________________
//
class CSpawnwritheCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpawnwritheCard);

protected:
	typedef
	TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSunkenRuinsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSunkenRuinsCard);
};

//____________________________________________________________________________
//
class CToilToRenownCard : public CCard
{
	DECLARE_CARD_CSTOR(CToilToRenownCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTripNooseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTripNooseCard);
};

//____________________________________________________________________________
//
class CViridescentWispsCard : public CCard
{
	DECLARE_CARD_CSTOR(CViridescentWispsCard);
};

//____________________________________________________________________________
//
class CWhimwaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhimwaderCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWoodedBastionCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWoodedBastionCard);
};

//____________________________________________________________________________
//
class CDrownerInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrownerInitiateCard);
};

//____________________________________________________________________________
//
class CAshenmoorCohortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenmoorCohortCard);
};

//____________________________________________________________________________
//
class CBallynockCohortCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBallynockCohortCard);
};

//____________________________________________________________________________
//
class CBriarberryCohortCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBriarberryCohortCard);
};

//____________________________________________________________________________
//
class CCrabappleCohortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrabappleCohortCard);
};

//____________________________________________________________________________
//
class CMudbrawlerCohortCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMudbrawlerCohortCard);
};

//____________________________________________________________________________
//
class CRageReflectionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRageReflectionCard);
};

//____________________________________________________________________________
//
class CTattermungeManiacCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTattermungeManiacCard);
};

//____________________________________________________________________________
//
class CKitchenFinksCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CKitchenFinksCard);
};

//____________________________________________________________________________
//
class CAshenmoorGougerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenmoorGougerCard);
};

//____________________________________________________________________________
//
class CBarrentonCragtreadsCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CBarrentonCragtreadsCard);
};

//____________________________________________________________________________
//
class CWiltLeafLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWiltLeafLiegeCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Bottom, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CBoartuskLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoartuskLiegeCard);
};

//____________________________________________________________________________
//
class CCultbrandCinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCultbrandCinderCard);
};

//____________________________________________________________________________
//
class CElvishHexhunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishHexhunterCard);
};

//____________________________________________________________________________
//
class CEmberstrikeDuoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmberstrikeDuoCard);
};

//____________________________________________________________________________
//
class CFulminatorMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFulminatorMageCard);
};

//____________________________________________________________________________
//
class CGlenElendraLiegeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGlenElendraLiegeCard);
};

//____________________________________________________________________________
//
class CGravelgillAxesharkCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CGravelgillAxesharkCard);
};

//____________________________________________________________________________
//
class CGravelgillDuoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravelgillDuoCard);
};

//____________________________________________________________________________
//
class CInkfathomInfiltratorCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CInkfathomInfiltratorCard);
};

//____________________________________________________________________________
//
class CLoamdraggerGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoamdraggerGiantCard);
};

//____________________________________________________________________________
//
class CManaforgeCinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CManaforgeCinderCard);
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay1A(BOOL bIncludeTricks);
	BOOL CanPlay1B(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	BOOL CanPlay2A(BOOL bIncludeTricks);
	BOOL CanPlay2B(BOOL bIncludeTricks);
	BOOL CanPlay3(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMudbrawlerRaidersCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CMudbrawlerRaidersCard);
};

//____________________________________________________________________________
//
class COldGhastbarkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COldGhastbarkCard);
};

//____________________________________________________________________________
//
class COracleOfNectarsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COracleOfNectarsCard);
};

//____________________________________________________________________________
//
class COversoulOfDuskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COversoulOfDuskCard);
};

//____________________________________________________________________________
//
class CPlumeveilCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPlumeveilCard);
};

//____________________________________________________________________________
//
class CRavensRunDragoonCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CRavensRunDragoonCard);
};

//____________________________________________________________________________
//
class CResplendentMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CResplendentMentorCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSafeholdDuoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSafeholdDuoCard);
};

//____________________________________________________________________________
//
class CSafeholdEliteCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CSafeholdEliteCard);
};

//____________________________________________________________________________
//
class CScuzzbackMaraudersCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CScuzzbackMaraudersCard);
};

//____________________________________________________________________________
//
class CSeedcradleWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeedcradleWitchCard);
};

//____________________________________________________________________________
//
class CSomnomancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSomnomancerCard);
};

//____________________________________________________________________________
//
class CSootstokeKindlerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSootstokeKindlerCard);
};

//____________________________________________________________________________
//
class CSootwalkersCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSootwalkersCard);
};

//____________________________________________________________________________
//
class CSpiteflameWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiteflameWitchCard);
};

//____________________________________________________________________________
//
class CTattermungeDuoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTattermungeDuoCard);
};

//____________________________________________________________________________
//
class CThistledownDuoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThistledownDuoCard);
};

//____________________________________________________________________________
//
class CThistledownLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThistledownLiegeCard);
};

//____________________________________________________________________________
//
class CWanderbrineRootcuttersCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderbrineRootcuttersCard);
};

//____________________________________________________________________________
//
class CWaspLancerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWaspLancerCard);
};

//____________________________________________________________________________
//
class CWiltLeafCavaliersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWiltLeafCavaliersCard);
};

//____________________________________________________________________________
//
class CWoodfallPrimusCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CWoodfallPrimusCard);
};

//____________________________________________________________________________
//
class CZealousGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZealousGuardianCard);
};

//____________________________________________________________________________
//
class CScrapbasketCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScrapbasketCard);
};

//____________________________________________________________________________
//
class CGnarledEffigyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGnarledEffigyCard);
};

//____________________________________________________________________________
//
class CPowerOfFireCard : public CCard
{
	DECLARE_CARD_CSTOR(CPowerOfFireCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CPresenceOfGondCard : public CCard
{
	DECLARE_CARD_CSTOR(CPresenceOfGondCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSpitefulVisionsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpitefulVisionsCard);
};

//____________________________________________________________________________
//
class CReknitCard : public CCard
{
	DECLARE_CARD_CSTOR(CReknitCard);
};

//____________________________________________________________________________
//
class CScarCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CScarCard);
};

//____________________________________________________________________________
//
class CThoughtweftGambitCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtweftGambitCard);
};

//____________________________________________________________________________
//
class CPoisonTheWellCard : public CCard
{
	DECLARE_CARD_CSTOR(CPoisonTheWellCard);
};

//____________________________________________________________________________
//
class CSpectralProcessionCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpectralProcessionCard);
};

//____________________________________________________________________________
//
class CSplittingHeadacheCard : public CCard
{
	DECLARE_CARD_CSTOR(CSplittingHeadacheCard);
};

//____________________________________________________________________________
//
class CFlameJavelinCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlameJavelinCard);
};

//____________________________________________________________________________
//
class CReaperKingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReaperKingCard);
};

//____________________________________________________________________________

class CDemigodOfRevengeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDemigodOfRevengeCard);
};

//____________________________________________________________________________
//
class CMurderousRedcapCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CMurderousRedcapCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CAuguryAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuguryAdeptCard);

private:
	bool SetTriggerContext1(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							 CPlayer* pByPlayer, Damage damage) const;

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

////  Other implementation of Augury Adept
/*
protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//*/
class CGhastlordofFugueCard : public CUnblockableCreatureCard
{
    DECLARE_CARD_CSTOR(CGhastlordofFugueCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CPlayer* pToPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CTattermungeWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTattermungeWitchCard);
};

//____________________________________________________________________________
//
class CDireUndercurrentsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDireUndercurrentsCard);
};
/*//____________________________________________________________________________
//
class CDeusofCalamityCard : public CCreatureCard
{
DECLARE_CARD_CSTOR(CDeusofCalamityCard);

protected:
bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
Damage damage) const;
};

//____________________________________________________________________________
//*/
class CBarrentonMedicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarrentonMedicCard);
};

//____________________________________________________________________________
//
class CChainbreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChainbreakerCard);
};

//____________________________________________________________________________
//
class CGrimPoppetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrimPoppetCard);
};

//____________________________________________________________________________
//
class CMorselhoarderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMorselhoarderCard);
};

//____________________________________________________________________________
//
class CCinderhazeWretchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderhazeWretchCard);
};

//____________________________________________________________________________
//
class CDevotedDruidCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CDevotedDruidCard);
};

//____________________________________________________________________________
//
class CPunctureBoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPunctureBoltCard);
};

//____________________________________________________________________________
//
class CWoeleecherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoeleecherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeusofCalamityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeusofCalamityCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																		Damage damage) const;
};

//____________________________________________________________________________
//
class CBoggartRamGangCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartRamGangCard);

/*private:
	void DamageDealEventSource(CCard* pCard, CPlayer* pPlayer, CCreatureCard* pCreature, CPlaneswalkerCard* pWalker, Damage damage);

	ListenerPtr<DamageDealEventSource::Listener> m_cpEventListener;*/
};

//____________________________________________________________________________
//
class CCinderbonesCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderbonesCard);
};

//____________________________________________________________________________
//
class CJuvenileGloomwidowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJuvenileGloomwidowCard);
};

//____________________________________________________________________________
//
class CMidnightBansheeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMidnightBansheeCard);
};

//____________________________________________________________________________
//
class COonasGatewardenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COonasGatewardenCard);
};

//____________________________________________________________________________
//
class CRustrazorButcherCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRustrazorButcherCard);
};

//____________________________________________________________________________
//
class CScuzzbackScrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScuzzbackScrapperCard);
};

//____________________________________________________________________________
//
class CSickleRipperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSickleRipperCard);
};

//____________________________________________________________________________
//
class CSlinkingGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlinkingGiantCard);
};

//____________________________________________________________________________
//
class CWildslayerElvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildslayerElvesCard);
};

//____________________________________________________________________________
//
class CCounterboreCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCounterboreCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CLockjawSnapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLockjawSnapperCard);
};

//____________________________________________________________________________
//
class CPuppeteerCliqueCard : public CFlyingCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CPuppeteerCliqueCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};
//____________________________________________________________________________
//
class CKnollspineDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKnollspineDragonCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CHeartmenderCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CHeartmenderCard);
};

//____________________________________________________________________________
//
class CFirespoutCard : public  CCard
{
	DECLARE_CARD_CSTOR(CFirespoutCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMistmeadowWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistmeadowWitchCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFossilFindCard : public CCard 
{
	DECLARE_CARD_CSTOR(CFossilFindCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CImpromptuRaidCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CImpromptuRaidCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSyggRiverCutthroatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSyggRiverCutthroatCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWoundReflectionCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CWoundReflectionCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CVexingShusherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVexingShusherCard);
};

//____________________________________________________________________________
//
class CRunedHaloCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CRunedHaloCard);
};

//____________________________________________________________________________
//
class CMerrowGrimeblotterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowGrimeblotterCard);
};

//____________________________________________________________________________
//
class CMerrowWavebreakersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowWavebreakersCard);
};

//____________________________________________________________________________
//
class COrderOfWhiteclayCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfWhiteclayCard);
};

//____________________________________________________________________________
//
class CPuresightMerrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPuresightMerrowCard);
};

//____________________________________________________________________________
//
class CSafeholdSentryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSafeholdSentryCard);
};

//____________________________________________________________________________
//
class CSilkbindFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilkbindFaerieCard);
};

//____________________________________________________________________________
//
class CPiliPalaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPiliPalaCard);
};

//____________________________________________________________________________
//
class CUmbralMantleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUmbralMantleCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class COonaQueenoftheFaeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COonaQueenoftheFaeCard);
};

//____________________________________________________________________________
//
class CRiverKelpieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverKelpieCard);

protected:
	CPersistKeyword m_PersistKeyword;
};

//____________________________________________________________________________
//
class CTurnToMistCard : public CCard
{
	DECLARE_CARD_CSTOR(CTurnToMistCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CBeseechtheQueenCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeseechtheQueenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScuttlemuttCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScuttlemuttCard);
};

//____________________________________________________________________________
//
class CRiteofConsumptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiteofConsumptionCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CScarscaleRitualCard : public CCard
{
	DECLARE_CARD_CSTOR(CScarscaleRitualCard);
};

//____________________________________________________________________________
//
class CWickerWarcrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWickerWarcrawlerCard);
};

//____________________________________________________________________________
//
class CGodheadOfAweCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGodheadOfAweCard);
};

//____________________________________________________________________________
//
class CDreamSalvageCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreamSalvageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHelmoftheGhastlordCard : public CCard
{
	DECLARE_CARD_CSTOR(CHelmoftheGhastlordCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);	
};

//___________________________________________________________________________
//
class CRunesoftheDeusCard : public CCard
{
	DECLARE_CARD_CSTOR(CRunesoftheDeusCard);
};

//___________________________________________________________________________
//
class CShieldoftheOversoulCard : public CCard
{
	DECLARE_CARD_CSTOR(CShieldoftheOversoulCard);
};

//___________________________________________________________________________
//
class CSteeloftheGodheadCard : public CCard
{
	DECLARE_CARD_CSTOR(CSteeloftheGodheadCard);
};

//___________________________________________________________________________
//
class CWindbriskRaptorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindbriskRaptorCard);
};

//____________________________________________________________________________
//
class CMercyKillingCard : public CCard
{
	DECLARE_CARD_CSTOR(CMercyKillingCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CSwansofBrynArgollCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSwansofBrynArgollCard);

protected:
	typedef
	TTriggeredAbility< CTriggeredDrawCardAbility, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;

	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CMadblindMountainCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMadblindMountainCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAshenmoorLiegeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenmoorLiegeCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CEverlastingTormentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEverlastingTormentCard);
};

//____________________________________________________________________________
//
class CFistsoftheDemigodCard : public CCard
{
	DECLARE_CARD_CSTOR(CFistsoftheDemigodCard);
};

//___________________________________________________________________________
//
class CCorrosiveMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorrosiveMentorCard);
};

//___________________________________________________________________________
//
class CBlazethornScarecrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlazethornScarecrowCard);
};

//____________________________________________________________________________
//
class CThornwatchScarecrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornwatchScarecrowCard);
};

//____________________________________________________________________________
//
class CBlightSickleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlightSickleCard);
};

//____________________________________________________________________________
//
class CWatchwingScarecrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWatchwingScarecrowCard);
};

//____________________________________________________________________________
//
class CDuskUrchinsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskUrchinsCard);

private:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPrismaticOmenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrismaticOmenCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CPaintersServantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPaintersServantCard);

private:
	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

protected:
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CardType m_Choice;	

	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CRhystheRedeemedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhystheRedeemedCard);
};

//____________________________________________________________________________
//
class CAdviceFromTheFaeCard : public CCard
{
	DECLARE_CARD_CSTOR(CAdviceFromTheFaeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTwilightShepherdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTwilightShepherdCard);

protected:
	CPersistKeyword m_PersistKeyword;
};

//____________________________________________________________________________
//
class CEnchantedEveningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEnchantedEveningCard);
};

//____________________________________________________________________________
//
class CBurnTrailCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurnTrailCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStripBareCard : public CCard
{
	DECLARE_CARD_CSTOR(CStripBareCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAEthertowCard : public CCard
{
	DECLARE_CARD_CSTOR(CAEthertowCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBarkshellBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CBarkshellBlessingCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDisturbingPlotCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisturbingPlotCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGhastlyDiscoveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CGhastlyDiscoveryCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGleefulSabotageCard : public CCard
{
	DECLARE_CARD_CSTOR(CGleefulSabotageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMemorySluiceCard : public CCard
{
	DECLARE_CARD_CSTOR(CMemorySluiceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMineExcavationCard : public CCard
{
	DECLARE_CARD_CSTOR(CMineExcavationCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTraitorsRoarCard : public CCard
{
	DECLARE_CARD_CSTOR(CTraitorsRoarCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	bool BeforeResolution1(CAbilityAction* pAction) const;

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGiantbaitingCard : public CCard
{
	DECLARE_CARD_CSTOR(CGiantbaitingCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CCardFilter m_CardFilter;

	bool BeforeResolutionMain(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFracturingGustCard : public CCard
{
	DECLARE_CARD_CSTOR(CFracturingGustCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
	int m_nCards;
};

//____________________________________________________________________________
//
class CBitingTetherCard : public CCard
{
	DECLARE_CARD_CSTOR(CBitingTetherCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	CControlEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CBlowflyInfestationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlowflyInfestationCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CWildSwingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWildSwingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCauldronOfSoulsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCauldronOfSoulsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRattleblazeScarecrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRattleblazeScarecrowCard);

protected:
	bool SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CWingrattleScarecrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWingrattleScarecrowCard);

protected:
	bool SetTriggerContextP1(CTriggeredPersistAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKulrathKnightCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKulrathKnightCard);
};

//____________________________________________________________________________
//
class CDinoftheFireherdCard : public CCard
{
	DECLARE_CARD_CSTOR(CDinoftheFireherdCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CTorrentofSoulsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTorrentofSoulsCard);

protected:
	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;


	class CTorrentofSoulsSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CTorrentofSoulsSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CTorrentofSoulsSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CEmberGaleCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmberGaleCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGloomwidowsFeastCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGloomwidowsFeastCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	bool BeforeResolution(CAbilityAction* pAction);
	int_ m_pLife;
};

//____________________________________________________________________________
//
class CFateTransferCard : public CCard
{
	DECLARE_CARD_CSTOR(CFateTransferCard);

protected:
	class CFateTransferSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CFateTransferSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CFateTransferSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CGloomlanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CGloomlanceCard);

protected:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBoonReflectionCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoonReflectionCard);
};

//____________________________________________________________________________
//
class CIslebackSpawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIslebackSpawnCard);
};

//____________________________________________________________________________
//
class CMemoryPlunderCard : public CCard
{
	DECLARE_CARD_CSTOR(CMemoryPlunderCard);
};

//____________________________________________________________________________
//
class CPaleWayfarerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPaleWayfarerCard);

protected:
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTatterkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTatterkiteCard);
};

//____________________________________________________________________________
//
class CInquisitorsSnareCard : public CCard
{
	DECLARE_CARD_CSTOR(CInquisitorsSnareCard);

protected:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CTyrannizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTyrannizeCard);

protected:
	CSelectionSupport m_PunisherSelection;
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CFurystokeGiantCard : public CCreatureCard, public CPersistKeyword
{
	DECLARE_CARD_CSTOR(CFurystokeGiantCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CGriefTyrantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGriefTyrantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CMedicineRunnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMedicineRunnerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CounterSelection;
	void OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPlagueOfVerminCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlagueOfVerminCard);

protected:
	CSelectionSupport m_ControllerSelection;
	CSelectionSupport m_OpponentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void ProcessController(CPlayer* pController, CPlayer* pOpponent);
	void ProcessOpponent(CPlayer* pController, CPlayer* pOpponent);
	void Finale(CPlayer* pController, CPlayer* pOpponent);
	void OnControllerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	int_ PassNumber;
	int_ ControllerPaid;
	int_ OpponentPaid;
};

//______________________________________________________________________________
//
class CElementalMasteryCard : public CCard
{
	DECLARE_CARD_CSTOR(CElementalMasteryCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCurseOfChainsCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CCurseOfChainsCard);

protected:
	CEnchant* pEnchantSpell2;
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CSinkingFeelingCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSinkingFeelingCard);

protected:
	CCardFilter m_CardFilter;

	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CSpellSyphonCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpellSyphonCard);

protected:
	class CSpellSyphonAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CSpellSyphonAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CSpellSyphonAbility() {}
	};
};

//____________________________________________________________________________
//
class CFlourishingDefensesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFlourishingDefensesCard);

protected:
	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CRepelIntrudersCard : public CCard
{
	DECLARE_CARD_CSTOR(CRepelIntrudersCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCragganwickCrematorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCragganwickCrematorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CElsewhereFlaskCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CElsewhereFlaskCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void OnLandTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_LandTypeSelection;
};

//____________________________________________________________________________
//
class CIlluminatedFolioCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIlluminatedFolioCard);
};

//____________________________________________________________________________
//
