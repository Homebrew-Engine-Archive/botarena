#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CMaraxusCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CMaraxusCard);
};

//____________________________________________________________________________
//
class CSerraCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CSerraCard);
};

//____________________________________________________________________________
//
class COrimCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(COrimCard);
};

//____________________________________________________________________________
//
class CSeleniaCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CSeleniaCard);
};

//____________________________________________________________________________
//
class CTahngarthCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CTahngarthCard);
};

//____________________________________________________________________________
//
class CHannaCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CHannaCard);
};

//____________________________________________________________________________
//
class CTitaniaCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CTitaniaCard);
};

//____________________________________________________________________________
//
class CTawnosCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CTawnosCard);
};

//____________________________________________________________________________
//
class CEladamriLordOfLeavesAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CEladamriLordOfLeavesAvatarCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class COrcishSquattersAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(COrcishSquattersAvatarCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRoyalAssassinAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CRoyalAssassinAvatarCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CGerrardCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CGerrardCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CTwoHeadedGiantOfForiysAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CTwoHeadedGiantOfForiysAvatarCard);
};

//____________________________________________________________________________
//
class CErtaiCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CErtaiCard);
};

//____________________________________________________________________________
//
class CFreneticEfreetAvatarCard : public CVanguardCard
{
	DECLARE_CARD_CSTOR(CFreneticEfreetAvatarCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class COracleCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(COracleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMaralenOfTheMornsongAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CMaralenOfTheMornsongAvatarCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution1(CAbilityAction* pAction);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;

	bool GameBegins;
	int LifePaid;
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CViridianZealotAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CViridianZealotAvatarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCrovaxCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CCrovaxCard);

protected:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage);
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage);
};

//____________________________________________________________________________
//
class CMasterOfTheWildHuntAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CMasterOfTheWildHuntAvatarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CArcanisTheOmnipotentAvatarCard : public CVanguardCard 
{
	DECLARE_CARD_CSTOR(CArcanisTheOmnipotentAvatarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
