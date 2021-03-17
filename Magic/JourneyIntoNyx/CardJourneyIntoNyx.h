#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CTempleOfEpiphanyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfEpiphanyCard);
};

//____________________________________________________________________________
//
class CTempleOfMaladyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTempleOfMaladyCard);
};

//____________________________________________________________________________
//
class CGoldForgedSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldForgedSentinelCard);
};

//____________________________________________________________________________
//
class CAkroanMastiffCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanMastiffCard);
};

//____________________________________________________________________________
//
class CEagleOfTheWatchCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEagleOfTheWatchCard);
};

//______________________________________________________________________________
//
class CAegisOfTheGodsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAegisOfTheGodsCard);
};

//______________________________________________________________________________
//
class CFontOfVigorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFontOfVigorCard);
};

//____________________________________________________________________________
//
class CDictateOfHeliodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDictateOfHeliodCard);
};

//____________________________________________________________________________
//
class CEidolonOfRhetoricCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEidolonOfRhetoricCard);
};

//____________________________________________________________________________
//
class CManaConfluenceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CManaConfluenceCard);
};

//____________________________________________________________________________
//
class CChariotOfVictoryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChariotOfVictoryCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};
//______________________________________________________________________________
//
class CNyxFleeceRamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNyxFleeceRamCard);
};

//______________________________________________________________________________
//
class CSkyspearCavalryCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyspearCavalryCard);
};

//____________________________________________________________________________
//
class CSupplyLineCranesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSupplyLineCranesCard);
};

//____________________________________________________________________________
//
class CBassaraTowerArcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBassaraTowerArcherCard);
};

//____________________________________________________________________________
//
class CDesecrationPlagueCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDesecrationPlagueCard);
};

//____________________________________________________________________________
//
class CGodhunterOctopusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGodhunterOctopusCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCyclopsOfEternalFuryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCyclopsOfEternalFuryCard);
};

//____________________________________________________________________________
//
class CDictateOfKarametraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDictateOfKarametraCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility* m_pTriggeredAbility;

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility1* m_pTriggeredAbility1;
};

//____________________________________________________________________________
//
class CDictateOfKruphixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDictateOfKruphixCard);
};

//___________________________________________________________________________
//
class CCloakedSirenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloakedSirenCard);
};

//___________________________________________________________________________
//
class CFontOfFortunesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFontOfFortunesCard);
};

//____________________________________________________________________________
//
class CHubrisCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHubrisCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPinToTheEarthCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPinToTheEarthCard);
};

//____________________________________________________________________________
//
class CRiptideChimeraCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptideChimeraCard);
};

//____________________________________________________________________________
//
class CRiseOfEaglesCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiseOfEaglesCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSigiledStarfishCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSigiledStarfishCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CThassasIreCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThassasIreCard);
};

//____________________________________________________________________________
//
class CTritonShorestalkerCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CTritonShorestalkerCard);
};

//____________________________________________________________________________
//
class CAspectOfGorgonCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAspectOfGorgonCard);
};

//____________________________________________________________________________
//
class CBrainMaggotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrainMaggotCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								  CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType movetype) const;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CCastIntoDarknessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCastIntoDarknessCard);
};

//____________________________________________________________________________
//
class CDictateOfErebosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDictateOfErebosCard);
};

//___________________________________________________________________________
//
class CFelhidePetrifierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFelhidePetrifierCard);
};

//____________________________________________________________________________
//
class CMasterOfTheFeastCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfTheFeastCard);
};

//______________________________________________________________________________
//
class CNightmarishEndCard : public CCard
{
	DECLARE_CARD_CSTOR(CNightmarishEndCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CNyxInfusionCard : public CCard
{
	DECLARE_CARD_CSTOR(CNyxInfusionCard);
};

//___________________________________________________________________________
//
class CPharikasChosenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPharikasChosenCard);
};

//____________________________________________________________________________
//
class CReturnedRevelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReturnedRevelerCard);
};

//____________________________________________________________________________
//
class CRottedHulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottedHulkCard);
};

//____________________________________________________________________________
//
/*class CSpitefulBlowCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpitefulBlowCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};*/

//____________________________________________________________________________
//
class CArmamentOfNyxCard : public CCard
{
	DECLARE_CARD_CSTOR(CArmamentOfNyxCard);
};

//___________________________________________________________________________
//
class CEidolonOfBlossomsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEidolonOfBlossomsCard);
};

//___________________________________________________________________________
//
class CAgentOfErebosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgentOfErebosCard);

protected:
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDoomwakeGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoomwakeGiantCard);
};

//___________________________________________________________________________
//
class CDreadbringerLampadsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadbringerLampadsCard);
};

//___________________________________________________________________________
//
class CForgebornOreadsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForgebornOreadsCard);
};

//___________________________________________________________________________
//
class CGrimGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrimGuardianCard);
};

//___________________________________________________________________________
//
class CHumblerOfMortalsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHumblerOfMortalsCard);
};

//___________________________________________________________________________
//
class COakheartDryadsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COakheartDryadsCard);
};

//___________________________________________________________________________
//
class CSkybindCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkybindCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStrengthFromTheFallenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStrengthFromTheFallenCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CThassasDevourerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThassasDevourerCard);
};

//___________________________________________________________________________
//
class CThoughtrenderLamiaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtrenderLamiaCard);
};

//___________________________________________________________________________
//
class CSquelchingLeechesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSquelchingLeechesCard);
};

//____________________________________________________________________________
//
class CUnderworldCoinsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUnderworldCoinsmithCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//___________________________________________________________________________
//
class CWhitewaterNaiadsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhitewaterNaiadsCard);
};

//___________________________________________________________________________
//
class CAkroanLineBreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkroanLineBreakerCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CExtinguishAllHopeCard : public CCard
{
	DECLARE_CARD_CSTOR(CExtinguishAllHopeCard);
};

//____________________________________________________________________________
//
class CFeastOfDreamsCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFeastOfDreamsCard);
};

//____________________________________________________________________________
//
class CEidolonOfTheGreatRevelCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEidolonOfTheGreatRevelCard);
};

//____________________________________________________________________________
//
class CFlurryOfHornsCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlurryOfHornsCard);
};

//____________________________________________________________________________
//
class CFontOfIreCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFontOfIreCard);
};

//____________________________________________________________________________
//
class CFleetfeatherCockatriceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFleetfeatherCockatriceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGluttonousCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGluttonousCyclopsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRavenousLeucrocotaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousLeucrocotaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWildfireCerberusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildfireCerberusCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHydraBroodmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHydraBroodmasterCard);

protected:
	int  n;
	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLightningDiademCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLightningDiademCard);
};

//___________________________________________________________________________________________
//
class CPensiveMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPensiveMinotaurCard);
};

//____________________________________________________________________________
//
class CRollickOfAbandonCard : public CCard
{
	DECLARE_CARD_CSTOR(CRollickOfAbandonCard);
};

//____________________________________________________________________________
//
class CSatyrHopliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrHopliteCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard) const;
};

//____________________________________________________________________________
//
class CSigiledSkinkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSigiledSkinkCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSpawnOfThraxesCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CSpawnOfThraxesCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSpiteOfMogisCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiteOfMogisCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CStarfallCard : public CTargetChgLifeSpellCard 
{
	DECLARE_CARD_CSTOR(CStarfallCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFontOfFertilityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFontOfFertilityCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoldenHindCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldenHindCard);
};

//____________________________________________________________________________
//
class CHeroesBaneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeroesBaneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
/*class CMarketFestivalCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CMarketFestivalCard);

protected:
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};*/

//____________________________________________________________________________
//
class CNessianGameWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNessianGameWardenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPheresBandThunderhoofCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPheresBandThunderhoofCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard) const;
};

//____________________________________________________________________________
//
class CPheresBandWarchiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPheresBandWarchiefCard);
};

//____________________________________________________________________________
//
class CRenownedWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRenownedWeaverCard);
};

//______________________________________________________________________________
//
class CRevivingMelodyCard : public CCard
{
	DECLARE_CARD_CSTOR(CRevivingMelodyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSatyrGrovedancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrGrovedancerCard);
};

//____________________________________________________________________________
//
class CRevelOfTheFallenGodCard : public CCard
{
	DECLARE_CARD_CSTOR(CRevelOfTheFallenGodCard);
};

//____________________________________________________________________________
//
class CArmoryOfIroasCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CArmoryOfIroasCard);
private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//_____________________________________________________________________________
//
class CBanishingLightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBanishingLightCard);

protected:
	CCountedCardContainer_ pExiled;
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
};

//____________________________________________________________________________
//
class CDawnbringerCharioteersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDawnbringerCharioteersCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard) const;
};

//____________________________________________________________________________
//
class CLagonnaBandTrailblazerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLagonnaBandTrailblazerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard) const;
};

//____________________________________________________________________________
//
class CLeoninIconoclastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninIconoclastCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CMortalObstinacyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMortalObstinacyCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CFlamespeakersWillCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFlamespeakersWillCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CTethmosHighPriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTethmosHighPriestCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CCountermandCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCountermandCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CConsignToDustCard : public CCard
{
	DECLARE_CARD_CSTOR(CConsignToDustCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CNaturesPanoplyCard : public CCard
{
	DECLARE_CARD_CSTOR(CNaturesPanoplyCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CSolidarityOfHeroesCard : public CCard
{
	DECLARE_CARD_CSTOR(CSolidarityOfHeroesCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAerialFormationCard : public CCard
{
	DECLARE_CARD_CSTOR(CAerialFormationCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CAjanisPresenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CAjanisPresenceCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CPhalanxFormationCard : public CCard
{
	DECLARE_CARD_CSTOR(CPhalanxFormationCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
/*class CBlindingFlareCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlindingFlareCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};*/

//____________________________________________________________________________
//
/*class CKiorasDismissalCard : public CCard
{
	DECLARE_CARD_CSTOR(CKiorasDismissalCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};*/

//____________________________________________________________________________
//
class CColossalHeroicsCard : public CCard
{
	DECLARE_CARD_CSTOR(CColossalHeroicsCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CCruelFeedingCard : public CCard
{
	DECLARE_CARD_CSTOR(CCruelFeedingCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
/*class CDesperateStandCard : public CCard
{
	DECLARE_CARD_CSTOR(CDesperateStandCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};*/

//____________________________________________________________________________
//
class CHarnessByForceCard : public CCard
{
	DECLARE_CARD_CSTOR(CHarnessByForceCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CHourOfNeedCard : public CCard
{
	DECLARE_CARD_CSTOR(CHourOfNeedCard);

protected:
	CManaCost m_StriveAdditionalTargetCost;
};

//____________________________________________________________________________
//
class CHallOfTriumphCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHallOfTriumphCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						 CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		
	CardType SelectedColor;
};

//____________________________________________________________________________
//
class CNyxWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNyxWeaverCard);
};

//___________________________________________________________________________
//
class CDiscipleOfDeceitCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfDeceitCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CKruphixsInsightCard : public CCard
{
	DECLARE_CARD_CSTOR(CKruphixsInsightCard);
};

//____________________________________________________________________________
//