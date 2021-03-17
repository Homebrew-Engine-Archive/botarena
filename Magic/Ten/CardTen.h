#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDrossCrocodileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrossCrocodileCard);
};

//____________________________________________________________________________
//
class CMassOfGhoulsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMassOfGhoulsCard);
};

//____________________________________________________________________________
//
class CWildGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWildGriffinCard);
};

//____________________________________________________________________________
//
class CYouthfulKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CYouthfulKnightCard);
};

//____________________________________________________________________________
//
class CBloodrockCyclopsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodrockCyclopsCard);
};

//____________________________________________________________________________
//
class CHorseshoeCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHorseshoeCrabCard);
};

//____________________________________________________________________________
//
class CCancelCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCancelCard);
};

//____________________________________________________________________________
//
class CAmbassadorLaquatusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmbassadorLaquatusCard);
};

//____________________________________________________________________________
//
class CPhageTheUntouchableCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhageTheUntouchableCard);

protected:
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
private:
	CCardFlagModifier pModifier1;
	CCardFlagModifier pModifier2;
};

//____________________________________________________________________________
//
class CAssassinateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAssassinateCard);
};

//____________________________________________________________________________
//
class CCompositeGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCompositeGolemCard);
};

//____________________________________________________________________________
//
class CDeathmarkCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathmarkCard);
};

//____________________________________________________________________________
//
class CStarlightInvokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStarlightInvokerCard);
};

//____________________________________________________________________________
//
class CQuirionDryadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionDryadCard);
};

//____________________________________________________________________________
//
class CCrucibleOfWorldsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCrucibleOfWorldsCard);
};

//____________________________________________________________________________
//
class CAuraOfSilenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAuraOfSilenceCard);
};

//____________________________________________________________________________
//
class CChomannoRevolutionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChomannoRevolutionaryCard);
};

//____________________________________________________________________________
//
class CPlatinumAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatinumAngelCard);
};

//____________________________________________________________________________
//
class CPeekCard : public CCard
{
	DECLARE_CARD_CSTOR(CPeekCard);
};

//____________________________________________________________________________
//
class CCryoclasmCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCryoclasmCard);
};

//____________________________________________________________________________
//
class CMobilizationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMobilizationCard);
};

//____________________________________________________________________________
//
class CRuleOfLawCard : public CCard
{
	DECLARE_CARD_CSTOR(CRuleOfLawCard);
};

//____________________________________________________________________________
//
class CLeoninScimitarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLeoninScimitarCard);
};

//____________________________________________________________________________
//
class CHateWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHateWeaverCard);
};

//____________________________________________________________________________
//
class CRainOfTearsCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRainOfTearsCard);
};

//____________________________________________________________________________
//
class CFistsOfTheAnvilCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFistsOfTheAnvilCard);
};

//____________________________________________________________________________
//
class CFlashfreezeCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFlashfreezeCard);
};

//____________________________________________________________________________
//
class CGhostWardenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostWardenCard);
};

//____________________________________________________________________________
//
class CRecollectCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRecollectCard);
};

//____________________________________________________________________________
//
class CThunderingGiantCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderingGiantCard);
};

//____________________________________________________________________________
//
class CLoxodonMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonMysticCard);
};

//____________________________________________________________________________
//
class CRevivingDoseCard : public CCard
{
	DECLARE_CARD_CSTOR(CRevivingDoseCard);
};

//____________________________________________________________________________
//
class CAfflictCard : public CCard
{
	DECLARE_CARD_CSTOR(CAfflictCard);
};

//____________________________________________________________________________
//
class CAggressiveUrgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CAggressiveUrgeCard);
};

//____________________________________________________________________________
//
class CMindStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMindStoneCard);
};

//____________________________________________________________________________
//
class CSmashCard : public CCard
{
	DECLARE_CARD_CSTOR(CSmashCard);
};

//____________________________________________________________________________
//
class CSpiritWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritWeaverCard);
};

//____________________________________________________________________________
//
class CSteadfastGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteadfastGuardCard);
};

//____________________________________________________________________________
//
class CTrueBelieverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrueBelieverCard);
};

//____________________________________________________________________________
//
class CVedalkenMastermindCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenMastermindCard);
};

//____________________________________________________________________________
//
class CAngelicWallCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelicWallCard);
};

//____________________________________________________________________________
//
class CArcanisTheOmnipotentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArcanisTheOmnipotentCard);
};

//____________________________________________________________________________
//
class CBandageCard : public CCard
{
	DECLARE_CARD_CSTOR(CBandageCard);
};

//____________________________________________________________________________
//
class CCloudElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudElementalCard);
};

//____________________________________________________________________________
//
class CCloudSpriteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudSpriteCard);
};

//____________________________________________________________________________
//
class CKamahlPitFighterCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CKamahlPitFighterCard);
};

//____________________________________________________________________________
//
class CMoggFanaticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggFanaticCard);
};

//____________________________________________________________________________
//
class CMirriCatWarriorCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CMirriCatWarriorCard);
};

//____________________________________________________________________________
//
class CMolimoMaroSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMolimoMaroSorcererCard);
};

//____________________________________________________________________________
//
class CMantisEngineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMantisEngineCard);
};

//____________________________________________________________________________
//
class CMightWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMightWeaverCard);
};

//____________________________________________________________________________
//
class CDragonRoostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDragonRoostCard);
};

//____________________________________________________________________________
//
class CEssenceDrainCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEssenceDrainCard);
};

//____________________________________________________________________________
//
class CFlamewaveInvokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamewaveInvokerCard);
};

//____________________________________________________________________________
//
class CDistressCard : public CCard
{
	DECLARE_CARD_CSTOR(CDistressCard);
};

//____________________________________________________________________________
//
class CFurnaceWhelpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFurnaceWhelpCard);
};

//____________________________________________________________________________
//
class CHeartOfLightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CHeartOfLightCard);
};

//____________________________________________________________________________
//
class CMortalCombatCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMortalCombatCard);

private:
	class CMyTrigger : public CWhenNodeChanged
	{
	public:
		typedef FastDelegate< void ( CNode* ) > EventCallback;

		CMyTrigger(CCard* pCard, NodeId toNodeId)
			: CWhenNodeChanged(pCard, toNodeId)
		{}

		void SetEventCallback(EventCallback callback)
		{
			__super::SetEventCallback(callback);
		}

	protected:
		virtual void CallEventCallback(CNode* pToNode)
		{
			CPlayer* pPlayer = pToNode->GetGraph()->GetPlayer();
			CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);

			if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pGraveyard->GetCardContainer()) < 20)
				return;

			__super::CallEventCallback(pToNode);
		}
	};
};

//____________________________________________________________________________
//
class CPersuasionCard : public CCard
{
	DECLARE_CARD_CSTOR(CPersuasionCard);
};

//____________________________________________________________________________
//
class CPhyrexianRagerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianRagerCard);
};

//____________________________________________________________________________
//
class CPincherBeetlesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPincherBeetlesCard);
};

//____________________________________________________________________________
//
class CRecoverCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRecoverCard);
};

//____________________________________________________________________________
//
class CRootMazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CRootMazeCard);
};

//____________________________________________________________________________
//
class CScionOfTheWildCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScionOfTheWildCard);
};

//____________________________________________________________________________
//
class CSparkElementalCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSparkElementalCard);
};

//____________________________________________________________________________
//
class CTimeStretchCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTimeStretchCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTreasureHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreasureHunterCard);
};

//____________________________________________________________________________
//
class CWhispersilkCloakCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWhispersilkCloakCard);
};

//____________________________________________________________________________
//
class CRobeOfMirrorsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRobeOfMirrorsCard);
};

//____________________________________________________________________________
//
class CRazormaneMasticoreCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRazormaneMasticoreCard);
};

//____________________________________________________________________________
//
class CTerramorphicExpanseCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CTerramorphicExpanseCard);
};

//____________________________________________________________________________
//
class CFieldMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFieldMarshalCard);
};

//____________________________________________________________________________
//
class CChromaticStarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChromaticStarCard);
};

//____________________________________________________________________________
//
class CIcatianPriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIcatianPriestCard);
};

//____________________________________________________________________________
//
class CRageWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRageWeaverCard);
};

//____________________________________________________________________________
//
class CKarplusanStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarplusanStriderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShuntCard : public CCard
{
	DECLARE_CARD_CSTOR(CShuntCard);
};

//____________________________________________________________________________
//
class CShivanHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanHellkiteCard);
};

//____________________________________________________________________________
//
class CStunCard : public CCard
{
	DECLARE_CARD_CSTOR(CStunCard);
};

//____________________________________________________________________________
//
class CViashinoRunnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoRunnerCard);
};

//____________________________________________________________________________
//
class CDelugeCard : public CCard
{
	DECLARE_CARD_CSTOR(CDelugeCard);
};

//____________________________________________________________________________
//
class CDoomedNecromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoomedNecromancerCard);
};

//____________________________________________________________________________
//
class CCondemnCard : public CCard
{
	DECLARE_CARD_CSTOR(CCondemnCard);
};

//____________________________________________________________________________
//
class CViashinoSandscoutCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoSandscoutCard);
};

//____________________________________________________________________________
//
class CThrullSurgeonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrullSurgeonCard);
};

//____________________________________________________________________________
//
class CSylvanScryingCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSylvanScryingCard);
};

//____________________________________________________________________________
//
class CSnappingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSnappingDrakeCard);
};

//____________________________________________________________________________
//
class CSkyhunterPatrolCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyhunterPatrolCard);
};

//____________________________________________________________________________
//
class CSkyWeaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyWeaverCard);
};

//____________________________________________________________________________
//
class CShimmeringWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CShimmeringWingsCard);
};

//____________________________________________________________________________
//
class CPithingNeedleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPithingNeedleCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSteelGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelGolemCard);
};

//____________________________________________________________________________
//
class CStrongholdDisciplineCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrongholdDisciplineCard);
};

//____________________________________________________________________________
//
class CFaerieConclaveCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CFaerieConclaveCard);
};

//____________________________________________________________________________
//
class CForbiddingWatchtowerCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CForbiddingWatchtowerCard);
};

//____________________________________________________________________________
//
class CSpawningPoolCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CSpawningPoolCard);
};

//____________________________________________________________________________
//
class CGhituEncampmentCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGhituEncampmentCard);
};

//____________________________________________________________________________
//
class CTreetopVillageCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CTreetopVillageCard);
};

//____________________________________________________________________________
//
class COverrunCard : public CCard 
{
	DECLARE_CARD_CSTOR(COverrunCard);
};

//____________________________________________________________________________
//
class CPrimalRageCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CPrimalRageCard);
};

//____________________________________________________________________________
//
class CRootwaterCommandoCard : public CLandwalkCreatureCard 
{
	DECLARE_CARD_CSTOR(CRootwaterCommandoCard);
};

//____________________________________________________________________________
//
class CRockBadgerCard : public CLandwalkCreatureCard 
{
	DECLARE_CARD_CSTOR(CRockBadgerCard);
};

//____________________________________________________________________________
//
class CSylvanBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanBasiliskCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CSqueeGoblinNabobCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSqueeGoblinNabobCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBenalishKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishKnightCard);
};

//____________________________________________________________________________
//
class CTangleSpiderCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CTangleSpiderCard);
};

//____________________________________________________________________________
//
class CUncontrollableAngerCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CUncontrollableAngerCard);
};

//____________________________________________________________________________
//
class CAncestorsChosenCard : public CFirstStrikeCreatureCard 
{
	DECLARE_CARD_CSTOR(CAncestorsChosenCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CAngelicChorusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicChorusCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKnightOfDuskCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CKnightOfDuskCard);
};

//____________________________________________________________________________
//
class CBogardanFirefiendCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CBogardanFirefiendCard);
};

//____________________________________________________________________________
//
class CAscendantEvincarCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAscendantEvincarCard);
};

//____________________________________________________________________________
//
class CCivicWayfinderCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CCivicWayfinderCard);
};

//____________________________________________________________________________
//
class CSkyshroudRangerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSkyshroudRangerCard);
};

//____________________________________________________________________________
//
class CSiegeGangCommanderCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CSiegeGangCommanderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBeaconOfDestructionCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBeaconOfDestructionCard);
};

//____________________________________________________________________________
//
class CLavabornMuseCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CLavabornMuseCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSunkenHopeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSunkenHopeCard);
};

//____________________________________________________________________________
//
class CReyaDawnbringerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CReyaDawnbringerCard);
};

//____________________________________________________________________________
//
class CStampedingWildebeestsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CStampedingWildebeestsCard);
};

//____________________________________________________________________________
//
class CBeaconOfUnrestCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBeaconOfUnrestCard);
};

//____________________________________________________________________________
//
class CDenizenoftheDeepCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CDenizenoftheDeepCard);
};

//____________________________________________________________________________
//
class CLoyalSentryCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CLoyalSentryCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CCommuneWithNatureCard : public CCard 
{
	DECLARE_CARD_CSTOR(CCommuneWithNatureCard);
};

//____________________________________________________________________________
//
class CTellingTimeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CTellingTimeCard);
};

//____________________________________________________________________________
//
class CRelentlessRatsCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CRelentlessRatsCard);
};

//____________________________________________________________________________
//
class CTwitchCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwitchCard);
};

//____________________________________________________________________________
//
class CLlanowarSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarSentinelCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CProdigalPyromancerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CProdigalPyromancerCard);
};

//____________________________________________________________________________
//
class CTrollAsceticCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTrollAsceticCard);
};

//____________________________________________________________________________
//
class CSkyhunterSkirmisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyhunterSkirmisherCard);
};

//____________________________________________________________________________
//
class CAvatarOfMightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvatarOfMightCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCephalidConstableCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidConstableCard);

protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt, 
								 CWhenSelfDamageDealt::PlayerEventCallback,
								 &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CPlayer* pToPlayer, Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CHailOfArrowsCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHailOfArrowsCard);
};

//____________________________________________________________________________
//
class CJoinerAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJoinerAdeptCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CLegacyWeaponCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLegacyWeaponCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CScalpelexisCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScalpelexisCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfDamageDealt,
						CWhenSelfDamageDealt::PlayerEventCallback, 
						&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDiscombobulateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDiscombobulateCard);
};

//____________________________________________________________________________
//
class CGoblinLoreCard : public CCard
{
	DECLARE_CARD_CSTOR(CGoblinLoreCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CScoriaWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScoriaWurmCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CArcaneTeachingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CArcaneTeachingsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CGravebornMuseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravebornMuseCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBeaconOfImmortalityCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeaconOfImmortalityCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CVoiceOfAllCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfAllCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CardKeyword SelectedProtection;
};

//____________________________________________________________________________
//
class CSleeperAgentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSleeperAgentCard);
};

//____________________________________________________________________________
//
class CSoulblastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSoulblastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWindbornMuseCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindbornMuseCard);
};

//____________________________________________________________________________
//
class CNoRestForTheWickedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNoRestForTheWickedCard);
};

//____________________________________________________________________________
//
class CCitanulFluteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCitanulFluteCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWarpWorldCard : public CCard
{
	DECLARE_CARD_CSTOR(CWarpWorldCard);
};

//____________________________________________________________________________
//
class CDoublingCubeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDoublingCubeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CHighGroundCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHighGroundCard);
};

//____________________________________________________________________________
//
class CTwincastCard : public CCard
{
	DECLARE_CARD_CSTOR(CTwincastCard);
};

//____________________________________________________________________________
//
class CDuctCrawlerCard : public  CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CDuctCrawlerCard);

protected:
	CCountedCardContainer_		m_AffectedCards;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);
};

//____________________________________________________________________________
//
class CDreambornMuseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreambornMuseCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTimeStopCard : public CCard
{
	DECLARE_CARD_CSTOR(CTimeStopCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//