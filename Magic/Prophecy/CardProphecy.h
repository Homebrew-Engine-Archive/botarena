#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CAlexiSCloakCard : public CCard
{
	DECLARE_CARD_CSTOR(CAlexiSCloakCard);
};

//____________________________________________________________________________
//
class CVitalizingWindCard : public CCard
{
	DECLARE_CARD_CSTOR(CVitalizingWindCard);
};

//____________________________________________________________________________
//
class CAvatarOfWoeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAvatarOfWoeCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAgentOfShaukuCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAgentOfShaukuCard);
};

//____________________________________________________________________________
//
class CAlexiZephyrMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAlexiZephyrMageCard);
};

//____________________________________________________________________________
//
class CAvatarOfFuryCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CAvatarOfFuryCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CAvatarOfWillCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CAvatarOfWillCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CBogElementalCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBogElementalCard);
};

//____________________________________________________________________________
//
class CBogGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CBogGliderCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CChillingApparitionCard : public CRegenerationCreatureCard
{
	DECLARE_CARD_CSTOR(CChillingApparitionCard);
};

//____________________________________________________________________________
//
class CCoffinPuppetsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCoffinPuppetsCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CDarbaCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDarbaCard);
};

//____________________________________________________________________________
//
class CFaultRidersCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CFaultRidersCard);
};

//____________________________________________________________________________
//
class CGreelMindRakerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGreelMindRakerCard);
};

//____________________________________________________________________________
//
class CKeldonArsonistCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeldonArsonistCard);
};

//____________________________________________________________________________
//
class CLatullaKeldonOverseerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CLatullaKeldonOverseerCard);
};

//____________________________________________________________________________
//
class CMagetaTheLionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMagetaTheLionCard);
};

//____________________________________________________________________________
//
class CMarshBoaCard : public CLandwalkCreatureCard
{
	DECLARE_CARD_CSTOR(CMarshBoaCard);
};

//____________________________________________________________________________
//
class CMercenaryInformerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMercenaryInformerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMineBearerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMineBearerCard);
};

//____________________________________________________________________________
//
class CPitRaptorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CPitRaptorCard);
};

//____________________________________________________________________________
//
class CPygmyRazorbackCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPygmyRazorbackCard);
};

//____________________________________________________________________________
//
class CRebelInformerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRebelInformerCard);
};

//____________________________________________________________________________
//
class CRibCageSpiderCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CRibCageSpiderCard);
};

//____________________________________________________________________________
//
class CSiltCrawlerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSiltCrawlerCard);
};

//____________________________________________________________________________
//
class CSpiketailDrakeCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSpiketailDrakeCard);
};

//____________________________________________________________________________
//
class CSporeFrogCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSporeFrogCard);
};

//____________________________________________________________________________
//
class CSquirrelWranglerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSquirrelWranglerCard);
};

//____________________________________________________________________________
//
class CStormwatchEagleCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CStormwatchEagleCard);
};

//____________________________________________________________________________
//
class CThresherBeastCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThresherBeastCard);
};

//____________________________________________________________________________
//
class CTrenchingSteedCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CTrenchingSteedCard);
};

//____________________________________________________________________________
//
class CTroubledHealerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTroubledHealerCard);
};

//____________________________________________________________________________
//
class CTroublesomeSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CTroublesomeSpiritCard);
};

//____________________________________________________________________________
//
class CWhipstitchedZombieCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CWhipstitchedZombieCard);
};

//____________________________________________________________________________
//
class CWindscouterCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CWindscouterCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CWintermoonMesaCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CWintermoonMesaCard);
};

//____________________________________________________________________________
//
class CAuraFractureCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAuraFractureCard);
};

//____________________________________________________________________________
//
class CGreelsCaressCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CGreelsCaressCard);
};

//____________________________________________________________________________
//
class CHeightenedAwarenessCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHeightenedAwarenessCard);
};

//____________________________________________________________________________
//
class CJolraelsFavorCard : public CCard
{
	DECLARE_CARD_CSTOR(CJolraelsFavorCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CMagetasBoonCard : public CChgPwrTghAttrEnchantCard
{
	DECLARE_CARD_CSTOR(CMagetasBoonCard);
};

//____________________________________________________________________________
//
class CRootCageCard : public CCard
{
	DECLARE_CARD_CSTOR(CRootCageCard);
};

//____________________________________________________________________________
//
class CAbolishCard : public CCard
{
	DECLARE_CARD_CSTOR(CAbolishCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CInflameCard : public CGlobalChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CInflameCard);
};

//____________________________________________________________________________
//
class CDenyingWindCard : public CCard
{
	DECLARE_CARD_CSTOR(CDenyingWindCard);
};

//____________________________________________________________________________
//
class CDespoilCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CDespoilCard);
};

//____________________________________________________________________________
//
class CFlameshotCard : public CCard
{
	DECLARE_CARD_CSTOR(CFlameshotCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CManaVaporsCard : public CCard
{
	DECLARE_CARD_CSTOR(CManaVaporsCard);
};

//____________________________________________________________________________
//
class CThriveCard : public CCard
{
	DECLARE_CARD_CSTOR(CThriveCard);
};

//____________________________________________________________________________
//
class CMunghaWurmCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMunghaWurmCard);
};

//____________________________________________________________________________
//
class CBarbedFieldCard : public CCard
{
	DECLARE_CARD_CSTOR(CBarbedFieldCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CFloweringFieldCard : public CCard
{
	DECLARE_CARD_CSTOR(CFloweringFieldCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CLatullasOrdersCard : public CCard
{
	DECLARE_CARD_CSTOR(CLatullasOrdersCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CNoxiousFieldCard : public CCard
{
	DECLARE_CARD_CSTOR(CNoxiousFieldCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CSunkenFieldCard : public CCard
{
	DECLARE_CARD_CSTOR(CSunkenFieldCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CVerdantFieldCard : public CCard
{
	DECLARE_CARD_CSTOR(CVerdantFieldCard);

private:
	counted_ptr<CAbility> CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue);
};

//____________________________________________________________________________
//
class CDevastateCard : public CCard
{
	DECLARE_CARD_CSTOR(CDevastateCard);

private:
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const;
};

//____________________________________________________________________________
//
class CBrandedBrawlersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBrandedBrawlersCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CVeteranBrawlersCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVeteranBrawlersCard);

protected:
	CCardFilter m_CardFilter;
	BOOL CanAttack(BOOL bIncludeTricks);
	BOOL CanBlock(BOOL bIncludeTricks);
};

//____________________________________________________________________________
//
class CKeldonBerserkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKeldonBerserkerCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							AttackSubject attacked) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWellOfDiscoveryCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWellOfDiscoveryCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CWellOfLifeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWellOfLifeCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;
	bool SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
							CNode* pToNode) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CCalmingVerseCard : public CCard
{
	DECLARE_CARD_CSTOR(CCalmingVerseCard);

protected:
    CCardFilter m_CardFilter;
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool BeforeResolution(TriggeredAbility::TriggeredActionType* pAction);
};

//____________________________________________________________________________
//
class CBlessedWindCard : public CTargetChgLifeSpellCard
{
	DECLARE_CARD_CSTOR(CBlessedWindCard);
};

//____________________________________________________________________________
//
class CHazyHomunculusCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHazyHomunculusCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COverburdenCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(COverburdenCard);
};

//____________________________________________________________________________
//
//class CReveilleSquadCard : public CCreatureCard
//{
//	DECLARE_CARD_CSTOR(CReveilleSquadCard);
//
//private:
//	bool SetTriggerContext(CTriggeredTapCardAbility::TriggerContextType& triggerContext, 
//										 CCreatureCard* pCreature,
//										 AttackSubject attacked) const;
//};
//
////____________________________________________________________________________
////
class CStealStrengthCard : public CCard
{
	DECLARE_CARD_CSTOR(CStealStrengthCard);
};

//____________________________________________________________________________
//
class CChimericIdolCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CChimericIdolCard);
};

//____________________________________________________________________________
//
class CJeweledSpiritCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CJeweledSpiritCard);

protected:
	CSelectionSupport m_ColorSelection;
	bool BeforeResolution(CAbilityAction* pAction);
	void OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//____________________________________________________________________________
//
class CSearchForSurvivorsCard : public CCard 
{
	DECLARE_CARD_CSTOR(CSearchForSurvivorsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CFenStalkerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFenStalkerCard);
};

//____________________________________________________________________________
//
class CScoriaCatCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CScoriaCatCard);
};

//____________________________________________________________________________
//
class CSpurGrapplerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpurGrapplerCard);
};

//____________________________________________________________________________
//
class CVintaraSnapperCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVintaraSnapperCard);
};

//____________________________________________________________________________
//
class CPlagueFiendCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CPlagueFiendCard);

protected:
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
							CCreatureCard* pToCreature, Damage damage) const;
};

//_____________________________________________________________________________
//
class CDeathCharmerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDeathCharmerCard);
};

//_____________________________________________________________________________
//
class CForgottenHarvestCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CForgottenHarvestCard);

protected:
	CSelectionSupport m_CardSelection;

	bool BeforeResolution(CAbilityAction* pAction);
	void OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
};

//_____________________________________________________________________________
//
class CDualNatureCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDualNatureCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility1;
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility2;

	bool SetTriggerContext1(TriggeredAbility1::TriggerContextType& triggerContext, CCard* pCard,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction);
	bool SetTriggerContext2(TriggeredAbility2::TriggerContextType& triggerContext, CCard* pCard,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	bool BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction);
	bool BeforeResolution3(CAbilityAction* pAction);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

	CCountedCardContainer_ pTokens;
};

//_____________________________________________________________________________
//
class CFoilCard : public CCard
{
	DECLARE_CARD_CSTOR(CFoilCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);

	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CCopperLeafAngelCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CCopperLeafAngelCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CElephantResurgenceCard : public CCard
{
	DECLARE_CARD_CSTOR(CElephantResurgenceCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CJolraelEmpressOfBeastsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CJolraelEmpressOfBeastsCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
};

//____________________________________________________________________________
//
class CInfernalGenesisCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CInfernalGenesisCard);

protected:
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	bool BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction);
};

//______________________________________________________________________________
//
class CFickleEfreetCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CFickleEfreetCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction);
};

//____________________________________________________________________________
//
