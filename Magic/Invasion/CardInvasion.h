#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//_________________________________________________________________________
//
class CAlabasterLeechCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabasterLeechCard);
};

//____________________________________________________________________________
//
class CAtalyaSamiteMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAtalyaSamiteMasterCard);
};

//____________________________________________________________________________
//
class CBlazingSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlazingSpecterCard);
};

//____________________________________________________________________________
//
class CCrimsonAcolyteCard :public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrimsonAcolyteCard);
};

//____________________________________________________________________________
//
class CFiresOfYavimayaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFiresOfYavimayaCard);
};

//____________________________________________________________________________
//
class CHeroesReunionCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHeroesReunionCard);
};

//____________________________________________________________________________
//
class CLotusGuardianCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLotusGuardianCard);
};

//____________________________________________________________________________
//
class CNightscapeMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightscapeMasterCard);
};

//____________________________________________________________________________
//
class CObsidianAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CObsidianAcolyteCard);
};

//____________________________________________________________________________
//
class CPhyrexianAltarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianAltarCard);
};

//____________________________________________________________________________
//
class CPhyrexianLensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianLensCard);
};

//____________________________________________________________________________
//
class CRagingKavuCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingKavuCard);
};

//____________________________________________________________________________
//
class CRoutCard : public CCard
{
	DECLARE_CARD_CSTOR(CRoutCard);
};

//____________________________________________________________________________
//
class CSabertoothNishobaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSabertoothNishobaCard);
};

//____________________________________________________________________________
//
class CSleeperSRobeCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSleeperSRobeCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CStormscapeMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStormscapeMasterCard);
};

//____________________________________________________________________________
//
class CSunscapeMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunscapeMasterCard);
};

//____________________________________________________________________________
//
class CThornscapeMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornscapeMasterCard);
};

//____________________________________________________________________________
//
class CThunderscapeMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderscapeMasterCard);
};

//____________________________________________________________________________
//
class CYavimayaBarbarianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaBarbarianCard);
};

//____________________________________________________________________________
//
class CAndraditeLeechCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAndraditeLeechCard);
};

//____________________________________________________________________________
//
class CArdentSoldierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArdentSoldierCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CArmoredGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmoredGuardianCard);
};

//____________________________________________________________________________
//
class CBenalishEmissaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishEmissaryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CBenalishHeraldsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishHeraldsCard);
};

//____________________________________________________________________________
//
class CBenalishLancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishLancerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CBenalishTrapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishTrapperCard);
};

//____________________________________________________________________________
//
class CBlurredMongooseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlurredMongooseCard);
};

//____________________________________________________________________________
//
class CBogInitiateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogInitiateCard);
};

//____________________________________________________________________________
//
class CCapashenUnicornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCapashenUnicornCard);
};

//____________________________________________________________________________
//
class CCaptainSisayCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaptainSisayCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CChargingTrollCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingTrollCard);
};

//____________________________________________________________________________
//
class CCinderShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCinderShadeCard);
};

//____________________________________________________________________________
//
class CCryptAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptAngelCard);
};

//____________________________________________________________________________
//
class CDevouringStrossusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDevouringStrossusCard);
};

//____________________________________________________________________________
//
class CWorldlyCounselCard : public CCard
{
	DECLARE_CARD_CSTOR(CWorldlyCounselCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDreamThrushCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamThrushCard);
};

//____________________________________________________________________________
//
class CDuskwalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskwalkerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CEmpressGalinaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmpressGalinaCard);
};

//____________________________________________________________________________
//
class CFaerieSquadronCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieSquadronCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CFirebrandRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFirebrandRangerCard);
};

//____________________________________________________________________________
//
class CFirescreamerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFirescreamerCard);
};

//____________________________________________________________________________
//
class CGalinasKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGalinasKnightCard);
};

//____________________________________________________________________________
//
class CGlimmeringAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGlimmeringAngelCard);
};

//____________________________________________________________________________
//
class CHannaShipsNavigatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHannaShipsNavigatorCard);
};

//____________________________________________________________________________
//
class CHoodedKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHoodedKavuCard);
};

//____________________________________________________________________________
//
class CHornedCheetahCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHornedCheetahCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility
		::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
//class CHuntingKavuCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CHuntingKavuCard);
//};
//
////____________________________________________________________________________
////
class CJadeLeechCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJadeLeechCard);
};

//____________________________________________________________________________
//
class CKavuAggressorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuAggressorCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CKavuChameleonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuChameleonCard);
};

//____________________________________________________________________________
//
class CKavuMonarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuMonarchCard);
};

//____________________________________________________________________________
//
class CKavuScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuScoutCard);
};

//____________________________________________________________________________
//
class CKavuTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuTitanCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CLlanowarCavalryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarCavalryCard);
};

//____________________________________________________________________________
//
class CLlanowarEliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarEliteCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CLlanowarKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarKnightCard);
};

//____________________________________________________________________________
//
class CLlanowarVanguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarVanguardCard);
};

//____________________________________________________________________________
//
class CMetathranTransportCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMetathranTransportCard);
};

//____________________________________________________________________________
//
class CMetathranZombieCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CMetathranZombieCard);
};

//____________________________________________________________________________
//
class CNightscapeApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightscapeApprenticeCard);
};

//____________________________________________________________________________
//
class CNoblePantherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CNoblePantherCard);
};

//____________________________________________________________________________
//
class CNomadicElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNomadicElfCard);
};

//____________________________________________________________________________
//
class CPhyrexianBattlefliesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianBattlefliesCard);
};

//____________________________________________________________________________
//
class CPhyrexianReaperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianReaperCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CPhyrexianSlayerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianSlayerCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CPincerSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPincerSpiderCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CPouncingKavuCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPouncingKavuCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CPrisonBarricadeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrisonBarricadeCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CQuirionSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionSentinelCard);
};

//____________________________________________________________________________
//
class CQuirionTrailblazerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionTrailblazerCard);
};

//____________________________________________________________________________
//
class CRainbowCrowCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRainbowCrowCard);
};

//____________________________________________________________________________
//
class CRiptideCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptideCrabCard);
};

//____________________________________________________________________________
//
class CRubyLeechCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRubyLeechCard);
};

//____________________________________________________________________________
//
class CSamiteArcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSamiteArcherCard);
};

//____________________________________________________________________________
//
class CSapphireLeechCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSapphireLeechCard);
};

//____________________________________________________________________________
//
class CSerpentineKavuCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSerpentineKavuCard);
};

//____________________________________________________________________________
//
class CShivanEmissaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanEmissaryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CShivanZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanZombieCard);
};

//____________________________________________________________________________
//
class CSlimyKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlimyKavuCard);
};

//____________________________________________________________________________
//
class CSlinkingSerpentCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSlinkingSerpentCard);
};

//____________________________________________________________________________
//
class CStalkingAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStalkingAssassinCard);
};

//____________________________________________________________________________
//
class CStormscapeApprenticeCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CStormscapeApprenticeCard);
};

//____________________________________________________________________________
//
class CSunscapeApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunscapeApprenticeCard);
};

//____________________________________________________________________________
//
class CThornscapeApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThornscapeApprenticeCard);
};

//____________________________________________________________________________
//
class CThunderscapeApprenticeCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderscapeApprenticeCard);
};

//____________________________________________________________________________
//
class CTidalVisionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTidalVisionaryCard);
};

//____________________________________________________________________________
//
class CTolarianEmissaryCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTolarianEmissaryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CTowerDrakeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTowerDrakeCard);
};

//____________________________________________________________________________
//
class CTreefolkHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreefolkHealerCard);
};

//____________________________________________________________________________
//
class CTrenchWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrenchWurmCard);
};

//____________________________________________________________________________
//
class CUrborgDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgDrakeCard);
};

//____________________________________________________________________________
//
class CUrborgEmissaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgEmissaryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CUrborgPhantomCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgPhantomCard);
};

//____________________________________________________________________________
//
class CUrborgShamblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgShamblerCard);
};

//____________________________________________________________________________
//
class CUrborgSkeletonCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgSkeletonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CVerduranEmissaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVerduranEmissaryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CViashinoGrapplerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoGrapplerCard);
};

//____________________________________________________________________________
//
class CViciousKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViciousKavuCard);
};

//____________________________________________________________________________
//
class CVodalianHypnotistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianHypnotistCard);
};

//____________________________________________________________________________
//
class CVodalianSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CVodalianZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianZombieCard);
};

//____________________________________________________________________________
//
class CVoraciousCobraCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CVoraciousCobraCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CWayfaringGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWayfaringGiantCard);
};

//____________________________________________________________________________
//
class CYavimayaKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaKavuCard);
};

//____________________________________________________________________________
//
class CCrosissAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrosissAttendantCard);
};

//____________________________________________________________________________
//
class CDarigaazsAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarigaazsAttendantCard);
};

//____________________________________________________________________________
//
class CDromarsAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDromarsAttendantCard);
};

//____________________________________________________________________________
//
class CRithsAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRithsAttendantCard);
};

//____________________________________________________________________________
//
class CSparringGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSparringGolemCard);
};

//____________________________________________________________________________
//
class CTrevasAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrevasAttendantCard);
};

//____________________________________________________________________________
//
class CAncientSpringCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAncientSpringCard);
};

//____________________________________________________________________________
//
class CArchaeologicalDigCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CArchaeologicalDigCard);
};

//____________________________________________________________________________
//
class CGeothermalCreviceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGeothermalCreviceCard);
};

//____________________________________________________________________________
//
class CIrrigationDitchCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CIrrigationDitchCard);
};

//____________________________________________________________________________
//
class CKeldonNecropolisCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKeldonNecropolisCard);
};

//____________________________________________________________________________
//
class CSulfurVentCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSulfurVentCard);
};

//____________________________________________________________________________
//
class CTinderFarmCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTinderFarmCard);
};

//____________________________________________________________________________
//
class CBloodstoneCameoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodstoneCameoCard);
};

//____________________________________________________________________________
//
class CChromaticSphereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChromaticSphereCard);
};

//____________________________________________________________________________
//
class CDrakeSkullCameoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDrakeSkullCameoCard);
};

//____________________________________________________________________________
//
class CPowerArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPowerArmorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSeashellCameoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSeashellCameoCard);
};

//____________________________________________________________________________
//
class CTigereyeCameoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTigereyeCameoCard);
};

//____________________________________________________________________________
//
class CTrollHornCameoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrollHornCameoCard);
};

//____________________________________________________________________________
//
class CAngelicShieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicShieldCard);
};

//____________________________________________________________________________
//
class CAuraShardsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAuraShardsCard);
};

//____________________________________________________________________________
//
//class CElfhameSanctuaryCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CElfhameSanctuaryCard);
//};
//
////____________________________________________________________________________
////
class CKavuLairCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKavuLairCard);
};

//____________________________________________________________________________
//
class CMourningCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMourningCard);
};

//____________________________________________________________________________
//
class CRecklessAssaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRecklessAssaultCard);
};

//____________________________________________________________________________
//
class CRewardsOfDiversityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRewardsOfDiversityCard);
};

//____________________________________________________________________________
//
class CScavengedWeaponryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CScavengedWeaponryCard);
};

//____________________________________________________________________________
//
class CSeersVisionCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeersVisionCard);
};

//____________________________________________________________________________
//
class CShivanHarvestCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShivanHarvestCard);
};

//____________________________________________________________________________
//
class CSmolderingTarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSmolderingTarCard);
};

//____________________________________________________________________________
//
class CSterlingGroveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSterlingGroveCard);
};

//____________________________________________________________________________
//
class CTaintedWellCard : public CCard
{
	DECLARE_CARD_CSTOR(CTaintedWellCard);
};

//____________________________________________________________________________
//
class CTectonicInstabilityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTectonicInstabilityCard);
};

//____________________________________________________________________________
//
class CTeferisCareCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTeferisCareCard);
};

//____________________________________________________________________________
//
class CWhipSilkCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWhipSilkCard);
};

//____________________________________________________________________________
//
class CWingsOfHopeCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CWingsOfHopeCard);
};

//____________________________________________________________________________
//
class CYawgmothsAgendaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CYawgmothsAgendaCard);
};
//private:
//	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
//										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
//};
//
////____________________________________________________________________________
////
class CAbsorbCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CAbsorbCard);
};

//____________________________________________________________________________
//
class CAnnihilateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAnnihilateCard);
};

//____________________________________________________________________________
//
class CCremateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCremateCard);
};

//____________________________________________________________________________
//
class CStandDeliverCard : public CCard
{
	DECLARE_CARD_CSTOR(CStandDeliverCard);
};

//____________________________________________________________________________
//
class CDismantlingBlowCard : public CCard
{
	DECLARE_CARD_CSTOR(CDismantlingBlowCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CDredgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDredgeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CExcludeCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CExcludeCard);
};

//____________________________________________________________________________
//
class CExplosiveGrowthCard : public CCard
{
	DECLARE_CARD_CSTOR(CExplosiveGrowthCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;

private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CSpiteMaliceCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSpiteMaliceCard);
};

//____________________________________________________________________________
//
class COrimsTouchCard : public CCard
{
	DECLARE_CARD_CSTOR(COrimsTouchCard);
};

//____________________________________________________________________________
//
class CRepulseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRepulseCard);
};

//____________________________________________________________________________
//
class CRestrainCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CRestrainCard);
};

//____________________________________________________________________________
//
class CSwayOfIllusionCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwayOfIllusionCard);
};

//____________________________________________________________________________
//
class CUndermineCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CUndermineCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWaxWaneCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWaxWaneCard);
};

//____________________________________________________________________________
//
class CZapCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CZapCard);
};

//____________________________________________________________________________
//
class CAssaultBatteryCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CAssaultBatteryCard);
};

//____________________________________________________________________________
//
class CBreathOfDarigaazCard : public CCard
{
	DECLARE_CARD_CSTOR(CBreathOfDarigaazCard);
};

//____________________________________________________________________________
//
class CCanopySurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CCanopySurgeCard);
};

//____________________________________________________________________________
//
class CDistortingWakeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDistortingWakeCard);
};

//____________________________________________________________________________
//
class CGhituFireCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CGhituFireCard);
};

//____________________________________________________________________________
//
class CHypnoticCloudCard : public CCard
{
	DECLARE_CARD_CSTOR(CHypnoticCloudCard);
};

//____________________________________________________________________________
//
class CManipulateFateCard : public CCard
{
	DECLARE_CARD_CSTOR(CManipulateFateCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPainSufferingCard : public CCard
{
	DECLARE_CARD_CSTOR(CPainSufferingCard);
};

//____________________________________________________________________________
//
class CRestockCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRestockCard);
};

//____________________________________________________________________________
//
class CSaprolingSymbiosisCard : public CCard
{
	DECLARE_CARD_CSTOR(CSaprolingSymbiosisCard);
};

//____________________________________________________________________________
//
class CSavageOffensiveCard : public CCard
{
	DECLARE_CARD_CSTOR(CSavageOffensiveCard);
};

//____________________________________________________________________________
//
class CScoutingTrekCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CScoutingTrekCard);
};

//____________________________________________________________________________
//
class CWallopCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWallopCard);
};

//____________________________________________________________________________
//
class CWashOutCard : public CCard
{
	DECLARE_CARD_CSTOR(CWashOutCard);
};

//____________________________________________________________________________
//
class CCrusadingKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrusadingKnightCard);
};

//____________________________________________________________________________
//
class CMaraudingKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaraudingKnightCard);
};

//____________________________________________________________________________
//
class CFrenziedTillingCard : public CCard
{
	DECLARE_CARD_CSTOR(CFrenziedTillingCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPyreZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPyreZombieCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRootingKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootingKavuCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COptCard : public CCard 
{
	DECLARE_CARD_CSTOR(COptCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CVodalianMerchantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianMerchantCard);
};

//____________________________________________________________________________
//
class CProbeCard : public CCard
{
	DECLARE_CARD_CSTOR(CProbeCard);
};

//____________________________________________________________________________
//
class CLiberateCard : public CCard
{
	DECLARE_CARD_CSTOR(CLiberateCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CArtifactMutationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CArtifactMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAuraMutationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAuraMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CShorelineRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShorelineRaiderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTsaboTavocCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CTsaboTavocCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CArmadilloCloakCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CArmadilloCloakCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CStrengthOfUnityCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CStrengthOfUnityCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CAncientKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientKavuCard);
};

//____________________________________________________________________________
//
class CAddleCard : public CCard
{
	DECLARE_CARD_CSTOR(CAddleCard);
};

//____________________________________________________________________________
//
class COrderedMigrationCard : public CCard
{
	DECLARE_CARD_CSTOR(COrderedMigrationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlagueSporesCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlagueSporesCard);
};

//____________________________________________________________________________
//
class CPlagueSpitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueSpitterCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CSearingRaysCard : public CCard
{
	DECLARE_CARD_CSTOR(CSearingRaysCard);
};

//____________________________________________________________________________
//
class CTwilightsCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwilightsCallCard);
};

//____________________________________________________________________________
//
class CVileConsumptionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVileConsumptionCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CWanderingStreamCard : public CCard
{
	DECLARE_CARD_CSTOR(CWanderingStreamCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAgonizingDemiseCard : public CCard
{
	DECLARE_CARD_CSTOR(CAgonizingDemiseCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CUrzasRageCard : public CCard
{
	DECLARE_CARD_CSTOR(CUrzasRageCard);
};

//____________________________________________________________________________
//
class CGoblinSpyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSpyCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CTribalFlamesCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTribalFlamesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRecoilCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRecoilCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCollapsingBordersCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCollapsingBordersCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBlindSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindSeerCard);
};

//____________________________________________________________________________
//
class CDefilingTearsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDefilingTearsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCoalitionVictoryCard : public CCard
{
	DECLARE_CARD_CSTOR(CCoalitionVictoryCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CProhibitCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CProhibitCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
private:
	CManaCost	m_KickerCost;
};

//___________________________________________________________________________
//
class CBindCard : public CCard
{
	DECLARE_CARD_CSTOR(CBindCard);
};

//____________________________________________________________________________
//
class COverabundanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COverabundanceCard);

private:
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility* m_pTriggeredAbility;

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenTappedForMana > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility1* m_pTriggeredAbility1;
};

//____________________________________________________________________________
//
class CTangleCard : public CCard
{
	DECLARE_CARD_CSTOR(CTangleCard);

	private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CCollectiveRestraintCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCollectiveRestraintCard);
};

//____________________________________________________________________________
//
class CBacklashCard : public CCard
{
	DECLARE_CARD_CSTOR(CBacklashCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFactorFictionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFactorFictionCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCountedCardContainer_ m_SelectedCards1;
	CCountedCardContainer_ m_SelectedCards2;
	void ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2);


	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;
};

//____________________________________________________________________________
//
class CTekCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTekCard);
};

//____________________________________________________________________________
//
class CRithTheAwakenerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRithTheAwakenerCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
};

//____________________________________________________________________________
//
class CTrevaTheRenewerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTrevaTheRenewerCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
};

//____________________________________________________________________________
//
class CDromarTheBanisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDromarTheBanisherCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
};

//____________________________________________________________________________
//
class CCrosisThePurgerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCrosisThePurgerCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
	CPlayer* m_Player;
};

//____________________________________________________________________________
//
class CDarigaazTheIgniterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDarigaazTheIgniterCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
	CPlayer* m_Player;
};

//____________________________________________________________________________
//
class CChaoticStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CChaoticStrikeCard);
protected:
	CSelectionSupport m_FlipSelection;
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CVoidCard : public CCard
{
	DECLARE_CARD_CSTOR(CVoidCard);
protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPhyrexianInfiltratorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianInfiltratorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLightningDartCard : public CCard
{
	DECLARE_CARD_CSTOR(CLightningDartCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHuntingKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntingKavuCard);

protected:
	class CHuntingKavuTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const;
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CThicketElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThicketElementalCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;

	CSelectionSupport m_YesNoSelection;
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDesperateResearchCard : public CCard
{
	DECLARE_CARD_CSTOR(CDesperateResearchCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAlloyGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlloyGolemCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CardType m_Choice;	
};

//____________________________________________________________________________
//
class CWinnowCard : public CCard
{
	DECLARE_CARD_CSTOR(CWinnowCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGlobalRuinCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlobalRuinCard);

protected:
	CSelectionSupport m_PlainsSelection;
	CSelectionSupport m_IslandSelection;
	CSelectionSupport m_SwampSelection;
	CSelectionSupport m_MountainSelection;
	CSelectionSupport m_ForestSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnPlainsSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnIslandSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnSwampSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnMountainSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnForestSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CPlayerContainer Players;
	CCountedCardContainer_ Cards;
	void PlainsSelection(int nPlayer);
	void IslandSelection(int nPlayer);
	void SwampSelection(int nPlayer);
	void MountainSelection(int nPlayer);
	void ForestSelection(int nPlayer);
};

//______________________________________________________________________________
//
class CDeathOrGloryCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathOrGloryCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCountedCardContainer_ m_SelectedCards1;
	CCountedCardContainer_ m_SelectedCards2;
	void ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2);

	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;
};

//____________________________________________________________________________
//
class CSkizzikCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSkizzikCard);

private:
	bool BeforeResolution(CAbilityAction* pAction);

private:
	CManaCost		m_KickerCost1;
};

//____________________________________________________________________________
//
class CPhyrexianDelverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianDelverCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAEtherRiftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherRiftCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CCard* pCard, CPlayer* pController);
	void Advance(int PlayerID, CCard* pCard, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//____________________________________________________________________________
//