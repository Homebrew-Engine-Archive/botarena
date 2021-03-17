#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAkoumCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CAkoumCard);
};

//____________________________________________________________________________
//
class CBalefulStrixCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBalefulStrixCard);
};

//____________________________________________________________________________
//
class CBeetlebackChiefCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBeetlebackChiefCard);
};

//____________________________________________________________________________
//
class CBloodhillBastionCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CBloodhillBastionCard);

protected:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};
//____________________________________________________________________________
//
class CBrindleShoatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrindleShoatCard);
};

//____________________________________________________________________________
//
class CDragonlairSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDragonlairSpiderCard);
};

//____________________________________________________________________________
//
class CDreampodDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreampodDruidCard);
protected:
	bool BeforeResolution(CTriggeredCreateTokenAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CEtheriumHornSorcererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEtheriumHornSorcererCard);
};

//____________________________________________________________________________
//
class CFracturedPowerstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CFracturedPowerstoneCard);
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIndrikUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CIndrikUmbraCard);
};

//____________________________________________________________________________
//
class CKrondTheDawnCladCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKrondTheDawnCladCard);

protected:
	bool BeforeResolution(CTriggeredMoveCardAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											   AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CMaelstromWandererCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaelstromWandererCard);
};

//____________________________________________________________________________
//
class CPreyseizerDragonCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CPreyseizerDragonCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSaiOfTheShinobiCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSaiOfTheShinobiCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CShardlessAgentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShardlessAgentCard);
};

//____________________________________________________________________________
//
class CThromokTheInsatiableCard : public CDevourCreatureCard
{
	DECLARE_CARD_CSTOR(CThromokTheInsatiableCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;	// Listen to this card's zone changes

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVelaTheNightCladCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVelaTheNightCladCard);
};

//____________________________________________________________________________
//
class CMutualEpiphanyCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CMutualEpiphanyCard);
};

//____________________________________________________________________________
//
class CChaoticAEtherCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CChaoticAEtherCard);
};

//____________________________________________________________________________
//
class CSpatialMergingCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CSpatialMergingCard);

protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CStairstoInfinityCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CStairstoInfinityCard);
};

//____________________________________________________________________________
//
class CInterplanarTunnelCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CInterplanarTunnelCard);

protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPlanewideDisasterCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CPlanewideDisasterCard);

	protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CRealityShapingCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CRealityShapingCard);

	protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMorphicTideCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CMorphicTideCard);

protected:
	class TriggeredAbility :
				public TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > 
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
			counted_ptr<CActivatedAbility<CWarpWorldSpell>> // must be an ability here, spells cannot resolve correctly in here because of stack requirement
				cpAbility(CreateResolutionAbility<CActivatedAbility<CWarpWorldSpell>>(
				pPlayer // to be generated actions' controller
				)); // parameters into the ability's constructor after the card and mana cost parameters

			// Get all actions from the ability
			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;

			// For this ability, we only care about the first action so just resolve that
			return cpAbility->Resolve((CAbilityAction*)(apActions->GetAt(0).GetPointer()));
		}
	};
};

//____________________________________________________________________________
//
class CGlenElendraCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CGlenElendraCard);

protected:
	CCountedCardContainer_	m_AffectedCards;
	
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);	
	CWhenNodeChanged m_WhenNodeChanged1;
	CWhenNodeChanged m_WhenNodeChanged2;
	void OnNodeChanged(CNode* pToNode);
	ListenerPtr<DamageDealEventSource::Listener>	m_cpDListener;
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);

	bool SetTriggerContextE(CTriggeredExchangeControlAbility::TriggerContextType& triggerContext,
                            CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CSilentBladeOniCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilentBladeOniCard);
};

//____________________________________________________________________________
//
class COnakkeCatacombCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(COnakkeCatacombCard);
};
//____________________________________________________________________________
//
class CGroveOfTheDreampodsCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CGroveOfTheDreampodsCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContextAux(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(CAbilityAction* pAction);
};
//____________________________________________________________________________
//
class CMassMutinyCard : public CCard
{
	DECLARE_CARD_CSTOR(CMassMutinyCard);
};

//____________________________________________________________________________
//
class CHedronFieldsOfAgadeemCard : public CPlaneCard 
{
	DECLARE_CARD_CSTOR(CHedronFieldsOfAgadeemCard);
};

//____________________________________________________________________________
//
