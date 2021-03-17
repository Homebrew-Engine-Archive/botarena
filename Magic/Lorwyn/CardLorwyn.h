#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CForcedFruitionCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CForcedFruitionCard);
};

//____________________________________________________________________________
//
class CThoughtseizeCard : public CCard
{
	DECLARE_CARD_CSTOR(CThoughtseizeCard);

protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CCloudgoatRangerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudgoatRangerCard);

protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CAxegrinderGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAxegrinderGiantCard);
};

//___________________________________________________________________________
//
class CBattlewandOakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBattlewandOakCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CBenthicoreCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBenthicoreCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CBlackPoplarShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlackPoplarShamanCard);
};

//___________________________________________________________________________
//
class CBoggartHarbingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartHarbingerCard);
};

//___________________________________________________________________________
//
class CBoggartLoggersCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartLoggersCard);
};

//___________________________________________________________________________
//
class CBogStriderAshCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CBogStriderAshCard);
};

//___________________________________________________________________________
//
class CCaterwaulingBoggartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCaterwaulingBoggartCard);
};

//___________________________________________________________________________
//
class CCloudcrownOakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudcrownOakCard);
};

//___________________________________________________________________________
//
class CDeeptreadMerrowCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CDeeptreadMerrowCard);
};

//___________________________________________________________________________
//
class CDolmenGateCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDolmenGateCard);
};

//___________________________________________________________________________
//
class CDrownerOfSecretsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDrownerOfSecretsCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CElvishEulogistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishEulogistCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CElvishHandservantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishHandservantCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CElvishHarbingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CEpicProportionsCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CEpicProportionsCard);
};

//___________________________________________________________________________
//
class CEtherealWhiskergillCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CEtherealWhiskergillCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CExiledBoggartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CExiledBoggartCard);
};

//___________________________________________________________________________
//
class CFacevaulterCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFacevaulterCard);
};

//___________________________________________________________________________
//
class CFaerieHarbingerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CFaerieHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CFallowsageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFallowsageCard);
};

//___________________________________________________________________________
//
class CFinalRevelsCard : public CCard
{
	DECLARE_CARD_CSTOR(CFinalRevelsCard);
};

//___________________________________________________________________________
//
class CFlamekinBrawlerCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamekinBrawlerCard);
};

//___________________________________________________________________________
//
class CFlamekinHarbingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamekinHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CFlamekinSpitfireCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamekinSpitfireCard);
};

//___________________________________________________________________________
//
class CFootbottomFeastCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CFootbottomFeastCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CGiantHarbingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiantHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CGiltLeafSeerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGiltLeafSeerCard);
};

//___________________________________________________________________________
//
class CGoldmeadowDodgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldmeadowDodgerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CGoldmeadowHarrierCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldmeadowHarrierCard);
};

//___________________________________________________________________________
//
class CGuardianOfCloverdellCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuardianOfCloverdellCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CHarpoonSniperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHarpoonSniperCard);
};

//___________________________________________________________________________
//
class CHearthcageGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHearthcageGiantCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CHerbalPoulticeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHerbalPoulticeCard);
};

//___________________________________________________________________________
//
class CHillcomberGiantCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CHillcomberGiantCard);
};

//___________________________________________________________________________
//
class CHornetHarasserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHornetHarasserCard);
};

//___________________________________________________________________________
//
class CHurlyBurlyCard : public CCard
{
	DECLARE_CARD_CSTOR(CHurlyBurlyCard);
};

//___________________________________________________________________________
//
class CImperiousPerfectCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CImperiousPerfectCard);
};

//___________________________________________________________________________
//
class CInkfathomDiversCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CInkfathomDiversCard);
};

//___________________________________________________________________________
//
class CJaggedScarArchersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJaggedScarArchersCard);
};

//___________________________________________________________________________
//
class CJudgeOfCurrentsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJudgeOfCurrentsCard);

protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CKinsbaileBalloonistCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CKinsbaileBalloonistCard);
};

//___________________________________________________________________________
//
class CKinsbaileSkirmisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKinsbaileSkirmisherCard);
};

//___________________________________________________________________________
//
class CKithkinDaggerdareCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinDaggerdareCard);
};

//___________________________________________________________________________
//
class CKithkinHarbingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CKithkinHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinHealerCard);
};

//___________________________________________________________________________
//
class CLaceWithMoongloveCard : public CChgPwrTghAttrSpellCard
{
	DECLARE_CARD_CSTOR(CLaceWithMoongloveCard);
};

//___________________________________________________________________________
//
class CLeafGilderCard : public CManaProductionTCreatureCard
{
	DECLARE_CARD_CSTOR(CLeafGilderCard);
};

//___________________________________________________________________________
//
class CLowlandOafCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLowlandOafCard);
};

//___________________________________________________________________________
//
class CLysAlanaHuntmasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLysAlanaHuntmasterCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CMadAuntieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMadAuntieCard);
};

//___________________________________________________________________________
//
class CMerrowHarbingerCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CMoongloveExtractCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMoongloveExtractCard);
};

//___________________________________________________________________________
//
class CMoongloveWinnowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMoongloveWinnowerCard);
};

//___________________________________________________________________________
//
class CMudbuttonTorchrunnerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMudbuttonTorchrunnerCard);
};

//___________________________________________________________________________
//
class CNathOfTheGiltLeafCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNathOfTheGiltLeafCard);
};

//___________________________________________________________________________
//
class CNeckSnapCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CNeckSnapCard);
};

//___________________________________________________________________________
//
class CNightshadeStingerCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNightshadeStingerCard);
};

//___________________________________________________________________________
//
class COakgnarlWarriorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COakgnarlWarriorCard);
};

//___________________________________________________________________________
//
class CPloverKnightsCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPloverKnightsCard);
};

//___________________________________________________________________________
//
class CProtectiveBubbleCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CProtectiveBubbleCard);
};

//___________________________________________________________________________
//
class CScionOfOonaCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CScionOfOonaCard);
};

//___________________________________________________________________________
//
class CSeedguideAshCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSeedguideAshCard);
};

//___________________________________________________________________________
//
class CSentinelsOfGlenElendraCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSentinelsOfGlenElendraCard);
};

//___________________________________________________________________________
//
class CShimmeringGrottoCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShimmeringGrottoCard);
};

//___________________________________________________________________________
//
class CSoaringHopeCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CSoaringHopeCard);
};

//___________________________________________________________________________
//
class CSpiderwigBoggartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiderwigBoggartCard);
};

//___________________________________________________________________________
//
class CSpringleafDrumCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CSpringleafDrumCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStonybrookAnglerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStonybrookAnglerCard);
};

//___________________________________________________________________________
//
class CStreambedAquitectsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStreambedAquitectsCard);
};

//___________________________________________________________________________
//
class CSunriseSovereignCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSunriseSovereignCard);
};

//___________________________________________________________________________
//
class CSurgespannerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSurgespannerCard);
};

//___________________________________________________________________________
//
class CTarPitcherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTarPitcherCard);
};

//___________________________________________________________________________
//
class CThornOfAmethystCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CThornOfAmethystCard);
};

//____________________________________________________________________________
//
class CThorntoothWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThorntoothWitchCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CTideshaperMysticCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTideshaperMysticCard);
};

//___________________________________________________________________________
//
class CTreefolkHarbingerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTreefolkHarbingerCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CVeteranOfTheDepthsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranOfTheDepthsCard);
};

//___________________________________________________________________________
//
class CWanderersTwigCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWanderersTwigCard);
};

//___________________________________________________________________________
//
class CWellgabberApothecaryCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWellgabberApothecaryCard);
};

//___________________________________________________________________________
//
class CWizenedCennCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWizenedCennCard);
};

//___________________________________________________________________________
//
class CWortBoggartAuntieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWortBoggartAuntieCard);
};

//___________________________________________________________________________
//
class CWydwenTheBitingGaleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWydwenTheBitingGaleCard);
};

//___________________________________________________________________________
//
class CZephyrNetCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CZephyrNetCard);
};

//___________________________________________________________________________
//
class CQuillSlingerBoggartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CQuillSlingerBoggartCard);

	protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CThundercloudShamanCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CThundercloudShamanCard);

protected:
	CCardFilter m_CardFilter;
	CCardFilter m_CardFilter2;
	typedef 
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CBattleMasteryCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CBattleMasteryCard);
};

//___________________________________________________________________________
//
class CAEthersnipeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAEthersnipeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CBriarhornCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBriarhornCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCloudthresherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCloudthresherCard);

protected:	
	typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
							   CWhenSelfInplay::EventCallback,
							   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	BOOL CanPlay(BOOL bIncludeTricks);

private:	
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CFaultgrinderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFaultgrinderCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGlarewielderCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CGlarewielderCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CIngotChewerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIngotChewerCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CInnerFlameAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInnerFlameAcolyteCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
//class CKithkinMourncallerCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CKithkinMourncallerCard);
//};
//
////____________________________________________________________________________
////
class CKnightOfMeadowgrainCard : public CFirstStrikeCreatureCard
{
	DECLARE_CARD_CSTOR(CKnightOfMeadowgrainCard);
};

//____________________________________________________________________________
//
class CKnuckleboneWitchCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKnuckleboneWitchCard);
};

//____________________________________________________________________________
//
class CMournwhelkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMournwhelkCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CMulldrifterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMulldrifterCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CShriekmawCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CShriekmawCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSyggRiverGuideCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CSyggRiverGuideCard);
};

//____________________________________________________________________________
//
class CWispmareCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWispmareCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
private:
	bool SetTriggerContextE(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGlimmerdustNapCard : public CCard
{
	DECLARE_CARD_CSTOR(CGlimmerdustNapCard);
};

//_____________________________________________________________________________
//
class CAustereCommandCard : public CCard
{
	DECLARE_CARD_CSTOR(CAustereCommandCard);
};

//_____________________________________________________________________________
//
class CVividCragCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CVividCragCard);
};

//_____________________________________________________________________________
//
class CVividCreekCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CVividCreekCard);
};

//______________________________________________________________________________
//
class CVividGroveCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CVividGroveCard);
};

//_______________________________________________________________________________
//
class CVividMarshCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CVividMarshCard);
};

//________________________________________________________________________________
//
class CVividMeadowCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CVividMeadowCard);
};

//____________________________________________________________________________
//
class CSummontheSchoolCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CSummontheSchoolCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHoofprintsoftheStagCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CHoofprintsoftheStagCard);
};

//____________________________________________________________________________
//
class CThievingSpriteCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CThievingSpriteCard);

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
class CMerrowCommerceCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CMerrowCommerceCard);
};

//_____________________________________________________________________________
//
class CNovaChaserCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CNovaChaserCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CThoughtweftTrioCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CThoughtweftTrioCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CBoggartMobCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CBoggartMobCard);

protected:
	CCardFilter m_GoblinCreatureCardFilter;
private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CWrensRunPackmasterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CWrensRunPackmasterCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CBrionStoutarmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrionStoutarmCard);

protected:
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CCennsHeirCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CCennsHeirCard);

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
class CFathomTrawlCard : public CCard
{
	DECLARE_CARD_CSTOR(CFathomTrawlCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
}; 

//____________________________________________________________________________
//
class CAuntiesHovelCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CAuntiesHovelCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CCrypticCommandCard : public CCard 
{
	DECLARE_CARD_CSTOR(CCrypticCommandCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CBoggartSpriteChaserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartSpriteChaserCard);
};

//____________________________________________________________________________
//
class CKithkinGreatheartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKithkinGreatheartCard);
};

//____________________________________________________________________________
//
class CBurrentonForgeTenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBurrentonForgeTenderCard);
};

//______________________________________________________________________________
//
class CMistbindCliqueCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CMistbindCliqueCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	bool SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
							 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CAdderStaffBoggartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAdderStaffBoggartCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CBrokenAmbitionsCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CBrokenAmbitionsCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CBogHoodlumsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogHoodlumsCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CNathsEliteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNathsEliteCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class COakenBrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COakenBrawlerCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CPaperfinRascalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPaperfinRascalCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CGaddockTeegCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGaddockTeegCard);
	
protected:    
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
	CCardFilter m_CardFilter3;
};

//____________________________________________________________________________
//
class CWoodlandChangelingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWoodlandChangelingCard);
};

//____________________________________________________________________________
//
class CIncandescentSoulstokeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIncandescentSoulstokeCard);

protected:    
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAvianChangelingCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvianChangelingCard);
};

//____________________________________________________________________________
//
class CChangelingBerserkerCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CChangelingBerserkerCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CChangelingHeroCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChangelingHeroCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CChangelingTitanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CChangelingTitanCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CFireBellyChangelingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFireBellyChangelingCard);
};

//____________________________________________________________________________
//
class CGhostlyChangelingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CGhostlyChangelingCard);
};

//____________________________________________________________________________
//
class CSkeletalChangelingCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CSkeletalChangelingCard);
};

//____________________________________________________________________________
//
class CTimberProtectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTimberProtectorCard);
};

//____________________________________________________________________________
//
class CAshlingthePilgrimCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAshlingthePilgrimCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSowerofTemptationCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSowerofTemptationCard);

protected:
	typedef
	TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
							 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CFamiliarsRuseCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CFamiliarsRuseCard);
};

//____________________________________________________________________________
//
class CEyeblightsEndingCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CEyeblightsEndingCard);
};

//____________________________________________________________________________
//
class CWrensRunVanquisherCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWrensRunVanquisherCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CCribSwapCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CCribSwapCard);
};

//____________________________________________________________________________
//
class CBrigidHeroofKinsbaileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrigidHeroofKinsbaileCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CShieldsofVelisVelCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CShieldsofVelisVelCard);
};

//____________________________________________________________________________
//
class CSurgeofThoughtweftCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CSurgeofThoughtweftCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CMerrowReejereyCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMerrowReejereyCard);

protected:
	CCardFilter m_CardFilter;

protected:
	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

private:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

/*class TriggeredAbility :
		public TTriggeredTargetAbility< CTriggeredAbility<>, 
								  CWhenSpellCast > 
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

			// Create a temporary ability to reuse the resolution code
			counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> // must be an ability here, spells cannot resolve correctly in here because of stack requirement
				cpAbility(CreateResolutionAbility<CActivatedAbility<CTargetTapUntapCardSpell>>(
				pPlayer, // to be generated actions' controller
				TRUE, TRUE, new SpecificCardComparer(pAction->GetAssociatedCard()))); // parameters into the ability's constructor after the card and mana cost parameters

			// Get all actions from the ability
			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;

			// For this ability, we only care about the first action so just resolve that			

			return cpAbility->Resolve((CAbilityAction*)(apActions->GetAt(0).GetPointer()));
		}
	};*/
//};

//____________________________________________________________________________
//
class CPollenLullabyCard : public CCard
{
	DECLARE_CARD_CSTOR(CPollenLullabyCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSilvergillDouserCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilvergillDouserCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWhirlpoolWhelmCard : public CCard
{
	DECLARE_CARD_CSTOR(CWhirlpoolWhelmCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CImmaculateMagistrateCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CImmaculateMagistrateCard);

protected:	
	CCardFilter m_CardFilter;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFlamekinBladewhirlCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFlamekinBladewhirlCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CGoldmeadowStalwartCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoldmeadowStalwartCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSilvergillAdeptCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSilvergillAdeptCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSqueakingPieSneakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSqueakingPieSneakCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CAncientAmphitheaterCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CAncientAmphitheaterCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CGiltLeafPalaceCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CGiltLeafPalaceCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSecludedGlenCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CSecludedGlenCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CWanderwineHubCard : public CNonbasicLandCard 
{
	DECLARE_CARD_CSTOR(CWanderwineHubCard);

protected:
	CCardFilter m_CardFilter;
private:
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CSpellstutterSpriteCard : public CFlyingCreatureCard
{
    DECLARE_CARD_CSTOR(CSpellstutterSpriteCard);

protected:

	class TriggeredAbility :
		public TTriggeredTargetAbility< CTriggeredAbility<>, 
		CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > 
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

			counted_ptr<CActivatedAbility<CSpellstutterSpriteSpell>>
				cpAbility(CreateResolutionAbility<CActivatedAbility<CSpellstutterSpriteSpell>>(
				pPlayer, 
				new SpecificCardComparer(pAction->GetAssociatedCard())));


			std::auto_ptr<CActionContainer> apActions(cpAbility->GetAbilityActions(TRUE, FALSE));
			if (!apActions->GetSize())
				return FALSE;
			
			return cpAbility->Resolve((CAbilityAction*)(apActions->GetAt(0).GetPointer()));
		}
	};
	typedef
		TTriggeredTargetAbility<  CTriggeredAbility<>, CWhenSelfInplay, CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility1;
	TriggeredAbility1* m_pTriggeredAbility;

	bool BeforeResolution(TriggeredAbility1::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CRunedStalactiteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRunedStalactiteCard);
};

//____________________________________________________________________________
//
class CAmoeboidChangelingCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAmoeboidChangelingCard);
};

//____________________________________________________________________________
//
class CBlindSpotGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBlindSpotGiantCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDauntlessDourbarkCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDauntlessDourbarkCard);

//protected:
//	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CLysAlanaScarbladeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLysAlanaScarbladeCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMarshFlitterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshFlitterCard);
};

//____________________________________________________________________________
//
class CScarredVinebreederCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CScarredVinebreederCard);
	
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
//class CSentryOakCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CSentryOakCard);
//
//private:
//	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
//
//	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
//};
//
////____________________________________________________________________________
////
class CBoggartShenanigansCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CBoggartShenanigansCard);
};

//____________________________________________________________________________
//
class CProwessOfTheFairCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CProwessOfTheFairCard);
};

//____________________________________________________________________________
//
class CBladesOfVelisVelCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CBladesOfVelisVelCard);
};

//____________________________________________________________________________
//
class CEgoErasureCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CEgoErasureCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CNamelessInversionCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CNamelessInversionCard);
};

//____________________________________________________________________________
//
class CPeppersmokeCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CPeppersmokeCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;

/*private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;*/
};

//____________________________________________________________________________
//
class CRootgrappleCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CRootgrappleCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CTarfireCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CTarfireCard);
};

//____________________________________________________________________________
//
class CWingsOfVelisVelCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CWingsOfVelisVelCard);
};

//____________________________________________________________________________
//
class CBoggartBirthRiteCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CBoggartBirthRiteCard);
};

//____________________________________________________________________________
//
class CConsumingBonfireCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CConsumingBonfireCard);
};

//____________________________________________________________________________
//
class CElvishPromenadeCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CElvishPromenadeCard);
};

//____________________________________________________________________________
//
class CGiantsIreCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CGiantsIreCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWanderwineProphetsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWanderwineProphetsCard);

protected:
	CCardFilter m_CardFilter;

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//____________________________________________________________________________
//
class CFodderLaunchCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CFodderLaunchCard);

protected:
	CCardFilter m_CardFilter;

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CWarrenPilferersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarrenPilferersCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CGoatnapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoatnapperCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CFaerieTrickeryCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CFaerieTrickeryCard);
};

//____________________________________________________________________________
//
class CNathsBuffoonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CNathsBuffoonCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CWarrenScourgeElfCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWarrenScourgeElfCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CPestermiteCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPestermiteCard);

protected:
	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

private:
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility1;
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CHoardersGreedCard : public CCard
{
	DECLARE_CARD_CSTOR(CHoardersGreedCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CStinkdrinkerDaredevilCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStinkdrinkerDaredevilCard);
};

//____________________________________________________________________________
//
class CGalepowderMageCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGalepowderMageCard);

private:
	CCardFilter m_CardFilter;
	CCardFlagModifier m_CardFlagModifier;
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
};

//____________________________________________________________________________
//
class CProfaneCommandCard : public CCard 
{
	DECLARE_CARD_CSTOR(CProfaneCommandCard);

private:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution1(CAbilityAction* pAction) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution2(CAbilityAction* pAction) const;
	bool SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution3(CAbilityAction* pAction) const;
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility2;
	TriggeredAbility2* m_pTriggeredAbility2;
};

//____________________________________________________________________________
//
class CLashOutCard : public CTargetChgLifeSpellCard 
{
	DECLARE_CARD_CSTOR(CLashOutCard);

private:
	bool BeforeResolution1(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CIncendiaryCommandCard : public CCard 
{
	DECLARE_CARD_CSTOR(CIncendiaryCommandCard);

private:
	void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;

	void OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener2;
};

//____________________________________________________________________________
//
class CMakeshiftMannequinCard : public CCard
{
	DECLARE_CARD_CSTOR(CMakeshiftMannequinCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
	counted_ptr<CAbility> CreateSacrificeAbility1(CCard* pCard);
};

//____________________________________________________________________________
//
class CPrimalCommandCard : public CCard 
{
	DECLARE_CARD_CSTOR(CPrimalCommandCard);

private:
	//void OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult);
	//ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener1;
	bool BeforeResolution1(CAbilityAction* pAction) const;	
	bool BeforeResolution2(CAbilityAction* pAction) const;	
	bool BeforeResolution3(CAbilityAction* pAction) const;	

	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;	
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;	
	bool SetTriggerContext3(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
						   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
};

//____________________________________________________________________________
//
class CFaerieTauntingsCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CFaerieTauntingsCard);

private:
	bool SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//_____________________________________________________________________________
//
class CDorantheSiegeTowerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDorantheSiegeTowerCard);
};

//____________________________________________________________________________
//
class CDreamspoilerWitchesCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CDreamspoilerWitchesCard);

private:
	bool SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CGlenElendraPrankstersCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CGlenElendraPrankstersCard);

private:
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CEyesOfTheWisentCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CEyesOfTheWisentCard);

private:
	bool SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CCard* pCard) const;
};

//____________________________________________________________________________
//
class CNectarFaerieCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CNectarFaerieCard);
};

//___________________________________________________________________________
//
class CHealTheScarsCard : public CCard
{
	DECLARE_CARD_CSTOR(CHealTheScarsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CWeedStrangleCard : public CTargetMoveCardSpellCard 
{
	DECLARE_CARD_CSTOR(CWeedStrangleCard);

private:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CLammastideWeaveCard : public CCard
{
	DECLARE_CARD_CSTOR(CLammastideWeaveCard);
};

//____________________________________________________________________________
//
class CHunterofEyeblightsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHunterofEyeblightsCard);
};

//___________________________________________________________________________
//
class CGiltLeafAmbushCard : public CTribalCard
{
	DECLARE_CARD_CSTOR(CGiltLeafAmbushCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
class CMirrorEntityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMirrorEntityCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//___________________________________________________________________________
//
class CVigorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVigorCard);
	
protected:
	typedef
	TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CCreatureCard* pCreature, Damage damage, int effect_index) const;

	TriggeredAbility* m_pTriggeredAbility;

};

//___________________________________________________________________________
//
class CMaskedAdmirersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMaskedAdmirersCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CTurtleshellChangelingCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTurtleshellChangelingCard);
};

//___________________________________________________________________________
//
class CPurityCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPurityCard);
};

//___________________________________________________________________________
//
class CBoggartForagerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBoggartForagerCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CDeathrenderCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDeathrenderCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;

	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;
	
	counted_ptr<CAbility> CreateEquipmentAbility(CCard* pCard);

	private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter;
};

//___________________________________________________________________________
//
class CDreadCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDreadCard);

private:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							 CCard* pCard, CPlayer* pToPlayer, Damage pDamage) ;
};

//____________________________________________________________________________
//
class CSpinerockKnollCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSpinerockKnollCard);

private:
	CCardFlagModifier m_CardFlagModifier1;	
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CWindbriskHeightsCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWindbriskHeightsCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CShelldockIsleCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CShelldockIsleCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
	bool BeforeResolution(CAbilityAction* pAction) const;

protected:
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CMosswortBridgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMosswortBridgeCard);

private:
	CCardFlagModifier m_CardFlagModifier1;	
	CCardFlagModifier m_CardFlagModifier2;
	bool BeforeResolution(CAbilityAction* pAction) const;

protected:
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHowltoothHollowCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CHowltoothHollowCard);

private:
	CCardFlagModifier m_CardFlagModifier1;	
	CCardFlagModifier m_CardFlagModifier2;
	bool BeforeResolution(CAbilityAction* pAction) const;

protected:
	CCardFilter m_CardFilter;
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CHordeofNotionsCard : public CHasteCreatureCard
{
	DECLARE_CARD_CSTOR(CHordeofNotionsCard);
};

//____________________________________________________________________________
//
class CMilitiasPrideCard : public CInPlayTribalSpellCard
{
	DECLARE_CARD_CSTOR(CMilitiasPrideCard);

private:
	bool SetTriggerContext(CAttackingTokenCreationAbility::TriggerContextType& triggerContext,
							 CCreatureCard* pCreatureCard, AttackSubject attacked);
};

//____________________________________________________________________________
//
class CTriclopeanSightCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CTriclopeanSightCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//____________________________________________________________________________
//
class CArbiterOfKnollridgeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArbiterOfKnollridgeCard);

protected:
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
};

//___________________________________________________________________________
//
class CThousandYearElixirCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CThousandYearElixirCard);
};

//____________________________________________________________________________
//
class CNeedleDropCard : public CCard
{
	DECLARE_CARD_CSTOR(CNeedleDropCard);

protected:
	class CNeedleDropTargeting : public CTargeting
	{
	public:
		OVERRIDE(BOOL, TargetAllowed)(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const;
	};
};

//____________________________________________________________________________
//
class CLairwatchGiantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLairwatchGiantCard);

protected:
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
										CWhenSelfAttackedBlocked::BlockEventCallback,
										&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
										CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const;
};

//___________________________________________________________________________
//
class CHostilityCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHostilityCard);
	
protected:
	typedef
	TTriggeredAbility< CTriggeredModifyLifeAbility, CBeforeDamageDealt,
							CBeforeDamageDealt::CreatureEventCallback, 
							&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CCard* pCard, CCreatureCard* pCreature, Damage damage, int effect_index) const;

	TriggeredAbility* m_pTriggeredAbility;

};

//___________________________________________________________________________
//
class CSentryOakCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSentryOakCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolution(CSentryOakCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CSpringjackKnightCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpringjackKnightCard);

protected:
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;


	bool BeforeResolution(CSpringjackKnightCard::TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CFistfulOfForceCard : public CCard
{
	DECLARE_CARD_CSTOR(CFistfulOfForceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CAshlingsPrerogativeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAshlingsPrerogativeCard);

protected:
	VIRTUAL(void, OnSelectionDone)(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_Selection;
	
	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	counted_ptr<CAbility> CreateAdditionAbility1a(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility1b(CCard* pCard);		
	counted_ptr<CAbility> CreateAdditionAbility2(CCard* pCard);		

	CCardFilter m_CardFilter;
	bool bOdd;
};

//____________________________________________________________________________
//
class CGuileCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGuileCard);

private:
	bool SetTriggerContext(CTriggeredFreeCastAbility1::TriggerContextType& triggerContext,
							CCard* pCard, int i) const;
};

//___________________________________________________________________________
//
class CSoulbrightFlamekinCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSoulbrightFlamekinCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	CSelectionSupport m_Selection;
};

//____________________________________________________________________________
//
class CInnerFlameIgniterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CInnerFlameIgniterCard);

private:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);

	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CColfenorsUrnCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CColfenorsUrnCard);

protected:
	CCountedCardContainer_ pExiled;
	
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
			CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction);
	bool SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool BeforeResolution2(CAbilityAction* pAction);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbilityAux;
	bool SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction);

	CSelectionSupport m_Selection;
	void OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CElvishBranchbenderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishBranchbenderCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//______________________________________________________________________________
//
