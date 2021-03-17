#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CKalonianTuskerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKalonianTuskerCard);
};

//____________________________________________________________________________
//
class CShadowbornDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowbornDemonCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CShadowbornApostleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShadowbornApostleCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CStaffOfTheWildMagusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheWildMagusCard);
};

//____________________________________________________________________________
//
class CRegathanFirecatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRegathanFirecatCard);
};

//____________________________________________________________________________
//
class CBattleSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleSliverCard);
};

//____________________________________________________________________________
//
class CBlurSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlurSliverCard);
};

//____________________________________________________________________________
//
class CGroundshakerSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGroundshakerSliverCard);
};

//____________________________________________________________________________
//
class CSentinelSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSentinelSliverCard);
};

//____________________________________________________________________________
//
class CSteelformSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteelformSliverCard);
};

//____________________________________________________________________________
//
class CStrikingSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStrikingSliverCard);
};

//____________________________________________________________________________
//
class CVastwoodHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVastwoodHydraCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpListener;

	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_YesNoSelection;
	CSelectionSupport m_CardSelection;
	CSelectionSupport m_NumberSelection;

	void CardSelection(CPlayer* pPlayer);
	void NumberSelection(CCard* pCard, CPlayer* pPlayer);
	void OnYesNoSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	int_ RemainingCounters;
};

//____________________________________________________________________________
//
class CAdvocateOfTheBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAdvocateOfTheBeastCard);
};

//____________________________________________________________________________
//
class CArchangelOfThuneCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArchangelOfThuneCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
							const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CHuntTheWeakCard : public CCard
{
	DECLARE_CARD_CSTOR(CHuntTheWeakCard);

protected:
	class CHuntTheWeakSpell : public CDoubleTargetSpell	
	{
	DEFINE_CREATE_TO_CPTR_ONLY;

	protected:
		CHuntTheWeakSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
		virtual ~CHuntTheWeakSpell() {}

		OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CScavengingOozeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScavengingOozeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMeganticSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMeganticSliverCard);
};

//____________________________________________________________________________
//
class CAwakenTheAncientCard : public CCard
{
	DECLARE_CARD_CSTOR(CAwakenTheAncientCard);
};

//____________________________________________________________________________
//
class CStaffOfTheMindMagusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheMindMagusCard);
};

//____________________________________________________________________________
//
class CBonescytheSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBonescytheSliverCard);
};

//____________________________________________________________________________
//
class CChargingGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CChargingGriffinCard);
};

//____________________________________________________________________________
//
class CDevoutInvocationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevoutInvocationCard);

protected:
	CSelectionSupport m_CreatureSelection;
	CCountedCardContainer pCreatures;
	CCountedCardContainer pRemainingCreatures;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void CreatureSelection(CPlayer* pPlayer);
	void Finale(CPlayer* pPlayer);
};

//____________________________________________________________________________
//
class CGlimpseTheFutureCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlimpseTheFutureCard);
};

//____________________________________________________________________________
//
class CGrimReturnCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrimReturnCard);
};

//____________________________________________________________________________
//
class CGuardianOfTheAgesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianOfTheAgesCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, AttackSubject attacked) const;
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CHiveStirringsCard : public CCard
{
	DECLARE_CARD_CSTOR(CHiveStirringsCard);
};

//____________________________________________________________________________
//
class CIntoTheWildsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIntoTheWildsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLilianasReaverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLilianasReaverCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMaraudingMaulhornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaraudingMaulhornCard);
};

//____________________________________________________________________________
//
class CMasterOfDiversionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMasterOfDiversionCard);
};

//____________________________________________________________________________
//
class CMoltenBirthCard : public CCard
{
	DECLARE_CARD_CSTOR(CMoltenBirthCard);

protected:
	CSelectionSupport m_FlipSelection;
	bool BeforeResolution (CAbilityAction* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class COgreBattledriverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreBattledriverCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CPredatorySliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPredatorySliverCard);
};

//____________________________________________________________________________
//
class CPrimevalBountyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPrimevalBountyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRingOfThreeWishesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfThreeWishesCard);
};

//____________________________________________________________________________
//
class CRiseOfTheDarkRealmsCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiseOfTheDarkRealmsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRumblingBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRumblingBalothCard);
};

//____________________________________________________________________________
//
class CSavageSummoningCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSavageSummoningCard);
};

//____________________________________________________________________________
//
class CSeraphOfTheSwordCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeraphOfTheSwordCard);
};

//____________________________________________________________________________
//
class CSliverConstructCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSliverConstructCard);
};

//____________________________________________________________________________
//
class CSporemoundCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSporemoundCard);
};

//____________________________________________________________________________
//
class CStaffOfTheDeathMagusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheDeathMagusCard);
};

//____________________________________________________________________________
//
class CThorncasterSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThorncasterSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CVialOfPoisonCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVialOfPoisonCard);
};

//____________________________________________________________________________
//
class CWoodbornBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodbornBehemothCard);
};

//____________________________________________________________________________
//
class CYoungPyromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYoungPyromancerCard);
};

//____________________________________________________________________________
//
class CDawnstrikePaladinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDawnstrikePaladinCard);
};

//____________________________________________________________________________
//
class CStaffOfTheFlameMagusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheFlameMagusCard);
};

//____________________________________________________________________________
//
class CGoblinDiplomatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinDiplomatsCard);
};

//____________________________________________________________________________
//
class CColossalWhaleCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CColossalWhaleCard);

protected:
	CCountedCardContainer_ pExiled;
	
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
									CWhenSelfAttackedBlocked::AttackEventCallback,
									&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										  AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CMinotaurAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMinotaurAbominationCard);
};

//____________________________________________________________________________
//
class CRatchetBombCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRatchetBombCard);
};
//_____________________________________________________________________________
//
class CScourgeOfValkasCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScourgeOfValkasCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CTrainedCondorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedCondorCard);
};

//____________________________________________________________________________
//
class CWindreaderSphinxCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindreaderSphinxCard);

protected:
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CSoulmenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulmenderCard);
};
//____________________________________________________________________________
//
class CSeacoastDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSeacoastDrakeCard);
};
//____________________________________________________________________________
//
class CImposingSovereignCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CImposingSovereignCard);
protected:	
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CStonehornChanterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonehornChanterCard);
protected:	
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CGaleriderSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGaleriderSliverCard);
protected:	
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CMessengerDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMessengerDrakeCard);
protected:	
	bool BeforeResolution(CAbilityAction* pAction) const;
};
//____________________________________________________________________________
//
class CZephyrChargeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CZephyrChargeCard);

};

//____________________________________________________________________________
//
class CAcademyRaiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAcademyRaiderCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CAccordersShieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAccordersShieldCard);
};

//____________________________________________________________________________
//
class CAccursedSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAccursedSpiritCard);
};

//______________________________________________________________________________
//
class CAltarsReapCard : public CCard
{
	DECLARE_CARD_CSTOR(CAltarsReapCard);
};

//____________________________________________________________________________
//
class CAngelicAccordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelicAccordCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CArtificersHexCard : public CEnchantCard
{
	DECLARE_CARD_CSTOR(CArtificersHexCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool CArtificersHexCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBanisherPriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBanisherPriestCard);

protected:
	CCountedCardContainer_ pExiled;
	
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
};

//____________________________________________________________________________
//
class CBlightcasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlightcasterCard);
};
//___________________________________________________________________________
//
class CBloodBairnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodBairnCard);
	protected:
		CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CCorpseHaulerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpseHaulerCard);
};
//____________________________________________________________________________
//
class CDarkProphecyCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarkProphecyCard);
};
//____________________________________________________________________________
//
class CDeathgazeCockatriceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathgazeCockatriceCard);
};
//____________________________________________________________________________
//
class CGnawingZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGnawingZombieCard);
};
//____________________________________________________________________________
//
class CLifebaneZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLifebaneZombieCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);

	CSelectionSupport m_CardSelection;
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, 
		CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};
//____________________________________________________________________________
//
class CLiturgyOfBloodCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CLiturgyOfBloodCard);
};
//____________________________________________________________________________
//
class CSyphonSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSyphonSliverCard);
};
//____________________________________________________________________________
//
class CUndeadMinotaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUndeadMinotaurCard);
};
//____________________________________________________________________________
//
class CVampireWarlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireWarlordCard);
	protected:
		CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CBarrageOfExpendablesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBarrageOfExpendablesCard);
};
//____________________________________________________________________________
//
class CCyclopsTyrantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCyclopsTyrantCard);
	protected:
		CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CFleshpulperGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFleshpulperGiantCard);
};
//____________________________________________________________________________
//
class CMindsparkerCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CMindsparkerCard);
	protected:
		CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CBraveTheElementsCard : public CCard
{
	DECLARE_CARD_CSTOR(CBraveTheElementsCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CCapashenKnightCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCapashenKnightCard);
};

//____________________________________________________________________________
//
class CCongregateCard : public CCard
{
	DECLARE_CARD_CSTOR(CCongregateCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFortifyCard : public CCard
{
	DECLARE_CARD_CSTOR(CFortifyCard);
};

//____________________________________________________________________________
//
class CClaustrophobiaCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CClaustrophobiaCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};
//____________________________________________________________________________
//
class CDisperseCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDisperseCard);
};

//____________________________________________________________________________
//
class CDomesticationCard : public CCard
{
	DECLARE_CARD_CSTOR(CDomesticationCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	CCardFilter m_CardFilter;
	CControlEnchant* pSpell;
};

//____________________________________________________________________________
//
class CNephaliaSeakiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNephaliaSeakiteCard);
};

//____________________________________________________________________________
//
class CQuickenCard : public CCard 
{
	DECLARE_CARD_CSTOR(CQuickenCard);
};

//____________________________________________________________________________
//
class CSensoryDeprivationCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSensoryDeprivationCard);
};
//____________________________________________________________________________
//
class CShrivelCard : public CCard
{
	DECLARE_CARD_CSTOR(CShrivelCard);
};

//____________________________________________________________________________
//
class CGoblinShortcutterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinShortcutterCard);
};

//____________________________________________________________________________
//
class CLightningTalonsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLightningTalonsCard);
};

//____________________________________________________________________________
//
class CPitchburnDevilsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPitchburnDevilsCard);
};

//____________________________________________________________________________
//
class CBramblecrushCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CBramblecrushCard);
};

//____________________________________________________________________________
//
class CBriarpackAlphaCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CBriarpackAlphaCard);
};

//____________________________________________________________________________
//
class CLayOfTheLandCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CLayOfTheLandCard);
};

//____________________________________________________________________________
//
class CRangersGuileCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CRangersGuileCard);

protected:
	counted_ptr<CSpell> CreateSpell(CCard* pCard);
};

//____________________________________________________________________________
//
class CVerdantHavenCard : public CCard
{
	DECLARE_CARD_CSTOR(CVerdantHavenCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDarksteelForgeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelForgeCard);
};

//____________________________________________________________________________
//
class CDarksteelIngotCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDarksteelIngotCard);
};

//____________________________________________________________________________
//
class CFireshriekerCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFireshriekerCard);
};

//____________________________________________________________________________
//
class CMutavaultCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMutavaultCard);
};

//___________________________________________________________________________
//
class CShimmeringGrottoCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShimmeringGrottoCard);
};

//____________________________________________________________________________
//
class CDragonEggCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CDragonEggCard);
};

//____________________________________________________________________________
//
class CXathridNecromancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CXathridNecromancerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CStaffOfTheSunMagusCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStaffOfTheSunMagusCard);
};

//____________________________________________________________________________
//
class CElvishMysticCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishMysticCard);
};

//____________________________________________________________________________
//
class CManaweftSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CManaweftSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class COathOfTheAncientWoodCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COathOfTheAncientWoodCard);
};

//____________________________________________________________________________
//
class CIllusionaryArmorCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CIllusionaryArmorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBurningEarthCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBurningEarthCard);
};

//____________________________________________________________________________
//
class CCelestialFlareCard : public CCard
{
	DECLARE_CARD_CSTOR(CCelestialFlareCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
