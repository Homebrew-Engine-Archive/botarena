#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBazaarofBaghdadCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CBazaarofBaghdadCard);
};

//____________________________________________________________________________
//
class CAlifromCairoCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CAlifromCairoCard);
};

//____________________________________________________________________________
//
 class CJuzamDjinnCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CJuzamDjinnCard);
};
 
//____________________________________________________________________________
//
class CFlyingMenCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CFlyingMenCard);
};

//____________________________________________________________________________
//
class CArmyOfAllahCard : public CCard 
{
	DECLARE_CARD_CSTOR(CArmyOfAllahCard);
};

//____________________________________________________________________________
//
class CDesertCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDesertCard);
};

//____________________________________________________________________________
//
class CElephantGraveyardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CElephantGraveyardCard);
};

//____________________________________________________________________________
//
class CKingSuleimanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKingSuleimanCard);
};

//____________________________________________________________________________
//
class CMoorishCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoorishCavalryCard);
};

//____________________________________________________________________________
//
class CStoneThrowingDevilsCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneThrowingDevilsCard);
};

//____________________________________________________________________________
//
class CHasranOgressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHasranOgressCard);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CLibraryOfAlexandriaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLibraryOfAlexandriaCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CIslandOfWakWakCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CIslandOfWakWakCard);
};

//____________________________________________________________________________
//
class CSingingTreeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSingingTreeCard);
};

//____________________________________________________________________________
//
class CMerchantShipCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerchantShipCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CDiamondValleyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDiamondValleyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDropOfHoneyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDropOfHoneyCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CErhnamDjinnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CErhnamDjinnCard);
};

//____________________________________________________________________________
//
class CKhabalGhoulCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CKhabalGhoulCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};
 
//____________________________________________________________________________
//
class CAladdinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAladdinCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
	CAbility* m_pStealAbility;
	CCardFilter m_CardFilter;
 };

//____________________________________________________________________________
//
class CSerendibDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSerendibDjinnCard);

protected:
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSandalsOfAbdallahCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSandalsOfAbdallahCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
