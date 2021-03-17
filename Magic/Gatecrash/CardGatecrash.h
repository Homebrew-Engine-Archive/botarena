#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//

class CBorborygmosEnragedCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBorborygmosEnragedCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CBorosEliteCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBorosEliteCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CBorosGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBorosGuildgateCard);
};

//____________________________________________________________________________
//
class CDimirGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDimirGuildgateCard);
};

//____________________________________________________________________________
//
class CGruulGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGruulGuildgateCard);
};

//____________________________________________________________________________
//
class COrzhovGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COrzhovGuildgateCard);
};

//____________________________________________________________________________
//
class CSimicGuildgateCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSimicGuildgateCard);
};

//____________________________________________________________________________
//
class CBurningTreeEmissaryCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBurningTreeEmissaryCard);
};

//____________________________________________________________________________
//
class CCloudfinRaptorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudfinRaptorCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDeathpactAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathpactAngelCard);
};

//____________________________________________________________________________
//
class CDomriRadeCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CDomriRadeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	class CDomriRadeFightSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CDomriRadeFightSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CDomriRadeFightSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//______________________________________________________________________________
//
class CDrakewingKrasisCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDrakewingKrasisCard);
};

//____________________________________________________________________________
//
class CExperimentOneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CExperimentOneCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFiremaneAvengerCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CFiremaneAvengerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CEnterTheInfiniteCard : public CCard
{
    DECLARE_CARD_CSTOR(CEnterTheInfiniteCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGatewayShadeCard : public CPumpCreatureCard
{
    DECLARE_CARD_CSTOR(CGatewayShadeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGridlockCard : public CCard
{
    DECLARE_CARD_CSTOR(CGridlockCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHellkiteTyrantCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CHellkiteTyrantCard);

private:
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

	protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			if (CCardFilter::GetFilter(_T("artifact cards"))->CountIncluded(pBattlefield->GetCardContainer()) < 20)
				return;

			__super::CallEventCallback(pToNode);
		}
	};

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CMurderInvestigationCard : public CEnchantCard
{
    DECLARE_CARD_CSTOR(CMurderInvestigationCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRubblehulkCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRubblehulkCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSimicFluxmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimicFluxmageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool CSimicFluxmageCard::BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTinStreetMarketCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTinStreetMarketCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CViashinoShanktailCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CViashinoShanktailCard);
};

//____________________________________________________________________________
//
class CZhurTaaSwineCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CZhurTaaSwineCard);
};

//____________________________________________________________________________
//
class CFoundryChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFoundryChampionCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSkarrgGoliathCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSkarrgGoliathCard);
};

//____________________________________________________________________________
//
class CConsumingAberrationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CConsumingAberrationCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGruulKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGruulKeyruneCard);
};

//____________________________________________________________________________
//
class CBiovisionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBiovisionaryCard);

private:
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

	protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			CCardFilter m_CardFilter;
			m_CardFilter.SetComparer(new CardNameComparer(_T("Biovisionary")));
			m_CardFilter.AddComparer(new AnyCreatureComparer);

			if (m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) < 4)
				return;

			__super::CallEventCallback(pToNode);
		}
	};
};

//____________________________________________________________________________
//
class CSkullcrackCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSkullcrackCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAngelicSkirmisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelicSkirmisherCard);

protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CDuskmantleGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskmantleGuildmageCard);
};

//______________________________________________________________________________
//
class CHighPriestOfPenanceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHighPriestOfPenanceCard);
};

//______________________________________________________________________________
//
class CElusiveKrasisCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CElusiveKrasisCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRapidHybridizationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRapidHybridizationCard);
};

//______________________________________________________________________________
//
class CSunhomeGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunhomeGuildmageCard);
};

//______________________________________________________________________________
//
class CBorosKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBorosKeyruneCard);
};

//____________________________________________________________________________
//
class CDimirCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CDimirCharmCard);
};

//____________________________________________________________________________
//
class CCrocanuraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrocanuraCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CUrbanEvolutionCard : public CCard
{
	DECLARE_CARD_CSTOR(CUrbanEvolutionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CSignalTheClansCard : public CCard
{
	DECLARE_CARD_CSTOR(CSignalTheClansCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRubblebeltRaidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRubblebeltRaidersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHellraiserGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHellraiserGoblinCard);
};

//____________________________________________________________________________
//
class CBiomassMutationCard : public CCard
{
	DECLARE_CARD_CSTOR(CBiomassMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPitFightCard : public CCard
{
	DECLARE_CARD_CSTOR(CPitFightCard);

protected:
	class CPitFightSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CPitFightSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CPitFightSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CPrimeSpeakerZeganaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimeSpeakerZeganaCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGhorClanRampagerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGhorClanRampagerCard);
};

//____________________________________________________________________________
//
class CGyreSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGyreSageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLeylinePhantomCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CLeylinePhantomCard);
};

//____________________________________________________________________________
//
class CGiantAdephageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantAdephageCard);

protected:
	typedef
	TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CFrontlineMedicCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CFrontlineMedicCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGroundAssaultCard : public CCard
{
	DECLARE_CARD_CSTOR(CGroundAssaultCard);
};

//____________________________________________________________________________
//
class CShamblesharkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamblesharkCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSimicKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSimicKeyruneCard);
};

//____________________________________________________________________________
//
class CDimirKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDimirKeyruneCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CBorosCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CBorosCharmCard);
};

//____________________________________________________________________________
//
class CGideonChampionOfJusticeCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CGideonChampionOfJusticeCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CFiveAlarmFireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFiveAlarmFireCard);
};

//____________________________________________________________________________
//
class CSkarrgGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkarrgGuildmageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CAssembleTheLegionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAssembleTheLegionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CLordOfTheVoidCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfTheVoidCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);


	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBasilicaGuardsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBasilicaGuardsCard);
};

//______________________________________________________________________________
//
class CBlindObedienceCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlindObedienceCard);
};

//______________________________________________________________________________
//
class CCryptGhastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptGhastCard);
};

//______________________________________________________________________________
//
class CSyndicOfTithesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSyndicOfTithesCard);
};

//______________________________________________________________________________
//
class CThrullParasiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrullParasiteCard);
};

//______________________________________________________________________________
//
class CTreasuryThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreasuryThrullCard);
};

//______________________________________________________________________________
//
class CVizkopaConfessorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVizkopaConfessorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_NumberSelection;
	CSelectionSupport m_CardSelection1;
	CSelectionSupport m_CardSelection2;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void PickCards (CPlayer* pController, CPlayer* pTarget, int nValue);
	void PickExile (CPlayer* pController, CPlayer* pTarget);
	CCountedCardContainer_ pPickedCards;
};

//______________________________________________________________________________
//
class CUndercityInformerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndercityInformerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class CLegionLoyalistCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CLegionLoyalistCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSimicCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CSimicCharmCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//______________________________________________________________________________
//
class COrzhovKeyruneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrzhovKeyruneCard);
};

//____________________________________________________________________________
//
class CCallOfTheNightwingCard : public CCard
{
    DECLARE_CARD_CSTOR(CCallOfTheNightwingCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGruulCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CGruulCharmCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHandsOfBindingCard : public CCard
{
    DECLARE_CARD_CSTOR(CHandsOfBindingCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStolenIdentityCard : public CCard
{
    DECLARE_CARD_CSTOR(CStolenIdentityCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CUndercityPlagueCard : public CCard
{
    DECLARE_CARD_CSTOR(CUndercityPlagueCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWhisperingMadnessCard : public CCard
{
    DECLARE_CARD_CSTOR(CWhisperingMadnessCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
/*
class CAureliaTheWarleaderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAureliaTheWarleaderCard);

protected:
	BOOL bFirstAttack;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked);
	bool BeforeResolution(CAbilityAction* pAction);
	bool BeforeResolutionAux(CAbilityAction* pAction);
};
*/
//____________________________________________________________________________
//
class COgreSlumlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreSlumlordCard);
};

//______________________________________________________________________________
//
class CGlaringSpotlightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGlaringSpotlightCard);
};

//______________________________________________________________________________
//
class CSlaughterhornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlaughterhornCard);
};

//______________________________________________________________________________
//
class CMercilessEvictionCard : public CCard
{
	DECLARE_CARD_CSTOR(CMercilessEvictionCard);
};

//______________________________________________________________________________
//
class CAEtherizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CAEtherizeCard);
};

//______________________________________________________________________________
//
class CFirefistStrikerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CFirefistStrikerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CGruulRagebeastCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGruulRagebeastCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class COrzhovCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(COrzhovCharmCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDuskmantleSeerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskmantleSeerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSparkTrooperCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSparkTrooperCard);
};

//____________________________________________________________________________
//
class CMimingSlimeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMimingSlimeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVizkopaGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVizkopaGuildmageCard);
};

//____________________________________________________________________________
//
class CTruefirePaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTruefirePaladinCard);
};
//____________________________________________________________________________
//
class CRealmwrightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRealmwrightCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility1a(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility1b(CCard* pCard);		
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility2a(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility2b(CCard* pCard);		
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility3a(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility3b(CCard* pCard);		
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility4a(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility4b(CCard* pCard);		
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility5a(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility5b(CCard* pCard);		
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);		

	int_ nSelection;
};
//____________________________________________________________________________
//
class CMysticGenesisCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMysticGenesisCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAdaptiveSnapjawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAdaptiveSnapjawCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAerialManeuverCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAerialManeuverCard);
};

//____________________________________________________________________________
//
class CAgoraphobiaCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAgoraphobiaCard);
};

//____________________________________________________________________________
//
class CAlphaAuthorityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAlphaAuthorityCard);
};

//____________________________________________________________________________
//
class CAngelicEdictCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAngelicEdictCard);
};

//____________________________________________________________________________
//
class CArrowsOfJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CArrowsOfJusticeCard);
};

//____________________________________________________________________________
//
class CBalustradeSpyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBalustradeSpyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBaneAlleyBrokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBaneAlleyBrokerCard);

protected:
	CCountedCardContainer_ pExiled;

	CSelectionSupport m_CardSelection1;
	CSelectionSupport m_CardSelection2;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbilityAux;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction);

	void OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBasilicaScreecherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBasilicaScreecherCard);
};

//____________________________________________________________________________
//
class CBioshiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CBioshiftCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBomberCorpsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBomberCorpsCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CBorosReckonerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorosReckonerCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CBurstOfStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBurstOfStrengthCard);
};

//____________________________________________________________________________
//
class CCartelAristocratCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCartelAristocratCard);

protected:
	CCardFilter m_CardFilter;

	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CClingingAnemonesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClingingAnemonesCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCoercedConfessionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCoercedConfessionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCorpseBlockadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpseBlockadeCard);

protected:
	CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CCourtStreetDenizenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCourtStreetDenizenCard);
};

//______________________________________________________________________________
//
class CCracklingPerimeterCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CCracklingPerimeterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCrownedCeratokCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrownedCeratokCard);
};

//____________________________________________________________________________
//
class CDaringSkyjekCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CDaringSkyjekCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CMasterBiomancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterBiomancerCard);
};

//____________________________________________________________________________
//
class CZameckGuildmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZameckGuildmageCard);
};

//____________________________________________________________________________
//
class CDeathcultRogueCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathcultRogueCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDebtorsPulpitCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDebtorsPulpitCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDevourFleshCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevourFleshCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CDinrovaHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDinrovaHorrorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDiscipleOfTheOldWaysCard : public CPumpCreatureCard
{
    DECLARE_CARD_CSTOR(CDiscipleOfTheOldWaysCard);
};

//____________________________________________________________________________
//
class CDutifulThrullCard : public CRegenerationCreatureCard
{
    DECLARE_CARD_CSTOR(CDutifulThrullCard);
};

//____________________________________________________________________________
//
class CDyingWishCard : public CEnchantCard
{
    DECLARE_CARD_CSTOR(CDyingWishCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CExecutionersSwingCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CExecutionersSwingCard);
};

//____________________________________________________________________________
//
class CForcedAdaptationCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CForcedAdaptationCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CFortressCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFortressCyclopsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFoundryStreetDenizenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFoundryStreetDenizenCard);
};

//______________________________________________________________________________
//
class CFrilledOculusCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFrilledOculusCard);
};

//______________________________________________________________________________
//
class CFuriousResistanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFuriousResistanceCard);
};

//____________________________________________________________________________
//
class CGiftOfOrzhovaCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGiftOfOrzhovaCard);
};

//____________________________________________________________________________
//
class CGreensideWatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreensideWatcherCard);
};

//______________________________________________________________________________
//
class CGrislySpectacleCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrislySpectacleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGuardianOfTheGatelessCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianOfTheGatelessCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGutterSkulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGutterSkulkCard);
};

//______________________________________________________________________________
//
class CHindervinesCard : public CCard
{
	DECLARE_CARD_CSTOR(CHindervinesCard);
};

//______________________________________________________________________________
//
class CHomingLightningCard : public CCard
{
	DECLARE_CARD_CSTOR(CHomingLightningCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHorrorOfTheDimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHorrorOfTheDimCard);
};

//______________________________________________________________________________
//
class CHydroformCard : public CCard
{
	DECLARE_CARD_CSTOR(CHydroformCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIllnessInTheRanksCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIllnessInTheRanksCard);
};

//____________________________________________________________________________
//
class CImmortalServitudeCard : public CCard
{
	DECLARE_CARD_CSTOR(CImmortalServitudeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIvyLaneDenizenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIvyLaneDenizenCard);
};

//____________________________________________________________________________
//
class CKeymasterRogueCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CKeymasterRogueCard);
};

//____________________________________________________________________________
//
class CKillingGlareCard : public CCard
{
	DECLARE_CARD_CSTOR(CKillingGlareCard);
};

//____________________________________________________________________________
//
class CKingpinsPetCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKingpinsPetCard);
};

//____________________________________________________________________________
//
class CKnightOfObligationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfObligationCard);
};

//____________________________________________________________________________
//
class CKnightWatchCard : public CCard
{
	DECLARE_CARD_CSTOR(CKnightWatchCard);
};

//____________________________________________________________________________
//
class CLastThoughtsCard : public CCard
{
    DECLARE_CARD_CSTOR(CLastThoughtsCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMadcapSkillsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMadcapSkillsCard);
};

//____________________________________________________________________________
//
class CMartialGloryCard : public CCard
{
	DECLARE_CARD_CSTOR(CMartialGloryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMassiveRaidCard : public CCard
{
	DECLARE_CARD_CSTOR(CMassiveRaidCard);
};

//____________________________________________________________________________
//
class CMentalVaporsCard : public CCard
{
    DECLARE_CARD_CSTOR(CMentalVaporsCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMerfolkOfTheDepthsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkOfTheDepthsCard);
};

//____________________________________________________________________________
//
class CMetropolisSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMetropolisSpriteCard);
};

//____________________________________________________________________________
//
class CMidnightRecoveryCard : public CCard
{
    DECLARE_CARD_CSTOR(CMidnightRecoveryCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMillennialGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMillennialGargoyleCard);
};

//____________________________________________________________________________
//
class CMindeyeDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMindeyeDrakeCard);
};

//____________________________________________________________________________
//
class CMindGrindCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindGrindCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMortusStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMortusStriderCard);
};

//____________________________________________________________________________
//
class CMuggingCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CMuggingCard);
};

//____________________________________________________________________________
//
class CNavSquadCommandosCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CNavSquadCommandosCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CNimbusSwimmerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNimbusSwimmerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class COneThousandLashesCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(COneThousandLashesCard);

protected:
	CCardFilter m_CardFilter;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class COrdruunVeteranCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(COrdruunVeteranCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CParanoidDelusionsCard : public CCard
{
    DECLARE_CARD_CSTOR(CParanoidDelusionsCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPredatorsRapportCard : public CCard
{
	DECLARE_CARD_CSTOR(CPredatorsRapportCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPrimalVisitationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPrimalVisitationCard);
};

//____________________________________________________________________________
//
class CPsychicStrikeCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CPsychicStrikeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPurgeTheProfaneCard : public CCard
{
	DECLARE_CARD_CSTOR(CPurgeTheProfaneCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRazortipWhipCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRazortipWhipCard);
};

//____________________________________________________________________________
//
class CRiotGearCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRiotGearCard);
};

//____________________________________________________________________________
//
class CRipscalePredatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRipscalePredatorCard);
};

//____________________________________________________________________________
//
class CRuinationWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRuinationWurmCard);
};

//____________________________________________________________________________
//
class CRustScarabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRustScarabCard);
};

//____________________________________________________________________________
//
class CSagesRowDenizenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSagesRowDenizenCard);
};

//____________________________________________________________________________
//
class CSapphireDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSapphireDrakeCard);
};

//____________________________________________________________________________
//
class CScabClanChargerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScabClanChargerCard);
};

//____________________________________________________________________________
//
class CScatterArcCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CScatterArcCard);
};

//____________________________________________________________________________
//
class CScorchwalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScorchwalkerCard);
};

//____________________________________________________________________________
//
class CSereneRemembranceCard : public CCard
{
	DECLARE_CARD_CSTOR(CSereneRemembranceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	bool BeforeResolution0(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShadowAlleyDenizenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowAlleyDenizenCard);
};

//____________________________________________________________________________
//
class CShadowSliceCard : public CCard
{
    DECLARE_CARD_CSTOR(CShadowSliceCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShatteringBlowCard : public CCard
{
	DECLARE_CARD_CSTOR(CShatteringBlowCard);
};

//____________________________________________________________________________
//
class CShieldedPassageCard : public CCard
{
	DECLARE_CARD_CSTOR(CShieldedPassageCard);
};

//____________________________________________________________________________
//
class CSimicManipulatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimicManipulatorCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSkinbrandGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkinbrandGoblinCard);
};

//____________________________________________________________________________
//
class CSkyblinderStaffCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkyblinderStaffCard);
};

//____________________________________________________________________________
//
class CSkygamesCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSkygamesCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSlateStreetRuffianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlateStreetRuffianCard);
};

//____________________________________________________________________________
//
class CSmogElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSmogElementalCard);
};

//____________________________________________________________________________
//
class CSpellRuptureCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpellRuptureCard);

protected:
	class CSpellRuptureAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CSpellRuptureAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CSpellRuptureAbility() {}
	};
};

//____________________________________________________________________________
//
class CFathomMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFathomMageCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CSpireTracerCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CSpireTracerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLuminatePrimordialCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLuminatePrimordialCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMoltenPrimordialCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMoltenPrimordialCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSepulchralPrimordialCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSepulchralPrimordialCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSylvanPrimordialCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanPrimordialCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStructuralCollapseCard : public CCard
{
	DECLARE_CARD_CSTOR(CStructuralCollapseCard);

protected:
	CCountedCardContainer_ pSelected;
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection1;
	void OnCardSelected1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_CardSelection2;
	void OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSyndicateEnforcerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSyndicateEnforcerCard);
};

//____________________________________________________________________________
//
class CTotallyLostCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTotallyLostCard);
};

//____________________________________________________________________________
//
class CTowerDefenseCard : public CCard
{
	DECLARE_CARD_CSTOR(CTowerDefenseCard);
};

//____________________________________________________________________________
//
class CAureliasFuryCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CAureliasFuryCard);
};

//____________________________________________________________________________
//
class CToweringThunderfistCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CToweringThunderfistCard);
};

//____________________________________________________________________________
//
class CUnexpectedResultsCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnexpectedResultsCard);
};
//____________________________________________________________________________
//
class CUrbisProtectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrbisProtectorCard);
};

//____________________________________________________________________________
//
class CVerdantHavenCard : public CCard
{
	DECLARE_CARD_CSTOR(CVerdantHavenCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CVoidwalkCard : public CCard
{
    DECLARE_CARD_CSTOR(CVoidwalkCard);

private:
	CCountedCardContainer_ pEncodeBearer;

	bool SetTriggerContext(CTriggeredCipherCastAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pPlayer, Damage pDamage);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);

	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
};

//____________________________________________________________________________
//
class CWarmindInfantryCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWarmindInfantryCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CWastelandViperCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWastelandViperCard);
};

//____________________________________________________________________________
//
/*
class CWayOfTheThiefCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWayOfTheThiefCard);
};
*/
//____________________________________________________________________________
//
class CWightOfPrecinctSixCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWightOfPrecinctSixCard);
};

//____________________________________________________________________________
//
class CWildwoodRebirthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWildwoodRebirthCard);
};

//____________________________________________________________________________
//
class CWojekHalberdiersCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWojekHalberdiersCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CWreckingOgreCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWreckingOgreCard);
};

//____________________________________________________________________________
//
class CZarichiTigerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CZarichiTigerCard);
};

//____________________________________________________________________________
//