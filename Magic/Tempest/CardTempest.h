#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CClotSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClotSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CHeartSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartSliverCard);
};

//____________________________________________________________________________
//
class CHornedSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHornedSliverCard);
};

//____________________________________________________________________________
//
class CLotusPetalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLotusPetalCard);
};

//____________________________________________________________________________
//
class CMetallicSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMetallicSliverCard);
};

//____________________________________________________________________________
//
class COrimSamiteHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrimSamiteHealerCard);
};

//____________________________________________________________________________
//
class CSkyshroudVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudVampireCard);
};

//____________________________________________________________________________
//
class CTalonSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTalonSliverCard);
};

//____________________________________________________________________________
//
class CWastelandCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CWastelandCard);
};

//____________________________________________________________________________
//
class CWhispersOfTheMuseCard: public CCard
{
	DECLARE_CARD_CSTOR (CWhispersOfTheMuseCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CCapsizeCard: public CCard
{
	DECLARE_CARD_CSTOR (CCapsizeCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CWingedSliverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWingedSliverCard);

	protected:
	CCardFilter m_SliverCardFilter;

};

//____________________________________________________________________________
//
class CAuratogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuratogCard);
};

//____________________________________________________________________________
//
class CMuscleSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMuscleSliverCard);
};

//____________________________________________________________________________
//
class CAdvanceScoutCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAdvanceScoutCard);
};

//____________________________________________________________________________
//
class CApesOfRathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CApesOfRathCard);
};

//____________________________________________________________________________
//
class CBayouDragonflyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBayouDragonflyCard);
};

//____________________________________________________________________________
//
class CClergyEnVecCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClergyEnVecCard);
};

//____________________________________________________________________________
//
class CCommanderGrevenIlVecCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCommanderGrevenIlVecCard);
};

//____________________________________________________________________________
//
class CCrazedArmodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrazedArmodonCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDarklingStalkerCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDarklingStalkerCard);
};

//____________________________________________________________________________
//
class CDirtcowlWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDirtcowlWurmCard);
};

//____________________________________________________________________________
//
class CEladamriLordOfLeavesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEladamriLordOfLeavesCard);
};

//____________________________________________________________________________
//
class CElvenWarhoundsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvenWarhoundsCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CFireflyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFireflyCard);
};

//____________________________________________________________________________
//
class CFireslingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFireslingerCard);
};

//____________________________________________________________________________
//
class CFlowstoneGiantCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneGiantCard);
};

//____________________________________________________________________________
//
class CFlowstoneWyvernCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneWyvernCard);
};

//____________________________________________________________________________
//
class CGiantCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantCrabCard);
};

//____________________________________________________________________________
//
class CHeartwoodGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartwoodGiantCard);
};

//____________________________________________________________________________
//
class CHeartwoodTreefolkCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartwoodTreefolkCard);
};

//____________________________________________________________________________
//
class CKnightOfDawnCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfDawnCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CLowlandGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLowlandGiantCard);
};

//____________________________________________________________________________
//
class CMantaRidersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMantaRidersCard);
};

//____________________________________________________________________________
//
class CMarshLurkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshLurkerCard);
};

//____________________________________________________________________________
//
class CMoggRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggRaiderCard);
};

//____________________________________________________________________________
//
class CAngelicProtectorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelicProtectorCard);
};

//____________________________________________________________________________
//
class CMoggSquadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggSquadCard);
};

//____________________________________________________________________________
//
class COpportunistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COpportunistCard);
};

//____________________________________________________________________________
//
class CPitImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPitImpCard);
};

//____________________________________________________________________________
//
class CRangerEnVecCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRangerEnVecCard);
};

//____________________________________________________________________________
//
class CRatsOfRathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRatsOfRathCard);
};

//____________________________________________________________________________
//
class CRootwaterDiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootwaterDiverCard);
};

//____________________________________________________________________________
//
class CRootwaterHunterCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CRootwaterHunterCard);
};

//____________________________________________________________________________
//
class CScragnothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScragnothCard);
};

//____________________________________________________________________________
//
class CScreechingHarpyCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingHarpyCard);
};

//____________________________________________________________________________
//
class CSegmentedWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSegmentedWurmCard);
};

//____________________________________________________________________________
//
class CSeleniaDarkAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeleniaDarkAngelCard);
};

//____________________________________________________________________________
//
class CServantOfVolrathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CServantOfVolrathCard);
};

//____________________________________________________________________________
//
class CSkySpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkySpiritCard);
};

//____________________________________________________________________________
//
class CSkyshroudElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudElfCard);
};

//____________________________________________________________________________
//
class CSkyshroudTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudTrollCard);
};

//____________________________________________________________________________
//
class CSouldrinkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSouldrinkerCard);
};

//____________________________________________________________________________
//
class CTradewindRiderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTradewindRiderCard);
};

//____________________________________________________________________________
//
class CCoiledTinviperCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CCoiledTinviperCard);
};

//____________________________________________________________________________
//
class CEnergizerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnergizerCard);
};

//____________________________________________________________________________
//
class CFlowstoneSculptureCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneSculptureCard);
};

//____________________________________________________________________________
//
class CManakinCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CManakinCard);
};

//____________________________________________________________________________
//
class CPatchworkGnomesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPatchworkGnomesCard);
};

//____________________________________________________________________________
//
class CTelethopterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTelethopterCard);
};

//____________________________________________________________________________
//
class CAncientTombCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAncientTombCard);
};

//____________________________________________________________________________
//
class CCalderaLakeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCalderaLakeCard);
};

//____________________________________________________________________________
//
class CPineBarrensCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPineBarrensCard);
};

//____________________________________________________________________________
//
class CSaltFlatsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSaltFlatsCard);
};

//____________________________________________________________________________
//
class CScablandCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CScablandCard);
};

//____________________________________________________________________________
//
class CSkyshroudForestCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSkyshroudForestCard);
};

//____________________________________________________________________________
//
class CEmmessiTomeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEmmessiTomeCard);
};

//____________________________________________________________________________
//
class CFoolsTomeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFoolsTomeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMoggCannonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoggCannonCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPuppetStringsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPuppetStringsCard);
};

//____________________________________________________________________________
//
class CSqueesToyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSqueesToyCard);
};

//____________________________________________________________________________
//
class CCrownOfFlamesCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrownOfFlamesCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEarthcraftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEarthcraftCard);
};

//____________________________________________________________________________
//
class CFrogTongueCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFrogTongueCard);
};

//____________________________________________________________________________
//
class CGerrardsBattleCryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGerrardsBattleCryCard);
};

//____________________________________________________________________________
//
class CGoblinBombardmentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinBombardmentCard);
};

//____________________________________________________________________________
//
class CHannasCustodyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHannasCustodyCard);
};

//____________________________________________________________________________
//
class CHavocCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHavocCard);
};

//____________________________________________________________________________
//
class CPegasusRefugeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPegasusRefugeCard);
};

//____________________________________________________________________________
//
class CSafeguardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSafeguardCard);
};

//____________________________________________________________________________
//
class CStormFrontCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStormFrontCard);
};

//____________________________________________________________________________
//
class CToothAndClawCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CToothAndClawCard);
};

//____________________________________________________________________________
//
class CAnointCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnointCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CDiabolicEdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CDiabolicEdictCard);
};

//____________________________________________________________________________
//
class CDismissCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDismissCard);
};

//____________________________________________________________________________
//
class CElvishFuryCard : public CCard
{
	DECLARE_CARD_CSTOR(CElvishFuryCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CGallantryCard : public CCard
{
	DECLARE_CARD_CSTOR(CGallantryCard);
};

//____________________________________________________________________________
//
class CHarrowCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CHarrowCard);
};

//____________________________________________________________________________
//
class CImpsTauntCard : public CCard
{
	DECLARE_CARD_CSTOR(CImpsTauntCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CInvulnerabilityCard : public CCard
{
	DECLARE_CARD_CSTOR(CInvulnerabilityCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CMeditateCard : public CCard
{
	DECLARE_CARD_CSTOR(CMeditateCard);
};

//____________________________________________________________________________
//
class CRecklessSpiteCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRecklessSpiteCard);
};

//____________________________________________________________________________
//
class CSearingTouchCard : public CCard
{
	DECLARE_CARD_CSTOR(CSearingTouchCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CSpontaneousCombustionCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSpontaneousCombustionCard);
};

//____________________________________________________________________________
//
class CVerdigrisCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVerdigrisCard);
};

//____________________________________________________________________________
//
class CAftershockCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAftershockCard);
};

//____________________________________________________________________________
//
class CDisturbedBurialCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisturbedBurialCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CEvincarsJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CEvincarsJusticeCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CManaSeveranceCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CManaSeveranceCard);
};

//____________________________________________________________________________
//
class CRollingThunderCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRollingThunderCard);
};

//____________________________________________________________________________
//
class CFylamaridCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFylamaridCard);
};

//____________________________________________________________________________
//
class CReflectingPoolCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CReflectingPoolCard);
};

//____________________________________________________________________________
//
class CAncientRunesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAncientRunesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAvengingAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvengingAngelCard);
};

//____________________________________________________________________________
//
class CFieldOfSoulsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFieldOfSoulsCard);
};

//____________________________________________________________________________
//
//class CFugitiveDruidCard : public CCreatureCard
//{
//		DECLARE_CARD_CSTOR(CFugitiveDruidCard);
//
//	protected:
//	CCardFilter m_CardFilter;
//};

//____________________________________________________________________________
//
//class CHumilityCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CHumilityCard);
//
//};

//____________________________________________________________________________
//
class CMirrisGuileCard : public CInPlaySpellCard
{
		DECLARE_CARD_CSTOR(CMirrisGuileCard);
};

//____________________________________________________________________________
//
class CVhatiIlDalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVhatiIlDalCard);
};

//____________________________________________________________________________
//
class CLivingDeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingDeathCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSarcomancyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSarcomancyCard);

protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CPrecognitionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrecognitionCard);

private:
	bool SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CRepentanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CRepentanceCard);
};

//____________________________________________________________________________
//
class CBrokenFallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBrokenFallCard);
};

//____________________________________________________________________________
//
class CApocalypseCard : public CCard
{
	DECLARE_CARD_CSTOR(CApocalypseCard);
};

//____________________________________________________________________________
//
class CArmorSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmorSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBarbedSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbedSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CMindwhipSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindwhipSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CMnemonicSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMnemonicSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CEladamrisVineyardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEladamrisVineyardCard);

private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CFlailingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFlailingDrakeCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CFlowstoneSalamanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneSalamanderCard);
};

//____________________________________________________________________________
//
class CJackalPupCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJackalPupCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CPallimudCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPallimudCard);
};

//____________________________________________________________________________
//
class CRenegadeWarlordCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRenegadeWarlordCard);
};

//____________________________________________________________________________
//
class CScaldingTongsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScaldingTongsCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CThumbscrewsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThumbscrewsCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CFeveredConvulsionsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFeveredConvulsionsCard);
};

//____________________________________________________________________________
//
class CSadisticGleeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSadisticGleeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CBountyHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBountyHunterCard);
};

//____________________________________________________________________________
//
class CSpikeDroneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeDroneCard);
};

//____________________________________________________________________________
//
class CKrakilinCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CKrakilinCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CLobotomyCard : public CCard
{
	DECLARE_CARD_CSTOR(CLobotomyCard);

protected:
	CCardFilter m_CardFilter;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBloodFrenzyCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBloodFrenzyCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CWorthyCauseCard : public CCard
{
	DECLARE_CARD_CSTOR(CWorthyCauseCard);


public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDauthiMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiMarauderCard);
};

//____________________________________________________________________________
//
class CHeartwoodDryadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartwoodDryadCard);
};

//____________________________________________________________________________
//
class CDauthiGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiGhoulCard);
};

//____________________________________________________________________________
//
class CDauthiHorrorCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiHorrorCard);
};

//____________________________________________________________________________
//
class CDauthiMercenaryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiMercenaryCard);
};

//____________________________________________________________________________
//
class CDauthiMindripperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiMindripperCard);

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
class CDauthiSlayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiSlayerCard);
};

//____________________________________________________________________________
//
class CSoltariCrusaderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariCrusaderCard);
};

//____________________________________________________________________________
//
class CSoltariEmissaryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariEmissaryCard);
};

//____________________________________________________________________________
//
class CSoltariFootSoldierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariFootSoldierCard);
};

//____________________________________________________________________________
//
class CSoltariLancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariLancerCard);
};

//____________________________________________________________________________
//
class CSoltariMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariMonkCard);
};

//____________________________________________________________________________
//
class CSoltariPriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariPriestCard);
};

//____________________________________________________________________________
//
class CSoltariTrooperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariTrooperCard);
};

//____________________________________________________________________________
//
class CThalakosMistfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThalakosMistfolkCard);
};

//____________________________________________________________________________
//
class CThalakosSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThalakosSeerCard);
};

//____________________________________________________________________________
//
class CThalakosSentryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThalakosSentryCard);
};

//____________________________________________________________________________
//
class CWallOfDiffusionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfDiffusionCard);
};

//____________________________________________________________________________
//
class CMazeOfShadowsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMazeOfShadowsCard);
};

//____________________________________________________________________________
//
class CDauthiEmbraceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDauthiEmbraceCard);
};

//____________________________________________________________________________
//
class CRealityAnchorCard : public CCard
{
	DECLARE_CARD_CSTOR(CRealityAnchorCard);
};

//____________________________________________________________________________
//
class CShadowRiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CShadowRiftCard);
};

//____________________________________________________________________________
//
class CShadowstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CShadowstormCard);
};

//____________________________________________________________________________
//
class CSpinalGraftCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSpinalGraftCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CGhostTownCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGhostTownCard);
};

//____________________________________________________________________________
//
class CCinderMarshCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCinderMarshCard);
};

//____________________________________________________________________________
//
class CMoggHollowsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMoggHollowsCard);
};

//____________________________________________________________________________
//
class CRootwaterDepthsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRootwaterDepthsCard);
};

//____________________________________________________________________________
//
class CThalakosLowlandsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CThalakosLowlandsCard);
};

//____________________________________________________________________________
//
class CVecTownshipsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CVecTownshipsCard);
};

//____________________________________________________________________________
//
class CKezzerdrixCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKezzerdrixCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMongrelPackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMongrelPackCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class COrimsPrayerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrimsPrayerCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSpiritMirrorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpiritMirrorCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSereneOfferingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSereneOfferingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CReanimateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReanimateCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CEmeraldMedallionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEmeraldMedallionCard);
};

//____________________________________________________________________________
//
class CJetMedallionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJetMedallionCard);
};

//____________________________________________________________________________
//
class CPearlMedallionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPearlMedallionCard);
};

//____________________________________________________________________________
//
class CRubyMedallionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRubyMedallionCard);
};

//____________________________________________________________________________
//
class CSapphireMedallionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSapphireMedallionCard);
};

//____________________________________________________________________________
//
class CIntuitionCard: public CCard
{
	DECLARE_CARD_CSTOR (CIntuitionCard);
};

//____________________________________________________________________________
//
class CRootwaterShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootwaterShamanCard);
};

//____________________________________________________________________________
//
class CStalkingStonesCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CStalkingStonesCard);
};

//____________________________________________________________________________
//
class CGrindstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrindstoneCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CCursedScrollCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCursedScrollCard);
};

//____________________________________________________________________________
//
class CKindleCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CKindleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTortureChamberCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTortureChamberCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CEssenceBottleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEssenceBottleCard);
};

//____________________________________________________________________________
//
class CMoggConscriptsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggConscriptsCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPropagandaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPropagandaCard);
};

//____________________________________________________________________________
//
class CMinionOfTheWastesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinionOfTheWastesCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nLifePaid;
};

//____________________________________________________________________________
//
class CAltarOfDementiaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAltarOfDementiaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWindsOfRathCard : public CCard
{
	DECLARE_CARD_CSTOR(CWindsOfRathCard);
};

//____________________________________________________________________________
//
class CShockerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShockerCard);
};

//____________________________________________________________________________
//

class CSkyshroudCondorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudCondorCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPhyrexianSplicerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianSplicerCard);
};

//____________________________________________________________________________
//
class CMountedArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMountedArchersCard);
};

//____________________________________________________________________________
//
class CChaoticGooCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChaoticGooCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CWildWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildWurmCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CSacredGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSacredGuideCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CEscapedShapeshifterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEscapedShapeshifterCard);
};

//____________________________________________________________________________
//
class CWoodSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodSageCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCorpseDanceCard: public CCard
{
	DECLARE_CARD_CSTOR (CCorpseDanceCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	CManaCost	m_BuybackCost;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPhyrexianGrimoireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianGrimoireCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CColdStorageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CColdStorageCard);

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
class CScrollRackCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScrollRackCard);

protected:
	CCountedCardContainer_ pExiled;

	CSelectionSupport m_CardSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void Process (CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale (CPlayer* pController);
};

//____________________________________________________________________________
//
class CMaddeningImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMaddeningImpCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	bool BeforeResolution (CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMagmasaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagmasaurCard);

protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//

class CCoffinQueenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoffinQueenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHandToHandCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHandToHandCard);
};

//____________________________________________________________________________
//
