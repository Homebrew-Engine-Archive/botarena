#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
// Add new card class declaractions here
class CThePiecesAreComingTogetherCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CThePiecesAreComingTogetherCard);
};

//____________________________________________________________________________
//
class CRealmsBefittingMyMajestyCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CRealmsBefittingMyMajestyCard);
};

//____________________________________________________________________________
//
class CLookSkywardandDespairCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CLookSkywardandDespairCard);
};

//____________________________________________________________________________
//
class CRootsofAllEvilCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CRootsofAllEvilCard);
};

//____________________________________________________________________________
//
class CTheIronGuardianStirsCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CTheIronGuardianStirsCard);
};

//____________________________________________________________________________
//
class CTheVerySoilShallShakeCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CTheVerySoilShallShakeCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKnowNaughtbutFireCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CKnowNaughtbutFireCard);

protected:
		typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CApproachMyMoltenRealmCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CApproachMyMoltenRealmCard);
};

//____________________________________________________________________________
//
class CYourFateIsThriceSealedCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CYourFateIsThriceSealedCard);
};

//____________________________________________________________________________
//
class CYourPunyMindsCannotFathomCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CYourPunyMindsCannotFathomCard);
};

//____________________________________________________________________________
//
class CToothClawAndTailCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CToothClawAndTailCard);
};

//____________________________________________________________________________
//
class CIKnowAllISeeAllCard : public CSchemeCard 
{
	DECLARE_CARD_CSTOR(CIKnowAllISeeAllCard);

protected:
	bool SetTriggerContext1(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CIDelightInYourConvulsionsCard : public CSchemeCard
{
	DECLARE_CARD_CSTOR(CIDelightInYourConvulsionsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDancePatheticMarionetteCard : public CSchemeCard
{
	DECLARE_CARD_CSTOR(CDancePatheticMarionetteCard);

protected:
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CCountedCardContainer pRevealedCards;
};

//____________________________________________________________________________
//