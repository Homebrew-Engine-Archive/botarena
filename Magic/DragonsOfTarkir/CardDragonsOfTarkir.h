#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CDromokaWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDromokaWarriorCard);
};

//___________________________________________________________________________
//
class CMagmaticChasmCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagmaticChasmCard);
};

//____________________________________________________________________________
//
class CTerritorialRocCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTerritorialRocCard);
};

//____________________________________________________________________________
//
class CContradictCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CContradictCard);
};

//____________________________________________________________________________
//
class CStormriderRigCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CStormriderRigCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGateSmasherCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGateSmasherCard);
};

//____________________________________________________________________________
//
class CDragonloftIdolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonloftIdolCard);
};

//____________________________________________________________________________
//
class CAncestralStatueCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncestralStatueCard);
};

//____________________________________________________________________________
//
class CAtarkaMonumentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAtarkaMonumentCard);
};

//____________________________________________________________________________
//
class CDromokaMonumentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDromokaMonumentCard);
};

//____________________________________________________________________________
//
class CKolaghanMonumentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKolaghanMonumentCard);
};

//____________________________________________________________________________
//
class COjutaiMonumentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COjutaiMonumentCard);
};

//____________________________________________________________________________
//
class CSilumgarMonumentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSilumgarMonumentCard);
};

//____________________________________________________________________________
//
class CCustodianOfTheTroveCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCustodianOfTheTroveCard);
};

//____________________________________________________________________________
//
class CScionOfUginCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScionOfUginCard);
};

//____________________________________________________________________________
//
class CTapestryOfTheAgesCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CTapestryOfTheAgesCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CVialOfDragonfireCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVialOfDragonfireCard);
};

//____________________________________________________________________________
//
class CSarkhanUnbrokenCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CSarkhanUnbrokenCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCunningBreezedancerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCunningBreezedancerCard);
};

//____________________________________________________________________________
//
class CDragonlordDromokaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonlordDromokaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

	bool SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	TriggeredAbility1* m_pTriggeredAbility1;
};

//____________________________________________________________________________
//
class CArashinSovereignCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CArashinSovereignCard);
protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSegmentedKrotiqCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSegmentedKrotiqCard);
};

//____________________________________________________________________________
//
class CAerieBowmastersCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAerieBowmastersCard);
};

//____________________________________________________________________________
//
class CAvenSunstrikerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenSunstrikerCard);
};

//____________________________________________________________________________
//
class CDirgurNemesisCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDirgurNemesisCard);
};

//____________________________________________________________________________
//
class CGudulLurkerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CGudulLurkerCard);
};

//____________________________________________________________________________
//
class CMarshHulkCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshHulkCard);
};

//____________________________________________________________________________
//
class CMisthoofKirinCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CMisthoofKirinCard);
};

//____________________________________________________________________________
//
class COjutaiInterceptorCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(COjutaiInterceptorCard);
};

//____________________________________________________________________________
//
class CSandstormChargerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSandstormChargerCard);
};

//____________________________________________________________________________
//
class CStormcragElementalCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CStormcragElementalCard);
};

//____________________________________________________________________________
//
class CAcidSpewerDragonCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAcidSpewerDragonCard);
protected:
	CCardFilter m_CardFilter;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAncientCarpCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientCarpCard);
};

//____________________________________________________________________________
//
class CWanderingTombshellCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderingTombshellCard);
};

//____________________________________________________________________________
//
class CYouthfulScholarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CYouthfulScholarCard);
};

//____________________________________________________________________________
//
class CUpdraftElementalCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CUpdraftElementalCard);
};

//____________________________________________________________________________
//
class CVirulentPlagueCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CVirulentPlagueCard);
};

//____________________________________________________________________________
//
class CUkudCobraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUkudCobraCard);
};

//____________________________________________________________________________
//
class CSibsigIcebreakersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSibsigIcebreakersCard);
};

//____________________________________________________________________________
//
class CHandOfSilumgarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHandOfSilumgarCard);
};

//____________________________________________________________________________
//
class CFlattenCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlattenCard);
};

//____________________________________________________________________________
//
class CDutifulAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDutifulAttendantCard);
};

//____________________________________________________________________________
//
class CDefeatCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDefeatCard);
};

//____________________________________________________________________________
//
class CDeadlyWanderingsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeadlyWanderingsCard);
};

//____________________________________________________________________________
//
class CCoatWithVenomCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CCoatWithVenomCard);
};

//____________________________________________________________________________
//
class CButchersGleeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CButchersGleeCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CDragonlordsServantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonlordsServantCard);
};

//____________________________________________________________________________
//
class CRendingVolleyCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRendingVolleyCard);
};

//____________________________________________________________________________
//
class CAssaultFormationCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CAssaultFormationCard);
};

//____________________________________________________________________________
//
class CAtarkaBeastbreakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAtarkaBeastbreakerCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAtarkaPummelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAtarkaPummelerCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CCircleOfEldersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCircleOfEldersCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSandcrafterMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandcrafterMageCard);
};

//______________________________________________________________________________
//
class CAnafenzaKinTreeSpiritCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnafenzaKinTreeSpiritCard);
};

//______________________________________________________________________________
//
class CAvenTacticianCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenTacticianCard);
};

//______________________________________________________________________________
//
class CDromokaCaptainCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CDromokaCaptainCard);
};

//______________________________________________________________________________
//
class CSandsteppeScavengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSandsteppeScavengerCard);
};

//______________________________________________________________________________
//
class CShamblingGoblinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShamblingGoblinCard);
};

//____________________________________________________________________________
//
class CTwinBoltCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CTwinBoltCard);
};

//____________________________________________________________________________
//
class CBerserkersOnslaughtCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBerserkersOnslaughtCard);
};

//____________________________________________________________________________
//
/*class CDragonlordAtarkaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonlordAtarkaCard);
};*/

//____________________________________________________________________________
//
class CHarbingerOfTheHuntCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHarbingerOfTheHuntCard);
};

//____________________________________________________________________________
//
class CLoseCalmCard : public CCard
{
	DECLARE_CARD_CSTOR(CLoseCalmCard);
};

//____________________________________________________________________________
//
class CRoastCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CRoastCard);
};

//____________________________________________________________________________
//
class CSarkhansTriumphCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CSarkhansTriumphCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSeismicRuptureCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSeismicRuptureCard);
};

//____________________________________________________________________________
//
class CTailSlashCard : public CCard
{
	DECLARE_CARD_CSTOR(CTailSlashCard);

protected:
	class CSoulsFireSpell : public CDoubleTargetSpell	
	{
		DEFINE_CREATE_TO_CPTR_ONLY;

		protected:
			CSoulsFireSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
			virtual ~CSoulsFireSpell() {}

			OVERRIDE(void, ResolveGroup)(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2);
	};
};

//____________________________________________________________________________
//
class CVandalizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CVandalizeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CVolcanicRushCard : public CCard
{
	DECLARE_CARD_CSTOR(CVolcanicRushCard);
};

//____________________________________________________________________________
//
