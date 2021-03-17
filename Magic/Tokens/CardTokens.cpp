#include "stdafx.h"
#include "CardTokens.h"

#define new DEBUG_NEW

#define DEFINE_TOKEN(T)	\
	if (!_tcsicmp(strTokenName, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
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