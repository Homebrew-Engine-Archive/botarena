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
