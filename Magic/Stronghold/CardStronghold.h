#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CCrystallineSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrystallineSliverCard);
};

//____________________________________________________________________________
//
class CFlowstoneHellionCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneHellionCard);
};

//____________________________________________________________________________
//
class CRuinationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRuinationCard);
};

//____________________________________________________________________________
//
class CWallOfBlossomsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfBlossomsCard);
};

//____________________________________________________________________________
//
class CHornOfGreedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHornOfGreedCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CConstantMistsCard : public CCard
{
	DECLARE_CARD_CSTOR(CConstantMistsCard);
};

//____________________________________________________________________________
//
class CFanningTheFlamesCard : public CCard
{
	DECLARE_CARD_CSTOR(CFanningTheFlamesCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CCarnassidCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnassidCard);
};

//____________________________________________________________________________
//
class CDungeonShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDungeonShadeCard);
};

//____________________________________________________________________________
//
class CFlowstoneMaulerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneMaulerCard);
};

//____________________________________________________________________________
//
class CFurnaceSpiritCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFurnaceSpiritCard);
};

//____________________________________________________________________________
//
class CHammerheadSharkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHammerheadSharkCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLancersEnKorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLancersEnKorCard);
};

//____________________________________________________________________________
//
class CMorgueThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMorgueThrullCard);
};

//____________________________________________________________________________
//
class CNomadsEnKorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNomadsEnKorCard);
};

//____________________________________________________________________________
//
class CRabidRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRabidRatsCard);
};

//____________________________________________________________________________
//
class CSkyshroudArcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudArcherCard);
};

//____________________________________________________________________________
//
class CSkyshroudTroopersCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshroudTroopersCard);
};

//____________________________________________________________________________
//
class CSliverQueenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSliverQueenCard);
};

//____________________________________________________________________________
//
class CSpindriftDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpindriftDrakeCard);
};

//____________________________________________________________________________
//
class CSpiritEnKorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritEnKorCard);
};

//____________________________________________________________________________
//
class CStrongholdTaskmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdTaskmasterCard);
};

//____________________________________________________________________________
//
class CTidalWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTidalWarriorCard);
};

//____________________________________________________________________________
//
class CWallOfRazorsCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfRazorsCard);
};

//____________________________________________________________________________
//
class CWallOfTearsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfTearsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWarriorAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWarriorAngelCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CWarriorEnKorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarriorEnKorCard);
};

//____________________________________________________________________________
//
class CVolrathsStrongholdCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CVolrathsStrongholdCard);
};

//____________________________________________________________________________
//
class CBullwhipCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBullwhipCard);
};

//____________________________________________________________________________
//
class CSwordOfTheChosenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfTheChosenCard);
};

//____________________________________________________________________________
//
class CAwakeningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAwakeningCard);
};

//____________________________________________________________________________
//
class CBottomlessPitCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBottomlessPitCard);
};

//____________________________________________________________________________
//
class CBurgeoningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBurgeoningCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CContemplationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CContemplationCard);
};

//____________________________________________________________________________
//
class CConvictionCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CConvictionCard);
};

//____________________________________________________________________________
//
class CFlowstoneBladeCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlowstoneBladeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CHeatOfBattleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeatOfBattleCard);
};

//____________________________________________________________________________
//
class CTormentCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTormentCard);
};

//____________________________________________________________________________
//
class CTorturedExistenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTorturedExistenceCard);
};

//____________________________________________________________________________
//
class CVolrathsGardensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVolrathsGardensCard);
};

//____________________________________________________________________________
//
class CChangeOfHeartCard : public CCard
{
	DECLARE_CARD_CSTOR(CChangeOfHeartCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CCrossbowAmbushCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrossbowAmbushCard);
};

//____________________________________________________________________________
//
class CLeapCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CLeapCard);
};

//____________________________________________________________________________
//
class CMindGamesCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindGamesCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CScapegoatCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CScapegoatCard);
};

//____________________________________________________________________________
//
class CSmiteCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSmiteCard);
};

//____________________________________________________________________________
//
class CBrushWithDeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrushWithDeathCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CDeathStrokeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathStrokeCard);
};

//____________________________________________________________________________
//
class CLabRatsCard : public CCard
{
	DECLARE_CARD_CSTOR(CLabRatsCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CMindPeelCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindPeelCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CMobJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMobJusticeCard);
};

//____________________________________________________________________________
//
class CMulchCard : public CCard
{
	DECLARE_CARD_CSTOR(CMulchCard);
};

//____________________________________________________________________________
//
class CSeethingAngerCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeethingAngerCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CShamanEnKorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamanEnKorCard);
};

//____________________________________________________________________________
//
class CMoggManiacCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggManiacCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CAcidicSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAcidicSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CHibernationSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHibernationSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSpinedSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinedSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CVictualSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVictualSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CLowlandBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLowlandBasiliskCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWallOfEssenceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfEssenceCard);

private:
	//bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CWallOfSoulsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfSoulsCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CHornetCannonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHornetCannonCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSamiteBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CSamiteBlessingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CElvenRiteCard : public CCard
{
	DECLARE_CARD_CSTOR(CElvenRiteCard);
};

//____________________________________________________________________________
//
class CMortuaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMortuaryCard);
private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSpikeBreederCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeBreederCard);
};

//____________________________________________________________________________
//
class CSpikeColonyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeColonyCard);
};

//____________________________________________________________________________
//
class CSpikeFeederCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeFeederCard);
};

//____________________________________________________________________________
//
class CSpikeSoldierCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeSoldierCard);
};

//____________________________________________________________________________
//
class CSpikeWorkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeWorkerCard);
};

//____________________________________________________________________________
//
class CSpittingHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpittingHydraCard);
};

//____________________________________________________________________________
//
class CMindwarperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindwarperCard);
};

//____________________________________________________________________________
//
class CShiftingWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShiftingWallCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CHermitDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHermitDruidCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCardFlagModifier m_CardFlagModifier1;
};

//____________________________________________________________________________
//
class CDauthiTrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauthiTrapperCard);
};

//____________________________________________________________________________
//
class CSoltariChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoltariChampionCard);
};

//____________________________________________________________________________
//
class CThalakosDeceiverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThalakosDeceiverCard);

protected:
	CCardFilter m_CardFilter;

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const;
	/* void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener; */
/* protected:
	BOOL CanPlay(BOOL bIncludeTricks); */
};

//____________________________________________________________________________
//
class CRansackCard : public CCard
{
	DECLARE_CARD_CSTOR(CRansackCard);
};

//____________________________________________________________________________
//
class CCrovaxTheCursedCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCrovaxTheCursedCard);
};

//____________________________________________________________________________
//
class CEndangeredArmodonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEndangeredArmodonCard);

private:
    CCardFilter m_CardFilter;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
//class CWalkingDreamCard : public CUnblockableCreatureCard
//{
//	DECLARE_CARD_CSTOR(CWalkingDreamCard);
//
//private:
//	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
//	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
//	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
//	bool SetTriggerContext4(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CCard* pCard, CardType fromCardType, CardType toCardType) const;
//	bool SetTriggerContext5(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CCard* pCard, CardType fromCardType, CardType toCardType) const;
//protected:
//	CCardFilter m_CardFilter;
//};
//
////____________________________________________________________________________
////
class CMoxDiamondCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMoxDiamondCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CJinxedRingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJinxedRingCard);
};

//____________________________________________________________________________
//
class CMoggBombersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggBombersCard);
};

//____________________________________________________________________________
//
class CReinsOfPowerCard : public CCard
{
	DECLARE_CARD_CSTOR(CReinsOfPowerCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDreamHallsCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CDreamHallsCard);
};

//____________________________________________________________________________
//
class CMaskOfTheMimicCard : public CCard
{
	DECLARE_CARD_CSTOR(CMaskOfTheMimicCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVerdantTouchCard : public CCard
{
	DECLARE_CARD_CSTOR(CVerdantTouchCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CMoggInfestationCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoggInfestationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVolrathsLaboratoryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVolrathsLaboratoryCard);

protected:
	VIRTUAL(void, OnColorSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;

	VIRTUAL(void, OnCreatureTypeSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_CreatureTypeSelection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	SingleCreatureType SelectedType;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CContemptCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CContemptCard);

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
class CHesitationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHesitationCard);

protected:
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
