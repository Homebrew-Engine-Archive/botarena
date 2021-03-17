#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CSuturePriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSuturePriestCard);
};

//____________________________________________________________________________
//
class CEleshNornGrandCenobiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEleshNornGrandCenobiteCard);
};

//____________________________________________________________________________
//
class CPristineTalismanCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CPristineTalismanCard);
};

//____________________________________________________________________________
//
class CPhyrexianObliteratorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianObliteratorCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenDamageDealt,
								  CWhenDamageDealt::CreatureEventCallback,
								  &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CUrabraskTheHiddenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrabraskTheHiddenCard);
};

//____________________________________________________________________________
//
class CSheoldredWhisperingOneCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSheoldredWhisperingOneCard);
};

//____________________________________________________________________________
//
class CArgentMutationCard : public CCard
{
	DECLARE_CARD_CSTOR(CArgentMutationCard);
};

//____________________________________________________________________________
//
class CBlightedAgentCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightedAgentCard);
};

//____________________________________________________________________________
//
class CDefensiveStanceCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDefensiveStanceCard);
};

//____________________________________________________________________________
//
class CGitaxianProbeCard : public CCard
{
	DECLARE_CARD_CSTOR(CGitaxianProbeCard);
};

//____________________________________________________________________________
//
class CMentalMisstepCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMentalMisstepCard);
};

//____________________________________________________________________________
//
class CMindcullingCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindcullingCard);
};

//____________________________________________________________________________
//
class CPsychicBarrierCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CPsychicBarrierCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSpinedThopterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinedThopterCard);
};

//____________________________________________________________________________
//
class CSpireMonitorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpireMonitorCard);
};

//____________________________________________________________________________
//
class CTezzeretsGambitCard : public CCard
{
	DECLARE_CARD_CSTOR(CTezzeretsGambitCard);

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVaporSnagCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVaporSnagCard);
};

//____________________________________________________________________________
//
class CViralDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CViralDrakeCard);
private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CWingSplicerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWingSplicerCard);
};

//____________________________________________________________________________
//
class CBladeSplicerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBladeSplicerCard);
};

//____________________________________________________________________________
//
class CMasterSplicerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterSplicerCard);
};

//____________________________________________________________________________
//
class CSensorSplicerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSensorSplicerCard);
};

//____________________________________________________________________________
//
class CMaulSplicerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaulSplicerCard);
};

//____________________________________________________________________________
//
class CVitalSplicerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVitalSplicerCard);
};

//____________________________________________________________________________
//
class CForcedWorshipCard: public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CForcedWorshipCard);
};

//____________________________________________________________________________
//
class CLostleoninCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLostleoninCard);
};

//____________________________________________________________________________
//
class CLoxodonConvertCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoxodonConvertCard);
};

//____________________________________________________________________________
//
class CMarrowShardsCard: public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CMarrowShardsCard);
};

//____________________________________________________________________________
//
class CPorcelainLegionnaireCard: public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPorcelainLegionnaireCard);
};

//____________________________________________________________________________
//
class CRememberTheFallenCard : public CCard
{
	DECLARE_CARD_CSTOR(CRememberTheFallenCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

/*protected:
	//BOOL CanPlay1(BOOL bIncludeTricks);
	//BOOL CanPlay2(BOOL bIncludeTricks);
	BOOL CanPlay(BOOL bIncludeTricks);*/
};

//____________________________________________________________________________
//
class CShatteredAngelCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShatteredAngelCard);
};

//____________________________________________________________________________
//
class CShriekRaptorCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekRaptorCard);
};

//____________________________________________________________________________
//
class CWarReportCard: public CCard
{
	DECLARE_CARD_CSTOR(CWarReportCard);
};

//____________________________________________________________________________
//
class CActOfAggressionCard: public CCard
{
	DECLARE_CARD_CSTOR(CActOfAggressionCard);
};

//____________________________________________________________________________
//
class CArtillerizeCard: public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CArtillerizeCard);
};

//____________________________________________________________________________
//
class CFallenFerromancerCard: public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CFallenFerromancerCard);
};

//____________________________________________________________________________
//
class CFlamebornVironCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamebornVironCard);
};

//____________________________________________________________________________
//
class CGutShotCard: public CCard
{
	DECLARE_CARD_CSTOR(CGutShotCard);
};

//____________________________________________________________________________
//
class CMoltensteelDragonCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMoltensteelDragonCard);
};

//____________________________________________________________________________
//
class COgreMenialCard: public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(COgreMenialCard);
};

//____________________________________________________________________________
//
class CPriestOfUrabraskCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPriestOfUrabraskCard);
};

//____________________________________________________________________________
//
class CRazorSwineCard: public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CRazorSwineCard);
};

//____________________________________________________________________________
//
class CScrapyardSalvoCard: public CCard
{
	DECLARE_CARD_CSTOR(CScrapyardSalvoCard);
};

//____________________________________________________________________________
//
class CSlagFiendCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSlagFiendCard);
};

//____________________________________________________________________________
//
class CSlashPantherCard: public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSlashPantherCard);
};

//____________________________________________________________________________
//
class CVictoriousDestructionCard: public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVictoriousDestructionCard);
};

//____________________________________________________________________________
//
class CVoltChargeCard : public CCard
{
	DECLARE_CARD_CSTOR(CVoltChargeCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CVulshokRefugeeCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVulshokRefugeeCard);
};

//____________________________________________________________________________
//
class CWhipflareCard: public  CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CWhipflareCard);
};

//____________________________________________________________________________
//
class CDementiaBatCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDementiaBatCard);
};

//____________________________________________________________________________
//
class CDespiseCard: public CCard
{
	DECLARE_CARD_CSTOR(CDespiseCard);
};

//____________________________________________________________________________
//
class CDismemberCard: public CCard
{
	DECLARE_CARD_CSTOR(CDismemberCard);
};

//____________________________________________________________________________
//
class CGethsVerdictCard : public CCard
{
	DECLARE_CARD_CSTOR(CGethsVerdictCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGrimAfflictionCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrimAfflictionCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

protected:
	void OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_ProliferateSelection;
};

//____________________________________________________________________________
//
class CPithDrillerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPithDrillerCard);
};

//____________________________________________________________________________
//
class CToxicNimCard: public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CToxicNimCard);
};

//____________________________________________________________________________
//
class CVaultSkirgeCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVaultSkirgeCard);
};

//____________________________________________________________________________
//
class CBeastWithinCard: public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBeastWithinCard);
};

//____________________________________________________________________________
//
class CCorrosiveGaleCard: public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CCorrosiveGaleCard);
};

//____________________________________________________________________________
//
class CDeathHoodCobraCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathHoodCobraCard);
};

//____________________________________________________________________________
//
class CGlissasScornCard: public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CGlissasScornCard);
};

//____________________________________________________________________________
//
class CGlistenerElfCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlistenerElfCard);
};

//____________________________________________________________________________
//
class CLeechingBiteCard: public CCard
{
	DECLARE_CARD_CSTOR(CLeechingBiteCard);
};

//____________________________________________________________________________
//
class CMutagenicGrowthCard: public CCard
{
	DECLARE_CARD_CSTOR(CMutagenicGrowthCard);
};

//____________________________________________________________________________
//
class CNoxiousRevivalCard: public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CNoxiousRevivalCard);
};

//____________________________________________________________________________
//
class CRottedHystrixCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRottedHystrixCard);
};

//____________________________________________________________________________
//	
class CSpinebiterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpinebiterCard);
};

//____________________________________________________________________________
//	
class CThunderingTanadonCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThunderingTanadonCard);
};

//____________________________________________________________________________
//
class CTriumphOfTheHordesCard: public CCard
{
	DECLARE_CARD_CSTOR(CTriumphOfTheHordesCard);
};

//____________________________________________________________________________
//
class CJorKadeenThePrevailerCard: public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CJorKadeenThePrevailerCard);
};

//____________________________________________________________________________
//
class CPhyrexiasCoreCard: public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPhyrexiasCoreCard);
};

//____________________________________________________________________________
//
class CAlloyMyrCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlloyMyrCard);
};

//____________________________________________________________________________
//
class CBatterskullCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBatterskullCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CBlindingSouleaterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindingSouleaterCard);
};

//____________________________________________________________________________
//
class CDarksteelRelicCard: public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelRelicCard);
};

//____________________________________________________________________________
//
class CEtchedMonstrosityCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtchedMonstrosityCard);
};

//____________________________________________________________________________
//
class CHovermyrCard: public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHovermyrCard);
};

//____________________________________________________________________________
//
class CImmolatingSouleaterCard: public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CImmolatingSouleaterCard);
};

//____________________________________________________________________________
//
class CInsatiableSouleaterCard: public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CInsatiableSouleaterCard);
};

//____________________________________________________________________________
//
class CPestilentSouleaterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPestilentSouleaterCard);
};

//____________________________________________________________________________
//
class CKilnWalkerCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKilnWalkerCard);
};

//____________________________________________________________________________
//
class CMycosynthWellspringCard: public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMycosynthWellspringCard);
};

//____________________________________________________________________________
//
class CNecropouncerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNecropouncerCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CSickleslicerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSickleslicerCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFilter		m_CardFilter;
};

//____________________________________________________________________________
//
class CSoulConduitCard: public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoulConduitCard);
};

//____________________________________________________________________________
//
class CSurgeNodeCard: public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSurgeNodeCard);
};

//____________________________________________________________________________
//
class CUnwindingClockCard: public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUnwindingClockCard);
};

//____________________________________________________________________________
//
class CSwordofWarandPeaceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSwordofWarandPeaceCard);

protected:
	bool SetTriggerContext( CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CPlayer* pPlayer, Damage d_damage);
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, 
							&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDeceiverExarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeceiverExarchCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	BOOL TargetCheck(CCard* pCard);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType);
};

//____________________________________________________________________________
//
class CShrineOfBurningRageCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShrineOfBurningRageCard);
};

//____________________________________________________________________________
//
/*
class CPuresteelPaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPuresteelPaladinCard);

};
*/
//____________________________________________________________________________
//
class CHexParasiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHexParasiteCard);

};

//____________________________________________________________________________
//
class CSurgicalExtractionCard : public CCard
{
	DECLARE_CARD_CSTOR(CSurgicalExtractionCard);

};

//____________________________________________________________________________
//
class CLashwritheCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLashwritheCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
	CCardFilter m_CardFilter;
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBirthingPodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBirthingPodCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMeliraSylvokOutcastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMeliraSylvokOutcastCard);
};

//____________________________________________________________________________
//
class CBlindZealotCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindZealotCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCaressOfPhyrexiaCard : public CCard
{
	DECLARE_CARD_CSTOR(CCaressOfPhyrexiaCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CImpalerShrikeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CImpalerShrikeCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDueRespectCard : public CCard
{
	DECLARE_CARD_CSTOR(CDueRespectCard);
};

//____________________________________________________________________________
//
class CFurnaceScampCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFurnaceScampCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

    CCardFilter m_CardFilter;

	bool CFurnaceScampCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CPlayer* pPlayer, Damage damage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTrespassingSouleaterCard: public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTrespassingSouleaterCard);
};

//____________________________________________________________________________
//
class CVorinclexVoiceofHungerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVorinclexVoiceofHungerCard);

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
class CJinGitaxiasCoreAugurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJinGitaxiasCoreAugurCard);

};

//____________________________________________________________________________
//
class CApostlesBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CApostlesBlessingCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMortisDogsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMortisDogsCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CShrineOfLoyalLegionsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShrineOfLoyalLegionsCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CFreshMeatCard : public CCard
{
	DECLARE_CARD_CSTOR(CFreshMeatCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDispatchCard : public CCard
{
	DECLARE_CARD_CSTOR(CDispatchCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIchorExplosionCard : public CCard
{
	DECLARE_CARD_CSTOR(CIchorExplosionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CViridianHarvestCard : public CCard
{
	DECLARE_CARD_CSTOR(CViridianHarvestCard);
};

//____________________________________________________________________________
//
class CConversionChamberCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConversionChamberCard);
};

//____________________________________________________________________________
//
class CNumbingDoseCard : public CCard
{
	DECLARE_CARD_CSTOR(CNumbingDoseCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CChainedThroatseekerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChainedThroatseekerCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCorruptedResolveCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CCorruptedResolveCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CPhyrexianSwarmlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianSwarmlordCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CLifesFinaleCard : public CCard
{
	DECLARE_CARD_CSTOR(CLifesFinaleCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CPuresteelPaladinCard : public CCreatureCard
{
 DECLARE_CARD_CSTOR(CPuresteelPaladinCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);

};

//____________________________________________________________________________
//
class CIsolationCellCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CIsolationCellCard);
};

//____________________________________________________________________________
//
class CRageExtractorCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CRageExtractorCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CRuthlessInvasionCard : public CCard
{
	DECLARE_CARD_CSTOR(CRuthlessInvasionCard);
};

//___________________________________________________________________________
//
class CInvaderParasiteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInvaderParasiteCard);

protected:
	CCountedCardContainer_ pImprinted;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCagedSunCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCagedSunCard);

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
class CXenograftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CXenograftCard);

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
class CCommanderCard : public CCard 
{
	DECLARE_CARD_CSTOR(CCommanderCard);

public:
	BOOL IdentityRed() {return red;}
	BOOL IdentityWhite() {return white;}
	BOOL IdentityBlack() {return black;}
	BOOL IdentityGreen() {return green;}
	BOOL IdentityBlue() {return blue;}
	void ResetCastingTime() { CastingTimes = 0;}
		 
protected:

	int_ DamageDealtByOtherCommander;

private:
	int_ CastingTimes;
	
	ListenerPtr<CastSpellEventSource::Listener>	m_cpPListener;	// Listen to play card event
	void OnSpellCasted(CCard* pCard);

	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to zone change
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	ListenerPtr<DamageDealEventSource::Listener>	m_cpDListener;
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);

	ListenerPtr<CardMovementEventSource::Listener>	m_cpZListener;	// Listen to all players' zone changes
	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	ListenerPtr<ManaAddEventSource::Listener>	m_cpMListener;
	void OnManaAdd(CPlayer* pPlayer, const CManaPool pPool);
	
	counted_ptr<CConsExtraManaEnchantment> m_pAbility;

	BOOL_ red;
	BOOL_ blue;
	BOOL_ black;
	BOOL_ white;
	BOOL_ green;
	BOOL_ set;
};

//____________________________________________________________________________
//
class CKarnLiberatedCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CKarnLiberatedCard);

protected:
	BOOL_ resolution;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;

	CWhenSelfMoved m_WhenSelfMoved;

	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

private:
	CCountedCardContainer_ pExiledCards;
};

//____________________________________________________________________________
//
class CShrineOfBoundlessGrowthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShrineOfBoundlessGrowthCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CShrineOfLimitlessPowerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShrineOfLimitlessPowerCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CShrineOfPiercingVisionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CShrineOfPiercingVisionCard);

protected:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CGlisteningOilCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlisteningOilCard);

protected:
	CCardKeywordEnchant* m_pEnchantSpell;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//___________________________________________________________________________
//
class CBrutalizerExarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrutalizerExarchCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	BOOL TargetCheck(CCard* pCard);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType);
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEntomberExarchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEntomberExarchCard);

protected:
	void OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ModeSelection;

	BOOL TargetCheckGraveyard(CCard* pCard);
	BOOL TargetCheckPlayer(CPlayer* pPlayer);

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
								CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType);

	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//