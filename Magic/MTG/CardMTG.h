#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID);

//____________________________________________________________________________
//
class CIslandCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CIslandCard);
};

//____________________________________________________________________________
//
class CSwampCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CSwampCard);
};

//____________________________________________________________________________
//
class CForestCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CForestCard);
};

//____________________________________________________________________________
//
class CMountainCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CMountainCard);
};

//____________________________________________________________________________
//
class CPlainsCard : public CBasicLandCard
{
	DECLARE_CARD_CSTOR(CPlainsCard);
};

//____________________________________________________________________________
//
class CAngelAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelAToken);
};

//____________________________________________________________________________
//
class CAngelBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelBToken);
};

//____________________________________________________________________________
//
class CAngelCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelCToken);
};

//____________________________________________________________________________
//
class CApeAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CApeAToken);
};

//____________________________________________________________________________
//
class CApeCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CApeCToken);
};

//____________________________________________________________________________
//
class CAssemblyWorkerAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAssemblyWorkerAToken);
};

//____________________________________________________________________________
//
class CAvatarToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAvatarToken);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//

class CBatAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBatAToken);
};

//____________________________________________________________________________
//
class CBatBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBatBToken);
};

//____________________________________________________________________________
//
class CBearAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBearAToken);
};

//____________________________________________________________________________
//
class CBeastAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastAToken);
};

//____________________________________________________________________________
//
class CBeastBToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastBToken);
};

//____________________________________________________________________________
//
class CBeastCToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastCToken);
};

//____________________________________________________________________________
//
class CBeastDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastDToken);
};

//____________________________________________________________________________
//
class CBeastEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastEToken);
};

//____________________________________________________________________________
//
class CBirdAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdAToken);
};

//____________________________________________________________________________
//
class CBirdBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdBToken);
};

//____________________________________________________________________________
//
class CBirdCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdCToken);
};

//____________________________________________________________________________
//
class CBirdDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdDToken);
};

//____________________________________________________________________________
//
class CBoarAToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBoarAToken);
};

//____________________________________________________________________________
//
class CButterflyToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CButterflyToken);
};

//____________________________________________________________________________
//
class CCaribouToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCaribouToken);
};

//____________________________________________________________________________
//
class CCarnivoreToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCarnivoreToken);
};

//____________________________________________________________________________
//
class CCatAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatAToken);
};

//____________________________________________________________________________
//
class CCatBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatBToken);
};

//____________________________________________________________________________
//
class CCatCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatCToken);
};

//____________________________________________________________________________
//
class CCatWarriorToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatWarriorToken);
};

//____________________________________________________________________________
//
class CCentaurBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCentaurBToken);
};

//____________________________________________________________________________
//
class CCentaurCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCentaurCToken);
};

//____________________________________________________________________________
//
class CCitizenAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCitizenAToken);
};

//____________________________________________________________________________
//
class CCloudSpriteToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCloudSpriteToken);
};

//____________________________________________________________________________
//
class CDemonBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDemonBToken);
};

//____________________________________________________________________________
//
class CDemonAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDemonAToken);
};

//____________________________________________________________________________
//
class CDeserterToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDeserterToken);
};

//____________________________________________________________________________
//
class CDjinnToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDjinnToken);
};

//____________________________________________________________________________
//
class CDragonAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonAToken);
};

//____________________________________________________________________________
//
class CDragonBToken : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonBToken);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;

public:
	
	void SetUID(UINT pInt) {m_uID=pInt;}
	UINT GetUID() {return m_uID;}
	void SetTokenFullName(LPCTSTR pName) {m_strCardName = pName;}
	LPCTSTR GetTokenFullName() {return m_strCardName;}

	public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	UINT		m_uID;
	LPCTSTR m_strCardName;
};

//____________________________________________________________________________
//
class CDragonCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonCToken);
};

//____________________________________________________________________________
//
class CDrakeAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDrakeAToken);
};

//____________________________________________________________________________
//
class CDrakeBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDrakeBToken);
};

//____________________________________________________________________________
//
class CEldraziSpawnAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziSpawnAToken);
};

//____________________________________________________________________________
//
class CElementalAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalAToken);
};

//____________________________________________________________________________
//
class CElementalBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalBToken);
};

//____________________________________________________________________________
//
class CElementalDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalDToken);
};

//____________________________________________________________________________
//
class CElementalEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalEToken);
};

//____________________________________________________________________________
//
class CElementalFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalFToken);
};

//____________________________________________________________________________
//
class CElementalGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalGToken);
};

//____________________________________________________________________________
//
class CElementalIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalIToken);
};

//____________________________________________________________________________
//
class CElementalJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalJToken);
};

//____________________________________________________________________________
//
class CElementalMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalMToken);
};

//____________________________________________________________________________
//
class CElementalOToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalOToken);
};

//____________________________________________________________________________
//
class CElementalNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalNToken);
};

//____________________________________________________________________________
//
class CElementalLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalLToken);
};

//____________________________________________________________________________
//
class CElementalShamanToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalShamanToken);
};

//____________________________________________________________________________
//
class CElephantAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElephantAToken);
};

//____________________________________________________________________________
//
class CElfWarriorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElfWarriorAToken);
};

//____________________________________________________________________________
//
class CElfWarriorBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElfWarriorBToken);
};

//____________________________________________________________________________
//
class CFaerieToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CFaerieToken);
};

//____________________________________________________________________________
//
class CFaerieRogueBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CFaerieRogueBToken);
};

//____________________________________________________________________________
//
class CFaerieRogueAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CFaerieRogueAToken);
};

//____________________________________________________________________________
//
class CFesteringGoblinToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CFesteringGoblinToken);
};

//____________________________________________________________________________
//
class CGargoyleToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGargoyleToken);
};

//____________________________________________________________________________
//
class CGiantToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGiantToken);
};

//____________________________________________________________________________
//
class CGnomeToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGnomeToken);
};

//____________________________________________________________________________
//
class CGoatAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoatAToken);
};

//____________________________________________________________________________
//
class CGoblinAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinAToken);
};

//____________________________________________________________________________
//
class CGoblinBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinBToken);
};

//____________________________________________________________________________
//
class CGoblinCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinCToken);
};

//____________________________________________________________________________
//
class CGoblinRogueToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinRogueToken);
};

//____________________________________________________________________________
//
class CGoblinScoutToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinScoutToken);
};

//____________________________________________________________________________
//
class CGoblinSoldierAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinSoldierAToken);
};

//____________________________________________________________________________
//
class CGoldmeadowHarrierToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoldmeadowHarrierToken);
};

//____________________________________________________________________________
//
class CGravebornAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGravebornAToken);
};

//____________________________________________________________________________
//
class CGravebornBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGravebornBToken);
};

//____________________________________________________________________________
//
class CHomunculusAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHomunculusAToken);
};

//____________________________________________________________________________
//
class CHornetToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHornetToken);
};

//____________________________________________________________________________
//
class CHorrorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHorrorAToken);
};

//____________________________________________________________________________
//
class CHoundToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHoundToken);
};

//____________________________________________________________________________
//
class CIllusionAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CIllusionAToken);
};

//____________________________________________________________________________
//
class CIllusionBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CIllusionBToken);
};

//____________________________________________________________________________
//
class CInsectAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectAToken);
};

//____________________________________________________________________________
//
class CInsectBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectBToken);
};

//____________________________________________________________________________
//
class CInsectCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectCToken);
};

//____________________________________________________________________________
//
class CInsectDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectDToken);
};

//____________________________________________________________________________
//
class CKaldraToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKaldraToken);
};

//_____________________________________________________________________________
//
class CKavuToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKavuToken);
};

//_____________________________________________________________________________
//
class CKelpToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKelpToken);
};

//____________________________________________________________________________
//
class CKithkinSoldierAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKithkinSoldierAToken);
};

//____________________________________________________________________________
//
class CKnightAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKnightAToken);
};

//____________________________________________________________________________
//
class CKnightBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKnightBToken);
};

//____________________________________________________________________________
//
class CKoboldsOfKherKeepToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKoboldsOfKherKeepToken);
};

//____________________________________________________________________________
//
class CKorSoldierToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKorSoldierToken);
};

//____________________________________________________________________________
//
class CLlanowarElvesToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CLlanowarElvesToken);
};

//____________________________________________________________________________
//
class CMerfolkWizardToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMerfolkWizardToken);
};

//____________________________________________________________________________
//
class CMaritLageToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMaritLageToken);
};

//____________________________________________________________________________
//
class CMetallicSliverToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMetallicSliverToken);
};

//____________________________________________________________________________
//
class CMinorDemonToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMinorDemonToken);
};

//____________________________________________________________________________
//
class CMyrAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMyrAToken);
};

//____________________________________________________________________________
//
class CMorphToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CMorphToken);
};

//____________________________________________________________________________
//
class COozeAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COozeAToken);
};

//____________________________________________________________________________
//
class COozeBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COozeBToken);	
};

//____________________________________________________________________________
//
class COozeCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COozeCToken);	
};

//____________________________________________________________________________
//
class CPegasusAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPegasusAToken);
};

//____________________________________________________________________________
//
class CPentaviteToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPentaviteToken);
};

//____________________________________________________________________________
//
class CPestToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPestToken);
};

//____________________________________________________________________________
//
class CPincherToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPincherToken);
};

//____________________________________________________________________________
//
class CPlantToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPlantToken);
};

//____________________________________________________________________________
//
class CPrismToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPrismToken);
};

//____________________________________________________________________________
//
class CRatAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CRatAToken);
};

//____________________________________________________________________________
//
class CReflectionAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CReflectionAToken);
};

//____________________________________________________________________________
//
class CSandToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSandToken);
};

//____________________________________________________________________________
//
class CSaprolingAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingAToken);
};

//____________________________________________________________________________
//
class CSaprolingBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingBToken);
};

//____________________________________________________________________________
//
class CSaprolingCToken : public CCounterWatchingTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingCToken);

	OVERRIDE(void, Move)(CZone* pToZone,
					    const CPlayer* pByPlayer,	// Card moved by this player (NULL if not applicable)
						MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

private:
	counted_ptr<CTriggeredCounterExternalPwrTghAbility> m_pAbility;
};

//____________________________________________________________________________
//
class CSerfToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSerfToken);
};

//____________________________________________________________________________
//
class CShapeshifterToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CShapeshifterToken);
};

//____________________________________________________________________________
//
class CSheepToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSheepToken);
};

//____________________________________________________________________________
//
class CSkeletonAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSkeletonAToken);
};

//____________________________________________________________________________
//
class CSliverAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSliverAToken);
};

//____________________________________________________________________________
//
class CSnakeCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeCToken);
};

//____________________________________________________________________________
//
class CSnakeAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeAToken);
};

//____________________________________________________________________________
//
class CSnakeBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeBToken);
};

//____________________________________________________________________________
//
class CSoldierAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierAToken);
};

//____________________________________________________________________________
//
class CSoldierAllyToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierAllyToken);
};

//____________________________________________________________________________
//
class CSparkElementalToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSparkElementalToken);
};

//____________________________________________________________________________
//
class CSpawnToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpawnToken);
};

//____________________________________________________________________________
//
class CSpiderAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiderAToken);
};

//____________________________________________________________________________
//
class CSpikeToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpikeToken);
};

//____________________________________________________________________________
//
class CSpiritAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritAToken);
};

//____________________________________________________________________________
//
class CSpiritCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritCToken);
};

//____________________________________________________________________________
//
class CSpiritDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritDToken);
};

//____________________________________________________________________________
//
class CSpiritEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritEToken);
};

//____________________________________________________________________________
//
class CSpiritMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritMToken);
};

//____________________________________________________________________________
//
class CSquirrelAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSquirrelAToken);
};

//____________________________________________________________________________
//
class CSquirrelBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSquirrelBToken);
};

//____________________________________________________________________________
//
class CStanggTwinToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CStanggTwinToken);
};

//____________________________________________________________________________
//
class CThopterAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThopterAToken);
};

//_____________________________________________________________________________
//
class CThopterBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThopterBToken);
};

//_____________________________________________________________________________
//
class CThrullAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThrullAToken);
};

//____________________________________________________________________________
//
class CThrullBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThrullBToken);
};

//____________________________________________________________________________
//
class CTreefolkShamanToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTreefolkShamanToken);
};

//____________________________________________________________________________
//
class CTriskelaviteToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTriskelaviteToken);
};

//____________________________________________________________________________
//
class CTuktukTheReturnedToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTuktukTheReturnedToken);
};

//____________________________________________________________________________
//
class CVampireAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CVampireAToken);
};

//____________________________________________________________________________
//
class CVampireBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CVampireBToken);
};

//____________________________________________________________________________
//
class CVampireCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CVampireCToken);
};

//____________________________________________________________________________
//
class CVojaToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CVojaToken);
};

//____________________________________________________________________________
//
class CWallAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWallAToken);
};

//____________________________________________________________________________
//
class CWaspToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWaspToken);
};

//____________________________________________________________________________
//
class CWolfAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfAToken);
};

//_____________________________________________________________________________
//
class CWolfBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfBToken);
};

//____________________________________________________________________________
//
class CWolfCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfCToken);
};

//____________________________________________________________________________
//
class CWoodToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWoodToken);
};

//____________________________________________________________________________
//
class CWormToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWormToken);
};

//____________________________________________________________________________
//
class CWurmAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmAToken);
};

//____________________________________________________________________________
//
class CWurmBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmBToken);
};

//____________________________________________________________________________
//
class CWurmCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmCToken);
};

//____________________________________________________________________________
//
class CWurmDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmDToken);
};

//____________________________________________________________________________
//
class CWurmEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmEToken);
};

//____________________________________________________________________________
//
class CZombieAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieAToken);
};

//____________________________________________________________________________
//
class CZombieGiantToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieGiantToken);
};

//____________________________________________________________________________
//
class CZombieWizardToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieWizardToken);
};

//____________________________________________________________________________
//
class CGolemDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemDToken);
};

//____________________________________________________________________________
//
class CKnightCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKnightCToken);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CGermToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGermToken);
};

//____________________________________________________________________________
//
class CGolemCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemCToken);
};

//____________________________________________________________________________
//
class CGolemBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemBToken);
};

//____________________________________________________________________________
//
class CInsectEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectEToken);
};

//____________________________________________________________________________
//
class CUramiToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CUramiToken);
};

//____________________________________________________________________________
//
class CGriffinToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGriffinToken);
};

//____________________________________________________________________________
//
class CHomunculusBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHomunculusBToken);
};

//____________________________________________________________________________
//
class CSpiderBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiderBToken);
};

//____________________________________________________________________________
//
class CElementalCatToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalCatToken);
};

//____________________________________________________________________________
//
class CCamaridAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCamaridAToken);
};

//____________________________________________________________________________
//
class CGiantWarriorAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGiantWarriorAToken);
};

//____________________________________________________________________________
//
class CBirdFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdFToken);
};

//____________________________________________________________________________
//
class CHumanAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHumanAToken);
};

//____________________________________________________________________________
//
class CAngelDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelDToken);
};

//____________________________________________________________________________
//
class CHumanBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHumanBToken);
};

//____________________________________________________________________________
//
class CHellionAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHellionAToken);
};

//____________________________________________________________________________
//
class CHellionBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHellionBToken);
};

//____________________________________________________________________________
//
class CHippoAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHippoAToken);
};

//____________________________________________________________________________
//
class CElementalKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalKToken);
};

//____________________________________________________________________________
//
class CKnightDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CKnightDToken);
};

//____________________________________________________________________________
//
class CWireflyToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWireflyToken);
};

//____________________________________________________________________________
//
class CWurmFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmFToken);
};

//____________________________________________________________________________
//
class CRhinoToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CRhinoToken);
};

//____________________________________________________________________________
//
class COgreToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COgreToken);
};

//____________________________________________________________________________
//
class CDragonDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonDToken);
};

//____________________________________________________________________________
//
class CAssassinToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAssassinToken);
};

//____________________________________________________________________________
//
class CTombspawnToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CTombspawnToken);
};

//____________________________________________________________________________
//
class CSurvivorToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSurvivorToken);
};

//____________________________________________________________________________
//
class CWarriorToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWarriorToken);
};

//____________________________________________________________________________
//
class CStarfishToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CStarfishToken);
};

//____________________________________________________________________________
//
class CElementalHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalHToken);
};

//____________________________________________________________________________
//
class CClericToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CClericToken);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CBirdSoldierToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdSoldierToken);
};

//____________________________________________________________________________
//
class CFrogLizardToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CFrogLizardToken);
};

//____________________________________________________________________________
//
class CSoldierCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierCToken);
};

//____________________________________________________________________________
//
class CBirdEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdEToken);
};

//____________________________________________________________________________
//
class CBirdGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdGToken);
};

//____________________________________________________________________________
//
class CBirdHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBirdHToken);
};

//____________________________________________________________________________
//
class CCamaridBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCamaridBToken);
};

//____________________________________________________________________________
//
class CCitizenBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCitizenBToken);
};

//____________________________________________________________________________
//
class CGoblinDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinDToken);
};

//____________________________________________________________________________
//
class CGoblinEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinEToken);
};

//____________________________________________________________________________
//
class CApeBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CApeBToken);
};

//____________________________________________________________________________
//
class CBeastFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastFToken);
};

//____________________________________________________________________________
//
class CBeastGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBeastGToken);
};

//____________________________________________________________________________
//
class CBeastHToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastHToken);
};

//____________________________________________________________________________
//
class CBeastIToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastIToken);
};

//____________________________________________________________________________
//
class CBeastJToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastJToken);
};

//____________________________________________________________________________
//
class CCentaurAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCentaurAToken);
};

//____________________________________________________________________________
//
class CCatDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatDToken);
};

//____________________________________________________________________________
//
class CSnakeDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeDToken);
};

//____________________________________________________________________________
//
class CSnakeEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeEToken);
};

//____________________________________________________________________________
//
class CSnakeFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSnakeFToken);
};

//____________________________________________________________________________
//
class CAntelopeToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAntelopeToken);
};

//____________________________________________________________________________
//
class CCatEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CCatEToken);
};

//____________________________________________________________________________
//
class CBeastKToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastKToken);
};

//____________________________________________________________________________
//
class CHorrorBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CHorrorBToken);
};

//____________________________________________________________________________
//
class CBeastLToken : public CTokenCreature
{
    DECLARE_CARD_CSTOR(CBeastLToken);
};

//____________________________________________________________________________
//
class CBearBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CBearBToken);
};

//____________________________________________________________________________
//
class CRatBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CRatBToken);
};

//____________________________________________________________________________
//
class COozeDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(COozeDToken);
};

//____________________________________________________________________________
//
class CElementalCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalCToken);
};

//____________________________________________________________________________
//
class CGoatBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoatBToken);
};

//____________________________________________________________________________
//
class CEldraziSpawnBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziSpawnBToken);
};

//____________________________________________________________________________
//
class CEldraziSpawnCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CEldraziSpawnCToken);
};

//____________________________________________________________________________
//
class CDragonEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonEToken);
};

//____________________________________________________________________________
//
class CDragonFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDragonFToken);
};

//____________________________________________________________________________
//
class CRatCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CRatCToken);
};

//____________________________________________________________________________
//
class CRatDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CRatDToken);
};

//____________________________________________________________________________
//
class CDemonCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CDemonCToken);
};

//____________________________________________________________________________
//
class CAngelEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelEToken);
};

//____________________________________________________________________________
//
class CAngelFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelFToken);
};

//____________________________________________________________________________
//
class CElephantBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElephantBToken);
};

//____________________________________________________________________________
//
class CElfWarriorCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElfWarriorCToken);
};

//____________________________________________________________________________
//
class CGiantWarriorBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGiantWarriorBToken);
};

//____________________________________________________________________________
//
class CGoblinFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGoblinFToken);
};

//____________________________________________________________________________
//
class CGolemAToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CGolemAToken);
};

//____________________________________________________________________________
//
class CElephantCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElephantCToken);
};

//____________________________________________________________________________
//
class CElephantDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElephantDToken);
};

//____________________________________________________________________________
//
class CElementalPToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CElementalPToken);
};

//____________________________________________________________________________
//
class CAngelGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelGToken);
};

//____________________________________________________________________________
//
class CAngelHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CAngelHToken);
};

//____________________________________________________________________________
//
class CInsectFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CInsectFToken);
};

//____________________________________________________________________________
//
class CPegasusBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CPegasusBToken);
};

//____________________________________________________________________________
//
class COozeEToken : public CCounterWatchingTokenCreature
{
	DECLARE_CARD_CSTOR(COozeEToken);

	OVERRIDE(void, Move)(CZone* pToZone,
					    const CPlayer* pByPlayer,	// Card moved by this player (NULL if not applicable)
						MoveType moveType,
						CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

private:
	counted_ptr<CTriggeredCounterExternalPwrTghAbility> m_pAbility;
};

//____________________________________________________________________________
//
class CSoldierBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierBToken);
};

//____________________________________________________________________________
//
class CSoldierDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierDToken);
};

//____________________________________________________________________________
//
class CSpiritBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritBToken);
};

//____________________________________________________________________________
//
class CSpiritFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritFToken);
};

//____________________________________________________________________________
//
class CSpiritGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritGToken);
};

//____________________________________________________________________________
//
class CSpiritHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritHToken);
};

//____________________________________________________________________________
//
class CSpiritIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritIToken);
};

//____________________________________________________________________________
//
class CSpiritJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritJToken);
};

//____________________________________________________________________________
//
class CSpiritKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritKToken);
};

//____________________________________________________________________________
//
class CSpiritLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritLToken);
};

//____________________________________________________________________________
//
class CThopterCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CThopterCToken);
};

//_____________________________________________________________________________
//
class CSquirrelCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSquirrelCToken);
};

//____________________________________________________________________________
//
class CSquirrelDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSquirrelDToken);
};

//____________________________________________________________________________
//
class CSpiritNToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiritNToken);
};

//____________________________________________________________________________
//
class CWolfDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfDToken);
};

//_____________________________________________________________________________
//
class CZombieBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieBToken);
};

//____________________________________________________________________________
//
class CZombieCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieCToken);
};

//____________________________________________________________________________
//
class CZombieDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieDToken);
};

//____________________________________________________________________________
//
class CZombieEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieEToken);
};

//____________________________________________________________________________
//
class CZombieFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieFToken);
};

//____________________________________________________________________________
//
class CZombieGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieGToken);
};

//____________________________________________________________________________
//
class CZombieHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieHToken);
};

//____________________________________________________________________________
//
class CZombieIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieIToken);
};

//____________________________________________________________________________
//
class CZombieJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieJToken);
};

//____________________________________________________________________________
//
class CZombieKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieKToken);
};

//____________________________________________________________________________
//
class CZombieLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieLToken);
};

//____________________________________________________________________________
//
class CZombieMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CZombieMToken);
};

//____________________________________________________________________________
//
class CWurmGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmGToken);
};

//____________________________________________________________________________
//
class CWurmHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWurmHToken);
};

//____________________________________________________________________________
//
class CWolfEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfEToken);
};

//_____________________________________________________________________________
//
class CWolfFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfFToken);
};

//_____________________________________________________________________________
//
class CWolfGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfGToken);
};

//_____________________________________________________________________________
//
class CWolfHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CWolfHToken);
};

//_____________________________________________________________________________
//
class CSpiderCToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSpiderCToken);
};

//____________________________________________________________________________
//
class CSoldierEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierEToken);
};

//____________________________________________________________________________
//
class CSoldierFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierFToken);
};

//____________________________________________________________________________
//
class CSoldierGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierGToken);
};

//____________________________________________________________________________
//
class CSoldierHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierHToken);
};

//____________________________________________________________________________
//
class CSoldierIToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierIToken);
};

//____________________________________________________________________________
//
class CSoldierJToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierJToken);
};

//____________________________________________________________________________
//
class CSoldierKToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierKToken);
};

//____________________________________________________________________________
//
class CSoldierLToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierLToken);
};

//____________________________________________________________________________
//
class CSoldierMToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSoldierMToken);
};

//____________________________________________________________________________
//
class CSliverBToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSliverBToken);
};

//____________________________________________________________________________
//
class CSaprolingDToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingDToken);
};

//____________________________________________________________________________
//
class CSaprolingEToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingEToken);
};

//____________________________________________________________________________
//
class CSaprolingFToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingFToken);
};

//____________________________________________________________________________
//
class CSaprolingGToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingGToken);
};

//____________________________________________________________________________
//
class CSaprolingHToken : public CTokenCreature
{
	DECLARE_CARD_CSTOR(CSaprolingHToken);
};

//____________________________________________________________________________
//
