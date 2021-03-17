#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CSwordOfBodyAndMindCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfBodyAndMindCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CIchorRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIchorRatsCard);
};

//____________________________________________________________________________
//
class CEzurisBrigadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEzurisBrigadeCard);
};

//____________________________________________________________________________
//
class CVensertheSojournerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CVensertheSojournerCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CThrummingbirdCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThrummingbirdCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CContagionClaspCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CContagionClaspCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CPlagueStingerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueStingerCard);
};

//____________________________________________________________________________
//
class CElspethTirelCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CElspethTirelCard);
};

//____________________________________________________________________________
//
class CMoxOpalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoxOpalCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CKothoftheHammerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CKothoftheHammerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CThroneofGethCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThroneofGethCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CMoltenTailMasticoreCard: public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR (CMoltenTailMasticoreCard);
};

//____________________________________________________________________________
//
class CSkithiryxtheBlightDragonCard: public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR (CSkithiryxtheBlightDragonCard);
};

//____________________________________________________________________________
//
class CWurmcoilEngineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWurmcoilEngineCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMemniteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMemniteCard);
};

//____________________________________________________________________________
//
class CCarapaceForgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCarapaceForgerCard);
};

//____________________________________________________________________________
//
class CPalladiumMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CPalladiumMyrCard);
};

//____________________________________________________________________________
//
class CKuldothaForgemasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKuldothaForgemasterCard);
};

//____________________________________________________________________________
//
class CIchorclawMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIchorclawMyrCard);
};

//____________________________________________________________________________
//
class CMyrGalvanizerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrGalvanizerCard);
};
//____________________________________________________________________________
//
class COriginSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COriginSpellbombCard);
};
//_____________________________________________________________________________
//
class CTumbleMagnetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTumbleMagnetCard);
};
//_____________________________________________________________________________
//
class CTrigonofInfestationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrigonofInfestationCard);
};
//_____________________________________________________________________________
//
class CTemperedSteelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTemperedSteelCard);
};
//_____________________________________________________________________________
//
class CKembasSkyguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKembasSkyguardCard);
};

//____________________________________________________________________________
//
class CDarksteelAxeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelAxeCard);
};
//_____________________________________________________________________________
//
class CSylvokReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvokReplicaCard);
};
//____________________________________________________________________________
//
class CPainsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPainsmithCard);
};

//____________________________________________________________________________
//
class CContagionEngineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CContagionEngineCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener2;

	void OnResolutionCompleted3(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener3;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CSteadyProgressCard : public CCard
{
	DECLARE_CARD_CSTOR(CSteadyProgressCard);

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStoicRebuttalCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CStoicRebuttalCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CShapeAnewCard : public CCard
{
	DECLARE_CARD_CSTOR(CShapeAnewCard);

protected:	
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSemblanceAnvilCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSemblanceAnvilCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	counted_ptr<CAbility> CreateReductionAbility(CCard* pCard);
	CCard* m_pCard;
	CCardAbilityModifier* m_pModifier;
};

//____________________________________________________________________________
//
class CSeachromeCoastCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSeachromeCoastCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CGlintHawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGlintHawkCard);
};
//____________________________________________________________________________
//
class CIndomitableArchangelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIndomitableArchangelCard);
};
//____________________________________________________________________________
//
class CMyrsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrsmithCard);
};
//____________________________________________________________________________
//
class CSunblastAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSunblastAngelCard);
};
//
//____________________________________________________________________________
class CTrueConvictionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrueConvictionCard);
};
//____________________________________________________________________________
//
class CMyrPropagatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrPropagatorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CGolemsHeartCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGolemsHeartCard);
};

//____________________________________________________________________________
//
class CSpikeshotElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeshotElderCard);
};
//____________________________________________________________________________
//
class CHandofthePraetorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHandofthePraetorsCard);


private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	 CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CDarkslickShoresCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDarkslickShoresCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CBlackcleaveCliffsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBlackcleaveCliffsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CCopperlineGorgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCopperlineGorgeCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CRazorvergeThicketCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRazorvergeThicketCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CLiquimetalCoatingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLiquimetalCoatingCard);
};

//____________________________________________________________________________
//
class CBlightMambaCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightMambaCard);
};

//____________________________________________________________________________
//
class CPutrefaxCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CPutrefaxCard);
};

//____________________________________________________________________________
//
class CDarkslickDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkslickDrakeCard);
};

//____________________________________________________________________________
//
class CVolitionReinsCard : public CCard
{
	DECLARE_CARD_CSTOR(CVolitionReinsCard);
};

//____________________________________________________________________________
//
class CRiddlesmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiddlesmithCard);
};

//____________________________________________________________________________
//
class CLoxodonWayfarerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonWayfarerCard);
};

//____________________________________________________________________________
//
class CAuriokEdgewrightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokEdgewrightCard);
};

//____________________________________________________________________________
//
class CVedalkenCertarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenCertarchCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CArgentSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArgentSphinxCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);

	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CLumengridDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLumengridDrakeCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//

class CChromeSteedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChromeSteedCard);
};

//____________________________________________________________________________
//
class CCarrionCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CCarrionCallCard);
};

//____________________________________________________________________________
//
class CContagiousNimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CContagiousNimCard);
};

//____________________________________________________________________________
//
class CBlackcleaveGoblinCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBlackcleaveGoblinCard);
};

//____________________________________________________________________________
//
class CMoriokReaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoriokReaverCard);
};

//____________________________________________________________________________
//
class CCarnifexDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCarnifexDemonCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCystbearerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCystbearerCard);
};

//____________________________________________________________________________
//
class CGalvanicBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CGalvanicBlastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDarksteelMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarksteelMyrCard);
};

//____________________________________________________________________________
//
class CDarksteelSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarksteelSentinelCard);
};

//____________________________________________________________________________
//
class CDarksteelJuggernautCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarksteelJuggernautCard);
};

//____________________________________________________________________________
//
class CFlamebornHellionCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamebornHellionCard);
};

//____________________________________________________________________________
//
class CKuldothaRebirthCard : public CCard
{
	DECLARE_CARD_CSTOR(CKuldothaRebirthCard);
};

//____________________________________________________________________________
//
class COxiddaDaredevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COxiddaDaredevilCard);
};

//____________________________________________________________________________
//
class CScoriaElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScoriaElementalCard);
};

//____________________________________________________________________________
//
class CBladeTribeBerserkersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBladeTribeBerserkersCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDrossHopperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossHopperCard);
};

//____________________________________________________________________________
//
class CInstillInfectionCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CInstillInfectionCard);
};

//____________________________________________________________________________
//
class CGraspOfDarknessCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CGraspOfDarknessCard);
};

//____________________________________________________________________________
//
class CAssaultStrobeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAssaultStrobeCard);
};

//____________________________________________________________________________
//
class CMoriokReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoriokReplicaCard);
};

//____________________________________________________________________________
//
class CRazorfieldThresherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorfieldThresherCard);
};

//____________________________________________________________________________
//
class CFerrovoreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFerrovoreCard);
};

//____________________________________________________________________________
//
class CAlphaTyrranaxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlphaTyrranaxCard);
};

//____________________________________________________________________________
//
class CInfiltrationLensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInfiltrationLensCard);
};
//_____________________________________________________________________________
//
class CSaberclawGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaberclawGolemCard);
};
//_____________________________________________________________________________
//
class CFurnaceCelebrationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFurnaceCelebrationCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};
//_____________________________________________________________________________
//
class CArgentumArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArgentumArmorCard);
	private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};
//_____________________________________________________________________________
//
class CAuriokReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokReplicaCard);
};
//_____________________________________________________________________________
//
class CBarbedBattlegearCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBarbedBattlegearCard);
};
//_____________________________________________________________________________
//
class CBladedPinionsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBladedPinionsCard);
};
//_____________________________________________________________________________
//
class CCorpseCurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpseCurCard);
};

//____________________________________________________________________________
//
class CTunnelIgnusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTunnelIgnusCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};
//_____________________________________________________________________________
//
class CLuxCannonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLuxCannonCard);
};
//_____________________________________________________________________________
//
class CNecrogenCenserCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecrogenCenserCard);
};
//_____________________________________________________________________________
//
class CNecrogenScudderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNecrogenScudderCard);
};

//____________________________________________________________________________
//
class CRelicPutrescenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CRelicPutrescenceCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSkinrenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkinrenderCard);
};

//____________________________________________________________________________
//
class CTaintedStrikeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTaintedStrikeCard);
};

//____________________________________________________________________________
//
class CWithstandDeathCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWithstandDeathCard);
};

//____________________________________________________________________________
//
class CSnapsailGliderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSnapsailGliderCard);
};

//____________________________________________________________________________
//
class CSolitonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSolitonCard);
};

//____________________________________________________________________________
//
class CStriderHarnessCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStriderHarnessCard);
};
//_____________________________________________________________________________
//
class CTowerofCalamitiesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTowerofCalamitiesCard);
};
//_____________________________________________________________________________
//
class CBleakCovenVampiresCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBleakCovenVampiresCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBarrageOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarrageOgreCard);
};

//____________________________________________________________________________
//
class CEchoCircletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEchoCircletCard);
};

//____________________________________________________________________________
//
class CPlatinumEmperionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatinumEmperionCard);
};

//____________________________________________________________________________
//
class CGethLordoftheVaultCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGethLordoftheVaultCard);

protected:
    void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CInexorableTideCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInexorableTideCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CEzuriRenegadeLeaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEzuriRenegadeLeaderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNihilSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNihilSpellbombCard);
};

//____________________________________________________________________________
//
class CHorizonSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHorizonSpellbombCard);
};

//____________________________________________________________________________
//
class CFlightSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFlightSpellbombCard);
};

//____________________________________________________________________________
//
class CPanicSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPanicSpellbombCard);
};

//____________________________________________________________________________
//
class CNeurokReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokReplicaCard);
};

//____________________________________________________________________________
//
class CVulshokReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVulshokReplicaCard);
};

//____________________________________________________________________________
//
class CWallofTanglecordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallofTanglecordCard);
};

//____________________________________________________________________________
//
class CVensersJournalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVensersJournalCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CVectorAspCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVectorAspCard);
};

//____________________________________________________________________________
//
class CTrigonofThoughtCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrigonofThoughtCard);
};
//_____________________________________________________________________________
//
class CTrigonofRageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrigonofRageCard);
};
//_____________________________________________________________________________
//
class CTrigonofMendingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrigonofMendingCard);
};
//_____________________________________________________________________________
//
class CTrigonofCorruptionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrigonofCorruptionCard);
};
//_____________________________________________________________________________
//
class CPerilousMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPerilousMyrCard);
};

//____________________________________________________________________________
//
class CArcTrailCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CArcTrailCard);
};

//____________________________________________________________________________
//
class CNecropedeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecropedeCard);
};

//____________________________________________________________________________
//
class CKuldothaPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKuldothaPhoenixCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSylvokLifestaffCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSylvokLifestaffCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//

class CChimericMassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChimericMassCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};
//____________________________________________________________________________
//
class CMimicVatCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMimicVatCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;

	CCountedCardContainer_ pExiled;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CSelectionSupport m_Selection;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};
//____________________________________________________________________________
//
class CGrindclockCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrindclockCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGenesisWaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CGenesisWaveCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CSeizeTheInitiativeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSeizeTheInitiativeCard);
};

//_____________________________________________________________________________
//
class CRevokeExistenceCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRevokeExistenceCard);
};

//_____________________________________________________________________________
//
class CMemoricideCard : public CCard
{
	DECLARE_CARD_CSTOR(CMemoricideCard);
};

//_____________________________________________________________________________
//
class CEtchedChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtchedChampionCard);
};

//____________________________________________________________________________
//
class CAuriokSunchaserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokSunchaserCard);
};

//____________________________________________________________________________
//
class CAbunaAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbunaAcolyteCard);
};

//____________________________________________________________________________
//
class CAcidWebSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAcidWebSpiderCard);
};

//____________________________________________________________________________
//
class CAsceticismCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAsceticismCard);
};

//____________________________________________________________________________
//
class CBondsOfQuicksilverCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBondsOfQuicksilverCard);
};

//____________________________________________________________________________
//
class CBlistergrubCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBlistergrubCard);
};

//____________________________________________________________________________
//
class CCorruptedHarvesterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorruptedHarvesterCard);
};

//____________________________________________________________________________
//
class CEzurisArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEzurisArchersCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CFumeSpitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFumeSpitterCard);
};

//____________________________________________________________________________
//
class CGhalmasWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhalmasWardenCard);
};

//____________________________________________________________________________
//
class CGolemArtisanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGolemArtisanCard);
};

//____________________________________________________________________________
//
class CGolemFoundryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGolemFoundryCard);
};

//____________________________________________________________________________
//
class CHaltOrderCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CHaltOrderCard);
};

//____________________________________________________________________________
//
class CLifesmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLifesmithCard);
};

//____________________________________________________________________________
//
class CMeltTerrainCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMeltTerrainCard);
};

//____________________________________________________________________________
//
class CNeurokInvisimancerCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokInvisimancerCard);
};

//____________________________________________________________________________
//
class COxiddaScrapmelterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COxiddaScrapmelterCard);
};

//____________________________________________________________________________
//
class CPlatedSeastriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedSeastriderCard);
};

//____________________________________________________________________________
//
class CMolderBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMolderBeastCard);
};

//____________________________________________________________________________
//
class CSalvageScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSalvageScoutCard);
};

//____________________________________________________________________________
//
class CScrapdiverSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScrapdiverSerpentCard);
};

//____________________________________________________________________________
//
class CSkyEelSchoolCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyEelSchoolCard);
};

//____________________________________________________________________________
//
class CSliceInTwainCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSliceInTwainCard);
};

//____________________________________________________________________________
//
class CSoulParryCard : public CCard
{
	DECLARE_CARD_CSTOR(CSoulParryCard);
};

//____________________________________________________________________________
//
class CTelJiladFallenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladFallenCard);
};

//____________________________________________________________________________
//
class CTurnAsideCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CTurnAsideCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTwistedImageCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwistedImageCard);
};

//____________________________________________________________________________
//
class CUntamedMightCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CUntamedMightCard);
};

//____________________________________________________________________________
//
class CVulshokHeartstokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVulshokHeartstokerCard);
};

//____________________________________________________________________________
//
class CWhitesunsPassageCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhitesunsPassageCard);
};

//____________________________________________________________________________
//
class CCopperhornScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCopperhornScoutCard);
};

//____________________________________________________________________________
//
class CBluntTheAssaultCard : public CCard
{
	DECLARE_CARD_CSTOR(CBluntTheAssaultCard);
};

//____________________________________________________________________________
//
class CKembaKhaRegentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKembaKhaRegentCard);


protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGraftedExoskeletonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGraftedExoskeletonCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pEquipCard, CCard* pFromCard, CCard* pToCard) const;
};

//____________________________________________________________________________
//
class CSunspearShikariCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunspearShikariCard);
};

//____________________________________________________________________________
//
class CGlimmerpointStagCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlimmerpointStagCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CViridianRevelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CViridianRevelCard);
};

//____________________________________________________________________________
//
class CEmbersmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmbersmithCard);
};

//____________________________________________________________________________
//
class CEngulfingSlagwurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEngulfingSlagwurmCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2,
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBellowingTanglewurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBellowingTanglewurmCard);
};

//____________________________________________________________________________
//
class CTelJiladDefianceCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTelJiladDefianceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CHeavyArbalestCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeavyArbalestCard);

protected:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};
//_____________________________________________________________________________
//
class CVaultSkywardCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CVaultSkywardCard);
};

//____________________________________________________________________________
//
class CGlimmerpostCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGlimmerpostCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGlintHawkIdolCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGlintHawkIdolCard);
};

//____________________________________________________________________________
//
class CFleshAllergyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFleshAllergyCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRazorHippogriffCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorHippogriffCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDispenseJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDispenseJusticeCard);
protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CScreechingSilcawCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingSilcawCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
							CPlayer* pToPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPainfulQuandaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPainfulQuandaryCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CExsanguinateCard : public CCard
{
	DECLARE_CARD_CSTOR(CExsanguinateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CMyrBattlesphereCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrBattlesphereCard);

protected:
	CSelectionSupport m_MyrSelection;
	CCountedCardContainer pMyr;
	CCountedCardContainer pRemainingMyr;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnMyrSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void MyrSelection(CPlayer* pPlayer);
	void Finale();
};

//____________________________________________________________________________
//
class CCerebralEruptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CCerebralEruptionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHoardSmelterDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHoardSmelterDragonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGoldenUrnCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoldenUrnCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CCloneShellCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCloneShellCard);

protected:
	CCountedCardContainer_ pExiled;

	CSelectionSupport m_CardSelection;

	bool BeforeResolution1(CAbilityAction* pAction);
	
	typedef
		TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);

	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCullingDaisCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCullingDaisCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CSteelHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelHellkiteCard);

protected:
	std::vector<int> pDamagedPlayers;
	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage);
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//