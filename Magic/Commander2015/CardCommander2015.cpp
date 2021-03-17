#include "stdafx.h"
#include "CardCommander2015.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		// Add new card class names here:
		// For example:
		// 	DEFINE_CARD(CDefenderEnVecCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here