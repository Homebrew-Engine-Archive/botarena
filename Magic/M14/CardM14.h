#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CKalonianTuskerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKalonianTuskerCard);
};

//____________________________________________________________________________
//
class CShadowbornDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowbornDemonCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShadowbornApostleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowbornApostleCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CStaffOfTheWildMagusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheWildMagusCard);
};

//____________________________________________________________________________
//
class CRegathanFirecatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRegathanFirecatCard);
};

//____________________________________________________________________________
//
