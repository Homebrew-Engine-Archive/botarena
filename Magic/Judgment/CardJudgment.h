#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBorderPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBorderPatrolCard);
};

//____________________________________________________________________________
//
class CGiantWarthogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantWarthogCard);
};

//____________________________________________________________________________
//
class CJeskaWarriorAdeptCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CJeskaWarriorAdeptCard);
};

//____________________________________________________________________________
//
class CThrissNantukoPrimusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrissNantukoPrimusCard);
};

//____________________________________________________________________________
//
class CTunnelerWurmCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CTunnelerWurmCard);
};

//____________________________________________________________________________
//
class CBattleScreechCard : public CCard
{
	DECLARE_CARD_CSTOR(CBattleScreechCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CCanopyClawsCard : public CCard
{
	DECLARE_CARD_CSTOR(CCanopyClawsCard);
};

//_____________________________________________________________________________
//
class CCrushOfWurmsCard : public CCard
{
	DECLARE_CARD_CSTOR(CCrushOfWurmsCard);

protected:
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CFolkMedicineCard : public CCard
{
	DECLARE_CARD_CSTOR(CFolkMedicineCard);
};

//_____________________________________________________________________________
//
class CLavaDartCard : public CCard
{
	DECLARE_CARD_CSTOR(CLavaDartCard);
};

//_____________________________________________________________________________
//
class CRayOfRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRayOfRevelationCard);
};

//_____________________________________________________________________________
//
class CSolitaryConfinementCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSolitaryConfinementCard);
};

//____________________________________________________________________________
//
class CAvenFogbringerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvenFogbringerCard);
};

//____________________________________________________________________________
//
class CBalthorTheDefiledCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalthorTheDefiledCard);
};

//____________________________________________________________________________
//
class CNantukoMonasteryCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CNantukoMonasteryCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAnuridBarkripperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnuridBarkripperCard);
};

//____________________________________________________________________________
//
class CBattlewiseAvenCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlewiseAvenCard);
};

//____________________________________________________________________________
//
class CFledglingDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFledglingDragonCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CVigilantSentryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVigilantSentryCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CBenevolentBodyguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenevolentBodyguardCard);
};

//____________________________________________________________________________
//
class CCabalTraineeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCabalTraineeCard);
};

//____________________________________________________________________________
//
class CCentaurRootcasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCentaurRootcasterCard);
};

//____________________________________________________________________________
//
class CCephalidInkshrouderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCephalidInkshrouderCard);
};

//____________________________________________________________________________
//
class CDwarvenBloodboilerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenBloodboilerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEarsplittingRatsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEarsplittingRatsCard);
};

//____________________________________________________________________________
//
//class CGloryCard : public CFlyingCreatureCard
//{
//	DECLARE_CARD_CSTOR(CGloryCard);
//};
//
////____________________________________________________________________________
////
class CGoretuskFirebeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoretuskFirebeastCard);
};

//____________________________________________________________________________
//
class CHaplessResearcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHaplessResearcherCard);
};

//____________________________________________________________________________
//
class CHarvesterDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarvesterDruidCard);
};

//____________________________________________________________________________
//
class CIronshellBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIronshellBeetleCard);
};

//____________________________________________________________________________
//
class CKrosanWayfarerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKrosanWayfarerCard);
};

//____________________________________________________________________________
//
class CLiberatedDwarfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLiberatedDwarfCard);
};

//____________________________________________________________________________
//
class CMirrorWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMirrorWallCard);
};

//____________________________________________________________________________
//
class CSpellgorgerBarbarianCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpellgorgerBarbarianCard);
};

//____________________________________________________________________________
//
class CSylvanSafekeeperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSylvanSafekeeperCard);
};

//____________________________________________________________________________
//
class CTrainedPronghornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTrainedPronghornCard);
};

//____________________________________________________________________________
//
class CCagemailCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCagemailCard);
};

//____________________________________________________________________________
//
class CEpicStruggleCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEpicStruggleCard);

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
			CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

			if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pBattlefield->GetCardContainer()) < 20)
				return;

			__super::CallEventCallback(pToNode);
		}
	};
};

//____________________________________________________________________________
//
class CSpiritCairnCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpiritCairnCard);
};

//____________________________________________________________________________
//
class CTestOfEnduranceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTestOfEnduranceCard);

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

			if (pPlayer->GetLife() < Life(50))
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CTestOfEnduranceCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CDefyGravityCard : public CCard
{
	DECLARE_CARD_CSTOR(CDefyGravityCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CEmberShotCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEmberShotCard);
};

//____________________________________________________________________________
//
class CEnvelopCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CEnvelopCard);
};

//____________________________________________________________________________
//
class CLeadAstrayCard : public CCard
{
	DECLARE_CARD_CSTOR(CLeadAstrayCard);
};

//____________________________________________________________________________
//
class CMentalNoteCard : public CCard
{
	DECLARE_CARD_CSTOR(CMentalNoteCard);
};

//____________________________________________________________________________
//
//class CSereneSunsetCard : public CChgPwrTghAttrSpellCard
//{
//	DECLARE_CARD_CSTOR(CSereneSunsetCard);
//};
//
////____________________________________________________________________________
////
class CSuddenStrengthCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CSuddenStrengthCard);
};

//____________________________________________________________________________
//
class CRatsFeastCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CRatsFeastCard);
};

//____________________________________________________________________________
//
class CSwelterCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSwelterCard);
};

//____________________________________________________________________________
//
class CGenesisCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGenesisCard);

private:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGuiltfeederCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuiltfeederCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;

private:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CSilverSeraphCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSilverSeraphCard);
/* 
protected:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction); */
};

//____________________________________________________________________________
//
class CWormfangDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWormfangDrakeCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CWormfangNewtCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWormfangNewtCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CWormfangTurtleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWormfangTurtleCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CGrizzlyFateCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrizzlyFateCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CCommanderEeshaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCommanderEeshaCard);
};

//____________________________________________________________________________
//
class CTelekineticBondsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTelekineticBondsCard);
};

//____________________________________________________________________________
//
class CExoskeletalArmorCard : public CCard
{
	DECLARE_CARD_CSTOR(CExoskeletalArmorCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	void PostEnchant(CAbility* pAbility);
};

//____________________________________________________________________________
//
class CAnuridBrushhopperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnuridBrushhopperCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter_temp;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
};

//____________________________________________________________________________
//
class CWormfangMantaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWormfangMantaCard);
};

//____________________________________________________________________________
//
class CFuneralPyreCard : public CCard
{
	DECLARE_CARD_CSTOR(CFuneralPyreCard);
};

//____________________________________________________________________________
//
//class CAngerCard : public CHasteCreatureCard
//{
//	DECLARE_CARD_CSTOR(CAngerCard);
//
//protected:
//	CCardFilter m_CardFilter;
//	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
//	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
//							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const;
//};
//
////____________________________________________________________________________
////
class CCabalTherapyCard : public CCard
{
	DECLARE_CARD_CSTOR(CCabalTherapyCard);
};

//_____________________________________________________________________________
//
class CPhantomCentaurCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomCentaurCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomCentaurCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CPhantomFlockCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomFlockCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomFlockCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CPhantomNantukoCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomNantukoCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomNantukoCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CPhantomNishobaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomNishobaCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomNishobaCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const;
};

//____________________________________________________________________________
//
class CPhantomNomadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomNomadCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomNomadCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CPhantomTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantomTigerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(CPhantomTigerCard::TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const;
};

//____________________________________________________________________________
//
class CFlaringPainCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlaringPainCard);
};

//_____________________________________________________________________________
//
class CKrosanVergeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKrosanVergeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNantukoTracerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNantukoTracerCard);
};

//____________________________________________________________________________
//
class CWorldgorgerDragonCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWorldgorgerDragonCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CWormfangBehemothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWormfangBehemothCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CWormfangCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWormfangCrabCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CKeepWatchCard : public CCard
{
	DECLARE_CARD_CSTOR(CKeepWatchCard);
};

//____________________________________________________________________________
//
class CKrosanReclamationCard : public CCard
{
	DECLARE_CARD_CSTOR(CKrosanReclamationCard);
	
private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CQuietSpeculationCard : public CCard
{
	DECLARE_CARD_CSTOR(CQuietSpeculationCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAngerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CAngerCard);
};

//____________________________________________________________________________
//
class CBrawnCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrawnCard);
};

//____________________________________________________________________________
//
class CFilthCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CFilthCard);
};

//____________________________________________________________________________
//
class CWonderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWonderCard);
};

//____________________________________________________________________________
//
class CValorCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CValorCard);
};

//____________________________________________________________________________
//
class CMirarisWakeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMirarisWakeCard);

private:
	typedef
		TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;
	bool SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
							const CManaProductionAbilityAction* pManaAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CBurningWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurningWishCard);
};

//____________________________________________________________________________
//
class CCunningWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CCunningWishCard);
};

//____________________________________________________________________________
//
class CGoldenWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CGoldenWishCard);
};

//____________________________________________________________________________
//
class CDeathWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CDeathWishCard);
};

//____________________________________________________________________________
//
class CLivingWishCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingWishCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVenomousVinesCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CVenomousVinesCard);
};

//____________________________________________________________________________
//
class CFirecatBlitzCard : public CCard
{
	DECLARE_CARD_CSTOR(CFirecatBlitzCard);

protected:
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
};

//_____________________________________________________________________________
//
class CFlashOfInsightCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlashOfInsightCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//_____________________________________________________________________________
//
class CElephantGuideCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CElephantGuideCard);
};

//____________________________________________________________________________
//
class CTreacherousWerewolfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreacherousWerewolfCard);

protected:
    typedef
        TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CInfectiousRageCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CInfectiousRageCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStitchTogetherCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CStitchTogetherCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRiftstonePortalCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CRiftstonePortalCard);

protected:
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
};

//____________________________________________________________________________
//
class CAnuridSwarmsnapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAnuridSwarmsnapperCard);
};

//____________________________________________________________________________
//
class CHuntingGroundsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHuntingGroundsCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CLightningSurgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CLightningSurgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CSwirlingSandstormCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSwirlingSandstormCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CToxicStenchCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CToxicStenchCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//___________________________________________________________________________
//
class CAvenWarcraftCard : public CCard
{
	DECLARE_CARD_CSTOR(CAvenWarcraftCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
};
//_____________________________________________________________________________
//
class CGloryCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGloryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_ColorSelection;
};
//____________________________________________________________________________
//
class CBookBurningCard : public CCard
{
	DECLARE_CARD_CSTOR(CBookBurningCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pTarget);
	void Advance(int PlayerID, CPlayer* pTarget);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CBreakingPointCard : public CCard
{
	DECLARE_CARD_CSTOR(CBreakingPointCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID);
	void Advance(int PlayerID);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CBrowbeatCard : public CCard
{
	DECLARE_CARD_CSTOR(CBrowbeatCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void PunisherFunction(int PlayerID, CPlayer* pTarget);
	void Advance(int PlayerID, CPlayer* pTarget);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	int_ bSomeonePaid;
};

//______________________________________________________________________________
//
class CDwarvenDrillerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenDrillerCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CDwarvenScorcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenScorcherCard);

protected:
	CSelectionSupport m_PunisherSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//______________________________________________________________________________
//
class CGraveConsequencesCard : public CCard
{
	DECLARE_CARD_CSTOR(CGraveConsequencesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	void ExileFunction(int PlayerID);
	void Advance(int PlayerID);
};

//______________________________________________________________________________
//
class CSoulgorgerOrggCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulgorgerOrggCard);

protected:
	CPlayer* pAffected;
	int_ nLifeLost;

	bool BeforeResolution1(CAbilityAction* pAction);
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CTreacherousVampireCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTreacherousVampireCard);

protected:
    typedef
        TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
