#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAllayCard: public CCard
{
	DECLARE_CARD_CSTOR (CAllayCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CErtaiWizardAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CErtaiWizardAdeptCard);
};

//____________________________________________________________________________
//
class CShatteringPulseCard: public CCard
{
	DECLARE_CARD_CSTOR (CShatteringPulseCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CVampireHoundsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireHoundsCard);
};

//____________________________________________________________________________
//
class CMindOverMatterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMindOverMatterCard);
};

//____________________________________________________________________________
//
class CCityOfTraitorsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCityOfTraitorsCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	//CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCullingTheWeakCard : public CCard
{
	DECLARE_CARD_CSTOR(CCullingTheWeakCard);
};

//____________________________________________________________________________
//
class CForbidCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CForbidCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNullBroochCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNullBroochCard);
};

//____________________________________________________________________________
//
class CSphereOfResistanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSphereOfResistanceCard);
};

//____________________________________________________________________________
//
class CManiacalRageCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CManiacalRageCard);
};

//____________________________________________________________________________
//
class CCartographerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCartographerCard);
};

//____________________________________________________________________________
//
class CCatBurglarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCatBurglarCard);
};

//____________________________________________________________________________
//
class CEphemeronCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEphemeronCard);
};

//____________________________________________________________________________
//
class CJackalopeHerdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJackalopeHerdCard);
};

//____________________________________________________________________________
//
class CKillerWhaleCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKillerWhaleCard);
};

//____________________________________________________________________________
//
class CMirozelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMirozelCard);
};

//____________________________________________________________________________
//
class CPitSpawnCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPitSpawnCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CPlatedRootwallaCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedRootwallaCard);
};

//____________________________________________________________________________
//
class CPygmyTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CPygmyTrollCard);
};

//____________________________________________________________________________
//
class CRabidWolverinesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRabidWolverinesCard);
};

//____________________________________________________________________________
//
class CRavenousBaboonsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousBaboonsCard);
};

//____________________________________________________________________________
//
class CRecklessOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessOgreCard);
};

//____________________________________________________________________________
//
class CRootwaterAlligatorCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CRootwaterAlligatorCard);
};

//____________________________________________________________________________
//
class CRootwaterMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootwaterMysticCard);
};

//____________________________________________________________________________
//
class CSabertoothWyvernCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSabertoothWyvernCard);
};

//____________________________________________________________________________
//
class CSchoolOfPiranhaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSchoolOfPiranhaCard);
};

//____________________________________________________________________________
//
class CScrivenerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScrivenerCard);
};

//____________________________________________________________________________
//
class CShieldMateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShieldMateCard);
};

//____________________________________________________________________________
//
class CWaywardSoulCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWaywardSoulCard);
};

//____________________________________________________________________________
//
class CWhiptongueFrogCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWhiptongueFrogCard);
};

//____________________________________________________________________________
//
class CErraticPortalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CErraticPortalCard);
};

//____________________________________________________________________________
//
class CMedicineBagCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMedicineBagCard);
};

//____________________________________________________________________________
//
class CSkyshaperCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkyshaperCard);
};

//____________________________________________________________________________
//
class CCursedFleshCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCursedFleshCard);
};

//____________________________________________________________________________
//
class CElvenPalisadeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElvenPalisadeCard);
};

//____________________________________________________________________________
//
class COnslaughtCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COnslaughtCard);
};

//____________________________________________________________________________
//
class CShacklesCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CShacklesCard);
};

//____________________________________________________________________________
//
class CSpellshockCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpellshockCard);
};

//____________________________________________________________________________
//
class CSurvivalOfTheFittestCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSurvivalOfTheFittestCard);
};

//____________________________________________________________________________
//
class CReapingTheRewardsCard : public CCard
{
	DECLARE_CARD_CSTOR(CReapingTheRewardsCard);
};

//____________________________________________________________________________
//
class CScareTacticsCard : public CCard
{
	DECLARE_CARD_CSTOR(CScareTacticsCard);
};

//____________________________________________________________________________
//
class CSlaughterCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlaughterCard);
};

//____________________________________________________________________________
//
class CDeathsDuetCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathsDuetCard);
};

//____________________________________________________________________________
//
class CPegasusStampedeCard : public CCard
{
	DECLARE_CARD_CSTOR(CPegasusStampedeCard);
};

//____________________________________________________________________________
//
class CKeeperOfTheBeastsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKeeperOfTheBeastsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPriceOfProgressCard : public CCard
{
	DECLARE_CARD_CSTOR(CPriceOfProgressCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRecurringNightmareCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRecurringNightmareCard);
};

//____________________________________________________________________________
//
class CPandemoniumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPandemoniumCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCarnophageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnophageCard);

protected:
	CSelectionSupport m_PaymentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSkyshroudEliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudEliteCard);
};

//____________________________________________________________________________
//
class CKeeperOfTheMindCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKeeperOfTheMindCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMindMaggotsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindMaggotsCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CEntropicSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEntropicSpecterCard);
};

//____________________________________________________________________________
//
class CFurnaceBroodCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFurnaceBroodCard);
};

//____________________________________________________________________________
//
class CGrollubCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrollubCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CScaldingSalamanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScaldingSalamanderCard);
};

//____________________________________________________________________________
//
class CSkyshroudWarBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudWarBeastCard);
};

//____________________________________________________________________________
//
class CWelkinHawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWelkinHawkCard);
};

//____________________________________________________________________________
//
class CDizzyingGazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDizzyingGazeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CPredatoryHungerCard : public CCard
{
	DECLARE_CARD_CSTOR(CPredatoryHungerCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};


//____________________________________________________________________________
//
class CResuscitateCard : public CCard
{
	DECLARE_CARD_CSTOR(CResuscitateCard);

protected:
	counted_ptr<CAbility> CreateRegenerationAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSpikeWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeWeaverCard);
};

//____________________________________________________________________________
//
class CSpikeHatcherCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeHatcherCard);
};

//____________________________________________________________________________
//
class CWorkhorseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWorkhorseCard);
};

//____________________________________________________________________________
//
class CAvengingDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvengingDruidCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
}; 

//____________________________________________________________________________
//	
class COathOfDruidsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COathOfDruidsCard);

protected:
	class CTriggeredOathOfDruidsAbility : public CTriggeredAbility<>
	{
	protected:
		CTriggeredOathOfDruidsAbility(CCard* pCard);
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

		ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
							DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	};

	class COathOfDruidsTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class COathOfGhoulsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COathOfGhoulsCard);

protected:
	class CTriggeredOathOfGhoulsAbility : public CTriggeredAbility<>
	{
	protected:
		CTriggeredOathOfGhoulsAbility(CCard* pCard);
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

		ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
							DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	};

	class COathOfGhoulsTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class COathOfLiegesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COathOfLiegesCard);

protected:
	class CTriggeredOathOfLiegesAbility : public CTriggeredAbility<>
	{
	protected:
		CTriggeredOathOfLiegesAbility(CCard* pCard);
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

		ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
							DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	};

	class COathOfLiegesTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class COathOfMagesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COathOfMagesCard);

protected:
	class CTriggeredOathOfMagesAbility : public CTriggeredAbility<>
	{
	protected:
		CTriggeredOathOfMagesAbility(CCard* pCard);
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

		ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
							DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	};

	class COathOfMagesTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class COathOfScholarsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COathOfScholarsCard);

protected:
	class CTriggeredOathOfScholarsAbility : public CTriggeredAbility<>
	{
	protected:
		CTriggeredOathOfScholarsAbility(CCard* pCard);
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

		ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
		void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
							DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	};

	class COathOfScholarsTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE2(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class CMindlessAutomatonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindlessAutomatonCard);
};

//____________________________________________________________________________
//
class CThopterSquadronCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThopterSquadronCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDauthiCutthroatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiCutthroatCard);
};

//____________________________________________________________________________
//
class CDauthiJackalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiJackalCard);
};

//____________________________________________________________________________
//
class CDauthiWarlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiWarlordCard);
};

//____________________________________________________________________________
//
class CThalakosDriftersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CThalakosDriftersCard);
};

//____________________________________________________________________________
//
class CThalakosScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThalakosScoutCard);
};

//____________________________________________________________________________
//
class CSpikeRogueCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeRogueCard);
};

//____________________________________________________________________________
//
class CCinderCrawlerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderCrawlerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CConvalescenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConvalescenceCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CManabondCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManabondCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_Selection;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CParoxysmCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CParoxysmCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CHatredCard : public CCard
{
	DECLARE_CARD_CSTOR(CHatredCard);
};

//____________________________________________________________________________
//
class CPlaguebearerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlaguebearerCard);
};

//____________________________________________________________________________
//
class CBequeathalCard : public CCard
{
	DECLARE_CARD_CSTOR(CBequeathalCard);
};

//____________________________________________________________________________
//
class CReconnaissanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CReconnaissanceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCataclysmCard : public CCard
{
	DECLARE_CARD_CSTOR(CCataclysmCard);

protected:
	CSelectionSupport m_ArtifactSelection;
	CSelectionSupport m_CreatureSelection;
	CSelectionSupport m_EnchantmentSelection;
	CSelectionSupport m_LandSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnArtifactSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnEnchantmentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnLandSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CPlayerContainer Players;
	CCountedCardContainer_ Cards;
	void ArtifactSelection(int nPlayer);
	void CreatureSelection(int nPlayer);
	void EnchantmentSelection(int nPlayer);
	void LandSelection(int nPlayer);
};

//______________________________________________________________________________
//
class CSpikeCannibalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeCannibalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
