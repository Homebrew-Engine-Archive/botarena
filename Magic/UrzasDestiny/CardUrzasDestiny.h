#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAttritionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAttritionCard);
};

//____________________________________________________________________________
//
class CBlizzardElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBlizzardElementalCard);
};

//____________________________________________________________________________
//
class CCovetousDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCovetousDragonCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMasticoreCard: public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR (CMasticoreCard);
};

//____________________________________________________________________________
//
class CMetathranSoldierCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CMetathranSoldierCard);
};

//____________________________________________________________________________
//
class CTauntingElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTauntingElfCard);
};

//____________________________________________________________________________
//
class CThranDynamoCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThranDynamoCard);
};

//____________________________________________________________________________
//
class CYawgmothsBargainCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CYawgmothsBargainCard);
};

//____________________________________________________________________________
//
class CCapashenTemplarCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCapashenTemplarCard);
};

//____________________________________________________________________________
//
class CColosYearlingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CColosYearlingCard);
};

//____________________________________________________________________________
//
class CDiseaseCarriersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiseaseCarriersCard);
};

//____________________________________________________________________________
//
class CElvishLookoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishLookoutCard);
};

//____________________________________________________________________________
//
class CFalseProphetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFalseProphetCard);
};

//____________________________________________________________________________
//
class CFieldSurgeonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFieldSurgeonCard);
};

//____________________________________________________________________________
//
class CFledglingOspreyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFledglingOspreyCard);
};

//____________________________________________________________________________
//
class CGoblinBerserkerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinBerserkerCard);
};

//____________________________________________________________________________
//
class CGoblinMasonsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMasonsCard);
};

//____________________________________________________________________________
//
class CGoliathBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoliathBeetleCard);
};

//____________________________________________________________________________
//
class CHeartWardenCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartWardenCard);
};

//____________________________________________________________________________
//
class CKingfisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKingfisherCard);
};

//____________________________________________________________________________
//
class CMarkerBeetlesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMarkerBeetlesCard);
};

//____________________________________________________________________________
//
class CMetathranEliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMetathranEliteCard);
};

//____________________________________________________________________________
//
class CPhyrexianMonitorCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianMonitorCard);
};

//____________________________________________________________________________
//
class CPlagueDogsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueDogsCard);
};

//____________________________________________________________________________
//
class CPlatedSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedSpiderCard);
};

//____________________________________________________________________________
//
class CReliquaryMonkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReliquaryMonkCard);
};

//____________________________________________________________________________
//
class CSkitteringHorrorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkitteringHorrorCard);
};

//____________________________________________________________________________
//
class CSlinkingSkirgeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSlinkingSkirgeCard);
};

//____________________________________________________________________________
//
class CSquirmingMassCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSquirmingMassCard);
};

//____________________________________________________________________________
//
class CTetheredGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTetheredGriffinCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CTormentedAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTormentedAngelCard);
};

//____________________________________________________________________________
//
class CVoiceOfDutyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfDutyCard);
};

//____________________________________________________________________________
//
class CVoiceOfReasonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVoiceOfReasonCard);
};

//____________________________________________________________________________
//
class CWallOfGlareCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfGlareCard);
};

//____________________________________________________________________________
//
class CWildColosCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CWildColosCard);
};

//____________________________________________________________________________
//
class CYavimayaElderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYavimayaElderCard);
};

//____________________________________________________________________________
//
class CBrassSecretaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrassSecretaryCard);
};

//____________________________________________________________________________
//
class CExtruderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CExtruderCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CJunkDiverCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJunkDiverCard);
};

//____________________________________________________________________________
//
class CYavimayaHollowCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CYavimayaHollowCard);
};

//____________________________________________________________________________
//
class CBraidwoodCupCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBraidwoodCupCard);
};

//____________________________________________________________________________
//
class CBraidwoodSextantCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBraidwoodSextantCard);
};

//____________________________________________________________________________
//
class CAEtherStingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAEtherStingCard);
};

//____________________________________________________________________________
//
class CCapashenStandardCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCapashenStandardCard);
};

//____________________________________________________________________________
//
class CChimeOfNightCard : public CCard
{
	DECLARE_CARD_CSTOR(CChimeOfNightCard);
};

//____________________________________________________________________________
//
class CIlluminatedWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CIlluminatedWingsCard);
};

//____________________________________________________________________________
//
class CMarkOfFuryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMarkOfFuryCard);
};

//____________________________________________________________________________
//
class CMaskOfLawAndGraceCard : public CCard
{
	DECLARE_CARD_CSTOR(CMaskOfLawAndGraceCard);
};

//____________________________________________________________________________
//
class CMentalDisciplineCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMentalDisciplineCard);
};

//____________________________________________________________________________
//
class CTwistedExperimentCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTwistedExperimentCard);
};

//____________________________________________________________________________
//
class CFendOffCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CFendOffCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMagnifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagnifyCard);
};

//____________________________________________________________________________
//
class CRapidDecayCard : public CCard
{
	DECLARE_CARD_CSTOR(CRapidDecayCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRescueCard : public CCard
{
	DECLARE_CARD_CSTOR(CRescueCard);
};

//____________________________________________________________________________
//
class CBubblingMuckCard : public CCard
{
	DECLARE_CARD_CSTOR(CBubblingMuckCard);
};

//____________________________________________________________________________
//
class CEncroachCard : public CCard
{
	DECLARE_CARD_CSTOR(CEncroachCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFlameJetCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlameJetCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRecklessAbandonCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRecklessAbandonCard);
};

//____________________________________________________________________________
//
class CTreacheryCard : public CCard
{
	DECLARE_CARD_CSTOR(CTreacheryCard);
};

//____________________________________________________________________________
//
class CGoblinMarshalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinMarshalCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CHuntingMoaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHuntingMoaCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CKeldonChampionCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CKeldonChampionCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CKeldonVandalsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeldonVandalsCard);

private:
    bool SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
    CCard* CreateTemporaryAbility();
    void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer);
};

//____________________________________________________________________________
//
class CRofellosLlanowarEmissaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRofellosLlanowarEmissaryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWakeOfDestructionCard : public CCard
{
	DECLARE_CARD_CSTOR(CWakeOfDestructionCard);

protected:
    typedef 
        TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CPhyrexianNegatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhyrexianNegatorCard);

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
class CThranFoundryCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CThranFoundryCard);
};

//____________________________________________________________________________
//
class CCarnivalOfSoulsCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CCarnivalOfSoulsCard);
};

//____________________________________________________________________________
//
class CHulkingOgreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHulkingOgreCard);
};

//____________________________________________________________________________
//
class CAcademyRectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAcademyRectorCard);

protected:
	CCardFilter m_CardFilter;

};

//____________________________________________________________________________
//
class CEradicateCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CEradicateCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSplinterCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSplinterCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CScourCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CScourCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CSowingSaltCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSowingSaltCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CQuashCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CQuashCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CGamekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGamekeeperCard);

protected:
	CCardFilter m_CardFilter;
	class TriggeredAbility :
		public TTriggeredAbility< CTriggeredAbility<>, 
								  CWhenSelfInplay, 
								  CWhenSelfInplay::EventCallback,
								  &CWhenSelfInplay::SetLeaveEventCallback >
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		TriggeredAbility(CCard* pCard)
			: TTriggeredAbility(pCard)
		{
		}
		OVERRIDE(BOOL, ResolveSelection)(CPlayer* pPlayer, CTriggeredAction* pAction) 
		{
			if (!__super::ResolveSelection(pPlayer, pAction))
				return FALSE;

			// Create a temporary ability to reuse the resolution code
			counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> // must be an ability here, spells cannot resolve correctly in here because of stack requirement
				cpAbility(CreateResolutionAbility<CActivatedAbility<CRevealLibraryCardSpell>>(
				pPlayer, // to be generated actions' controller
				0)); // parameters into the ability's constructor after the card and mana cost parameters

			// Get all actions from the ability
			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;
			cpAbility->SetRevealCardsToOthers(TRUE, TRUE);
		
			CZone* pLib = GetController()->GetZoneById(ZoneId::Library);
			int reveal=0;
			int stop=0;
			for (int i = 0; i < pLib->GetSize(); i++)

			{
				CCard* ppCard = pLib->GetAt(pLib->GetSize()-1-i);
				// if ((!ppCard->GetCardType().IsCreature()) && (stop<4))
				if ((stop<1))
					++reveal;
				if (ppCard->GetCardType().IsCreature())
					++stop;
			}

			CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, reveal, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				CCardFilter::GetFilter(_T("creatures")), // what cards
				ZoneId::Battlefield, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			pmodifier2.SetReorderInformation(
				true, 
				ZoneId::Graveyard, 
				CZoneModifier::RoleType::PrimaryPlayer, // this player's library
				CardPlacement::Top);
			pmodifier2.ApplyTo(GetController()); // For this ability, we only care about the first action so just resolve that
			
			return cpAbility->Resolve((CAbilityAction*)(apActions->GetAt(0).GetPointer()));
		}
	};

/* private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2; */

};

//____________________________________________________________________________
//
class CApprenticeNecromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CApprenticeNecromancerCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CBubblingBeeblesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBubblingBeeblesCard);
};

//____________________________________________________________________________
//
class CFatigueCard : public CCard
{
	DECLARE_CARD_CSTOR(CFatigueCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFlickerCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlickerCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CRepercussionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRepercussionCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CCard* pFromCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CSigilOfSleepCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSigilOfSleepCard);

private:
	counted_ptr<CAbility> CreateAdditionalAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAdditionalAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CPowderKegCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPowderKegCard);
};
//____________________________________________________________________________
//
class CDisappearCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CDisappearCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//___________________________________________________________________________
//
class CReplenishCard : public CCard
{
	DECLARE_CARD_CSTOR(CReplenishCard);
};

//____________________________________________________________________________
//
class CDonateCard : public CCard
{
	DECLARE_CARD_CSTOR(CDonateCard);
};

//____________________________________________________________________________
//
class CMetalworkerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMetalworkerCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CArcheryTrainingCard : public CCard
{
	DECLARE_CARD_CSTOR(CArcheryTrainingCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CDyingWailCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CDyingWailCard);
};

//____________________________________________________________________________
//
class CIridescentDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIridescentDrakeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CMultanisDecreeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMultanisDecreeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	int m_nCards;
};

//____________________________________________________________________________
//
class CIncendiaryCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CIncendiaryCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CPrivateResearchCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CPrivateResearchCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CPatternOfRebirthCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CPatternOfRebirthCard);
};

//____________________________________________________________________________
//
class CRayneAcademyChancellorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRayneAcademyChancellorCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CCard* pCard, int n_value) const;
};

//____________________________________________________________________________
//
class CFesteringWoundCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CFesteringWoundCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility3;
	bool SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility3::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CScryingGlassCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CScryingGlassCard);
protected:
	CSelectionSupport m_NumberSelection;
	CSelectionSupport m_ColorSelection;
	int ChosenNumber;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CLandslideCard : public CCard
{
	DECLARE_CARD_CSTOR(CLandslideCard);

protected:
	CSelectionSupport m_NumberSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CBodySnatcherCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CBodySnatcherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CCinderSeerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CCinderSeerCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer);
};

//____________________________________________________________________________
//
class CIvySeerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CIvySeerCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature);
};

//____________________________________________________________________________
//
class CJasmineSeerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CJasmineSeerCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CUrzasIncubatorCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUrzasIncubatorCard);

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
class CNightshadeSeerCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CNightshadeSeerCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature);
};

//____________________________________________________________________________
//
class CRofellossGiftCard : public CCard 
{
	DECLARE_CARD_CSTOR(CRofellossGiftCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CScentOfCinderCard : public CCard 
{
	DECLARE_CARD_CSTOR(CScentOfCinderCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature, CPlayer* pTargetPlayer);
};

//____________________________________________________________________________
//
class CScentOfIvyCard : public CCard 
{
	DECLARE_CARD_CSTOR(CScentOfIvyCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature);
};

//____________________________________________________________________________
//
class CScentOfJasmineCard : public CCard 
{
	DECLARE_CARD_CSTOR(CScentOfJasmineCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController);
};

//____________________________________________________________________________
//
class CScentOfNightshadeCard : public CCard 
{
	DECLARE_CARD_CSTOR(CScentOfNightshadeCard);

protected:
	CCountedCardContainer_ pRevealedCards;
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void RevealCards(CPlayer* pController, CCreatureCard* pTargetCreature);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void Finale(CPlayer* pController, CCreatureCard* pTargetCreature);
};

//____________________________________________________________________________
//