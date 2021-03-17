#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBruteForceCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBruteForceCard);
};

//____________________________________________________________________________
//
class CBloodKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodKnightCard);
};

//____________________________________________________________________________
//
class CPyrohemiaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyrohemiaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSkirkShamanCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkShamanCard);
};

//____________________________________________________________________________
//
class CDamnationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDamnationCard);
};

//____________________________________________________________________________
//
class CRathiTrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRathiTrapperCard);
};

//____________________________________________________________________________
//
class CVampiricLinkCard : public CCard
{
	DECLARE_CARD_CSTOR(CVampiricLinkCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CMalachOfTheDawnCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CMalachOfTheDawnCard);
};

//____________________________________________________________________________
//
class CManaTitheCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CManaTitheCard);
};

//____________________________________________________________________________
//
class CReveredDeadCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CReveredDeadCard);
};

//____________________________________________________________________________
//
class CEssenceWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEssenceWardenCard);
};

//____________________________________________________________________________
//
class CLavacoreElementalCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CLavacoreElementalCard);
};

//____________________________________________________________________________
//
class CGaeasAnthemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGaeasAnthemCard);
};

//____________________________________________________________________________
//
class CHarmonizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CHarmonizeCard);
};

//____________________________________________________________________________
//
class CHealingLeavesCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHealingLeavesCard);
};

//____________________________________________________________________________
//
class CKeenSenseCard : public CCard
{
	DECLARE_CARD_CSTOR(CKeenSenseCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFrozenAEtherCard : public CCard
{
	DECLARE_CARD_CSTOR(CFrozenAEtherCard);
};

//____________________________________________________________________________
//
class CSerraSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraSphinxCard);
};

//____________________________________________________________________________
//
class CSaltfieldRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaltfieldRecluseCard);
};

//____________________________________________________________________________
//
class CBatteringSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBatteringSliverCard);
};

//____________________________________________________________________________
//
class CSynchronousSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSynchronousSliverCard);
};

//____________________________________________________________________________
//
class CSinewSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSinewSliverCard);
};

//____________________________________________________________________________
//
class CReflexSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReflexSliverCard);
};

//____________________________________________________________________________
//
class CSpittingSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpittingSliverCard);
};

//____________________________________________________________________________
//
class CMireBoaCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CMireBoaCard);
};

//____________________________________________________________________________
//
class CNeedlepeakSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeedlepeakSpiderCard);
};

//____________________________________________________________________________
//
class CGhostTacticianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostTacticianCard);
};

//____________________________________________________________________________
//
class CSunlanceCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSunlanceCard);
};

//____________________________________________________________________________
//
class CSaltblastCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSaltblastCard);
};

//____________________________________________________________________________
//
class CPrimalPlasmaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimalPlasmaCard);
};

//____________________________________________________________________________
//
class CGroundbreakerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGroundbreakerCard);
};

//____________________________________________________________________________
//
class CSulfurElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSulfurElementalCard);
};

//____________________________________________________________________________
//
class CRidgedKusiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRidgedKusiteCard);
};

//____________________________________________________________________________
//
class CMagusOfTheBazaarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheBazaarCard);
};

//____________________________________________________________________________
//
class CSealOfPrimordiumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSealOfPrimordiumCard);
};

//____________________________________________________________________________
//
class CWaningWurmCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CWaningWurmCard);
};

//____________________________________________________________________________
//
class CCalcidermCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CCalcidermCard);
};

//____________________________________________________________________________
//
class CCrovaxAscendantHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrovaxAscendantHeroCard);
};

//____________________________________________________________________________
//
class CAvenRiftwatcherCard : public CFlyingCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CAvenRiftwatcherCard);
};

//____________________________________________________________________________
//
class CSophicCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSophicCentaurCard);
};

//____________________________________________________________________________
//
class CHedgeTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CHedgeTrollCard);
};

//____________________________________________________________________________
//
class CWistfulThinkingCard : public CCard
{
	DECLARE_CARD_CSTOR(CWistfulThinkingCard);
};

//____________________________________________________________________________
//
class CBraidsConjurerAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBraidsConjurerAdeptCard);
};

//____________________________________________________________________________
//
class CWhitemaneLionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhitemaneLionCard);
};

//____________________________________________________________________________
//
class CDustElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDustElementalCard);
};

//____________________________________________________________________________
//
class CDustCoronaCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDustCoronaCard);
};

//____________________________________________________________________________
//
class CJeditOjanenOfEfravaCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CJeditOjanenOfEfravaCard);
};

//____________________________________________________________________________
//
class CStonecloakerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStonecloakerCard);
};

//____________________________________________________________________________
//
class CAEtherMembraneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAEtherMembraneCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CBogSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDeadwoodTreefolkCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CDeadwoodTreefolkCard);
};

//____________________________________________________________________________
//
class CDreamscapeArtistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamscapeArtistCard);
};

//____________________________________________________________________________
//
class CFaadiyahSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaadiyahSeerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMagusOfTheLibraryCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheLibraryCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CKeldonMaraudersCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CKeldonMaraudersCard);
};

//____________________________________________________________________________
//
class CMirriTheCursedCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMirriTheCursedCard);
};

//____________________________________________________________________________
//
class CMoltenFirebirdCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoltenFirebirdCard);
};

//____________________________________________________________________________
//
class CRadhaHeirToKeldCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CRadhaHeirToKeldCard);
};

//____________________________________________________________________________
//
class CStormfrontRidersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormfrontRidersCard);
};

//____________________________________________________________________________
//
class CTenebTheHarvesterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTenebTheHarvesterCard);
};

//____________________________________________________________________________
//
class COrosTheAvengerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COrosTheAvengerCard);
};

//____________________________________________________________________________
//
class CVoroshTheHunterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoroshTheHunterCard);
};

//____________________________________________________________________________
//
class CNumotTheDevastatorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNumotTheDevastatorCard);
};

//____________________________________________________________________________
//
class CDeadGoneCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeadGoneCard);
};

//____________________________________________________________________________
//
class CEvolutionCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CEvolutionCharmCard);
};

//____________________________________________________________________________
//
class CFirefrightMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFirefrightMageCard);
};

//____________________________________________________________________________
//
class CMidnightCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMidnightCharmCard);
};

//____________________________________________________________________________
//
class CPiracyCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CPiracyCharmCard);
};

//____________________________________________________________________________
//
class CRoughTumbleCard : public CCard
{
	DECLARE_CARD_CSTOR(CRoughTumbleCard);
};

//____________________________________________________________________________
//
class CGossamerPhantasmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGossamerPhantasmCard);
};

//____________________________________________________________________________
//
class CSerendibSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerendibSorcererCard);
};

//____________________________________________________________________________
//
class CMagusOfTheCoffersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheCoffersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKavuPredatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuPredatorCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
//	TriggeredAbility* m_pTriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBlightspeakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightspeakerCard);

protected:
	CCardFilter m_CardFilter;
};

//________________________________________________________________________________
//
class CCauterySliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCauterySliverCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CCitanulWoodreadersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCitanulWoodreadersCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CDarkheartSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkheartSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CHammerheimDeadeyeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHammerheimDeadeyeCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CNecroticSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecroticSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CPoulticeSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPoulticeSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CPouncingWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPouncingWurmCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CStingscourgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStingscourgerCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CTimbermareCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CTimbermareCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CUktabiDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUktabiDrakeCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CMantleOfLeadershipCard : public CCard
{
	DECLARE_CARD_CSTOR(CMantleOfLeadershipCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CPongifyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPongifyCard);
};

//____________________________________________________________________________
//
class CMycologistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMycologistCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPallidMycodermCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CPallidMycodermCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPsychotropeThallidCard: public CCreatureCard
{
    DECLARE_CARD_CSTOR(CPsychotropeThallidCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVitasporeThallidCard: public CCreatureCard
{
    DECLARE_CARD_CSTOR(CVitasporeThallidCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDeadlyGrubCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CDeadlyGrubCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CChronozoaCard : public CFlyingCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CChronozoaCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CExtirpateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CExtirpateCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFatalFrenzyCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFatalFrenzyCard);
};

//____________________________________________________________________________
//
class CJodahsAvengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJodahsAvengerCard);
};

//____________________________________________________________________________
//
class CUtopiaVowCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CUtopiaVowCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility5(CCard* pCard);
};

//___________________________________________________________________________
//
class CSimianSpiritGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimianSpiritGuideCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CImpsMischiefCard : public CCard
{
	DECLARE_CARD_CSTOR(CImpsMischiefCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAnaBattlemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnaBattlemageCard);

protected:
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
private:
	CManaCost	m_KickerCost1;
	CManaCost	m_KickerCost2;
};

//____________________________________________________________________________
//
class CRebufftheWickedCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CRebufftheWickedCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDawnCharmCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDawnCharmCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMerfolkThaumaturgistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkThaumaturgistCard);
};

//____________________________________________________________________________
//
class CBoomBustCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoomBustCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
/*//
class CTemporalExtortionCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemporalExtortionCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};
*/
//____________________________________________________________________________
//
class CMagusoftheTabernacleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusoftheTabernacleCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CUrborgTombOfYawgmothCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrborgTombOfYawgmothCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CDormantSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDormantSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSerrasBoonCard : public CCard
{
	DECLARE_CARD_CSTOR(CSerrasBoonCard);
};

//___________________________________________________________________________
//
class CDismalFailureCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDismalFailureCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CPorphyryNodesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPorphyryNodesCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRecklessWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessWurmCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CSuspendCreatureCard : public CCreatureCard
{
protected:
	CSuspendCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 LPCTSTR suspendstrCostText,
									 int suspendNumber);

	virtual ~CSuspendCreatureCard() {}


private:
	CCardFlagModifier m_CardFlagModifier1;
protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	typedef
		TTriggeredAbility< CTriggeredSuspendCastAbility, CWhenTimeCounterRemoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	bool SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;

	CSuspendAbility* m_pSuspendAbility;
};

//____________________________________________________________________________
//
class CAeonChroniclerCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CAeonChroniclerCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CBigGameHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBigGameHunterCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CBenalishCommanderCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishCommanderCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CDetritivoreCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CDetritivoreCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CSuspendCard : public CCard
{
protected:
	CSuspendCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,									 
									 LPCTSTR suspendstrCostText,
									 int suspendNumber);
	virtual ~CSuspendCard() {}

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	typedef
		TTriggeredAbility< CTriggeredSuspendCastAbility, CWhenTimeCounterRemoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	bool SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CDichotomancyCard : public CSuspendCard 
{
	DECLARE_CARD_CSTOR(CDichotomancyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHeroesRememberedCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CHeroesRememberedCard);
};

//____________________________________________________________________________
//
class CGiantDustwaspCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantDustwaspCard);
};

//____________________________________________________________________________
//
class CShivanMeteorCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CShivanMeteorCard);
};

//____________________________________________________________________________
//
class CRiftmarkedKnightCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CRiftmarkedKnightCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CRoilingHorrorCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CRoilingHorrorCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CShadeOfTrokairCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CShadeOfTrokairCard);
};

//____________________________________________________________________________
//
class CVeilingOddityCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CVeilingOddityCard);

private:
	bool SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CMelancholyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMelancholyCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
									CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAkromaAngelofFuryCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAkromaAngelofFuryCard);
};

//____________________________________________________________________________
//
class CRiptidePilfererCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptidePilfererCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
								CPlayer* pPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CEnslaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CEnslaveCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CControlEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CTidewalkerCard : public CCreatureCard, CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CTidewalkerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CCradleToGraveCard : public CCard
{
	DECLARE_CARD_CSTOR(CCradleToGraveCard);

protected:
	class CCradleToGraveTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class CShivanWumpusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanWumpusCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void Advance(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CCircleOfAfflictionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCircleOfAfflictionCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage);
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;
};

//____________________________________________________________________________
//
class CErraticMutationCard : public CCard
{
	DECLARE_CARD_CSTOR(CErraticMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVoidstoneGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoidstoneGargoyleCard);
};

//____________________________________________________________________________
//
/*
class CTimecraftingCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimecraftingCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	class CTimecraftingTargeting1 : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
	class CTimecraftingTargeting2 : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};
*/
//___________________________________________________________________________
//
class CDuneriderOutlawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuneriderOutlawCard);

protected:
	BOOL_ bHitOpponent;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CNode* pToNode);
	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CPlayer* pToPlayer, Damage damage);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
						    CNode* pToNode);
};

//____________________________________________________________________________
//
class CFreneticSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFreneticSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
};

//____________________________________________________________________________
//
class CHuntingWildsCard : public CCard
{
	DECLARE_CARD_CSTOR(CHuntingWildsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;	
	CManaCost m_KickerCost;
};

//____________________________________________________________________________
//
