#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CCorpsehatchCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CCorpsehatchCard);
};

//____________________________________________________________________________
//
class CMnemonicWallCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMnemonicWallCard);
};

//____________________________________________________________________________
//
class CPathrazerOfUlamogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPathrazerOfUlamogCard);
};

//____________________________________________________________________________
//
class CKozilekButcherOfTruthCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKozilekButcherOfTruthCard);
};

//____________________________________________________________________________
//
class CUlamogsCrusherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUlamogsCrusherCard);
};

//____________________________________________________________________________
//
class CGuardDutyCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGuardDutyCard);
};

//____________________________________________________________________________
//
class CEmrakulsHatcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEmrakulsHatcherCard);
};

//____________________________________________________________________________
//
class CPawnOfUlamogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPawnOfUlamogCard);
};

//____________________________________________________________________________
//
class CSkitteringInvasionCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CSkitteringInvasionCard);
};

//____________________________________________________________________________
//
class CAllIsDustCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CAllIsDustCard);

private:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CArtisanOfKozilekCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArtisanOfKozilekCard);
};

//____________________________________________________________________________
//
class CNearDeathExperienceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CNearDeathExperienceCard);

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

			if (pPlayer->GetLife() != Life(1))
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(CNearDeathExperienceCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTraitorousInstinctCard : public CCard
{
    DECLARE_CARD_CSTOR(CTraitorousInstinctCard);
};

//____________________________________________________________________________
//
class CDreamstoneHedronCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CDreamstoneHedronCard);
};

//____________________________________________________________________________
//
class CAffaGuardHoundCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CAffaGuardHoundCard);
};

//____________________________________________________________________________
//
class CNirkanaRevenantCard : public CPumpCreatureCard
{
    DECLARE_CARD_CSTOR(CNirkanaRevenantCard);
};

//____________________________________________________________________________
//
class CMagmawCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMagmawCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSphinxOfMagosiCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSphinxOfMagosiCard);
};

//____________________________________________________________________________
//
class CPelakkaWurmCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CPelakkaWurmCard);
};

//____________________________________________________________________________
//
class CPestilenceDemonCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CPestilenceDemonCard);
};

//____________________________________________________________________________
//
class CKozileksPredatorCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKozileksPredatorCard);
};

//____________________________________________________________________________
//
class CWallOfOmensCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWallOfOmensCard);
};

//____________________________________________________________________________
//
class CTuktukTheExplorerCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CTuktukTheExplorerCard);
};

//____________________________________________________________________________
//
class CConsumeTheMeekCard : public CCard
{
    DECLARE_CARD_CSTOR(CConsumeTheMeekCard);
};

//____________________________________________________________________________
//
class CHandOfEmrakulCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHandOfEmrakulCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CInquisitionOfKozilekCard : public CCard
{
	DECLARE_CARD_CSTOR(CInquisitionOfKozilekCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CForkedBoltCard : public CTargetChgLifeSpellCard
{
    DECLARE_CARD_CSTOR(CForkedBoltCard);
};

//____________________________________________________________________________
//
class CGloomhunterCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CGloomhunterCard);
};

//____________________________________________________________________________
//
class CLuminousWakeCard : public CCard
{
    DECLARE_CARD_CSTOR(CLuminousWakeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSeaGateOracleCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSeaGateOracleCard);
};

//____________________________________________________________________________
//
class CAwakeningZoneCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CAwakeningZoneCard);
};

//____________________________________________________________________________
//
class CBroodwardenCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBroodwardenCard);
};

//____________________________________________________________________________
//
class CSarkhantheMadCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CSarkhantheMadCard);

protected:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;

	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;

	void OnResolutionCompleted3(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener3;

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAkoumBoulderfootCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAkoumBoulderfootCard);
};

//____________________________________________________________________________
//
class CBalaGedScorpionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalaGedScorpionCard);
};

//____________________________________________________________________________
//
class CBloodriteInvokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodriteInvokerCard);
};

//____________________________________________________________________________
//
class CBramblesnapCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CBramblesnapCard);
};

//____________________________________________________________________________
//
class CCadaverImpCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCadaverImpCard);
};

//____________________________________________________________________________
//
class CDaggerbackBasiliskCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDaggerbackBasiliskCard);
};

//____________________________________________________________________________
//
class CDeathCultistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathCultistCard);
};

//____________________________________________________________________________
//
class CDreadDroneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadDroneCard);
};

//____________________________________________________________________________
//
class CEscapedNullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEscapedNullCard);
};

//____________________________________________________________________________
//
class CFrostwindInvokerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFrostwindInvokerCard);
};

//____________________________________________________________________________
//
class CGuardGomazoaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardGomazoaCard);
};

//____________________________________________________________________________
//
class CHazeFrogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHazeFrogCard);
};

//____________________________________________________________________________
//
class CJwariScuttlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJwariScuttlerCard);
};

//____________________________________________________________________________
//
class CKilnFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKilnFiendCard);
};

//____________________________________________________________________________
//
class CKorLineSlingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorLineSlingerCard);
};

//____________________________________________________________________________
//
class CLagacLizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLagacLizardCard);
};

//____________________________________________________________________________
//
class CLavafumeInvokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLavafumeInvokerCard);
};

//____________________________________________________________________________
//
class CLinvalaKeeperOfSilenceCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLinvalaKeeperOfSilenceCard);
};

//____________________________________________________________________________
//
class CLoneMissionaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLoneMissionaryCard);
};

//____________________________________________________________________________
//
class CMakindiGriffinCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMakindiGriffinCard);
};

//____________________________________________________________________________
//
class CMerfolkObserverCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkObserverCard);
};

//____________________________________________________________________________
//
class CMerfolkSkyscoutCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkSkyscoutCard);
};

//____________________________________________________________________________
//
class CNemaSiltlurkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNemaSiltlurkerCard);
};

//____________________________________________________________________________
//
class CNestInvaderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNestInvaderCard);
};

//____________________________________________________________________________
//
class COgreSentryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COgreSentryCard);
};

//____________________________________________________________________________
//
class COnduGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COnduGiantCard);
};

//____________________________________________________________________________
//
class COvergrownBattlementCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COvergrownBattlementCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPhantasmalAbominationCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPhantasmalAbominationCard);
};

//____________________________________________________________________________
//
class CRageNimbusCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CRageNimbusCard);
};

//____________________________________________________________________________
//
class CSkeletalWurmCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletalWurmCard);
};

//____________________________________________________________________________
//
class CSoulboundGuardiansCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulboundGuardiansCard);
};

//____________________________________________________________________________
//
class CSoulsAttendantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulsAttendantCard);
};

//____________________________________________________________________________
//
class CSoulsurgeElementalCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulsurgeElementalCard);
};

//____________________________________________________________________________
//
class CSporecapSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSporecapSpiderCard);
};

//____________________________________________________________________________
//
class CStalwartShieldBearersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStalwartShieldBearersCard);
};

//____________________________________________________________________________
//
class CStomperCubCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStomperCubCard);
};

//____________________________________________________________________________
//
class CTotemGuideHartebeestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTotemGuideHartebeestCard);
};

//____________________________________________________________________________
//
class CWildheartInvokerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWildheartInvokerCard);
};

//____________________________________________________________________________
//
class CEnatuGolemCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnatuGolemCard);
};

//____________________________________________________________________________
//
class CReinforcedBulwarkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReinforcedBulwarkCard);
};

//____________________________________________________________________________
//
class COgresCleaverCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COgresCleaverCard);
};

//____________________________________________________________________________
//
class CPennonBladeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPennonBladeCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CPropheticPrismCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPropheticPrismCard);
};

//____________________________________________________________________________
//
class CEldraziConscriptionCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CEldraziConscriptionCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CGravitationalShiftCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGravitationalShiftCard);
};

//____________________________________________________________________________
//
class CGravityWellCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGravityWellCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CLustForWarCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CLustForWarCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CFleetingDistractionCard : public CCard
{
	DECLARE_CARD_CSTOR(CFleetingDistractionCard);
};

//____________________________________________________________________________
//
class CHarmlessAssaultCard : public CCard
{
	DECLARE_CARD_CSTOR(CHarmlessAssaultCard);
};

//____________________________________________________________________________
//
class CLastKissCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLastKissCard);
};

//____________________________________________________________________________
//
class CLeafArrowCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CLeafArrowCard);
};

//____________________________________________________________________________
//
class CMightOfTheMassesCard : public CCard
{
	DECLARE_CARD_CSTOR(CMightOfTheMassesCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CPuncturingLightCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CPuncturingLightCard);
};

//____________________________________________________________________________
//
class CRealitySpasmCard : public CCard
{
	DECLARE_CARD_CSTOR(CRealitySpasmCard);
};

//____________________________________________________________________________
//
class CRepelTheDarknessCard : public CCard
{
	DECLARE_CARD_CSTOR(CRepelTheDarknessCard);
};

//____________________________________________________________________________
//
class CSpawningBreathCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSpawningBreathCard);
};

//____________________________________________________________________________
//
class CEssenceFeedCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CEssenceFeedCard);
};

//____________________________________________________________________________
//
class CFissureVentCard : public CCard
{
	DECLARE_CARD_CSTOR(CFissureVentCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CFlameSlashCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CFlameSlashCard);
};

//____________________________________________________________________________
//
class CGrowthSpasmCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CGrowthSpasmCard);
};

//____________________________________________________________________________
//
class CNighthazeCard : public CCard
{
	DECLARE_CARD_CSTOR(CNighthazeCard);
};

//____________________________________________________________________________
//
class CSharedDiscoveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CSharedDiscoveryCard);
};

//____________________________________________________________________________
//
class CWrapInFlamesCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CWrapInFlamesCard);
};

//____________________________________________________________________________
//
class CRunedServitorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRunedServitorCard);
};

//____________________________________________________________________________
//
class CDeathlessAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathlessAngelCard);
};

//____________________________________________________________________________
//
class CUlamogTheInfiniteGyreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CUlamogTheInfiniteGyreCard);
};

//____________________________________________________________________________
//
class CRapaciousOneCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRapaciousOneCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContextL(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CPlayer* pByPlayer, 
																								Damage damage) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CDepriveCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CDepriveCard);
};

//____________________________________________________________________________
//
class CSeeBeyondCard : public CCard
{
	DECLARE_CARD_CSTOR(CSeeBeyondCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CConqueringManticoreCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CConqueringManticoreCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CEmrakulTheAeonsTornCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmrakulTheAeonsTornCard);

	protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDemonicAppetiteCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDemonicAppetiteCard);
};

//___________________________________________________________________________
//
class CMomentousFallCard : public CCard
{
	DECLARE_CARD_CSTOR(CMomentousFallCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLivingDestinyCard : public CCard
{
	DECLARE_CARD_CSTOR(CLivingDestinyCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVengevineCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVengevineCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
};

//____________________________________________________________________________
//
class CValakutFireboarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CValakutFireboarCard);
};

//____________________________________________________________________________
//
class CVentSentinelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVentSentinelCard);
};

//____________________________________________________________________________
//
class CMorticianBeetleCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMorticianBeetleCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//_____________________________________________________________________________
//
class CCaravanEscortCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaravanEscortCard);
	protected:
		BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CVeneratedTeacherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeneratedTeacherCard);
};

//_____________________________________________________________________________
//
class CJoragaTreespeakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJoragaTreespeakerCard);

private:
	counted_ptr<CAbility> LevelUpAbility(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CBeastbreakerOfBalaGedCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBeastbreakerOfBalaGedCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CBrimstoneMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrimstoneMageCard);

private:
	counted_ptr<CAbility> LevelUpAbility1(CCard* pCard);
	counted_ptr<CAbility> LevelUpAbility2(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CCoralhelmCommanderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoralhelmCommanderCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CEnclaveCryptologistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEnclaveCryptologistCard);

private:
	counted_ptr<CAbility> LevelUpAbility1(CCard* pCard);
	counted_ptr<CAbility> LevelUpAbility2(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CGuulDrazAssassinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuulDrazAssassinCard);

private:
	counted_ptr<CAbility> LevelUpAbility1(CCard* pCard);
	counted_ptr<CAbility> LevelUpAbility2(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CHadaSpyPatrolCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHadaSpyPatrolCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CHalimarWavewatchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHalimarWavewatchCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CIkiralOutriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIkiralOutriderCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKabiraVindicatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKabiraVindicatorCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKarganDragonlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKarganDragonlordCard);

private:
	counted_ptr<CAbility> LevelUpAbility(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKazanduTuskcallerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKazanduTuskcallerCard);

private:
	counted_ptr<CAbility> LevelUpAbility1(CCard* pCard);
	counted_ptr<CAbility> LevelUpAbility2(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CKnightOfCliffhavenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfCliffhavenCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CLighthouseChronologistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLighthouseChronologistCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CLordOfShatterskullPassCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLordOfShatterskullPassCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CNirkanaCutthroatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNirkanaCutthroatCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CNullChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNullChampionCard);

private:
	counted_ptr<CAbility> LevelUpAbility(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CSkywatcherAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSkywatcherAdeptCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CStudentOfWarfareCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStudentOfWarfareCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CTranscendentMasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTranscendentMasterCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CZulaportEnforcerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CZulaportEnforcerCard);
protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
class CBoarUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBoarUmbraCard);
};

//____________________________________________________________________________
//
class CBearUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBearUmbraCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CCrabUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCrabUmbraCard);
};

//____________________________________________________________________________
//
class CDrakeUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CDrakeUmbraCard);
};

//____________________________________________________________________________
//
class CEelUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEelUmbraCard);
};

//____________________________________________________________________________
//
class CElandUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CElandUmbraCard);
};

//____________________________________________________________________________
//
class CHyenaUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CHyenaUmbraCard);
};

//____________________________________________________________________________
//
class CMammothUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMammothUmbraCard);
};

//____________________________________________________________________________
//
class CSnakeUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSnakeUmbraCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CSpiderUmbraCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSpiderUmbraCard);
};

//____________________________________________________________________________
//
class CGigantomancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGigantomancerCard);
};

//____________________________________________________________________________
//
class CBanefulOmenCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CBanefulOmenCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CItThatBetraysCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CItThatBetraysCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						     CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

	CCard* m_pSacrififcedCard;
};

//____________________________________________________________________________
//
class CRealmsUnchartedCard : public CCard
{
	DECLARE_CARD_CSTOR(CRealmsUnchartedCard);
};

//____________________________________________________________________________
//
class COustCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(COustCard);

private:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CAncientStirringsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAncientStirringsCard);

protected:
	CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CUnifiedWillCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CUnifiedWillCard);
	
protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};
//____________________________________________________________________________
//
class CStaggershockCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CStaggershockCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDistortionStrikeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDistortionStrikeCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CConsumingVaporsCard : public CCard
{
	DECLARE_CARD_CSTOR(CConsumingVaporsCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CEmergeUnscathedCard : public CCard
{
	DECLARE_CARD_CSTOR(CEmergeUnscathedCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CNomadsAssemblyCard : public CCard
{
	DECLARE_CARD_CSTOR(CNomadsAssemblyCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSurvivalCacheCard : public CCard
{
	DECLARE_CARD_CSTOR(CSurvivalCacheCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener1;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDevastatingSummonsCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevastatingSummonsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CTimeofHeroesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTimeofHeroesCard);
};

//____________________________________________________________________________
//
class CVirulentSwipeCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CVirulentSwipeCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CKorSpiritdancerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorSpiritdancerCard);
};

//____________________________________________________________________________
//
class CArrogantBloodlordCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArrogantBloodlordCard);

protected:
	CCardFilter m_CardFilter;

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CPreysVengeanceCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CPreysVengeanceCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CDawnglareInvokerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDawnglareInvokerCard);
};

//____________________________________________________________________________
//
class CSplinterTwinCard : public CCard
{
	DECLARE_CARD_CSTOR(CSplinterTwinCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);

	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CKhalniHydraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKhalniHydraCard);
		
private:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAngelheartVialCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAngelheartVialCard);

private:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CCard* pCard, CPlayer* pToPlayer, Damage pDamage) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CRepayInKindCard : public CCard
{
    DECLARE_CARD_CSTOR(CRepayInKindCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CKeeningStoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKeeningStoneCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CNarcolepsyCard : public CEnchantCard
{
    DECLARE_CARD_CSTOR(CNarcolepsyCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBroodBirthingCard : public CCard
{
	DECLARE_CARD_CSTOR(CBroodBirthingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRaidBombardmentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRaidBombardmentCard);

protected:
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pCreature, AttackSubject attacked) const;
};

//____________________________________________________________________________
//
class CHedronMatrixCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHedronMatrixCard);
};

//____________________________________________________________________________
//
class CAuraGnarlidCard : public CFearCreatureCard
{
	DECLARE_CARD_CSTOR(CAuraGnarlidCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMulDayaChannelersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMulDayaChannelersCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	counted_ptr<CAbility> CreateAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateAbility2(CCard* pCard);
	counted_ptr<CAbility> CreateAbility3(CCard* pCard);
	counted_ptr<CAbility> CreateAbility4(CCard* pCard);
	counted_ptr<CAbility> CreateAbility5(CCard* pCard);
};

//____________________________________________________________________________
//
class CHellionEruptionCard : public CCard
{
	DECLARE_CARD_CSTOR(CHellionEruptionCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//

class CWarmongersChariotCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWarmongersChariotCard);
};

//____________________________________________________________________________
//
class CChampionsDrakeCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CChampionsDrakeCard);
};

//____________________________________________________________________________
//
class CGrotagSiegeRunnerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGrotagSiegeRunnerCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CBattleRattleShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattleRattleShamanCard);
};

//____________________________________________________________________________
//
class CDranaKalastriaBloodchiefCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDranaKalastriaBloodchiefCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CJaddiLifestriderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJaddiLifestriderCard);

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
class CSpawnsireOfUlamogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpawnsireOfUlamogCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLayBareCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CLayBareCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CCurseOfWizardryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCurseOfWizardryCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;


	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	bool cWhite;
	bool cBlue;
	bool cBlack;
	bool cRed;
	bool cGreen;
};

//____________________________________________________________________________
//
class CExplosiveRevelationCard : public CCard
{
	DECLARE_CARD_CSTOR(CExplosiveRevelationCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CRecurringInsightCard : public CCard
{
	DECLARE_CARD_CSTOR(CRecurringInsightCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSurrealMemoirCard : public CCard
{
	DECLARE_CARD_CSTOR(CSurrealMemoirCard);

protected:
	bool SetTriggerContext(CTriggeredFreeCastAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	BOOL CanPlay1(BOOL bIncludeTricks);	
	BOOL CanPlay2(BOOL bIncludeTricks);		
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CSphinxBoneWandCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSphinxBoneWandCard);

protected:
	CSelectionSupport m_Selection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CThoughtGorgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThoughtGorgerCard);

	bool BeforeResolution(CAbilityAction* pAction);
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CContaminatedGroundCard : public CCard
{
	DECLARE_CARD_CSTOR(CContaminatedGroundCard);

protected:
	CEnchant* m_pEnchantSpell;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenOrientationChanged > TriggeredAbility;

	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard, Orientation fromOrientation, Orientation toOrientation) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CGelatinousGenesisCard : public CCard
{
	DECLARE_CARD_CSTOR(CGelatinousGenesisCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
class CEchoMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEchoMageCard);

protected:
	counted_ptr<CAbility> LevelUpAbility1(CCard* pCard);
	counted_ptr<CAbility> LevelUpAbility2(CCard* pCard);
	BOOL CanPlay(BOOL bIncludeTricks);
};

//_____________________________________________________________________________
//
