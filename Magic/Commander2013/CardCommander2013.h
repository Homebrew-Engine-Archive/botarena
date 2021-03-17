#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBalefulForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalefulForceCard);
};

//____________________________________________________________________________
//
class CToxicDelugeCard : public CCard
{
	DECLARE_CARD_CSTOR(CToxicDelugeCard);
};

//____________________________________________________________________________
//
class COphiomancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COphiomancerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CFellShepherdCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFellShepherdCard);

protected:
	CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CPriceOfKnowledgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPriceOfKnowledgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHoodedHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHoodedHorrorCard);
};

//____________________________________________________________________________
//
class CTemptWithGloryCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemptWithGloryCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentsPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CAngelOfFinalityCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfFinalityCard);

private:
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CTemptWithReflectionsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemptWithReflectionsCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CCreatureCard* pTargetCreature;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentsPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CTemptWithVengeanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemptWithVengeanceCard);

protected:
	CSelectionSupport m_PunisherSelection;
	int  nToken;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentsPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CTemptWithImmortalityCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemptWithImmortalityCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentsPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CTemptWithDiscoveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemptWithDiscoveryCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nOpponentsPaid; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//______________________________________________________________________________
//
class CFromTheAshesCard : public CCard
{
	DECLARE_CARD_CSTOR(CFromTheAshesCard);

protected:
	CSelectionSupport m_SelectionSearchOrNot;
	bool BeforeResolution(CAbilityAction* pAction);
	void SelectionSearchOrNotFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	std::vector<int> m_nNonBasicLand; // array of all players' non basic land in play counts
};

//______________________________________________________________________________
//
class CSuddenDemiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CSuddenDemiseCard);
protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ nLife; // must use a CStateSupportValueType<int> int_ for correct behavior 
	void CSuddenDemiseCard::DealDamageToCreatures(CManaPoolBase::Color CreatureColor);
};

//____________________________________________________________________________
//
class CTerraRavagerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTerraRavagerCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWitchHuntCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWitchHuntCard);
};

//____________________________________________________________________________
//
class CBaneOfProgressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBaneOfProgressCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction);
	int_ nCardDestroy; // must use a CStateSupportValueType<int> int_ for correct behavior 
};

//____________________________________________________________________________
//
class CPrimalVigorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrimalVigorCard);
};

//____________________________________________________________________________
//
class CRestoreCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRestoreCard);
};

//____________________________________________________________________________
//
class CSpawningGroundsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSpawningGroundsCard);
private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//