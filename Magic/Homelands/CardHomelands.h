#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBaronSengirCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CBaronSengirCard);
};

//____________________________________________________________________________
//
class CRoterothopterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRoterothopterCard);
};

//____________________________________________________________________________
//
class CAbbeyMatronCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAbbeyMatronCard);
};

//____________________________________________________________________________
//
class CAlibansTowerCard : public CCard
{
	DECLARE_CARD_CSTOR(CAlibansTowerCard);
};

//____________________________________________________________________________
//
class CAmbushCard : public CCard
{
	DECLARE_CARD_CSTOR(CAmbushCard);
};

//____________________________________________________________________________
//
class CAnabaAncestorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnabaAncestorCard);
};

//____________________________________________________________________________
//
class CAnabaSpiritCrafterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnabaSpiritCrafterCard);
};

//____________________________________________________________________________
//
class CAnHavvaTownshipCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAnHavvaTownshipCard);
};

//____________________________________________________________________________
//
class CAysenAbbeyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAysenAbbeyCard);
};

//____________________________________________________________________________
//
class CAysenCrusaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAysenCrusaderCard);
};

//____________________________________________________________________________
//
class CAysenHighwayCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAysenHighwayCard);
};

//____________________________________________________________________________
//
class CBlackCarriageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlackCarriageCard);
};

//____________________________________________________________________________
//
class CCastleSengirCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCastleSengirCard);
};

//____________________________________________________________________________
//
class CCemeteryGateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCemeteryGateCard);
};

//____________________________________________________________________________
//
class CChandlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChandlerCard);
};

//____________________________________________________________________________
//
class CClockworkGnomesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkGnomesCard);
};

//____________________________________________________________________________
//
class CDaughterOfAutumnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDaughterOfAutumnCard);
};

//____________________________________________________________________________
//
class CDidgeridooCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDidgeridooCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDwarvenPonyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenPonyCard);
};

//____________________________________________________________________________
//
class CDwarvenTraderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenTraderCard);
};

//____________________________________________________________________________
//
class CEbonyRhinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEbonyRhinoCard);
};

//____________________________________________________________________________
//
class CEronTheRelentlessCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CEronTheRelentlessCard);
};

//____________________________________________________________________________
//
class CEvaporateCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEvaporateCard);
};

//____________________________________________________________________________
//
class CFaerieNobleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieNobleCard);
};

//____________________________________________________________________________
//
class CFolkOfAnHavvaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFolkOfAnHavvaCard);
};

//____________________________________________________________________________
//
class CGhostHoundsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostHoundsCard);
};

//____________________________________________________________________________
//
class CGrandmotherSengirCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrandmotherSengirCard);
};

//____________________________________________________________________________
//
class CIhsansShadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIhsansShadeCard);
};

//____________________________________________________________________________
//
class CJovenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJovenCard);
};

//____________________________________________________________________________
//
class CKoskunKeepCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKoskunKeepCard);
};

//____________________________________________________________________________
//
class CLeapingLizardCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLeapingLizardCard);
};

//____________________________________________________________________________
//
class CNarwhalCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CNarwhalCard);
};

//____________________________________________________________________________
//
class CRashkaTheSlayerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRashkaTheSlayerCard);
};

//____________________________________________________________________________
//
class CRootSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootSpiderCard);
};

//____________________________________________________________________________
//
class CSengirBatsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSengirBatsCard);
};

//____________________________________________________________________________
//
class CSerraInquisitorsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraInquisitorsCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CVeldraneOfSengirCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CVeldraneOfSengirCard);
};

//____________________________________________________________________________
//
class CWallOfKelpCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfKelpCard);
};

//____________________________________________________________________________
//
class CWillowFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWillowFaerieCard);
};

//____________________________________________________________________________
//
class CWillowPriestessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWillowPriestessCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWizardsSchoolCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWizardsSchoolCard);
};

//____________________________________________________________________________
//
class CIriniSengirCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIriniSengirCard);
};

//____________________________________________________________________________
//
class CAutumnWillowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAutumnWillowCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CDrudgeSpellCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDrudgeSpellCard);
};

//____________________________________________________________________________
//
class CSerratedArrowsCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSerratedArrowsCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContextF1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHeadstoneCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHeadstoneCard);
};

//____________________________________________________________________________
//
class CJinxCard : public CCard
{
	DECLARE_CARD_CSTOR(CJinxCard);
};

//____________________________________________________________________________
//
class CRenewalCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CRenewalCard);
};

//____________________________________________________________________________
//
class CCoralReefCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCoralReefCard);
};

//____________________________________________________________________________
//
class CMysticDecreeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMysticDecreeCard);
};

//____________________________________________________________________________
//
class CSerraAviaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSerraAviaryCard);
};

//____________________________________________________________________________
//
class CAnHavvaInnCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnHavvaInnCard);
};

//____________________________________________________________________________
//
//class CMammothHarnessCard : public CChgPwrTghAttrEnchantCard
//{
//	DECLARE_CARD_CSTOR(CMammothHarnessCard);
//
//protected:
//	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
//	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
//};
//
////___________________________________________________________________________
////
class CMarjhanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarjhanCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTradeCaravanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTradeCaravanCard);
};

//____________________________________________________________________________
//
class CSpectralBearsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralBearsCard);

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
class CRevekaWizardSavantCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CRevekaWizardSavantCard);
};

//____________________________________________________________________________
//
class CSamiteAlchemistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSamiteAlchemistCard);
};

//____________________________________________________________________________
//
class CProphecyCard : public CCard
{
	DECLARE_CARD_CSTOR(CProphecyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CLeechesCard : public CCard
{
	DECLARE_CARD_CSTOR(CLeechesCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CRootsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRootsCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
									CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKoskunFallsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKoskunFallsCard);
};

//____________________________________________________________________________
//
class CBakisCurseCard : public CCard
{
	DECLARE_CARD_CSTOR(CBakisCurseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWinterSkyCard : public CCard
{
	DECLARE_CARD_CSTOR(CWinterSkyCard);
protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CAnZerrinRuinsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAnZerrinRuinsCard);

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
class CClockworkSwarmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkSwarmCard);

protected:
	BOOL_ bAttackedOrBlocked;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCreatureCard* pCreatureCard);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContextAux3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CHeartWolfCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartWolfCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDwarvenSeaClanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenSeaClanCard);

protected:
	class CDwarvenSeaClanTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	BOOL CanPlay(BOOL bIncludeTricks);

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//