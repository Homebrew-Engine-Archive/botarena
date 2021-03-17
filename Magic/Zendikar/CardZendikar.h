#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CBeastHuntCard : public CCard
{
	DECLARE_CARD_CSTOR(CBeastHuntCard);
};

//____________________________________________________________________________
//
class CRampagingBalothsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRampagingBalothsCard);
};

//____________________________________________________________________________
//
class CHideousEndCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CHideousEndCard);
};

//____________________________________________________________________________
//
class CValakutTheMoltenPinnacleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CValakutTheMoltenPinnacleCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CPlatedGeopedeCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CPlatedGeopedeCard);
};

//____________________________________________________________________________
//
class CEmeriaTheSkyRuinCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CEmeriaTheSkyRuinCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CAridMesaCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CAridMesaCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScytheTigerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScytheTigerCard);
};

//____________________________________________________________________________
//
class CTeeteringPeaksCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CTeeteringPeaksCard);
};

//____________________________________________________________________________
//
class CWindriderEelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindriderEelCard);
};

//____________________________________________________________________________
//
class CElementalAppealCard : public CCard
{
	DECLARE_CARD_CSTOR(CElementalAppealCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	CPowerModifier	m_PowerModifier;
	CManaCost		m_KickerCost;
};

//____________________________________________________________________________
//
class CNissasChosenCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNissasChosenCard);

public:
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Bottom, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CMistyRainforestCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMistyRainforestCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMarshFlatsCard: public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CMarshFlatsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVerdantCatacombsCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CVerdantCatacombsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CScaldingTarnCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CScaldingTarnCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CDevoutLightcasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDevoutLightcasterCard);
};

//____________________________________________________________________________
//
class CCarnageAltarCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCarnageAltarCard);
};

//____________________________________________________________________________
//
class CScuteMobCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScuteMobCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//	
class CGeyserGliderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGeyserGliderCard);
};

//____________________________________________________________________________
//	
class CBalothWoodcrasherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBalothWoodcrasherCard);
};

//____________________________________________________________________________
//
class CConquerorsPledgeCard : public CCard
{
	DECLARE_CARD_CSTOR(CConquerorsPledgeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CManaCost m_KickerCost;
};

//____________________________________________________________________________
//
class CEmeriaAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEmeriaAngelCard);
};

//____________________________________________________________________________
//
class CKorCartographerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorCartographerCard);
};

//____________________________________________________________________________
//
class CKorSkyfisherCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKorSkyfisherCard);
};

//____________________________________________________________________________
//
class CNarrowEscapeCard : public CCard
{
	DECLARE_CARD_CSTOR(CNarrowEscapeCard);
};

//____________________________________________________________________________
//
class CShepherdOfTheLostCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CShepherdOfTheLostCard);
};

//____________________________________________________________________________
//
class CSteppeLynxCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSteppeLynxCard);
};

//____________________________________________________________________________
//
class CHedronCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHedronCrabCard);
};

//____________________________________________________________________________
//
class CIntoTheRoilCard : public CCard
{
	DECLARE_CARD_CSTOR(CIntoTheRoilCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CLivingTsunamiCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CLivingTsunamiCard);
};

//____________________________________________________________________________
//
class CRecklessScholarCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRecklessScholarCard);
};

//____________________________________________________________________________
//
class CSpellPierceCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CSpellPierceCard);
};

//____________________________________________________________________________
//
class CSphinxOfJwarIsleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSphinxOfJwarIsleCard);
};

//____________________________________________________________________________
//
class CDisfigureCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CDisfigureCard);
};

//____________________________________________________________________________
//
class CSadisticSacramentCard : public CCard
{
	DECLARE_CARD_CSTOR(CSadisticSacramentCard);
};

//____________________________________________________________________________
//
class CBurstLightningCard : public CCard
{
	DECLARE_CARD_CSTOR(CBurstLightningCard);
};

//____________________________________________________________________________
//
class CFrontierGuideCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFrontierGuideCard);
};

//____________________________________________________________________________
//
class CGrazingGladehartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGrazingGladehartCard);
};

//____________________________________________________________________________
//
class CGreenweaverDruidCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CGreenweaverDruidCard);
};

//____________________________________________________________________________
//
class CLotusCobraCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLotusCobraCard);
};

//____________________________________________________________________________
//
class CTerraStomperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerraStomperCard);
};

//____________________________________________________________________________
//
class CZendikarFarguideCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CZendikarFarguideCard);
};

//____________________________________________________________________________
//
class CExpeditionMapCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExpeditionMapCard);
};

//____________________________________________________________________________
//
class CHedronScrabblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHedronScrabblerCard);
};

//____________________________________________________________________________
//
class CTrustyMacheteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrustyMacheteCard);
};

//____________________________________________________________________________
//
class CAkoumRefugeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CAkoumRefugeCard);
};

//____________________________________________________________________________
//
class CGraypeltRefugeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CGraypeltRefugeCard);
};

//____________________________________________________________________________
//
class CJwarIsleRefugeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CJwarIsleRefugeCard);
};

//____________________________________________________________________________
//
class CKazanduRefugeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKazanduRefugeCard);
};

//____________________________________________________________________________
//
class CSejiriRefugeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSejiriRefugeCard);
};

//____________________________________________________________________________
//
class CKabiraCrossroadsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CKabiraCrossroadsCard);
};

//____________________________________________________________________________
//
class CPiranhaMarshCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CPiranhaMarshCard);
};

//____________________________________________________________________________
//
class CSoaringSeacliffCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSoaringSeacliffCard);
};

//____________________________________________________________________________
//
class CTurntimberGroveCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTurntimberGroveCard);
};

//____________________________________________________________________________
//
class CBogTattersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBogTattersCard);
};

//____________________________________________________________________________
//
class CBoldDefenseCard : public CCard
{
	DECLARE_CARD_CSTOR(CBoldDefenseCard);
};

//____________________________________________________________________________
//
class CCallerOfGalesCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCallerOfGalesCard);
};

//____________________________________________________________________________
//
class CCaravanHurdaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaravanHurdaCard);
};

//____________________________________________________________________________
//
class CCliffThreaderCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CCliffThreaderCard);
};

//____________________________________________________________________________
//
class CCryptRipperCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCryptRipperCard);
};

//____________________________________________________________________________
//
class CHagraCrocodileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHagraCrocodileCard);
};

//____________________________________________________________________________
//
class CHellfireMongrelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHellfireMongrelCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
						   CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CLandbindRitualCard : public CCard
{
	DECLARE_CARD_CSTOR(CLandbindRitualCard);
};

//____________________________________________________________________________
//
class CMagmaRiftCard : public CCard
{
	DECLARE_CARD_CSTOR(CMagmaRiftCard);
};

//____________________________________________________________________________
//
class CMarshCasualtiesCard : public CCard
{
	DECLARE_CARD_CSTOR(CMarshCasualtiesCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMerfolkSeastalkersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMerfolkSeastalkersCard);
};

//____________________________________________________________________________
//
class CMoltenRavagerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CMoltenRavagerCard);
};

//____________________________________________________________________________
//
class CNimbusWingsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CNimbusWingsCard);
};

//____________________________________________________________________________
//
class CNobleVestigeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNobleVestigeCard);
};

//____________________________________________________________________________
//
class CParalyzingGraspCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CParalyzingGraspCard);
};

//____________________________________________________________________________
//
class CSeismicShudderCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CSeismicShudderCard);
};

//____________________________________________________________________________
//
class CShatterskullGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShatterskullGiantCard);
};

//____________________________________________________________________________
//
class CShieldmatesBlessingCard : public CCard
{
	DECLARE_CARD_CSTOR(CShieldmatesBlessingCard);
};

//____________________________________________________________________________
//
class CShoalSerpentCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShoalSerpentCard);
};

//____________________________________________________________________________
//
class CSkyRuinDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSkyRuinDrakeCard);
};

//____________________________________________________________________________
//
class CSpidersilkNetCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpidersilkNetCard);
};

//____________________________________________________________________________
//
class CSpireBarrageCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpireBarrageCard);
};

//____________________________________________________________________________
//
class CSpreadingSeasCard : public CCard
{
	DECLARE_CARD_CSTOR(CSpreadingSeasCard);
};

//____________________________________________________________________________
//
class CStoneworkPumaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneworkPumaCard);
};

//____________________________________________________________________________
//
class CSummonersBaneCard : public CCard
{
	DECLARE_CARD_CSTOR(CSummonersBaneCard);
};

//____________________________________________________________________________
//
class CTerritorialBalothCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTerritorialBalothCard);
};

//____________________________________________________________________________
//
class CVinesOfVastwoodCard : public CCard
{
	DECLARE_CARD_CSTOR(CVinesOfVastwoodCard);

protected:
	CCardFilter m_CardFilter;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CWarrenInstigatorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarrenInstigatorCard);
};

//____________________________________________________________________________
//
class CAdventuringGearCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAdventuringGearCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);
};

//____________________________________________________________________________
//
class CAEtherFigmentCard : public CUnblockableCreatureCard
{
	DECLARE_CARD_CSTOR(CAEtherFigmentCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CArrowVolleyTrapCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CArrowVolleyTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CGatekeeperOfMalakirCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGatekeeperOfMalakirCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CBladeOfTheBloodchiefCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBladeOfTheBloodchiefCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CKorSanctifiersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorSanctifiersCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CBlazingTorchCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBlazingTorchCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CBloodTributeCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBloodTributeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCryptOfAgadeemCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCryptOfAgadeemCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDesecratedEarthCard : public CCard
{
	DECLARE_CARD_CSTOR(CDesecratedEarthCard);

protected:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CElectropotenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElectropotenceCard);
	
private:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;

	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CExplorersScopeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CExplorersScopeCard);

private:
	counted_ptr<CAbility> CreateEquipmentAbility1(CCard* pCard);
	counted_ptr<CAbility> CreateEquipmentAbility2(CCard* pCard);

protected:
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardKeywordChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CFeastOfBloodCard : public CCard
{
	DECLARE_CARD_CSTOR(CFeastOfBloodCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CFelidarSovereignCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFelidarSovereignCard);

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

			if (pPlayer->GetLife() < Life(40))
				return;

			__super::CallEventCallback(pToNode);
		}
	};

	typedef 
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;
	bool SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CGoblinBushwhackerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinBushwhackerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CGoblinGuideCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinGuideCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoblinRuinblasterCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CGoblinRuinblasterCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CGuulDrazSpecterCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CGuulDrazSpecterCard);
};

//____________________________________________________________________________
//
class CGuulDrazVampireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuulDrazVampireCard);
};

//____________________________________________________________________________
//
class CGrimDiscoveryCard : public CCard
{
	DECLARE_CARD_CSTOR(CGrimDiscoveryCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
/*private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	BOOL CanPlay1(BOOL bIncludeTricks);
	BOOL CanPlay2(BOOL bIncludeTricks);
	BOOL CanPlay3(BOOL bIncludeTricks);*/
};

//____________________________________________________________________________
//
class CHaloHunterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHaloHunterCard);
};

//____________________________________________________________________________
//
class CHeartstabberMosquitoCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHeartstabberMosquitoCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CHagraDiabolistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHagraDiabolistCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CHighlandBerserkerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CHighlandBerserkerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHellkiteChargerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CHellkiteChargerCard);
};

//____________________________________________________________________________
//
class CKabiraEvangelCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKabiraEvangelCard);

protected:
	CCardFilter m_CardFilter;
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CIonaShieldOfEmeriaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CIonaShieldOfEmeriaCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext3(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext4(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext5(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
	bool SetTriggerContext6(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CKalitasBloodchiefOfGhetCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKalitasBloodchiefOfGhetCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CJoragaBardCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CJoragaBardCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSeascapeAerialistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSeascapeAerialistCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKazanduBlademasterCard : public CFirstStrikeCreatureCard
{
    DECLARE_CARD_CSTOR(CKazanduBlademasterCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKazuulWarlordCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CKazuulWarlordCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKorAeronautCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CKorAeronautCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CKhalniGemCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKhalniGemCard);
};

//____________________________________________________________________________
//
class CLethargyTrapCard : public CCard
{
    DECLARE_CARD_CSTOR(CLethargyTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBalaGedThiefCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBalaGedThiefCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CMakindiShieldmateCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMakindiShieldmateCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMindlessNullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMindlessNullCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMoldShamblerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoldShamblerCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CMurasaPyromancerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CMurasaPyromancerCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CNimanaSellSwordCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CNimanaSellSwordCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COnduClericCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(COnduClericCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class COranRiefSurvivalistCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(COranRiefSurvivalistCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COranRiefRecluseCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COranRiefRecluseCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CPitfallTrapCard : public CCard
{
    DECLARE_CARD_CSTOR(CPitfallTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRelicCrushCard : public CTargetMoveCardSpellCard
{
    DECLARE_CARD_CSTOR(CRelicCrushCard);
};

//____________________________________________________________________________
//
class CSurrakarMarauderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSurrakarMarauderCard);
};

//____________________________________________________________________________
//
class CTajuruArcherCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTajuruArcherCard);

protected:
	CCardFilter m_CardFilter;
	typedef 
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTempestOwlCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CTempestOwlCard);

protected:
	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CTorchSlingerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTorchSlingerCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
private:
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CTuktukGruntsCard : public CHasteCreatureCard
{
    DECLARE_CARD_CSTOR(CTuktukGruntsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CUmaraRaptorCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CUmaraRaptorCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CVampireLaceratorCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CVampireLaceratorCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWindborneChargeCard : public CChgPwrTghAttrSpellCard
{
    DECLARE_CARD_CSTOR(CWindborneChargeCard);
};

//____________________________________________________________________________
//
class CMalakirBloodwitchCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CMalakirBloodwitchCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CMerfolkWayfinderCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CMerfolkWayfinderCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMireBlightCard : public CCard
{
	DECLARE_CARD_CSTOR(CMireBlightCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
						   CCard* pCard, CCreatureCard* pToCreature, Damage damage) const;
};

//____________________________________________________________________________
//
class CMindbreakTrapCard : public CCard
{
    DECLARE_CARD_CSTOR(CMindbreakTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CNissaRevaneCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CNissaRevaneCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
};

//____________________________________________________________________________
//
class CObNixilisTheFallenCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CObNixilisTheFallenCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CPredatoryUrgeCard : public CCard
{
    DECLARE_CARD_CSTOR(CPredatoryUrgeCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CPrimalBellowCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CPrimalBellowCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CRuinousMinotaurCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CRuinousMinotaurCard);
};

//____________________________________________________________________________
//
class CRuneflareTrapCard : public CCard
{
    DECLARE_CARD_CSTOR(CRuneflareTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CSeaGateLoremasterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSeaGateLoremasterCard);
};

//____________________________________________________________________________
//
class CSphinxOfLostTruthsCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSphinxOfLostTruthsCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback,
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType) const;
	
	CManaCost	m_KickerCost;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CTanglesapCard : public CCard
{
    DECLARE_CARD_CSTOR(CTanglesapCard);
};

//____________________________________________________________________________
//
class CTimbermawLarvaCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTimbermawLarvaCard);

protected:
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CTurntimberRangerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTurntimberRangerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTrailblazersBootsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTrailblazersBootsCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMagositheWaterveilCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMagositheWaterveilCard);
};

//______________________________________________________________________________
//
class CTrapfindersTrickCard : public CCard
{
	DECLARE_CARD_CSTOR(CTrapfindersTrickCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CTrapmakersSnareCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CTrapmakersSnareCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CKhalniHeartExpeditionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CKhalniHeartExpeditionCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CIorRuinExpeditionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIorRuinExpeditionCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CSoulStairExpeditionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSoulStairExpeditionCard);


private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CSunspringExpeditionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSunspringExpeditionCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CZektarShrineExpeditionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CZektarShrineExpeditionCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;

	bool CZektarShrineExpeditionCard::BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CQuestfortheGravelordCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestfortheGravelordCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CQuestforAncientSecretsCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestforAncientSecretsCard);

private:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	 typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved  > TriggeredAbility;	
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CQuestforPureFlameCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestforPureFlameCard);
};

//____________________________________________________________________________
//
class CJourneyToNowhereCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CJourneyToNowhereCard);

protected:
	CCountedCardContainer_ pExiled;

	bool BeforeResolution1(CAbilityAction* pAction);

	typedef
		TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CEternityVesselCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEternityVesselCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	typedef
		TTriggeredSubjectAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBloodchiefAscensionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBloodchiefAscensionCard);

protected:
	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;
	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CLuminarchAscensionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CLuminarchAscensionCard);

protected:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution(CAbilityAction* pAction) const;
	BOOL CanPlay(BOOL bIncludeTricks);
};
	
//____________________________________________________________________________
//
class CQuestfortheGembladesCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestfortheGembladesCard);
};

//_____________________________________________________________________________
//
class CArchiveTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CArchiveTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CEldraziMonumentCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CEldraziMonumentCard);
};

//____________________________________________________________________________
//
class COranRieftheVastwoodCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(COranRieftheVastwoodCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCelestialMantleCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CCelestialMantleCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//___________________________________________________________________________
//
class CVampiresBiteCard : public CCard
{
	DECLARE_CARD_CSTOR(CVampiresBiteCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CManaCost	m_KickerCost;
};

//____________________________________________________________________________
//
class CBloodghastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBloodghastCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility1;
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CUnstableFootingCard : public CCard
{
	DECLARE_CARD_CSTOR(CUnstableFootingCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CVampireHexmageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVampireHexmageCard);
};

//____________________________________________________________________________
//
class CWorldQuellerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWorldQuellerCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;	
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	void OnCardFilterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_CardFilterSelection;
};

//____________________________________________________________________________
//
class CBeastmasterAscensionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBeastmasterAscensionCard);
};

//____________________________________________________________________________
//
class CQuestfortheHolyRelicCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CQuestfortheHolyRelicCard);

protected:
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	ListenerPtr<SelectionEventSource::Listener> m_cpSelectionListener;

	bool BeforeResolution(CAbilityAction* pAction);
	CCard* pEquipment;

private:

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;

	typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;
	TriggeredAbility* m_pTriggeredAbility;
};

//____________________________________________________________________________
//
class CSummoningTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CSummoningTrapCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CRiteofReplicationCard : public CCard
{
	DECLARE_CARD_CSTOR(CRiteofReplicationCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;	
	CManaCost m_KickerCost;
};

//____________________________________________________________________________
//
class COracleofMulDayaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COracleofMulDayaCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CLorthostheTidemakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLorthostheTidemakerCard);

private:	
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CPunishingFireCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CPunishingFireCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   const CPlayer* pPlayer, Life nFromLife, Life nToLife) const;
};

//____________________________________________________________________________
//
class CKorOutfitterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorOutfitterCard);
};

//____________________________________________________________________________
//
class CKorDuelistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorDuelistCard);
};

//____________________________________________________________________________
//
class CSavageSilhouetteCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSavageSilhouetteCard);

protected:
	counted_ptr<CAbility> CreateAdditionalAbility(CCard* pCard);
};

//____________________________________________________________________________
//
/*class CObsidianFireheartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CObsidianFireheartCard);
protected:
	void ForceStart(CAbility* pAbility) const; 
	counted_ptr<CAbility> CreateAbility(CCard* pCard);
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	ListenerPtr<CounterMovedEventSource::Listener> m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
	CPtrContainer_<CCard>	m_AffectedCards;

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpCListener;	

};*/

//____________________________________________________________________________
//
class CPyromancerAscensionCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CPyromancerAscensionCard);

private:

	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
						    CCard* pCard) const;
	bool SetTriggerContext2(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext,
						    CCard* pCard) const;
	typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;
	TriggeredAbility* m_pTriggeredAbility;
};
//____________________________________________________________________________
//
class CChandraAblazeCard : public CPlaneswalkerCard
{
	DECLARE_CARD_CSTOR(CChandraAblazeCard);

protected:
	CSelectionSupport m_CardSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGomazoaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGomazoaCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CBalothCageTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CBalothCageTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CLavaballTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CLavaballTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CWhiplashTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhiplashTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CNeedlebiteTrapCard : public CCard
{
	DECLARE_CARD_CSTOR(CNeedlebiteTrapCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CKorHookmasterCard: public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorHookmasterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//