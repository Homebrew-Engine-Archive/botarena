#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CPollutedDeltaCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CPollutedDeltaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFloodedStrandCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFloodedStrandCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBloodstainedMireCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBloodstainedMireCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWindsweptHeathCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWindsweptHeathCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWoodedFoothillsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWoodedFoothillsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAnuridMurkdiverCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CAnuridMurkdiverCard);
};

//_____________________________________________________________________________
//
class CCabalArchonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalArchonCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCatapultMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCatapultMasterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDoubtlessOneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDoubtlessOneCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CNovaClericCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNovaClericCard);
};

//____________________________________________________________________________
//
class CRotlungReanimatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRotlungReanimatorCard);
};

//____________________________________________________________________________
//
class CSilvosRogueElementalCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSilvosRogueElementalCard);
};

//____________________________________________________________________________
//
class CWellwisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWellwisherCard);

	protected :
		CCardFilter m_ElfCardFilter;
};

//_____________________________________________________________________________
//
class CAphettoGrifterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAphettoGrifterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCatapultSquadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCatapultSquadCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSpurredWolverineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpurredWolverineCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAncestorsProphetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncestorsProphetCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGravespawnSovereignCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGravespawnSovereignCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSkirkFireMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkFireMarshalCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSupremeInquisitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSupremeInquisitorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVoiceOfTheWoodsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfTheWoodsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWretchedAnuridCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWretchedAnuridCard);
};

//____________________________________________________________________________
//
class CJarethLeonineTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJarethLeonineTitanCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CRavenousBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRavenousBalothCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRorixBladewingCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRorixBladewingCard);
};

//____________________________________________________________________________
//
class CGrasslandCrusaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrasslandCrusaderCard);
};

//____________________________________________________________________________
//
class CVisaraTheDreadfulCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVisaraTheDreadfulCard);
};

//____________________________________________________________________________
//
class CGoblinSharpshooterCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSharpshooterCard);
};

//____________________________________________________________________________
//
class CInfestCard : public CCard
{
	DECLARE_CARD_CSTOR(CInfestCard);
};

//____________________________________________________________________________
//
class CAkromasVengeanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CAkromasVengeanceCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class COversoldCemeteryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COversoldCemeteryCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CEnchantresssPresenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEnchantresssPresenceCard);
};

//____________________________________________________________________________
//
class CSoullessOneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoullessOneCard);
};

//____________________________________________________________________________
//
class CAccursedCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAccursedCentaurCard);
};

//____________________________________________________________________________
//
class CAirdropCondorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAirdropCondorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAphettoVultureCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAphettoVultureCard);
};

//____________________________________________________________________________
//
class CAvaraxCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAvaraxCard);
};

//____________________________________________________________________________
//
class CAvenBrigadierCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenBrigadierCard);
};

//____________________________________________________________________________
//
class CAvenFateshaperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenFateshaperCard);
};

//____________________________________________________________________________
//
class CBarkhideMaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBarkhideMaulerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCabalSlaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalSlaverCard);
};

//____________________________________________________________________________
//
class CCrowdFavoritesCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCrowdFavoritesCard);
};

//____________________________________________________________________________
//
class CDaruCavalierCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruCavalierCard);
};

//____________________________________________________________________________
//
class CDiscipleOfMaliceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfMaliceCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDiveBomberCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CDiveBomberCard);
};

//____________________________________________________________________________
//
class CElvishPathcutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishPathcutterCard);
};

//____________________________________________________________________________
//
class CElvishVanguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishVanguardCard);
};

//____________________________________________________________________________
//
class CEmbermageGoblinCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CEmbermageGoblinCard);
};

//____________________________________________________________________________
//
class CGangrenousGoliathCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGangrenousGoliathCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoblinPyromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinPyromancerCard);
};

//____________________________________________________________________________
//
class CGoblinSledderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSledderCard);
};

//____________________________________________________________________________
//
class CHeedlessOneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHeedlessOneCard);
};

//____________________________________________________________________________
//
class CKrosanGroundshakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanGroundshakerCard);
};

//____________________________________________________________________________
//
class CKrosanTuskerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanTuskerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLeeryFogbeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeeryFogbeastCard);
};

//____________________________________________________________________________
//
class CRecklessOneCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessOneCard);
};

//____________________________________________________________________________
//
class CRummagingWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRummagingWizardCard);
};

//____________________________________________________________________________
//
class CScreamingSeahawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScreamingSeahawkCard);
};

//____________________________________________________________________________
//
class CScreechingBuzzardCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingBuzzardCard);
};

//____________________________________________________________________________
//
class CSkirkProspectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkProspectorCard);
};

//____________________________________________________________________________
//
class CSlipstreamEelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlipstreamEelCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSymbioticBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSymbioticBeastCard);
};

//____________________________________________________________________________
//
class CSymbioticElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSymbioticElfCard);
};

//____________________________________________________________________________
//
class CSymbioticWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSymbioticWurmCard);
};

//____________________________________________________________________________
//
class CTemptingWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTemptingWurmCard);
};

//____________________________________________________________________________
//
class CUndeadGladiatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadGladiatorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWallOfMulchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfMulchCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWirewoodElfCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodElfCard);
};

//____________________________________________________________________________
//
class CWirewoodHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodHeraldCard);
};

//____________________________________________________________________________
//
class CWirewoodSavageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodSavageCard);
};

//____________________________________________________________________________
//
class CBarrenMoorCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CBarrenMoorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDaruEncampmentCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDaruEncampmentCard);
};

//____________________________________________________________________________
//
class CForgottenCaveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CForgottenCaveCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGoblinBurrowsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGoblinBurrowsCard);
};

//____________________________________________________________________________
//
class CGrandColiseumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGrandColiseumCard);
};

//____________________________________________________________________________
//
class CLonelySandbarCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CLonelySandbarCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRiptideLaboratoryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRiptideLaboratoryCard);
};

//____________________________________________________________________________
//
class CSeasideHavenCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSeasideHavenCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSecludedSteppeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSecludedSteppeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CTranquilThicketCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTranquilThicketCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CUnholyGrottoCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUnholyGrottoCard);
};

//____________________________________________________________________________
//
class CWirewoodLodgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWirewoodLodgeCard);
};

//____________________________________________________________________________
//
class CCentaurGladeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCentaurGladeCard);
};

//____________________________________________________________________________
//
class CDispersingOrbCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDispersingOrbCard);
};

//____________________________________________________________________________
//
class CImprovisedArmorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CImprovisedArmorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMythicProportionsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMythicProportionsCard);
};

//____________________________________________________________________________
//
class CRighteousCauseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRighteousCauseCard);
};

//____________________________________________________________________________
//
class CSandskinCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSandskinCard);
};

//____________________________________________________________________________
//
class CSharedTriumphCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSharedTriumphCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;
};

//____________________________________________________________________________
//
class CSigilOfTheNewDawnCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSigilOfTheNewDawnCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CAkromasBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CAkromasBlessingCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAuraExtractionCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAuraExtractionCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CChokingTethersCard : public CCard
{
	DECLARE_CARD_CSTOR(CChokingTethersCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CComplicateCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CComplicateCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCruelRevivalCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCruelRevivalCard);
};

//____________________________________________________________________________
//
class CDeathPulseCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathPulseCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CFadeFromMemoryCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFadeFromMemoryCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CFeverCharmCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFeverCharmCard);
};

//____________________________________________________________________________
//
class CMagesGuileCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CMagesGuileCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMiseryCharmCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CMiseryCharmCard);
};

//____________________________________________________________________________
//
class CPietyCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CPietyCharmCard);
};

//____________________________________________________________________________
//
class CPrimalBoostCard : public CCard
{
	DECLARE_CARD_CSTOR(CPrimalBoostCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRenewedFaithCard : public CCard
{
	DECLARE_CARD_CSTOR(CRenewedFaithCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSmotherCard : public CCard
{
	DECLARE_CARD_CSTOR(CSmotherCard);
};

//____________________________________________________________________________
//
class CSolarBlastCard : public CCard
{
	DECLARE_CARD_CSTOR(CSolarBlastCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CStarstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CStarstormCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSunfireBalmCard : public CCard
{
	DECLARE_CARD_CSTOR(CSunfireBalmCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CVitalityCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CVitalityCharmCard);
};

//____________________________________________________________________________
//
class CAirborneAidCard : public CCard
{
	DECLARE_CARD_CSTOR(CAirborneAidCard);
};

//____________________________________________________________________________
//
class CDirgeOfDreadCard : public CCard
{
	DECLARE_CARD_CSTOR(CDirgeOfDreadCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CEssenceFractureCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CEssenceFractureCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CExplosiveVegetationCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CExplosiveVegetationCard);
};

//____________________________________________________________________________
//
class CSearingFleshCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSearingFleshCard);
};

//____________________________________________________________________________
//
class CSliceAndDiceCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSliceAndDiceCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWaveOfIndifferenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CWaveOfIndifferenceCard);
};

//____________________________________________________________________________
//
class CGigapedeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGigapedeCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CConvalescentCareCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConvalescentCareCard);

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

			if (pPlayer->GetLife() > Life(5))
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CConvalescentCareCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPsychicTranceCard : public CCard
{
	DECLARE_CARD_CSTOR(CPsychicTranceCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CGoblinPiledriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinPiledriverCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShaleskinBruiserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShaleskinBruiserCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSparksmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSparksmithCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeathMatchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeathMatchCard);
};

//____________________________________________________________________________
//
class CStarlitSanctumCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CStarlitSanctumCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener2;

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPinpointAvalancheCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPinpointAvalancheCard);
};

//____________________________________________________________________________
//
class CEntrailsFeasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEntrailsFeasterCard);
};

//____________________________________________________________________________
//
class CLightningRiftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLightningRiftCard);
};

//____________________________________________________________________________
//
class CAstralSlideCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAstralSlideCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
//class CCommandoRaidCard : public CCard
//{
//	DECLARE_CARD_CSTOR(CCommandoRaidCard);
//
//protected:
//	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
//	typedef 
//		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt,
//									CWhenSelfDamageDealt::PlayerEventCallback,
//									&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
//	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
//};
//
////____________________________________________________________________________
////
class CFutureSightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFutureSightCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CWirewoodPrideCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWirewoodPrideCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COblationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(COblationCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRunWildCard : public CCard
{
	DECLARE_CARD_CSTOR(CRunWildCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CAphettoAlchemistCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAphettoAlchemistCard);
};

//____________________________________________________________________________
//
class CBirchloreRangersCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBirchloreRangersCard);

protected :
	CCardFilter m_ElfCardFilter;
};

//____________________________________________________________________________
//
class CExaltedAngelCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CExaltedAngelCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CNosyGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNosyGoblinCard);
};

//____________________________________________________________________________
//
class CAscendingAvenCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAscendingAvenCard);
};

//____________________________________________________________________________
//
class CBatteringCraghornCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBatteringCraghornCard);
};

//____________________________________________________________________________
//
class CBlisteringFirecatCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBlisteringFirecatCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CBoneknitterCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBoneknitterCard);
};

//____________________________________________________________________________
//
class CBroodhatchNantukoCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodhatchNantukoCard);

protected:
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
class CCabalExecutionerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalExecutionerCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CChargingSlatebackCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingSlatebackCard);
};

//____________________________________________________________________________
//
class CCrudeRampartCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CCrudeRampartCard);
};

//____________________________________________________________________________
//
class CDaruHealerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruHealerCard);
};

//____________________________________________________________________________
//
class CDaruLancerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruLancerCard);
};

//____________________________________________________________________________
//
class CDawningPuristCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDawningPuristCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CPlayer* pPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CDisruptivePitmageCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDisruptivePitmageCard);
};

//____________________________________________________________________________
//
class CDwarvenBlastminerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenBlastminerCard);
};

//____________________________________________________________________________
//
class CFallenClericCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CFallenClericCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFoothillGuideCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CFoothillGuideCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoblinTaskmasterCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinTaskmasterCard);
};

//____________________________________________________________________________
//
class CGravelSlingerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CGravelSlingerCard);
};

//____________________________________________________________________________
//
class CGrinningDemonCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CGrinningDemonCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
								CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CHauntedCadaverCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CHauntedCadaverCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
								CPlayer* pPlayer, Damage damage) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHeadhunterCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CHeadhunterCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
								CPlayer* pPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CHystrodonCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CHystrodonCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
								CPlayer* pPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CIronfistCrusherCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CIronfistCrusherCard);
};

//____________________________________________________________________________
//
class CKrosanColossusCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanColossusCard);
};

//____________________________________________________________________________
//
//class CNamelessOneCard : public CMorphCreatureCard
//{
//	DECLARE_CARD_CSTOR(CNamelessOneCard);
//
//protected:
//	bool SetTriggerContext(CTriggeredChgPwrTghWhenCardPlayedAbility::TriggerContextType& triggerContext,
//								CPlayer* pPlayer, Damage damage) const;
//};

//____________________________________________________________________________
//
class CRiptideBiologistCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptideBiologistCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSerpentineBasiliskCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSerpentineBasiliskCard);

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
class CSilentSpecterCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentSpecterCard);

protected:
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
								CPlayer* pPlayer, Damage damage) const;
};

//____________________________________________________________________________
//
class CSnarlingUndorakCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSnarlingUndorakCard);
};

//____________________________________________________________________________
//
class CSpinedBasherCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinedBasherCard);
};

//____________________________________________________________________________
//
class CSpittingGournaCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSpittingGournaCard);
};

//____________________________________________________________________________
//
class CToweringBalothCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CToweringBalothCard);
};

//____________________________________________________________________________
//
class CTreespringLorianCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CTreespringLorianCard);
};

//____________________________________________________________________________
//
class CVenomspoutBrackusCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CVenomspoutBrackusCard);
};

//____________________________________________________________________________
//
class CVoidmageProdigyCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CVoidmageProdigyCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWhipcorderCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWhipcorderCard);
};

//____________________________________________________________________________
//
class CBattlefieldMedicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlefieldMedicCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CProfanePrayersCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CProfanePrayersCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CContestedCliffsCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CContestedCliffsCard);

protected:
	class CContestedCliffsSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
		CContestedCliffsSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CContestedCliffsSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CThoughtboundPrimocCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtboundPrimocCard);

protected:
    CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CInsurrectionCard : public CCard
{
	DECLARE_CARD_CSTOR(CInsurrectionCard);
};

//____________________________________________________________________________
//
class CUnifiedStrikeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUnifiedStrikeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAEtherChargeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherChargeCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBrightstoneRitualCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrightstoneRitualCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CShepherdOfRotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShepherdOfRotCard);

protected:
	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFeedingFrenzyCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFeedingFrenzyCard);

protected:
	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGustcloakHarrierCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGustcloakHarrierCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGustcloakRunnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGustcloakRunnerCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGustcloakSaviorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGustcloakSaviorCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockedEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGustcloakSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGustcloakSentinelCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGustcloakSkirmisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGustcloakSkirmisherCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CProwlingPangolinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CProwlingPangolinCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pController);
	void Advance(int PlayerID, CPlayer* pController);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CSyphonMindCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSyphonMindCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CReadTheRunesCard : public CCard
{
	DECLARE_CARD_CSTOR(CReadTheRunesCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};
//____________________________________________________________________________
//
class CDoomCannonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDoomCannonCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	SingleCreatureType SelectedType;
	CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CErraticExplosionCard : public CCard
{
	DECLARE_CARD_CSTOR(CErraticExplosionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGoblinMachinistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMachinistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKaboomCard : public CCard
{
	DECLARE_CARD_CSTOR(CKaboomCard);

protected:
	CSelectionSupport m_PlayerSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnPlayerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void SelectPlayer(CPlayer* pController);

	CPlayerContainer pTargets;
};

//____________________________________________________________________________
//
class CRiptideShapeshifterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptideShapeshifterCard);

protected:
	CSelectionSupport m_CreatureTypeSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCreatureTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CKamahlsSummonsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CKamahlsSummonsCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(int PlayerID);
	void Advance(int PlayerID);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCoverOfDarknessCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCoverOfDarknessCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;
};

//____________________________________________________________________________
//
class CSteelyResolveCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSteelyResolveCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	SingleCreatureType SelectedType;
};

//____________________________________________________________________________
//
class CInformationDealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInformationDealerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CThunderOfHoovesCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CThunderOfHoovesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStagBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStagBeetleCard);

protected:
	CCardFilter m_CardFilter;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
};

//____________________________________________________________________________
//
class CKamahlFistOfKrosaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKamahlFistOfKrosaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CIxidorsWillCard : public CCard
{
	DECLARE_CARD_CSTOR(CIxidorsWillCard);

protected:
	class CIxidorsWillAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CIxidorsWillAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CIxidorsWillAbility() {}
	};
};

//____________________________________________________________________________
//
class CBlatantThieveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CBlatantThieveryCard);
};

//____________________________________________________________________________
//
class CAggravatedAssaultCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAggravatedAssaultCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRiptideReplicatorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRiptideReplicatorCard);

protected:
	VIRTUAL(void, OnColorSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;

	VIRTUAL(void, OnCreatureTypeSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_CreatureTypeSelection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	SingleCreatureType SelectedType;

	bool BeforeResolution(CAbilityAction* pAction) const;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener1;	// Listen to this card's zone changes

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener2;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CAnimalMagnetismCard : public CCard
{
	DECLARE_CARD_CSTOR(CAnimalMagnetismCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_OpponentSelection;
	void OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CCountedCardContainer_ pCreatures;
};

//____________________________________________________________________________
//
class CManaEchoesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CManaEchoesCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	CSelectionSupport m_Selection;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CGraxiplonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGraxiplonCard);
};

//____________________________________________________________________________
//
