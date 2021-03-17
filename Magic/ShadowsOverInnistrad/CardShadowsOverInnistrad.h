#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDevilthornFoxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevilthornFoxCard);
};

//___________________________________________________________________________
//
class CHulkingDevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHulkingDevilCard);
};

//____________________________________________________________________________
//
class CNiblisOfDuskCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNiblisOfDuskCard);
};

//____________________________________________________________________________
//
class CSeagrafSkaabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeagrafSkaabCard);
};

//____________________________________________________________________________
//
class CThornhideWolvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornhideWolvesCard);
};

//____________________________________________________________________________
//
class CVampireNobleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireNobleCard);
};

//____________________________________________________________________________
//
class CWarpedLandscapeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWarpedLandscapeCard);
};

//____________________________________________________________________________
//
class CSilentObserverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentObserverCard);
};

//____________________________________________________________________________
//
class CSanguinaryMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSanguinaryMageCard);
};

//____________________________________________________________________________
//
class CChokedEstuaryCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CChokedEstuaryCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CForebodingRuinsCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CForebodingRuinsCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFortifiedVillageCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CFortifiedVillageCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGameTrailCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGameTrailCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPortTownCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CPortTownCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CDrownyardTempleCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CDrownyardTempleCard);
};

//____________________________________________________________________________
//
class CHighlandLakeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHighlandLakeCard);
};

//____________________________________________________________________________
//
class CWoodlandStreamCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWoodlandStreamCard);
};

//____________________________________________________________________________
//
class CFoulOrchardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFoulOrchardCard);
};

//____________________________________________________________________________
//
class CForsakenSantuaryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CForsakenSantuaryCard);
};

//____________________________________________________________________________
//
class CStoneQuarryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CStoneQuarryCard);
};

//____________________________________________________________________________
//
