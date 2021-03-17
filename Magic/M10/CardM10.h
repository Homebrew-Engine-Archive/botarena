#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CUndeadSlayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadSlayerCard);
};

//____________________________________________________________________________
//
class CAntQueenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAntQueenCard);
};

//____________________________________________________________________________
//
class CGoblinChieftainCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinChieftainCard);
};

//____________________________________________________________________________
//
class CKalonianBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKalonianBehemothCard);
};

//____________________________________________________________________________
//
class CMindSpringCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindSpringCard);
};

//____________________________________________________________________________
//
class CVampireAristocratCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireAristocratCard);
};

//____________________________________________________________________________
//
class CNaturesSpiralCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CNaturesSpiralCard);
};

//____________________________________________________________________________
//
class CMerfolkSovereignCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkSovereignCard);
};

//____________________________________________________________________________
//
class CHonorOfThePureCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHonorOfThePureCard);
};

//____________________________________________________________________________
//
class CRhoxPikemasterCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxPikemasterCard);
};

//____________________________________________________________________________
//
class CEliteVanguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEliteVanguardCard);
};

//____________________________________________________________________________
//
class CCaptainOfTheWatchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaptainOfTheWatchCard);
};

//____________________________________________________________________________
//
class CMindShatterCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindShatterCard);
};

//____________________________________________________________________________
//
class CGreatSableStagCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreatSableStagCard);
};

//____________________________________________________________________________
//
class CCelestialPurgeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCelestialPurgeCard);
};

//____________________________________________________________________________
//
class CExcommunicateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CExcommunicateCard);
};

//____________________________________________________________________________
//
class CNegateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CNegateCard);
};

//____________________________________________________________________________
//
class CCanyonMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCanyonMinotaurCard);
};

//____________________________________________________________________________
//
class CKindledFuryCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CKindledFuryCard);
};

//____________________________________________________________________________
//
class CTrumpetBlastCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTrumpetBlastCard);
};

//____________________________________________________________________________
//
class CAngelsMercyCard : public CCard 
{
	DECLARE_CARD_CSTOR(CAngelsMercyCard);
};

//____________________________________________________________________________
//
class CBlindingMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindingMageCard);
};

//____________________________________________________________________________
//
class CDivineVerdictCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDivineVerdictCard);
};

//____________________________________________________________________________
//
class CGloriousChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGloriousChargeCard);
};

//____________________________________________________________________________
//
class CGriffinSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGriffinSentinelCard);
};

//____________________________________________________________________________
//
class CHowlOfTheNightPackCard : public CCard
{
	DECLARE_CARD_CSTOR(CHowlOfTheNightPackCard);
};

//____________________________________________________________________________
//
class CPalaceGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPalaceGuardCard);
};

//____________________________________________________________________________
//
class CPlanarCleansingCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlanarCleansingCard);
};

//____________________________________________________________________________
//
class CSiegeMastodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSiegeMastodonCard);
};

//____________________________________________________________________________
//
class CSilvercoatLionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilvercoatLionCard);
};

//____________________________________________________________________________
//
class CStormfrontPegasusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormfrontPegasusCard);
};

//____________________________________________________________________________
//
class CVeteranArmorsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranArmorsmithCard);
};

//____________________________________________________________________________
//
class CVeteranSwordsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranSwordsmithCard);
};

//____________________________________________________________________________
//
class CWallOfFaithCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfFaithCard);
};

//____________________________________________________________________________
//
class CConvincingMirageCard : public CCard
{
	DECLARE_CARD_CSTOR(CConvincingMirageCard);
};

//____________________________________________________________________________
//
class CDisorientCard : public CCard
{
	DECLARE_CARD_CSTOR(CDisorientCard);
};

//____________________________________________________________________________
//
class CDivinationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDivinationCard);
};

//____________________________________________________________________________
//
class CEssenceScatterCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CEssenceScatterCard);
};

//____________________________________________________________________________
//
class CMindControlCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindControlCard);
};

//____________________________________________________________________________
//
class CSerpentOfTheEndlessSeaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerpentOfTheEndlessSeaCard);

	protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTomeScourCard : public CCard
{
	DECLARE_CARD_CSTOR(CTomeScourCard);
};

//____________________________________________________________________________
//
class CZephyrSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CZephyrSpriteCard);
};

//____________________________________________________________________________
//
class CAcolyteOfXathridCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CAcolyteOfXathridCard);
};

//____________________________________________________________________________
//
class CDisentombCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDisentombCard);
};

//____________________________________________________________________________
//
class CDoomBladeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDoomBladeCard);
};

//____________________________________________________________________________
//
class CDreadWarlockCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadWarlockCard);
};

//____________________________________________________________________________
//
class CHowlingBansheeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHowlingBansheeCard);
};

//____________________________________________________________________________
//
class CKelinoreBatCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKelinoreBatCard);
};

//____________________________________________________________________________
//
class CSoulBleedCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CSoulBleedCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CWarpathGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarpathGhoulCard);
};

//____________________________________________________________________________
//
class CZombieGoliathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieGoliathCard);
};

//____________________________________________________________________________
//
class CActOfTreasonCard : public CCard
{
	DECLARE_CARD_CSTOR(CActOfTreasonCard);
};

//____________________________________________________________________________
//
class CBerserkersOfBloodRidgeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBerserkersOfBloodRidgeCard);
};

//____________________________________________________________________________
//
class CBurstOfSpeedCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurstOfSpeedCard);
};

//____________________________________________________________________________
//
class CFieryHellhoundCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFieryHellhoundCard);
};

//____________________________________________________________________________
//
class CGoblinArtilleryCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinArtilleryCard);
};

//____________________________________________________________________________
//
class CSeismicStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeismicStrikeCard);
};

//____________________________________________________________________________
//
class CViashinoSpearhunterCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSpearhunterCard);
};

//____________________________________________________________________________
//
class CBorderlandRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorderlandRangerCard);
};

//____________________________________________________________________________
//
class CBountifulHarvestCard : public CCard
{
	DECLARE_CARD_CSTOR(CBountifulHarvestCard);
};

//____________________________________________________________________________
//
class CBrambleCreeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrambleCreeperCard);
};

//____________________________________________________________________________
//
class CCentaurCourserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurCourserCard);
};

//____________________________________________________________________________
//
class CCudgelTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCudgelTrollCard);
};

//____________________________________________________________________________
//
class CEmeraldOryxCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CEmeraldOryxCard);
};

//____________________________________________________________________________
//
class CMistLeopardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistLeopardCard);
};

//____________________________________________________________________________
//
class CMoldAdderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoldAdderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COakenformCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(COakenformCard);
};

//____________________________________________________________________________
//
class CPrizedUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrizedUnicornCard);
};

//____________________________________________________________________________
//
class CRegenerateCard : public CCard
{
	DECLARE_CARD_CSTOR(CRegenerateCard);
};

//____________________________________________________________________________
//
class CRuneclawBearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRuneclawBearCard);
};

//____________________________________________________________________________
//
class CStampedingRhinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStampedingRhinoCard);
};

//____________________________________________________________________________
//
class CWindstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CWindstormCard);
};

//____________________________________________________________________________
//
class CGargoyleCastleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGargoyleCastleCard);
};

//____________________________________________________________________________
//
class CTendrilsOfCorruptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CTendrilsOfCorruptionCard);
};

//____________________________________________________________________________
//
class CElvishVisionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishVisionaryCard);
};

//____________________________________________________________________________
//
class CAcidicSlimeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAcidicSlimeCard);
};

//____________________________________________________________________________
//
class CAlluringSirenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlluringSirenCard);
};

//____________________________________________________________________________
//
class CLightwielderPaladinCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CLightwielderPaladinCard);
};

//____________________________________________________________________________
//
class CGorgonFlailCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGorgonFlailCard);
};

//____________________________________________________________________________
//
class CDeadlyRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeadlyRecluseCard);
};

//____________________________________________________________________________
//
class CSparkmageApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSparkmageApprenticeCard);
};

//____________________________________________________________________________
//
class CSignInBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CSignInBloodCard);
};

//____________________________________________________________________________
//
class CFabricateCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CFabricateCard);
};

//____________________________________________________________________________
//
class CIgniteDisorderCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CIgniteDisorderCard);
};

//____________________________________________________________________________
//
class CSolemnOfferingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSolemnOfferingCard);
};

//____________________________________________________________________________
//
class CEntanglingVinesCard : public CCard
{
	DECLARE_CARD_CSTOR(CEntanglingVinesCard);
};

//_____________________________________________________________________________
//
class CSilenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSilenceCard);
};

//_____________________________________________________________________________
//
class COpenTheVaultsCard : public CCard
{
	DECLARE_CARD_CSTOR(COpenTheVaultsCard);
};

//_____________________________________________________________________________
//
class CInfernoElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfernoElementalCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
                                             CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CIllusionaryServantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIllusionaryServantCard);
};

//____________________________________________________________________________
//
class CMagebaneArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMagebaneArmorCard);
};

//____________________________________________________________________________
//
class CMesaEnchantressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMesaEnchantressCard);
};

//____________________________________________________________________________
//
class CDragonskullSummitCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDragonskullSummitCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CDrownedCatacombCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDrownedCatacombCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGlacialFortressCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGlacialFortressCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CRootboundCragCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRootboundCragCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSunpetalGroveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSunpetalGroveCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSanguineBondCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSanguineBondCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CGarrukWildspeakerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CGarrukWildspeakerCard);
};

//____________________________________________________________________________
//
//class CBogardanHellkiteCard : public CFlyingCreatureCard
//{
//	DECLARE_CARD_CSTOR(CBogardanHellkiteCard);
//
//protected:
//	class TriggeredAbility :
//		public TTriggeredAbility< CTriggeredAbility<>, 
//								  CWhenSelfInplay,
//							   CWhenSelfInplay::EventCallback,
//							   &CWhenSelfInplay::SetEnterEventCallback > 
//	{
//		DEFINE_CREATE_TO_CPTR_ONLY;
//
//	protected:
//		TriggeredAbility(CCard* pCard)
//			: TTriggeredAbility(pCard)
//		{
//		}
//		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pPlayer, CTriggeredAction* pAction) 
//		{
//			if (!__super::ResolveSelection(pPlayer, pAction))
//				return FALSE;
//
//			// Create a temporary ability to reuse the resolution code
//			counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> // must be an ability here, spells cannot resolve correctly in here because of stack requirement
//				cpAbility(CreateResolutionAbility<CActivatedAbility<CTargetChgLifeSpell>>(
//				pPlayer, // to be generated actions' controller
//				new AnyCreatureComparer, true, Life(-1), PreventableType::Preventable)); // parameters into the ability's constructor after the card and mana cost parameters
//			
//				//cpAbility->GetTargeting()->SetIncludePlayers(TRUE);
//				cpAbility->GetTargeting()->SetDistributeValues();
//
//			// Get all actions from the ability
//			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
//			if (!apActions->GetSize())
//				return FALSE;
//
//			// For this ability, we only care about the first action so just resolve that
//			return cpAbility->Resolve(apActions->GetAt(0).GetPointer());
//		}
//	};
//};

//____________________________________________________________________________
//
class CBurningInquiryCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurningInquiryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CChildOfNightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChildOfNightCard);
};

//____________________________________________________________________________
//
class CSleepCard : public CCard
{
	DECLARE_CARD_CSTOR(CSleepCard);
};

//____________________________________________________________________________
//
class CPonderCard : public CCard
{
	DECLARE_CARD_CSTOR(CPonderCard);

protected:
	class CPonderSpell : public CSpell
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

		CPonderSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CPonderSpell() {}

	protected:
		OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

		ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
							DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	};
};

//_________________________________________________________________
//
class CChandraNalaarCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CChandraNalaarCard);
};

//____________________________________________________________________________
//
class CJaceBelerenCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CJaceBelerenCard);
};

//____________________________________________________________________________
//
class CCemeteryReaperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCemeteryReaperCard);
};

//____________________________________________________________________________
//
class CMagmaPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMagmaPhoenixCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CAjaniGoldmaneCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CAjaniGoldmaneCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLilianaVessCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CLilianaVessCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHauntingEchoesCard : public CCard
{
	DECLARE_CARD_CSTOR(CHauntingEchoesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTimeWarpCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimeWarpCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CElvishArchdruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishArchdruidCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CXathridDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CXathridDemonCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSafePassageCard : public CCard
{
	DECLARE_CARD_CSTOR(CSafePassageCard);
};

//____________________________________________________________________________
//
class CDarksteelColossusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarksteelColossusCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CIndestructibilityCard : public CCard
{
	DECLARE_CARD_CSTOR(CIndestructibilityCard);
};

//____________________________________________________________________________
//
class CWallOfFrostCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfFrostCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CBaneslayerAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBaneslayerAngelCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArmoredAscensionCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CArmoredAscensionCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CLifelinkCard : public CCard
{
	DECLARE_CARD_CSTOR(CLifelinkCard);
};

//____________________________________________________________________________
//
class CBogardanHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBogardanHellkiteCard);
};

//____________________________________________________________________________
//
class CYawningFissureCard : public CCard
{
	DECLARE_CARD_CSTOR(CYawningFissureCard);
};

//____________________________________________________________________________
//
class CRiseFromTheGraveCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRiseFromTheGraveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIceCageCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CIceCageCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//

class CCapriciousEfreetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCapriciousEfreetCard);

private:
	class CTriggeredCapriciousEfreetAbility
		: public CTriggeredAbility<>
	{

	protected:
		CTriggeredCapriciousEfreetAbility(CCard* pCard);

		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	};
};

//____________________________________________________________________________
//
class CVampireNocturnusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireNocturnusCard);

protected:
	CCardFilter m_CardFilter;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CLurkingPredatorsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLurkingPredatorsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSpellCast > TriggeredAbility;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSphinxAmbassadorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxAmbassadorCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	CSelectionSupport m_NameSelection;
	CSelectionSupport m_YesNoSelection;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CMasterOfTheWildHuntCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfTheWildHuntCard);

protected:
	CSelectionSupport m_CardSelection;
	CSelectionSupport m_NumberSelection;

	CCountedCardContainer m_WolfList;
	int RemainingPower;

	bool BeforeResolution(CAbilityAction* pAction);
	void CardSelection(CPlayer* pPlayer, CCreatureCard* pCreature);
	void NumberSelection(CPlayer* pPlayer, CCreatureCard* pDealer, CCreatureCard* pRecipient);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CProteanHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CProteanHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution1(CProteanHydraCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
