#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CCavalryPegasusCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCavalryPegasusCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAbhorrentOverlordCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAbhorrentOverlordCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);	
};

//_____________________________________________________________________________
//
class CMasterOfWavesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfWavesCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);	
};

//____________________________________________________________________________
//
class CGrayMerchantOfAsphodelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrayMerchantOfAsphodelCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);	
};

//_____________________________________________________________________________
//
class CFanaticOfMogisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFanaticOfMogisCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CKarametrasAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarametrasAcolyteCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CReverentHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReverentHunterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CVanquishTheFoulCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVanquishTheFoulCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CWingsteedRiderCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWingsteedRiderCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CIllTemperedCyclopsCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIllTemperedCyclopsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CArborColossusCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArborColossusCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CColossusOfAkrosCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CColossusOfAkrosCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CEmberSwallowerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmberSwallowerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFleecemaneLionCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleecemaneLionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHundredHandedOneCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHundredHandedOneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHythoniaTheCruelCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHythoniaTheCruelCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKeepsakeGorgonCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeepsakeGorgonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CNessianAspCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNessianAspCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPolisCrusherCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPolisCrusherCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const;
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStoneshockGiantCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneshockGiantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSealockMonsterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSealockMonsterCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CStormbreathDragonCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormbreathDragonCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAgentOfTheFatesCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgentOfTheFatesCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CAkroanCrusaderCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanCrusaderCard);

protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CAnaxAndCymedeCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnaxAndCymedeCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CAnthousaSetessanHeroCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnthousaSetessanHeroCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CArenaAthleteCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArenaAthleteCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CFlamespeakerAdeptCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamespeakerAdeptCard);
};

//____________________________________________________________________________
//
class CBattlewiseHopliteCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlewiseHopliteCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCentaurBattlemasterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurBattlemasterCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CFabledHeroCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFabledHeroCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CFavoredHopliteCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFavoredHopliteCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CLabyrinthChampionCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLabyrinthChampionCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CPhalanxLeaderCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhalanxLeaderCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSetessanBattlePriestCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSetessanBattlePriestCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CStaunchHeartedWarriorCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStaunchHeartedWarriorCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CTormentedHeroCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTormentedHeroCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const;

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTritonFortuneHunterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTritonFortuneHunterCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CWavecrashTritonCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWavecrashTritonCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAkroanHorseCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanHorseCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	CSelectionSupport m_Selection;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CElspethSunsChampionCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CElspethSunsChampionCard);
};

//____________________________________________________________________________
//
class CEvangelOfHeliodCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEvangelOfHeliodCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);	
};

//____________________________________________________________________________
//
class CBidentOfThassaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBidentOfThassaCard);
};

//____________________________________________________________________________
//
class CWhipOfErebosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWhipOfErebosCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CHammerOfPurphorosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHammerOfPurphorosCard);
};

//____________________________________________________________________________
//
class CBowOfNyleaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBowOfNyleaCard);
};

//____________________________________________________________________________
//
class CCurseOfTheSwineCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCurseOfTheSwineCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	std::vector<int> nBattlefieldCount;
};

//____________________________________________________________________________
//
class CSwanSongCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSwanSongCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CXenagosTheRevelerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CXenagosTheRevelerCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool BeforeResolution2(CAbilityAction* pAction);
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CCountedCardContainer_ pExiled;
	CCountedCardContainer_ pSelected;

	void Selection(CPlayer* pController);
};

//____________________________________________________________________________
//
class CAgentOfHorizonsCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAgentOfHorizonsCard);
};

//____________________________________________________________________________
//
class CAkroanHopliteCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAkroanHopliteCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAngerOfTheGodsCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CAngerOfTheGodsCard);
};

//____________________________________________________________________________
//
class CAnvilwroughtRaptorCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAnvilwroughtRaptorCard);
};

//____________________________________________________________________________
//
class CAqueousFormCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAqueousFormCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CArtisansSorrowCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CArtisansSorrowCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAshenRiderCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenRiderCard);
};

//____________________________________________________________________________
//
class CAshiokNightmareWeaverCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CAshiokNightmareWeaverCard);

protected:
	CCountedCardContainer_ pExiled;
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2a(CAbilityAction* pAction);
	bool BeforeResolution2b(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbilityAux;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CAsphodelWandererCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CAsphodelWandererCard);
};

//____________________________________________________________________________
//
class CBattlewiseValorCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBattlewiseValorCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBenthicGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenthicGiantCard);
};

//____________________________________________________________________________
//
class CBloodTollHarpyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodTollHarpyCard);
};

//____________________________________________________________________________
//
class CBoonOfErebosCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBoonOfErebosCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBorderlandMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorderlandMinotaurCard);
};

//____________________________________________________________________________
//
class CBoulderfallCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBoulderfallCard);
};

//____________________________________________________________________________
//
class CBreachingHippocampCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBreachingHippocampCard);
};

//____________________________________________________________________________
//
class CBronzeSableCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBronzeSableCard);
};

//____________________________________________________________________________
//
class CBurnishedHartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBurnishedHartCard);
};

//____________________________________________________________________________
//
class CChosenByHeliodCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CChosenByHeliodCard);
};

//___________________________________________________________________________________________
//
class CChroniclerOfHeroesCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChroniclerOfHeroesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCoastlineChimeraCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCoastlineChimeraCard);
};

//____________________________________________________________________________
//
class CCommuneWithTheGodsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CCommuneWithTheGodsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCoordinatedAssaultCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CCoordinatedAssaultCard);
};

//____________________________________________________________________________
//
class CCracklingTritonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCracklingTritonCard);
};

//____________________________________________________________________________
//
class CCutthroatManeuverCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CCutthroatManeuverCard);
};

//____________________________________________________________________________
//
class CDarkBetrayalCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDarkBetrayalCard);
};

//____________________________________________________________________________
//
class CDauntlessOnslaughtCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDauntlessOnslaughtCard);
};

//____________________________________________________________________________
//
class CDeathbellowRaiderCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathbellowRaiderCard);
};

//____________________________________________________________________________
//
class CDefendTheHearthCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDefendTheHearthCard);
};

//____________________________________________________________________________
//
class CDestructiveRevelryCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDestructiveRevelryCard);
};

//____________________________________________________________________________
//
class CDiscipleOfPhenaxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfPhenaxCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection1;
	CSelectionSupport m_CardSelection2;
	void OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void PickCards (CPlayer* pController, CPlayer* pTarget, int nValue);
	void PickDiscard (CPlayer* pController, CPlayer* pTarget);
	CCountedCardContainer_ pPickedCards;
};

//______________________________________________________________________________
//
class CDissolveCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDissolveCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDragonMantleCard : public CCard
{
	DECLARE_CARD_CSTOR(CDragonMantleCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEpharasWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEpharasWardenCard);
};

//____________________________________________________________________________
//
class CFadeIntoAntiquityCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFadeIntoAntiquityCard);
};

//____________________________________________________________________________
//
class CFateForetoldCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFateForetoldCard);
};

//____________________________________________________________________________
//
class CFelhideMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFelhideMinotaurCard);
};

//____________________________________________________________________________
//
class CFeralInvocationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFeralInvocationCard);
};

//____________________________________________________________________________
//
class CFiredrinkerSatyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFiredrinkerSatyrCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CFlamecastWheelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFlamecastWheelCard);
};

//____________________________________________________________________________
//
class CFleetfeatherSandalsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFleetfeatherSandalsCard);
};

//____________________________________________________________________________
//
class CFleshmadSteedCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshmadSteedCard);
};

//____________________________________________________________________________
//
class CGiftOfImmortalityCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CGiftOfImmortalityCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGlareOfHeresyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGlareOfHeresyCard);
};

//____________________________________________________________________________
//
class CGodsWillingCard : public CCard
{
	DECLARE_CARD_CSTOR(CGodsWillingCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGuardiansOfMeletisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardiansOfMeletisCard);
};

//____________________________________________________________________________
//
class CHerosDownfallCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHerosDownfallCard);
};

//____________________________________________________________________________
//
class CHorizonChimeraCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHorizonChimeraCard);
};

//____________________________________________________________________________
//
class CHorizonScholarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHorizonScholarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHuntTheHunterCard : public CCard
{
	DECLARE_CARD_CSTOR(CHuntTheHunterCard);

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
class CInsatiableHarpyCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CInsatiableHarpyCard);
};

//____________________________________________________________________________
//
class CKragmaWarcallerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKragmaWarcallerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CLagonnaBandElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLagonnaBandElderCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CLashOfTheWhipCard : public CCard
{
	DECLARE_CARD_CSTOR(CLashOfTheWhipCard);
};

//____________________________________________________________________________
//
class CLeoninSnarecasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninSnarecasterCard);
};

//____________________________________________________________________________
//
class CLightningStrikeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLightningStrikeCard);
};

//____________________________________________________________________________
//
class CLostInALabyrinthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CLostInALabyrinthCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMarchOfTheReturnedCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMarchOfTheReturnedCard);
};

//____________________________________________________________________________
//
class CTempleOfSilenceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfSilenceCard);
};

//____________________________________________________________________________
//
class CTempleOfDeceitCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfDeceitCard);
};

//____________________________________________________________________________
//
class CTempleOfMysteryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfMysteryCard);
};

//____________________________________________________________________________
//
class CTempleOfAbandonCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfAbandonCard);
};

//____________________________________________________________________________
//
class CTempleOfTriumphCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfTriumphCard);
};

//____________________________________________________________________________
//
class CUnknownShoresCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUnknownShoresCard);
};
//____________________________________________________________________________
//
/*
class CMeletisCharlatanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMeletisCharlatanCard);
};
*/
//____________________________________________________________________________
//
class CMessengersSpeedCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMessengersSpeedCard);
};

//____________________________________________________________________________
//
class CMinotaurSkullcleaverCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurSkullcleaverCard);
};

//____________________________________________________________________________
//
class CMistcutterHydraCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMistcutterHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CNykthosShrineToNyxCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNykthosShrineToNyxCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
	bool BeforeResolution4(CAbilityAction* pAction) const;
	bool BeforeResolution5(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNyleasDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNyleasDiscipleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
/*
class CNyleasPresenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CNyleasPresenceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility4(CCard* pCard);
};
*/
//____________________________________________________________________________
//
class COmenspeakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COmenspeakerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class COpalineUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COpalineUnicornCard);
};

//____________________________________________________________________________
//
class COrdealOfErebosCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(COrdealOfErebosCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const;
};

//____________________________________________________________________________
//
class COrdealOfHeliodCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(COrdealOfHeliodCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const;
};

//____________________________________________________________________________
//
class COrdealOfNyleaCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(COrdealOfNyleaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const;
};

//____________________________________________________________________________
//
class COrdealOfPurphorosCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(COrdealOfPurphorosCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const;
};

//____________________________________________________________________________
//
class COrdealOfThassaCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(COrdealOfThassaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType mType) const;
};

//____________________________________________________________________________
//
class CPeakEruptionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPeakEruptionCard);
};

//____________________________________________________________________________
//
class CPharikasCureCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPharikasCureCard);
};

//____________________________________________________________________________
//
class CPharikasMenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPharikasMenderCard);
};

//____________________________________________________________________________
//
class CPheresBandCentaursCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPheresBandCentaursCard);
};

//____________________________________________________________________________
//
class CPortentOfBetrayalCard : public CCard
{
	DECLARE_CARD_CSTOR(CPortentOfBetrayalCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPrescientChimeraCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPrescientChimeraCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPriestOfIroasCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPriestOfIroasCard);
};

//____________________________________________________________________________
//
class CPrognosticSphinxCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPrognosticSphinxCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CProphetOfKruphixCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CProphetOfKruphixCard);
};

//____________________________________________________________________________
//
class CProwlersHelmCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CProwlersHelmCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPyxisOfPandemoniumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyxisOfPandemoniumCard);

protected:
	CCountedCardContainer_ pExiled;
	
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CRageOfPurphorosCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRageOfPurphorosCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRagebloodShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagebloodShamanCard);
};

//____________________________________________________________________________
//
class CRayOfDissolutionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRayOfDissolutionCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CReadTheBonesCard : public CCard 
{
	DECLARE_CARD_CSTOR(CReadTheBonesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CReaperOfTheWildsCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReaperOfTheWildsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRescueFromTheUnderworldCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRescueFromTheUnderworldCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CReturnedCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReturnedCentaurCard);
};

//____________________________________________________________________________
//
class CReturnedPhalanxCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CReturnedPhalanxCard);
};

//____________________________________________________________________________
//
class CSatyrHedonistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrHedonistCard);
};

//____________________________________________________________________________
//
class CSatyrRamblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrRamblerCard);
};

//____________________________________________________________________________
//
class CScholarOfAthreosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScholarOfAthreosCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CScourgemarkCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CScourgemarkCard);
};

//___________________________________________________________________________________________
//
class CSeaGodsRevengeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSeaGodsRevengeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSedgeScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSedgeScorpionCard);
};

//____________________________________________________________________________
//
class CSentryOfTheUnderworldCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSentryOfTheUnderworldCard);
};

//____________________________________________________________________________
//
class CSetessanGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSetessanGriffinCard);
};

//____________________________________________________________________________
//
class CShipwreckSingerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShipwreckSingerCard);
};

//____________________________________________________________________________
//
class CShreddingWindsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CShreddingWindsCard);
};

//____________________________________________________________________________
//
class CSilentArtisanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentArtisanCard);
};

//____________________________________________________________________________
//
class CSipOfHemlockCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSipOfHemlockCard);
};

//____________________________________________________________________________
//
class CSoldierOfThePantheonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoldierOfThePantheonCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSparkJoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSparkJoltCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSpellheartChimeraCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSpellheartChimeraCard);
};

//____________________________________________________________________________
//
/*
class CSpearOfHeliodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpearOfHeliodCard);
};
*/
//____________________________________________________________________________
//
class CSteamAuguryCard : public CCard
{
	DECLARE_CARD_CSTOR(CSteamAuguryCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCountedCardContainer_ m_SelectedCards1;
	CCountedCardContainer_ m_SelectedCards2;
	void ProcessPiling(CPlayer* pPlayer);


	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

	CSelectionSupport m_Selection;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CStymiedHopesCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CStymiedHopesCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSylvanCaryatidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanCaryatidCard);
};

//____________________________________________________________________________
//
class CThassasBountyCard : public CCard
{
	DECLARE_CARD_CSTOR(CThassasBountyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTimeToFeedCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimeToFeedCard);

protected:
	class CTimeToFeedSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CTimeToFeedSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CTimeToFeedSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CTitanOfEternalFireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTitanOfEternalFireCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CTitansStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTitansStrengthCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTravelingPhilosopherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTravelingPhilosopherCard);
};

//____________________________________________________________________________
//
class CTriadOfFatesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTriadOfFatesCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTritonShorethiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTritonShorethiefCard);
};

//____________________________________________________________________________
//
class CTwoHeadedCerberusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTwoHeadedCerberusCard);
};

//____________________________________________________________________________
//
class CTymaretTheMurderKingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTymaretTheMurderKingCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CUnderworldCerberusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUnderworldCerberusCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVaporkinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVaporkinCard);
};

//____________________________________________________________________________
//
class CVipersKissCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVipersKissCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVoyagesEndCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVoyagesEndCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CVoyagingSatyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVoyagingSatyrCard);
};

//____________________________________________________________________________
//
class CVulpineGoliathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVulpineGoliathCard);
};

//____________________________________________________________________________
//
class CWildCelebrantsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildCelebrantsCard);
};

//____________________________________________________________________________
//
class CWitchesEyeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWitchesEyeCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CYokedOxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYokedOxCard);
};

//____________________________________________________________________________
//