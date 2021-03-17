#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID);

//____________________________________________________________________________
//
// Add new card class declaractions here

class CGruulCharmEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CGruulCharmEffectToken);
};

//____________________________________________________________________________
//
class CVizkopaGuildmageEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CVizkopaGuildmageEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CInterventionPactEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CInterventionPactEffectToken);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
	bool SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

/*	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;*/
};

//____________________________________________________________________________
//
class CPactofNegationEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CPactofNegationEffectToken);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
	bool SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CPactOfTheTitanEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CPactOfTheTitanEffectToken);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
	bool SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CSlaughterPactEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CSlaughterPactEffectToken);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
	bool SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CSummonersPactEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CSummonersPactEffectToken);

private:
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
	bool SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CVenserTheSojournerEmblemToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CVenserTheSojournerEmblemToken);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CDomriRadeEmblemToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CDomriRadeEmblemToken);
};

//____________________________________________________________________________
//
class CKothOfTheHammerEmblemToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CKothOfTheHammerEmblemToken);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSorinLordOfInnistradEmblemToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CSorinLordOfInnistradEmblemToken);
};

//____________________________________________________________________________
//
class CTamiyoTheMoonSageEmblemToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CTamiyoTheMoonSageEmblemToken);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CLilianaOfTheDarkRealmsEmblemToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CLilianaOfTheDarkRealmsEmblemToken);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CAlchemistsRefugeEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CAlchemistsRefugeEffectToken);
};

//____________________________________________________________________________
//
class CApproachMyMoltenRealmEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CApproachMyMoltenRealmEffectToken);
};

//____________________________________________________________________________
//
class CArcaneDenialEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CArcaneDenialEffectToken);

protected:
	int_ bPrimed;
	int_ bFired;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CBubblingMuckEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CBubblingMuckEffectToken);
};

//____________________________________________________________________________
//
class CChannelEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CChannelEffectToken);
};

//____________________________________________________________________________
//
class CChandraTheFirebrandEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CChandraTheFirebrandEffectToken);

protected:
	int_ bFired;

	bool SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard);
};

//____________________________________________________________________________
//
class CDuskmantleGuildmageEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CDuskmantleGuildmageEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CEnterTheInfiniteEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CEnterTheInfiniteEffectToken);
};

//____________________________________________________________________________
//
class CFalterEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CFalterEffectToken);
};

//____________________________________________________________________________
//
class CFlashOfDefianceEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CFlashOfDefianceEffectToken);
};

//____________________________________________________________________________
//
class CGlimpseofNatureEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CGlimpseofNatureEffectToken);

	protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CHighTideEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CHighTideEffectToken);
};

//____________________________________________________________________________
//
class CJaceArchitectOfThoughtEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CJaceArchitectOfThoughtEffectToken);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CLatNamsLegacyEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CLatNamsLegacyEffectToken);

protected:
	int_ bPrimed;
	int_ bFired;

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCastAny > TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CPraetorsCounselEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CPraetorsCounselEffectToken);
};

//____________________________________________________________________________
//
class CQuickenEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CQuickenEffectToken);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CRuthlessInvasionEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CRuthlessInvasionEffectToken);
};

//____________________________________________________________________________
//
class CScoutsWarningEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CScoutsWarningEffectToken);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CSlowtripEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CSlowtripEffectToken);

protected:
	int_ bPrimed;
	int_ bFired;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CThePiecesAreComingTogetherEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CThePiecesAreComingTogetherEffectToken);
};

//____________________________________________________________________________
//
class CYourPunyMindsCannotFathomEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CYourPunyMindsCannotFathomEffectToken);
};

//____________________________________________________________________________
//
class CWindingCanyonsEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CWindingCanyonsEffectToken);
};

//____________________________________________________________________________
//
class CHazezonTamarEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CHazezonTamarEffectToken);

protected:
	int_ bFired;

	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CMoonmistEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CMoonmistEffectToken);
};

//____________________________________________________________________________
//
class CEtherswornShieldmageEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CEtherswornShieldmageEffectToken);
};

//____________________________________________________________________________
//
class CArchangelOfStrifeWarEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CArchangelOfStrifeWarEffectToken);
};

//____________________________________________________________________________
//
class CArchangelOfStrifePeaceEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CArchangelOfStrifePeaceEffectToken);
};

//____________________________________________________________________________
//
/*
class CChancellorOfTheAnnexEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CChancellorOfTheAnnexEffectToken);

protected:
	std::vector<int> bFired;
	BOOL_ bPristine;

	bool SetTriggerContext1(CTriggeredAllCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard);
											
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};
*/
//____________________________________________________________________________
//
/*
class CADisplayOfMyDarkPowerEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CADisplayOfMyDarkPowerEffectToken);

private:
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
*/
//____________________________________________________________________________
//
class CEndOfCombatBounceEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndOfCombatBounceEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CEndOfCombatDestroyEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndOfCombatDestroyEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CAcidicDaggerEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CAcidicDaggerEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBerserkEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CBerserkEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CZombieBoaWhiteEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CZombieBoaWhiteEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CZombieBoaBlueEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CZombieBoaBlueEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CZombieBoaBlackEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CZombieBoaBlackEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CZombieBoaRedEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CZombieBoaRedEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CZombieBoaGreenEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CZombieBoaGreenEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAdarkarValkyrieEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CAdarkarValkyrieEffectToken);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGracefulReprieveEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CGracefulReprieveEffectToken);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CInitiateOfBloodEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CInitiateOfBloodEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CReincarnationEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CReincarnationEffectToken);

protected:
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSandalsOfAbdallahEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSandalsOfAbdallahEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSkeletonizeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSkeletonizeEffectToken);

protected:
	CCountedCardContainer_ pDamagedCreatures;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage);
	bool SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CVirulentWoundEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CVirulentWoundEffectToken);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGenericContainerToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CGenericContainerToken);
};

//____________________________________________________________________________
//
class CEndStepReturnFromExileEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepReturnFromExileEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepSacrificeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepSacrificeEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepBounceEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepBounceEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepDestroyEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepDestroyEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepExileEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepExileEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CBloodlordOfVaasgothEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CBloodlordOfVaasgothEffectToken);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CBroodOfCockroachesEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CBroodOfCockroachesEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepSureSacrificeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepSureSacrificeEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CFalseMemoriesEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CFalseMemoriesEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CFlickerformEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CFlickerformEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CGiantCaterpillarPupaToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CGiantCaterpillarPupaToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CGoblinKitesEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CGoblinKitesEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);

	CSelectionSupport m_FlipSelection;
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CGraveBetrayalEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CGraveBetrayalEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CIdeasUnboundEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CIdeasUnboundEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CIgnorantBlissEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CIgnorantBlissEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepReanimateEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepReanimateEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CTatsumasaTheDragonsFangEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CTatsumasaTheDragonsFangEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CLoyalCatharEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CLoyalCatharEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepDestroyPacifistsEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepDestroyPacifistsEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CMaddeningImpEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CMaddeningImpEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CShireiShizosCaretakerEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CShireiShizosCaretakerEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);

	CSelectionSupport m_Selection;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CShichifukujinDragonEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CShichifukujinDragonEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CSirensCallEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CSirensCallEffectToken);

protected:
	BOOL_ bFired;

	CPlayer* pPlayer;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);

	bool SetTriggerContextS(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CMemoryJarEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CMemoryJarEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CMagusOfTheJarEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheJarEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CEndStepRaiseEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndStepRaiseEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CMystifyingMazeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CMystifyingMazeEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CNecropotenceEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CNecropotenceEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class COtherworldlyJourneyEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(COtherworldlyJourneyEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CProteanHydraEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CProteanHydraEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CPureIntentionsEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CPureIntentionsEffectToken);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CRainbowValeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CRainbowValeEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);

	CSelectionSupport m_OpponentSelection;
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRukhEggEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CRukhEggEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CSandGolemEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSandGolemEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CSeraphFirstEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSeraphFirstEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CSeraphSecondEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSeraphSecondEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CShiftyDoppelgangerEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CShiftyDoppelgangerEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CSpinalEmbraceEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSpinalEmbraceEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CTransluminantEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CTransluminantEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode);
};

//____________________________________________________________________________
//
class CBattleCryEffectToken : public CEffectCard
{
	DECLARE_CARD_CSTOR(CBattleCryEffectToken);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCreatureCard* pCreature) const;
};

//____________________________________________________________________________
//
class CHeartWolfEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CHeartWolfEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKjeldoranEliteGuardEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CKjeldoranEliteGuardEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CKjeldoranGuardEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CKjeldoranGuardEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhantasmalMountEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CPhantasmalMountEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution1(CAbilityAction* pAction) const;

	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSaffiEriksdotterEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CSaffiEriksdotterEffectToken);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CWarBargeEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CWarBargeEffectToken);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBasaltGolemEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CBasaltGolemEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CEndOfCombatRemovePlusCounterEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndOfCombatRemovePlusCounterEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CContemptEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CContemptEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CEndOfCombatSacrificeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndOfCombatSacrificeEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CRuneswordEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CRuneswordEffectToken);

protected:
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDwarvenSeaClanEffectToken : public CDoubleContainerEffectCard
{
	DECLARE_CARD_CSTOR(CDwarvenSeaClanEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CFickleEfreetEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CFickleEfreetEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OpponentSelection(CPlayer* pSelectionPlayer);

	CSelectionSupport m_FlipSelection;
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_OpponentSelection;
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CFrostwebSpiderEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CFrostwebSpiderEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CEndOfCombatExileEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CEndOfCombatExileEffectToken);

protected:
	BOOL_ bFired;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction) const;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CGlyphOfLifeEffectToken : public CContainerEffectCard
{
	DECLARE_CARD_CSTOR(CGlyphOfLifeEffectToken);

protected:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
