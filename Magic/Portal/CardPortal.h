#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAlluringScentCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAlluringScentCard);
};

//____________________________________________________________________________
//
class CArrogantVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArrogantVampireCard);
};

//____________________________________________________________________________
//
class CBeeStingCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBeeStingCard);
};

//____________________________________________________________________________
//
class CBorderGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorderGuardCard);
};

//____________________________________________________________________________
//
class CChargingBanditsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingBanditsCard);
};

//____________________________________________________________________________
//
class CCloakOfFeathersCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CCloakOfFeathersCard);
};

//____________________________________________________________________________
//
class CCloudDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudDragonCard);
};

//____________________________________________________________________________
//
class CCloudPiratesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudPiratesCard);
};

//____________________________________________________________________________
//
class CCravenKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCravenKnightCard);
};

//____________________________________________________________________________
//
class CCruelBargainCard : public CCard
{
	DECLARE_CARD_CSTOR(CCruelBargainCard);
};

//____________________________________________________________________________
//
class CCruelTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CCruelTutorCard);
};

//____________________________________________________________________________
//
class CDeepSeaSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepSeaSerpentCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDejaVuCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDejaVuCard);
};

//____________________________________________________________________________
//
class CDesertDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDesertDrakeCard);
};

//____________________________________________________________________________
//
class CDevastationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevastationCard);
};

//____________________________________________________________________________
//
class CDevotedHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevotedHeroCard);
};

//____________________________________________________________________________
//
class CDjinnOfTheLampCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDjinnOfTheLampCard);
};

//____________________________________________________________________________
//
class CDreadChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreadChargeCard);
};

//____________________________________________________________________________
//
class CDreadReaperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadReaperCard);
};

//____________________________________________________________________________
//
class CEbonDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEbonDragonCard);
};

//____________________________________________________________________________
//
class CEliteCatWarriorCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CEliteCatWarriorCard);
};

//____________________________________________________________________________
//
class CEndlessCockroachesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEndlessCockroachesCard);
};

//____________________________________________________________________________
//
class CFireImpCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFireImpCard);
};

//____________________________________________________________________________
//
class CFireSnakeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFireSnakeCard);
};

//____________________________________________________________________________
//
class CFireTempestCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFireTempestCard);
};

//____________________________________________________________________________
//
class CFleetFootedMonkCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CFleetFootedMonkCard);
};

//____________________________________________________________________________
//
class CForkedLightningCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CForkedLightningCard);
};

//____________________________________________________________________________
//
class CGoblinBullyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinBullyCard);
};

//____________________________________________________________________________
//
class CHandOfDeathCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHandOfDeathCard);
};

//____________________________________________________________________________
//
class CHighlandGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHighlandGiantCard);
};

//____________________________________________________________________________
//
class CHowlingFuryCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CHowlingFuryCard);
};

//____________________________________________________________________________
//
class CHulkingGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHulkingGoblinCard);
};

//____________________________________________________________________________
//
class CIngeniousThiefCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIngeniousThiefCard);

private:
	bool SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CJungleLionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJungleLionCard);
};

//____________________________________________________________________________
//
class CKeenEyedArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeenEyedArchersCard);
};

//____________________________________________________________________________
//
class CLastChanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CLastChanceCard);
};

//____________________________________________________________________________
//
class CLavaFlowCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CLavaFlowCard);
};

//____________________________________________________________________________
//
class CLizardWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLizardWarriorCard);
};

//____________________________________________________________________________
//
class CMercenaryKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMercenaryKnightCard);
};

//____________________________________________________________________________
//
class CMindKnivesCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindKnivesCard);
};

//____________________________________________________________________________
//
class CMinotaurWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurWarriorCard);
};

//____________________________________________________________________________
//
class CMobilizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMobilizeCard);
};

//____________________________________________________________________________
//
class CMoonSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoonSpriteCard);
};

//____________________________________________________________________________
//
class CMuckRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMuckRatsCard);
};

//____________________________________________________________________________
//
class CMysticDenialCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMysticDenialCard);
};

//____________________________________________________________________________
//
class CNaturesCloakCard : public CCard
{
	DECLARE_CARD_CSTOR(CNaturesCloakCard);
};

//____________________________________________________________________________
//
class CNatureSRuinCard : public CCard
{
	DECLARE_CARD_CSTOR(CNatureSRuinCard);
};

//____________________________________________________________________________
//
class CNoxiousToadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoxiousToadCard);
};

//____________________________________________________________________________
//
class CPersonalTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CPersonalTutorCard);
};

//____________________________________________________________________________
//
class CPillagingHordeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPillagingHordeCard);
};

//____________________________________________________________________________
//
class CPlantElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlantElementalCard);
};

//____________________________________________________________________________
//
class CRagingCougarCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingCougarCard);
};

//____________________________________________________________________________
//
class CRagingMinotaurCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingMinotaurCard);
};

//____________________________________________________________________________
//
class CRenewingDawnCard : public CCard
{
	DECLARE_CARD_CSTOR(CRenewingDawnCard);
};

//____________________________________________________________________________
//
class CRowanTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRowanTreefolkCard);
};

//____________________________________________________________________________
//
class CSacredKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSacredKnightCard);
};

//____________________________________________________________________________
//
class CScorchingSpearCard : public CCard
{
	DECLARE_CARD_CSTOR(CScorchingSpearCard);
};

//____________________________________________________________________________
//
class CSerpentAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerpentAssassinCard);
};

//____________________________________________________________________________
//
class CSkeletalCrocodileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletalCrocodileCard);
};

//____________________________________________________________________________
//
class CSkeletalSnakeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletalSnakeCard);
};

//____________________________________________________________________________
//
class CSorcerousSightCard : public CCard
{
	DECLARE_CARD_CSTOR(CSorcerousSightCard);
};

//____________________________________________________________________________
//
class CSoulShredCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSoulShredCard);
};

//____________________________________________________________________________
//
class CSpiritualGuardianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritualGuardianCard);
};

//____________________________________________________________________________
//
class CSpottedGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpottedGriffinCard);
};

//____________________________________________________________________________
//
class CStarlitAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStarlitAngelCard);
};

//____________________________________________________________________________
//
class CSteadfastnessCard : public CCard
{
	DECLARE_CARD_CSTOR(CSteadfastnessCard);
};

//____________________________________________________________________________
//
class CSylvanTutorCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSylvanTutorCard);
};

//____________________________________________________________________________
//
class CSymbolOfUnsummoningCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSymbolOfUnsummoningCard);
};

//____________________________________________________________________________
//
class CThingFromTheDeepCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThingFromTheDeepCard);
};

//____________________________________________________________________________
//
class CThunderingWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderingWurmCard);
};

//____________________________________________________________________________
//
class CTouchOfBrillianceCard : public CCard
{
	DECLARE_CARD_CSTOR(CTouchOfBrillianceCard);
};

//____________________________________________________________________________
//
class CUndyingBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndyingBeastCard);
};

//____________________________________________________________________________
//
class CValorousChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CValorousChargeCard);
};

//____________________________________________________________________________
//
class CVampiricFeastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CVampiricFeastCard);
};

//____________________________________________________________________________
//
class CVampiricTouchCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CVampiricTouchCard);
};

//____________________________________________________________________________
//
class CVirtuesRuinCard : public CCard
{
	DECLARE_CARD_CSTOR(CVirtuesRuinCard);
};

//____________________________________________________________________________
//
class CWallOfGraniteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfGraniteCard);
};

//____________________________________________________________________________
//
class CWarriorsChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CWarriorsChargeCard);
};

//____________________________________________________________________________
//
class CWhiptailWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhiptailWurmCard);
};

//____________________________________________________________________________
//
class CWickedPactCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWickedPactCard);
};

//____________________________________________________________________________
//
class CWillowDryadCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CWillowDryadCard);
};

//____________________________________________________________________________
//
class CAlabasterDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAlabasterDragonCard);
};

//____________________________________________________________________________
//
class CChargingPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingPaladinCard);
};

//____________________________________________________________________________
//
class CChargingRhinoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingRhinoCard);
};

//____________________________________________________________________________
//
class CCloudSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudSpiritCard);
};

//____________________________________________________________________________
//
class CCravenGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCravenGiantCard);
};

//____________________________________________________________________________
//
class CGorillaWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGorillaWarriorCard);
};

//____________________________________________________________________________
//
class CPathOfPeaceCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPathOfPeaceCard);
};

//____________________________________________________________________________
//
class CRainOfSaltCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRainOfSaltCard);
};

//____________________________________________________________________________
//
class CTheftOfDreamsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTheftOfDreamsCard);
};

//____________________________________________________________________________
//
class CWintersGraspCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWintersGraspCard);
};

//____________________________________________________________________________
//
class CCapriciousSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCapriciousSorcererCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CKingsAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKingsAssassinCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSternMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSternMarshalCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class COwlFamiliarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(COwlFamiliarCard);
};

//____________________________________________________________________________
//
class CFireDragonCard : public CFlyingCreatureCard 
{
	DECLARE_CARD_CSTOR(CFireDragonCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBurningCloakCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CBurningCloakCard);
};

//____________________________________________________________________________
//
class CCruelFateCard : public CCard
{
	DECLARE_CARD_CSTOR(CCruelFateCard);
};

//____________________________________________________________________________
//
class CFinalStrikeCard : public CCard
{
	DECLARE_CARD_CSTOR(CFinalStrikeCard);
};

//____________________________________________________________________________
//
class CFruitionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFruitionCard);
};

//____________________________________________________________________________
//
class COmenCard : public CCard
{
	DECLARE_CARD_CSTOR(COmenCard);

protected:
	CCardFilter m_CardFilter;
};

//_________________________________________________________________
//

class CFalsePeaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFalsePeaceCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFluxCard : public CCard
{
	DECLARE_CARD_CSTOR(CFluxCard);

protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution(CAbilityAction* pAction);
	void SelectionFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
