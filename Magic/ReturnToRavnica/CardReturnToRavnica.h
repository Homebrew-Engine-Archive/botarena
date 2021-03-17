#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CGoblinElectromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinElectromancerCard);
};

//____________________________________________________________________________
//
class CDregManglerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CDregManglerCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CIzzetCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CIzzetCharmCard);
};

//____________________________________________________________________________
//
class CJaradGolgariLichLordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJaradGolgariLichLordCard);

protected:
	CCardFilter m_CardFilter_c;
	CCardFilter m_CardFilter_s;
	CCardFilter m_CardFilter_f;
	CCardFilter m_CardFilter_sf;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKorozdaGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorozdaGuildmageCard);

protected:
	CCardFilter m_CardFilter;
	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStreetSpasmCard : public CCard
{
	DECLARE_CARD_CSTOR(CStreetSpasmCard);
};

//____________________________________________________________________________
//
class CDeadbridgeGoliathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeadbridgeGoliathCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAugerSpreeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAugerSpreeCard);
};

//____________________________________________________________________________
//
class CAzoriusCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CAzoriusCharmCard);
};

//____________________________________________________________________________
//
class CChromaticLanternCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChromaticLanternCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CCorpsejackMenaceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpsejackMenaceCard);
};

//____________________________________________________________________________
//
class CDreadboreCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDreadboreCard);
};

//____________________________________________________________________________
//
class CEyesInTheSkiesCard : public CCard
{
	DECLARE_CARD_CSTOR(CEyesInTheSkiesCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAxebaneGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAxebaneGuardianCard);
	
protected:
	int Remaining;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnNumberSelectedW(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelectedU(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelectedB(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelectedR(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_NumberSelectionW;
	CSelectionSupport m_NumberSelectionU;
	CSelectionSupport m_NumberSelectionB;
	CSelectionSupport m_NumberSelectionR;
};
//____________________________________________________________________________
//
class CFencingAceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFencingAceCard);
};

//____________________________________________________________________________
//
class CGatecreeperVineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGatecreeperVineCard);
};

//____________________________________________________________________________
//
class CAzoriusGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAzoriusGuildgateCard);
};

//____________________________________________________________________________
//
class CGolgariGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGolgariGuildgateCard);
};

//____________________________________________________________________________
//
class CIzzetGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CIzzetGuildgateCard);
};

//____________________________________________________________________________
//
class CRakdosGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRakdosGuildgateCard);
};

//____________________________________________________________________________
//
class CSelesnyaGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSelesnyaGuildgateCard);
};

//____________________________________________________________________________
//
class CGrislySalvageCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrislySalvageCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGroveOfTheGuardianCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGroveOfTheGuardianCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGuttersnipeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuttersnipeCard);
};

//____________________________________________________________________________
//
class CHypersonicDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHypersonicDragonCard);
};

//____________________________________________________________________________
//
class CJudgesFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJudgesFamiliarCard);
};

//____________________________________________________________________________
//
class CMizziumMortarsCard : public CCard
{
	DECLARE_CARD_CSTOR(CMizziumMortarsCard);
};

//____________________________________________________________________________
//
class CNivixGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNivixGuildmageCard);
};

//____________________________________________________________________________
//
class COgreJailbreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreJailbreakerCard);
};

//____________________________________________________________________________
//
class CPackRatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPackRatCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRakdossReturnCard : public CCard
{
	DECLARE_CARD_CSTOR(CRakdossReturnCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRakdosShredFreakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosShredFreakCard);
};

//____________________________________________________________________________
//
class CSelesnyaCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CSelesnyaCharmCard);
};

//____________________________________________________________________________
//
class CSluicewayScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSluicewayScorpionCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRootbornDefensesCard : public CCard
{
	DECLARE_CARD_CSTOR(CRootbornDefensesCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTransguildPromenadeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTransguildPromenadeCard);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CWayfaringTempleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWayfaringTempleCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDeathsPresenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeathsPresenceCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
		bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
		bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CNivMizzetDracogeniusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNivMizzetDracogeniusCard);
};

//____________________________________________________________________________
//
class CDryadMilitantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDryadMilitantCard);
};

//____________________________________________________________________________
//
class CHavocFestivalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHavocFestivalCard);
};

//____________________________________________________________________________
//
class CWorldspineWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWorldspineWurmCard);
};

//____________________________________________________________________________
//
class CLotlethTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLotlethTrollCard);
};

//____________________________________________________________________________
//
class CSlaughterGamesCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlaughterGamesCard);
protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CSupremeVerdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CSupremeVerdictCard);
};

//____________________________________________________________________________
//
class CSlitherheadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlitherheadCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAbruptDecayCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbruptDecayCard);
};

//_____________________________________________________________________________
//
class CCollectiveBlessingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCollectiveBlessingCard);
};

//____________________________________________________________________________
//
class CLoxodonSmiterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonSmiterCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Bottom, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CSkylinePredatorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkylinePredatorCard);
};

//____________________________________________________________________________
//
class CDesecrationDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDesecrationDemonCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CRixMaadiGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRixMaadiGuildmageCard);

protected:
	class CRixMaadiGuildmageTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class CTrostaniSelesnyasVoiceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrostaniSelesnyasVoiceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CNivmagusElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNivmagusElementalCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CUnderworldConnectionsCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnderworldConnectionsCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFaerieImpostorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieImpostorCard);
};

//____________________________________________________________________________
//
class CJaradsOrdersCard : public CCard
{
	DECLARE_CARD_CSTOR(CJaradsOrdersCard);
};

//____________________________________________________________________________
//
class CCyclonicRiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CCyclonicRiftCard);
};

//____________________________________________________________________________
//
class CCryptbornHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptbornHorrorCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CGrowingRanksCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrowingRanksCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPrecinctCaptainCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPrecinctCaptainCard);
};

//____________________________________________________________________________
//
class CPyroconvergenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyroconvergenceCard);
};

//____________________________________________________________________________
//
class CWildBeastmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildBeastmasterCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSphinxsRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CSphinxsRevelationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStealerOfSecretsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStealerOfSecretsCard);
};

//____________________________________________________________________________
//
class CMercurialChemisterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMercurialChemisterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCentaurHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurHealerCard);
};

//____________________________________________________________________________
//
class CAshZealotCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAshZealotCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(TriggeredAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CPsychicSpiralCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicSpiralCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CUltimatePriceCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUltimatePriceCard);
};

//____________________________________________________________________________
//
class CGolgariDecoyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariDecoyCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBlistercoilWeirdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlistercoilWeirdCard);
};

//____________________________________________________________________________
//
class CRakdosCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CRakdosCharmCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeadRevelerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CDeadRevelerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGrimRoustaboutCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CGrimRoustaboutCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CNecropolisRegentCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNecropolisRegentCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt,
						CWhenDamageDealt::PlayerEventCallback, 
						&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	
bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CPlayer* pPlayer, Damage d_damage) const;
};

//____________________________________________________________________________
//
class CChaosImpsCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CChaosImpsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CFallOfTheGavelCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFallOfTheGavelCard);
};

//____________________________________________________________________________
//
class CSearchWarrantCard : public CCard
{
	DECLARE_CARD_CSTOR(CSearchWarrantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHussarPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHussarPatrolCard);
};

//____________________________________________________________________________
//
class CDramaticRescueCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDramaticRescueCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSkymarkRocCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkymarkRocCard);
};

//____________________________________________________________________________
//
class CPhantomGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomGeneralCard);
};

//____________________________________________________________________________
//
class CRestInPeaceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRestInPeaceCard);
};

//____________________________________________________________________________
//
class CKeeningApparitionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeeningApparitionCard);
};

//____________________________________________________________________________
//
class CKnightlyValorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CKnightlyValorCard);
};

//____________________________________________________________________________
//
class CCrosstownCourierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrosstownCourierCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
					CWhenSelfDamageDealt::PlayerEventCallback, 
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
										CPlayer* pPlayer, Damage d_damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDoorkeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoorkeeperCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDownsizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDownsizeCard);
};

//____________________________________________________________________________
//
class CAquusSteedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAquusSteedCard);
};

//____________________________________________________________________________
//
class CBlustersquallCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlustersquallCard);
};

//____________________________________________________________________________
//
class CVoidwielderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVoidwielderCard);
};

//____________________________________________________________________________
//
class CRunewingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRunewingCard);
};

//____________________________________________________________________________
//
class CLobberCrewCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLobberCrewCard);
};

//____________________________________________________________________________
//
class CMinotaurAggressorCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurAggressorCard);
};

//____________________________________________________________________________
//
class CPursuitOfFlightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPursuitOfFlightCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//

class CExplosiveImpactCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CExplosiveImpactCard);
};

//____________________________________________________________________________
//
class CGoblinRallyCard : public CCard
{
	DECLARE_CARD_CSTOR(CGoblinRallyCard);
};

//____________________________________________________________________________
//
class CGoreHouseChainwalkerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CGoreHouseChainwalkerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CVassalSoulCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVassalSoulCard);
};

//____________________________________________________________________________
//
class CSunderingGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CSunderingGrowthCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTrostanisJudgmentCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTrostanisJudgmentCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTrainedCaracalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedCaracalCard);
};

//____________________________________________________________________________
//
class CRoguesPassageCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRoguesPassageCard);
};

//____________________________________________________________________________
//
class CTerrusWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerrusWurmCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThrillKillAssassinCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CThrillKillAssassinCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CZanikevLocustCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CZanikevLocustCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShriekingAfflictionCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CShriekingAfflictionCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSlumReaperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlumReaperCard);
};

//____________________________________________________________________________
//
class CTavernSwindlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTavernSwindlerCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CBazaarKrovodCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBazaarKrovodCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//______________________________________________________________________________
//
class CConcordiaPegasusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CConcordiaPegasusCard);
};

//____________________________________________________________________________
//
class CEtherealArmorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEtherealArmorCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CArmoryGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoryGuardCard);
};

//____________________________________________________________________________
//
class CToweringIndrikCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CToweringIndrikCard);
};

//____________________________________________________________________________
//
class CPerilousShadowCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPerilousShadowCard);
};

//____________________________________________________________________________
//
class CSewerShamblerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSewerShamblerCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDrainpipeVerminCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrainpipeVerminCard);
};

//____________________________________________________________________________
//
class CLaunchPartyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CLaunchPartyCard);
};

//____________________________________________________________________________
//
class CGobblingOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGobblingOozeCard);

protected:
	CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CHorncallersChantCard : public CCard
{
	DECLARE_CARD_CSTOR(CHorncallersChantCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDrudgeBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrudgeBeetleCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDruidsDeliveranceCard : public CCard
{
	DECLARE_CARD_CSTOR(CDruidsDeliveranceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCarnivalHellsteedCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnivalHellsteedCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSpawnOfRixMaadiCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CSpawnOfRixMaadiCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CRakdosRagemuttCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosRagemuttCard);
};

//____________________________________________________________________________
//
class CHellholeFlailerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CHellholeFlailerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSkullRendCard : public CCard
{
	DECLARE_CARD_CSTOR(CSkullRendCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRisenSanctuaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRisenSanctuaryCard);
};

//____________________________________________________________________________
//
class CCommonBondCard : public CCard
{
	DECLARE_CARD_CSTOR(CCommonBondCard);

protected:
	class CCommonBondSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CCommonBondSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CCommonBondSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CCallOfTheConclaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CCallOfTheConclaveCard);
};

//____________________________________________________________________________
//
class CVituGhaziGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVituGhaziGuildmageCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCoursersAccordCard : public CCard
{
	DECLARE_CARD_CSTOR(CCoursersAccordCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSavageSurgeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSavageSurgeCard);
};

//____________________________________________________________________________
//
class CStonefareCrocodileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonefareCrocodileCard);
};

//____________________________________________________________________________
//
class CKorozdaMonitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorozdaMonitorCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CManaBloomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaBloomCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

    BOOL CanPlay(BOOL bIncludeTricks);
	CAbility* m_pAbility1;
	CAbility* m_pAbility2;
	CAbility* m_pAbility3;
	CAbility* m_pAbility4;
	CAbility* m_pAbility5;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRubblebackRhinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRubblebackRhinoCard);
};

//____________________________________________________________________________
//
class CSunspireGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSunspireGriffinCard);
};

//____________________________________________________________________________
//
class CSwiftJusticeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSwiftJusticeCard);
};

//____________________________________________________________________________
//
class CSecurityBlockadeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSecurityBlockadeCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSelesnyaSentryCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSelesnyaSentryCard);
};

//____________________________________________________________________________
//
class CSellerOfSongbirdsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSellerOfSongbirdsCard);
};

//____________________________________________________________________________
//
class CChemistersTrickCard : public CCard
{
	DECLARE_CARD_CSTOR(CChemistersTrickCard);
};

//____________________________________________________________________________
//
class CIzzetStaticasterCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CIzzetStaticasterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThoughtflareCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtflareCard);
};

//____________________________________________________________________________
//
class CTeleportalCard : public CCard
{
	DECLARE_CARD_CSTOR(CTeleportalCard);
};

//____________________________________________________________________________
//
class CDarkRevenantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkRevenantCard);
};

//____________________________________________________________________________
//
class CDestroyTheEvidenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CDestroyTheEvidenceCard);

protected:	
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDeviantGleeCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDeviantGleeCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CAssassinsStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CAssassinsStrikeCard);

protected:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCatacombSlugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCatacombSlugCard);
};

//____________________________________________________________________________
//
class CDaggerdromeImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDaggerdromeImpCard);
};

//____________________________________________________________________________
//
class CSelesnyaKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSelesnyaKeyruneCard);
};

//____________________________________________________________________________
//
class CStreetSweeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStreetSweeperCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRakdosKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRakdosKeyruneCard);
};

//____________________________________________________________________________
//
class CGolgariKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGolgariKeyruneCard);
};

//____________________________________________________________________________
//
class CMizziumSkinCard : public CCard
{
	DECLARE_CARD_CSTOR(CMizziumSkinCard);
};

//____________________________________________________________________________
//
class CHoverBarrierCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHoverBarrierCard);
};

//____________________________________________________________________________
//
class CTrestleTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTrestleTrollCard);
};

//____________________________________________________________________________
//
class CTreasuredFindCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTreasuredFindCard);
};

//____________________________________________________________________________
//
class CRitesOfReapingCard : public CCard
{
	DECLARE_CARD_CSTOR(CRitesOfReapingCard);
};

//____________________________________________________________________________
//
class CCobblebruteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCobblebruteCard);
};

//____________________________________________________________________________
//
class CDynachargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDynachargeCard);
};

//____________________________________________________________________________
//
class CElectrickeryCard : public CCard
{
	DECLARE_CARD_CSTOR(CElectrickeryCard);
};

//____________________________________________________________________________
//
class CAnnihilatingFireCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CAnnihilatingFireCard);
};

//____________________________________________________________________________
//
class CBatterhornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBatterhornCard);
};

//____________________________________________________________________________
//
class CBellowsLizardCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBellowsLizardCard);
};

//____________________________________________________________________________
//
class CBloodfrayGiantCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodfrayGiantCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CTenementCrasherCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CTenementCrasherCard);
};

//____________________________________________________________________________
//
class CVandalblastCard : public CCard
{
	DECLARE_CARD_CSTOR(CVandalblastCard);
};

//____________________________________________________________________________
//
class CViashinoRacketeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoRacketeerCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CRacecourseFuryCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRacecourseFuryCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSplatterThugCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CSplatterThugCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSurveyTheWreckageCard : public CTargetMoveCardSpellCard 
{
	DECLARE_CARD_CSTOR(CSurveyTheWreckageCard);
};

//____________________________________________________________________________
//
class CGolgariLonglegsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolgariLonglegsCard);
};

//______________________________________________________________________________
//
class CRakdosCacklerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosCacklerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CAerialPredationCard : public CTargetMoveCardSpellCard 
{
	DECLARE_CARD_CSTOR(CAerialPredationCard);
};

//____________________________________________________________________________
//
class CArchweaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchweaverCard);
};

//______________________________________________________________________________
//
class CArmadaWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmadaWurmCard);
};

//______________________________________________________________________________
//
class CAxebaneStagCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAxebaneStagCard);
};

//______________________________________________________________________________
//
class CAzoriusKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAzoriusKeyruneCard);
};

//____________________________________________________________________________
//
class CAzorsElocutorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAzorsElocutorsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
			CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
};

//______________________________________________________________________________
//
class CBrushstriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrushstriderCard);
};

//______________________________________________________________________________
//
class CCentaursHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaursHeraldCard);
};

//______________________________________________________________________________
//
class CChorusOfMightCard : public  CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CChorusOfMightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CCodexShredderCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCodexShredderCard);
};

//____________________________________________________________________________
//
class CConjuredCurrencyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConjuredCurrencyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CDeathriteShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathriteShamanCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CSelectionSupport m_ColorSelection;

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener2;
};

//____________________________________________________________________________
//
class CFiremindsForesightCard : public CCard
{
	DECLARE_CARD_CSTOR(CFiremindsForesightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFrostburnWeirdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrostburnWeirdCard);
};

//____________________________________________________________________________
//
class CGolgariCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CGolgariCharmCard);
};

//____________________________________________________________________________
//
class CIsperiaSupremeJudgeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIsperiaSupremeJudgeCard);
};

//____________________________________________________________________________
//
class CIzzetKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIzzetKeyruneCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const;
};

//______________________________________________________________________________
//
class CRakdosRingleaderCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosRingleaderCard);
};

//____________________________________________________________________________
//
class CUtvaraHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUtvaraHellkiteCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CVolatileRigCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVolatileRigCard);

protected:
	CSelectionSupport m_FlipSelection1;
	CSelectionSupport m_FlipSelection2;
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnFlipSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnFlipSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CVraskatheUnseenCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CVraskatheUnseenCard);

protected:
	CCardFlagModifier* m_CardFlagModifier1;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	
	BOOL_ pOwner;
	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);

	CWhenSelfMoved m_WhenSelfMoved;
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CCard* pCard, CPlaneswalkerCard* pWalker, Damage pDamage) ;
};
//____________________________________________________________________________
//
class CRakdosLordofRiotsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRakdosLordofRiotsCard);

	protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CIsperiasSkywatchCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CIsperiasSkywatchCard);
};

//____________________________________________________________________________
//
class CArchonOfTheTriumvirateCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CArchonOfTheTriumvirateCard);
};

//____________________________________________________________________________
//
class CAzoriusArresterCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAzoriusArresterCard);
};

//____________________________________________________________________________
//
class CAzoriusJusticiarCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAzoriusJusticiarCard);
};

//____________________________________________________________________________
//
class CInactionInjunctionCard : public CCard 
{
	DECLARE_CARD_CSTOR(CInactionInjunctionCard);
};

//____________________________________________________________________________
//
class CLyevSkyknightCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CLyevSkyknightCard);
};

//____________________________________________________________________________
//
class CMartialLawCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMartialLawCard);
};

//____________________________________________________________________________
//
class CNewPrahvGuildmageCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CNewPrahvGuildmageCard);
};

//____________________________________________________________________________
//
class CSoulswornSpiritCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSoulswornSpiritCard);
};

//____________________________________________________________________________
//
class CJaceArchitectOfThoughtCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CJaceArchitectOfThoughtCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCountedCardContainer m_SelectedCards1;
	CCountedCardContainer m_SelectedCards2;
	void ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2);


	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;
};

//____________________________________________________________________________
//
class CTabletOfTheGuildsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTabletOfTheGuildsCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;


	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;

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
class CEssenceBacklashCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CEssenceBacklashCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAngelofSerenityCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelofSerenityCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDetentionSphereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDetentionSphereCard);

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
class CEpicExperimentCard : public CCard
{
	DECLARE_CARD_CSTOR(CEpicExperimentCard);
};

//____________________________________________________________________________
//
class CCounterfluxCard : public CCard
{
	DECLARE_CARD_CSTOR(CCounterfluxCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGuildFeudCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGuildFeudCard);

protected:
	CCreatureCard* pOpponentsCreature;

	CSelectionSupport m_CardSelectionController;
	CSelectionSupport m_CardSelectionOpponent;

	bool BeforeResolution(CAbilityAction* pAction);

	void OnCardSelectedController(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelectedOpponent(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void ProcessController(CPlayer* pController);
};

//____________________________________________________________________________
//
class CSlimeMoldingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlimeMoldingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CAvengingArrowCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAvengingArrowCard);
};

//____________________________________________________________________________
//
class CGraveBetrayalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGraveBetrayalCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
