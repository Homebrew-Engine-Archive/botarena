#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAkromaAngelOfWrathCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAkromaAngelOfWrathCard);
};

//____________________________________________________________________________
//
class CAkromasDevotedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkromasDevotedCard);
};

//_____________________________________________________________________________
//
class CBladeSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBladeSliverCard);
};

//_____________________________________________________________________________
//
class CBloodCelebrantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodCelebrantCard);
};

//____________________________________________________________________________
//
class CBroodSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBroodSliverCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CCephalidPathmageCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidPathmageCard);
};

//____________________________________________________________________________
//
class CCovertOperativeCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CCovertOperativeCard);
};

//____________________________________________________________________________
//
class CEssenceSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEssenceSliverCard);

	protected:
	CCardFilter m_CardFilter;
		bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//_____________________________________________________________________________
//
class CPlatedSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedSliverCard);
};

//_____________________________________________________________________________
//
class CRootSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRootSliverCard);

	protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CShiftingSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShiftingSliverCard);

	protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CSynapseSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSynapseSliverCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CWitheredWretchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWitheredWretchCard);
};

//_____________________________________________________________________________
//
class CScionOfDarknessCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScionOfDarknessCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAvenEnvoyCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenEnvoyCard);
};

//_____________________________________________________________________________
//
class CAvenRedeemerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenRedeemerCard);
};

//_____________________________________________________________________________
//
class CClickslitherCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CClickslitherCard);
};

//_____________________________________________________________________________
//
class CCrookclawElderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCrookclawElderCard);

protected:
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter2;
};

//_____________________________________________________________________________
//
class CDeathmarkPrelateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathmarkPrelateCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CDefiantElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDefiantElfCard);
};

//_____________________________________________________________________________
//
class CDrippingDeadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrippingDeadCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//_____________________________________________________________________________
//
class CEarthblighterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEarthblighterCard);
};

//_____________________________________________________________________________
//
class CFreneticRaptorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFreneticRaptorCard);
};

//_____________________________________________________________________________
//
class CGempalmAvengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGempalmAvengerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CGempalmSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGempalmSorcererCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CGempalmStriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGempalmStriderCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CGlintwingInvokerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGlintwingInvokerCard);
};

//_____________________________________________________________________________
//
class CGlowriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGlowriderCard);
};

//_____________________________________________________________________________
//
class CGoblinClearcutterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinClearcutterCard);
};

//_____________________________________________________________________________
//
class CGoblinDynamoCard : public CTargetChgLifeTCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinDynamoCard);
};

//_____________________________________________________________________________
//
class CGoblinFirebugCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinFirebugCard);
};

//_____________________________________________________________________________
//
class CGoblinLookoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinLookoutCard);
};

//_____________________________________________________________________________
//
class CGoblinTurncoatCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinTurncoatCard);
};

//_____________________________________________________________________________
//
class CHavocDemonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHavocDemonCard);
};

//_____________________________________________________________________________
//
class CHundroogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHundroogCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKeeneyeAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKeeneyeAvenCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKeeperOfTheNineGalesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKeeperOfTheNineGalesCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CMacetailHystrodonCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CMacetailHystrodonCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CNeedleshotGournaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNeedleshotGournaCard);
};

//_____________________________________________________________________________
//
class CNoxiousGhoulCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNoxiousGhoulCard);
};

//_____________________________________________________________________________
//
class CPrimocEscapeeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPrimocEscapeeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CRidgetopRaptorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRidgetopRaptorCard);
};

//_____________________________________________________________________________
//
class CRiptideDirectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptideDirectorCard);
};

//_____________________________________________________________________________
//
class CSmokespewInvokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSmokespewInvokerCard);
};

//_____________________________________________________________________________
//
class CStonewoodInvokerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CStonewoodInvokerCard);
};

//_____________________________________________________________________________
//
class CSunstrikeLegionnaireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunstrikeLegionnaireCard);
};

//_____________________________________________________________________________
//
class CTotemSpeakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTotemSpeakerCard);
};

//_____________________________________________________________________________
//
class CWallOfHopeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWallOfHopeCard);

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//_____________________________________________________________________________
//
class CWirewoodHivemasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodHivemasterCard);
};

//_____________________________________________________________________________
//
class CDrinkerOfSorrowCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrinkerOfSorrowCard);
};

//_____________________________________________________________________________
//
class CCryptSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CSpectralSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpectralSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CToxinSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CToxinSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CBerserkMurlodontCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBerserkMurlodontCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CCloudreachCavalryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudreachCavalryCard);
};

//____________________________________________________________________________
//
class CSkirkOutriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkOutriderCard);
};

//____________________________________________________________________________
//
class CGempalmIncineratorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGempalmIncineratorCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenThisCardCycled > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//_____________________________________________________________________________
//
class CGempalmPolluterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGempalmPolluterCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenThisCardCycled > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//_____________________________________________________________________________
//
class CTimberwatchElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTimberwatchElfCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSkirkDrillSergeantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkDrillSergeantCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenCardMoved > TriggeredAbility;
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility1;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CCorpseHarvesterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCorpseHarvesterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CGoblinGoonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinGoonCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMagmaSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagmaSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CQuickSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuickSliverCard);
};

//_____________________________________________________________________________
//
class CWirewoodChannelerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWirewoodChannelerCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
	bool BeforeResolution4(CAbilityAction* pAction) const;
	bool BeforeResolution5(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CAvenWarhawkCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenWarhawkCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCanopyCrawlerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CCanopyCrawlerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDaruStingerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruStingerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CEmbalmedBrawlerCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CEmbalmedBrawlerCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked, 
									CWhenSelfAttackedBlocked::EventCallback, 
									&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGhastlyRemainsCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CGhastlyRemainsCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGloweringRogonCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CGloweringRogonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CZombieBruteCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CZombieBruteCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKilnmouthDragonCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CKilnmouthDragonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;

	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDarkSupplicantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarkSupplicantCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CAphettoExterminatorCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CAphettoExterminatorCard);
};

//____________________________________________________________________________
//
class CBranchsnapLorianCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBranchsnapLorianCard);
};

//____________________________________________________________________________
//
class CRiptideManglerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRiptideManglerCard);
protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBloodstokeHowlerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodstokeHowlerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDefenderOfTheOrderCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDefenderOfTheOrderCard);
};

//____________________________________________________________________________
//
class CRockshardElementalCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CRockshardElementalCard);
};

//____________________________________________________________________________
//
class CSootfeatherFlockCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSootfeatherFlockCard);
};

//____________________________________________________________________________
//
class CChromeshellCrabCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CChromeshellCrabCard);
};

//____________________________________________________________________________
//
class CDaruSanctifierCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CDaruSanctifierCard);
};

//____________________________________________________________________________
//
class CEchoTracerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CEchoTracerCard);
};

//____________________________________________________________________________
//
class CImperialHellkiteCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CImperialHellkiteCard);
};

//____________________________________________________________________________
//
class CLiegeOfTheAxeCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CLiegeOfTheAxeCard);
};

//____________________________________________________________________________
//
class CNantukoVigilanteCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoVigilanteCard);
};

//____________________________________________________________________________
//
class CPatronOfTheWildCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CPatronOfTheWildCard);
};

//____________________________________________________________________________
//
class CShaleskinPlowerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CShaleskinPlowerCard);
};

//____________________________________________________________________________
//
class CSkinthinnerCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSkinthinnerCard);
};

//____________________________________________________________________________
//
class CSkirkMarauderCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkMarauderCard);
};

//____________________________________________________________________________
//
class CUnstableHulkCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CUnstableHulkCard);
};

//____________________________________________________________________________
//
class CVoidmageApprenticeCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CVoidmageApprenticeCard);

protected:

	class TriggeredAbility :
		public TTriggeredTargetAbility< CTriggeredAbility<>,  CSpecialTrigger >
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
};

//____________________________________________________________________________
//
class CWingbeatWarriorCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CWingbeatWarriorCard);
};

//____________________________________________________________________________
//
class CKrosanCloudscraperCard : public CMorphCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanCloudscraperCard);
};

//____________________________________________________________________________
//
class CMistformUltimusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistformUltimusCard);
};

//_____________________________________________________________________________
//
class CGoblinAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinAssassinCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility2;

	CSelectionSupport m_FlipSelection;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	void OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CVileDeaconCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CVileDeaconCard);

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
class CCelestialGatekeeperCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCelestialGatekeeperCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWardSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWardSliverCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility(CCard* pCard);		

	CardKeyword SelectedProtection;
};

//____________________________________________________________________________
//
class CCallerOfTheClawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCallerOfTheClawCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPlanarGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlanarGuideCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CSkirkAlarmistCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CSkirkAlarmistCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMistformSliverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMistformSliverCard);

protected:
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	bool BeforeResolution(CAbilityAction* pAction);
	CSelectionSupport m_TypeSelection;
	void OnTypeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
