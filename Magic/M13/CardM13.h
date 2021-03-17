#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAjanisSunstrikerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAjanisSunstrikerCard);
};

//____________________________________________________________________________
//
class CAngelicBenedictionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicBenedictionCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CAjaniCallerOfThePrideCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CAjaniCallerOfThePrideCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAkromasMemorialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAkromasMemorialCard);
};

//___________________________________________________________________________
//
class CArborElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArborElfCard);
};

//____________________________________________________________________________
//
class CArchaeomancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArchaeomancerCard);
};

//____________________________________________________________________________
//
class CArcticAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArcticAvenCard);
};

//____________________________________________________________________________
//
class CArmsDealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArmsDealerCard);
};

//____________________________________________________________________________
//
class CAttendedKnightCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CAttendedKnightCard);
};

//____________________________________________________________________________
//
class CAugurOfBolasCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAugurOfBolasCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAvenSquireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenSquireCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CBattleflightEagleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleflightEagleCard);
};

//____________________________________________________________________________
//
class CBladetuskBoarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBladetuskBoarCard);
};

//____________________________________________________________________________
//
class CBloodReckoningCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodReckoningCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBloodhunterBatCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodhunterBatCard);
};

//____________________________________________________________________________
//
class CBondBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBondBeetleCard);
};

//____________________________________________________________________________
//
class CBoundlessRealmsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoundlessRealmsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CCaptainsCallCard : public CCard
{
	DECLARE_CARD_CSTOR(CCaptainsCallCard);
};

//____________________________________________________________________________
//
class CCathedralOfWarCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCathedralOfWarCard);
private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CChandrasFuryCard : public CTargetChgLifeSpellCard 
{
	DECLARE_CARD_CSTOR(CChandrasFuryCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CChronomatonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChronomatonCard);
};

//____________________________________________________________________________
//
class CCleaverRiotCard : public CCard
{
	DECLARE_CARD_CSTOR(CCleaverRiotCard);
};

//____________________________________________________________________________
//
class CClockOfOmensCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CClockOfOmensCard);
};

//____________________________________________________________________________
//
class CCowerInFearCard : public CCard
{
	DECLARE_CARD_CSTOR(CCowerInFearCard);
};

//____________________________________________________________________________
//
class CCraterizeCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCraterizeCard);
};

//____________________________________________________________________________
//
class CCrimsonMuckwaderCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CCrimsonMuckwaderCard);
};

//____________________________________________________________________________
//
class CCripplingBlightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCripplingBlightCard);
};

//____________________________________________________________________________
//
class CCrusaderOfOdricCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCrusaderOfOdricCard);
};

//____________________________________________________________________________
//
class CDiabolicRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDiabolicRevelationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CDiscipleOfBolasCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDiscipleOfBolasCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CDoorToNothingnessCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDoorToNothingnessCard);
};

//____________________________________________________________________________
//
class CDownpourCard : public CCard
{
	DECLARE_CARD_CSTOR(CDownpourCard);
};

//____________________________________________________________________________
//
class CDragonHatchlingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonHatchlingCard);
};

//____________________________________________________________________________
//
class CDuskmantleProwlerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CDuskmantleProwlerCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CDutyBoundDeadCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CDutyBoundDeadCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CElderscaleWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElderscaleWurmCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CEncrustCard : public CCard
{
	DECLARE_CARD_CSTOR(CEncrustCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEraseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CEraseCard);
};

//____________________________________________________________________________
//
class CEvolvingWildsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CEvolvingWildsCard);
};

//____________________________________________________________________________
//
class CFaerieInvadersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieInvadersCard);
};

//____________________________________________________________________________
//
class CFaithsRewardCard : public CCard
{
	DECLARE_CARD_CSTOR(CFaithsRewardCard);
};

//____________________________________________________________________________
//
class CFarseekCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CFarseekCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CFirewingPhoenixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFirewingPhoenixCard);
};

//____________________________________________________________________________
//
class CFlamesOfTheFirebrandCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlamesOfTheFirebrandCard);
};

//____________________________________________________________________________
//
class CFlinthoofBoarCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlinthoofBoarCard);
};

//____________________________________________________________________________
//
class CFogBankCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFogBankCard);
};

//____________________________________________________________________________
//
class CFungalSproutingCard : public CCard
{
	DECLARE_CARD_CSTOR(CFungalSproutingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGemOfBecomingCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGemOfBecomingCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CGiantScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantScorpionCard);
};

//____________________________________________________________________________
//
class CGildedLotusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGildedLotusCard);
};

//____________________________________________________________________________
//
class CGoblinBattleJesterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinBattleJesterCard);
};

//____________________________________________________________________________
//
class CGriffinProtectorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGriffinProtectorCard);
};

//____________________________________________________________________________
//
class CGroundSealCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGroundSealCard);
};

//____________________________________________________________________________
//
class CGuardianLionsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianLionsCard);
};

//____________________________________________________________________________
//
class CGuardiansOfAkrasaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardiansOfAkrasaCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CHamletbackGoliathCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHamletbackGoliathCard);

private:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CHarborBanditCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CHarborBanditCard);
};

//____________________________________________________________________________
//
class CHealerOfThePrideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHealerOfThePrideCard);
};

//____________________________________________________________________________
//
class CHellionCrucibleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHellionCrucibleCard);
};

//____________________________________________________________________________
//
class CHydrosurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CHydrosurgeCard);
};

//____________________________________________________________________________
//
class CJacesPhantasmCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJacesPhantasmCard);
};

//____________________________________________________________________________
//
class CKitesailCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKitesailCard);
};

//____________________________________________________________________________
//
class CKnightOfGloryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfGloryCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CKnightOfInfamyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfInfamyCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CKrakenHatchlingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrakenHatchlingCard);
};

//____________________________________________________________________________
//
class CKrenkosCommandCard : public CCard
{
	DECLARE_CARD_CSTOR(CKrenkosCommandCard);
};

//____________________________________________________________________________
//
class CKrenkoMobBossCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrenkoMobBossCard);

protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLilianaoftheDarkRealmsCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CLilianaoftheDarkRealmsCard);

protected:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	VIRTUAL(void, OnPlusMinusSelected)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_PlusMinusSelection;
};

//____________________________________________________________________________
//
class CLilianasShadeCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CLilianasShadeCard);
};

//____________________________________________________________________________
//
class CMagmaquakeCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagmaquakeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMarkOfMutinyCard : public CCard
{
    DECLARE_CARD_CSTOR(CMarkOfMutinyCard);
};

//____________________________________________________________________________
//
class CMarkOfTheVampireCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMarkOfTheVampireCard);
};

//____________________________________________________________________________
//
class CMasterOfThePearlTridentCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CMasterOfThePearlTridentCard);
};

//____________________________________________________________________________
//
class CMindSculptCard : public CCard
{
	DECLARE_CARD_CSTOR(CMindSculptCard);
};

//____________________________________________________________________________
//
class CMurderCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CMurderCard);
};

//____________________________________________________________________________
//
class CMutilateCard : public CCard
{
	DECLARE_CARD_CSTOR(CMutilateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMwonvuliBeastTrackerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMwonvuliBeastTrackerCard);
protected:
	CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
class CNefaroxOverlordOfGrixisCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNefaroxOverlordOfGrixisCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CNicolBolasPlaneswalkerCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CNicolBolasPlaneswalkerCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPillarfieldOxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPillarfieldOxCard);
};

//____________________________________________________________________________
//
class CPreyUponCard : public CCard
{
	DECLARE_CARD_CSTOR(CPreyUponCard);

protected:
	class CPreyUponSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CPreyUponSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CPreyUponSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CPrimalHuntbeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimalHuntbeastCard);
};

//____________________________________________________________________________
//
class CPrizedElephantCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CPrizedElephantCard);
};

//____________________________________________________________________________
//
class CPublicExecutionCard : public CCard
{
	DECLARE_CARD_CSTOR(CPublicExecutionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRancorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CRancorCard);
};

//____________________________________________________________________________
//
class CRangersPathCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CRangersPathCard);
};

//____________________________________________________________________________
//
class CRecklessBruteCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessBruteCard);
};

//____________________________________________________________________________
//
class CReliquaryTowerCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CReliquaryTowerCard);
};

//____________________________________________________________________________
//
class CRhoxFaithmenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRhoxFaithmenderCard);
};

//____________________________________________________________________________
//
class CRingOfEvosIsleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfEvosIsleCard);
};

//____________________________________________________________________________
//
class CRingOfKaloniaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfKaloniaCard);
};

//____________________________________________________________________________
//
class CRingOfThuneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfThuneCard);
};

//____________________________________________________________________________
//
class CRingOfValkasCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfValkasCard);
};

//____________________________________________________________________________
//
class CRingOfXathridCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfXathridCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRoaringPrimadoxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRoaringPrimadoxCard);
};

//____________________________________________________________________________
//
class CRummagingGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRummagingGoblinCard);
};

//____________________________________________________________________________
//
class CSandsOfDeliriumCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CSandsOfDeliriumCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSearingSpearCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSearingSpearCard);
};

//____________________________________________________________________________
//
class CSentinelSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSentinelSpiderCard);
};

//____________________________________________________________________________
//
class CSerraAvatarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraAvatarCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenPlayerLifeChanged > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility2;
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSerraAvengerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSerraAvengerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSerpentsGiftCard: public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSerpentsGiftCard);
};

//____________________________________________________________________________
//
class CServantOfNefaroxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CServantOfNefaroxCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CShimianSpecterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShimianSpecterCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	CSelectionSupport m_CardSelection;
	CSelectionSupport m_CardSelection2;
	CCountedCardContainer SelectedCards;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void HandLibrarySearch(CPlayer* pController, CPlayer* pPlayer, CCard* pSelectedCard);
};

//____________________________________________________________________________
//
class CShowOfValorCard: public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CShowOfValorCard);
};

//____________________________________________________________________________
//
class CSlumberingDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSlumberingDragonCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSmeltCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSmeltCard);
};

//____________________________________________________________________________
//
class CSpikedBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpikedBalothCard);
};

//____________________________________________________________________________
//
class CStaffOfNinCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfNinCard);
};

//____________________________________________________________________________
//
class CStuffyDollCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStuffyDollCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									CWhenDamageDealt::CreatureEventCallback, 
									&CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CPlayer* SelectedPlayer;
};

//____________________________________________________________________________
//
class CSublimeArchangelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSublimeArchangelCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	void ForceStart(CAbility* pAbility) const; 

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSwitcherooCard : public CCard
{
	DECLARE_CARD_CSTOR(CSwitcherooCard);

protected:
	class CSwitcherooSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CSwitcherooSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CSwitcherooSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CTalrandsInvocationCard : public CCard
{
	DECLARE_CARD_CSTOR(CTalrandsInvocationCard);
};

//____________________________________________________________________________
//
class CTalrandSkySummonerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTalrandSkySummonerCard);
};

//____________________________________________________________________________
//
class CThragtuskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThragtuskCard);

};

//____________________________________________________________________________
//
class CThundermawHellkiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CThundermawHellkiteCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTimberpackWolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTimberpackWolfCard);
};

//____________________________________________________________________________
//
class CTorchFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTorchFiendCard);
};

//____________________________________________________________________________
//
class CTormodsCryptCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CTormodsCryptCard);
};

//____________________________________________________________________________
//
class CTouchOfTheEternalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTouchOfTheEternalCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTradingPostCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTradingPostCard);
};

//____________________________________________________________________________
//
class CTricksOfTheTradeCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTricksOfTheTradeCard);
};

//____________________________________________________________________________
//
class CTurnToSlagCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTurnToSlagCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVampireNighthawkCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireNighthawkCard);
};

//____________________________________________________________________________
//
class CVedalkenEntrancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVedalkenEntrancerCard);
};

//____________________________________________________________________________
//
class CVeilbornGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeilbornGhoulCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CVileRebirthCard : public CCard
{
	DECLARE_CARD_CSTOR(CVileRebirthCard);
};

//____________________________________________________________________________
//
class CWalkingCorpseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWalkingCorpseCard);
};

//______________________________________________________________________________
//
class CWarFalconCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWarFalconCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWarclampMastiffCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CWarclampMastiffCard);
};

//____________________________________________________________________________
//
class CWatercourserCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CWatercourserCard);
};

//____________________________________________________________________________
//
class CWelkinTernCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWelkinTernCard);
};

//____________________________________________________________________________
//
class CWildGuessCard : public CCard
{
	DECLARE_CARD_CSTOR(CWildGuessCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWitsEndCard : public CCard 
{
	DECLARE_CARD_CSTOR(CWitsEndCard);
};

//____________________________________________________________________________
//
class CWorldfireCard : public CCard 
{
	DECLARE_CARD_CSTOR(CWorldfireCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};
//____________________________________________________________________________
//
class CYevasForcemageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYevasForcemageCard);
};

//____________________________________________________________________________
//
class CYevaNaturesHeraldCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYevaNaturesHeraldCard);
};

//____________________________________________________________________________
//
