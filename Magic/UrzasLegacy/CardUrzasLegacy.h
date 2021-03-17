#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CGrimMonolithCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGrimMonolithCard);
};

//_____________________________________________________________________________
//
class CMotherofRunesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMotherofRunesCard);
};

//____________________________________________________________________________
//
class CSleeperSGuileCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSleeperSGuileCard);
};

//____________________________________________________________________________
//
class CTinkerCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CTinkerCard);
};

//____________________________________________________________________________
//
class CWeatherseedTreefolkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeatherseedTreefolkCard);
};

//____________________________________________________________________________
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

//__________________________________________________________________________
//
class CBloatedToadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloatedToadCard);
};

//____________________________________________________________________________
//
class CDarkwatchElvesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkwatchElvesCard);
};

//____________________________________________________________________________
//
class CDefenderOfChaosCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDefenderOfChaosCard);
};

//____________________________________________________________________________
//
class CDefenderOfLawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDefenderOfLawCard);
};

//____________________________________________________________________________
//
class CDevoutHarpistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevoutHarpistCard);
};

//____________________________________________________________________________
//
class CEvisceratorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEvisceratorCard);
};

//____________________________________________________________________________
//
class CExpendableTroopsCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CExpendableTroopsCard);
};

//____________________________________________________________________________
//
class CFogOfGnatsCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CFogOfGnatsCard);
};

//____________________________________________________________________________
//
class CGoblinMedicsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMedicsCard);
};

//____________________________________________________________________________
//
class CKingCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKingCrabCard);
};

//____________________________________________________________________________
//
class CMultaniMaroSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMultaniMaroSorcererCard);
};

//____________________________________________________________________________
//
class CPhyrexianBroodlingsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianBroodlingsCard);
};

//____________________________________________________________________________
//
class CPhyrexianDebaserCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianDebaserCard);
};

//____________________________________________________________________________
//
class CPhyrexianDefilerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianDefilerCard);
};

//____________________________________________________________________________
//
class CPhyrexianDenouncerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianDenouncerCard);
};

//____________________________________________________________________________
//
class CRadiantArchangelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRadiantArchangelCard);
};

//____________________________________________________________________________
//
class CRankAndFileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRankAndFileCard);
};

//____________________________________________________________________________
//
class CShivanPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShivanPhoenixCard);
};

//____________________________________________________________________________
//
class CTetheredSkirgeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTetheredSkirgeCard);
};

//____________________________________________________________________________
//
class CThornwindFaeriesCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CThornwindFaeriesCard);
};

//____________________________________________________________________________
//
class CTragicPoetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTragicPoetCard);
};

//____________________________________________________________________________
//
class CViashinoCutthroatCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoCutthroatCard);
};

//____________________________________________________________________________
//
class CWalkingSpongeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkingSpongeCard);
};

//____________________________________________________________________________
//
class CWeatherseedElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWeatherseedElfCard);
};

//____________________________________________________________________________
//
class CWeatherseedFaeriesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWeatherseedFaeriesCard);
};

//____________________________________________________________________________
//
class CJhoirasToolboxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJhoirasToolboxCard);
};

//____________________________________________________________________________
//
class CThranWarMachineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThranWarMachineCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CTickingGnomesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTickingGnomesCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CCessationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCessationCard);
};

//____________________________________________________________________________
//
class CGhituWarCryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGhituWarCryCard);
};

//____________________________________________________________________________
//
class CMartyrsCauseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMartyrsCauseCard);
};

//____________________________________________________________________________
//
class CPhyrexianReclamationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPhyrexianReclamationCard);
};

//____________________________________________________________________________
//
class CSluggishnessCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSluggishnessCard);
};

//____________________________________________________________________________
//
class CBurstOfEnergyCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurstOfEnergyCard);
};

//____________________________________________________________________________
//
class CCropRotationCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CCropRotationCard);
};

//____________________________________________________________________________
//
class CHarmonicConvergenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CHarmonicConvergenceCard);
};

//____________________________________________________________________________
//
class CHopeAndGloryCard : public CCard
{
	DECLARE_CARD_CSTOR(CHopeAndGloryCard);
};

//____________________________________________________________________________
//
class CIronWillCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CIronWillCard);
};

//____________________________________________________________________________
//
class CMiscalculationCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CMiscalculationCard);
};

//____________________________________________________________________________
//
class CParchCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CParchCard);
};

//____________________________________________________________________________
//
class CPeaceAndQuietCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPeaceAndQuietCard);
};

//____________________________________________________________________________
//
class CRackAndRuinCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRackAndRuinCard);
};

//____________________________________________________________________________
//
class CRadiantsJudgmentCard : public CCard
{
	DECLARE_CARD_CSTOR(CRadiantsJudgmentCard);
};

//____________________________________________________________________________
//
class CRebuildCard : public CCard
{
	DECLARE_CARD_CSTOR(CRebuildCard);
};

//____________________________________________________________________________
//
class CSickAndTiredCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSickAndTiredCard);
};

//____________________________________________________________________________
//
class CSilkNetCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSilkNetCard);
};

//____________________________________________________________________________
//
class CSwatCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSwatCard);
};

//____________________________________________________________________________
//
class CUnearthCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CUnearthCard);
};

//____________________________________________________________________________
//
class CUrzasBlueprintsCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CUrzasBlueprintsCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CCloudOfFaeriesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudOfFaeriesCard);
};

//____________________________________________________________________________
//
class CPalinchronCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPalinchronCard);
};

//____________________________________________________________________________
//
class CBoneShredderCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CBoneShredderCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CDerangedHermitCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CDerangedHermitCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CGhituSlingerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGhituSlingerCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CKarmicGuideCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CKarmicGuideCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CMultanisAcolyteCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMultanisAcolyteCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CRadiantsDragoonsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRadiantsDragoonsCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CSimianGruntsCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSimianGruntsCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CRingOfGixCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CRingOfGixCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CScrapheapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScrapheapCard);
};

//____________________________________________________________________________
//
class CSnapCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSnapCard);
};

//____________________________________________________________________________
//
class CFranticSearchCard : public CCard
{
	DECLARE_CARD_CSTOR(CFranticSearchCard);
};

//____________________________________________________________________________
//
class CYavimayaGrangerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CYavimayaGrangerCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//______________________________________________________________________________________________
//
class CIronMaidenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIronMaidenCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWheelOfTortureCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWheelOfTortureCard);

private:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSubversionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSubversionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRavenFamiliarCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CRavenFamiliarCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CAngelicCuratorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAngelicCuratorCard);
};

//____________________________________________________________________________
//
class CYavimayaScionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaScionCard);
};

//____________________________________________________________________________
//
class CBouncingBeeblesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBouncingBeeblesCard);
};

//____________________________________________________________________________
//
class CBrinkOfMadnessCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CBrinkOfMadnessCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CDefenseOfTheHeartCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDefenseOfTheHeartCard);

private:
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CImpendingDisasterCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CImpendingDisasterCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CPlanarCollapseCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPlanarCollapseCard);

private:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CThranLensCard : public CCard
{
	DECLARE_CARD_CSTOR(CThranLensCard);
};

//____________________________________________________________________________
//
class CRepopulateCard : public CCard
{
	DECLARE_CARD_CSTOR(CRepopulateCard);
};

//____________________________________________________________________________
//
class CRivalryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRivalryCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
										  CNode* pToNode) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CSecondChanceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSecondChanceCard);

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
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CSecondChanceCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CInterveneCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CInterveneCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAboutFaceCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CAboutFaceCard);
};

//____________________________________________________________________________
//
class CAuraFluxCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAuraFluxCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
};

//_____________________________________________________________________________
//
class CGoblinWelderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinWelderCard);

protected:
	class CGoblinWelderAbility: public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	public:
		OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	protected:
		CGoblinWelderAbility(CCard* pCard, LPCTSTR strManaCost);
		virtual ~CGoblinWelderAbility() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CNoMercyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNoMercyCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage);
};

//_____________________________________________________________________________
//
class CMoltenHydraCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMoltenHydraCard);
};

//____________________________________________________________________________
//
class CViashinoHereticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CViashinoHereticCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTreefolkMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreefolkMysticCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
					CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;

};

//____________________________________________________________________________
//
class CAnthroplasmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnthroplasmCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CLastDitchEffortCard : public CCard
{
	DECLARE_CARD_CSTOR(CLastDitchEffortCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CAngelsTrumpetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelsTrumpetCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CMemoryJarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMemoryJarCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//