#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CWasteNotCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CWasteNotCard);

};

//____________________________________________________________________________
//
class CBattleMasteryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBattleMasteryCard);
};

//___________________________________________________________________________
//
class CKinsbaileSkirmisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKinsbaileSkirmisherCard);
};

//___________________________________________________________________________
//
class CMassCalcifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CMassCalcifyCard);
};

//____________________________________________________________________________
//
class CMidnightGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMidnightGuardCard);
};

//_____________________________________________________________________________
//
class COreskosSwiftclawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COreskosSwiftclawCard);
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
class CRaiseTheAlarmCard : public CCard
{
	DECLARE_CARD_CSTOR(CRaiseTheAlarmCard);
};

//____________________________________________________________________________
//
class CSelflessCatharCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSelflessCatharCard);
};

//______________________________________________________________________________
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
class CDissipateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDissipateCard);
};

//____________________________________________________________________________
//
class CIllusoryAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIllusoryAngelCard);

protected:
    BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CIntoTheVoidCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CIntoTheVoidCard);
};

//____________________________________________________________________________
//
class CPeelFromRealityCard : public CCard
{
	DECLARE_CARD_CSTOR(CPeelFromRealityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBlackCatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlackCatCard);
};

//____________________________________________________________________________
//
class CCausticTarCard : public CCard
{
	DECLARE_CARD_CSTOR(CCausticTarCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
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
class CNecrogenScudderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNecrogenScudderCard);
};

//____________________________________________________________________________
//
class CStabWoundCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStabWoundCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CTyphoidRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTyphoidRatsCard);
};

//______________________________________________________________________________
//
class CZofShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CZofShadeCard);
};

//____________________________________________________________________________
//
class CClearAPathCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CClearAPathCard);
};

//____________________________________________________________________________
//
class CCrucibleOfFireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrucibleOfFireCard);
};

//____________________________________________________________________________
//
class CForgeDevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForgeDevilCard);
};

//____________________________________________________________________________
//
class CFoundryStreetDenizenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFoundryStreetDenizenCard);
};

//______________________________________________________________________________
//
class CFrenziedGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrenziedGoblinCard);
};

//____________________________________________________________________________
//
class CGoblinRoughriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRoughriderCard);
};

//____________________________________________________________________________
//
class CHeatRayCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHeatRayCard);
};

//____________________________________________________________________________
//
class CLightningStrikeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLightningStrikeCard);
};

//____________________________________________________________________________
//
class CShrapnelBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CShrapnelBlastCard);
};

//____________________________________________________________________________
//
class CChargingRhinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingRhinoCard);
};

//____________________________________________________________________________
//
class CHornetQueenCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CHornetQueenCard);
};

//____________________________________________________________________________
//
class CRestockCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRestockCard);
};

//____________________________________________________________________________
//
class CSatyrWayfinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSatyrWayfinderCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CWallOfMulchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfMulchCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTerraStomperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerraStomperCard);
};

//____________________________________________________________________________
//
class CDarksteelCitadelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDarksteelCitadelCard);
};

//____________________________________________________________________________
//
class CUrborgTombOfYawgmothCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrborgTombOfYawgmothCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBronzeSableCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBronzeSableCard);
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
class CPhyrexianRevokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianRevokerCard);
};

//____________________________________________________________________________
//
class CSanctifiedChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSanctifiedChargeCard);
};

//____________________________________________________________________________
//
class CReclamationSageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReclamationSageCard);
};

//____________________________________________________________________________
//
class CShamanOfSpringCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamanOfSpringCard);
};

//____________________________________________________________________________
//
class CSoulOfZendikarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulOfZendikarCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSunbladeElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunbladeElfCard);
};

//____________________________________________________________________________
//
class CVenomSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVenomSliverCard);
};

//____________________________________________________________________________
//
class CVineweftCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVineweftCard);
};

//____________________________________________________________________________
//
class CHuntersAmbushCard : public CCard
{
	DECLARE_CARD_CSTOR(CHuntersAmbushCard);
};

//____________________________________________________________________________
//
class CCarnivorousMossBeastCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CCarnivorousMossBeastCard);
};

//____________________________________________________________________________
//
class CHornetNestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHornetNestCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CInvasiveSpeciesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInvasiveSpeciesCard);
};

//____________________________________________________________________________________________
//
class CKalonianTwingroveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKalonianTwingroveCard);
};

//____________________________________________________________________________
//
class CLifesLegacyCard : public CCard
{
	DECLARE_CARD_CSTOR(CLifesLegacyCard);
};

//____________________________________________________________________________
//
class CNetcasterSpiderCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CNetcasterSpiderCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CNissaWorldwakerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CNissaWorldwakerCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;	
};

//____________________________________________________________________________
//
class CParagonOfEternalWildsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CParagonOfEternalWildsCard);
};

//____________________________________________________________________________
//
class CPhytotitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhytotitanCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CAggressiveMiningCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAggressiveMiningCard);
};

//____________________________________________________________________________
//
class CAltacBloodseekerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAltacBloodseekerCard);
};

//____________________________________________________________________________
//
class CBelligerentSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBelligerentSliverCard);
protected:	
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBlastfireBoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBlastfireBoltCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBorderlandMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorderlandMarauderCard);
};

//____________________________________________________________________________
//
class CBroodKeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodKeeperCard);
};

//____________________________________________________________________________
//
class CBurningAngerCard : public CCard
{
    DECLARE_CARD_CSTOR(CBurningAngerCard);
private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CScrapyardMongrelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScrapyardMongrelCard);
};

//____________________________________________________________________________
//
class CGoblinRabblemasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRabblemasterCard);
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
class CHammerhandCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CHammerhandCard);
};

//___________________________________________________________________________________________
//
class CInfernoFistCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CInfernoFistCard);
};

//___________________________________________________________________________________________
//
class CKirdChieftainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKirdChieftainCard);
};

//____________________________________________________________________________
//
class CKrenkosEnforcerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrenkosEnforcerCard);
};

//____________________________________________________________________________
//
class CMinersBaneCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMinersBaneCard);
};

//____________________________________________________________________________
//
class CParagonOfFierceDefianceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CParagonOfFierceDefianceCard);
};

//____________________________________________________________________________
//
class CParagonOfGatheringMistsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CParagonOfGatheringMistsCard);
};

//____________________________________________________________________________
//
class CParagonOfNewDawnsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CParagonOfNewDawnsCard);
};

//____________________________________________________________________________
//
class CParagonOfOpenGravesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CParagonOfOpenGravesCard);
};

//____________________________________________________________________________
//
class CSiegeDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSiegeDragonCard);
protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback, &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBloodHostCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodHostCard);
protected:
	CCardFilter m_CardFilter;
};

//______________________________________________________________________________
//
class CCarrionCrowCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCarrionCrowCard);
};

//______________________________________________________________________________
//
class CCruelSadistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCruelSadistCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CFirstResponseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFirstResponseCard);
protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CFeastOnTheFallenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFeastOnTheFallenCard);
protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CFestergloomCard : public CCard
{
	DECLARE_CARD_CSTOR(CFestergloomCard);
};

//____________________________________________________________________________
//
class CFleshToDustCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFleshToDustCard);
};

//____________________________________________________________________________
//
class CInGarruksWakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CInGarruksWakeCard);
};

//____________________________________________________________________________
//
class CIndulgentTormentorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIndulgentTormentorCard);
protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherChoice(CPlayer* pTarget, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CLeechingSliverCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CLeechingSliverCard);
protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CNecromancersAssistantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecromancersAssistantCard);
};

//______________________________________________________________________________
//
class CNecromancersStockpileCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecromancersStockpileCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//