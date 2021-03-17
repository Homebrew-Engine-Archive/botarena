#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAngelOfLightCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelOfLightCard);
};

//____________________________________________________________________________
//
class CCinderStormCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCinderStormCard);
};

//____________________________________________________________________________
//
class CDakmorGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDakmorGhoulCard);
};

//____________________________________________________________________________
//
class CDevoutMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevoutMonkCard);
};

//____________________________________________________________________________
//
class CGoblinCommandoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinCommandoCard);
};

//____________________________________________________________________________
//
class CGoblinSettlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSettlerCard);
};

//____________________________________________________________________________
//
class CGrimTutorCard : public CCard//CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CGrimTutorCard);
};

//____________________________________________________________________________
//
class CRoyalFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRoyalFalconCard);
};

//____________________________________________________________________________
//
class CRoyalTrooperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoyalTrooperCard);
};

//____________________________________________________________________________
//
class CShriekingSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekingSpecterCard);
};

//____________________________________________________________________________
//
class CStreamOfAcidCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CStreamOfAcidCard);
};

//____________________________________________________________________________
//
class CThunderDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderDragonCard);
};

//____________________________________________________________________________
//
class CWillowElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWillowElfCard);
};

//____________________________________________________________________________
//
class CChampionLancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChampionLancerCard);
};

//____________________________________________________________________________
//
