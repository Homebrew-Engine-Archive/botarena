#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CGideonsAvengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGideonsAvengerCard);
};

//____________________________________________________________________________
//
class CGideonsLawkeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGideonsLawkeeperCard);
};

//____________________________________________________________________________
//
class CPhantasmalBearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantasmalBearCard);
};

//____________________________________________________________________________
//
class CBloodrageVampireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodrageVampireCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CDuskhunterBatCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskhunterBatCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CVampireOutcastsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireOutcastsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
// 
class CFurybornHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFurybornHellkiteCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGorehornMinotaursCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGorehornMinotaursCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CDungroveElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDungroveElderCard);
};

//____________________________________________________________________________
//
class CTormentedSoulCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CTormentedSoulCard);
};

//____________________________________________________________________________
//
class CArchonOfJusticeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArchonOfJusticeCard);
};

//____________________________________________________________________________
//
class CAuramancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuramancerCard);
};

//____________________________________________________________________________
//
class CGideonJuraCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CGideonJuraCard);
};

//____________________________________________________________________________
//
class COblivionRingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COblivionRingCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//_____________________________________________________________________________
//
class CBrinkOfDisasterCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrinkOfDisasterCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CCallToTheGraveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCallToTheGraveCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSmallpoxCard : public CCard
{
	DECLARE_CARD_CSTOR(CSmallpoxCard);
};

//____________________________________________________________________________
//
class CZombieInfestationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CZombieInfestationCard);
};

//____________________________________________________________________________
//
class CFlameblastDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFlameblastDragonCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGoblinArsonistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinArsonistCard);
};

//____________________________________________________________________________
//
class CGoblinGrenadeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CGoblinGrenadeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoblinWarPaintCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGoblinWarPaintCard);
};

//____________________________________________________________________________
//
class CGrimLavamancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrimLavamancerCard);
};

//____________________________________________________________________________
//
class CSlaughterCryCard : public CCard
{
	DECLARE_CARD_CSTOR(CSlaughterCryCard);
};

//____________________________________________________________________________
//
class CRitesOfFlourishingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRitesOfFlourishingCard);
};

//___________________________________________________________________________
//
class CVastwoodGorgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVastwoodGorgerCard);
};

//____________________________________________________________________________
//
class CPentavusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPentavusCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CQuicksilverAmuletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuicksilverAmuletCard);
};

//____________________________________________________________________________
//
class CSolemnSimulacrumCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSolemnSimulacrumCard);
};

//____________________________________________________________________________
//
class CWorldslayerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWorldslayerCard);
};

//____________________________________________________________________________
//
class CAlabasterMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabasterMageCard);
};

//____________________________________________________________________________
//
class CArbalestEliteCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CArbalestEliteCard);
};

//____________________________________________________________________________
//
class CArmoredWarhorseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredWarhorseCard);
};

//____________________________________________________________________________
//
class CBenalishVeteranCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishVeteranCard);
};

//____________________________________________________________________________
//
class CDivineFavorCard	: public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDivineFavorCard);
};

//____________________________________________________________________________
//
class CGriffinRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGriffinRiderCard);
};

//____________________________________________________________________________
//
class CGuardiansPledgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGuardiansPledgeCard);
};

//____________________________________________________________________________
//
class CPeregrineGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPeregrineGriffinCard);
};

//____________________________________________________________________________
//
class CBloodSeekerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodSeekerCard);
};

//____________________________________________________________________________
//
class CPrideGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrideGuardianCard);
};

//____________________________________________________________________________
//
class CStaveOffCard : public CCard
{
	DECLARE_CARD_CSTOR(CStaveOffCard);
};

//____________________________________________________________________________
//
class CStonehornDignitaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonehornDignitaryCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAmphinCutthroatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmphinCutthroatCard);
};

//____________________________________________________________________________
//
class CAvenFleetwingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenFleetwingCard);
};

//____________________________________________________________________________
//
class CAzureMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAzureMageCard);
};

//____________________________________________________________________________
//
class CJaceMemoryAdeptCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CJaceMemoryAdeptCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBuriedRuinCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBuriedRuinCard);
};

//____________________________________________________________________________
//
class CGreatSwordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGreatSwordCard);
};

//____________________________________________________________________________
//
class CKiteShieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKiteShieldCard);
};

//____________________________________________________________________________
//
class CManalithCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManalithCard);
};

//____________________________________________________________________________
//
class CRustedSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRustedSentinelCard);
};

//____________________________________________________________________________
//
class CChasmDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChasmDrakeCard);
};

//____________________________________________________________________________
//
class CPhantasmalDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantasmalDragonCard);
};

//____________________________________________________________________________
//
class CMasterThiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterThiefCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
							 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
	CAbility* m_pStealAbility;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMerfolkMesmeristCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkMesmeristCard);
};

//____________________________________________________________________________
//
class CSkywinderDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkywinderDrakeCard);
};

//____________________________________________________________________________
//
class CVisionsOfBeyondCard : public CCard
{
	DECLARE_CARD_CSTOR(CVisionsOfBeyondCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CJacesArchivistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJacesArchivistCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinFireslingerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinFireslingerCard);
};

//____________________________________________________________________________
//
class CFrostBreathCard : public CCard
{
	DECLARE_CARD_CSTOR(CFrostBreathCard);
};

//____________________________________________________________________________
//
class CDarkFavorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDarkFavorCard);
};

//____________________________________________________________________________
//
class CDevouringSwarmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDevouringSwarmCard);
};

//____________________________________________________________________________
//
class CDriftingShadeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDriftingShadeCard);
};

//____________________________________________________________________________
//
class COnyxMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COnyxMageCard);
};

//____________________________________________________________________________
//
class CRuneScarredDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRuneScarredDemonCard);
};

//____________________________________________________________________________
//
class CSorinsThirstCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSorinsThirstCard);
};

//____________________________________________________________________________
//
class CSorinsVengeanceCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSorinsVengeanceCard);
};

//____________________________________________________________________________
//
class CTasteOfBloodCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTasteOfBloodCard);
};

//____________________________________________________________________________
//
class CWringFleshCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWringFleshCard);
};

//____________________________________________________________________________
//
class CBloodOgreCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodOgreCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CBonebreakerGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBonebreakerGiantCard);
};

//____________________________________________________________________________
//
class CCrimsonMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrimsonMageCard);
};

//____________________________________________________________________________
//
class CStormbloodBerserkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStormbloodBerserkerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CTectonicRiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CTectonicRiftCard);
};

//____________________________________________________________________________
//
class CWallOfTorchesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfTorchesCard);
};

//____________________________________________________________________________
//
class CWarstormSurgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarstormSurgeCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCarnageWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnageWurmCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGarruksHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGarruksHordeCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CGladecoverScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGladecoverScoutCard);
};

//____________________________________________________________________________
//
class CJadeMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJadeMageCard);
};

//____________________________________________________________________________
//
class CLurkingCrocodileCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CLurkingCrocodileCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CTitanicGrowthCard: public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTitanicGrowthCard);
};

//____________________________________________________________________________
//
class CTrollhideCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTrollhideCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CStingerflingSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStingerflingSpiderCard);
};

//____________________________________________________________________________
//
class CCrumblingColossusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrumblingColossusCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGarrukPrimalHunterCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CGarrukPrimalHunterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSwiftfootBootsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwiftfootBootsCard);
};

//_____________________________________________________________________________
//
class CLordOfTheUnrealCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfTheUnrealCard);
};

//____________________________________________________________________________
//
class CBelltowerSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBelltowerSphinxCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenDamageDealt,
								  CWhenDamageDealt::CreatureEventCallback,
								  &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	TriggeredAbility* m_pTriggeredAbility;

	bool SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CChandrasPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChandrasPhoenixCard);

protected:
	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealtAny,
							CWhenDamageDealtAny::PlayerEventCallback,
							&CWhenDamageDealtAny::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAngelicDestinyCard : public CChgPwrTghAttrEnchantCard 
{
	DECLARE_CARD_CSTOR(CAngelicDestinyCard);
};

//____________________________________________________________________________
//
class CArachnusWebCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CArachnusWebCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArachnusSpinnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArachnusSpinnerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CTimelyReinforcementsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimelyReinforcementsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGrandAbolisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrandAbolisherCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

	bool SetTriggerContext1(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility1* m_pTriggeredAbility1;

	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

	bool SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility2* m_pTriggeredAbility2;
};

//____________________________________________________________________________
//
class CCrownOfEmpiresCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrownOfEmpiresCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCardFilter m_ScepterCardFilter;
	CCardFilter m_ThroneCardFilter;
};

//____________________________________________________________________________
//
class CScepterOfEmpiresCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScepterOfEmpiresCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CrownCardFilter;
	CCardFilter m_ThroneCardFilter;
};

//____________________________________________________________________________
//
class CThroneOfEmpiresCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThroneOfEmpiresCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CrownCardFilter;
	CCardFilter m_ScepterCardFilter;
};

//____________________________________________________________________________
//
class CPrimordialHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimordialHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	ListenerPtr<CounterMovedEventSource::Listener>	m_cpBListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	bool BeforeResolution(CAbilityAction* pAction);
	CCreatureKeywordModifier m_TrampleModifier;
};

//____________________________________________________________________________
//
class CSkinshifterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkinshifterCard);
	
protected:
    BOOL CanPlay(BOOL bIncludeTricks);
	CAbility* m_pAbilityR;
	CAbility* m_pAbilityB;
	CAbility* m_pAbilityP;
};

//____________________________________________________________________________
//
class CScrambleverseCard : public CCard
{
	DECLARE_CARD_CSTOR(CScrambleverseCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSphinxOfUthuunCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxOfUthuunCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCountedCardContainer m_SelectedCards1;
	CCountedCardContainer m_SelectedCards2;
	void ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2);


	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;
};

//____________________________________________________________________________
//
class CDruidicSatchelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDruidicSatchelCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinBangchuckersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinBangchuckersCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CHideousVisageCard : public CCard
{
	DECLARE_CARD_CSTOR(CHideousVisageCard);
};

//____________________________________________________________________________
//
class CCircleOfFlameCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCircleOfFlameCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CChandraTheFirebrandCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CChandraTheFirebrandCard);
};

//____________________________________________________________________________
//
class CAdaptiveAutomatonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAdaptiveAutomatonCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;
};

//____________________________________________________________________________
//
class CDoublingChantCard : public CCard 
{
	DECLARE_CARD_CSTOR(CDoublingChantCard);

protected:
	CCountedCardContainer pSelectedCreatures;
	CCountedCardContainer pSelectedCards;
	CSelectionSupport m_CreatureSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void SelectCreature(CPlayer* pController);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSundialOfTheInfiniteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSundialOfTheInfiniteCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMindUnboundCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMindUnboundCard);

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
class CBloodlordOfVaasgothCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodlordOfVaasgothCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast >  TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
