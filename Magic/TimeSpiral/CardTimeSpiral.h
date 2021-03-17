#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBonesplitterSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBonesplitterSliverCard);
};

//____________________________________________________________________________
//
class CBrassGnatCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBrassGnatCard);
};

//____________________________________________________________________________
//
class CMagusOfTheDiskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheDiskCard);
};

//____________________________________________________________________________
//
class CMightSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMightSliverCard);
};

//____________________________________________________________________________
//
class CSpinneretSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinneretSliverCard);
};

//____________________________________________________________________________
//
class CTwoHeadedSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTwoHeadedSliverCard);
};

//____________________________________________________________________________
//
class CVensersSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVensersSliverCard);
};

//____________________________________________________________________________
//
class CWatcherSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWatcherSliverCard);
};

//____________________________________________________________________________
//
class CAncientGrudgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CAncientGrudgeCard);
};

//_____________________________________________________________________________
//
class CDreadReturnCard : public CCard
{
	DECLARE_CARD_CSTOR(CDreadReturnCard);
};

//_____________________________________________________________________________
//
class CGazeOfJusticeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGazeOfJusticeCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CThinkTwiceCard : public CCard
{
	DECLARE_CARD_CSTOR(CThinkTwiceCard);
};

//_____________________________________________________________________________
//
class CThrillOfTheHuntCard : public CCard
{
	DECLARE_CARD_CSTOR(CThrillOfTheHuntCard);
};

//_____________________________________________________________________________
//
class CAcademyRuinsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAcademyRuinsCard);
};

//______________________________________________________________________________
//
class CFlagstonesofTrokairCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFlagstonesofTrokairCard);
};

//________________________________________________________________________________
//
class CAmrouScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmrouScoutCard);

protected:
	CCardFilter m_CardFilter;
};

//________________________________________________________________________________
//
class CAmrouSeekersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmrouSeekersCard);
};

//________________________________________________________________________________
//
class CAshcoatBearCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshcoatBearCard);
};

//________________________________________________________________________________
//
class CAspectofMongooseCard : public CCard 
{
	DECLARE_CARD_CSTOR(CAspectofMongooseCard);
};

//_________________________________________________________________________________
//
class CAssemblyWorkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAssemblyWorkerCard);
};

//_________________________________________________________________________________
//
class CBarbedShockerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CBarbedShockerCard);
};

//_________________________________________________________________________________
//
class CBasaltGargoyleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBasaltGargoyleCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________________
//
class CBewilderCard : public CCard 
{
	DECLARE_CARD_CSTOR(CBewilderCard);
};

//_____________________________________________________________________________________
//
class CBogardanRagerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBogardanRagerCard);
};

//______________________________________________________________________________________
//
class CAvalancheRidersCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CAvalancheRidersCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//________________________________________________________________________________________
//
class CCastleRaptorsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCastleRaptorsCard);
};

//________________________________________________________________________________________
//
class CCloudchaserKestrelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudchaserKestrelCard);
};

//________________________________________________________________________________________
//
class CDAvenantHealerCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CDAvenantHealerCard);
};

//_________________________________________________________________________________________
//
class CDemonicCollusionCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CDemonicCollusionCard);

protected:
	CCardFilter m_CardFilter;
};

//__________________________________________________________________________________________
//
class CCDreamStalkerCardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCDreamStalkerCardCard);
};

//__________________________________________________________________________________________
//
class CDrudgeReaversCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDrudgeReaversCard);
};

//__________________________________________________________________________________________
//
class CDreamStalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamStalkerCard);
};

//____________________________________________________________________________________________
//
class CDurkwoodTrackerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDurkwoodTrackerCard);
};

//___________________________________________________________________________________________
//
class CErrantDoomsayersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CErrantDoomsayersCard);
};

//___________________________________________________________________________________________
//
class CEternitySnareCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEternitySnareCard);
};

//___________________________________________________________________________________________
//
class CFeeblenessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFeeblenessCard);
};

//_____________________________________________________________________________________________
//
class CFiremawKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFiremawKavuCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//_____________________________________________________________________________________________
//
class CFlamecoreElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamecoreElementalCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CFlowstoneChannelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneChannelerCard);
};

//_______________________________________________________________________________________________
//
class CMightOfOldKrosaCard : public CCard
{
	DECLARE_CARD_CSTOR(CMightOfOldKrosaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlagueSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBasalSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBasalSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCelestialCrusaderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCelestialCrusaderCard);
};

//_______________________________________________________________________________________________
//
class CEvilEyeOfUrborgCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEvilEyeOfUrborgCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CFirewakeSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFirewakeSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CForiysianInterceptorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CForiysianInterceptorCard);
};

//_______________________________________________________________________________________________
//
class CFungusSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFungusSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CFurySliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFurySliverCard);
};

//_______________________________________________________________________________________________
//
class CGemhideSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGemhideSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CGoblinSkycutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSkycutterCard);
};

//_______________________________________________________________________________________________
//
class CGreenseekerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreenseekerCard);
};

//_______________________________________________________________________________________________
//
class CHavenwoodWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHavenwoodWurmCard);
};

//_______________________________________________________________________________________________
//
class CHerdGnarrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHerdGnarrCard);
};

//_______________________________________________________________________________________________
//
class CIcatianCrierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIcatianCrierCard);
};

//_______________________________________________________________________________________________
//
class CIronclawBuzzardiersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CIronclawBuzzardiersCard);
};

//_______________________________________________________________________________________________
//
class CJayaBallardTaskMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJayaBallardTaskMageCard);
};

//_______________________________________________________________________________________________
//
class CJeditsDragoonsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJeditsDragoonsCard);
};

//_______________________________________________________________________________________________
//
class CMagusOfTheCandelabraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheCandelabraCard);
};

//_______________________________________________________________________________________________
//
class CMagusOfTheMirrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheMirrorCard);
};

//_______________________________________________________________________________________________
//
class CMoggWarMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoggWarMarshalCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CPendelhavenElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPendelhavenElderCard);
};

//_______________________________________________________________________________________________
//
class CPenumbraSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPenumbraSpiderCard);
};

//_______________________________________________________________________________________________
//
class CPsionicSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPsionicSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CQuilledSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuilledSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSageOfEpityrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSageOfEpityrCard);
};

//_______________________________________________________________________________________________
//
class CSangrophageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSangrophageCard);

protected:
	CSelectionSupport m_PaymentSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPaymentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_______________________________________________________________________________________________
//
class CScarwoodTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScarwoodTreefolkCard);
};

//_______________________________________________________________________________________________
//
class CScreechingSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScreechingSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSedgeSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSedgeSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CSkitteringMonstrosityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkitteringMonstrosityCard);
};

//_______________________________________________________________________________________________
//
class CSpiketailDrakelingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiketailDrakelingCard);
};

//_______________________________________________________________________________________________
//
class CSpriteNobleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpriteNobleCard);
};

//_______________________________________________________________________________________________
//
class CStormcloudDjinnCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CStormcloudDjinnCard);
};

//_______________________________________________________________________________________________
//
class CSubterraneanShamblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSubterraneanShamblerCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//_______________________________________________________________________________________________
//
class CTectonicFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTectonicFiendCard);

private:
	bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
						CNode* pToNode) const;
	CCard* CreateTemporaryAbility();
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//_______________________________________________________________________________________________
//
class CTelekineticSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTelekineticSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CTivadarOfThornCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CTivadarOfThornCard);
};

//____________________________________________________________________________
//
class CTolarianSentinelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTolarianSentinelCard);
};

//_______________________________________________________________________________________________
//
class CUnyaroBeesCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CUnyaroBeesCard);
};

//_______________________________________________________________________________________________
//
class CUrborgSyphonMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgSyphonMageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_______________________________________________________________________________________________
//
class CVampiricSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampiricSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//_______________________________________________________________________________________________
//
class CViashinoBladescoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoBladescoutCard);
};

//_______________________________________________________________________________________________
//
class CViscidLemuresCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CViscidLemuresCard);
};

//_______________________________________________________________________________________________
//
class CWormwoodDryadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWormwoodDryadCard);
};

//_______________________________________________________________________________________________
//
class CKherKeepCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKherKeepCard);
};

//_______________________________________________________________________________________________
//
class CSwarmyardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSwarmyardCard);
};

//_______________________________________________________________________________________________
//
class CUrzasFactoryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUrzasFactoryCard);
};

//_______________________________________________________________________________________________
//
class CForiysianTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CForiysianTotemCard);
};

//_______________________________________________________________________________________________
//
class CPrismaticLensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrismaticLensCard);
};

//_______________________________________________________________________________________________
//
class CThunderTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThunderTotemCard);
};

//_______________________________________________________________________________________________
//
class CGhituFirebreathingCard : public CCard
{
	DECLARE_CARD_CSTOR(CGhituFirebreathingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//_______________________________________________________________________________________________
//
class COphidianEyeCard : public CCard
{
	DECLARE_CARD_CSTOR(COphidianEyeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSpiritLoopCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpiritLoopCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CUndyingRageCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CUndyingRageCard);
};

//____________________________________________________________________________
//
class CFortifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CFortifyCard);
};

//____________________________________________________________________________
//
class CKrosanGripCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CKrosanGripCard);
};

//____________________________________________________________________________
//
class CLightningAxeCard : public CCard
{
	DECLARE_CARD_CSTOR(CLightningAxeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COrcishCannonadeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(COrcishCannonadeCard);
};

//____________________________________________________________________________
//
class CSnapbackCard : public CCard
{
	DECLARE_CARD_CSTOR(CSnapbackCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSpellBurstCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSpellBurstCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CSproutCard : public CCard
{
	DECLARE_CARD_CSTOR(CSproutCard);
};

//____________________________________________________________________________
//
class CSquallLineCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSquallLineCard);
};

//____________________________________________________________________________
//
class CStonewoodInvocationCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CStonewoodInvocationCard);
};

//____________________________________________________________________________
//
class CStranglingSootCard : public CCard
{
	DECLARE_CARD_CSTOR(CStranglingSootCard);
};

//____________________________________________________________________________
//
class CSuddenDeathCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSuddenDeathCard);
};

//____________________________________________________________________________
//
class CSuddenShockCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSuddenShockCard);
};

//____________________________________________________________________________
//
class CWipeAwayCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CWipeAwayCard);
};

//____________________________________________________________________________
//
class CWordOfSeizingCard : public CCard
{
	DECLARE_CARD_CSTOR(CWordOfSeizingCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMwonvuliAcidMossCard : public CCard
{
	DECLARE_CARD_CSTOR(CMwonvuliAcidMossCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTemporalEddyCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTemporalEddyCard);
};

//____________________________________________________________________________
//
class CTrompTheDomainsCard : public CCard
{
	DECLARE_CARD_CSTOR(CTrompTheDomainsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeathsporeThallidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathsporeThallidCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSavageThallidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavageThallidCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThallidGerminatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThallidGerminatorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThallidShellDwellerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThallidShellDwellerCard);
};

//____________________________________________________________________________
//
class CPitKeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPitKeeperCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
				 			CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPrimalForcemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimalForcemageCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSengirNosferatuCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSengirNosferatuCard);
};

//____________________________________________________________________________
//
class CStonebrowKrosanHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonebrowKrosanHeroCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CTriskelavusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTriskelavusCard);
};

//____________________________________________________________________________
//
class CWalkTheAeonsCard : public CCard
{
	DECLARE_CARD_CSTOR(CWalkTheAeonsCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CDrainingWhelkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDrainingWhelkCard);

protected:

	class TriggeredAbility :
		public TTriggeredTargetAbility< CTriggeredAbility<>, 
		CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > 
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		TriggeredAbility(CCard* pCard)
			: TTriggeredTargetAbility(pCard)
		{ 
		}

		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pPlayer, CTriggeredAction* pAction) 
		{
			if (!__super::ResolveSelection(pPlayer, pAction))
				return FALSE;

			counted_ptr<CActivatedAbility<CCounterSpell>>
				cpAbility(CreateResolutionAbility<CActivatedAbility<CCounterSpell>>(
				pPlayer, 
				new SpecificCardComparer(pAction->GetAssociatedCard())));


			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;
			
			return cpAbility->Resolve((CAbilityAction*)(apActions->GetAt(0).GetPointer()));
		}
	};
private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CAEtherflameWallCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAEtherflameWallCard);
};

//____________________________________________________________________________
//
class CDrifterIlDalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrifterIlDalCard);
};

//____________________________________________________________________________
//
class CFacelessDevourerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFacelessDevourerCard);

protected:
	CCountedCardContainer_ pExiled;

	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLooterIlKorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLooterIlKorCard);
};

//____________________________________________________________________________
//
class CShadowSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowSliverCard);
};

//____________________________________________________________________________
//
class CTrespasserIlVecCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTrespasserIlVecCard);
};

//____________________________________________________________________________
//
class CAEtherWebCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CAEtherWebCard);
};

//____________________________________________________________________________
//
class CTemporalIsolationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTemporalIsolationCard);
};

//____________________________________________________________________________
//
class CTraitorsClutchCard : public CCard
{
	DECLARE_CARD_CSTOR(CTraitorsClutchCard);
};

//____________________________________________________________________________
//
class CScrybRangerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScrybRangerCard);
};

//____________________________________________________________________________
//
class CVerdantEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CVerdantEmbraceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CNorinTheWaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNorinTheWaryCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CSporesowerThallidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSporesowerThallidCard);
};

//____________________________________________________________________________
//
class CSpectralForceCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralForceCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBenalishCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenalishCavalryCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CBlazingBladeAskariCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlazingBladeAskariCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CCavalryMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCavalryMasterCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class COutriderEnKorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COutriderEnKorCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CSidewinderSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSidewinderSliverCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSkulkingKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkulkingKnightCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CGhostflameSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostflameSliverCard);
};

//____________________________________________________________________________
//
class CIbHalfheartGoblinTacticianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIbHalfheartGoblinTacticianCard);
	
private:
	typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockedEventCallback> TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											  CCreatureCard* pCreature) const;
};

//____________________________________________________________________________
//
class CPhantomWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomWurmCard);

protected:
	typedef
	TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomWurmCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CChronosavantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChronosavantCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CNetherTraitorCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CNetherTraitorCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class COpalineSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COpalineSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

private:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
									   CCard* pToCard, CPlayer* byPlayer) const;
};

//____________________________________________________________________________
//
class CCrookclawTransmuterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCrookclawTransmuterCard);
};

//____________________________________________________________________________
//
class CHarmonicSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarmonicSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CStrengthInNumbersCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrengthInNumbersCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMomentaryBlinkCard : public CCard
{
	DECLARE_CARD_CSTOR(CMomentaryBlinkCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CMoonlaceCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoonlaceCard);
};

//____________________________________________________________________________
//
class CChildrenOfKorlisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChildrenOfKorlisCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEndrekSahrMasterBreederCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEndrekSahrMasterBreederCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, 
							CCard* pCard) const;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFlickeringSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFlickeringSpiritCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CManaSkimmerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CManaSkimmerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMindlashSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindlashSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFallenIdealCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFallenIdealCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CChronatogTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChronatogTotemCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_______________________________________________________________________________________________
//
class CPhyrexianTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianTotemCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenDamageDealt,
								  CWhenDamageDealt::CreatureEventCallback,
								  &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//_______________________________________________________________________________________________
//
class CCarefulConsiderationCard : public CCard
{
	DECLARE_CARD_CSTOR(CCarefulConsiderationCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//_______________________________________________________________________________________________
//
class CHauntingHymnCard : public CCard
{
	DECLARE_CARD_CSTOR(CHauntingHymnCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_______________________________________________________________________________________________
//
class CMysticalTeachingsCard : public CCard
{
	DECLARE_CARD_CSTOR(CMysticalTeachingsCard);

protected:
	CCardFilter m_CardFilter;
};

//_______________________________________________________________________________________________
//
class CReturnToDustCard : public CCard
{
	DECLARE_CARD_CSTOR(CReturnToDustCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_______________________________________________________________________________________________
//
class CAngelsGraceCard : public CCard
{
	DECLARE_CARD_CSTOR(CAngelsGraceCard);
};

//____________________________________________________________________________
//
class CCoalStokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoalStokerCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	BOOL_ m_bHandStack;
};

//____________________________________________________________________________
//
class CEmptyTheWarrensCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmptyTheWarrensCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CGrapeshotCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrapeshotCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CGroundRiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CGroundRiftCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CVolcanicAwakeningCard : public CCard
{
	DECLARE_CARD_CSTOR(CVolcanicAwakeningCard);

private: 
	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CTeferiMageOfZhalfirCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTeferiMageOfZhalfirCard);
};

//____________________________________________________________________________
//
class CSulfurousBlastCard : public CCard
{
	DECLARE_CARD_CSTOR(CSulfurousBlastCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMagusoftheScrollCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusoftheScrollCard);
};

//____________________________________________________________________________
//
class CLotusBloomCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLotusBloomCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	typedef
		TTriggeredAbility< CTriggeredSuspendCastAbility, CWhenTimeCounterRemoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	bool SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;

	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSuspendCard : public CCard
{
protected:
	CSuspendCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,									 
									 LPCTSTR suspendstrCostText,
									 int suspendNumber);

	virtual ~CSuspendCard() {}


protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	typedef
		TTriggeredAbility< CTriggeredSuspendCastAbility, CWhenTimeCounterRemoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	bool SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CCurseOfTheCabalCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CCurseOfTheCabalCard);

private:
	CCardFilter m_CardFilter1;
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility3;
	TriggeredAbility3* m_pTriggeredAbility1;
protected:
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution4(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CRiftBoltCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CRiftBoltCard);
};

//____________________________________________________________________________
//
class CSuspendCreatureCard : public CCreatureCard
{
protected:
	CSuspendCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
									 LPCTSTR strCostText, Power nPower, Life nToughness,
									 LPCTSTR suspendstrCostText,
									 int suspendNumber);

	virtual ~CSuspendCreatureCard() {}


private:
	CCardFlagModifier m_CardFlagModifier1;
protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged  > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CNode* pToNode) const;
	typedef
		TTriggeredAbility< CTriggeredSuspendCastAbility, CWhenTimeCounterRemoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	bool SetTriggerContextS2(CTriggeredSuspendCastAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CDurkwoodBalothCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CDurkwoodBalothCard);
};

//____________________________________________________________________________
//
class CAncestralVisionCard : public CSuspendCard 
{
	DECLARE_CARD_CSTOR(CAncestralVisionCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCorpulentCorpseCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpulentCorpseCard);
};

//____________________________________________________________________________
//
class CDeepSeaKrakenCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CDeepSeaKrakenCard);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCastAny  > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const;
};

//____________________________________________________________________________
//
class CDuskriderPeregrineCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskriderPeregrineCard);
};

//____________________________________________________________________________
//
class CDivineCongregationCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CDivineCongregationCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CErrantEphemeronCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CErrantEphemeronCard);
};

//____________________________________________________________________________
//
class CGreaterGargadonCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CGreaterGargadonCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPullFromEternityCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPullFromEternityCard);
};

//____________________________________________________________________________
//
class CIthHighArcanistCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CIthHighArcanistCard);
};

//____________________________________________________________________________
//
class CIvoryGiantCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CIvoryGiantCard);
};

//____________________________________________________________________________
//
class CKeldonHalberdierCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CKeldonHalberdierCard);
};

//____________________________________________________________________________
//
class CLivingEndCard : public CSuspendCard 
{
	DECLARE_CARD_CSTOR(CLivingEndCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMindstabCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CMindstabCard);
};

//____________________________________________________________________________
//
class CNantukoShamanCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoShamanCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPardicDragonCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CPardicDragonCard);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCastAny  > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const;
};

//____________________________________________________________________________
//
class CPhthisisCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CPhthisisCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPlunderCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CPlunderCard);
};

//____________________________________________________________________________
//
class CRestoreBalanceCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CRestoreBalanceCard);

private:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility3;
	bool SetTriggerContext1(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext4(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext5(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext6(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						    CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	TriggeredAbility3* m_pTriggeredAbility1;
	TriggeredAbility3* m_pTriggeredAbility2;
	TriggeredAbility3* m_pTriggeredAbility3;
	TriggeredAbility3* m_pTriggeredAbility4;
	
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSearchforTomorrowCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CSearchforTomorrowCard);
};

//____________________________________________________________________________
//
class CWheelofFateCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CWheelofFateCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHypergenesisCard : public CSuspendCard
{
	DECLARE_CARD_CSTOR(CHypergenesisCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGorgonRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGorgonRecluseCard);

private:
	BOOL CanPlay1(BOOL bIncludeTricks);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
			CWhenSelfAttackedBlocked::BlockEventCallback2,
			&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEachTimeEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CVisceridDeepwalkerCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CVisceridDeepwalkerCard);
};

//____________________________________________________________________________
//
class CRiftwingCloudskateCard : public CSuspendCreatureCard
{
	DECLARE_CARD_CSTOR(CRiftwingCloudskateCard);
};

//____________________________________________________________________________
//
class CDarkWitheringCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDarkWitheringCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CCallToTheNetherworldCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCallToTheNetherworldCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CMolderCard : public CCard
{
	DECLARE_CARD_CSTOR(CMolderCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGriffinGuideCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGriffinGuideCard);
};

//____________________________________________________________________________
//
class CTheloniteHermitCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CTheloniteHermitCard);
};

//____________________________________________________________________________
//
class CFathomSeerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CFathomSeerCard);
};

//____________________________________________________________________________
//
class CBrineElementalCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBrineElementalCard);
};

//____________________________________________________________________________
//
class CFledglingMawcorCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CFledglingMawcorCard);
};

//____________________________________________________________________________
//
class CFoolsDemiseCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFoolsDemiseCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
//class CConflagrateCard : public CCard
//{
//	DECLARE_CARD_CSTOR(CConflagrateCard);
//
//protected:
//	bool BeforeResolution(CAbilityAction* pAction) const;
//};

//_____________________________________________________________________________
//
class CLimDulTheNecromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLimDulTheNecromancerCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CKaervekTheMercilessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKaervekTheMercilessCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CHivestoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHivestoneCard);
};

//____________________________________________________________________________
//
class CReiterateCard : public CCard
{
	DECLARE_CARD_CSTOR(CReiterateCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
private: 
	CManaCost	m_BuybackCost;
};

//____________________________________________________________________________
//
class CStrongholdOverseerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStrongholdOverseerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGustcloakCavalierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGustcloakCavalierCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWeatherseedTotemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWeatherseedTotemCard);

protected:
	bool CWeatherseedTotemCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool CWeatherseedTotemCard::BeforeResolution(CAbilityAction* pAction);
};

//_______________________________________________________________________________________________
//
class CMangaraOfCorondorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMangaraOfCorondorCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CParadisePlumeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CParadisePlumeCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;


	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	BOOL CanPlayW(BOOL bIncludeTricks);
	BOOL CanPlayU(BOOL bIncludeTricks);
	BOOL CanPlayB(BOOL bIncludeTricks);
	BOOL CanPlayR(BOOL bIncludeTricks);
	BOOL CanPlayG(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CPentarchPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPentarchPaladinCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;

	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	BOOL CanPlayW(BOOL bIncludeTricks);
	BOOL CanPlayU(BOOL bIncludeTricks);
	BOOL CanPlayB(BOOL bIncludeTricks);
	BOOL CanPlayR(BOOL bIncludeTricks);
	BOOL CanPlayG(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSarpadianEmpiresVolVIICard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSarpadianEmpiresVolVIICard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;

	BOOL CanPlayW(BOOL bIncludeTricks);
	BOOL CanPlayU(BOOL bIncludeTricks);
	BOOL CanPlayB(BOOL bIncludeTricks);
	BOOL CanPlayR(BOOL bIncludeTricks);
	BOOL CanPlayG(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCandlesOfLengCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CCandlesOfLengCard);

protected:

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMishraArtificerProdigyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMishraArtificerProdigyCard);

private:
	typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;
	bool CMishraArtificerProdigyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	bool bLibrarySearch;
	void CardSelection(CPlayer* pController, CCard* pSelected);
	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};
//____________________________________________________________________________
//
class CGauntletOfPowerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGauntletOfPowerCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	CardType SelectedColor;

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
class CNightshadeAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNightshadeAssassinCard);

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);

	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature);
};

//_____________________________________________________________________________
//
class CCalciformPoolsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCalciformPoolsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_______________________________________________________________________________________________
//
class CDreadshipReefCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDreadshipReefCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_______________________________________________________________________________________________
//
class CMoltenSlagheapCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMoltenSlagheapCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_______________________________________________________________________________________________
//
class CFungalReachesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CFungalReachesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_______________________________________________________________________________________________
//
class CSaltcrustedSteppeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSaltcrustedSteppeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_NumberSelection;
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_______________________________________________________________________________________________
//
class CIgniteMemoriesCard : public CCard
{
	DECLARE_CARD_CSTOR(CIgniteMemoriesCard);

private: 
	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CClockworkHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CClockworkHydraCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//_____________________________________________________________________________
//
class CDementiaSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDementiaSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

	CSelectionSupport m_NameSelection;
	void OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CSpikeTillerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikeTillerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CWurmcallingCard : public CCard
{
	DECLARE_CARD_CSTOR(CWurmcallingCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
protected:
	CManaCost	m_BuybackCost;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMagusOfTheJarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagusOfTheJarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CSaffiEriksdotterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSaffiEriksdotterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CYavimayaDryadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaDryadCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//