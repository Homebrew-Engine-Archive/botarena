#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CGarzaZolPlagueQueenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGarzaZolPlagueQueenCard);
};

//____________________________________________________________________________
//
class CDiscipleOfTeveshSzatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfTeveshSzatCard);
};

//____________________________________________________________________________
//
class CUrsineFylgjaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrsineFylgjaCard);
};

//____________________________________________________________________________
//
class CGristleGrinnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGristleGrinnerCard);
};

//____________________________________________________________________________
//
class CKjeldoranOutriderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranOutriderCard);
};

//____________________________________________________________________________
//
class CKrovikanMistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKrovikanMistCard);
};

//____________________________________________________________________________
//
class CKrovikanScoundrelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrovikanScoundrelCard);
};

//____________________________________________________________________________
//
class CLovisaColdeyesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLovisaColdeyesCard);
};

//____________________________________________________________________________
//
class COrcishBloodpainterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishBloodpainterCard);
};

//____________________________________________________________________________
//
class CRonomUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRonomUnicornCard);
};

//____________________________________________________________________________
//
class CSimianBrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSimianBrawlerCard);
};

//____________________________________________________________________________
//
class CSoundTheCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoundTheCallCard);
};

//____________________________________________________________________________
//
class CSteamSpitterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSteamSpitterCard);
};

//____________________________________________________________________________
//
class CStromgaldCrusaderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CStromgaldCrusaderCard);
};

//____________________________________________________________________________
//
class CWhiteShieldCrusaderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWhiteShieldCrusaderCard);
};

//____________________________________________________________________________
//
class CKjeldoranGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranGargoyleCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CArcticFlatsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CArcticFlatsCard);
};

//____________________________________________________________________________
//
class CBorealShelfCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBorealShelfCard);
};

//____________________________________________________________________________
//
class CFrostMarshCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFrostMarshCard);
};

//____________________________________________________________________________
//
class CHighlandWealdCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHighlandWealdCard);
};

//____________________________________________________________________________
//
class CTresserhornSinksCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTresserhornSinksCard);
};

//____________________________________________________________________________
//
class CJokulmorderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJokulmorderCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
									 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTamanoaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTamanoaCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CHaakonStromgaldScourgeCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHaakonStromgaldScourgeCard);

    protected:
    CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CRiteOfFlameCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiteOfFlameCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAllosaurusRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAllosaurusRiderCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDrelnochCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrelnochCard);
};

//____________________________________________________________________________
//
class CSekKuarDeathkeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSekKuarDeathkeeperCard);
};

//____________________________________________________________________________
//
class CWildernessElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildernessElementalCard);
};

//____________________________________________________________________________
//
class CPerilousResearchCard : public CCard
{
	DECLARE_CARD_CSTOR(CPerilousResearchCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSoulSpikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulSpikeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFuryOfTheHordeCard : public CCard
{
	DECLARE_CARD_CSTOR(CFuryOfTheHordeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSunscourCard : public CCard
{
	DECLARE_CARD_CSTOR(CSunscourCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAurochsHerdCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAurochsHerdCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBullAurochsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBullAurochsCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLightningSerpentCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CLightningSerpentCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CMishrasBaubleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMishrasBaubleCard);
};

//____________________________________________________________________________
//
class CBalduvianRageCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBalduvianRageCard);
};

//____________________________________________________________________________
//
class CMysticMeltingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMysticMeltingCard);
};

//____________________________________________________________________________
//
class CSwiftManeuverCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwiftManeuverCard);
};

//____________________________________________________________________________
//
class CBorealDruidCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CBorealDruidCard);
};

//____________________________________________________________________________
//
class CFrostwebSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrostwebSpiderCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGutlessGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGutlessGhoulCard);
};

//____________________________________________________________________________
//
class CKarplusanWolverineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarplusanWolverineCard);
};

//____________________________________________________________________________
//
class COhranViperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COhranViperCard);

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
class CSquallDrifterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSquallDrifterCard);
};

//____________________________________________________________________________
//
class CChillToTheBoneCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CChillToTheBoneCard);
};

//____________________________________________________________________________
//
class CHeidarRimewindMasterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHeidarRimewindMasterCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CRimewindTaskmageCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRimewindTaskmageCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CSkredCard : public CCard
{
	DECLARE_CARD_CSTOR(CSkredCard);
};

//____________________________________________________________________________
//
class CThermalFluxCard : public CCard
{
	DECLARE_CARD_CSTOR(CThermalFluxCard);
};

//____________________________________________________________________________
//
class CIntoTheNorthCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CIntoTheNorthCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CJuniperOrderRangerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CJuniperOrderRangerCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRonomSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRonomSerpentCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanAttack(BOOL bIncludeTricks);

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CZurTheEnchanterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CZurTheEnchanterCard);
};

//____________________________________________________________________________
//
class CGarzasAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGarzasAssassinCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CControvertCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CControvertCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGrimHarvestCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGrimHarvestCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CKrovikanRotCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CKrovikanRotCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CResizeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CResizeCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSunsBountyCard : public CCard
{
	DECLARE_CARD_CSTOR(CSunsBountyCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CIcefallCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CIcefallCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDarkDepthsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDarkDepthsCard);

private:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CCounterbalanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCounterbalanceCard);

protected:
	typedef 
	TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CGreaterStoneSpiritCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterStoneSpiritCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CFeastOfFleshCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFeastOfFleshCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKjeldoranWarCryCard : public CCard
{
	DECLARE_CARD_CSTOR(CKjeldoranWarCryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhobianPhantasmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhobianPhantasmCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//	
class CFreyalisesRadianceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFreyalisesRadianceCard);

protected:
	CCardFilter m_CardFilter;
	
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSurvivorOfTheUnseenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSurvivorOfTheUnseenCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//	
class CDeepfireElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepfireElementalCard);
};

//____________________________________________________________________________
//
class CDarienKingOfKjeldorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarienKingOfKjeldorCard);

private:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
};

//____________________________________________________________________________
//
class CMartyrOfSandsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMartyrOfSandsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMartyrOfAshesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMartyrOfAshesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMartyrOfSporesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMartyrOfSporesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhyrexianSoulgorgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianSoulgorgerCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
	TriggeredAbility* m_pTriggeredAbility;

private:
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CRimewindCryomancerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRimewindCryomancerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
    CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CBraidOfFireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBraidOfFireCard);

protected:
	CSelectionSupport m_CUSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CHeraldOfLeshracCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHeraldOfLeshracCard);

protected:
	CSelectionSupport m_CUSelection;
	CSelectionSupport m_LandSelection;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnLandSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void LandSelection(CPlayer* pPlayer, DWORD CurrentLand, DWORD TotalLands);
};

//____________________________________________________________________________
//
class CJotunGruntCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJotunGruntCard);

protected:
	CSelectionSupport m_CUSelection;
	CSelectionSupport m_GraveyardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnGraveyardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void GraveyardSelection(CPlayer* pPlayer, DWORD CurrentPair, DWORD TotalPairs);
};

//____________________________________________________________________________
//
class CKarplusanMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarplusanMinotaurCard);

protected:
	CSelectionSupport m_CUSelection;
	CSelectionSupport m_FlipSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void FlipSelection(CPlayer* pPlayer, DWORD CurrentFlip, DWORD TotalFlips);
	void FlipContinue(CPlayer* pPlayer, DWORD CurrentFlip, DWORD TotalFlips);
};

//____________________________________________________________________________
//
class CKjeldoranJavelineerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKjeldoranJavelineerCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
	bool CKjeldoranJavelineerCard::BeforeResolution(CAbilityAction* pAction) const;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CRonomHulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRonomHulkCard);

protected:
	CCardFilter m_CardFilter;

	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		bool BeforeResolution1(CAbilityAction* pAction) const;
		bool BeforeResolution2(CAbilityAction* pAction) const;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CShelteringAncientCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShelteringAncientCard);

protected:
	CSelectionSupport m_CUSelection;
	CSelectionSupport m_CreatureSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void CreatureSelection(CPlayer* pPlayer, DWORD CurrentLand, DWORD TotalLands);
};

//____________________________________________________________________________
//
class CWallOfShardsCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CWallOfShardsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_CUSelection;
	CSelectionSupport m_OpponentSelection;

	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OpponentSelection(CPlayer* pPlayer, DWORD CurrentLand, DWORD TotalLands);
};

//____________________________________________________________________________
//
class CColdsteelHeartCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CColdsteelHeartCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	BOOL CanPlayW(BOOL bIncludeTricks);
	BOOL CanPlayU(BOOL bIncludeTricks);
	BOOL CanPlayB(BOOL bIncludeTricks);
	BOOL CanPlayR(BOOL bIncludeTricks);
	BOOL CanPlayG(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRuneSnagCard : public CCard
{
	DECLARE_CARD_CSTOR(CRuneSnagCard);

protected:
	class CRuneSnagAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CRuneSnagAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CRuneSnagAbility() {}
	};
};

//____________________________________________________________________________
//
class CArcumDagssonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcumDagssonCard);

protected:
	CSelectionSupport m_Selection;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CVexingSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVexingSphinxCard);

protected:
	CSelectionSupport m_CUSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCUSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPhyrexianEtchingsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianEtchingsCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;

	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		bool BeforeResolution1(CAbilityAction* pAction) const;
		bool BeforeResolution2(CAbilityAction* pAction) const;

		bool BeforeResolution3(CAbilityAction* pAction);
		bool BeforeResolution4(CAbilityAction* pAction);

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CBalduvianFrostwakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalduvianFrostwakerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CBlizzardSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlizzardSpecterCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	int_ PlayerID;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage);
	
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, int nValue);
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CSpecialTrigger > TriggeredAbility2;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, int nValue);
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBroodingSaurianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodingSaurianCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CAdarkarValkyrieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAdarkarValkyrieCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//