#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAvacynAngelOfHopeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvacynAngelOfHopeCard);
};

//____________________________________________________________________________
//
class CDemonlordOfAshmouthCard : public CFlyingCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CDemonlordOfAshmouthCard);
};

//____________________________________________________________________________
//
class CDemonicTaskmasterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDemonicTaskmasterCard);
};

//____________________________________________________________________________
//
class CGriselbrandCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGriselbrandCard);
};

//____________________________________________________________________________
//
class CHowlgeistCard : public CFearCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CHowlgeistCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCloudshiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CCloudshiftCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CRestorationAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRestorationAngelCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CCraterhoofBehemothCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CCraterhoofBehemothCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CDruidsRepositoryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDruidsRepositoryCard);
};

//____________________________________________________________________________
//
class CLatchSeekerCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CLatchSeekerCard);
};

//____________________________________________________________________________
//
class CMoonsilverSpearCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoonsilverSpearCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};
//_____________________________________________________________________________
//
class CAngelsTombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelsTombCard);
};

//____________________________________________________________________________
//
class CArcaneMeleeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArcaneMeleeCard);
};

//____________________________________________________________________________
//
class CHarvesterOfSoulsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarvesterOfSoulsCard);
};

//____________________________________________________________________________
//
class CEmancipationAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmancipationAngelCard);
};

//____________________________________________________________________________
//
class CTamiyoTheMoonSageCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CTamiyoTheMoonSageCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCatharsCrusadeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCatharsCrusadeCard);
};

//____________________________________________________________________________
//
class CTibaltTheFiendBloodedCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CTibaltTheFiendBloodedCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDesolateLighthouseCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDesolateLighthouseCard);
};

//____________________________________________________________________________
//
class CHeraldOfWarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHeraldOfWarCard);
};

//____________________________________________________________________________
//
class CAppetiteForBrainsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAppetiteForBrainsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoldnightRedeemerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldnightRedeemerCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CNephaliaSmugglerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNephaliaSmugglerCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CAngelOfGlorysRiseCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfGlorysRiseCard);

private:
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CDefyDeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CDefyDeathCard);

protected:
	CCardFilter m_CardFilter;
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDemonicRisingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDemonicRisingCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHumanFrailtyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHumanFrailtyCard);
};

//____________________________________________________________________________
//
class CThrabenValiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrabenValiantCard);
};

//____________________________________________________________________________
//
class CSlayersStrongholdCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSlayersStrongholdCard);
};

//____________________________________________________________________________
//
class CCommandersAuthorityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCommandersAuthorityCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CTreacherousPitDwellerCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CTreacherousPitDwellerCard);
};

//____________________________________________________________________________
//
class CTriumphOfCrueltyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTriumphOfCrueltyCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTriumphOfFerocityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTriumphOfFerocityCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSoulOfTheHarvestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulOfTheHarvestCard);
};

//____________________________________________________________________________
//
class CAlchemistsRefugeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAlchemistsRefugeCard);
};

//_____________________________________________________________________________
//
class CArchwingDragonCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CArchwingDragonCard);
};

//____________________________________________________________________________
//
class CExquisiteBloodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExquisiteBloodCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CPillarOfFlameCard : public CCard
{
	DECLARE_CARD_CSTOR(CPillarOfFlameCard);
};

//____________________________________________________________________________
//
class CUlvenwaldTrackerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CUlvenwaldTrackerCard);

protected:
	class CUlvenwaldTrackerSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CUlvenwaldTrackerSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CUlvenwaldTrackerSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CWolfirAvengerCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CWolfirAvengerCard);
};

//____________________________________________________________________________
//
class CThatcherRevoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CThatcherRevoltCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFarbogExplorerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CFarbogExplorerCard);
};

//____________________________________________________________________________
//
class CLeapOfFaithCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CLeapOfFaithCard);
};

//____________________________________________________________________________
//
class CVoiceOfTheProvincesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfTheProvincesCard);
};

//____________________________________________________________________________
//
class CHavengulSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHavengulSkaabCard);
};

//____________________________________________________________________________
//
class CLunarMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLunarMysticCard);
};

//____________________________________________________________________________
//
class CRotcrownGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRotcrownGhoulCard);
};

//____________________________________________________________________________
//
class CSpectralPrisonCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSpectralPrisonCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CEvernightShadeCard : public CPumpCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CEvernightShadeCard);
};

//____________________________________________________________________________
//
class CMaalfeldTwinsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaalfeldTwinsCard);
};

//______________________________________________________________________________
//
class CGangOfDevilsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGangOfDevilsCard);
};

//______________________________________________________________________________
//
class CHavengulVampireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHavengulVampireCard);
};

//______________________________________________________________________________
//
class CHoundOfGriselbrandCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CHoundOfGriselbrandCard);
};

//____________________________________________________________________________
//
class CKessigMalcontentsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKessigMalcontentsCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CKruinStrikerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKruinStrikerCard);
};

//____________________________________________________________________________
//
class CRiotRingleaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiotRingleaderCard);
};

//____________________________________________________________________________
//
class CRushOfBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CRushOfBloodCard);
};

//____________________________________________________________________________
//
class CSomberwaldVigilanteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSomberwaldVigilanteCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;

};

//______________________________________________________________________________
//
class CGroundedCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGroundedCard);
};

//____________________________________________________________________________
//
class CBuildersBlessingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBuildersBlessingCard);
};

//____________________________________________________________________________
//
class CCallToServeCard : public CChgPwrTghAttrEnchantCard 
{
	DECLARE_CARD_CSTOR(CCallToServeCard);
};

//____________________________________________________________________________
//
class CCathedralSanctifierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCathedralSanctifierCard);
};

//____________________________________________________________________________
//
class CCursebreakCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCursebreakCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDefangCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDefangCard);
};

//____________________________________________________________________________
//
class CDevoutChaplainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevoutChaplainCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoldnightCommanderCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGoldnightCommanderCard);
};

//____________________________________________________________________________
//
class CHolyJusticiarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHolyJusticiarCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMidnightDuelistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMidnightDuelistCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMidvastProtectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMidvastProtectorCard);
};

//____________________________________________________________________________
//
class CMoonlightGeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonlightGeistCard);
};

//____________________________________________________________________________
//
class CMoorlandInquisitorCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMoorlandInquisitorCard);
};

//______________________________________________________________________________
//
class CRighteousBlowCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRighteousBlowCard);
};

//____________________________________________________________________________
//
class CSeraphOfDawnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeraphOfDawnCard);
};

//____________________________________________________________________________
//
class CZealousStrikeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CZealousStrikeCard);
};

//____________________________________________________________________________
//
class CAlchemistsApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlchemistsApprenticeCard);
};

//____________________________________________________________________________
//
class CAmassTheComponentsCard: public CCard
{
	DECLARE_CARD_CSTOR (CAmassTheComponentsCard);
};

//____________________________________________________________________________
//
class CCaptainOfTheMistsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaptainOfTheMistsCard);
};

//____________________________________________________________________________
//
class CCripplingChillCard : public CCard
{
	DECLARE_CARD_CSTOR(CCripplingChillCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDreadwatersCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreadwatersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFavorableWindsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFavorableWindsCard);
};

//____________________________________________________________________________
//
class CGeistSnatchCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CGeistSnatchCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGhostformCard : public CCard
{
	DECLARE_CARD_CSTOR(CGhostformCard);
};

//____________________________________________________________________________
//
class CGryffVanguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGryffVanguardCard);
};

//____________________________________________________________________________
//
class CIntoTheVoidCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CIntoTheVoidCard);
};

//____________________________________________________________________________
//
class CLoneRevenantCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CLoneRevenantCard);

protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CPlayer* pPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMassAppealCard : public CCard
{
	DECLARE_CARD_CSTOR(CMassAppealCard);
};

//____________________________________________________________________________
//
class CMistRavenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMistRavenCard);
};

//____________________________________________________________________________
//
class CScrapskinDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScrapskinDrakeCard);

};

//____________________________________________________________________________
//
class CSpiritAwayCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiritAwayCard);
};

//____________________________________________________________________________
//
class CBloodArtistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodArtistCard);
};

//______________________________________________________________________________
//
class CBloodflowConnoisseurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodflowConnoisseurCard);
};

//____________________________________________________________________________
//
class CButcherGhoulCard : public CCreatureCard, public CUndyingKeyword
{
	DECLARE_CARD_CSTOR(CButcherGhoulCard);
};

//____________________________________________________________________________
//
class CCorpseTradersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpseTradersCard);
};

//____________________________________________________________________________
//
class CDeathWindCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDeathWindCard);
};

//____________________________________________________________________________
//
class CDriverOfTheDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDriverOfTheDeadCard);
};

//____________________________________________________________________________
//
class CEssenceHarvestCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEssenceHarvestCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHuntedGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntedGhoulCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMarrowBatsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMarrowBatsCard);
};

//____________________________________________________________________________
//
class CMentalAgonyCard : public CCard
{
	DECLARE_CARD_CSTOR(CMentalAgonyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CNecrobiteCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CNecrobiteCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//___________________________________________________________________________
//
class CPollutedDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPollutedDeadCard);
};

//____________________________________________________________________________
//
class CRenegadeDemonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRenegadeDemonCard);
};

//____________________________________________________________________________
//
class CSearchlightGeistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSearchlightGeistCard);
};

//____________________________________________________________________________
//
class CSoulcageFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulcageFiendCard);
};

//____________________________________________________________________________
//
class CUndeadExecutionerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadExecutionerCard);
};

//____________________________________________________________________________
//
class CUnhallowedPactCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CUnhallowedPactCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CCard* pEnchantedCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBannersRaisedCard : public CCard
{
	DECLARE_CARD_CSTOR(CBannersRaisedCard);
};

//____________________________________________________________________________
//
class CBattleHymnCard : public CCard
{
	DECLARE_CARD_CSTOR(CBattleHymnCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDangerousWagerCard : public CCard
{
	DECLARE_CARD_CSTOR(CDangerousWagerCard);
};

//____________________________________________________________________________
//
class CFalkenrathExterminatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFalkenrathExterminatorCard);
	
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//______________________________________________________________________________
//
class CFerventCatharCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CFerventCatharCard);
};

//______________________________________________________________________________
//
class CGuiseOfFireCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGuiseOfFireCard);
};

//______________________________________________________________________________
//
class CHeirsOfStromkirkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeirsOfStromkirkCard);
};

//______________________________________________________________________________
//
class CLightningProwessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLightningProwessCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CMadProphetCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMadProphetCard);
};

//____________________________________________________________________________
//
class CMaliciousIntentCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMaliciousIntentCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CRagingPoltergeistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingPoltergeistCard);
};

//____________________________________________________________________________
//
class CScaldingDevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScaldingDevilCard);
};

//____________________________________________________________________________
//
class CTyrantOfDiscordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTyrantOfDiscordCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

private:
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CUncannySpeedCard : public CCard
{
	DECLARE_CARD_CSTOR(CUncannySpeedCard);
};

//____________________________________________________________________________
//
class CVigilanteJusticeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVigilanteJusticeCard);
};

//____________________________________________________________________________
//
class CBowerPassageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBowerPassageCard);
};

//____________________________________________________________________________
//
class CEatenBySpidersCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CEatenBySpidersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLairDelveCard : public CCard
{
	DECLARE_CARD_CSTOR(CLairDelveCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNaturalEndCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CNaturalEndCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CNettleSwineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNettleSwineCard);
};

//____________________________________________________________________________
//
class CSnareTheSkiesCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSnareTheSkiesCard);
};

//____________________________________________________________________________
//
class CTimberlandGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTimberlandGuideCard);
};

//____________________________________________________________________________
//
class CVorstclawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVorstclawCard);
};

//____________________________________________________________________________
//
class CWanderingWolfCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderingWolfCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWildDefianceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWildDefianceCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CYewSpiritCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CYewSpiritCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAngelicArmamentsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicArmamentsCard);
};

//____________________________________________________________________________
//
class CConjurersClosetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConjurersClosetCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CGallowsAtWillowHillCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGallowsAtWillowHillCard);

private:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHauntedGuardianCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CHauntedGuardianCard);
};

//____________________________________________________________________________
//
class CNarstadScrapperCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CNarstadScrapperCard);
};

//____________________________________________________________________________
//
class COtherworldAtlasCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COtherworldAtlasCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CScrollOfAvacynCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScrollOfAvacynCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CScrollOfGriselbrandCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScrollOfGriselbrandCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CTormentorsTridentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTormentorsTridentCard);
};

//____________________________________________________________________________
//
class CVesselOfEndlessRestCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVesselOfEndlessRestCard);
};

//____________________________________________________________________________
//
class CSeraphSanctuaryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSeraphSanctuaryCard);
};

//____________________________________________________________________________
//
class CVanguardsShieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVanguardsShieldCard);
};

//____________________________________________________________________________
//
class CZealousConscriptsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CZealousConscriptsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CDualCastingCard : public CCard
{
	DECLARE_CARD_CSTOR(CDualCastingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};
//____________________________________________________________________________
//
class CShelteringWordCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CShelteringWordCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CVexingDevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVexingDevilCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void Advance(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CPrimalSurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CPrimalSurgeCard);

protected:
	CSelectionSupport m_BattlefieldSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void BattlefieldChoice(CCard* pCard);
	void OnBattlefieldSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
/*
class CBladedBracersCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBladedBracersCard);
};
*/
//____________________________________________________________________________
//
class CWolfirSilverheartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWolfirSilverheartCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CTemporalMasteryCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTemporalMasteryCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CBanishingStrokeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CBanishingStrokeCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CBonfireOfTheDamnedCard : public CCard 
{
	DECLARE_CARD_CSTOR(CBonfireOfTheDamnedCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CDevastationTideCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDevastationTideCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CEntreatTheAngelsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CEntreatTheAngelsCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CReforgeTheSoulCard : public CCard 
{
	DECLARE_CARD_CSTOR(CReforgeTheSoulCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CRevengeOfTheHuntedCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRevengeOfTheHuntedCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CTerminusCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTerminusCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CThunderousWrathCard : public CCard 
{
	DECLARE_CARD_CSTOR(CThunderousWrathCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CVanishmentCard : public CCard 
{
	DECLARE_CARD_CSTOR(CVanishmentCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

protected:
	VIRTUAL(void, OnYesNoSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_YesNoSelection;

	typedef
			TTriggeredAbility< CTriggeredMiracleAbility, CSpecialTrigger > TriggeredAbility;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
/*
class CDiregrafEscortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiregrafEscortCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;
	
	CCardFilter m_CardFilter;
};

*/
//____________________________________________________________________________
//
class CDruidsFamiliarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDruidsFamiliarCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CElgaudShieldmateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElgaudShieldmateCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CGalvanicAlchemistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGalvanicAlchemistCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

	counted_ptr<CAbility> CreateUntapAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CGeistTrappersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGeistTrappersCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CHanweirLancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHanweirLancerCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CLightningMaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLightningMaulerCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CNearheathPilgrimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNearheathPilgrimCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CNightshadePeddlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightshadePeddlerCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CPathbreakerWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPathbreakerWurmCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CSilverbladePaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverbladePaladinCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CSpectralGateguardsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralGateguardsCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CTrustedForcemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrustedForcemageCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CWingcrafterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWingcrafterCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CStonewrightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonewrightCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

	counted_ptr<CAbility> CreateUntapAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSternMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSternMentorCard);

protected:
	bool SetTriggerContext(CTriggeredSoulbondAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	typedef
		TTriggeredSubjectAbility< CTriggeredSoulbondAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;

	typedef TTriggeredAbility< CTriggeredSoulbondAbility, CWhenCardMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

	counted_ptr<CAbility> CreateUntapAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CHomicidalSeclusionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHomicidalSeclusionCard);
};

//____________________________________________________________________________
//
class CMalignusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMalignusCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDescentIntoMadnessCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDescentIntoMadnessCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	CSelectionSupport m_Selection;
	void SelectionFunction(int PlayerID);
	void Advance(int PlayerID);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBurnAtTheStakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurnAtTheStakeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAbundantGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbundantGrowthCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility4(CCard* pCard);
};

//____________________________________________________________________________
//
class CGhostlyFlickerCard : public CCard
{
	DECLARE_CARD_CSTOR(CGhostlyFlickerCard);

protected:	
	counted_ptr<CTargetSpell> m_pTargetSpell;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CChampionOfLambholtCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChampionOfLambholtCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAggravateCard : public CCard
{
	DECLARE_CARD_CSTOR(CAggravateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//