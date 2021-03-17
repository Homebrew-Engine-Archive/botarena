#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAlphaMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlphaMyrCard);
};

//____________________________________________________________________________
//
class CCopperMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CCopperMyrCard);
};

//____________________________________________________________________________
//
class CGoldMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldMyrCard);
};

//____________________________________________________________________________
//
class CIronMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CIronMyrCard);
};

//____________________________________________________________________________
//
class CLeadenMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CLeadenMyrCard);
};

//____________________________________________________________________________
//
class CSilverMyrCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverMyrCard);
};

//____________________________________________________________________________
//
class CLodestoneMyrCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLodestoneMyrCard);
};

//____________________________________________________________________________
//
class COmegaMyrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COmegaMyrCard);
};

//____________________________________________________________________________
//
class CLevelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLevelerCard);
};

//____________________________________________________________________________
//
class CLightningGreavesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLightningGreavesCard);
};

//____________________________________________________________________________
//
class CMegatogCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMegatogCard);
};

//____________________________________________________________________________
//
class CSlithAscendantCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSlithAscendantCard);
};

//____________________________________________________________________________
//
class CSlithBloodletterCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSlithBloodletterCard);
};

//____________________________________________________________________________
//
class CSlithFirewalkerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSlithFirewalkerCard);
};

//____________________________________________________________________________
//
class CSlithPredatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlithPredatorCard);
};

//____________________________________________________________________________
//
class CSteelWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelWallCard);
};

//____________________________________________________________________________
//
class CTowerOfChampionsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTowerOfChampionsCard);
};

//____________________________________________________________________________
//
class CTowerOfEonsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTowerOfEonsCard);
};

//____________________________________________________________________________
//
class CTowerOfFortunesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTowerOfFortunesCard);
};

//____________________________________________________________________________
//
class CTowerOfMurmursCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTowerOfMurmursCard);
};

//____________________________________________________________________________
//
class CSwordOfKaldraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordOfKaldraCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						CCard* pcard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CAuriokTransfixerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokTransfixerCard);
};

//____________________________________________________________________________
//
class CDrossProwlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossProwlerCard);
};

//____________________________________________________________________________
//
class CFangrenHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFangrenHunterCard);
};

//____________________________________________________________________________
//
class CGoblinStrikerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinStrikerCard);
};

//____________________________________________________________________________
//
class CKrarkClanGruntCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKrarkClanGruntCard);
};

//____________________________________________________________________________
//
class CKrarkClanShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrarkClanShamanCard);
};

//____________________________________________________________________________
//
class CLeoninAbunasCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninAbunasCard);
};

//____________________________________________________________________________
//
class CLeoninElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninElderCard);
};

//____________________________________________________________________________
//
class CLoomingHoverguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLoomingHoverguardCard);
};

//____________________________________________________________________________
//
class CLoxodonMenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonMenderCard);
};

//____________________________________________________________________________
//
class CLumengridSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLumengridSentinelCard);
};

//____________________________________________________________________________
//
class CLuminousAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLuminousAngelCard);
};

//____________________________________________________________________________
//
class CMolderSlugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMolderSlugCard);
};

//____________________________________________________________________________
//
class CMoriokScavengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoriokScavengerCard);
};

//____________________________________________________________________________
//
class CNimLasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNimLasherCard);
};

//____________________________________________________________________________
//
class CNimShamblerCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CNimShamblerCard);
};

//____________________________________________________________________________
//
class CNimShriekerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNimShriekerCard);
};

//____________________________________________________________________________
//
class COgreLeadfootCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreLeadfootCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CPlatedSlagwurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedSlagwurmCard);
};

//____________________________________________________________________________
//
class CPsychicMembraneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPsychicMembraneCard);
};

//____________________________________________________________________________
//
class CRustmouthOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRustmouthOgreCard);
};

//____________________________________________________________________________
//
class CSlithStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlithStriderCard);
};

//____________________________________________________________________________
//
class CSpikeshotGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeshotGoblinCard);
};

//____________________________________________________________________________
//
class CTelJiladExileCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladExileCard);
};

//____________________________________________________________________________
//
class CTrollsOfTelJiladCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrollsOfTelJiladCard);
};

//____________________________________________________________________________
//
class CVedalkenArchmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenArchmageCard);
};

//____________________________________________________________________________
//
class CChimneyImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChimneyImpCard);
};

//____________________________________________________________________________
//
class CCopperhoofVorracCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCopperhoofVorracCard);
};

//____________________________________________________________________________
//
class CDiscipleOfTheVaultCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfTheVaultCard);
};

//____________________________________________________________________________
//
class CDrossHarvesterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossHarvesterCard);
};

//____________________________________________________________________________
//
class CGroffskithurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGroffskithurCard);
};

//____________________________________________________________________________
//
class CVermiculosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVermiculosCard);
};

//____________________________________________________________________________
//
class CWallOfBloodCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfBloodCard);
};

//____________________________________________________________________________
//
class CWoebearerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoebearerCard);
};

//____________________________________________________________________________
//
class CCobaltGolemCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCobaltGolemCard);
};

//____________________________________________________________________________
//
class CDrossScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossScorpionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CElfReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElfReplicaCard);
};

//____________________________________________________________________________
//
class CGoblinDirigibleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinDirigibleCard);
};

//____________________________________________________________________________
//
class CGoblinReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinReplicaCard);
};

//____________________________________________________________________________
//
class CGoblinWarWagonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinWarWagonCard);
};

//____________________________________________________________________________
//
class CGridMonitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGridMonitorCard);
};

//____________________________________________________________________________
//
class CHematiteGolemCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CHematiteGolemCard);
};

//____________________________________________________________________________
//
class CMalachiteGolemCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMalachiteGolemCard);
};

//____________________________________________________________________________
//
class CMyrRetrieverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrRetrieverCard);
};

//____________________________________________________________________________
//
class CNimReplicaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNimReplicaCard);
};

//____________________________________________________________________________
//
class CPewterGolemCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CPewterGolemCard);
};

//____________________________________________________________________________
//
class CRustElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRustElementalCard);
};

//____________________________________________________________________________
//
class CRustsporeRamCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRustsporeRamCard);
};

//____________________________________________________________________________
//
class CSoldierReplicaCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CSoldierReplicaCard);
};

//____________________________________________________________________________
//
class CTitaniumGolemCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTitaniumGolemCard);
};

//____________________________________________________________________________
//
class CWizardReplicaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWizardReplicaCard);
};

//____________________________________________________________________________
//
class CAncientDenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAncientDenCard);
};

//____________________________________________________________________________
//
class CBlinkmothWellCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBlinkmothWellCard);
};

//____________________________________________________________________________
//
class CGlimmervoidCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGlimmervoidCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGreatFurnaceCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGreatFurnaceCard);
};

//____________________________________________________________________________
//
class CSeatOfTheSynodCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSeatOfTheSynodCard);
};

//____________________________________________________________________________
//
class CTreeOfTalesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTreeOfTalesCard);
};

//____________________________________________________________________________
//
class CVaultOfWhispersCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CVaultOfWhispersCard);
};

//____________________________________________________________________________
//
class CAEtherSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherSpellbombCard);
};

//____________________________________________________________________________
//
class CBonesplitterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBonesplitterCard);
};

//____________________________________________________________________________
//
class CCrystalShardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrystalShardCard);
};

//____________________________________________________________________________
//
class CEmpyrialPlateCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEmpyrialPlateCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CGalvanicKeyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGalvanicKeyCard);
};

//____________________________________________________________________________
//
class CGraniteShardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGraniteShardCard);
};

//____________________________________________________________________________
//
class CHeartwoodShardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeartwoodShardCard);
};

//____________________________________________________________________________
//
class CLeoninBladetrapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeoninBladetrapCard);
};

//____________________________________________________________________________
//
class CLeoninSunStandardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeoninSunStandardCard);
};

//____________________________________________________________________________
//
class CMesmericOrbCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMesmericOrbCard);
};

//____________________________________________________________________________
//
class CMindsEyeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMindsEyeCard);
};

//____________________________________________________________________________
//
class CNecrogenSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecrogenSpellbombCard);
};

//____________________________________________________________________________
//
class CNeurokHoversailCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNeurokHoversailCard);
};

//____________________________________________________________________________
//
class CNuisanceEngineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNuisanceEngineCard);
};

//____________________________________________________________________________
//
class CPearlShardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPearlShardCard);
};

//____________________________________________________________________________
//
class CPyriteSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyriteSpellbombCard);
};

//____________________________________________________________________________
//
class CSkeletonShardCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSkeletonShardCard);
};

//____________________________________________________________________________
//
class CSlagwurmArmorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSlagwurmArmorCard);
};

//____________________________________________________________________________
//
class CSunbeamSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSunbeamSpellbombCard);
};

//____________________________________________________________________________
//
class CTalismanOfDominanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTalismanOfDominanceCard);
};

//____________________________________________________________________________
//
class CTalismanOfImpulseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTalismanOfImpulseCard);
};

//____________________________________________________________________________
//
class CTalismanOfIndulgenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTalismanOfIndulgenceCard);
};

//____________________________________________________________________________
//
class CTalismanOfProgressCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTalismanOfProgressCard);
};

//____________________________________________________________________________
//
class CTalismanOfUnityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTalismanOfUnityCard);
};

//____________________________________________________________________________
//
class CTelJiladStylusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTelJiladStylusCard);
};

//____________________________________________________________________________
//
class CViridianLongbowCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CViridianLongbowCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CVorracBattlehornsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVorracBattlehornsCard);
};

//____________________________________________________________________________
//
class CVulshokBattlegearCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVulshokBattlegearCard);
};

//____________________________________________________________________________
//
class CVulshokGauntletsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVulshokGauntletsCard);
};

//____________________________________________________________________________
//
class CWeldingJarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWeldingJarCard);
};

//____________________________________________________________________________
//
class CDomineerCard : public CCard
{
	DECLARE_CARD_CSTOR(CDomineerCard);
};

//____________________________________________________________________________
//
class CInertiaBubbleCard : public CCard
{
	DECLARE_CARD_CSTOR(CInertiaBubbleCard);
};

//____________________________________________________________________________
//
class CMassHysteriaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMassHysteriaCard);
};

//____________________________________________________________________________
//
class CNecrogenMistsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecrogenMistsCard);
};

//____________________________________________________________________________
//
class CRelicBaneCard : public CCard
{
	DECLARE_CARD_CSTOR(CRelicBaneCard);

protected:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CAltarsLightCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAltarsLightCard);
};

//____________________________________________________________________________
//
class CBattlegrowthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBattlegrowthCard);
};

//____________________________________________________________________________
//
class CBloodscentCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBloodscentCard);
};

//____________________________________________________________________________
//
class CElectrostaticBoltCard : public CCard
{
	DECLARE_CARD_CSTOR(CElectrostaticBoltCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIrradiateCard : public CCard
{
	DECLARE_CARD_CSTOR(CIrradiateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPredatorsStrikeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CPredatorsStrikeCard);
};

//____________________________________________________________________________
//
class CRegressCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRegressCard);
};

//____________________________________________________________________________
//
class CTrashForTreasureCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTrashForTreasureCard);
};

//____________________________________________________________________________
//
class CBetrayalOfFleshCard : public CCard
{
	DECLARE_CARD_CSTOR(CBetrayalOfFleshCard);
};

//____________________________________________________________________________
//
class CDreamsGripCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreamsGripCard);

private: 
	CManaCost	m_EntwineCost;

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CRoarOfTheKhaCard : public CCard
{
	DECLARE_CARD_CSTOR(CRoarOfTheKhaCard);

private:
	CManaCost	m_EntwineCost;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class COneDozenEyesCard : public CCard
{
	DECLARE_CARD_CSTOR(COneDozenEyesCard);

private:
	CManaCost	m_EntwineCost;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSolarTideCard : public CCard
{
	DECLARE_CARD_CSTOR(CSolarTideCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CTemporalCascadeCard : public CCard
{
	DECLARE_CARD_CSTOR(CTemporalCascadeCard);

private:
	CManaCost	m_EntwineCost;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CToothAndNailCard : public CCard
{
	DECLARE_CARD_CSTOR(CToothAndNailCard);

private:
	CManaCost	m_EntwineCost;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CNightmareLashCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNightmareLashCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSerumTankCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSerumTankCard);
};

//____________________________________________________________________________
//
class CFlayedNimCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CFlayedNimCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
//class CDeadIronSledgeCard : public CInPlaySpellCard
//{
//	DECLARE_CARD_CSTOR(CDeadIronSledgeCard);
//
//private:
//	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
//	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
//											  CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
//};
//
////____________________________________________________________________________
////
class CTanglerootCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTanglerootCard);
};

//____________________________________________________________________________
//
class CTurnToDustCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTurnToDustCard);
};

//____________________________________________________________________________
//
class CDeconstructCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeconstructCard);
};

//____________________________________________________________________________
//
class CLightningCoilsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLightningCoilsCard);
	
protected:
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDampingMatrixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDampingMatrixCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBarterInBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CBarterInBloodCard);
};

//____________________________________________________________________________
//
class CClockworkBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkBeetleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CClockworkCondorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkCondorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CClockworkDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkDragonCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CClockworkVorracCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkVorracCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CChromeMoxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChromeMoxCard);

protected:
	CCountedCardContainer_ pExiled;
	
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);

	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	BOOL CanPlay3(BOOL bIncludeTricks);
	BOOL CanPlay4(BOOL bIncludeTricks);
	BOOL CanPlay5(BOOL bIncludeTricks);
	BOOL CanPlay6(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTelJiladArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladArchersCard);
};

//____________________________________________________________________________
//
class CTelJiladChosenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelJiladChosenCard);
};

//____________________________________________________________________________
//
class CNeedlebugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeedlebugCard);
};

//____________________________________________________________________________
//
class CChaliceOfTheVoidCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChaliceOfTheVoidCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility;
	bool SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CNimDevourerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNimDevourerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMyrMindservantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrMindservantCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFrogmiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrogmiteCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBroodstarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodstarCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSomberHoverguardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSomberHoverguardCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMyrEnforcerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMyrEnforcerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScaleOfChissGoriaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScaleOfChissGoriaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CToothOfChissGoriaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CToothOfChissGoriaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAssertAuthorityCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CAssertAuthorityCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThoughtcastCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtcastCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThirstforKnowledgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CThirstforKnowledgeCard);

/*protected:
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_Selection;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;*/
};

//____________________________________________________________________________
//
class CAuriokBladewardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAuriokBladewardenCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLivingHiveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLivingHiveCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																								Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//___________________________________________________________________________
//
class CNeurokFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokFamiliarCard);
	
protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CNeurokSpyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeurokSpyCard);
};

//____________________________________________________________________________
//
class CViridianJoinerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViridianJoinerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMaskOfMemoryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMaskOfMemoryCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
};

//____________________________________________________________________________
//
class CScrabblingClawsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScrabblingClawsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CJourneyOfDiscoveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CJourneyOfDiscoveryCard);

private: 
	CManaCost	m_EntwineCost;
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMoltenRainCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoltenRainCard);
};

//____________________________________________________________________________
//
class CWailOfTheNimCard : public CCard
{
	DECLARE_CARD_CSTOR(CWailOfTheNimCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDuskworkerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskworkerCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
/*class CIsochronScepterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIsochronScepterCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//*/
class CPromiseOfPowerCard : public CCard
{
	DECLARE_CARD_CSTOR(CPromiseOfPowerCard);

private: 
	CManaCost	m_EntwineCost;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CReiverDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CReiverDemonCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CLeoninDenGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeoninDenGuardCard);
};

//____________________________________________________________________________
//
class CSkyhunterCubCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyhunterCubCard);
};

//____________________________________________________________________________
//
class CMyrIncubatorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMyrIncubatorCard);
};

//____________________________________________________________________________
//
class CRazorBarrierCard : public CCard
{
	DECLARE_CARD_CSTOR(CRazorBarrierCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CCloudpostCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCloudpostCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWarElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarElementalCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility,  CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSunDropletCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSunDropletCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CMirrorGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMirrorGolemCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoblinCharbelcherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinCharbelcherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSoulNovaCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSoulNovaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBoshIronGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoshIronGolemCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CForgeArmorCard : public CCard
{
	DECLARE_CARD_CSTOR(CForgeArmorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAltarOfShadowsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAltarOfShadowsCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBlinkmothUrnCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlinkmothUrnCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGlissaSunseekerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CGlissaSunseekerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CBansheesBladeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBansheesBladeCard);

};

//____________________________________________________________________________
//
class COblivionStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COblivionStoneCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CKrarksThumbCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKrarksThumbCard);
};

//____________________________________________________________________________
//
class CFieryGambitCard : public CCard
{
	DECLARE_CARD_CSTOR(CFieryGambitCard);

protected:
	CSelectionSupport m_FlipSelection;
	CSelectionSupport m_Continue;
	int FlipCount;
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution (CAbilityAction* pAction);
	void FlipFunction (CPlayer* pController, CCreatureCard* pTarget);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnContinueSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CGrabTheReinsCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrabTheReinsCard);

protected:
	CSelectionSupport m_CreatureSelection;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void CreatureSelection(CPlayer* pPlayer, CCard* pTargetCard, CPlayer* pTargetPlayer);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSpoilsOfTheVaultCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpoilsOfTheVaultCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CProteusStaffCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CProteusStaffCard);

protected:	
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CExtraplanarLensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExtraplanarLensCard);

protected:
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

	CCountedCardContainer_ pImprinted;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLiarsPendulumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLiarsPendulumCard);

protected:
	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Guess;
	void OnGuessed(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_RevealSelection;
	void OnRevealSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLifesparkSpellbombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLifesparkSpellbombCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class COverrideCard : public CCard
{
	DECLARE_CARD_CSTOR(COverrideCard);

protected:
	class COverrideAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		COverrideAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~COverrideAbility() {}
	};
};

//____________________________________________________________________________
//
class CWrenchMindCard : public CCard
{
	DECLARE_CARD_CSTOR(CWrenchMindCard);

protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSecondSunriseCard : public CCard
{
	DECLARE_CARD_CSTOR(CSecondSunriseCard);
};

//____________________________________________________________________________
//
class CBlindingBeamCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlindingBeamCard);

protected:
	CManaCost	m_EntwineCost;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CJinxedChokerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJinxedChokerCard);
protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//