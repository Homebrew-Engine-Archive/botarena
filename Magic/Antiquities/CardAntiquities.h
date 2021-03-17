#pragma once

//____________________________________________________________________________
//
__declspec(dllexport) 
counted_ptr<CCard> _cdecl CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID);

//____________________________________________________________________________
//
class CArgivianArchaeologistCard : public CCreatureCard 
{
	DECLARE_CARD_CSTOR(CArgivianArchaeologistCard);
};

//____________________________________________________________________________
//
class CStaffOfZegonCard : public CInPlaySpellCard 
{
	DECLARE_CARD_CSTOR(CStaffOfZegonCard);
};

//____________________________________________________________________________
//
class CWeakstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CWeakstoneCard);
};

//____________________________________________________________________________
//
class CMightstoneCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CMightstoneCard);
};

//____________________________________________________________________________
//
class CArgivianBlacksmithCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CArgivianBlacksmithCard);
};

//____________________________________________________________________________
//
class CArtifactBlastCard : public CCounterSpellCard
{
	DECLARE_CARD_CSTOR(CArtifactBlastCard);
};

//____________________________________________________________________________
//
class CCitanulDruidCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CCitanulDruidCard);
};

//____________________________________________________________________________
//
class CGateToPhyrexiaCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CGateToPhyrexiaCard);
};

//____________________________________________________________________________
//
class COrcishMechanicsCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(COrcishMechanicsCard);
};

//____________________________________________________________________________
//
class CTabletOfEpityrCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CTabletOfEpityrCard);

protected:
	counted_ptr<CAbility> CreateTemporaryAbility();
};

//____________________________________________________________________________
//
class CUrzasChaliceCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CUrzasChaliceCard);
};

//____________________________________________________________________________
//
class CCandelabraOfTawnosCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CCandelabraOfTawnosCard);
};

//____________________________________________________________________________
//
class CSuChiCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CSuChiCard);
};

//____________________________________________________________________________
//
class CGaeasAvengerCard : public CCreatureCard
{
	DECLARE_CARD_CSTOR(CGaeasAvengerCard);
};

//____________________________________________________________________________
//
class CDampingFieldCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CDampingFieldCard);
};

//____________________________________________________________________________
//
class CRakaliteCard : public CInPlaySpellCard
{
	DECLARE_CARD_CSTOR(CRakaliteCard);

protected:
	void OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult);
	ListenerPtr<ResolutionCompletedEventSource::Listener>	m_cpEventListener;
};

//____________________________________________________________________________
//
