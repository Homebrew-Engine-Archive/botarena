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