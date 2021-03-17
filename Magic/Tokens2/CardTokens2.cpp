#include "stdafx.h"
#include "CardTokens2.h"

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
		DEFINE_TOKEN(CBearCToken);
		DEFINE_TOKEN(CBirdLToken);
		DEFINE_TOKEN(CConstructAToken);
		DEFINE_TOKEN(CDemonDToken);
		DEFINE_TOKEN(CElephantEToken);
		DEFINE_TOKEN(CGoblinNToken);
		DEFINE_TOKEN(CHydraAToken);
		DEFINE_TOKEN(COgreAToken);
		DEFINE_TOKEN(CSnakeHToken);
		DEFINE_TOKEN(CSnakeIToken);
		DEFINE_TOKEN(CSphinxAToken);
		DEFINE_TOKEN(CSpiderDToken);
		DEFINE_TOKEN(CSpiritOToken);
		DEFINE_TOKEN(CSpiritPToken);
		DEFINE_TOKEN(CSpiritWarriorAToken);
		DEFINE_TOKEN(CSquirrelEToken);
		DEFINE_TOKEN(CVampireDToken);
		DEFINE_TOKEN(CWarriorAToken);
		DEFINE_TOKEN(CWarriorBToken);
		DEFINE_TOKEN(CWolfKToken);
		DEFINE_TOKEN(CZombiePToken);
		DEFINE_TOKEN(CZombieQToken);	
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
void CTokenCreature::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::Battlefield && !this->GetCardType().IsToken())
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//
CSnakeHToken::CSnakeHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);
	GetCardKeyword()->AddDeathtouch(FALSE);
// JOU version:
}

//____________________________________________________________________________
//
CSphinxAToken::CSphinxAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sphinx"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sphinx), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// JOU version:
}

//____________________________________________________________________________
//
CSpiderDToken::CSpiderDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spider"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Spider), nID,
		_T(""),
		Power(1), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	GetCreatureKeyword()->AddReach(FALSE);
// JOU version:
}

//____________________________________________________________________________
//
CHydraAToken::CHydraAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hydra"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hydra), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// JOU version:
}

//____________________________________________________________________________
//
CConstructAToken::CConstructAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Construct), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->Defender();
// CNS version:
}

//____________________________________________________________________________
//
CWolfKToken::CWolfKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// CNS version: 
}

//____________________________________________________________________________
//
CSquirrelEToken::CSquirrelEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Squirrel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Squirrel), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// CNS version: 
}

//____________________________________________________________________________
//
CElephantEToken::CElephantEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elephant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elephant), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// CNS version: 
}

//____________________________________________________________________________
//
COgreAToken::COgreAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ogre"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ogre), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
// CNS version: 
}

//____________________________________________________________________________
//
CDemonDToken::CDemonDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// CNS version: 
}

//____________________________________________________________________________
//
CSpiritOToken::CSpiritOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// CNS version: 
}

//____________________________________________________________________________
//
CZombiePToken::CZombiePToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// CNS version:
}

//____________________________________________________________________________
//
CBirdLToken::CBirdLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(3), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// KTK version:
}

//____________________________________________________________________________
//
CSpiritPToken::CSpiritPToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// KTK version: 
}

//____________________________________________________________________________
//
CWarriorAToken::CWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// KTK version: 
}

//____________________________________________________________________________
//
CWarriorBToken::CWarriorBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// KTK version: 
}

//____________________________________________________________________________
//
CVampireDToken::CVampireDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Vampire"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Vampire), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// KTK version: 
}

//____________________________________________________________________________
//
CZombieQToken::CZombieQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// KTK version:
}

//____________________________________________________________________________
//
CBearCToken::CBearCToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Bear"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Bear), nID,
        _T(""),
        Power(4), Life(4))
{
    AddCardType(CardType::Green, CardType::_ColorMask);
// KTK version:
}

//____________________________________________________________________________
//
CSnakeIToken::CSnakeIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// KTK version:
}

//____________________________________________________________________________
//
CGoblinNToken::CGoblinNToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
// KTK version:
}

//____________________________________________________________________________
//
CSpiritWarriorAToken::CSpiritWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Spirit, Warrior), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green | CardType::Black, CardType::_ColorMask);
// KTK version:
}

//____________________________________________________________________________
//
