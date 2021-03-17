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
class CSaprolingIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingIToken);
};

//____________________________________________________________________________
//
class CSaprolingJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingJToken);
};

//____________________________________________________________________________
//
class CSaprolingKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingKToken);
};

//____________________________________________________________________________
//
class CSaprolingLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingLToken);
};

//____________________________________________________________________________
//
class CSaprolingMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingMToken);
};

//____________________________________________________________________________
//
class CReflectionBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CReflectionBToken);
};

//____________________________________________________________________________
//
class CSandWarriorToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSandWarriorToken);
};

//____________________________________________________________________________
//
class CPegasusCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPegasusCToken);
};

//____________________________________________________________________________
//
class CMyrBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMyrBToken);
};

//____________________________________________________________________________
//
class CMyrCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMyrCToken);
};

//____________________________________________________________________________
//
class CKithkinSoldierBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKithkinSoldierBToken);
};

//____________________________________________________________________________
//
class CInsectGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectGToken);
};

//____________________________________________________________________________
//
class CInsectHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectHToken);
};

//____________________________________________________________________________
//
class CHumanCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHumanCToken);
};

//____________________________________________________________________________
//
class CHippoBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHippoBToken);
};

//____________________________________________________________________________
//
class CElementalQToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalQToken);
};

//____________________________________________________________________________
//
class CEldraziToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziToken);
};

//____________________________________________________________________________
//
class COozeFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COozeFToken);
};

//____________________________________________________________________________
//
class CGoblinGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinGToken);
};

//____________________________________________________________________________
//
class CGoblinHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinHToken);
};

//____________________________________________________________________________
//
class CGoblinIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinIToken);
};

//____________________________________________________________________________
//
class CGoblinJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinJToken);
};

//____________________________________________________________________________
//
class CGoblinKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinKToken);
};

//____________________________________________________________________________
//
class CGoblinLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinLToken);
};

//____________________________________________________________________________
//
class CGoblinMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinMToken);
};

//____________________________________________________________________________
//
class CGoblinSoldierBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinSoldierBToken);
};

//____________________________________________________________________________
//
class COrbToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COrbToken);
};

//____________________________________________________________________________
//
class CHorrorCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHorrorCToken);
};

//____________________________________________________________________________
//
class CMinionAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMinionAToken);
};

//____________________________________________________________________________
//
class CMinionBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMinionBToken);
};

//____________________________________________________________________________
//
class CLizardToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CLizardToken);
};

//____________________________________________________________________________
//
class CTetraviteToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTetraviteToken);
};

//____________________________________________________________________________
//
class CBlankAToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankAToken);
};

//____________________________________________________________________________
//
class CBlankBToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankBToken);
};

//____________________________________________________________________________
//
class CBlankCToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankCToken);
};

//____________________________________________________________________________
//
class CBlankDToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankDToken);
};

//____________________________________________________________________________
//
class CBlankEToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankEToken);
};

//____________________________________________________________________________
//
class CBlankFToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankFToken);
};

//____________________________________________________________________________
//
class CBlankGToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankGToken);
};

//____________________________________________________________________________
//
class CBlankHToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankHToken);
};

//____________________________________________________________________________
//
class CBlankIToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankIToken);
};

//____________________________________________________________________________
//
class CBlankJToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankJToken);
};

//____________________________________________________________________________
//
class CBlankKToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankKToken);
};

//____________________________________________________________________________
//
class CBlankLToken : public CVariableTokenCreature
{
	DECLARE_CARD_CSTOR(CBlankLToken);
};

//____________________________________________________________________________
//
class CSkeletonBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSkeletonBToken);
};

//____________________________________________________________________________
//
class CDragonSpiritToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonSpiritToken);
};

//____________________________________________________________________________
//
class CWallBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWallBToken);
};

//____________________________________________________________________________
//
class CTwinToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTwinToken);
};

//____________________________________________________________________________
//
class CElementalRToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalRToken);
};

//____________________________________________________________________________
//
class CAngelIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelIToken);
};

//____________________________________________________________________________
//
class CSliverCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSliverCToken);
};

//____________________________________________________________________________
//
class CElementalSToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalSToken);
};

//____________________________________________________________________________
//
class CBeastMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastMToken);
};

//____________________________________________________________________________
//
class CSaprolingNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingNToken);
};

//____________________________________________________________________________
//
class CDragonGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonGToken);
};

//____________________________________________________________________________
//
class CWolfIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfIToken);
};

//____________________________________________________________________________
//
class CElementalTToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalTToken);
};

//____________________________________________________________________________
//
class CHarpyToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHarpyToken);
};

//____________________________________________________________________________
//
class CElementalUToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalUToken);
};

//____________________________________________________________________________
//
class CSoldierNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierNToken);
};

//____________________________________________________________________________
//
class CSoldierOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierOToken);
};

//____________________________________________________________________________
//
class CSoldierPToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierPToken);
};

//____________________________________________________________________________
//
class CGolemEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemEToken);
};

//____________________________________________________________________________
//
class CBoarBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBoarBToken);
};

//____________________________________________________________________________
//
class CBirdIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdIToken);
};

//____________________________________________________________________________
//
class CSatyrToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSatyrToken);
};

//____________________________________________________________________________
//
class CSnakeGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeGToken);
};

//____________________________________________________________________________
//
class CElementalVToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalVToken);
};

//____________________________________________________________________________
//
class CBeastNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastNToken);
};

//____________________________________________________________________________
//
class CCatSoldierAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatSoldierAToken);
};

//____________________________________________________________________________
//
class CSoldierQToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierQToken);
};

//____________________________________________________________________________
//
class CBirdJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdJToken);
};

//____________________________________________________________________________
//
class CZombieNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieNToken);
};

//____________________________________________________________________________
//
class CElementalWToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalWToken);
};

//____________________________________________________________________________
//
class CCentaurDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCentaurDToken);
};

//____________________________________________________________________________
//
class CWolfJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfJToken);
};

//____________________________________________________________________________
//
class CKrakenAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKrakenAToken);
};

//____________________________________________________________________________
//
class CBirdKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdKToken);
};

//____________________________________________________________________________
//
class CZombieOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieOToken);
};

//____________________________________________________________________________
//
class CMinotaurAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMinotaurAToken);
};

//____________________________________________________________________________
//
