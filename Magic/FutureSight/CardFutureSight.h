#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CKorlashHeirToBlackbladeCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CKorlashHeirToBlackbladeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLymphSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLymphSliverCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSliverLegionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSliverLegionCard);
};

//____________________________________________________________________________
//
class CSliversmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSliversmithCard);
};

//____________________________________________________________________________
//
class CTarmogoyfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTarmogoyfCard);
};

//___________________________________________________________________________
//
class CGravenCairnsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGravenCairnsCard);
};

//___________________________________________________________________________
//
class CAugurOfSkullsCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CAugurOfSkullsCard);
};

//____________________________________________________________________________
//
class CAvenAugurCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenAugurCard);
};

//____________________________________________________________________________
//
class CBarrenGloryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBarrenGloryCard);

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
			CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			if (pHand->GetSize() > 0)
				return;
			if (pBattlefield->GetSize() > 1)
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CBarrenGloryCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBladeOfTheSixthPrideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBladeOfTheSixthPrideCard);
};

//___________________________________________________________________________
//
class CBlindPhantasmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindPhantasmCard);
};

//___________________________________________________________________________
//
class CBloodshotTraineeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodshotTraineeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBondedFetchCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBondedFetchCard);
};

//___________________________________________________________________________
//
class CCloudseederCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudseederCard);
};

//____________________________________________________________________________
//
class CEdgeOfAutumnCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CEdgeOfAutumnCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CEmberwildeAugurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmberwildeAugurCard);
};

//___________________________________________________________________________
//
class CEmblemOfTheWarmindCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CEmblemOfTheWarmindCard);
};

//___________________________________________________________________________
//
class CFleshwritherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshwritherCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlowstoneEmbraceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlowstoneEmbraceCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFomoriNomadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFomoriNomadCard);
};

//___________________________________________________________________________
//
class CForceOfSavageryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForceOfSavageryCard);
};

//___________________________________________________________________________
//
class CGhostfireCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CGhostfireCard);
};

//___________________________________________________________________________
//
class CGiftOfGraniteCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGiftOfGraniteCard);
};

//___________________________________________________________________________
//
class CGoldmeadowLookoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldmeadowLookoutCard);
};

//___________________________________________________________________________
//
class CHorizonCanopyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHorizonCanopyCard);
};

//___________________________________________________________________________
//
class CKeldonMegalithsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKeldonMegalithsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLeadenFistsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLeadenFistsCard);
};

//___________________________________________________________________________
//
class CLlanowarAugurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarAugurCard);
};

//___________________________________________________________________________
//
class CLlanowarMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarMentorCard);
};

//___________________________________________________________________________
//
class CLucentLiminidCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLucentLiminidCard);
};

//____________________________________________________________________________
//
class CMagusOfTheMoatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheMoatCard);
};

//___________________________________________________________________________
//
class CMagusOfTheMoonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheMoonCard);
};

//___________________________________________________________________________
//
class CNarcomoebaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNarcomoebaCard);
};

//____________________________________________________________________________
//
class CNessianCourserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNessianCourserCard);
};

//___________________________________________________________________________
//
class CNimbusMazeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNimbusMazeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CNixCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CNixCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CQuagnothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuagnothCard);

	/* public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Bottom, BOOL can_dredge = TRUE); */
};

//___________________________________________________________________________
//
class CRamosianRevivalistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRamosianRevivalistCard);
};

//___________________________________________________________________________
//
class CSarcomiteMyrCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSarcomiteMyrCard);
};

//___________________________________________________________________________
//
class CScourgeOfKherRidgesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeOfKherRidgesCard);
};

//____________________________________________________________________________
//
class CSkirkRidgeExhumerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkRidgeExhumerCard);
};

//___________________________________________________________________________
//
class CSparkspitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSparkspitterCard);
};

//___________________________________________________________________________
//
class CSteamfloggerBossCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteamfloggerBossCard);
};

//___________________________________________________________________________
//
class CStreetWraithCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CStreetWraithCard);
};

//___________________________________________________________________________
//
class CTakePossessionCard : public CCard
{
	DECLARE_CARD_CSTOR(CTakePossessionCard);
};

//___________________________________________________________________________
//
class CThornwealdArcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornwealdArcherCard);
};

//___________________________________________________________________________
//
class CTolariaWestCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTolariaWestCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVedalkenAEthermageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenAEthermageCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWitchsMistCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWitchsMistCard);
};

//___________________________________________________________________________
//
class CCharRumblerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCharRumblerCard);
};

//___________________________________________________________________________
//
class CMarshalingCryCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarshalingCryCard);
};

//_____________________________________________________________________________
//
class CPyromancersSwathCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyromancersSwathCard);

private:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CGrinningIgnusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrinningIgnusCard);
};

//____________________________________________________________________________
//
class CHenchfiendOfUkorCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CHenchfiendOfUkorCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CMagusOfTheVineyardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheVineyardCard);

private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CUtopiaMyconCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUtopiaMyconCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLostAuramancersCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CLostAuramancersCard);

protected:
	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CRavagingRiftwurmCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CRavagingRiftwurmCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	CManaCost m_KickerCost;
};

//____________________________________________________________________________
//
class CSoultetherGolemCard : public CCreatureCard, public CVanishingKeyword
{
	DECLARE_CARD_CSTOR(CSoultetherGolemCard);
};

//____________________________________________________________________________
//
//class CFrenzySliverCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CFrenzySliverCard);
//
//protected:
//	counted_ptr<CAbility> CreateAbility(CCard* pCard);
//	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CNode* pToNode) const;
//};
//
////_______________________________________________________________________________________________
////
class COblivionCrownCard : public CCard
{
	DECLARE_CARD_CSTOR(COblivionCrownCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSporolothAncientCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSporolothAncientCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCrypticAnnelidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrypticAnnelidCard);
};

//____________________________________________________________________________
//
class CNewBenaliaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNewBenaliaCard);
};

//____________________________________________________________________________
//
class CMysticSpeculationCard : public CCard 
{
	DECLARE_CARD_CSTOR(CMysticSpeculationCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CLlanowarEmpathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarEmpathCard);
};

//____________________________________________________________________________
//
class CBaruFistofKrosaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBaruFistofKrosaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLlanowarRebornCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLlanowarRebornCard);
	
protected:
	CGraftKeyword m_GraftKeyword;
};

//____________________________________________________________________________
//
class CMagusOfTheAbyssCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheAbyssCard);
};

//____________________________________________________________________________
//
class CAugurIlVecCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAugurIlVecCard);
};

//____________________________________________________________________________
//
class CCutthroatIlDalCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CCutthroatIlDalCard);
};

//____________________________________________________________________________
//
class CStrongholdRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdRatsCard);
};

//____________________________________________________________________________
//
class CBoundInSilenceCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CBoundInSilenceCard);
};

//____________________________________________________________________________
//
class CMistmeadowSkulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistmeadowSkulkCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTaroxBladewingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTaroxBladewingCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSaltskitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaltskitterCard);

private:
	CCardFilter m_CardFilter_temp;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CBogardanLancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogardanLancerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CRiverofTearsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRiverofTearsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSpiritenDalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritenDalCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGroveoftheBurnwillowsCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGroveoftheBurnwillowsCard);

private:
	void OnResolutionCompleted(const CManaProductionAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<CardTapForManaEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDakmorSalvageCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CDakmorSalvageCard);
};

//____________________________________________________________________________
//
class CSwordoftheMeekCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordoftheMeekCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBridgeFromBelowCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBridgeFromBelowCard);

private:
	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CImperialMaskCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CImperialMaskCard);
};

//____________________________________________________________________________
//
class CWrapInVigorCard : public CCard
{
	DECLARE_CARD_CSTOR(CWrapInVigorCard);
};

//____________________________________________________________________________
//
class CVenserShaperSavantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVenserShaperSavantCard);

protected:
	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

private:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

//___________________________________________________________________________
//
class CSlaughterPactCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSlaughterPactCard);
};

//____________________________________________________________________________
//
class CPactofNegationCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CPactofNegationCard);
};

//_____________________________________________________________________________
//
class CInterventionPactCard : public CCard
{
	DECLARE_CARD_CSTOR(CInterventionPactCard);
};

//_____________________________________________________________________________
//
class CPactOfTheTitanCard : public CCard
{
	DECLARE_CARD_CSTOR(CPactOfTheTitanCard);
};

//_____________________________________________________________________________
//
class CSummonersPactCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSummonersPactCard);
};

//_____________________________________________________________________________
//
class CVirulentSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVirulentSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CHeartwoodStorytellerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartwoodStorytellerCard);
};

//____________________________________________________________________________
//
class CPutridCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPutridCyclopsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CVeilstoneAmuletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVeilstoneAmuletCard);

protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CSnakeCultInitiationCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSnakeCultInitiationCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CEvenTheOddsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CEvenTheOddsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CJudgeUnworthyCard : public CCard 
{
	DECLARE_CARD_CSTOR(CJudgeUnworthyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPatriciansScornCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPatriciansScornCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRiddleOfLightningCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRiddleOfLightningCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMinionsMurmursCard : public CCard 
{
	DECLARE_CARD_CSTOR(CMinionsMurmursCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
//class CMoltenDisasterCard : public CCard 
//{
//	DECLARE_CARD_CSTOR(CMoltenDisasterCard);
//
//protected:
//	bool BeforeResolution(CAbilityAction* pAction) const;
//};
//
//____________________________________________________________________________
//
class CHomingSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHomingSliverCard);

protected:
	CCardFilter m_CardFilter;
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CDryadArborCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDryadArborCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);
};

//____________________________________________________________________________
//
class CMagusOfTheFutureCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheFutureCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CHazeOfRageCard : public CCard
{
	DECLARE_CARD_CSTOR(CHazeOfRageCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
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
class CArcBladeCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CArcBladeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CScoutsWarningCard : public CCard 
{
	DECLARE_CARD_CSTOR(CScoutsWarningCard);
};

//____________________________________________________________________________
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
};

//____________________________________________________________________________
//
class CCyclicalEvolutionCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CCyclicalEvolutionCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDustOfMomentsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDustOfMomentsCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEpochrasiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEpochrasiteCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFlagModifier m_CardFlagModifier3;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;	
protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
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
};

//____________________________________________________________________________
//
class CFesteringMarchCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CFesteringMarchCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CInfiltratorIlKorCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CInfiltratorIlKorCard);
};

//____________________________________________________________________________
//
class CKnightOfSursiCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfSursiCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CNihilithCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CNihilithCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CStormEntityCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CStormEntityCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//___________________________________________________________________________
//
class CPetrifiedPlatingCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPetrifiedPlatingCard);

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
class CRealityStrobeCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CRealityStrobeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
/* class CRiftElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiftElementalCard);

protected:
	CCardFilter m_CardFilter;
};
 */
//___________________________________________________________________________
//
class COrissSamiteGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrissSamiteGuardianCard);

protected:
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter1;
};

//____________________________________________________________________________
//
class CLinessaZephyrMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLinessaZephyrMageCard);

protected:
	CCardFilter m_CardFilter;	
};

//____________________________________________________________________________
//
class CRiftsweeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiftsweeperCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTombstalkerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTombstalkerCard);
};

//____________________________________________________________________________
//
class CDeathRattleCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathRattleCard);
};

//____________________________________________________________________________
//
class CGlitteringWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlitteringWishCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCoalitionRelicCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCoalitionRelicCard);

private:
	typedef
		TTriggeredAbility< CTriggeredProdManaAbilityX, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredProdManaAbilityX::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//___________________________________________________________________________
//
class CBoldwyrIntimidatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoldwyrIntimidatorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDaybreakCoronetCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDaybreakCoronetCard);
};

//___________________________________________________________________________
//
class CWhipSpineDrakeCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWhipSpineDrakeCard);
};

//____________________________________________________________________________
//
class CSecondWindCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CSecondWindCard);
};

//____________________________________________________________________________
//
class CGraveScrabblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGraveScrabblerCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
				 			CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
};

//_____________________________________________________________________________
//
class CCloudKeyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCloudKeyCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	CardType SelectedType;
};

//____________________________________________________________________________
//
class CPhosphorescentFeastCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPhosphorescentFeastCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CCentaurOmenreaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurOmenreaderCard);
};

//____________________________________________________________________________
//
