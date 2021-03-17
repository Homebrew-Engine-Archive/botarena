#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CKinshipCreatureCard : public CCreatureCard
{
protected:
	CKinshipCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
							 LPCTSTR strCostText, Power nPower, Life nToughness);

	virtual ~CKinshipCreatureCard() {}

	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredKinshipAbility;

	bool BeforeResolution(TriggeredKinshipAbility::TriggeredActionType* pAction);
	VIRTUAL(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_KinshipSelection;
};

//____________________________________________________________________________
//
class CHeritageDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeritageDruidCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CIdyllicTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CIdyllicTutorCard);
};

//____________________________________________________________________________
//
class CMosquitoGuardCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CMosquitoGuardCard);
};

//____________________________________________________________________________
//
class CAmbassadorOakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmbassadorOakCard);
};

//____________________________________________________________________________
//
class CBlightsoilDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightsoilDruidCard);
};

//____________________________________________________________________________
//
class CBoldwyrHeavyweightsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoldwyrHeavyweightsCard);
};

//____________________________________________________________________________
//
class CBorderlandBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorderlandBehemothCard);
};

//____________________________________________________________________________
//
class CBurrentonBombardierCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBurrentonBombardierCard);
};

//____________________________________________________________________________
//
class CBurrentonShieldBearersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBurrentonShieldBearersCard);
};

//____________________________________________________________________________
//
class CDailyRegimenCard : public CCard
{
	DECLARE_CARD_CSTOR(CDailyRegimenCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDewdropSpyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDewdropSpyCard);
};

//____________________________________________________________________________
//
class CDisperseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDisperseCard);
};

//____________________________________________________________________________
//
class CEarthbrawnCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CEarthbrawnCard);
};

//____________________________________________________________________________
//
class CFencerCliqueCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFencerCliqueCard);
};

//____________________________________________________________________________
//
class CFinalStingFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFinalStingFaerieCard);
};

//____________________________________________________________________________
//
class CGreatbowDoyenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreatbowDoyenCard);

protected:
	CCardFilter m_CardFilter;

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										   CCard* pCard, CCreatureCard* pCreatureCard, Damage damage) const;
};

//____________________________________________________________________________
//
class CIndomitableAncientsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIndomitableAncientsCard);
};

//____________________________________________________________________________
//
class CInspiredSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CInspiredSpriteCard);

protected:
	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLunkErrantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLunkErrantCard);
};

//____________________________________________________________________________
//
class CLysAlanaBowmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLysAlanaBowmasterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMerrowWitsniperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowWitsniperCard);
};

//____________________________________________________________________________
//
class COrchardWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrchardWardenCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class COrderOfTheGoldenCricketCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfTheGoldenCricketCard);
};

//____________________________________________________________________________
//
class CPricklyBoggartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPricklyBoggartCard);
};

//____________________________________________________________________________
//
class CRhysTheExiledCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRhysTheExiledCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSeethingPathblazerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSeethingPathblazerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShardVolleyCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CShardVolleyCard);
};

//____________________________________________________________________________
//
class CStenchskipperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStenchskipperCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CStonybrookSchoolmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonybrookSchoolmasterCard);
};

//____________________________________________________________________________
//
class CSwellOfCourageCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwellOfCourageCard);

protected:
	bool BeforeResolution (CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWeedPrunerPoplarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeedPrunerPoplarCard);
};

//____________________________________________________________________________
//
class CWeirdingShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeirdingShamanCard);
};

//____________________________________________________________________________
//
class CKinsbaileCavalierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKinsbaileCavalierCard);
};

//____________________________________________________________________________
//
class CBitterblossomCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CBitterblossomCard);
};

//____________________________________________________________________________
//
class CNevermakerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNevermakerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class COffalsnoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COffalsnoutCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CReveillarkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CReveillarkCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSpitebellowsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpitebellowsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CWalkerOfTheGroveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkerOfTheGroveCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CHostileRealmCard : public CCard 
{
	DECLARE_CARD_CSTOR(CHostileRealmCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CForfendCard : public CCard
{
	DECLARE_CARD_CSTOR(CForfendCard);
};

//____________________________________________________________________________
//
class CSupremeExemplarCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSupremeExemplarCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CLightningCrafterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CLightningCrafterCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CUnstoppableAshCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CUnstoppableAshCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;	
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature) const;

};

//____________________________________________________________________________
//
class CSlithermuseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlithermuseCard);

private:
	typedef
	TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFestercreepCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFestercreepCard);
};

//____________________________________________________________________________
//
class CFloodchaserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFloodchaserCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CShinewendCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShinewendCard);
};

//____________________________________________________________________________
//
class CStingmoggieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStingmoggieCard);
};

//____________________________________________________________________________
//
class CCountrysideCrusherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCountrysideCrusherCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CResearchtheDeepCard : public CCard
{
	DECLARE_CARD_CSTOR(CResearchtheDeepCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRedeemTheLostCard : public CCard
{
	DECLARE_CARD_CSTOR(CRedeemTheLostCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CReleaseTheAntsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CReleaseTheAntsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CReviveTheFallenCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReviveTheFallenCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTitansRevengeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTitansRevengeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSunflareShamanCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSunflareShamanCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CChameleonColossusCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CChameleonColossusCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CChangelingSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChangelingSentinelCard);
};

//____________________________________________________________________________
//
class CGameTrailChangelingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGameTrailChangelingCard);
};

//____________________________________________________________________________
//
class CMoongloveChangelingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoongloveChangelingCard);
};

//____________________________________________________________________________
//
class CMothdustChangelingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMothdustChangelingCard);
};

//____________________________________________________________________________
//
class CTaureanMaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTaureanMaulerCard);
};

//____________________________________________________________________________
//
class CWarSpikeChangelingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWarSpikeChangelingCard);
};

//____________________________________________________________________________
//
class CMutavaultCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMutavaultCard);
};

//____________________________________________________________________________
//
class CSensationGorgerCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CSensationGorgerCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};
//____________________________________________________________________________
//
class CVendilionCliqueCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVendilionCliqueCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEverbarkShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEverbarkShamanCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScarbladeEliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScarbladeEliteCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVengefulFirebrandCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CVengefulFirebrandCard);
/* 
private:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext4(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CardType fromCardType, CardType toCardType) const;
	bool SetTriggerContext5(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CardType fromCardType, CardType toCardType) const;
	bool SetTriggerContext6(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
protected:
	CCardFilter m_CardFilter; */
};

//____________________________________________________________________________
//
class CRusticClachanCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CRusticClachanCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSagesDousingCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CSagesDousingCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStreamOfUnconsciousnessCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CStreamOfUnconsciousnessCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CVioletPallCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CVioletPallCard);
};

//____________________________________________________________________________
//
class CHuntingTriadCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CHuntingTriadCard);
};

//____________________________________________________________________________
//
class COonasBlackguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COonasBlackguardCard);

/*
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
*/
};

//____________________________________________________________________________
//
class CMorselTheftCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CMorselTheftCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CStinkdrinkerBanditCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStinkdrinkerBanditCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CThievesFortuneCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CThievesFortuneCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBramblewoodParagonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBramblewoodParagonCard);
	
/*
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
*/
};
//____________________________________________________________________________
//
class CFrogtosserBanneretCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CFrogtosserBanneretCard);
};

//____________________________________________________________________________
//
class CStonybrookBanneretCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CStonybrookBanneretCard);
};

//____________________________________________________________________________
//
class CBallyrushBanneretCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBallyrushBanneretCard);
};

//____________________________________________________________________________
//
class CBoskBanneretCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoskBanneretCard);
};

//____________________________________________________________________________
//
class CBrighthearthBanneretCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrighthearthBanneretCard);
};

//____________________________________________________________________________
//
class CMurmuringBoskCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMurmuringBoskCard);

protected:
	CCardFilter m_CardFilter;	
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	private:
	void OnResolutionCompleted(const CManaProductionAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<CardTapForManaEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CEarwigSquadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEarwigSquadCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};
//____________________________________________________________________________
//
class CNogginWhackCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CNogginWhackCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CNotoriousThrongCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CNotoriousThrongCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLatchkeyFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLatchkeyFaerieCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);	
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);

};
//____________________________________________________________________________
//
class CWarrenWeirdingCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CWarrenWeirdingCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSageOfFablesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSageOfFablesCard);

/*
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
*/
};

//____________________________________________________________________________
//
class CWolfSkullShamanCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CWolfSkullShamanCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CWinnowerPatrolCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CWinnowerPatrolCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CMudbuttonClangerCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CMudbuttonClangerCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CInkDissolverCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CInkDissolverCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CKithkinZephyrnautCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinZephyrnautCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CNightshadeSchemersCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CNightshadeSchemersCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CWanderingGraybeardCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderingGraybeardCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSqueakingPieGrubfellowsCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CSqueakingPieGrubfellowsCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPyroclastConsulCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CPyroclastConsulCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CWaterspoutWeaversCard : public CKinshipCreatureCard
{
	DECLARE_CARD_CSTOR(CWaterspoutWeaversCard);

protected:
	OVERRIDE(void, OnKinshipSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCloakandDaggerCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CCloakandDaggerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDivinersWandCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CDivinersWandCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CObsidianBattleAxeCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CObsidianBattleAxeCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CThornbiteStaffCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CThornbiteStaffCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CVeteransArmamentsCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CVeteransArmamentsCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::EventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAuntiesSnitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuntiesSnitchCard);

protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealtAny,
							CWhenDamageDealtAny::PlayerEventCallback,
							&CWhenDamageDealtAny::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CReachOfBranchesCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CReachOfBranchesCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CScapeshiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CScapeshiftCard);
};

//____________________________________________________________________________
//
class CFertilidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFertilidCard);
};

//____________________________________________________________________________
//
class CRageForgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRageForgerCard);

private:
	CCardFilter m_CardFilter;	
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CGiltLeafArchdruidCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGiltLeafArchdruidCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPreeminentCaptainCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CPreeminentCaptainCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CReinsOfTheVinesteedCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CReinsOfTheVinesteedCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	TriggeredAbility* pAbility;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDistantMelodyCard : public CCard
{
	DECLARE_CARD_CSTOR(CDistantMelodyCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLuminescentRainCard : public CCard
{
	DECLARE_CARD_CSTOR(CLuminescentRainCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPacksDisdainCard : public CCard
{
	DECLARE_CARD_CSTOR(CPacksDisdainCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCoordinatedBarrageCard : public CCard
{
	DECLARE_CARD_CSTOR(CCoordinatedBarrageCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRoaroftheCrowdCard : public CCard
{
	DECLARE_CARD_CSTOR(CRoaroftheCrowdCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCennsTacticianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCennsTacticianCard);
};

//____________________________________________________________________________
//
class CDeglamerCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeglamerCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSigilTracerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSigilTracerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStonehewerGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonehewerGiantCard);

protected:
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;

	bool BeforeResolution(CAbilityAction* pAction);
	CCard* pEquipment;
};

//____________________________________________________________________________
//
class CMaralenOfTheMornsongCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaralenOfTheMornsongCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRecrossThePathsCard : public CCard
{
	DECLARE_CARD_CSTOR(CRecrossThePathsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStompingSlabsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CStompingSlabsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDeclarationOfNaughtCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeclarationOfNaughtCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	LPCTSTR SelectedName;
};

//____________________________________________________________________________
//
class CCreamOfTheCropCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCreamOfTheCropCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CSelectionSupport m_YesNoSelection;
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
/*
class CDoorOfDestiniesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDoorOfDestiniesCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};
*/
//____________________________________________________________________________
//
class CKinsbaileBorderguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKinsbaileBorderguardCard);

protected:
	CCardFilter m_CardFilter;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener1;	// Listen to this card's zone changes

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener2;

	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFeudkillersVerdictCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CFeudkillersVerdictCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFendeepSummonerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFendeepSummonerCard);
};

//______________________________________________________________________________
//
class CGracefulReprieveCard : public CCard
{
	DECLARE_CARD_CSTOR(CGracefulReprieveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
