#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CEiganjoFreeRidersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEiganjoFreeRidersCard);
};

//____________________________________________________________________________
//
class CAdamaroFirstToDesireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAdamaroFirstToDesireCard);
};

//____________________________________________________________________________
//
class CAkkiDrillmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiDrillmasterCard);
};

//____________________________________________________________________________
//
class CArabaMothriderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArabaMothriderCard);
};

//____________________________________________________________________________
//
class CArashiTheSkyAsunderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArashiTheSkyAsunderCard);
};

//____________________________________________________________________________
//
class CDeathknellKamiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathknellKamiCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGhostLitNourisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostLitNourisherCard);
};

//____________________________________________________________________________
//
class CGhostLitRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostLitRaiderCard);
};

//____________________________________________________________________________
//
class CGhostLitRedeemerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostLitRedeemerCard);
};

//____________________________________________________________________________
//
class CGhostLitStalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostLitStalkerCard);
};

//____________________________________________________________________________
//
class CGhostLitWarderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostLitWarderCard);
};

//____________________________________________________________________________
//
class CGlitterfangCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGlitterfangCard);
};

//____________________________________________________________________________
//
class CHandOfCrueltyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHandOfCrueltyCard);
};

//____________________________________________________________________________
//
class CHandOfHonorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHandOfHonorCard);
};

//____________________________________________________________________________
//
class CIizukaTheRuthlessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIizukaTheRuthlessCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CInnerChamberGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInnerChamberGuardCard);
};

//____________________________________________________________________________
//
class CJiwariTheEarthAflameCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJiwariTheEarthAflameCard);
};

//____________________________________________________________________________
//
class CKamiOfEmptyGravesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfEmptyGravesCard);
};

//____________________________________________________________________________
//
class CKamiOfTheCrescentMoonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTheCrescentMoonCard);
};

//____________________________________________________________________________
//
class CKamiOfTheTendedGardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTheTendedGardenCard);
};

//____________________________________________________________________________
//
class CKitsuneDawnbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKitsuneDawnbladeCard);
};

//____________________________________________________________________________
//
class CKurosTakenCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CKurosTakenCard);
};

//____________________________________________________________________________
//
class CMasumaroFirstToLiveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasumaroFirstToLiveCard);
};

//____________________________________________________________________________
//
class CMoonwingMothCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonwingMothCard);
};

//____________________________________________________________________________
//
class CNightsoilKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightsoilKamiCard);
};

//____________________________________________________________________________
//
class COniOfWildPlacesCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(COniOfWildPlacesCard);
};

//____________________________________________________________________________
//
class CPromisedKannushiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPromisedKannushiCard);
};

//____________________________________________________________________________
//
class CRazorjawOniCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorjawOniCard);
};

//____________________________________________________________________________
//
class CRekiTheHistoryOfKamigawaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRekiTheHistoryOfKamigawaCard);
};

//____________________________________________________________________________
//
class CRoninCavekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoninCavekeeperCard);
};

//____________________________________________________________________________
//
class CSakuraTribeScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSakuraTribeScoutCard);
};

//____________________________________________________________________________
//
class CShinenOfFearsChillCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShinenOfFearsChillCard);
};

//____________________________________________________________________________
//
class CShinenOfFlightsWingsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShinenOfFlightsWingsCard);
};

//____________________________________________________________________________
//
class CShinenOfFurysFireCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CShinenOfFurysFireCard);
};

//____________________________________________________________________________
//
class CShinenOfLifesRoarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShinenOfLifesRoarCard);
};

//____________________________________________________________________________
//
class CShinenOfStarsLightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CShinenOfStarsLightCard);
};

//____________________________________________________________________________
//
class CSkullCollectorCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSkullCollectorCard);
};

//____________________________________________________________________________
//
class CStampedingSerowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStampedingSerowCard);
};

//____________________________________________________________________________
//
class CToriiWatchwardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CToriiWatchwardCard);
};

//____________________________________________________________________________
//
class CMikokoroCenterOfTheSeaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMikokoroCenterOfTheSeaCard);
};

//____________________________________________________________________________
//
class COboroPalaceInTheCloudsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COboroPalaceInTheCloudsCard);
};

//____________________________________________________________________________
//
class CManrikiGusariCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManrikiGusariCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSoratamiCloudChariotCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoratamiCloudChariotCard);
};

//____________________________________________________________________________
//
class CCaptiveFlameCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCaptiveFlameCard);
};

//____________________________________________________________________________
//
class CDenseCanopyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDenseCanopyCard);
};

//____________________________________________________________________________
//
class CMoltingSkinCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoltingSkinCard);
};

//____________________________________________________________________________
//
class CReverenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CReverenceCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSeedTheLandCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSeedTheLandCard);
};

//____________________________________________________________________________
//
class CAEtherShockwaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CAEtherShockwaveCard);
};

//____________________________________________________________________________
//
class CDeathDeniedCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathDeniedCard);
};

//____________________________________________________________________________
//
class CGazeOfAdamaroCard : public CCard
{
	DECLARE_CARD_CSTOR(CGazeOfAdamaroCard);
};

//____________________________________________________________________________
//
class COneWithNothingCard : public CCard
{
	DECLARE_CARD_CSTOR(COneWithNothingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPathOfAngersFlameCard : public CCard
{
	DECLARE_CARD_CSTOR(CPathOfAngersFlameCard);
};

//____________________________________________________________________________
//
class CDosansOldestChantCard : public CCard
{
	DECLARE_CARD_CSTOR(CDosansOldestChantCard);
};

//____________________________________________________________________________
//
class CFeralLightningCard : public CCard
{
	DECLARE_CARD_CSTOR(CFeralLightningCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPresenceOfTheWiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CPresenceOfTheWiseCard);
};

//____________________________________________________________________________
//
class CSeekTheHorizonCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSeekTheHorizonCard);
};

//____________________________________________________________________________
//
class CSpiralingEmbersCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiralingEmbersCard);
};

//____________________________________________________________________________
//
class CSunderFromWithinCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSunderFromWithinCard);
};

//____________________________________________________________________________
//
class CKagemarosClutchCard : public CCard
{
	DECLARE_CARD_CSTOR(CKagemarosClutchCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CGodosIrregularsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodosIrregularsCard);
};

//____________________________________________________________________________
//
class CAkkiUnderlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiUnderlingCard);
};

//____________________________________________________________________________
//
class CDeathmaskNezumiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathmaskNezumiCard);
};

//____________________________________________________________________________
//
class CDeathOfAThousandStingsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathOfAThousandStingsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CExileIntoDarknessCard : public CCard
{
	DECLARE_CARD_CSTOR(CExileIntoDarknessCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAkutaBornofAshCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAkutaBornofAshCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
/* protected:
    BOOL CanPlay(BOOL bIncludeTricks); */
};

//____________________________________________________________________________
//
class CMagaTraitortoMortalsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagaTraitortoMortalsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility < CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWineOfBloodAndIronCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWineOfBloodAndIronCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFootstepsOfTheGoryoCard : public CCard
{
	DECLARE_CARD_CSTOR(CFootstepsOfTheGoryoCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMirentheMoaningWellCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMirentheMoaningWellCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CONaginataCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CONaginataCard);
};

//____________________________________________________________________________
//
class CBriarknitKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBriarknitKamiCard);
};

//____________________________________________________________________________
//
class CHaruOnnaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHaruOnnaCard);
};

//____________________________________________________________________________
//
class CKemuriOnnaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKemuriOnnaCard);
};

//____________________________________________________________________________
//
class CKiriOnnaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKiriOnnaCard);
};

//____________________________________________________________________________
//
class CNikkoOnnaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNikkoOnnaCard);
};

//____________________________________________________________________________
//
class CYukiOnnaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYukiOnnaCard);
};

//____________________________________________________________________________
//
class CMoonbowIllusionistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonbowIllusionistCard);
};

//____________________________________________________________________________
//
class COboroBreezecallerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COboroBreezecallerCard);
};

//____________________________________________________________________________
//
class CSoramaroFirstToDreamCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoramaroFirstToDreamCard);
};

//____________________________________________________________________________
//
class CEbonyOwlNetsukeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEbonyOwlNetsukeCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class COverwhelmingIntellectCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(COverwhelmingIntellectCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKatakiWarsWageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKatakiWarsWageCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CDescendantOfMasumaroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDescendantOfMasumaroCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDreamcatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamcatcherCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CElderPineOfJukaiCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CElderPineOfJukaiCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFiddleheadKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFiddleheadKamiCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CKitsuneBonesetterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKitsuneBonesetterCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CKitsuneLoreweaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKitsuneLoreweaverCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class COboroEnvoyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COboroEnvoyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRavingOniSlaveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRavingOniSlaveCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSokenzanSpellbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSokenzanSpellbladeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIvoryCraneNetsukeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIvoryCraneNetsukeCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CScrollOfOriginsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScrollOfOriginsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPromiseOfBunreiCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPromiseOfBunreiCard);

protected:
	bool CPromiseOfBunreiCard::BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHidetsugusSecondRiteCard : public CCard
{
	DECLARE_CARD_CSTOR(CHidetsugusSecondRiteCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CInnerCalmOuterStrengthCard : public CCard
{
	DECLARE_CARD_CSTOR(CInnerCalmOuterStrengthCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CInnerFireCard : public CCard
{
	DECLARE_CARD_CSTOR(CInnerFireCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKikusShadowCard : public CCard
{
	DECLARE_CARD_CSTOR(CKikusShadowCard);
};

//____________________________________________________________________________
//
class CThoughtsOfRuinCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtsOfRuinCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CInameAsOneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInameAsOneCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CMeasureOfWickednessCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMeasureOfWickednessCard);
};

//____________________________________________________________________________
//
class CGnatMiserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGnatMiserCard);
};

//____________________________________________________________________________
//
class CLocustMiserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLocustMiserCard);
};

//____________________________________________________________________________
//
class CMinamoScrollkeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinamoScrollkeeperCard);
};

//____________________________________________________________________________
//
class CTrustedAdvisorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrustedAdvisorCard);
};

//____________________________________________________________________________
//
class CTombOfUramiCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTombOfUramiCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSokenzanRenegadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSokenzanRenegadeCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAyumiTheLastVisitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAyumiTheLastVisitorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CErayoSoratamiAscendantCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CErayoSoratamiAscendantCard);

private:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CHomuraHumanAscendantCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CHomuraHumanAscendantCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKuonOgreAscendantCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CKuonOgreAscendantCard);

private:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CRuneTailKitsuneAscendantCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CRuneTailKitsuneAscendantCard);

private:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCutTheEarthlyBondCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCutTheEarthlyBondCard);
};

//____________________________________________________________________________
//
class CIdeasUnboundCard : public CCard
{
	DECLARE_CARD_CSTOR(CIdeasUnboundCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CFreedFromTheRealCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFreedFromTheRealCard);
};

//____________________________________________________________________________
//
class CBounteousKirinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBounteousKirinCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CCelestialKirinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCelestialKirinCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast >  TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CKagemaroFirstToSufferCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKagemaroFirstToSufferCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKiyomaroFirstToStandCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKiyomaroFirstToStandCard);

protected:
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::DamageEventCallback, 
								&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CCloudhoofKirinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudhoofKirinCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSpellCast >  TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CInfernalKirinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CInfernalKirinCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSpellCast >  TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSkyfireKirinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyfireKirinCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSpellCast >  TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CChoiceOfDamnationsCard : public CCard
{
	DECLARE_CARD_CSTOR(CChoiceOfDamnationsCard);
protected:
	CSelectionSupport m_NumberSelection;
	CSelectionSupport m_DamnationSelection;
	void SelectionFunction (int Base, CPlayer* pTarget);
	bool BeforeResolution (CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnDamnationSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBarrelDownSokenzanCard : public CCard
{
	DECLARE_CARD_CSTOR(CBarrelDownSokenzanCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CChargeAcrossTheArabaCard : public CCard
{
	DECLARE_CARD_CSTOR(CChargeAcrossTheArabaCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPlowThroughReitoCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlowThroughReitoCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSinkIntoTakenumaCard : public CCard
{
	DECLARE_CARD_CSTOR(CSinkIntoTakenumaCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRallyTheHordeCard : public CCard
{
	DECLARE_CARD_CSTOR(CRallyTheHordeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CBloodClockCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodClockCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_PaymentSelection;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CBurningEyeZuberaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBurningEyeZuberaCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	bool CBurningEyeZuberaCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//___________________________________________________________________________
//
class CRushingTideZuberaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRushingTideZuberaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//___________________________________________________________________________
//
class CAshesOfTheFallenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAshesOfTheFallenCard);

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
class CDescendantOfSoramaroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDescendantOfSoramaroCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class COppressiveWillCard : public CCard
{
	DECLARE_CARD_CSTOR(COppressiveWillCard);

protected:
	class COppressiveWillAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		COppressiveWillAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~COppressiveWillAbility() {}
	};
};

//____________________________________________________________________________
//
class CSekkiSeasonsGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSekkiSeasonsGuideCard);

protected:
	CCardFilter m_CardFilter;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CSekkiSeasonsGuideCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CPureIntentionsCard : public CCard
{
	DECLARE_CARD_CSTOR(CPureIntentionsCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
