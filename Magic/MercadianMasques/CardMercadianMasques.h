#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CEyeOfRamosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEyeOfRamosCard);
};

//____________________________________________________________________________
//
class CHeartOfRamosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeartOfRamosCard);
};

//____________________________________________________________________________
//
class CHornOfRamosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHornOfRamosCard);
};

//____________________________________________________________________________
//
class CSkullOfRamosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkullOfRamosCard);
};

//____________________________________________________________________________
//
class CToothOfRamosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CToothOfRamosCard);
};

//____________________________________________________________________________
//
class CHengeOfRamosCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHengeOfRamosCard);
};

//____________________________________________________________________________
//
class CGerrardSIrregularsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGerrardSIrregularsCard);
};

//____________________________________________________________________________
//
class CMagistratesScepterCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMagistratesScepterCard);
};

//____________________________________________________________________________
//
class CRishadanPortCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRishadanPortCard);
};

//____________________________________________________________________________
//
class CSpidersilkArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpidersilkArmorCard);
};

//____________________________________________________________________________
//
class CLastBreathCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CLastBreathCard);
};

//____________________________________________________________________________
//
class CAlabasterWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabasterWallCard);
};

//____________________________________________________________________________
//
class CAlleyGriftersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlleyGriftersCard);
};

//____________________________________________________________________________
//
class CBalloonPeddlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalloonPeddlerCard);
};

//____________________________________________________________________________
//
class CBattleRampartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleRampartCard);
};

//____________________________________________________________________________
//
class CBattleSquadronCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleSquadronCard);
};

//____________________________________________________________________________
//
class CBlasterMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlasterMageCard);
};

//____________________________________________________________________________
//
class CBlockadeRunnerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBlockadeRunnerCard);
};

//____________________________________________________________________________
//
class CBoaConstrictorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBoaConstrictorCard);
};

//____________________________________________________________________________
//
class CBogSmugglersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBogSmugglersCard);
};

//____________________________________________________________________________
//
class CBogWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogWitchCard);
};

//____________________________________________________________________________
//
class CCacklingWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCacklingWitchCard);
};

//____________________________________________________________________________
//
class CCateranBruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCateranBruteCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCateranEnforcerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCateranEnforcerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCateranKidnappersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCateranKidnappersCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCateranOverlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCateranOverlordCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCateranPersuaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCateranPersuaderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCateranSlaverCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CCateranSlaverCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCausticWaspsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCausticWaspsCard);
};

//____________________________________________________________________________
//
class CCavernCrawlerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCavernCrawlerCard);
};

//____________________________________________________________________________
//
class CCeremonialGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCeremonialGuardCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CChamberedNautilusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChamberedNautilusCard);
};

//____________________________________________________________________________
//
class CCharmPeddlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCharmPeddlerCard);
};

//____________________________________________________________________________
//
class CCharmedGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCharmedGriffinCard);
};

//____________________________________________________________________________
//
class CChoArrimAlchemistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChoArrimAlchemistCard);
};

//____________________________________________________________________________
//
class CChoArrimBruiserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChoArrimBruiserCard);
};

//____________________________________________________________________________
//
class CCinderElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderElementalCard);
};

//____________________________________________________________________________
//
class CCorruptOfficialCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCorruptOfficialCard);
};

//____________________________________________________________________________
//
class CDartingMerfolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDartingMerfolkCard);
};

//____________________________________________________________________________
//
class CDawnstriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDawnstriderCard);
};

//____________________________________________________________________________
//
class CDeepwoodDrummerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepwoodDrummerCard);
};

//____________________________________________________________________________
//
class CDeepwoodTantivCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepwoodTantivCard);
};

//____________________________________________________________________________
//
class CDeepwoodWolverineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepwoodWolverineCard);
};

//____________________________________________________________________________
//
class CDelraichCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDelraichCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDevoutWitnessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevoutWitnessCard);
};

//____________________________________________________________________________
//
class CDrakeHatchlingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDrakeHatchlingCard);
};

//____________________________________________________________________________
//
class CEnslavedHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnslavedHorrorCard);
};

//____________________________________________________________________________
//
class CFountainWatchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFountainWatchCard);
};

//____________________________________________________________________________
//
class CFreshVolunteersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFreshVolunteersCard);
};

//____________________________________________________________________________
//
class CGlowingAnemoneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlowingAnemoneCard);
};

//____________________________________________________________________________
//
class CHowlingWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHowlingWolfCard);
};

//____________________________________________________________________________
//
class CJhovallQueenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJhovallQueenCard);
};

//____________________________________________________________________________
//
class CJhovallRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJhovallRiderCard);
};

//____________________________________________________________________________
//
class CKrisMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrisMageCard);
};

//____________________________________________________________________________
//
class CKyrenGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKyrenGliderCard);
};

//____________________________________________________________________________
//
class CKyrenSniperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKyrenSniperCard);
};

//____________________________________________________________________________
//
class CLightningHoundsCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CLightningHoundsCard);
};

//____________________________________________________________________________
//
class CLithophageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLithophageCard);
};

//____________________________________________________________________________
//
class CLumberingSatyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLumberingSatyrCard);
};

//____________________________________________________________________________
//
class CMisshapenFiendCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMisshapenFiendCard);
};

//____________________________________________________________________________
//
class CMoltingHarpyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoltingHarpyCard);
};

//____________________________________________________________________________
//
class CNightwindGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNightwindGliderCard);
};

//____________________________________________________________________________
//
class CNotoriousAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNotoriousAssassinCard);
};

//____________________________________________________________________________
//
class COvertakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COvertakerCard);
};

//____________________________________________________________________________
//
class CPangosaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPangosaurCard);
};

//____________________________________________________________________________
//
class CPiousWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPiousWarriorCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CInstigatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInstigatorCard);
};

//____________________________________________________________________________
//
class CPortInspectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPortInspectorCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CQuagmireLampreyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuagmireLampreyCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CRamosianCaptainCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRamosianCaptainCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRamosianCommanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRamosianCommanderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRamosianLieutenantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRamosianLieutenantCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRamosianSergeantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRamosianSergeantCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRamosianSkyMarshalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRamosianSkyMarshalCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRampartCrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRampartCrawlerCard);
};

//____________________________________________________________________________
//
class CRappellingScoutsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRappellingScoutsCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CReveredElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReveredElderCard);
};

//____________________________________________________________________________
//
class CRishadanAirshipCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRishadanAirshipCard);
};

//____________________________________________________________________________
//
class CRobberFlyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRobberFlyCard);
};

//____________________________________________________________________________
//
class CRushwoodElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRushwoodElementalCard);
};

//____________________________________________________________________________
//
class CRushwoodHerbalistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRushwoodHerbalistCard);
};

//____________________________________________________________________________
//
class CSacredPreyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSacredPreyCard);
};

//____________________________________________________________________________
//
class CSaprazzanBailiffCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaprazzanBailiffCard);
};

//____________________________________________________________________________
//
class CSaprazzanHeirCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaprazzanHeirCard);
};

//____________________________________________________________________________
//
class CSaprazzanOutriggerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaprazzanOutriggerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSaprazzanRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaprazzanRaiderCard);
};

//____________________________________________________________________________
//
class CSeismicMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeismicMageCard);
};

//____________________________________________________________________________
//
class CSilentAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentAssassinCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSilvergladeElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilvergladeElementalCard);
};

//____________________________________________________________________________
//
class CSilvergladePathfinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilvergladePathfinderCard);
};

//____________________________________________________________________________
//
class CSkulkingFugitiveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkulkingFugitiveCard);
};

//____________________________________________________________________________
//
class CSnortingGahrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnortingGahrCard);
};

//____________________________________________________________________________
//
class CStingingBarrierCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CStingingBarrierCard);
};

//____________________________________________________________________________
//
class CStrongarmThugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongarmThugCard);
};

//____________________________________________________________________________
//
class CTaskForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTaskForceCard);
};

//____________________________________________________________________________
//
class CThermalGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThermalGliderCard);
};

//____________________________________________________________________________
//
class CThrashingWumpusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrashingWumpusCard);
};

//____________________________________________________________________________
//
class CTonicPeddlerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CTonicPeddlerCard);
};

//____________________________________________________________________________
//
class CUndertakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndertakerCard);
};

//____________________________________________________________________________
//
class CVenomousDragonflyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVenomousDragonflyCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CVineDryadCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CVineDryadCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWallOfDistortionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfDistortionCard);
};

//____________________________________________________________________________
//
class CWaterfrontBouncerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWaterfrontBouncerCard);
};

//____________________________________________________________________________
//
class CWildJhovallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildJhovallCard);
};

//____________________________________________________________________________
//
class CCrenellatedWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrenellatedWallCard);
};

//____________________________________________________________________________
//
class CHengeGuardianCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CHengeGuardianCard);
};

//____________________________________________________________________________
//
class CDustBowlCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDustBowlCard);
};

//____________________________________________________________________________
//
class CHighMarketCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHighMarketCard);
};

//____________________________________________________________________________
//
class CIronLanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIronLanceCard);
};

//____________________________________________________________________________
//
class CPanaceaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPanaceaCard);
};

//____________________________________________________________________________
//
class CPowerMatrixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPowerMatrixCard);
};

//____________________________________________________________________________
//
class CPufferExtractCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPufferExtractCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRishadanPawnshopCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRishadanPawnshopCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CWorryBeadsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWorryBeadsCard);
};

//____________________________________________________________________________
//
class CArmisticeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArmisticeCard);
};

//____________________________________________________________________________
//
class CBriarPatchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBriarPatchCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CBuoyancyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBuoyancyCard);
};

//____________________________________________________________________________
//
class CCaveSenseCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCaveSenseCard);
};

//____________________________________________________________________________
//
class CCloseQuartersCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCloseQuartersCard);
};

//____________________________________________________________________________
//
class CDiplomaticImmunityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDiplomaticImmunityCard);
};

//____________________________________________________________________________
//
class CEmbargoCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmbargoCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFerocityCard : public CCard
{
	DECLARE_CARD_CSTOR(CFerocityCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFlamingSwordCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFlamingSwordCard);
};

//____________________________________________________________________________
//
class CFuriousAssaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFuriousAssaultCard);
};

//____________________________________________________________________________
//
class CHauntedCrossroadsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHauntedCrossroadsCard);
};

//____________________________________________________________________________
//
class CHighSeasCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHighSeasCard);
};

//____________________________________________________________________________
//
class CCrackdownCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrackdownCard);
};

//____________________________________________________________________________
//
class CIntimidationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIntimidationCard);
};

//____________________________________________________________________________
//
class CInviolabilityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CInviolabilityCard);
};

//____________________________________________________________________________
//
class CKyrenNegotiationsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKyrenNegotiationsCard);
};

//____________________________________________________________________________
//
class CLeyLineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeyLineCard);
};

//____________________________________________________________________________
//
class CLiabilityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLiabilityCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMaggotTherapyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMaggotTherapyCard);
};

//____________________________________________________________________________
//
class CMagistratesVetoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMagistratesVetoCard);
};

//____________________________________________________________________________
//
class CMoonlitWakeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoonlitWakeCard);
};

//____________________________________________________________________________
//
class CMuzzleCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMuzzleCard);
};

//____________________________________________________________________________
//
class CPutrefactionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPutrefactionCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPretendersClaimCard : public CCard
{
	DECLARE_CARD_CSTOR(CPretendersClaimCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSecurityDetailCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSecurityDetailCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSnakePitCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSnakePitCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSoulChannelingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulChannelingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSqueezeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSqueezeCard);
};

//____________________________________________________________________________
//
class CStatecraftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStatecraftCard);
};

//____________________________________________________________________________
//
class CSustenanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSustenanceCard);
};

//____________________________________________________________________________
//
class CTigerClawsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTigerClawsCard);
};

//____________________________________________________________________________
//
class CUphillBattleCard : public CCard
{
	DECLARE_CARD_CSTOR(CUphillBattleCard);
};

//____________________________________________________________________________
//
class CCrashCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrashCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHoodwinkCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHoodwinkCard);
};

//____________________________________________________________________________
//
class CMisdirectionCard : public CCard
{
	DECLARE_CARD_CSTOR(CMisdirectionCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CReverentMantraCard : public CCard
{
	DECLARE_CARD_CSTOR(CReverentMantraCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSoothingBalmCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSoothingBalmCard);
};

//____________________________________________________________________________
//
class CThunderclapCard : public CCard
{
	DECLARE_CARD_CSTOR(CThunderclapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWarpathCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CWarpathCard);
};

//____________________________________________________________________________
//
class CCateranSummonsCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CCateranSummonsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCaveInCard : public CCard
{
	DECLARE_CARD_CSTOR(CCaveInCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPulverizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CPulverizeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSpectersWailCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpectersWailCard);
};

//____________________________________________________________________________
//
class CUnmaskCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnmaskCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter1;
};

//____________________________________________________________________________
//
class CGushCard : public CCard
{
	DECLARE_CARD_CSTOR(CGushCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSnuffOutCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSnuffOutCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CInvigorateCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CInvigorateCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CThwartCard : public CCard
{
	DECLARE_CARD_CSTOR(CThwartCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHickoryWoodlotCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CHickoryWoodlotCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                           const CManaProductionAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPeatBogCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CPeatBogCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                           const CManaProductionAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CRemoteFarmCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CRemoteFarmCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                           const CManaProductionAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSandstoneNeedleCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CSandstoneNeedleCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                           const CManaProductionAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CSaprazzanSkerryCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CSaprazzanSkerryCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
                           const CManaProductionAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHiredGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHiredGiantCard);
};

//____________________________________________________________________________
//
class CIgnobleSoldierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIgnobleSoldierCard);
};

//____________________________________________________________________________
//
class CAncestralMaskCard : public CCard
{
	DECLARE_CARD_CSTOR(CAncestralMaskCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
//class CRighteousIndignationCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CRighteousIndignationCard);
//
//protected:
//	CCardFilter m_CardFilter;
//};
//
////____________________________________________________________________________
////
class CBrawlCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrawlCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CShovingMatchCard : public CCard
{
	DECLARE_CARD_CSTOR(CShovingMatchCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CNetherSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNetherSpiritCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;    
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCustomsDepotCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCustomsDepotCard);
};

//____________________________________________________________________________
//
class CVendettaCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVendettaCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

};

//____________________________________________________________________________
//
class CTidalBoreCard : public CCard
{
	DECLARE_CARD_CSTOR(CTidalBoreCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBlackMarketCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlackMarketCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CChoArrimLegateCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CChoArrimLegateCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CDeepwoodElderCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CDeepwoodElderCard);
};

//____________________________________________________________________________
//
class CDeepwoodLegateCard : public CPumpCreatureCard
{
    DECLARE_CARD_CSTOR(CDeepwoodLegateCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CErithizonCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CErithizonCard);
};

//____________________________________________________________________________
//
class CKyrenLegateCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CKyrenLegateCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CLungeCard : public CCard
{
    DECLARE_CARD_CSTOR(CLungeCard);
};

//____________________________________________________________________________
//
class CMisstepCard : public CCard
{
	DECLARE_CARD_CSTOR(CMisstepCard);

//protected:
//	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COrimsCureCard : public CCard
{
    DECLARE_CARD_CSTOR(COrimsCureCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRamosianRallyCard : public CCard
{
    DECLARE_CARD_CSTOR(CRamosianRallyCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRouseCard : public CCard
{
    DECLARE_CARD_CSTOR(CRouseCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRushwoodLegateCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRushwoodLegateCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CSaberAntsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaberAntsCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CSaprazzanLegateCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSaprazzanLegateCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CLandGrantCard : public CCard
{
	DECLARE_CARD_CSTOR(CLandGrantCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSpontaneousGenerationCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpontaneousGenerationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVernalEquinoxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVernalEquinoxCard);
};

//____________________________________________________________________________
//
class CArrestCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CArrestCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGhoulsFeastCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CGhoulsFeastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CForcedMarchCard : public CCard
{
	DECLARE_CARD_CSTOR(CForcedMarchCard);
};

//____________________________________________________________________________
//
class CMomentOfSilenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CMomentOfSilenceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//_________________________________________________________________
//
class CStaminaCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStaminaCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CTowerOfTheMagistrateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTowerOfTheMagistrateCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFountainOfChoCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFountainOfChoCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMercadianBazaarCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMercadianBazaarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRushwoodGroveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRushwoodGroveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSaprazzanCoveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSaprazzanCoveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSubterraneanHangarCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSubterraneanHangarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBloodHoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodHoundCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CInsubordinationCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CInsubordinationCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//___________________________________________________________________________
//
class CSoothsayingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoothsayingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBifurcateCard : public CCard
{
	DECLARE_CARD_CSTOR(CBifurcateCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWaveofReckoningCard : public CCard
{
	DECLARE_CARD_CSTOR(CWaveofReckoningCard);
};

//____________________________________________________________________________
//
class CTectonicBreakCard : public CCard
{
	DECLARE_CARD_CSTOR(CTectonicBreakCard);

protected:
	typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CHammerMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHammerMageCard);
};

//____________________________________________________________________________
//
class CPuppetsVerdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CPuppetsVerdictCard);
protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBloodOathCard : public CCard
{
	DECLARE_CARD_CSTOR(CBloodOathCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_TypeSelection;
};

//____________________________________________________________________________
//
class CCreditVoucherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCreditVoucherCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRenounceCard : public CCard
{
	DECLARE_CARD_CSTOR(CRenounceCard);

protected:
	CSelectionSupport m_NumberSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CJeweledTorqueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJeweledTorqueCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;


	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;

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
class CAssemblyHallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAssemblyHallCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CClearTheLandCard : public CCard
{
	DECLARE_CARD_CSTOR(CClearTheLandCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void Process(int nPlayer);

	CPlayerContainer Players;
};

//______________________________________________________________________________
//
class CKyrenToyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKyrenToyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMercadianLiftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMercadianLiftCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CExtortionCard : public CCard
{
	DECLARE_CARD_CSTOR(CExtortionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CKyrenArchiveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKyrenArchiveCard);

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
class CMonkeyCageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMonkeyCageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKarnsTouchCard : public CCard
{
	DECLARE_CARD_CSTOR(CKarnsTouchCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CToymakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CToymakerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCragSaurianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCragSaurianCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt,
								  CWhenDamageDealt::CreatureEventCallback,
								  &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSpiritualFocusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpiritualFocusCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution (CAbilityAction* pAction);

	CSelectionSupport m_DrawSelection;
	void OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CTerritorialDisputeCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTerritorialDisputeCard);
};

//____________________________________________________________________________
//