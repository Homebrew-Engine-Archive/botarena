#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID);

//____________________________________________________________________________
//
class CSnakeHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeHToken);
};

//____________________________________________________________________________
//
class CSphinxAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSphinxAToken);
};

//____________________________________________________________________________
//
class CSpiderDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiderDToken);
};

//____________________________________________________________________________
//
class CHydraAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHydraAToken);
};

//____________________________________________________________________________
//
class CConstructAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructAToken);
};

//____________________________________________________________________________
//
class CWolfKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfKToken);
};

//____________________________________________________________________________
//
class CSquirrelEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSquirrelEToken);
};

//____________________________________________________________________________
//
class CElephantEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElephantEToken);
};

//____________________________________________________________________________
//
class COgreAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COgreAToken);
};

//____________________________________________________________________________
//
class CDemonDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDemonDToken);
};

//____________________________________________________________________________
//
class CSpiritOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritOToken);
};

//____________________________________________________________________________
//
class CZombiePToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombiePToken);
};

//____________________________________________________________________________
//
class CBirdLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdLToken);
};

//____________________________________________________________________________
//
class CSpiritPToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritPToken);
};

//____________________________________________________________________________
//
class CWarriorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorAToken);
};

//____________________________________________________________________________
//
class CWarriorBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorBToken);
};

//____________________________________________________________________________
//
class CVampireDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CVampireDToken);
};

//____________________________________________________________________________
//
class CZombieQToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieQToken);
};

//____________________________________________________________________________
//
class CBearCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBearCToken);
};

//____________________________________________________________________________
//
class CSnakeIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeIToken);
};

//____________________________________________________________________________
//
class CGoblinNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinNToken);
};

//____________________________________________________________________________
//
class CSpiritWarriorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritWarriorAToken);
};

//____________________________________________________________________________
//