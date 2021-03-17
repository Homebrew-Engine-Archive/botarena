#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CElHajjajCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElHajjajCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CBrassManCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrassManCard);
};

//____________________________________________________________________________
//
class CIslandFishJasconiusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIslandFishJasconiusCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class COnuletCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COnuletCard);
};

//____________________________________________________________________________
//
class CAtogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAtogCard);
};

//____________________________________________________________________________
//
class CIvoryTowerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIvoryTowerCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CReconstructionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CReconstructionCard);
};

//____________________________________________________________________________
//
class CTheRackCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTheRackCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CPlayer* SelectedPlayer;
};

//____________________________________________________________________________
//
class CDesertTwisterCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDesertTwisterCard);
};

//____________________________________________________________________________
//
class CSerendibEfreetCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CSerendibEfreetCard);
	
};

//____________________________________________________________________________
//
class CAladdinsRingCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAladdinsRingCard);
};

//____________________________________________________________________________
//
class CBottleOfSuleimanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBottleOfSuleimanCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CDancingScimitarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDancingScimitarCard);
};

//____________________________________________________________________________
//
class CDragonEngineCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonEngineCard);
};

//____________________________________________________________________________
//
class CEbonyHorseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEbonyHorseCard);
};

//____________________________________________________________________________
//
class CFlyingCarpetCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CFlyingCarpetCard);
};

//____________________________________________________________________________
//
class CHurkylsRecallCard : public CCard
{
	DECLARE_CARD_CSTOR(CHurkylsRecallCard);

protected:
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CJandorsSaddlebagsCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CJandorsSaddlebagsCard);
};

//____________________________________________________________________________
//
class CKirdApeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKirdApeCard);
};

//____________________________________________________________________________
//
class CMillstoneCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CMillstoneCard);
};

//____________________________________________________________________________
//
class COrnithopterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COrnithopterCard);
};

//____________________________________________________________________________
//
class CPrimalClayCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimalClayCard);
};

//____________________________________________________________________________
//
class CShatterstormCard : public CCard
{
	DECLARE_CARD_CSTOR(CShatterstormCard);
};

//____________________________________________________________________________
//
class CSorceressQueenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSorceressQueenCard);
};

//____________________________________________________________________________
//
class CDwarvenWeaponsmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenWeaponsmithCard);
};

//____________________________________________________________________________
//
class CUnstableMutationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CUnstableMutationCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CCrumbleCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCrumbleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEnergyFluxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEnergyFluxCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//_____________________________________________________________________________
//
class CErgRaidersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CErgRaidersCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CMijaeDjinnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMijaeDjinnCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CJandorsRingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJandorsRingCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRocketLauncherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRocketLauncherCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//