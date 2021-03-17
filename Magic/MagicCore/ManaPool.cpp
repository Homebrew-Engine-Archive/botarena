#include "stdafx.h"

#define new DEBUG_NEW

#define WHITE_MANA_FULL_TEXT		_T("white")
#define BLUE_MANA_FULL_TEXT			_T("blue")
#define BLACK_MANA_FULL_TEXT		_T("black")
#define RED_MANA_FULL_TEXT			_T("red")
#define GREEN_MANA_FULL_TEXT		_T("green")
#define COLORLESS_MANA_FULL_TEXT	_T("colorless")

//____________________________________________________________________________
//
CManaPoolBase::Colors CManaPoolBase::AllPoolColors(
	CManaPool::Color::White,
	CManaPool::Color::Blue,
	CManaPool::Color::Black,
	CManaPool::Color::Red,
	CManaPool::Color::Green,
	CManaPool::Color::Colorless);

CString CManaPoolBase::Color::ToString(Color manaColor)
{
	switch(manaColor.Get())
	{
	case CManaPool::Color::White:	  return WHITE_MANA_FULL_TEXT;
	case CManaPool::Color::Blue:	  return BLUE_MANA_FULL_TEXT;
	case CManaPool::Color::Black:	  return BLACK_MANA_FULL_TEXT;
	case CManaPool::Color::Red:		  return RED_MANA_FULL_TEXT;
	case CManaPool::Color::Green:	  return GREEN_MANA_FULL_TEXT;
	case CManaPool::Color::Colorless: return COLORLESS_MANA_FULL_TEXT;
	}

	return _T("");
}

CString CManaPoolBase::Color::ToDrawString(Color manaColor)
{
	switch(manaColor.Get())
	{
	case CManaPool::Color::White: return _T("{") WHITE_MANA_TEXT _T("}");
	case CManaPool::Color::Blue:  return _T("{") BLUE_MANA_TEXT	 _T("}");
	case CManaPool::Color::Black: return _T("{") BLACK_MANA_TEXT _T("}");
	case CManaPool::Color::Red:	  return _T("{") RED_MANA_TEXT	 _T("}");
	case CManaPool::Color::Green: return _T("{") GREEN_MANA_TEXT _T("}");
	}

	return _T("");
}
