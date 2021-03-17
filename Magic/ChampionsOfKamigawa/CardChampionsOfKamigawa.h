#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAzamiLadyOfScrollsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAzamiLadyOfScrollsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAzusaLostButSeekingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAzusaLostButSeekingCard);
};

//____________________________________________________________________________
//
class CHairStrungKotoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHairStrungKotoCard);
};

//____________________________________________________________________________
//
class CIsamaruHoundOfKondaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIsamaruHoundOfKondaCard);
};

//____________________________________________________________________________
//
class CKodamaOfTheNorthTreeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKodamaOfTheNorthTreeCard);
};

//____________________________________________________________________________
//
class CLavaSpikeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLavaSpikeCard);
};

//____________________________________________________________________________
//
class CSakuraTribeElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSakuraTribeElderCard);
};

//____________________________________________________________________________
//
class CGeneralsKabutoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGeneralsKabutoCard);
};

//____________________________________________________________________________
//
class CDosanTheFallingLeafCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDosanTheFallingLeafCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CMinamoSchoolAtWatersEdgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMinamoSchoolAtWatersEdgeCard);
};

//____________________________________________________________________________
//
class CShizoDeathsStorehouseCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShizoDeathsStorehouseCard);
};

//____________________________________________________________________________
//
class CSenseisDiviningTopCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSenseisDiviningTopCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAkkiAvalanchersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiAvalanchersCard);
};

//____________________________________________________________________________
//
class CAkkiCoalflingerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiCoalflingerCard);
};

//____________________________________________________________________________
//
class CAkkiRockspeakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiRockspeakerCard);
};

//____________________________________________________________________________
//
class CAkkiUnderminerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiUnderminerCard);
};

//____________________________________________________________________________
//
class CBattleMadRoninCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleMadRoninCard);
};

//____________________________________________________________________________
//
class CBurrGrafterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBurrGrafterCard);
};

//____________________________________________________________________________
//
class CCursedRoninCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCursedRoninCard);
};

//____________________________________________________________________________
//
class CDeathcurseOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathcurseOgreCard);
};

//____________________________________________________________________________
//
class CDevotedRetainerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevotedRetainerCard);
};

//____________________________________________________________________________
//
class CGibberingKamiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGibberingKamiCard);
};

//____________________________________________________________________________
//
class CGracefulAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGracefulAdeptCard);
};

//____________________________________________________________________________
//
class CHeWhoHungersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHeWhoHungersCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHorobiDeathsWailCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHorobiDeathsWailCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CHumbleBudokaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHumbleBudokaCard);
};

//____________________________________________________________________________
//
class CHundredTalonKamiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHundredTalonKamiCard);
};

//____________________________________________________________________________
//
class CInameDeathAspectCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInameDeathAspectCard);
};

//____________________________________________________________________________
//
class CJukaiMessengerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CJukaiMessengerCard);
};

//____________________________________________________________________________
//
class CKabutoMothCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKabutoMothCard);
};

//____________________________________________________________________________
//
class CKamiOfAncientLawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfAncientLawCard);
};

//____________________________________________________________________________
//
class CKamiOfLunacyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfLunacyCard);
};

//____________________________________________________________________________
//
class CKamiOfThePalaceFieldsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfThePalaceFieldsCard);
};

//____________________________________________________________________________
//
class CKamiOfTwistedReflectionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTwistedReflectionCard);
};

//____________________________________________________________________________
//
class CKitsuneBlademasterCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKitsuneBlademasterCard);
};

//____________________________________________________________________________
//
class CKitsuneDivinerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKitsuneDivinerCard);
};

//____________________________________________________________________________
//
class CKitsuneHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKitsuneHealerCard);
};

//____________________________________________________________________________
//
class CKuroPitlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKuroPitlordCard);
};

//____________________________________________________________________________
//
class CLanternKamiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLanternKamiCard);
};

//____________________________________________________________________________
//
class CMossKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMossKamiCard);
};

//____________________________________________________________________________
//
class CMothriderSamuraiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMothriderSamuraiCard);
};

//____________________________________________________________________________
//
class CNagaoBoundByHonorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNagaoBoundByHonorCard);
};

//____________________________________________________________________________
//
class CNezumiBoneReaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNezumiBoneReaderCard);
};

//____________________________________________________________________________
//
class CNezumiCutthroatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNezumiCutthroatCard);
};

//____________________________________________________________________________
//
class CNezumiRoninCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNezumiRoninCard);
};

//____________________________________________________________________________
//
class CNumaiOutcastCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CNumaiOutcastCard);
};

//____________________________________________________________________________
//
class COrochiLeafcallerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrochiLeafcallerCard);
};

//____________________________________________________________________________
//
class COrochiSustainerCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(COrochiSustainerCard);
};

//____________________________________________________________________________
//
class CPainKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPainKamiCard);
};

//____________________________________________________________________________
//
class CRagDealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagDealerCard);
};

//____________________________________________________________________________
//
class CRiverKaijinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverKaijinCard);
};

//____________________________________________________________________________
//
class CRoninHoundmasterCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRoninHoundmasterCard);
};

//____________________________________________________________________________
//
class CRootrunnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootrunnerCard);
};

//____________________________________________________________________________
//
class CRyuseiTheFallingStarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRyuseiTheFallingStarCard);
};

//____________________________________________________________________________
//
class CSamuraiEnforcersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSamuraiEnforcersCard);
};

//____________________________________________________________________________
//
class CScuttlingDeathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScuttlingDeathCard);
};

//____________________________________________________________________________
//
class CSeizanPerverterOfTruthCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeizanPerverterOfTruthCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSeshiroTheAnointedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeshiroTheAnointedCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShisatoWhisperingHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShisatoWhisperingHunterCard);
};

//____________________________________________________________________________
//
class CSokenzanBruiserCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSokenzanBruiserCard);
};

//____________________________________________________________________________
//
class CThousandLeggedKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThousandLeggedKamiCard);
};

//____________________________________________________________________________
//
class CVenerableKumoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVenerableKumoCard);
};

//____________________________________________________________________________
//
class CVineKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVineKamiCard);
};

//____________________________________________________________________________
//
class CWanderingOnesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderingOnesCard);
};

//____________________________________________________________________________
//
class CZoZuThePunisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZoZuThePunisherCard);
};

//____________________________________________________________________________
//
class CEiganjoCastleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CEiganjoCastleCard);
};

//____________________________________________________________________________
//
class CForbiddenOrchardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CForbiddenOrchardCard);
};

//____________________________________________________________________________
//
class COkinaTempleToTheGrandfathersCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COkinaTempleToTheGrandfathersCard);
};

//____________________________________________________________________________
//
class CShinkaTheBloodsoakedKeepCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShinkaTheBloodsoakedKeepCard);
};

//____________________________________________________________________________
//
class CHonorWornShakuCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHonorWornShakuCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CImiStatueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CImiStatueCard);
};

//____________________________________________________________________________
//
class CJourneyersKiteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJourneyersKiteCard);
};

//____________________________________________________________________________
//
class CNoDachiCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNoDachiCard);
};

//____________________________________________________________________________
//
class CReitoLanternCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CReitoLanternCard);
};

//____________________________________________________________________________
//
class CBloodRitesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodRitesCard);
};

//____________________________________________________________________________
//
class CCageOfHandsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCageOfHandsCard);
};

//____________________________________________________________________________
//
class CFieldOfRealityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFieldOfRealityCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CIndomitableWillCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CIndomitableWillCard);
};

//____________________________________________________________________________
//
class CNightOfSoulsBetrayalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNightOfSoulsBetrayalCard);
};

//____________________________________________________________________________
//
class CVigilanceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVigilanceCard);
};

//____________________________________________________________________________
//
class CBlindWithAngerCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlindWithAngerCard);
};

//____________________________________________________________________________
//
class CCallToGloryCard : public CCard
{
	DECLARE_CARD_CSTOR(CCallToGloryCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCrushingPainCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCrushingPainCard);
};

//____________________________________________________________________________
//
class CEtherealHazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CEtherealHazeCard);
};

//____________________________________________________________________________
//
class CHoldTheLineCard : public CCard
{
	DECLARE_CARD_CSTOR(CHoldTheLineCard);
};

//____________________________________________________________________________
//
class CPartTheVeilCard : public CCard
{
	DECLARE_CARD_CSTOR(CPartTheVeilCard);
};

//____________________________________________________________________________
//
class CPeerThroughDepthsCard : public CCard
{
	DECLARE_CARD_CSTOR(CPeerThroughDepthsCard);
};

//____________________________________________________________________________
//
class CPullUnderCard : public CCard
{
	DECLARE_CARD_CSTOR(CPullUnderCard);
};

//____________________________________________________________________________
//
class CQuietPurityCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CQuietPurityCard);
};

//____________________________________________________________________________
//
class CReachThroughMistsCard : public CCard
{
	DECLARE_CARD_CSTOR(CReachThroughMistsCard);
};

//____________________________________________________________________________
//
class CRendFleshCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRendFleshCard);
};

//____________________________________________________________________________
//
class CRendSpiritCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRendSpiritCard);
};

//____________________________________________________________________________
//
class CThoughtbindCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CThoughtbindCard);
};

//____________________________________________________________________________
//
class CUnnaturalSpeedCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CUnnaturalSpeedCard);
};

//____________________________________________________________________________
//
class CCleanfallCard : public CCard
{
	DECLARE_CARD_CSTOR(CCleanfallCard);
};

//____________________________________________________________________________
//
class CDanceOfShadowsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDanceOfShadowsCard);
};

//____________________________________________________________________________
//
class CEyeOfNowhereCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CEyeOfNowhereCard);
};

//____________________________________________________________________________
//
class CGaleForceCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CGaleForceCard);
};

//____________________________________________________________________________
//
class CJoyousRespiteCard : public CCard
{
	DECLARE_CARD_CSTOR(CJoyousRespiteCard);
};

//____________________________________________________________________________
//
class CTerashisCryCard : public CCard
{
	DECLARE_CARD_CSTOR(CTerashisCryCard);
};

//____________________________________________________________________________
//
class CTimeOfNeedCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CTimeOfNeedCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CUnearthlyBlizzardCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnearthlyBlizzardCard);
};

//____________________________________________________________________________
//
class CWakingNightmareCard : public CCard
{
	DECLARE_CARD_CSTOR(CWakingNightmareCard);
};

//____________________________________________________________________________
//
class CKokushoTheEveningStarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKokushoTheEveningStarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSachiDaughterOfSeshiroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSachiDaughterOfSeshiroCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSosukeSonOfSeshiroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSosukeSonOfSeshiroCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
			CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealt::SetCreatureEventCallback  > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAuraOfDominionCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CAuraOfDominionCard);
};

//____________________________________________________________________________
//
class CMidnightCovenantCard : public CCard
{
	DECLARE_CARD_CSTOR(CMidnightCovenantCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CRaggedVeinsCard : public CCard
{
	DECLARE_CARD_CSTOR(CRaggedVeinsCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CInameLifeAspectCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInameLifeAspectCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKeigatheTideStarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKeigatheTideStarCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CKondasHatamotoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKondasHatamotoCard);
};

//____________________________________________________________________________
//
class CHondenofSeeingWindsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHondenofSeeingWindsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHondenofLifesWebCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHondenofLifesWebCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHondenofCleansingFireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHondenofCleansingFireCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHondenofInfiniteRageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHondenofInfiniteRageCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHondenofNightsReachCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHondenofNightsReachCard);

protected:
	typedef
			TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSwallowingPlagueCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSwallowingPlagueCard);
};

//____________________________________________________________________________
//
class CSireoftheStormCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSireoftheStormCard);
};

//____________________________________________________________________________
//
class CKondaLordOfEiganjoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKondaLordOfEiganjoCard);
};

//____________________________________________________________________________
//
class CEarthshakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEarthshakerCard);
};

//____________________________________________________________________________
//
class CGuardianOfSolitudeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianOfSolitudeCard);
};

//____________________________________________________________________________
//
class CInnocenceKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInnocenceKamiCard);
};

//____________________________________________________________________________
//
class CKamiOfFiresRoarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfFiresRoarCard);
};

//____________________________________________________________________________
//
class CKamiOfTheHuntCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTheHuntCard);
};

//____________________________________________________________________________
//
class CKamiOfTheWaningMoonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTheWaningMoonCard);
};

//____________________________________________________________________________
//
class CKodamaOfTheSouthTreeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKodamaOfTheSouthTreeCard);
};

//____________________________________________________________________________
//
class COrbweaverKumoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrbweaverKumoCard);
};

//____________________________________________________________________________
//
class COreGorgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COreGorgerCard);
};

//____________________________________________________________________________
//
class CSoulOfMagmaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulOfMagmaCard);
};

//____________________________________________________________________________
//
class CThiefOfHopeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThiefOfHopeCard);
};

//____________________________________________________________________________
//
class CHisokasDefianceCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CHisokasDefianceCard);
};

//____________________________________________________________________________
//
class CMelokuTheCloudedMirrorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMelokuTheCloudedMirrorCard);
};

//____________________________________________________________________________
//
class CSoratamiCloudskaterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoratamiCloudskaterCard);
};

//____________________________________________________________________________
//
class CSoratamiMirrorGuardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoratamiMirrorGuardCard);
};

//____________________________________________________________________________
//
class CSoratamiMirrorMageCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoratamiMirrorMageCard);
};

//____________________________________________________________________________
//
class CSoratamiRainshaperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoratamiRainshaperCard);
};

//____________________________________________________________________________
//
class CSoratamiSavantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoratamiSavantCard);
};

//____________________________________________________________________________
//
class CKitsuneRiftwalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKitsuneRiftwalkerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTellerOfTalesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTellerOfTalesCard);
};

//____________________________________________________________________________
//
class CHanaKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHanaKamiCard);
};

//____________________________________________________________________________
//
class CTheUnspeakableCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTheUnspeakableCard);
};

//____________________________________________________________________________
//
class CEerieProcessionCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CEerieProcessionCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHikariTwilightGuardianCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHikariTwilightGuardianCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CCloudcrestLakeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCloudcrestLakeCard);
};

//____________________________________________________________________________
//
class CLanternLitGraveyardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLanternLitGraveyardCard);
};

//____________________________________________________________________________
//
class CPinecrestRidgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPinecrestRidgeCard);
};

//____________________________________________________________________________
//
class CTranquilGardenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTranquilGardenCard);
};

//____________________________________________________________________________
//
class CWaterveilCavernCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWaterveilCavernCard);
};

//____________________________________________________________________________
//
class CMarrowGnawerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarrowGnawerCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class COrochiHatcheryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrochiHatcheryCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution(CAbilityAction* pAction) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHanabiBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHanabiBlastCard);
};

//____________________________________________________________________________
//
class CCranialExtractionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCranialExtractionCard);
};

//_____________________________________________________________________________
//
class CLongForgottenGoheiCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLongForgottenGoheiCard);
};

//_____________________________________________________________________________
//
class CBloodSpeakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodSpeakerCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBloodthirstyOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodthirstyOgreCard);

protected:
    CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGutwrencherOniCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGutwrencherOniCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMasakoTheHumorlessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasakoTheHumorlessCard);
};

//____________________________________________________________________________
//
class CKamiOfThePaintedRoadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfThePaintedRoadCard);

private:
	bool SetTriggerContext(CTriggeredGainKeywordAbility::TriggerContextType& triggerContext, 
									   CCard* pCard) const;
};

//____________________________________________________________________________
//
class CHorizonSeedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHorizonSeedCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPainwrackerOniCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPainwrackerOniCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CJunkyoBellCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJunkyoBellCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStrengthOfCedarsCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrengthOfCedarsCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBrutalDeceiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrutalDeceiverCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCallousDeceiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCallousDeceiverCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFeralDeceiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFeralDeceiverCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CHarshDeceiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarshDeceiverCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCruelDeceiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCruelDeceiverCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CEightAndAHalfTailsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEightAndAHalfTailsCard);
};

//____________________________________________________________________________
//
class CPiousKitsuneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPiousKitsuneCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class COtherworldlyJourneyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(COtherworldlyJourneyCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CKodamasReachCard : public CCard
{
	DECLARE_CARD_CSTOR(CKodamasReachCard);
};

//____________________________________________________________________________
//
class CGiftsUngivenCard : public CCard
{
	DECLARE_CARD_CSTOR(CGiftsUngivenCard);
};

//____________________________________________________________________________
//
class CKikiJikiMirrorBreakerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CKikiJikiMirrorBreakerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMyojinOfCleansingFireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyojinOfCleansingFireCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CMyojinOfInfiniteRageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyojinOfInfiniteRageCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CMyojinOfLifesWebCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyojinOfLifesWebCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CMyojinOfNightsReachCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyojinOfNightsReachCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CMyojinOfSeeingWindsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyojinOfSeeingWindsCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CGlimpseofNatureCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlimpseofNatureCard);
};

//____________________________________________________________________________
//
class CShimatsuTheBloodcloakedCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CShimatsuTheBloodcloakedCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSquelchCard : public CCard
{
	DECLARE_CARD_CSTOR(CSquelchCard);
};

//____________________________________________________________________________
//
class CHearthKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHearthKamiCard);
};

//____________________________________________________________________________
//
class CSerpentSkinCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSerpentSkinCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CHeartbeatOfSpringCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeartbeatOfSpringCard);

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
class CYoseiTheMorningStarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CYoseiTheMorningStarCard);

private:
	class CTriggeredYoseiAbility
		: public CTriggeredAbility<>
	{
	protected:
		CTriggeredYoseiAbility(CCard* pCard);
	
		OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
			const TriggerContextType& triggerContext,
			const TriggerInfo& info,
			BOOL bSetNames) const;

		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	};
};

//____________________________________________________________________________
//
class CHinderCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CHinderCard);
};

//____________________________________________________________________________
//
class CMysticRestraintsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMysticRestraintsCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CHankyuCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHankyuCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class COrochiEggwatcherCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(COrochiEggwatcherCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CNezumiShortfangCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CNezumiShortfangCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAkkiLavarunnerCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiLavarunnerCard);

private:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CBudokaGardenerCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CBudokaGardenerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBushiTenderfootCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CBushiTenderfootCard);

private:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CInitiateOfBloodCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CInitiateOfBloodCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CJushiApprenticeCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CJushiApprenticeCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGhostlyPrisonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGhostlyPrisonCard);
};

//____________________________________________________________________________
//
class CNezumiGraverobberCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CNezumiGraverobberCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStudentOfElementsCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CStudentOfElementsCard);

protected:
	void OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword);
	ListenerPtr<CCreatureKeyword::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CDevouringGreedCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDevouringGreedCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDevouringRageCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDevouringRageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNightDealingsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNightDealingsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt,
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, CPlayer* pPlayer, Damage damage) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKikuNightsFlowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKikuNightsFlowerCard);
};

//____________________________________________________________________________
//
class CHisokaMinamoSenseiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHisokaMinamoSenseiCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CYamabushisFlameCard : public CCard
{
	DECLARE_CARD_CSTOR(CYamabushisFlameCard);
};

//____________________________________________________________________________
//
class CYamabushisStormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CYamabushisStormCard);
};

//____________________________________________________________________________
//
class CBenBenAkkiHermitCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenBenAkkiHermitCard);
	
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CUyoSilentProphetCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUyoSilentProphetCard);
};

//____________________________________________________________________________
//
class CSamuraiOfThePaleCurtainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSamuraiOfThePaleCurtainCard);
};

//____________________________________________________________________________
//
class CManaSeismCard : public CCard
{
	DECLARE_CARD_CSTOR(CManaSeismCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBrothersYamazakiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrothersYamazakiCard);
};

//____________________________________________________________________________
//
class CMindblazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindblazeCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSoilshaperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoilshaperCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CGodoBanditWarlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodoBanditWarlordCard);

protected:
	BOOL_ bFirstAttack;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked);
	bool BeforeResolution(CAbilityAction* pAction);
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWickedAkubaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWickedAkubaCard);

protected:
	std::vector<int> pDamagedPlayers;

	class CWickedAkubaTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage);
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTatsumasaTheDragonsFangCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTatsumasaTheDragonsFangCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKashiTribeReaverCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CKashiTribeReaverCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CKashiTribeWarriorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKashiTribeWarriorsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class COrochiRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrochiRangerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//