#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CCreeperhulkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCreeperhulkCard);
};

//____________________________________________________________________________
//