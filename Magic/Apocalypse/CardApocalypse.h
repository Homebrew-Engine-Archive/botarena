#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAngelfireCrusaderCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelfireCrusaderCard);
};

//____________________________________________________________________________
//
class CFireIceCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFireIceCard);
};

//____________________________________________________________________________
//
class CFlowstoneChargerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlowstoneChargerCard);
};

//____________________________________________________________________________
//
class CLightningAngelCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CLightningAngelCard);
};

//____________________________________________________________________________
//
class CSpiritmongerCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiritmongerCard);
};

//____________________________________________________________________________
//
class CSymbioticDeploymentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSymbioticDeploymentCard);
};

//____________________________________________________________________________
//
class CTranquilPathCard : public CCard
{
	DECLARE_CARD_CSTOR(CTranquilPathCard);
};

//____________________________________________________________________________
//
class CVindicateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVindicateCard);
};

//____________________________________________________________________________
//
class CAnaDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnaDiscipleCard);
};

//____________________________________________________________________________
//
class CBloodfireDwarfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodfireDwarfCard);
};

//____________________________________________________________________________
//
class CBloodfireKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodfireKavuCard);
};

//____________________________________________________________________________
//
class CBogGnarrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogGnarrCard);
};

//____________________________________________________________________________
//
class CCetaDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCetaDiscipleCard);
};

//____________________________________________________________________________
//
class CCoastalDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCoastalDrakeCard);
};

//____________________________________________________________________________
//
class CDegaDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDegaDiscipleCard);
};

//____________________________________________________________________________
//
class CEbonyTreefolkCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CEbonyTreefolkCard);
};

//____________________________________________________________________________
//
class CGaeasSkyfolkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGaeasSkyfolkCard);
};

//____________________________________________________________________________
//
class CGladeGnarrCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGladeGnarrCard);
};

//____________________________________________________________________________
//
class CGoblinLegionnaireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinLegionnaireCard);
};

//____________________________________________________________________________
//
class CHelionautCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHelionautCard);
};

//____________________________________________________________________________
//
class CJungleBarrierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJungleBarrierCard);
};

//____________________________________________________________________________
//
class CKavuGliderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuGliderCard);
};

//____________________________________________________________________________
//
class CLivingAirshipCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CLivingAirshipCard);
};

//____________________________________________________________________________
//
class CLlanowarDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLlanowarDeadCard);
};

//____________________________________________________________________________
//
class CMinotaurIllusionistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurIllusionistCard);
};

//____________________________________________________________________________
//
class CMinotaurTacticianCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurTacticianCard);
};

//____________________________________________________________________________
//
class CMournfulZombieCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CMournfulZombieCard);
};

//____________________________________________________________________________
//
class CNecraDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNecraDiscipleCard);
};

//____________________________________________________________________________
//
class CQuagmireDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuagmireDruidCard);
};

//____________________________________________________________________________
//
class CRakaDiscipleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRakaDiscipleCard);
};

//____________________________________________________________________________
//
class CRazorfinHunterCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorfinHunterCard);
};

//____________________________________________________________________________
//
class CReefShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReefShamanCard);
};

//____________________________________________________________________________
//
class CSavageGorillaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSavageGorillaCard);
};

//____________________________________________________________________________
//
class CSpectralLynxCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralLynxCard);
};

//____________________________________________________________________________
//
class CTundraKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTundraKavuCard);
};

//____________________________________________________________________________
//
class CUrborgElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgElfCard);
};

//____________________________________________________________________________
//
class CDiversionaryTacticsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDiversionaryTacticsCard);
};

//____________________________________________________________________________
//
class CFerventChargeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFerventChargeCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CMartyrsTombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMartyrsTombCard);
};

//____________________________________________________________________________
//
class COvergrownEstateCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COvergrownEstateCard);
};

//____________________________________________________________________________
//
class CShieldOfDutyAndReasonCard : public CCard
{
	DECLARE_CARD_CSTOR(CShieldOfDutyAndReasonCard);
};

//____________________________________________________________________________
//
class CHauntedAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHauntedAngelCard);
};

//____________________________________________________________________________
//
class CPenumbraBobcatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPenumbraBobcatCard);
};

//____________________________________________________________________________
//
class CPenumbraKavuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPenumbraKavuCard);
};

//____________________________________________________________________________
//
class CPenumbraWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPenumbraWurmCard);
};

//____________________________________________________________________________
//
class CGoblinTrenchesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGoblinTrenchesCard);
};

//____________________________________________________________________________
//
class CDwarvenPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenPatrolCard);
};

//____________________________________________________________________________
//
class CFungalShamblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFungalShamblerCard);
};

//____________________________________________________________________________
//
class CEnlistmentOfficerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CEnlistmentOfficerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinRingleaderCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinRingleaderCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGraveDefilerCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CGraveDefilerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CKavuHowlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKavuHowlerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSylvanMessengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanMessengerCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CTidalCourierCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTidalCourierCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDragonArchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDragonArchCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COrderChaosCard : public CCard
{
	DECLARE_CARD_CSTOR(COrderChaosCard);
};

//____________________________________________________________________________
//
class CNightDayCard : public CCard
{
	DECLARE_CARD_CSTOR(CNightDayCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShimmeringMirageCard : public CCard
{
	DECLARE_CARD_CSTOR(CShimmeringMirageCard);
};

//____________________________________________________________________________
//
class CDivineLightCard : public CCard
{
	DECLARE_CARD_CSTOR(CDivineLightCard);
};

//____________________________________________________________________________
//
class CDwarvenLandslideCard : public CCard
{
	DECLARE_CARD_CSTOR(CDwarvenLandslideCard);
};

//____________________________________________________________________________
//
class CGaeasBalanceCard : public CCard
{
	DECLARE_CARD_CSTOR(CGaeasBalanceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLastCaressCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLastCaressCard);
};

//____________________________________________________________________________
//
class CPlanarDespairCard : public CCard
{
	DECLARE_CARD_CSTOR(CPlanarDespairCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTemporalSpringCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CTemporalSpringCard);
};

//____________________________________________________________________________
//
class CUrborgUprisingCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUrborgUprisingCard);
};

//____________________________________________________________________________
//
class CDesolationAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDesolationAngelCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	/* void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener; */
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CDesolationGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDesolationGiantCard);

protected:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	/* void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener; */
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CQuicksilverDaggerCard : public CCard
{
	DECLARE_CARD_CSTOR(CQuicksilverDaggerCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSuffocatingBlastCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSuffocatingBlastCard);
};

//____________________________________________________________________________
//
class CStrengthOfNightCard : public CCard
{
	DECLARE_CARD_CSTOR(CStrengthOfNightCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CManaCost	m_KickerCost;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKavuMaulerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKavuMaulerCard);

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
class CDegavolverCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CDegavolverCard);

protected:
	counted_ptr<CAbility> CreateRegenerationAbility(CCard* pCard);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	CManaCost		m_KickerCost1;
	CManaCost		m_KickerCost2;
};

//____________________________________________________________________________
//
class CRakavolverCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRakavolverCard);

protected:
	counted_ptr<CAbility> CreateLifelinkAbility1(CCard* pCard);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

private:
	CManaCost		m_KickerCost1;
	CManaCost		m_KickerCost2;
};

//____________________________________________________________________________
//
class CAnavolverCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAnavolverCard);

protected:
	counted_ptr<CAbility> CreateRegenerationAbility1(CCard* pCard);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

private:
	CManaCost		m_KickerCost1;
	CManaCost		m_KickerCost2;
};

//____________________________________________________________________________
//
class CCetavolverCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CCetavolverCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

private:
	CManaCost		m_KickerCost1;
	CManaCost		m_KickerCost2;
};

//____________________________________________________________________________
//
class CNecravolverCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CNecravolverCard);

protected:
	counted_ptr<CAbility> CreateLifelinkAbility1(CCard* pCard);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

private:
	CManaCost		m_KickerCost1;
	CManaCost		m_KickerCost2;
};

//____________________________________________________________________________
//
class CDeathGraspCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CDeathGraspCard);
};

//____________________________________________________________________________
//
class CAEtherMutationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CAEtherMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeathMutationCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDeathMutationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFoulPresenceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CFoulPresenceCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CMysticSnakeCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMysticSnakeCard);

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
//private:
//	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
//
//	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CGerrardCapashenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGerrardCapashenCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLifeDeathCard : public CCard
{
	DECLARE_CARD_CSTOR(CLifeDeathCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMaskOfIntoleranceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMaskOfIntoleranceCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSoulLinkCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSoulLinkCard);

private:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							Damage damage) const;
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
/*class CConsumeStrengthCard : public CCard
{
	DECLARE_CARD_CSTOR(CConsumeStrengthCard);
};
*/
//____________________________________________________________________________
//
class CJiltCard : public CCard
{
	DECLARE_CARD_CSTOR(CJiltCard);
};

//____________________________________________________________________________
//
class CIlluminateCard : public CCard
{
	DECLARE_CARD_CSTOR(CIlluminateCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CManaclesOfDecayCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CManaclesOfDecayCard);
};

//___________________________________________________________________________
//
class CPerniciousDeedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPerniciousDeedCard);
};

//____________________________________________________________________________
//
class CVodalianMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianMysticCard);
};

//____________________________________________________________________________
//
class CIllusionRealityCard : public CCard
{
	DECLARE_CARD_CSTOR(CIllusionRealityCard);
};

//____________________________________________________________________________
//
class CConsumeStrengthCard : public CCard
{
	DECLARE_CARD_CSTOR(CConsumeStrengthCard);
};

//____________________________________________________________________________
//
class CBloodfireInfusionCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CBloodfireInfusionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMindExtractionCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindExtractionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCromatCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCromatCard);
};

//____________________________________________________________________________
//
class CSqueesEmbraceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSqueesEmbraceCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CYavimayasEmbraceCard : public CCard
{
	DECLARE_CARD_CSTOR(CYavimayasEmbraceCard);
};

//____________________________________________________________________________
//
class CJadedResponseCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CJadedResponseCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWildResearchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWildResearchCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPropheticBoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPropheticBoltCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWhirlpoolRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhirlpoolRiderCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CWhirlpoolDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWhirlpoolDrakeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//______________________________________________________________________________
//
class CWhirlpoolWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhirlpoolWarriorCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;
};

//______________________________________________________________________________
//
class CAnaSanctuaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAnaSanctuaryCard);
protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCetaSanctuaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCetaSanctuaryCard);
protected:
	typedef 
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDegaSanctuaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDegaSanctuaryCard);
protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CNecraSanctuaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecraSanctuaryCard);
protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRakaSanctuaryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRakaSanctuaryCard);
protected:
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CLastStandCard : public CCard
{
	DECLARE_CARD_CSTOR(CLastStandCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CSqueesRevengeCard : public CCard
{
	DECLARE_CARD_CSTOR(CSqueesRevengeCard);
protected:
	CSelectionSupport m_FlipSelection;
	CSelectionSupport m_NumberSelection;
	int FlipNumber;
	int FlipsWon;
	bool BeforeResolution (CAbilityAction* pAction);
	void SelectionFunction (int Base);
	void FlipFunction (CPlayer* pController);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CPowerstoneMinefieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPowerstoneMinefieldCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature) const;
};

//____________________________________________________________________________
//
class COrimsThunderCard : public CCard
{
	DECLARE_CARD_CSTOR(COrimsThunderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTahngarthsGlareCard : public CCard
{
	DECLARE_CARD_CSTOR(CTahngarthsGlareCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CEvasiveActionCard: public CCard
{
	DECLARE_CARD_CSTOR(CEvasiveActionCard);

protected:
	class CEvasiveActionAbility: public CCounterSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	protected:
		CEvasiveActionAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CEvasiveActionAbility() {}
	};
};

//____________________________________________________________________________
//
class CPutridWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPutridWarriorCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
								Damage damage);
};

//____________________________________________________________________________
//
class CDodecapodCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDodecapodCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Bottom, BOOL can_dredge = TRUE);

};

//____________________________________________________________________________
//
class CDeadRingersCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeadRingersCard);

protected:
	CTargetSpell* m_cSpell;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
/*
class CZombieBoaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieBoaCard);

protected:
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
};
*/
//____________________________________________________________________________
//
class CGerrardsVerdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CGerrardsVerdictCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	int_ nLands;
};

//____________________________________________________________________________
//
