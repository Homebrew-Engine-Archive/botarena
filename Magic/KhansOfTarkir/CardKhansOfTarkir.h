#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAbzanBannerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAbzanBannerCard);
};

//____________________________________________________________________________
//
class CJeskaiBannerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJeskaiBannerCard);
};

//____________________________________________________________________________
//
class CMarduBannerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMarduBannerCard);
};

//____________________________________________________________________________
//
class CSultaiBannerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSultaiBannerCard);
};

//____________________________________________________________________________
//
class CTemurBannerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTemurBannerCard);
};

//____________________________________________________________________________
//
class CFrontierBivouacCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFrontierBivouacCard);
};

//____________________________________________________________________________
//
class CMysticMonasteryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMysticMonasteryCard);
};

//____________________________________________________________________________
//
class CNomadOutpostCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNomadOutpostCard);
};

//____________________________________________________________________________
//
class COpulentPalaceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COpulentPalaceCard);
};

//____________________________________________________________________________
//
class CSandsteppeCitadelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSandsteppeCitadelCard);
};

//____________________________________________________________________________
//
class CAlabasterKirinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabasterKirinCard);
};

//____________________________________________________________________________
//
class CBloodfellCavesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBloodfellCavesCard);
};

//____________________________________________________________________________
//
class CBlossomingSandsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBlossomingSandsCard);
};

//____________________________________________________________________________
//
class CDismalBackwaterCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDismalBackwaterCard);
};

//____________________________________________________________________________
//
class CDutifulReturnCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDutifulReturnCard);
};

//____________________________________________________________________________
//
class CKillShotCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CKillShotCard);
};

//____________________________________________________________________________
//
class CSummitProwlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSummitProwlerCard);
};

//____________________________________________________________________________
//
class CRuggedHighlandsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRuggedHighlandsCard);
};

//____________________________________________________________________________
//
class CTranquilCoveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTranquilCoveCard);
};

//____________________________________________________________________________
//
class CThrottleCard : public CCard
{
	DECLARE_CARD_CSTOR(CThrottleCard);
};

//____________________________________________________________________________
//
class CWeaveFateCard : public CCard
{
	DECLARE_CARD_CSTOR(CWeaveFateCard);
};

//____________________________________________________________________________
//
class CBraveTheSandsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBraveTheSandsCard);
};

//____________________________________________________________________________
//
class CRottingMastodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottingMastodonCard);
};

//____________________________________________________________________________
//
class CTormentingVoiceCard : public CCard
{
	DECLARE_CARD_CSTOR(CTormentingVoiceCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAwakenTheBearCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAwakenTheBearCard);
};

//____________________________________________________________________________
//
class CSiegecraftCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSiegecraftCard);
};

//____________________________________________________________________________
//
class CSuspensionFieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSuspensionFieldCard);

protected:
	CCountedCardContainer_ pExiled;

	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWaterwhirlCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWaterwhirlCard);
};

//____________________________________________________________________________
//
class CDebilitatingInjuryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDebilitatingInjuryCard);
};

//______________________________________________________________________________
//
class CDisownedAncestorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDisownedAncestorCard);
};

//____________________________________________________________________________
//
class CAbzanBattlePriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbzanBattlePriestCard);
};

//____________________________________________________________________________
//
class CAbzanFalconerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbzanFalconerCard);
};

//____________________________________________________________________________
//
class CAinokBondKinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAinokBondKinCard);
};

//____________________________________________________________________________
//
class CDazzlingRampartsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDazzlingRampartsCard);
};

//____________________________________________________________________________
//
class CDefiantStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDefiantStrikeCard);
};

//____________________________________________________________________________
//
class CFirehoofCavalryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFirehoofCavalryCard);
};

//_____________________________________________________________________________
//
class CMarduHatebladeCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduHatebladeCard);
};

//____________________________________________________________________________
//
class CMasterOfPearlsCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfPearlsCard);
};

//____________________________________________________________________________
//
class CSageEyeHarrierCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSageEyeHarrierCard);
};

//____________________________________________________________________________
//
class CSaltRoadPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaltRoadPatrolCard);
};

//____________________________________________________________________________
//
class CTakeUpArmsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTakeUpArmsCard);
};

//____________________________________________________________________________
//
class CVenerableLammasuCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVenerableLammasuCard);
};

//____________________________________________________________________________
//
class CWarBehemothCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWarBehemothCard);
};

//____________________________________________________________________________
//
class CAinokTrackerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAinokTrackerCard);
};

//____________________________________________________________________________
//
class CBloodfireMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodfireMentorCard);
};

//____________________________________________________________________________
//
class CCanyonLurkersCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CCanyonLurkersCard);
};

//____________________________________________________________________________
//
class CHordelingOutburstCard : public CCard
{
	DECLARE_CARD_CSTOR(CHordelingOutburstCard);
};

//____________________________________________________________________________
//
class CLeapingMasterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLeapingMasterCard);
};

//____________________________________________________________________________
//
class CMarduBlazebringerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduBlazebringerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CValleyDasherCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CValleyDasherCard);
};

//____________________________________________________________________________
//
class CAlpineGrizzlyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlpineGrizzlyCard);
};

//____________________________________________________________________________
//
class CArchersParapetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchersParapetCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CDragonscaleBoonCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDragonscaleBoonCard);
};

//____________________________________________________________________________
//
class CHighlandGameCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHighlandGameCard);
};

//____________________________________________________________________________
//
class CKinTreeWardenCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CKinTreeWardenCard);
};

//____________________________________________________________________________
//
class CLongshotSquadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLongshotSquadCard);
};

//____________________________________________________________________________
//
class CRattleclawMysticCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRattleclawMysticCard);
};

//____________________________________________________________________________
//
class CSaguArcherCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSaguArcherCard);
};

//____________________________________________________________________________
//
class CScoutTheBordersCard : public CCard 
{
	DECLARE_CARD_CSTOR(CScoutTheBordersCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTemurChargerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CTemurChargerCard);
};

//____________________________________________________________________________
//
class CTuskedColossodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTuskedColossodonCard);
};

//____________________________________________________________________________
//
class CTuskguardCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTuskguardCaptainCard);
};

//____________________________________________________________________________
//
class CWoollyLoxodonCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWoollyLoxodonCard);
};

//____________________________________________________________________________
//
class CBitterRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CBitterRevelationCard);
};

//____________________________________________________________________________
//
class CGurmagSwiftwingCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGurmagSwiftwingCard);
};

//____________________________________________________________________________
//
class CKrumarBondKinCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CKrumarBondKinCard);
};

//____________________________________________________________________________
//
class CMerEkNightbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerEkNightbladeCard);
};

//____________________________________________________________________________
//
class CMoltingSnakeskinCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMoltingSnakeskinCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CChiefOfTheEdgeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChiefOfTheEdgeCard);
};

//____________________________________________________________________________
//
class CChiefOfTheScaleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChiefOfTheScaleCard);
};

//____________________________________________________________________________
//
class CUtterEndCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUtterEndCard);
};

//____________________________________________________________________________
//
class CBlindingSprayCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlindingSprayCard);
};

//____________________________________________________________________________
//
class CDisdainfulStrokeCard : public CCounterSpellCard 
{
	DECLARE_CARD_CSTOR(CDisdainfulStrokeCard);
};

//____________________________________________________________________________
//
class CEmbodimentOfSpringCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmbodimentOfSpringCard);
};

//____________________________________________________________________________
//
class CGlacialStalkerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CGlacialStalkerCard);
};

//____________________________________________________________________________
//
class CMonasteryFlockCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CMonasteryFlockCard);
};

//____________________________________________________________________________
//
class CMysticOfTheHiddenWayCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticOfTheHiddenWayCard);
};

//____________________________________________________________________________
//
class CMistfireWeaverCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CMistfireWeaverCard);
};

//____________________________________________________________________________
//
class CScaldkinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScaldkinCard);
};

//____________________________________________________________________________
//
class CScionOfGlaciersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CScionOfGlaciersCard);
};

//____________________________________________________________________________
//
class CWetlandSambarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWetlandSambarCard);
};

//____________________________________________________________________________
//
class CRuthlessRipperCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRuthlessRipperCard);
};

//____________________________________________________________________________
//
class CKinTreeInvocationCard : public CCard
{
	DECLARE_CARD_CSTOR(CKinTreeInvocationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRakshasaDeathdealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRakshasaDeathdealerCard);
};

//____________________________________________________________________________
//
class CHighspireMantisCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHighspireMantisCard);
};

//____________________________________________________________________________
//
class CIcefeatherAvenCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CIcefeatherAvenCard);
};

//____________________________________________________________________________
//
class CSaguMaulerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSaguMaulerCard);
};

//____________________________________________________________________________
//
class CWindScarredCragCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWindScarredCragCard);
};

//____________________________________________________________________________
//
class CWitnessOfTheAgesCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWitnessOfTheAgesCard);
};

//____________________________________________________________________________
//
class CAbzanAscendancyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAbzanAscendancyCard);
};

//____________________________________________________________________________
//
class CAbzanCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbzanCharmCard);
};

//____________________________________________________________________________
//
class CAbzanGuideCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAbzanGuideCard);
};

//____________________________________________________________________________
//
class CFeedTheClanCard : public CCard
{
	DECLARE_CARD_CSTOR(CFeedTheClanCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CForceAwayCard : public CCard
{
	DECLARE_CARD_CSTOR(CForceAwayCard);
protected:	
	CSelectionSupport m_DrawSelection;
	CSelectionSupport m_DiscardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnDiscardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_____________________________________________________________________________
//
class CMurderousCutCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMurderousCutCard);
};

//____________________________________________________________________________
//
class CBecomeImmenseCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBecomeImmenseCard);
};

//____________________________________________________________________________
//
class CDigThroughTimeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDigThroughTimeCard);
};

//____________________________________________________________________________
//
class CHootingMandrillsCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHootingMandrillsCard);
};

//____________________________________________________________________________
//
class CSultaiScavengerCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSultaiScavengerCard);
};

//____________________________________________________________________________
//
class CShamblingAttendantsCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamblingAttendantsCard);
};

//____________________________________________________________________________
//
class CTreasureCruiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CTreasureCruiseCard);
};

//____________________________________________________________________________
//
class CSetAdriftCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSetAdriftCard);
};

//____________________________________________________________________________
//
class CBloodfireExpertCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodfireExpertCard);
};

//____________________________________________________________________________
//
class CDragonStyleTwinsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonStyleTwinsCard);
};

//____________________________________________________________________________
//
class CJeskaiStudentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJeskaiStudentCard);
};

//____________________________________________________________________________
//
class CJeskaiWindscoutCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJeskaiWindscoutCard);
};

//____________________________________________________________________________
//
class CMonasterySwiftspearCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMonasterySwiftspearCard);
};

//____________________________________________________________________________
//
class CPearlLakeAncientCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPearlLakeAncientCard);
};

//____________________________________________________________________________
//
class CRiverwheelAerialistsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverwheelAerialistsCard);
};

//____________________________________________________________________________
//
class CWhirlwindAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhirlwindAdeptCard);
};

//____________________________________________________________________________
//
class CSeekerOfTheWayCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeekerOfTheWayCard);
};

//____________________________________________________________________________
//
class CJeskaiElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJeskaiElderCard);
};

//____________________________________________________________________________
//
class CMantisRiderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMantisRiderCard);
};

//____________________________________________________________________________
//
class CAnkleShankerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CAnkleShankerCard);	
};

//____________________________________________________________________________
//
class CBearsCompanionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBearsCompanionCard);
};

//____________________________________________________________________________
//
class CButcherOfTheHordeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CButcherOfTheHordeCard);

protected:
	CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CJeskaiCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CJeskaiCharmCard);
};

//____________________________________________________________________________
//
class CMarduCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarduCharmCard);
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter	m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CSultaiCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CSultaiCharmCard);
};

//____________________________________________________________________________
//
class CTemurCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemurCharmCard);
protected:
	class CHuntTheHunterSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CHuntTheHunterSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CSwiftKickCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwiftKickCard);

protected:
	class CHuntTheHunterSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CHuntTheHunterSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CHuntTheHunterSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CMarduRoughriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduRoughriderCard);
};

//____________________________________________________________________________
//
class CSageOfTheInwardEyeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSageOfTheInwardEyeCard);
};

//____________________________________________________________________________
//
class CSavageKnucklebladeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSavageKnucklebladeCard);
};

//____________________________________________________________________________
//
class CSnowhornRiderCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSnowhornRiderCard);
};

//____________________________________________________________________________
//
class CSultaiSoothsayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSultaiSoothsayerCard);
};

//____________________________________________________________________________
//
class CTemurAscendancyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTemurAscendancyCard);
};

//____________________________________________________________________________
//
class CWardenOfTheEyeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWardenOfTheEyeCard);
};

//____________________________________________________________________________
//
class CEndHostilitiesCard : public CCard
{
	DECLARE_CARD_CSTOR(CEndHostilitiesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFeatOfResistanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFeatOfResistanceCard);
};

//____________________________________________________________________________
//
class CHeraldOfAnafenzaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeraldOfAnafenzaCard);
};

//____________________________________________________________________________
//
class CHighSentinelsOfArashinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHighSentinelsOfArashinCard);
};

//____________________________________________________________________________
//
class CMarduHordechiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduHordechiefCard);
protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTimelyHordemateCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTimelyHordemateCard);
protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWingmateRocCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWingmateRocCard);
protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CArrowStormCard : public CCard
{
	DECLARE_CARD_CSTOR(CArrowStormCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMarduHeartPiercerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduHeartPiercerCard);
protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMarduWarshriekerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduWarshriekerCard);
protected:
	typedef
		TTriggeredAbility<CTriggeredAbility<>, CWhenSelfInplay, 
						  CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWarNameAspirantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarNameAspirantCard);
protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility<CTriggeredModifyCardAbility, CWhenSelfInplay, 
						  CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBellowingSaddlebruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBellowingSaddlebruteCard);
protected:
	typedef
		TTriggeredAbility<CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						  CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBloodsoakedChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodsoakedChampionCard);	
protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMarduSkullhunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarduSkullhunterCard);
protected:
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRushOfBattleCard : public CCard
{
	DECLARE_CARD_CSTOR(CRushOfBattleCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWatcherOfTheRoostCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWatcherOfTheRoostCard);
};

//____________________________________________________________________________
//