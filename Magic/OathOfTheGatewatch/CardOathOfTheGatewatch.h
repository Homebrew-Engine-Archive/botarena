#pragma once

//____________________________________________________________________________
//
__declspec(dllexport)
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CMeanderingRiverCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CMeanderingRiverCard);
};

//____________________________________________________________________________
//
class CSubmergedBoneyardCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CSubmergedBoneyardCard);
};

//____________________________________________________________________________
//
class CCinderBarrensCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CCinderBarrensCard);
};

//____________________________________________________________________________
//
class CTimberGorgeCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTimberGorgeCard);
};

//____________________________________________________________________________
//
class CTranquilExpanseCard : public CNonbasicLandCard
{
	DECLARE_CARD_CSTOR(CTranquilExpanseCard);
};

//____________________________________________________________________________
//
class CAffaProtectorCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAffaProtectorCard);
};

//____________________________________________________________________________
//
class CCanopyGorgerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCanopyGorgerCard);
};

//____________________________________________________________________________
//
class CMakindiAeronautCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CMakindiAeronautCard);
};

//____________________________________________________________________________
//
class CKorSkyClimberCard : public CPumpCreatureCard
{
	DECLARE_CARD_CSTOR(CKorSkyClimberCard);
};

//____________________________________________________________________________
//
class CSearingLightCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CSearingLightCard);
};

//____________________________________________________________________________
//
class CShoulderToShoulderCard : public CCard
{
	DECLARE_CARD_CSTOR(CShoulderToShoulderCard);
};

//____________________________________________________________________________
//
class CCallTheGatewatchCard : public CSearchLibrarySpellCard
{
	DECLARE_CARD_CSTOR(CCallTheGatewatchCard);
protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CMakeAStandCard : public CCard
{
	DECLARE_CARD_CSTOR(CMakeAStandCard);
};

//____________________________________________________________________________
//
class CKorScythemasterCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CKorScythemasterCard);
};

//____________________________________________________________________________
//
class CSpawnbinderMageCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSpawnbinderMageCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class COnduWarClericCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COnduWarClericCard);

protected:
	CCardFilter m_CardFilter;
};

//____________________________________________________________________________
//
class CStoneforgeAcolyteCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CStoneforgeAcolyteCard);

protected:
	CCardFilter m_CardFilter1;
	CCardFilter m_CardFilter2;
};

//____________________________________________________________________________
//
class CMundasVanguardCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CMundasVanguardCard);

protected:
	CCardFilter m_CardFilter;
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener> m_cpEventListener;
};

//____________________________________________________________________________
//
class CSteppeGliderCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CSteppeGliderCard);
};

//____________________________________________________________________________
//
class CReliefCaptainCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CReliefCaptainCard);
};

//____________________________________________________________________________
//
class CExpeditionRaptorCard : public CFlyingCreatureCard
{
	DECLARE_CARD_CSTOR(CExpeditionRaptorCard);
};

//____________________________________________________________________________
//
class CIsolationZoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CIsolationZoneCard);

private:
	CCardFlagModifier m_CardFlagModifier1;
	CCardFlagModifier m_CardFlagModifier2;
};

//_____________________________________________________________________________
//
class CAncientCrabCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CAncientCrabCard);
};

//____________________________________________________________________________
//
class CAlliedReinforcementsCard : public CCard
{
	DECLARE_CARD_CSTOR(CAlliedReinforcementsCard);
};

//____________________________________________________________________________
//
class CImmolatingGlareCard : public CTargetMoveCardSpellCard
{
	DECLARE_CARD_CSTOR(CImmolatingGlareCard);
};

//____________________________________________________________________________
//
