#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBookOfRassCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBookOfRassCard);
};

//____________________________________________________________________________
//
class CCoalGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoalGolemCard);
};

//____________________________________________________________________________
//
class CDarkHeartOfTheWoodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarkHeartOfTheWoodCard);
};

//____________________________________________________________________________
//
class CDrownedCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDrownedCard);
};

//____________________________________________________________________________
//
class CElectricEelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElectricEelCard);
};

//____________________________________________________________________________
//
class CElvesOfDeepShadowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvesOfDeepShadowCard);
};

//____________________________________________________________________________
//
class CExorcistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CExorcistCard);
};

//____________________________________________________________________________
//
class CGoblinWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinWizardCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGraveRobbersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGraveRobbersCard);
};

//____________________________________________________________________________
//
class CHiddenPathCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHiddenPathCard);
};

//____________________________________________________________________________
//
class CHolyLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CHolyLightCard);
};

//____________________________________________________________________________
//
class CMarshGoblinsCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshGoblinsCard);
};

//____________________________________________________________________________
//
class CMazeOfIthCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMazeOfIthCard);
};

//____________________________________________________________________________
//
class CMerfolkAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkAssassinCard);
};

//____________________________________________________________________________
//
class CNiallSilvainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNiallSilvainCard);
};

//____________________________________________________________________________
//
class CPeopleOfTheWoodsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPeopleOfTheWoodsCard);
};

//____________________________________________________________________________
//
class CRiptideCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiptideCard);
};

//____________________________________________________________________________
//
class CSavaenElvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavaenElvesCard);
};

//____________________________________________________________________________
//
class CScarwoodGoblinsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScarwoodGoblinsCard);
};

//____________________________________________________________________________
//
class CScarwoodHagCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScarwoodHagCard);
};

//____________________________________________________________________________
//
class CSquireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSquireCard);
};

//____________________________________________________________________________
//
class CStandingStonesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStandingStonesCard);
};

//____________________________________________________________________________
//
class CTivadarSCrusadeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTivadarSCrusadeCard);
};

//____________________________________________________________________________
//
class CTowerOfCoireallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTowerOfCoireallCard);
};

//____________________________________________________________________________
//
class CTrackerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrackerCard);
};

//____________________________________________________________________________
//
class CWitchHunterCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CWitchHunterCard);
};

//____________________________________________________________________________
//
class CWormwoodTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWormwoodTreefolkCard);
};

//____________________________________________________________________________
//
class CAmnesiaCard : public CCard
{
	DECLARE_CARD_CSTOR(CAmnesiaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//

class CBoneFluteCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBoneFluteCard);
};

//____________________________________________________________________________
//
class CGiantSharkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantSharkCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COrcGeneralCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcGeneralCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFestivalCard : public CCard
{
	DECLARE_CARD_CSTOR(CFestivalCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWaterWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWaterWurmCard);
};

//____________________________________________________________________________
//
class CCurseArtifactCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CCurseArtifactCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CGoblinsOfTheFlargCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinsOfTheFlargCard);

private:
    CCardFilter m_CardFilter;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CLurkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLurkerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCityOfShadowsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCityOfShadowsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWandOfIthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWandOfIthCard);

protected:
	CSelectionSupport m_PunisherSelection;
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPsychicAllergyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPsychicAllergyCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	CSelectionSupport m_PaymentSelection;
	
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;
};

//____________________________________________________________________________
//
class CNecropolisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecropolisCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CNamelessRaceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNamelessRaceCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nLifePaid;
};

//____________________________________________________________________________
//
class CTheFallenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTheFallenCard);

protected:
	std::vector<int> pDamagedPlayers;

	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage);
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWarBargeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarBargeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRuneswordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRuneswordCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
