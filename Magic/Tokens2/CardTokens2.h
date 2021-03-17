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
class CSpiritQToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritQToken);
};

//____________________________________________________________________________
//
class CWarriorCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorCToken);
};

//____________________________________________________________________________
//
class CMonkAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMonkAToken);
};

//____________________________________________________________________________
//
class CCatFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatFToken);
};

//____________________________________________________________________________
//
class CClericBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CClericBToken);
};

//____________________________________________________________________________
//
class CDragonHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonHToken);
};

//____________________________________________________________________________
//
class CWarriorDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorDToken);
};

//____________________________________________________________________________
//
class CDjinnMonkAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDjinnMonkAToken);
};

//____________________________________________________________________________
//
class CZombieRToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieRToken);
};

//____________________________________________________________________________
//
class CZombieHorrorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieHorrorAToken);
};

//____________________________________________________________________________
//
class CGoblinOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinOToken);
};

//____________________________________________________________________________
//
class CSliverDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSliverDToken);
};

//____________________________________________________________________________
//
class CSoldierRToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierRToken);
};

//____________________________________________________________________________
//
class CZombieSToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieSToken);
};

//____________________________________________________________________________
//
class CGoblinPToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinPToken);
};

//____________________________________________________________________________
//
class CBeastOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastOToken);
};

//____________________________________________________________________________
//
class CBeastPToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastPToken);
};

//____________________________________________________________________________
//
class CInsectIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectIToken);
};

//____________________________________________________________________________
//
class CSpiritRToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritRToken);
};

//____________________________________________________________________________
//
class CSquidAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSquidAToken);
};

//____________________________________________________________________________
//
class CDragonIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonIToken);
};

//____________________________________________________________________________
//
class CTreefolkWarriorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTreefolkWarriorAToken);
};

//____________________________________________________________________________
//
class CAshayaTheAwokenWorldToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAshayaTheAwokenWorldToken);
};

//____________________________________________________________________________
//
class CAngelJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelJToken);
};

//____________________________________________________________________________
//
class CKnightEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKnightEToken);
};

//____________________________________________________________________________
//
class CSoldierSToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierSToken);
};

//____________________________________________________________________________
//
class CDemonEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDemonEToken);
};

//____________________________________________________________________________
//
class CZombieTToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieTToken);
};

//____________________________________________________________________________
//
class CGoblinQToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinQToken);
};

//____________________________________________________________________________
//
class CElementalXToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalXToken);
};

//____________________________________________________________________________
//
class CElfWarriorDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElfWarriorDToken);
};

//____________________________________________________________________________
//
class CThopterDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThopterDToken);
};

//_____________________________________________________________________________
//
class CThopterEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThopterEToken);
};

//_____________________________________________________________________________
//
class COctopusAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COctopusAToken);
};

//_____________________________________________________________________________
//
class CEldraziScionAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziScionAToken);
};

//____________________________________________________________________________
//
class CEldraziScionBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziScionBToken);
};

//____________________________________________________________________________
//
class CEldraziScionCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziScionCToken);
};

//____________________________________________________________________________
//
class CEldraziAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziAToken);
};

//____________________________________________________________________________
//
class CKnightAllyAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKnightAllyAToken);
};

//____________________________________________________________________________
//
class CKorAllyAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKorAllyAToken);
};

//____________________________________________________________________________
//
class CDragonJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonJToken);
};

//____________________________________________________________________________
//
class CElementalYToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalYToken);
};

//____________________________________________________________________________
//
class CPlantBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPlantBToken);
};

//____________________________________________________________________________
//
class CElementalZToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalZToken);
};

//____________________________________________________________________________
//
class CPlantCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPlantCToken);
};

//____________________________________________________________________________
//
class CElementalZAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalZAToken);
};

//____________________________________________________________________________
//
class CElementalZBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalZBToken);
};

//____________________________________________________________________________
//
class CZombieUToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieUToken);
};

//____________________________________________________________________________
//
class CAngelKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelKToken);
};

//____________________________________________________________________________
//
class CEldraziScionDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziScionDToken);
};

//____________________________________________________________________________
//
class CEldraziScionEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziScionEToken);
};

//____________________________________________________________________________
//
class CEldraziScionFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziScionFToken);
};

//____________________________________________________________________________
//
