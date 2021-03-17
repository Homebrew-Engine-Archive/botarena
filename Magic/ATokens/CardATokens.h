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

class CAnimatedArtifactAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedArtifactAToken);
};

//____________________________________________________________________________
//
class CAnimatedForestAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedForestAToken);
};

//____________________________________________________________________________
//
class CAnimatedForestBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedForestBToken);
};

//____________________________________________________________________________
//
class CBirdAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdAAToken);
};

//____________________________________________________________________________
//
class CBirdABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdABToken);
};

//____________________________________________________________________________
//
class CAnimatedGideonJuraToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedGideonJuraToken);
};

//____________________________________________________________________________
//
class CAnimatedGideonChampionOfJusticeToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedGideonChampionOfJusticeToken);
};

//____________________________________________________________________________
//
class CAnimatedLandAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandAToken);
};

//____________________________________________________________________________
//
class CAnimatedLandBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandBToken);
};

//____________________________________________________________________________
//
class CAnimatedLandCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandCToken);
};

//____________________________________________________________________________
//
class CAnimatedSwampToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedSwampToken);
};

//____________________________________________________________________________
//
class CApeAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CApeAAToken);
};

//____________________________________________________________________________
//
class CAngelAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelAAToken);
};

//____________________________________________________________________________
//
class CAssemblyWorkerAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAssemblyWorkerAAToken);
};

//____________________________________________________________________________
//
class CAtogAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAtogAAToken);
};

//____________________________________________________________________________
//
class CBeastAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastAAToken);
};

//____________________________________________________________________________
//
class CBeastABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastABToken);
};

//____________________________________________________________________________
//
class CBeastACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastACToken);
};

//____________________________________________________________________________
//
class CBlinkmothAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBlinkmothAAToken);
};

//____________________________________________________________________________
//
class CBlinkmothABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBlinkmothABToken);
};

//____________________________________________________________________________
//
class CCentaurAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCentaurAAToken);
};

//____________________________________________________________________________
//
class CConstructAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructAAToken);
};

//____________________________________________________________________________
//
class CConstructABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructABToken);
};

//____________________________________________________________________________
//
class CConstructACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructACToken);
};

//____________________________________________________________________________
//
class CConstructADToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructADToken);
};

//____________________________________________________________________________
//
class CThrullAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThrullAAToken);
};

//____________________________________________________________________________
//
class CCrabAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCrabAAToken);
};

//____________________________________________________________________________
//
class CHorrorAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHorrorAAToken);
};

//____________________________________________________________________________
//
class CHorrorABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHorrorABToken);
};

//____________________________________________________________________________
//
class CDevilAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDevilAAToken);
};

//____________________________________________________________________________
//
class COozeAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COozeAAToken);	
};

//____________________________________________________________________________
//
class CElementalAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAAToken);
};

//____________________________________________________________________________
//
class CElementalABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalABToken);
};

//____________________________________________________________________________
//
class CElementalACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalACToken);
};

//____________________________________________________________________________
//
class CElementalADToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalADToken);
};

//____________________________________________________________________________
//
class CElementalAEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAEToken);
};

//____________________________________________________________________________
//
class CElementalAFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAFToken);
};

//____________________________________________________________________________
//
class CElementalAGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAGToken);
};

//____________________________________________________________________________
//
class CElementalAHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAHToken);
};

//____________________________________________________________________________
//
class CElementalAIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAIToken);
};

//____________________________________________________________________________
//
class CElementalAJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAJToken);
};

//____________________________________________________________________________
//
class CElementalAKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAKToken);
};

//____________________________________________________________________________
//
class CElfAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElfAAToken);
};

//____________________________________________________________________________
//
class CFaerieAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CFaerieAAToken);
};

//____________________________________________________________________________
//
class CGiantAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGiantAAToken);
};

//____________________________________________________________________________
//
class CGolemAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemAAToken);
};

//____________________________________________________________________________
//
class CGolemABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemABToken);
};

//____________________________________________________________________________
//
class CGolemACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemACToken);
};

//____________________________________________________________________________
//
class CGolemADToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemADToken);
};

//____________________________________________________________________________
//
class CAnimatedLandDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandDToken);
};

//____________________________________________________________________________
//
class CAnimatedLandEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandEToken);
};

//____________________________________________________________________________
//
class CAnimatedLandFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandFToken);
};

//____________________________________________________________________________
//
class CAnimatedLandGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandGToken);
};

//____________________________________________________________________________
//
class CTreefolkAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTreefolkAAToken);
};

//____________________________________________________________________________
//
class CElementalHorrorAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalHorrorAAToken);
};

//____________________________________________________________________________
//
class CElementalALToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalALToken);
};

//____________________________________________________________________________
//
class CTreefolkWarriorAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTreefolkWarriorAAToken);
};

//____________________________________________________________________________
//
class CAnimatedLandHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedLandHToken);
};

//____________________________________________________________________________
//
class CAnimatedArtifactBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAnimatedArtifactBToken);
};

//____________________________________________________________________________
//
class CElementalAMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAMToken);
};

//____________________________________________________________________________
//
class CInsectAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectAAToken);
};

//____________________________________________________________________________
//
class CInsectMonkAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectMonkAAToken);
};

//____________________________________________________________________________
//
class CJuggernautAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CJuggernautAAToken);
};

//____________________________________________________________________________
//
class CPlantZombieAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPlantZombieAAToken);

	OVERRIDE(void, Move)(CZone* pToZone,
					    const CPlayer* pByPlayer,	// Card moved by this player (NULL if not applicable)
						MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CShapeshifterAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CShapeshifterAAToken);
};

//____________________________________________________________________________
//
class CSkeletonAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSkeletonAAToken);
};

//____________________________________________________________________________
//
class CSoldierAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierAAToken);
};

//____________________________________________________________________________
//
class CSoldierABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierABToken);
};

//____________________________________________________________________________
//
class CSpiritAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAAToken);
};

//____________________________________________________________________________
//
class CSpiritABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritABToken);
};

//____________________________________________________________________________
//
class CSpiritACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritACToken);
};

//____________________________________________________________________________
//
class CSpiritADToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritADToken);
};

//____________________________________________________________________________
//
class CSpiritAEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAEToken);
};

//____________________________________________________________________________
//
class CSpiritAFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAFToken);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CSpiritAGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAGToken);
};

//____________________________________________________________________________
//
class CSpiritAHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAHToken);
};

//____________________________________________________________________________
//
class CTreefolkABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTreefolkABToken);
};

//____________________________________________________________________________
//
class CTreefolkACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTreefolkACToken);
};

//____________________________________________________________________________
//
class CTurtleAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTurtleAAToken);
};

//____________________________________________________________________________
//
class CWallAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWallAAToken);
};

//____________________________________________________________________________
//
class CWarriorAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorAAToken);
};

//____________________________________________________________________________
//
class CWolfAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfAAToken);
};

//____________________________________________________________________________
//
class CConstructAEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructAEToken);
};

//____________________________________________________________________________
//
class CWallABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWallABToken);
};

//____________________________________________________________________________
//
class CConstructAFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CConstructAFToken);
};

//____________________________________________________________________________
//
class CGiantABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGiantABToken);
};

//____________________________________________________________________________
//
class CWarriorABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorABToken);
};

//____________________________________________________________________________
//
class CSpiritAIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAIToken);
};

//____________________________________________________________________________
//
class CDragonAAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonAAToken);
};

//____________________________________________________________________________
//
class CDragonABToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonABToken);
};

//____________________________________________________________________________
//
class CDragonACToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonACToken);
};

//____________________________________________________________________________
//
class CDragonADToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonADToken);
};

//____________________________________________________________________________
//
class CDragonAEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonAEToken);
};

//____________________________________________________________________________
//
class CElementalANToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalANToken);
};

//____________________________________________________________________________
//
class CElementalAOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAOToken);
};

//____________________________________________________________________________
//