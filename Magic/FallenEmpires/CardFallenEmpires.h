#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CHymnToTourachCard : public CCard
{
	DECLARE_CARD_CSTOR(CHymnToTourachCard);
};

//____________________________________________________________________________
//
class COrderOfTheEbonHandCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfTheEbonHandCard);
};

//____________________________________________________________________________
//
class COrderOfLeitburCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrderOfLeitburCard);
};

//____________________________________________________________________________
//
class CImplementsOfSacrificeCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CImplementsOfSacrificeCard);
};

//____________________________________________________________________________
//
class CAeolipileCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CAeolipileCard);
};

//____________________________________________________________________________
//
class CBalmOfRestorationCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CBalmOfRestorationCard);
};

//____________________________________________________________________________
//
class CBasalThrullCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CBasalThrullCard);
};

//____________________________________________________________________________
//
class CCombatMedicCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCombatMedicCard);
};

//____________________________________________________________________________
//
class CConchHornCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CConchHornCard);
};

//____________________________________________________________________________
//
class CDwarvenLieutenantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CDwarvenLieutenantCard);
};

//____________________________________________________________________________
//
class CElvenFortressCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElvenFortressCard);
};

//____________________________________________________________________________
//
class CElvenLyreCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CElvenLyreCard);
};

//____________________________________________________________________________
//
class CElvishScoutCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CElvishScoutCard);
};

//____________________________________________________________________________
//
class CGoblinChirurgeonCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGoblinChirurgeonCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHandOfJusticeCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHandOfJusticeCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHighTideCard : public CCard
{
	DECLARE_CARD_CSTOR(CHighTideCard);
};

//____________________________________________________________________________
//
class CHomaridShamanCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHomaridShamanCard);
};

//____________________________________________________________________________
//
class CIcatianLieutenantCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIcatianLieutenantCard);
};

//____________________________________________________________________________
//
class CRiverMerfolkCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CRiverMerfolkCard);
};

//____________________________________________________________________________
//
class CSvyelunitePriestCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSvyelunitePriestCard);
};

//____________________________________________________________________________
//
class CTheloniteDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CTheloniteDruidCard);
};

//____________________________________________________________________________
//
class CVodalianKnightsCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianKnightsCard);

protected:
	BOOL CanAttack(BOOL bIncludeTricks);
	bool SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
class CVodalianMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CVodalianMageCard);
};

//____________________________________________________________________________
//
class CThrullWizardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrullWizardCard);
};

//____________________________________________________________________________
//
class COrcishVeteranCard : public CPumpCreatureCard
{
    DECLARE_CARD_CSTOR(COrcishVeteranCard);

protected:
    CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CThallidCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CThallidCard);
};

//____________________________________________________________________________
//
class CThallidDevourerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CThallidDevourerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CElvishFarmerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CElvishFarmerCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CSporeFlowerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CSporeFlowerCard);
};

//____________________________________________________________________________
//
class CThornThallidCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CThornThallidCard);
};

//____________________________________________________________________________
//
class CFeralThallidCard : public CRegenerationCreatureCard
{
    DECLARE_CARD_CSTOR(CFeralThallidCard);
};

//____________________________________________________________________________
//
class CArmorThrullCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CArmorThrullCard);
};

//____________________________________________________________________________
//
class CDwarvenArmorerCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CDwarvenArmorerCard);
};

//____________________________________________________________________________
//
class CTheloniteMonkCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CTheloniteMonkCard);
};

//____________________________________________________________________________
//
class CIcatianJavelineersCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CIcatianJavelineersCard);
};

//____________________________________________________________________________
//
class CFungalBloomCard : public CInPlaySpellCard
{
    DECLARE_CARD_CSTOR(CFungalBloomCard);
};

//____________________________________________________________________________
//
class CElvishHunterCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CElvishHunterCard);
};

//____________________________________________________________________________
//
class CFarrelitePriestCard : public CCreatureCard
{
    DECLARE_CARD_CSTOR(CFarrelitePriestCard);

protected:
	CAbility* m_pAbility;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
						   CNode* pToNode) const;
};

//____________________________________________________________________________
//
class CRainbowValeCard : public CNonbasicLandCard
{
    DECLARE_CARD_CSTOR(CRainbowValeCard);
};

//____________________________________________________________________________
//
class CTourachsGateCard : public CEnchantCard 
{
	DECLARE_CARD_CSTOR(CTourachsGateCard);

protected:
	CVanishingKeyword m_VanishingKeyword;
	bool SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
	BOOL CanPlay(BOOL bIncludeTricks);

	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CHomaridSpawningBedCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CHomaridSpawningBedCard);

protected:
	bool BeforeResolution(CAbilityAction* pAction) const;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CRingOfRenewalCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRingOfRenewalCard);
};

//____________________________________________________________________________
//
class CThrullChampionCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CThrullChampionCard);

protected:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
	CAbility* m_pStealAbility;
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CHomaridCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CHomaridCard);

protected:
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CTidalInfluenceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTidalInfluenceCard);

protected:
	BOOL CanPlay(BOOL bIncludeTricks);
	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
class CIcatianMoneychangerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CIcatianMoneychangerCard);

protected:
	int_ m_nCounterCount;
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;

	bool BeforeResolution(CAbilityAction* pAction) const;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	OVERRIDE(void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType,
					CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
class CEbonPraetorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CEbonPraetorCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;

	BOOL CanPlay(BOOL bIncludeTricks);
	CAbility* m_pAbility1;
	CAbility* m_pAbility2;
};

//____________________________________________________________________________
//