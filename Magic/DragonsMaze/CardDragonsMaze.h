#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CRuricTharTheUnbowedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRuricTharTheUnbowedCard);

protected:
	typedef 
		TTriggeredAbility < CTriggeredAbility<>, CWhenSpellCast,
								 CWhenSpellCast::EventCallback, &CWhenSpellCast::SetEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CMazesEndCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMazesEndCard);

protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBeckCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeckCallCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDeputyOfAcquittalsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeputyOfAcquittalsCard);
};

//____________________________________________________________________________
//
class CRenderSilentCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CRenderSilentCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAdventOfTheWurmCard : public CCard
{
	DECLARE_CARD_CSTOR(CAdventOfTheWurmCard);
};

//____________________________________________________________________________
//
class CMelekIzzetParagonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMelekIzzetParagonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRalZarekCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CRalZarekCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	int_ nFlipCount;
	int_ nHeadsCount;

	void FlipCoin(CPlayer* pController);
	CSelectionSupport m_FlipSelection;
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CToilTroubleCard : public CCard
{
	DECLARE_CARD_CSTOR(CToilTroubleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSinCollectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSinCollectorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CVorelOfTheHullCladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVorelOfTheHullCladeCard);
};

//____________________________________________________________________________
//
class CWearTearCard : public CCard
{
	DECLARE_CARD_CSTOR(CWearTearCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class COpalLakeGatekeepersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COpalLakeGatekeepersCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CExavaRakdosBloodWitchCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CExavaRakdosBloodWitchCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CRenounceTheGuildsCard : public CCard
{
	DECLARE_CARD_CSTOR(CRenounceTheGuildsCard);
};
//____________________________________________________________________________
//
class CSaruliGatekeepersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaruliGatekeepersCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSmeltWardGatekeepersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSmeltWardGatekeepersCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(CAbilityAction* pAction);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CArmedDangerousCard : public CCard
{
	DECLARE_CARD_CSTOR(CArmedDangerousCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLaviniaOfTheTenthCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLaviniaOfTheTenthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSunspireGatekeepersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunspireGatekeepersCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTeysaEnvoyOfGhostsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTeysaEnvoyOfGhostsCard);

protected:
	bool CTeysaEnvoyOfGhostsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CUbulSarGatekeepersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUbulSarGatekeepersCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBreakingEnteringCard : public CCard
{
	DECLARE_CARD_CSTOR(CBreakingEnteringCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSireOfInsanityCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSireOfInsanityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};
 
//____________________________________________________________________________
//
class CTrostanisSummonerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrostanisSummonerCard);
};

//____________________________________________________________________________
//
class CZhurTaaAncientCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhurTaaAncientCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility* m_pTriggeredAbility;

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
};

//____________________________________________________________________________
//
class CMirkoVoskMindDrinkerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMirkoVoskMindDrinkerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CPlayer* pPlayer, Damage d_damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBredForTheHuntCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBredForTheHuntCard);
};

//____________________________________________________________________________
//
class CFarAwayCard : public CCard
{
	DECLARE_CARD_CSTOR(CFarAwayCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CObzedatsAidCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CObzedatsAidCard);
};

//____________________________________________________________________________
//
class CRenegadeKrasisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRenegadeKrasisCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVoiceOfResurgenceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfResurgenceCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CAzoriusCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAzoriusCluestoneCard);
};

//____________________________________________________________________________
//
class CBorosCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBorosCluestoneCard);
};

//____________________________________________________________________________
//
class CDimirCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDimirCluestoneCard);
};

//____________________________________________________________________________
//
class CGiveTakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGiveTakeCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGolgariCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGolgariCluestoneCard);
};

//____________________________________________________________________________
//
class CGruulCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGruulCluestoneCard);
};

//____________________________________________________________________________
//
class CIzzetCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIzzetCluestoneCard);
};

//____________________________________________________________________________
//
class COrzhovCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrzhovCluestoneCard);
};

//____________________________________________________________________________
//
class CRakdosCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRakdosCluestoneCard);
};

//____________________________________________________________________________
//
class CSelesnyaCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSelesnyaCluestoneCard);
};

//____________________________________________________________________________
//
class CSimicCluestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSimicCluestoneCard);
};

//____________________________________________________________________________
//
class CTajicBladeOfTheLegionCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTajicBladeOfTheLegionCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CLegionsInitiativeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLegionsInitiativeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSavagebornHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavagebornHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CAliveWellCard : public CCard
{
	DECLARE_CARD_CSTOR(CAliveWellCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDeadbridgeChantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeadbridgeChantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CNivixCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNivixCyclopsCard);
};

//____________________________________________________________________________
//
class CWarpedPhysiqueCard : public CCard
{
	DECLARE_CARD_CSTOR(CWarpedPhysiqueCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCatchReleaseCard : public CCard
{
	DECLARE_CARD_CSTOR(CCatchReleaseCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;

	bool BeforeResolution(CAbilityAction* pAction);

	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;

	int_ nReleaseCounter;
	void ReleaseFunction(int PlayerID);
	void Advance(int PlayerID);
	CCountedCardContainer_ pSacrificed;

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CMazeAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMazeAbominationCard);
};

//____________________________________________________________________________
//
class CMazeBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMazeBehemothCard);
};

//____________________________________________________________________________
//
class CMazeGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMazeGliderCard);
};

//____________________________________________________________________________
//
class CMazeRusherCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMazeRusherCard);
};

//____________________________________________________________________________
//
class CMazeSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMazeSentinelCard);
};

//____________________________________________________________________________
//
class CUncoveredCluesCard : public CCard
{
	DECLARE_CARD_CSTOR(CUncoveredCluesCard);
};

//____________________________________________________________________________
//
class CViashinoFirstbladeCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoFirstbladeCard);
};

//____________________________________________________________________________
//
class CEmmaraTandrisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmmaraTandrisCard);
};

//____________________________________________________________________________
//
class CWakeTheReflectionsCard : public CCard
{
	DECLARE_CARD_CSTOR(CWakeTheReflectionsCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CWarleadersHelixCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CWarleadersHelixCard);
};

//____________________________________________________________________________
//
class CAEtherlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAEtherlingCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBlastOfGeniusCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlastOfGeniusCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CKorozdaGorgonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorozdaGorgonCard);
};

//____________________________________________________________________________
//
class CUnflinchingCourageCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CUnflinchingCourageCard);
};

//____________________________________________________________________________
//
class CBorosMastiffCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBorosMastiffCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CHaazdaSnareSquadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHaazdaSnareSquadCard);
};

//____________________________________________________________________________
//
class CLyevDecreeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CLyevDecreeCard);
};

//____________________________________________________________________________
//
class CRiotControlCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiotControlCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CScionOfVituGhaziCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScionOfVituGhaziCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	BOOL_ m_bHandStack;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CCardFilter m_CardFilter;

	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSteepleRocCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSteepleRocCard);
};

//____________________________________________________________________________
//
class CHiddenStringsCard : public CCard
{
    DECLARE_CARD_CSTOR(CHiddenStringsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	void OnTapSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TapSelection1;
	void OnTapSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TapSelection2;

	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);

	void Cipher(CPlayer* pController);
};

//____________________________________________________________________________
//
class CMindstaticCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMindstaticCard);
};

//____________________________________________________________________________
//
class CMurmuringPhantasmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMurmuringPhantasmCard);
};

//____________________________________________________________________________
//
class CBaneAlleyBlackguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBaneAlleyBlackguardCard);
};

//____________________________________________________________________________
//
class CCryptIncursionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCryptIncursionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFatalFumesCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFatalFumesCard);
};

//____________________________________________________________________________
//
class CHiredTorturerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHiredTorturerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRakdosDrakeCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CRakdosDrakeCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CSinisterPossessionCard : public CCard
{
	DECLARE_CARD_CSTOR(CSinisterPossessionCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CAweForTheGuildsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAweForTheGuildsCard);
};

//____________________________________________________________________________
//
class CClearAPathCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CClearAPathCard);
};

//____________________________________________________________________________
//
class CPunishTheEnemyCard : public CCard
{
	DECLARE_CARD_CSTOR(CPunishTheEnemyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPontiffOfBlightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPontiffOfBlightCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CRiotPikerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRiotPikerCard);
};

//____________________________________________________________________________
//
class CRubblebeltMaakaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRubblebeltMaakaCard);
};

//____________________________________________________________________________
//
class CWeaponSurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CWeaponSurgeCard);
};

//____________________________________________________________________________
//
class CBatteringKrasisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBatteringKrasisCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKraulWarriorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKraulWarriorCard);
};

//____________________________________________________________________________
//
class CMendingTouchCard : public CCard
{
	DECLARE_CARD_CSTOR(CMendingTouchCard);
};

//____________________________________________________________________________
//
class CMutantsPreyCard : public CCard
{
	DECLARE_CARD_CSTOR(CMutantsPreyCard);

protected:
	class CMutantsPreySpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CMutantsPreySpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CMutantsPreySpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CPhytoburstCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CPhytoburstCard);
};

//____________________________________________________________________________
//
class CSkylasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkylasherCard);
};

//____________________________________________________________________________
//
class CThrashingMossdogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrashingMossdogCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArmoredWolfRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredWolfRiderCard);
};

//____________________________________________________________________________
//
class CAscendedLawmageCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAscendedLawmageCard);
};

//____________________________________________________________________________
//
class CBeetleformMageCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBeetleformMageCard);
};

//____________________________________________________________________________
//
class CBronzebeakMoaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBronzebeakMoaCard);
};

//___________________________________________________________________________
//
class CCarnageGladiatorCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnageGladiatorCard);
};

//____________________________________________________________________________
//
class CDebtToTheDeathlessCard : public CCard
{
	DECLARE_CARD_CSTOR(CDebtToTheDeathlessCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CDownDirtyCard : public CCard
{
	DECLARE_CARD_CSTOR(CDownDirtyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDrownInFilthCard : public CCard
{
	DECLARE_CARD_CSTOR(CDrownInFilthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFluxchargerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFluxchargerCard);
};

//____________________________________________________________________________
//
class CGazeOfGraniteCard : public CCard
{
	DECLARE_CARD_CSTOR(CGazeOfGraniteCard);
};

//____________________________________________________________________________
//
class CGleamOfBattleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGleamOfBattleCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CGruulWarChantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGruulWarChantCard);
};

//____________________________________________________________________________
//
class CHaunterOfNightveilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHaunterOfNightveilCard);
};

//___________________________________________________________________________
//
class CJelennSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJelennSphinxCard);
};

//____________________________________________________________________________
//
class CMawOfTheObzedatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMawOfTheObzedatCard);
};

//____________________________________________________________________________
//
class CMorgueBurstCard : public CCard
{
	DECLARE_CARD_CSTOR(CMorgueBurstCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPilferedPlansCard : public CCard
{
	DECLARE_CARD_CSTOR(CPilferedPlansCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPlasmCaptureCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CPlasmCaptureCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CProfitLossCard : public CCard
{
	DECLARE_CARD_CSTOR(CProfitLossCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CProtectServeCard : public CCard
{
	DECLARE_CARD_CSTOR(CProtectServeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CReadyWillingCard : public CCard
{
	DECLARE_CARD_CSTOR(CReadyWillingCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CReapIntellectCard : public CCard
{
	DECLARE_CARD_CSTOR(CReapIntellectCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CCountedCardContainer_ pSelected;
	CCountedCardContainer_ pExiled;

	void SelectionLoop(CPlayer* pController, CPlayer* pTarget);
	void ExileLoop(CPlayer* pController, CPlayer* pTarget);
	int_ nValue;

	CSelectionSupport m_CardSelection1;
	CSelectionSupport m_CardSelection2;
	void OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRestoreThePeaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CRestoreThePeaceCard);
};

//______________________________________________________________________________
//
class CSpeciesGorgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpeciesGorgerCard);
};

//____________________________________________________________________________
//
class CSpikeJesterCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeJesterCard);
};

//____________________________________________________________________________
//
class CTitheDrinkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTitheDrinkerCard);
};

//______________________________________________________________________________
//
class CWoodlotCrawlerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodlotCrawlerCard);
};

//____________________________________________________________________________
//
class CZhurTaaDruidCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CZhurTaaDruidCard);
};

//____________________________________________________________________________
//
