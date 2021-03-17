#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CPhyrexianWalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianWalkerCard);
};

//____________________________________________________________________________
//
class CRetributionOfTheMeekCard : public CCard
{
	DECLARE_CARD_CSTOR(CRetributionOfTheMeekCard);
};

//____________________________________________________________________________
//
class CFireblastCard : public CCard
{
	DECLARE_CARD_CSTOR(CFireblastCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CImpulseCard : public CCard
{
	DECLARE_CARD_CSTOR(CImpulseCard);
};

//____________________________________________________________________________
//
class CLightningCloudCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLightningCloudCard);
};

//____________________________________________________________________________
//
class CAkuDjinnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkuDjinnCard);
};

//____________________________________________________________________________
//
class CArmyAntsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmyAntsCard);
};

//____________________________________________________________________________
//
class CBullElephantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBullElephantCard);
};

//____________________________________________________________________________
//
class CFemerefEnchantressCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFemerefEnchantressCard);
};

//____________________________________________________________________________
//
class CFreewindFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFreewindFalconCard);
};

//____________________________________________________________________________
//
class CGoblinSwineRiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinSwineRiderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CJamuraanLionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJamuraanLionCard);
};

//____________________________________________________________________________
//
class CKeeperOfKookusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeeperOfKookusCard);
};

//____________________________________________________________________________
//
class CRagingGorillaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRagingGorillaCard);
};

//____________________________________________________________________________
//
class CScalebanesEliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScalebanesEliteCard);
};

//____________________________________________________________________________
//
class CShriekingDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekingDrakeCard);
};

//____________________________________________________________________________
//
class CTarPitWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTarPitWarriorCard);
};

//____________________________________________________________________________
//
class CTempestDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTempestDrakeCard);
};

//____________________________________________________________________________
//
class CUrborgMindsuckerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUrborgMindsuckerCard);
};

//____________________________________________________________________________
//
class CViashivanDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CViashivanDragonCard);
};

//____________________________________________________________________________
//
class CWakeOfVulturesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWakeOfVulturesCard);
};

//____________________________________________________________________________
//
class CWaterspoutDjinnCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWaterspoutDjinnCard);
};

//____________________________________________________________________________
//
class CBrassTalonChimeraCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CBrassTalonChimeraCard);
};

//____________________________________________________________________________
//
class CIronHeartChimeraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIronHeartChimeraCard);
};

//____________________________________________________________________________
//
class CLeadBellyChimeraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLeadBellyChimeraCard);
};

//____________________________________________________________________________
//
class CTinWingChimeraCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTinWingChimeraCard);
};

//____________________________________________________________________________
//
class CCoralAtollCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCoralAtollCard);
};

//____________________________________________________________________________
//
class CDormantVolcanoCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CDormantVolcanoCard);
};

//____________________________________________________________________________
//
class CEvergladesCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CEvergladesCard);
};

//____________________________________________________________________________
//
class CJungleBasinCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CJungleBasinCard);
};

//____________________________________________________________________________
//
class CKarooCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKarooCard);
};

//____________________________________________________________________________
//
class CBetrayalCard : public CCard
{
	DECLARE_CARD_CSTOR(CBetrayalCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CRighteousAuraCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRighteousAuraCard);
};

//____________________________________________________________________________
//
class CRighteousWarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRighteousWarCard);
};

//____________________________________________________________________________
//
class CEmeraldCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmeraldCharmCard);
};

//____________________________________________________________________________
//
class CFuneralCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CFuneralCharmCard);
};

//____________________________________________________________________________
//
class CHearthCharmCard : public CCard
{
	DECLARE_CARD_CSTOR(CHearthCharmCard);
};

//____________________________________________________________________________
//
class CHopeCharmCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CHopeCharmCard);
};

//____________________________________________________________________________
//
class CSimoonCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSimoonCard);
};

//____________________________________________________________________________
//
class CWickedRewardCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWickedRewardCard);
};

//____________________________________________________________________________
//
class CWindShearCard : public CCard
{
	DECLARE_CARD_CSTOR(CWindShearCard);
};

//____________________________________________________________________________
//
class CUndoCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUndoCard);
};

//____________________________________________________________________________
//
class CTalruumChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTalruumChampionCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
                                             CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CDiamondKaleidoscopeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDiamondKaleidoscopeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMortalWoundCard : public CCard
{
	DECLARE_CARD_CSTOR(CMortalWoundCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CRockSlideCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRockSlideCard);
};

//____________________________________________________________________________
//
class CManOWarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CManOWarCard);
};

//____________________________________________________________________________
//
class CNaturalOrderCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CNaturalOrderCard);
};

//____________________________________________________________________________
//
class CVampirismCard : public CCard
{
	DECLARE_CARD_CSTOR(CVampirismCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CFeralInstinctCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFeralInstinctCard);
};

//____________________________________________________________________________
//
class CMiraculousRecoveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CMiraculousRecoveryCard);

protected:
	CCardFilter m_CardFilter;
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CPillarTombsOfAkuCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPillarTombsOfAkuCard);
};

//____________________________________________________________________________
//
class CQuirionRangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionRangerCard);
};

//____________________________________________________________________________
//
class CFloodedShorelineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFloodedShorelineCard);
};

//____________________________________________________________________________
//
class CAnvilOfBogardanCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAnvilOfBogardanCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBlanketOfNightCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlanketOfNightCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBogardanPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBogardanPhoenixCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBroodOfCockroachesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodOfCockroachesCard);
};

//____________________________________________________________________________
//
class CChronatogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChronatogCard);
};

//____________________________________________________________________________
//
class CGriffinCanyonCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGriffinCanyonCard);
};

//____________________________________________________________________________
//
class CKaerveksSpiteCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CKaerveksSpiteCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFallenAskariCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFallenAskariCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CSuqAtaLancerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSuqAtaLancerCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class CZhalfirinCrusaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZhalfirinCrusaderCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//____________________________________________________________________________
//
class COvinomancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COvinomancerCard);
};

//____________________________________________________________________________
//
class CHelmOfAwakeningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHelmOfAwakeningCard);
};

//____________________________________________________________________________
//
class CSunClaspCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSunClaspCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CGiantCaterpillarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantCaterpillarCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSuqAtaAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSuqAtaAssassinCard);

private:
	bool SetTriggerContext(CTriggeredPoisonAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CJujuBubbleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJujuBubbleCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CFirestormHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFirestormHellkiteCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CMagmaMineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMagmaMineCard);
};

//____________________________________________________________________________
//
class CDarkPrivilegeCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDarkPrivilegeCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
//class CTitheCard : public CCard
//{
//	DECLARE_CARD_CSTOR(CTitheCard);
//
//private:
//	typedef
//		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;
//	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
//										  CNode* pToNode) const;
//	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
//};

//____________________________________________________________________________
//
class CUndiscoveredParadiseCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CUndiscoveredParadiseCard);
protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListenerW;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListenerU;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListenerB;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListenerR;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListenerG;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CKookusCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKookusCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CKyscuDrakeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKyscuDrakeCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CCityOfSolitudeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCityOfSolitudeCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

	bool SetTriggerContext1(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility1* m_pTriggeredAbility1;

	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

	bool SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility2* m_pTriggeredAbility2;

};

//____________________________________________________________________________
//
class CDeathWatchCard : public CEnchantCard 
{
	DECLARE_CARD_CSTOR(CDeathWatchCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CElephantGrassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElephantGrassCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CBreezekeeperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBreezekeeperCard);
};

//____________________________________________________________________________
//
class CRainbowEfreetCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRainbowEfreetCard);
};

//____________________________________________________________________________
//
class CTeferisHonorGuardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTeferisHonorGuardCard);
};

//____________________________________________________________________________
//
class CTriangleOfWarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTriangleOfWarCard);

protected:
	class CTriangleOfWarSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
		CTriangleOfWarSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CTriangleOfWarSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CForbiddenRitualCard : public CCard
{
	DECLARE_CARD_CSTOR(CForbiddenRitualCard);

protected:
	CSelectionSupport m_PunisherSelection;
	CSelectionSupport m_ContinueSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherChoice(CPlayer* pTarget);
	void ContinueChoice(CPlayer* pTarget);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnContinueSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CCorrosionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCorrosionCard);

protected:
	typedef
			TTriggeredAbility< CTriggeredAbility<>,  CSpecialTrigger  > TriggeredAbility;
		TriggeredAbility* m_pTriggeredAbility;
		bool BeforeResolution1(CAbilityAction* pAction) const;
		bool BeforeResolution2(CAbilityAction* pAction) const;

private:
		ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;
		void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
		CCardFlagModifier m_CardFlagModifier1;
		CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CForeshadowCard : public CCard
{
	DECLARE_CARD_CSTOR(CForeshadowCard);
};

//____________________________________________________________________________
//
class CEyeOfSingularityCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEyeOfSingularityCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility2;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CTitheCard : public CCard
{
	DECLARE_CARD_CSTOR(CTitheCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CGuidingSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGuidingSpiritCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CQuirionDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuirionDruidCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
