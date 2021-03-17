#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAshenFirebeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshenFirebeastCard);
};

//____________________________________________________________________________
//
class CBraidsCabalMinionCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR (CBraidsCabalMinionCard);
};

//____________________________________________________________________________
//
class CCantivoreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCantivoreCard);
};

//____________________________________________________________________________
//
class CCephalidBrokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidBrokerCard);
};

//____________________________________________________________________________
//
class CCephalidLooterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidLooterCard);
};

//____________________________________________________________________________
//
class CCephalidRetainerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidRetainerCard);
};

//____________________________________________________________________________
//
class CCephalidScoutCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidScoutCard);
};

//____________________________________________________________________________
//
class CCognivoreCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CCognivoreCard);
};

//____________________________________________________________________________
//
class CEscapeArtistCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CEscapeArtistCard);
};

//____________________________________________________________________________
//
class CLithatogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLithatogCard);
};

//____________________________________________________________________________
//
class CMasterApothecaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterApothecaryCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNimbleMongooseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNimbleMongooseCard);
};

//____________________________________________________________________________
//
class CSpringingTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpringingTigerCard);
};

//____________________________________________________________________________
//
class CKrosanBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanBeastCard);
/* 
protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const; */
};

//____________________________________________________________________________
//
class CMetamorphicWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMetamorphicWurmCard);
};

//____________________________________________________________________________
//
class CMysticCrusaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticCrusaderCard);
};

//____________________________________________________________________________
//
class CMysticPenitentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticPenitentCard);
};

//____________________________________________________________________________
//
class CMysticVisionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticVisionaryCard);
};

//____________________________________________________________________________
//
class CMysticZealotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticZealotCard);
};

//____________________________________________________________________________
//
class CWerebearCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CWerebearCard);
};

//____________________________________________________________________________
//
class CFrightcrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrightcrawlerCard);
};

//____________________________________________________________________________
//
class CChildhoodHorrorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChildhoodHorrorCard);
};

//____________________________________________________________________________
//
class CCrashingCentaurCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCrashingCentaurCard);
};

//____________________________________________________________________________
//
class CDirtyWereratCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDirtyWereratCard);
};

//____________________________________________________________________________
//
class CHallowedHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHallowedHealerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPhantatogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantatogCard);
};

//____________________________________________________________________________
//
class CSetonKrosanProtectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSetonKrosanProtectorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStalkingBloodsuckerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStalkingBloodsuckerCard);
};

//____________________________________________________________________________
//
class CTerravoreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerravoreCard);
};

//____________________________________________________________________________
//
class CThaumatogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThaumatogCard);
};

//____________________________________________________________________________
//
class CVampiricDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVampiricDragonCard);
};

//____________________________________________________________________________
//
class CUpheavalCard : public CCard
{
	DECLARE_CARD_CSTOR(CUpheavalCard);
};

//____________________________________________________________________________
//
class CThermalBlastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CThermalBlastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAbandonedOutpostCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAbandonedOutpostCard);
};

//____________________________________________________________________________
//
class CBogWreckageCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBogWreckageCard);
};

//____________________________________________________________________________
//
class CRavagedHighlandsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRavagedHighlandsCard);
};

//____________________________________________________________________________
//
class CSeafloorDebrisCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSeafloorDebrisCard);
};

//____________________________________________________________________________
//
class CTimberlandRuinsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTimberlandRuinsCard);
};

//____________________________________________________________________________
//
class CDarkwaterCatacombsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDarkwaterCatacombsCard);
};

//____________________________________________________________________________
//
class CMossfireValleyCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMossfireValleyCard);
};

//____________________________________________________________________________
//
class CShadowbloodRidgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShadowbloodRidgeCard);
};

//____________________________________________________________________________
//
class CSkycloudExpanseCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSkycloudExpanseCard);
};

//____________________________________________________________________________
//
class CSungrassPrairieCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSungrassPrairieCard);
};

//____________________________________________________________________________
//
class CNomadStadiumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNomadStadiumCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBarbarianRingCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBarbarianRingCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCabalPitCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCabalPitCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCentaurGardenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCentaurGardenCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCephalidColiseumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCephalidColiseumCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCarefulStudyCard : public CCard
{
	DECLARE_CARD_CSTOR(CCarefulStudyCard);
};

//____________________________________________________________________________
//
class CBashToBitsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBashToBitsCard);
};

//_____________________________________________________________________________
//
class CBeastAttackCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeastAttackCard);
};

//_____________________________________________________________________________
//
class CCallOfTheHerdCard : public CCard
{
	DECLARE_CARD_CSTOR(CCallOfTheHerdCard);
};

//_____________________________________________________________________________
//
class CChatterOfTheSquirrelCard : public CCard
{
	DECLARE_CARD_CSTOR(CChatterOfTheSquirrelCard);
};

//_____________________________________________________________________________
//
class CCoffinPurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CCoffinPurgeCard);
};

//_____________________________________________________________________________
//
class CDeepReconnaissanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeepReconnaissanceCard);
};

//_____________________________________________________________________________
//
class CDematerializeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDematerializeCard);
};

//_____________________________________________________________________________
//
class CEarthRiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CEarthRiftCard);
};

//_____________________________________________________________________________
//
class CElephantAmbushCard : public CCard
{
	DECLARE_CARD_CSTOR(CElephantAmbushCard);
};

//_____________________________________________________________________________
//
class CEngulfingFlamesCard : public CCard
{
	DECLARE_CARD_CSTOR(CEngulfingFlamesCard);
};

//_____________________________________________________________________________
//
class CFerventDenialCard : public CCard
{
	DECLARE_CARD_CSTOR(CFerventDenialCard);
};

//_____________________________________________________________________________
//
class CFireboltCard : public CCard
{
	DECLARE_CARD_CSTOR(CFireboltCard);
};

//_____________________________________________________________________________
//
class CHowlingGaleCard : public CCard
{
	DECLARE_CARD_CSTOR(CHowlingGaleCard);
};

//_____________________________________________________________________________
//
class CMomentsPeaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CMomentsPeaceCard);
};

//_____________________________________________________________________________
//
class CMorbidHungerCard : public CCard
{
	DECLARE_CARD_CSTOR(CMorbidHungerCard);
};

//_____________________________________________________________________________
//
class CMorgueTheftCard: public CCard
{
	DECLARE_CARD_CSTOR(CMorgueTheftCard);
};

//_____________________________________________________________________________
//
class CRayOfDistortionCard: public CCard
{
	DECLARE_CARD_CSTOR(CRayOfDistortionCard);
};

//_____________________________________________________________________________
//
class CRecklessChargeCard: public CCard
{
	DECLARE_CARD_CSTOR(CRecklessChargeCard);
};

//_____________________________________________________________________________
//
class CRoarOfTheWurmCard: public CCard
{
	DECLARE_CARD_CSTOR(CRoarOfTheWurmCard);
};

//_____________________________________________________________________________
//
class CScorchingMissileCard: public CCard
{
	DECLARE_CARD_CSTOR(CScorchingMissileCard);
};

//_____________________________________________________________________________
//
class CSkullFractureCard: public CCard
{
	DECLARE_CARD_CSTOR(CSkullFractureCard);
};

//_____________________________________________________________________________
//
class CSylvanMightCard: public CCard
{
	DECLARE_CARD_CSTOR(CSylvanMightCard);
};

//_____________________________________________________________________________
//
class CVolcanicSprayCard: public CCard
{
	DECLARE_CARD_CSTOR(CVolcanicSprayCard);
};

//_____________________________________________________________________________
//
class CVolleyOfBouldersCard: public CCard
{
	DECLARE_CARD_CSTOR(CVolleyOfBouldersCard);
};

//_____________________________________________________________________________
//
class CStandstillCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStandstillCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSpellCast > TriggeredAbility0;
	bool BeforeResolution0(TriggeredAbility0::TriggeredActionType* pAction);
	typedef 
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSpellCast > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	typedef 
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardKeywordChanged > TriggeredAbility2;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	typedef 
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardKeywordChanged > TriggeredAbility3;
	bool SetTriggerContext3(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CAmugabaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAmugabaCard);
};

//____________________________________________________________________________
//
class CAvenArcherCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenArcherCard);
};

//____________________________________________________________________________
//
class CAvenSmokeweaverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenSmokeweaverCard);
};

//____________________________________________________________________________
//
class CBalshanGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBalshanGriffinCard);
};

//____________________________________________________________________________
//
class CBarbarianLunaticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbarianLunaticCard);
};

//____________________________________________________________________________
//
class CChainflingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChainflingerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CNomadDecoyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNomadDecoyCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CInfectedVerminCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInfectedVerminCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CConfessorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CConfessorCard);
};

//____________________________________________________________________________
//
class CCryptCreeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptCreeperCard);
};

//____________________________________________________________________________
//
class CCursedMonstrosityCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCursedMonstrosityCard);
};

//____________________________________________________________________________
//
class CDedicatedMartyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDedicatedMartyrCard);
};

//____________________________________________________________________________
//
class CDoggedHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoggedHunterCard);
};

//____________________________________________________________________________
//
class CDreamwinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamwinderCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDruidLyristCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDruidLyristCard);
};

//____________________________________________________________________________
//
class CDwarvenGruntCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenGruntCard);
};

//____________________________________________________________________________
//
class CDwarvenRecruiterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenRecruiterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFaceOfFearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaceOfFearCard);
};

//____________________________________________________________________________
//
class CFamishedGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFamishedGhoulCard);
};

//____________________________________________________________________________
//
class CFilthyCurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFilthyCurCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CFledglingImpCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFledglingImpCard);
};

//____________________________________________________________________________
//
class CHalberdierCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CHalberdierCard);
};

//____________________________________________________________________________
//
class CIridescentAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIridescentAngelCard);
};

//____________________________________________________________________________
//
class CKrosanArcherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanArcherCard);
};

//____________________________________________________________________________
//
class CLeafDancerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CLeafDancerCard);
};

//____________________________________________________________________________
//
class CLieutenantKirtarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLieutenantKirtarCard);
};

//____________________________________________________________________________
//
class CMinotaurExplorerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurExplorerCard);
};

//____________________________________________________________________________
//
class CNantukoElderCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoElderCard);
};

//____________________________________________________________________________
//
class COvereagerApprenticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COvereagerApprenticeCard);
};

//____________________________________________________________________________
//
class CPatrolHoundCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPatrolHoundCard);
};

//____________________________________________________________________________
//
class CPatronWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPatronWizardCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPhantomWhelpCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomWhelpCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPiannaNomadCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPiannaNomadCaptainCard);
};

//____________________________________________________________________________
//
class CPulsatingIllusionCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPulsatingIllusionCard);
};

//____________________________________________________________________________
//
class CRabidElephantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRabidElephantCard);
};

//____________________________________________________________________________
//
class CResilientWandererCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CResilientWandererCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSadisticHypnotistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSadisticHypnotistCard);
};

//____________________________________________________________________________
//
class CShadowmageInfiltratorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowmageInfiltratorCard);
};

//____________________________________________________________________________
//
class CSkyshooterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyshooterCard);
};

//____________________________________________________________________________
//
class CSpellbaneCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpellbaneCentaurCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSquirrelMobCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSquirrelMobCard);
};

//____________________________________________________________________________
//
class CTirelessTribeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTirelessTribeCard);
};

//____________________________________________________________________________
//
class CTreetopSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTreetopSentinelCard);
};

//____________________________________________________________________________
//
class CTwigwalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTwigwalkerCard);
};

//____________________________________________________________________________
//
class CWhisperingShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWhisperingShadeCard);
};

//____________________________________________________________________________
//
class CWoodlandDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodlandDruidCard);
};

//____________________________________________________________________________
//
class CZombieCannibalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieCannibalCard);
};

//____________________________________________________________________________
//
class CZoologistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZoologistCard);
};

//____________________________________________________________________________
//
class CLimestoneGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLimestoneGolemCard);
};

//____________________________________________________________________________
//
class CCrystalQuarryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCrystalQuarryCard);
};

//____________________________________________________________________________
//
class CDesertedTempleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDesertedTempleCard);
};

//____________________________________________________________________________
//
class CPetrifiedFieldCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPetrifiedFieldCard);
};

//____________________________________________________________________________
//
class CTarnishedCitadelCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTarnishedCitadelCard);
};

//____________________________________________________________________________
//
class CSoulcatcherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulcatcherCard);
};

//____________________________________________________________________________
//
class CDarkwaterEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarkwaterEggCard);
};

//____________________________________________________________________________
//
class CMossfireEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMossfireEggCard);
};

//____________________________________________________________________________
//
class CSandstoneDeadfallCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSandstoneDeadfallCard);
};

//____________________________________________________________________________
//
class CShadowbloodEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShadowbloodEggCard);
};

//____________________________________________________________________________
//
class CSkycloudEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkycloudEggCard);
};

//____________________________________________________________________________
//
class CSteamclawCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSteamclawCard);
};

//____________________________________________________________________________
//
class CSungrassEggCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSungrassEggCard);
};

//____________________________________________________________________________
//
class CBattleStrainCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBattleStrainCard);
};

//____________________________________________________________________________
//
class CBurningSandsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBurningSandsCard);
};

//____________________________________________________________________________
//
class CEarnestFellowshipCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEarnestFellowshipCard);
};

//____________________________________________________________________________
//
//class CGroundSealCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CGroundSealCard);
//};
//
////____________________________________________________________________________
////
class CMagmaVeinCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMagmaVeinCard);
};

//____________________________________________________________________________
//
class CMalevolentAwakeningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMalevolentAwakeningCard);
};

//____________________________________________________________________________
//
class CNeedForSpeedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNeedForSpeedCard);
};

//____________________________________________________________________________
//
class CPedanticLearningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPedanticLearningCard);
};

//____________________________________________________________________________
//
class CPrimalFrenzyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CPrimalFrenzyCard);
};

//____________________________________________________________________________
//
class CStillLifeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStillLifeCard);
};

//____________________________________________________________________________
//
//class CUnifyingTheoryCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CUnifyingTheoryCard);
//};
//
////____________________________________________________________________________
////
class CCeaseFireCard : public CCard
{
	DECLARE_CARD_CSTOR(CCeaseFireCard);
};

//____________________________________________________________________________
//
class CDivertCard : public CCard
{
	DECLARE_CARD_CSTOR(CDivertCard);
};

//____________________________________________________________________________
//
class CEmboldenCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmboldenCard);
};

//____________________________________________________________________________
//
class CEntombCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CEntombCard);
};

//____________________________________________________________________________
//
class CRefreshCard : public CCard
{
	DECLARE_CARD_CSTOR(CRefreshCard);
};

//____________________________________________________________________________
//
class CRepelCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRepelCard);
};

//____________________________________________________________________________
//
class CSecondThoughtsCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSecondThoughtsCard);
};

//____________________________________________________________________________
//
class CShelterCard : public CCard
{
	DECLARE_CARD_CSTOR(CShelterCard);
};

//____________________________________________________________________________
//
class CAncestralTributeCard : public CCard
{
	DECLARE_CARD_CSTOR(CAncestralTributeCard);
};

//____________________________________________________________________________
//
class CDecomposeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDecomposeCard);
};

//____________________________________________________________________________
//
class CExtractCard : public CCard
{
	DECLARE_CARD_CSTOR(CExtractCard);
};

//____________________________________________________________________________
//
class CNewFrontiersCard : public CCard
{
	DECLARE_CARD_CSTOR(CNewFrontiersCard);
};

//____________________________________________________________________________
//
class CPipersMelodyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPipersMelodyCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTouchOfInvisibilityCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CTouchOfInvisibilityCard);
};

//____________________________________________________________________________
//
class CMudholeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMudholeCard);
};

//____________________________________________________________________________
//
class CMysticEnforcerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMysticEnforcerCard);
};

//________________________________________________________________________________
//
class COtarianJuggernautCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COtarianJuggernautCard);
};

//________________________________________________________________________________
//
class CCabalPatriarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalPatriarchCard);
};

//____________________________________________________________________________
//
class CGorillaTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGorillaTitanCard);
};

//____________________________________________________________________________
//
class CKrosanAvengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanAvengerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPsychatogCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPsychatogCard);
};

//____________________________________________________________________________
//
class CSarcatogCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CSarcatogCard);
};

//____________________________________________________________________________
//
class CSparkMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSparkMageCard);
};

//____________________________________________________________________________
//
class CBearscapeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBearscapeCard);
};

//____________________________________________________________________________
//
class CChamberOfManipulationCard : public CCard
{
	DECLARE_CARD_CSTOR(CChamberOfManipulationCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDivineSacramentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDivineSacramentCard);
/* 
protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction); */
};

//____________________________________________________________________________
//
class CPsionicGiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsionicGiftCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSquirrelNestCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSquirrelNestCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CNutCollectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNutCollectorCard);
/* 
protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction); */
};

//____________________________________________________________________________
//
class CSavageFirecatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavageFirecatCard);
};

//____________________________________________________________________________
//
class CIvyElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIvyElementalCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CInnocentBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CInnocentBloodCard);
};

//____________________________________________________________________________
//
class CSimplifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CSimplifyCard);
};

//____________________________________________________________________________
//
class CTrembleCard : public CCard
{
	DECLARE_CARD_CSTOR(CTrembleCard);
};

//____________________________________________________________________________
//
class CCabalInquisitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalInquisitorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CScreamsOfTheDamnedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScreamsOfTheDamnedCard);
};

//____________________________________________________________________________
//
class CBelovedChaplainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBelovedChaplainCard);
};

//____________________________________________________________________________
//
class CImmobilizingInkCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CImmobilizingInkCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CHolisticWisdomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHolisticWisdomCard);
};

//____________________________________________________________________________
//
class CWildMongrelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildMongrelCard);
};

//____________________________________________________________________________
//
class CAboshanCephalidEmperorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAboshanCephalidEmperorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKirtarsWrathCard : public CCard
{
	DECLARE_CARD_CSTOR(CKirtarsWrathCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAnimalBoneyardCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnimalBoneyardCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAtogatogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAtogatogCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNantukoMentorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoMentorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRottingGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottingGiantCard);
};

//____________________________________________________________________________
//
class CStoneTongueBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneTongueBasiliskCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::CreatureEventCallback, &CWhenSelfDamageDealt::SetCreatureEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CZombieAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieAssassinCard);
};

//____________________________________________________________________________
//
class CDruidsCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CDruidsCallCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
							CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CWordsOfWisdomCard : public CCard
{
	DECLARE_CARD_CSTOR(CWordsOfWisdomCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTombfireCard : public CCard
{
	DECLARE_CARD_CSTOR(CTombfireCard);

private:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMuscleBurstCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMuscleBurstCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDiligentFarmhandCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiligentFarmhandCard);
};

//____________________________________________________________________________
//
class CLifeBurstCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLifeBurstCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMindBurstCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindBurstCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAvenShrineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAvenShrineCard);

protected:
	typedef 
		TTriggeredAbility < CTriggeredCounterSpellAbility, CWhenSpellCast,
								 CWhenSpellCast::EventCallback, &CWhenSpellCast::SetEventCallback > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CCabalShrineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCabalShrineCard);

protected:
	typedef 
		TTriggeredAbility < CTriggeredCounterSpellAbility, CWhenSpellCast,
								 CWhenSpellCast::EventCallback, &CWhenSpellCast::SetEventCallback > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CDwarvenShrineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDwarvenShrineCard);

protected:
	typedef 
		TTriggeredAbility < CTriggeredCounterSpellAbility, CWhenSpellCast,
								 CWhenSpellCast::EventCallback, &CWhenSpellCast::SetEventCallback > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CNantukoShrineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNantukoShrineCard);

protected:
	typedef 
		TTriggeredAbility < CTriggeredCounterSpellAbility, CWhenSpellCast,
								 CWhenSpellCast::EventCallback, &CWhenSpellCast::SetEventCallback > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CFlameBurstCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlameBurstCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPardicFirecatCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CPardicFirecatCard);
};

//____________________________________________________________________________
//
class CDevotedCaretakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevotedCaretakerCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CThoughtDevourerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtDevourerCard);
};

//____________________________________________________________________________
//
class CThoughtEaterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtEaterCard);
};

//____________________________________________________________________________
//
class CThoughtNibblerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtNibblerCard);
};

//____________________________________________________________________________
//
class CShowerOfCoalsCard: public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR (CShowerOfCoalsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRecoupCard : public CCard
{
	DECLARE_CARD_CSTOR(CRecoupCard);
};

//____________________________________________________________________________
//
class CSyncopateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSyncopateCard);
};

//____________________________________________________________________________
//
class CGhastlyDemiseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGhastlyDemiseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLuminousGuardianCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLuminousGuardianCard);
};

//____________________________________________________________________________
//
class CLiquidFireCard : public CCard
{
	DECLARE_CARD_CSTOR(CLiquidFireCard);

private:
	void OnResolutionCompleted0(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnResolutionCompleted3(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnResolutionCompleted4(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener0;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener3;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener4;
	};

//____________________________________________________________________________
//
class CChlorophantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChlorophantCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CBloodcurdlerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodcurdlerCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CDecayingSoilCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDecayingSoilCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//___________________________________________________________________________
//
class CDemoralizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDemoralizeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CEpicenterCard : public CCard
{
	DECLARE_CARD_CSTOR(CEpicenterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CRepentantVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRepentantVampireCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CWaywardAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWaywardAngelCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CMirariCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMirariCard);

protected:
	bool SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard) const;
};

//____________________________________________________________________________
//
class CJunkGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJunkGolemCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnActionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ActionSelection;
};

//____________________________________________________________________________
//
class CLavaBlisterCard : public CCard
{
	DECLARE_CARD_CSTOR(CLavaBlisterCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CBlazingSalvoCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlazingSalvoCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CChanceEncounterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChanceEncounterCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CLaquatussCreativityCard : public CCard
{
	DECLARE_CARD_CSTOR(CLaquatussCreativityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRitesOfInitiationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRitesOfInitiationCard);

protected:
	CSelectionSupport m_NumberSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRitesOfSpringCard : public CCard
{
	DECLARE_CARD_CSTOR(CRitesOfSpringCard);

protected:
	CSelectionSupport m_NumberSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSacredRitesCard : public CCard
{
	DECLARE_CARD_CSTOR(CSacredRitesCard);

protected:
	CSelectionSupport m_NumberSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPredictCard : public CCard
{
	DECLARE_CARD_CSTOR(CPredictCard);
};

//____________________________________________________________________________
//
class CHintOfInsanityCard : public CCard
{
	DECLARE_CARD_CSTOR(CHintOfInsanityCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTaintedPactCard : public CCard
{
	DECLARE_CARD_CSTOR(CTaintedPactCard);

protected:
	CSelectionSupport m_YesNoSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void ExileCard(CPlayer* pController);
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CCountedCardContainer ExiledCards;
};

//____________________________________________________________________________
//
class CLastRitesCard : public CCard
{
	DECLARE_CARD_CSTOR(CLastRitesCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CVerdantSuccessionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVerdantSuccessionCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	CSelectionSupport m_YesNoSelection;
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CVivifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CVivifyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CThinkTankCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThinkTankCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSeizeTheDayCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeizeTheDayCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGravestormCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGravestormCard);

protected:
	CSelectionSupport m_CardSelection;
	CSelectionSupport m_DrawSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnDrawSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CTestamentOfFaithCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTestamentOfFaithCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShiftyDoppelgangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShiftyDoppelgangerCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBalshanBeguilerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalshanBeguilerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback,
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
										CPlayer* pPlayer, Damage d_damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPardicMinerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPardicMinerCard);
};

//____________________________________________________________________________
//
