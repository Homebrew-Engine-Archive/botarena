#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CChandrasOutrageCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CChandrasOutrageCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPlummetCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPlummetCard);
};

//____________________________________________________________________________
//
class CReassemblingSkeletonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReassemblingSkeletonCard);
};

//____________________________________________________________________________
//
class CAuguryOwlCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAuguryOwlCard);
};

//____________________________________________________________________________
//
class CAjanisMantraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAjanisMantraCard);
};

//____________________________________________________________________________
//
class CAjanisPridemateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAjanisPridemateCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CAssaultGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAssaultGriffinCard);
};

//____________________________________________________________________________
//
class CDiminishCard : public CCard
{
	DECLARE_CARD_CSTOR(CDiminishCard);
};

//____________________________________________________________________________
//
class CEmberHaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmberHaulerCard);
};

//____________________________________________________________________________
//
class CGarruksCompanionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGarruksCompanionCard);
};

//____________________________________________________________________________
//
class CGarruksPackleaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGarruksPackleaderCard);
};

//____________________________________________________________________________
//
class CGreaterBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterBasiliskCard);
};

//____________________________________________________________________________
//
class CHarborSerpentCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CHarborSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CJacesErasureCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJacesErasureCard);
};

//____________________________________________________________________________
//
class CJacesIngenuityCard : public CCard
{
	DECLARE_CARD_CSTOR(CJacesIngenuityCard);
};

//____________________________________________________________________________
//
class CLilianasCaressCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLilianasCaressCard);
};

//____________________________________________________________________________
//
class CLilianasSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLilianasSpecterCard);
};

//____________________________________________________________________________
//
class CNightwingShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CNightwingShadeCard);
};

//____________________________________________________________________________
//
class CNetherHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNetherHorrorCard);
};

//____________________________________________________________________________
//
class CPreordainCard : public CCard
{
	DECLARE_CARD_CSTOR(CPreordainCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSacredWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSacredWolfCard);
};

//____________________________________________________________________________
//
class CTirelessMissionariesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTirelessMissionariesCard);
};

//____________________________________________________________________________
//
class CVolcanicStrengthCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVolcanicStrengthCard);
};

//____________________________________________________________________________
//
class CWallOfVinesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfVinesCard);
};

//____________________________________________________________________________
//
class CYavimayaWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaWurmCard);
};

//____________________________________________________________________________
//
class CAncientHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientHellkiteCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSunTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunTitanCard);
};

//____________________________________________________________________________
//
class CAEtherAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAEtherAdeptCard);
};

//____________________________________________________________________________
//
class CAirServantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAirServantCard);
};

//____________________________________________________________________________
//
class CGoblinTunnelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinTunnelerCard);
};

//____________________________________________________________________________
//
class CCloudCrusaderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudCrusaderCard);
};

//____________________________________________________________________________
//
class CMightyLeapCard : public CCard
{
	DECLARE_CARD_CSTOR(CMightyLeapCard);
};

//____________________________________________________________________________
//
class CWaterServantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWaterServantCard);
};

//____________________________________________________________________________
//
class CSylvanRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanRangerCard);
};

//____________________________________________________________________________
//
class CBaronyVampireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBaronyVampireCard);
};

//____________________________________________________________________________
//
class CBloodTitheCard : public CCard
{
	DECLARE_CARD_CSTOR(CBloodTitheCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStabbingPainCard : public CCard
{
	DECLARE_CARD_CSTOR(CStabbingPainCard);
};

//____________________________________________________________________________
//
class CArcRunnerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CArcRunnerCard);
};

//____________________________________________________________________________
//
class CGoldenglowMothCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldenglowMothCard);
};

//____________________________________________________________________________
//
class CFlingCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlingCard);
};

//____________________________________________________________________________
//
class CCrystalBallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrystalBallCard);
};

//____________________________________________________________________________
//
class CKnightExemplarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightExemplarCard);
};

//____________________________________________________________________________
//
class CTimeReversalCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimeReversalCard);
};

//____________________________________________________________________________
//
class CBackToNatureCard : public CCard
{
	DECLARE_CARD_CSTOR(CBackToNatureCard);
};

//____________________________________________________________________________
//
class CGargoyleSentinelCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGargoyleSentinelCard);
};

//____________________________________________________________________________
//
class CObstinateBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CObstinateBalothCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Bottom, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CSquadronHawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSquadronHawkCard);
};

//____________________________________________________________________________
//
class CSteelOverseerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelOverseerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBloodcrazedGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodcrazedGoblinCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGaeasRevengeCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGaeasRevengeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGraveTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGraveTitanCard);
};

//____________________________________________________________________________
//
class CPrimevalTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimevalTitanCard);
};

//____________________________________________________________________________
//
class CRocEggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRocEggCard);
};

//____________________________________________________________________________
//
class CScrollThiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScrollThiefCard);
};

//____________________________________________________________________________
//
class CWarPriestOfThuneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarPriestOfThuneCard);
};

//____________________________________________________________________________
//
class CPrimalCocoonCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CPrimalCocoonCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCreatureCard* pCreature) const;
};

//____________________________________________________________________________
//
class CMitoticSlimeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMitoticSlimeCard);
};

//____________________________________________________________________________
//
class CCombustCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCombustCard);
};

//____________________________________________________________________________
//
class CDemonOfDeathsGateCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDemonOfDeathsGateCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPyreticRitualCard : public CCard
{
	DECLARE_CARD_CSTOR(CPyreticRitualCard);
};

//____________________________________________________________________________
//
class CPhantomBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomBeastCard);
};

//____________________________________________________________________________
//
class CStoneGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneGolemCard);
};

//____________________________________________________________________________
//
class CTempleBellCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTempleBellCard);
};

//____________________________________________________________________________
//
class CFaunaShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaunaShamanCard);
};

//____________________________________________________________________________
//
class CVisceraSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVisceraSeerCard);
};

//____________________________________________________________________________
//
class CElixirOfImmortalityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElixirOfImmortalityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDarkTutelageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarkTutelageCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSerraAscendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraAscendantCard);
};

//____________________________________________________________________________
//
class CVoltaicKeyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVoltaicKeyCard);
};

//____________________________________________________________________________
//
class CNantukoShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoShadeCard);
};

//____________________________________________________________________________
//
class CBrittleEffigyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBrittleEffigyCard);
};

//____________________________________________________________________________
//
class CEarthServantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEarthServantCard);
};

//____________________________________________________________________________
//
class CHornetStingCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHornetStingCard);
};

//____________________________________________________________________________
//
class CQuagSicknessCard : public CCard
{
	DECLARE_CARD_CSTOR(CQuagSicknessCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CSwordOfVengeanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfVengeanceCard);
};

//____________________________________________________________________________
//
class CCallToMindCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCallToMindCard);
};

//____________________________________________________________________________
//
class CDestructiveForceCard : public CCard
{
	DECLARE_CARD_CSTOR(CDestructiveForceCard);
};

//____________________________________________________________________________
//
class CInspiredChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CInspiredChargeCard);
};

//____________________________________________________________________________
//
//class CMystifyingMazeCard : public CNonbasicLandCard
//{
//	DECLARE_CARD_CSTOR(CMystifyingMazeCard);
//
//private:
//	CCardFlagModifier m_CardFlagModifier1;
//	CCardFlagModifier m_CardFlagModifier2;
//	CCardFilter m_CardFilter_temp;
//	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
//
//	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
//};
//
////____________________________________________________________________________
////
class CManicVandalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CManicVandalCard);
};

//____________________________________________________________________________
//
class CWarlordsAxeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarlordsAxeCard);
};

//____________________________________________________________________________
//
class CArmoredCancrixCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredCancrixCard);
};

//____________________________________________________________________________
//
class CMaritimeGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaritimeGuardCard);
};

//____________________________________________________________________________
//
class CRottingLegionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottingLegionCard);
};

//____________________________________________________________________________
//
class CInciteCard : public CCard
{
	DECLARE_CARD_CSTOR(CInciteCard);
};

//____________________________________________________________________________
//
class CThunderStrikeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CThunderStrikeCard);
};

//____________________________________________________________________________
//
class CBrindleBoarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrindleBoarCard);
};

//____________________________________________________________________________
//
class CDryadsFavorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDryadsFavorCard);
};

//____________________________________________________________________________
//
class CHuntersFeastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHuntersFeastCard);
};

//____________________________________________________________________________
//
class CDayOfJudgmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CDayOfJudgmentCard);
};

//____________________________________________________________________________
//
class CBloodthroneVampireCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodthroneVampireCard);
};

//____________________________________________________________________________
//
class CBogRaidersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBogRaidersCard);
};

//____________________________________________________________________________
//
class CVulshokBerserkerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CVulshokBerserkerCard);
};

//____________________________________________________________________________
//
class CDuskdaleWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskdaleWurmCard);
};

//____________________________________________________________________________
//
class CForeseeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CForeseeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CLeylineOfPunishmentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfPunishmentCard);
};

//____________________________________________________________________________
//
class CLeylineOfTheVoidCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfTheVoidCard);
};

//____________________________________________________________________________
//
class CLeylineOfVitalityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfVitalityCard);
};

//____________________________________________________________________________
//
class CLeylineOfAnticipationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineOfAnticipationCard);
};

//____________________________________________________________________________
//
class CLeylineofSanctityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeylineofSanctityCard);
};

//____________________________________________________________________________
//
class CStormtideLeviathanCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CStormtideLeviathanCard);
	
protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCultivateCard : public CCard
{
	DECLARE_CARD_CSTOR(CCultivateCard);
};

//____________________________________________________________________________
//
class CPhylacteryLichCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhylacteryLichCard);

protected:
	bool SetTriggerContext3(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						     CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CInfernoTitanCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CInfernoTitanCard);
};

//____________________________________________________________________________
//
//class CCaptivatingVampireCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CCaptivatingVampireCard);
//protected:
//	CCardFilter m_CardFilter;
//};

//____________________________________________________________________________
//
class CFrostTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrostTitanCard);

private:
	bool SetTriggerContext(CTriggeredAllCounterSpellAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class COverwhelmingStampedeCard : public CCard
{
	DECLARE_CARD_CSTOR(COverwhelmingStampedeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CJinxedIdolCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJinxedIdolCard);
};

//____________________________________________________________________________
//
class CShivsEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CShivsEmbraceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CChandrasSpitfireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChandrasSpitfireCard);
};

//____________________________________________________________________________
//
class CNecroticPlagueCard : public CCard
{
	DECLARE_CARD_CSTOR(CNecroticPlagueCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
//	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
//											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCaptivatingVampireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaptivatingVampireCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CReverberateCard : public CCard
{
	DECLARE_CARD_CSTOR(CReverberateCard);
};

//____________________________________________________________________________
//
class CSorcerersStrongboxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSorcerersStrongboxCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCyclopsGladiatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCyclopsGladiatorCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CConundrumSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CConundrumSphinxCard);

protected:
	CSelectionSupport m_NameSelection;
	CCountedCardContainer pNamedCards;

	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
	void NameCard(int PlayerID);
	void Advance(int PlayerID);
};

//____________________________________________________________________________
//
class CMassPolymorphCard : public CCard
{
	DECLARE_CARD_CSTOR(CMassPolymorphCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHoardingDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHoardingDragonCard);

protected:
	CCountedCardContainer_ pExiled;

	CSelectionSupport m_Selection1;
	CSelectionSupport m_Selection2;

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

	void OnSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CMerfolkSpyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkSpyCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAutumnsVeilCard : public CCard
{
	DECLARE_CARD_CSTOR(CAutumnsVeilCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//