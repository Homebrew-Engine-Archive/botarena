#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CHerosDemiseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHerosDemiseCard);
};

//____________________________________________________________________________
//
class CAkkiBlizzardHerderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiBlizzardHerderCard);
};

//____________________________________________________________________________
//
class CAkkiRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkkiRaiderCard);
};

//____________________________________________________________________________
//
class CAshenMonstrosityCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenMonstrosityCard);
};

//____________________________________________________________________________
//
class CBileUrchinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBileUrchinCard);
};

//____________________________________________________________________________
//
class CBodyOfJukaiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBodyOfJukaiCard);
};

//____________________________________________________________________________
//
class CChildOfThornsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChildOfThornsCard);
};

//____________________________________________________________________________
//
class CCrawlingFilthCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrawlingFilthCard);
};

//____________________________________________________________________________
//
class CForkedBranchGaramiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForkedBranchGaramiCard);
};

//____________________________________________________________________________
//
class CFrostOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrostOgreCard);
};

//____________________________________________________________________________
//
class CFrostlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrostlingCard);
};

//____________________________________________________________________________
//
class CGnarledMassCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGnarledMassCard);
};

//____________________________________________________________________________
//
class CHokoriDustDrinkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHokoriDustDrinkerCard);
};

//____________________________________________________________________________
//
class CIndebtedSamuraiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIndebtedSamuraiCard);
};

//____________________________________________________________________________
//
class CIsaoEnlightenedBushiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIsaoEnlightenedBushiCard);
};

//____________________________________________________________________________
//
class CIwamoriOfTheOpenFistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIwamoriOfTheOpenFistCard);
};

//____________________________________________________________________________
//
class CKaijinOfTheVanishingTouchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKaijinOfTheVanishingTouchCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CKamiOfFalseHopeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfFalseHopeCard);
};

//____________________________________________________________________________
//
class CKamiOfTheHonoredDeadCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTheHonoredDeadCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//_____________________________________________________________________________
//
class CLifespinnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLifespinnerCard);

protected:
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CMoonlitStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonlitStriderCard);
};

//____________________________________________________________________________
//
class CNezumiShadowWatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNezumiShadowWatcherCard);
};

//____________________________________________________________________________
//
class COgreRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreRecluseCard);
};

//____________________________________________________________________________
//
class CPusKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPusKamiCard);
};

//____________________________________________________________________________
//
class CRoninCliffriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoninCliffriderCard);
};

//____________________________________________________________________________
//
class CShinkaGatekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShinkaGatekeeperCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CSilverstormSamuraiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverstormSamuraiCard);
};

//____________________________________________________________________________
//
class CSplitTailMikoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSplitTailMikoCard);
};

//____________________________________________________________________________
//
class CTakenosCavalryCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CTakenosCavalryCard);
};

//____________________________________________________________________________
//
class CTeardropKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTeardropKamiCard);
};

//____________________________________________________________________________
//
class CTraprootKamiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTraprootKamiCard);
};

//____________________________________________________________________________
//
class CYomijiWhoBarsTheWayCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYomijiWhoBarsTheWayCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CYukoraThePrisonerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYukoraThePrisonerCard);
};

//____________________________________________________________________________
//
class CGodsEyeGateToTheReikaiCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGodsEyeGateToTheReikaiCard);
};

//____________________________________________________________________________
//
class COrbOfDreamsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COrbOfDreamsCard);
};

//____________________________________________________________________________
//
class CShukoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShukoCard);
};

//____________________________________________________________________________
//
class CBlessingOfLeechesCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlessingOfLeechesCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDayOfDestinyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDayOfDestinyCard);
};

//____________________________________________________________________________
//
class CInTheWebOfWarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInTheWebOfWarCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CLifegiftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLifegiftCard);
};

//____________________________________________________________________________
//
class CTerashisVerdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CTerashisVerdictCard);
};

//____________________________________________________________________________
//
class CUncheckedGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CUncheckedGrowthCard);
};

//____________________________________________________________________________
//
class CFinalJudgmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CFinalJudgmentCard);
};

//____________________________________________________________________________
//
class CReduceToDreamsCard : public CCard
{
	DECLARE_CARD_CSTOR(CReduceToDreamsCard);
};

//____________________________________________________________________________
//
class CRibbonsOfTheReikaiCard : public CCard
{
	DECLARE_CARD_CSTOR(CRibbonsOfTheReikaiCard);
};

//____________________________________________________________________________
//
class CThreeTragediesCard : public CCard
{
	DECLARE_CARD_CSTOR(CThreeTragediesCard);
};

//____________________________________________________________________________
//
class CUprootCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUprootCard);
};

//____________________________________________________________________________
//
class CUmezawasJitteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUmezawasJitteCard);

/*private:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);*/
};

//____________________________________________________________________________
//
class CTendoIceBridgeCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CTendoIceBridgeCard);
};

//____________________________________________________________________________
//
class CCrackTheEarthCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrackTheEarthCard);
};
/*//____________________________________________________________________________
//
class CNinjaoftheDeepHoursCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNinjaoftheDeepHoursCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};
//____________________________________________________________________________
//*/
class CThatWhichWasTakenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThatWhichWasTakenCard);
};

//____________________________________________________________________________
//
class CIshiIshiAkkiCrackshotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIshiIshiAkkiCrackshotCard);
};

//____________________________________________________________________________
//
class CKamiOfTatteredShojiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamiOfTatteredShojiCard);
};

//____________________________________________________________________________
//
class CKyokiSanitysEclipseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKyokiSanitysEclipseCard);
};

//____________________________________________________________________________
//
class CLoamDwellerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoamDwellerCard);
};

//____________________________________________________________________________
//
class COyobiWhoSplitTheHeavensCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COyobiWhoSplitTheHeavensCard);
};

//____________________________________________________________________________
//
class CScaledHulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScaledHulkCard);
};

//____________________________________________________________________________
//
class CTallowispCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTallowispCard);
};

//____________________________________________________________________________
//
class CBakuAltarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBakuAltarCard);
};

//____________________________________________________________________________
//
class CPsychicSpearCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicSpearCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFloodbringerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFloodbringerCard);
};

//____________________________________________________________________________
//
class CSoratamiMindsweeperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoratamiMindsweeperCard);
};

//____________________________________________________________________________
//
class CThreadsofDisloyaltyCard : public CCard
{
	DECLARE_CARD_CSTOR(CThreadsofDisloyaltyCard);
};

//____________________________________________________________________________
//
class CHarbingerOfSpringCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarbingerOfSpringCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CIreOfKaminariCard : public CCard
{
	DECLARE_CARD_CSTOR(CIreOfKaminariCard);
};

//____________________________________________________________________________
//
class CMarkOfTheOniCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarkOfTheOniCard);

protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTerashisGraspCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTerashisGraspCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRoninWarclubCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRoninWarclubCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGoblinCohortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinCohortCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSosukesSummonsCard : public CCard
{
	DECLARE_CARD_CSTOR(CSosukesSummonsCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CHeartlessHidetsuguCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartlessHidetsuguCard);
};

//____________________________________________________________________________
//
class CMannichiTheFeveredDreamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMannichiTheFeveredDreamCard);
};

//____________________________________________________________________________
//
class CMirrorGalleryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMirrorGalleryCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CScourgeOfNumaiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeOfNumaiCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTakenumaBleederCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTakenumaBleederCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked, 
									CWhenSelfAttackedBlocked::EventCallback, 
									&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCreatureCard* pCreatureCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWardOfPietyCard : public CCard
{
	DECLARE_CARD_CSTOR(CWardOfPietyCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CCallForBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CCallForBloodCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFirstVolleyCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFirstVolleyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStreamOfConsciousnessCard : public CCard
{
	DECLARE_CARD_CSTOR(CStreamOfConsciousnessCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CToilsOfNightAndDayCard : public CCard
{
	DECLARE_CARD_CSTOR(CToilsOfNightAndDayCard);
};

//____________________________________________________________________________
//
class CSwayOfTheStarsCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwayOfTheStarsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CClashOfRealitiesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CClashOfRealitiesCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CKiraGreatGlassSpinnerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKiraGreatGlassSpinnerCard);

private:
	bool SetTriggerContext(CTriggeredAllCounterSpellAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer);	
/*	CCountedCardContainer pContainer;

	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);*/
};
//____________________________________________________________________________
//
class CNinjaoftheDeepHoursCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNinjaoftheDeepHoursCard);

/*protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;*/
};

//____________________________________________________________________________
//
class CHigureTheStillWindCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHigureTheStillWindCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CInkEyesServantOfOniCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CInkEyesServantOfOniCard);
};

//____________________________________________________________________________
//
class CMistbladeShinobiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistbladeShinobiCard);
};

//____________________________________________________________________________
//
class COkibaGangShinobiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COkibaGangShinobiCard);
};

//____________________________________________________________________________
//
class CSkullsnatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkullsnatcherCard);
};

//____________________________________________________________________________
//
class CThroatSlitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThroatSlitterCard);

};

//____________________________________________________________________________
//
class CWalkerOfSecretWaysCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkerOfSecretWaysCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
											   CPlayer* pPlayer, Damage damage) const;

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};
//____________________________________________________________________________
//
class CFlamesOfTheBloodHandCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlamesOfTheBloodHandCard);

};

//____________________________________________________________________________
//
class CBudokaPupilCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CBudokaPupilCard);

private:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CCallowJushiCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CCallowJushiCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CCunningBanditCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CCunningBanditCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CFaithfulSquireCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CFaithfulSquireCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CHiredMuscleCard : public CFlipCreatureCard
{
	DECLARE_CARD_CSTOR(CHiredMuscleCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CDisruptingShoalCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDisruptingShoalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	bool BeforeResolution1(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBlazingShoalCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBlazingShoalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSickeningShoalCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSickeningShoalCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAuraBarbsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAuraBarbsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEnshrinedMemoriesCard : public CCard
{
	DECLARE_CARD_CSTOR(CEnshrinedMemoriesCard);
};

//____________________________________________________________________________
//
class CBlademaneBakuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlademaneBakuCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSkullmaneBakuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkullmaneBakuCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGenjuOfTheCedarsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenjuOfTheCedarsCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGenjuOfTheFallsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenjuOfTheFallsCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGenjuOfTheFensCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenjuOfTheFensCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGenjuOfTheFieldsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenjuOfTheFieldsCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGenjuOfTheSpiresCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenjuOfTheSpiresCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CGenjuOfTheRealmCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenjuOfTheRealmCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CTwistAllegianceCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwistAllegianceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStirTheGraveCard : public CCard
{
	DECLARE_CARD_CSTOR(CStirTheGraveCard);
};

//____________________________________________________________________________
//
class CPetalmaneBakuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPetalmaneBakuCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);
	bool BeforeResolution4(CAbilityAction* pAction);
	bool BeforeResolution5(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CChiseiHeartOfOceansCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChiseiHeartOfOceansCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	CSelectionSupport m_CounterSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CMinamoSightbenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinamoSightbenderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//