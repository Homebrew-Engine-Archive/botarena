#include "stdafx.h"
#include "CardEffects.h"

#define new DEBUG_NEW

#define DEFINE_TOKEN(T)	\
	if (!_tcsicmp(strTokenName, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		// Add new card class names here:
		// For example:
		// 	DEFINE_CARD(CDefenderEnVecCard);

		DEFINE_TOKEN(CDomriRadeEmblemToken);
		DEFINE_TOKEN(CElspethSunsChampionEmblemToken);
		DEFINE_TOKEN(CKothOfTheHammerEmblemToken);
		DEFINE_TOKEN(CLilianaOfTheDarkRealmsEmblemToken);
		DEFINE_TOKEN(CSorinLordOfInnistradEmblemToken);
		DEFINE_TOKEN(CTamiyoTheMoonSageEmblemToken);
		DEFINE_TOKEN(CVenserTheSojournerEmblemToken);

//		DEFINE_TOKEN(CADisplayOfMyDarkPowerEffectToken);
		DEFINE_TOKEN(CAcidicDaggerEffectToken);
		DEFINE_TOKEN(CAdarkarValkyrieEffectToken);
		DEFINE_TOKEN(CAlchemistsRefugeEffectToken);
		DEFINE_TOKEN(CArcaneDenialEffectToken);
		DEFINE_TOKEN(CArchangelOfStrifeWarEffectToken);
		DEFINE_TOKEN(CArchangelOfStrifePeaceEffectToken);
		DEFINE_TOKEN(CApproachMyMoltenRealmEffectToken);
		DEFINE_TOKEN(CAweForTheGuildsEffectToken);
		DEFINE_TOKEN(CBasaltGolemEffectToken);
		DEFINE_TOKEN(CBattleCryEffectToken);
		DEFINE_TOKEN(CBeckEffectToken);
		DEFINE_TOKEN(CBerserkEffectToken);
		DEFINE_TOKEN(CBidentOfThassaEffectToken);
		DEFINE_TOKEN(CBloodlordOfVaasgothEffectToken);
		DEFINE_TOKEN(CBroodOfCockroachesEffectToken);
		DEFINE_TOKEN(CBubblingMuckEffectToken);
		DEFINE_TOKEN(CBurnAwayEffectToken);
//		DEFINE_TOKEN(CChancellorOfTheAnnexEffectToken);
//		DEFINE_TOKEN(CChancellorOfTheDrossEffectToken);
//		DEFINE_TOKEN(CChancellorOfTheForgeEffectToken);
//		DEFINE_TOKEN(CChancellorOfTheSpiresEffectToken);
//		DEFINE_TOKEN(CChancellorOfTheTangleEffectToken);
		DEFINE_TOKEN(CChandraTheFirebrandEffectToken);
		DEFINE_TOKEN(CChannelEffectToken);
		DEFINE_TOKEN(CCoffinQueenEffectToken);
		DEFINE_TOKEN(CContemptEffectToken);
		DEFINE_TOKEN(CDuskmantleGuildmageEffectToken);
		DEFINE_TOKEN(CDwarvenSeaClanEffectToken);
		DEFINE_TOKEN(CEndOfCombatBounceEffectToken);
		DEFINE_TOKEN(CEndOfCombatDestroyEffectToken);
		DEFINE_TOKEN(CEndOfCombatExileEffectToken);
		DEFINE_TOKEN(CEndOfCombatRemovePlusCounterEffectToken);
		DEFINE_TOKEN(CEndOfCombatSacrificeEffectToken);
		DEFINE_TOKEN(CEndOfCombatTopOfLibraryEffectToken);
		DEFINE_TOKEN(CEndStepBounceEffectToken);
		DEFINE_TOKEN(CEndStepDestroyEffectToken);
		DEFINE_TOKEN(CEndStepDestroyPacifistsEffectToken);
		DEFINE_TOKEN(CEndStepExileEffectToken);
		DEFINE_TOKEN(CEndStepRaiseEffectToken);
		DEFINE_TOKEN(CEndStepReanimateEffectToken);
		DEFINE_TOKEN(CEndStepReturnFromExileEffectToken);
		DEFINE_TOKEN(CEndStepSacrificeEffectToken);
		DEFINE_TOKEN(CEndStepSureSacrificeEffectToken);
		DEFINE_TOKEN(CEnterTheInfiniteEffectToken);
		DEFINE_TOKEN(CEtherswornShieldmageEffectToken);
		DEFINE_TOKEN(CFalseMemoriesEffectToken);
		DEFINE_TOKEN(CFalterEffectToken);
		DEFINE_TOKEN(CFickleEfreetEffectToken);
		DEFINE_TOKEN(CFlashOfDefianceEffectToken);
		DEFINE_TOKEN(CFlickerformEffectToken);
		DEFINE_TOKEN(CFrostwebSpiderEffectToken);
		DEFINE_TOKEN(CGenericContainerBattlefieldToken);
		DEFINE_TOKEN(CGenericContainerExileToken);
		DEFINE_TOKEN(CGiantCaterpillarPupaToken);
		DEFINE_TOKEN(CGiftOfImmortalityEffectToken);
		DEFINE_TOKEN(CGlimpseofNatureEffectToken);
		DEFINE_TOKEN(CGlyphOfLifeEffectToken);
		DEFINE_TOKEN(CGoblinDiplomatsEffectToken);
		DEFINE_TOKEN(CGoblinKitesEffectToken);
		DEFINE_TOKEN(CGracefulReprieveEffectToken);
		DEFINE_TOKEN(CGraveBetrayalEffectToken);
		DEFINE_TOKEN(CGruulCharmEffectToken);
		DEFINE_TOKEN(CHazezonTamarEffectToken);
		DEFINE_TOKEN(CHeartWolfEffectToken);
		DEFINE_TOKEN(CHighTideEffectToken);
		DEFINE_TOKEN(CIdeasUnboundEffectToken);
		DEFINE_TOKEN(CIgnorantBlissEffectToken);
		DEFINE_TOKEN(CInitiateOfBloodEffectToken);
		DEFINE_TOKEN(CInsistEffectToken);
		DEFINE_TOKEN(CInterventionPactEffectToken);
		DEFINE_TOKEN(CJaceArchitectOfThoughtEffectToken);
		DEFINE_TOKEN(CKjeldoranEliteGuardEffectToken);
		DEFINE_TOKEN(CKjeldoranGuardEffectToken);
		DEFINE_TOKEN(CLatNamsLegacyEffectToken);
		DEFINE_TOKEN(CLegionsInitiativeEffectToken);
		DEFINE_TOKEN(CLoyalCatharEffectToken);
		DEFINE_TOKEN(CMaddeningImpEffectToken);
		DEFINE_TOKEN(CMagusOfTheJarEffectToken);
		DEFINE_TOKEN(CManaDrainEffectToken);
		DEFINE_TOKEN(CMemoryJarEffectToken);
		DEFINE_TOKEN(CMoonmistEffectToken);
		DEFINE_TOKEN(CMystifyingMazeEffectToken);
		DEFINE_TOKEN(CNecropotenceEffectToken);
		DEFINE_TOKEN(COtherworldlyJourneyEffectToken);
		DEFINE_TOKEN(COvermasterEffectToken);
		DEFINE_TOKEN(CPactofNegationEffectToken);
		DEFINE_TOKEN(CPactOfTheTitanEffectToken);
		DEFINE_TOKEN(CPhantasmalMountEffectToken);
		DEFINE_TOKEN(CPlasmCaptureEffectToken);
		DEFINE_TOKEN(CPraetorsCounselEffectToken);
		DEFINE_TOKEN(CProteanHydraEffectToken);
		DEFINE_TOKEN(CPureIntentionsEffectToken);
		DEFINE_TOKEN(CQuickenEffectToken);
		DEFINE_TOKEN(CRainbowValeEffectToken);
		DEFINE_TOKEN(CReincarnationEffectToken);
		DEFINE_TOKEN(CRescueFromTheUnderworldEffectToken);
		DEFINE_TOKEN(CRukhEggEffectToken);
		DEFINE_TOKEN(CRuneswordEffectToken);
		DEFINE_TOKEN(CRuthlessInvasionEffectToken);
		DEFINE_TOKEN(CSaffiEriksdotterEffectToken);
		DEFINE_TOKEN(CSandalsOfAbdallahEffectToken);
		DEFINE_TOKEN(CSandGolemEffectToken);
		DEFINE_TOKEN(CSavageSummoningFirstEffectToken);
		DEFINE_TOKEN(CSavageSummoningSecondEffectToken);
		DEFINE_TOKEN(CSawtoothOgreEffectToken);
		DEFINE_TOKEN(CSearingBloodEffectToken);
		DEFINE_TOKEN(CSeismicStompEffectToken);
		DEFINE_TOKEN(CSeraphFirstEffectToken);
		DEFINE_TOKEN(CSeraphSecondEffectToken);
		DEFINE_TOKEN(CScatteringStrokeEffectToken);
		DEFINE_TOKEN(CScoutsWarningEffectToken);
		DEFINE_TOKEN(CShichifukujinDragonEffectToken);
		DEFINE_TOKEN(CShiftyDoppelgangerEffectToken);
		DEFINE_TOKEN(CShireiShizosCaretakerEffectToken);
		DEFINE_TOKEN(CSirensCallEffectToken);
		DEFINE_TOKEN(CSkeletonizeEffectToken);
		DEFINE_TOKEN(CSlaughterPactEffectToken);
		DEFINE_TOKEN(CSlowtripEffectToken);
		DEFINE_TOKEN(CSpinalEmbraceEffectToken);
		DEFINE_TOKEN(CStoneshockGiantEffectToken);
		DEFINE_TOKEN(CSummonersPactEffectToken);
		DEFINE_TOKEN(CTatsumasaTheDragonsFangEffectToken);
		DEFINE_TOKEN(CTemurCharmEffectToken);
		DEFINE_TOKEN(CThePiecesAreComingTogetherEffectToken);
		DEFINE_TOKEN(CTimeToFeedEffectToken);
		DEFINE_TOKEN(CTransluminantEffectToken);
		DEFINE_TOKEN(CUpkeepStepReanimateEffectToken);
		DEFINE_TOKEN(CVanishIntoMemoryEffectToken);
		DEFINE_TOKEN(CVirulentWoundEffectToken);
		DEFINE_TOKEN(CVizkopaGuildmageEffectToken);
		DEFINE_TOKEN(CWarBargeEffectToken);
		DEFINE_TOKEN(CWindingCanyonsEffectToken);
		DEFINE_TOKEN(CYourPunyMindsCannotFathomEffectToken);
		DEFINE_TOKEN(CZombieBoaWhiteEffectToken);
		DEFINE_TOKEN(CZombieBoaBlueEffectToken);
		DEFINE_TOKEN(CZombieBoaBlackEffectToken);
		DEFINE_TOKEN(CZombieBoaRedEffectToken);
		DEFINE_TOKEN(CZombieBoaGreenEffectToken);

		
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here

void CEffectCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::_Effects)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//

CGruulCharmEffectToken::CGruulCharmEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Gruul Charm Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CVizkopaGuildmageEffectToken::CVizkopaGuildmageEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Vizkopa Guildmage Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenPlayerLifeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		
		cpAbility->GetTrigger().SetThisIsInplayOnly(FALSE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVizkopaGuildmageEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVizkopaGuildmageEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CVizkopaGuildmageEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife)
	{
		triggerContext.nValue1 = GET_INTEGER(nFromLife - nToLife);
		return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
	}

	return false;
}

bool CVizkopaGuildmageEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	Life nLifeLoss = (Life)triggerContext.nValue1;

	CLifeModifier pModifier(Life(nLifeLoss), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
			pModifier.ApplyTo(pPlayer);
	}
	
	return true;
}

//____________________________________________________________________________
//
CInterventionPactEffectToken::CInterventionPactEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Intervention Pact Effect"), CardType::GlobalEnchantment, nID)
	//, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		//	&CSlaughterPactEffectToken::OnResolutionCompleted1))	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CInterventionPactEffectToken::CreateTemporaryAbility),
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CInterventionPactEffectToken::PreRemoveAbilityCallback));

	//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::_Effects, ZoneId::_Tokens, TRUE)); // lost of life, not preventable	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInterventionPactEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);
	//cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

CCard* CInterventionPactEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CInterventionPactEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CInterventionPactEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CInterventionPactEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

/*void CSlaughterPactEffectToken::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::_Tokens, TRUE);
	pModifier.ApplyTo((CCard*)this);
}*/

//____________________________________________________________________________
//
CPactofNegationEffectToken::CPactofNegationEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Pact of Negation Effect"), CardType::GlobalEnchantment, nID)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CPactofNegationEffectToken::CreateTemporaryAbility),
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CPactofNegationEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPactofNegationEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CPactofNegationEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CPactofNegationEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CPactofNegationEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CPactofNegationEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CPactOfTheTitanEffectToken::CPactOfTheTitanEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Pact of the Titan Effect"), CardType::GlobalEnchantment, nID)	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CPactOfTheTitanEffectToken::CreateTemporaryAbility),
			_T("4") RED_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CPactOfTheTitanEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPactOfTheTitanEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CPactOfTheTitanEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CPactOfTheTitanEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CPactOfTheTitanEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CPactOfTheTitanEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSlaughterPactEffectToken::CSlaughterPactEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Slaughter Pact Effect"), CardType::GlobalEnchantment, nID)	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CSlaughterPactEffectToken::CreateTemporaryAbility),
			_T("2") BLACK_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CSlaughterPactEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlaughterPactEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CSlaughterPactEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CSlaughterPactEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CSlaughterPactEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CSlaughterPactEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSummonersPactEffectToken::CSummonersPactEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Summoner's Pact Effect"), CardType::GlobalEnchantment, nID)	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CSummonersPactEffectToken::CreateTemporaryAbility),
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CSummonersPactEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSummonersPactEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CSummonersPactEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CSummonersPactEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CSummonersPactEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CSummonersPactEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CVenserTheSojournerEmblemToken::CVenserTheSojournerEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Venser, the Sojourner Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVenserTheSojournerEmblemToken::SetTriggerContext));		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CVenserTheSojournerEmblemToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CDomriRadeEmblemToken::CDomriRadeEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Domri Rade Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer, 
			Power(+0), Life(+0),
			CreatureKeyword::DoubleStrike | CreatureKeyword::Trample | CreatureKeyword::Haste));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKothOfTheHammerEmblemToken::CKothOfTheHammerEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Koth of the Hammer Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Mountain, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CKothOfTheHammerEmblemToken::CreateAbility)));	


		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CKothOfTheHammerEmblemToken::CreateAbility(CCard* pCard)
{
counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));	

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CSorinLordOfInnistradEmblemToken::CSorinLordOfInnistradEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Sorin, Lord of Innistrad Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+0), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTamiyoTheMoonSageEmblemToken::CTamiyoTheMoonSageEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Tamiyo, the Moon Sage Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTamiyoTheMoonSageEmblemToken::SetTriggerContext));		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTamiyoTheMoonSageEmblemToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CLilianaOfTheDarkRealmsEmblemToken::CLilianaOfTheDarkRealmsEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Liliana of the Dark Realms Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Swamp, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CLilianaOfTheDarkRealmsEmblemToken::CreateAbility)));	


		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
counted_ptr<CAbility> CLilianaOfTheDarkRealmsEmblemToken::CreateAbility(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CAlchemistsRefugeEffectToken::CAlchemistsRefugeEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Alchemist's Refuge Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CApproachMyMoltenRealmEffectToken::CApproachMyMoltenRealmEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Approach My Molten Realm Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::MultiplyDamage, 1));

		cpAbility->SetMultipleEffectType(TRUE);
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CArcaneDenialEffectToken::CArcaneDenialEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Arcane Denial Effect"), CardType::GlobalEnchantment, nID)	
	, bPrimed(0)
	, bFired(0)
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcaneDenialEffectToken::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcaneDenialEffectToken::SetTriggerContext2));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(0), MaximumValue(2)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcaneDenialEffectToken::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CArcaneDenialEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bPrimed = 1;

	return true;
}

bool CArcaneDenialEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed == 0) || (bFired != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = 1;

	return true;
}

bool CArcaneDenialEffectToken::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed == 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CBubblingMuckEffectToken::CBubblingMuckEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Bubbling Muck Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CProdExtraManaEnchantment> cpAbility(
		::CreateObject<CProdExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Swamp, false),
			BLACK_MANA_TEXT));
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CChannelEffectToken::CChannelEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Channel Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));
	ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CChandraTheFirebrandEffectToken::CChandraTheFirebrandEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Chandra, the Firebrand Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(0)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChandraTheFirebrandEffectToken::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CChandraTheFirebrandEffectToken::SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard)
{
	if ((bFired != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) 
		return false;

	bFired = 1;

	triggerContext.m_pCard = pCard;

	const CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
		triggerContext.m_pStackAction = const_cast<CStackAbilityAction*>(stack.GetStackAction(l).GetPointer());
		if (triggerContext.m_pStackAction->IsSpell() && (triggerContext.m_pStackAction->GetAbility()->GetCard() == pCard))
		{
			break;
		}
	}
	return true;
}

//____________________________________________________________________________
//
CDuskmantleGuildmageEffectToken::CDuskmantleGuildmageEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Duskmantle Guildmage Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuskmantleGuildmageEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDuskmantleGuildmageEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CDuskmantleGuildmageEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.nValue1 = (int)pToZone->GetPlayer();

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CDuskmantleGuildmageEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CLifeModifier pModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo((CPlayer*)triggerContext.nValue1);

	return true;
}

//____________________________________________________________________________
//
CEnterTheInfiniteEffectToken::CEnterTheInfiniteEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Enter the Infinite Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CFalterEffectToken::CFalterEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Falter Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CFlashOfDefianceEffectToken::CFlashOfDefianceEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Flash of Defiance Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CGlimpseofNatureEffectToken::CGlimpseofNatureEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Glimpse of Nature Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlimpseofNatureEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGlimpseofNatureEffectToken::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CHighTideEffectToken::CHighTideEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("High Tide Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CProdExtraManaEnchantment> cpAbility(
		::CreateObject<CProdExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Island, false),
			BLUE_MANA_TEXT));
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CJaceArchitectOfThoughtEffectToken::CJaceArchitectOfThoughtEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Jace, Architect of Thought Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlockedAny,
								CWhenAttackedBlockedAny::PlayerEventCallback, &CWhenAttackedBlockedAny::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJaceArchitectOfThoughtEffectToken::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CJaceArchitectOfThoughtEffectToken::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;

	return true;
}

//____________________________________________________________________________
//
CLatNamsLegacyEffectToken::CLatNamsLegacyEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Lat-Nam's Legacy Effect"), CardType::GlobalEnchantment, nID)	
	, bPrimed(0)
	, bFired(0)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatNamsLegacyEffectToken::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetDrawCount(2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatNamsLegacyEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatNamsLegacyEffectToken::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CLatNamsLegacyEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bPrimed = 1;

	return true;
}

bool CLatNamsLegacyEffectToken::SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed == 0) || (bFired != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = true;

	return true;
}

bool CLatNamsLegacyEffectToken::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed == 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CPraetorsCounselEffectToken::CPraetorsCounselEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Praetor's Counsel Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoMaximumHandSize));

	cpAbility->SetAffectControllerOnly();

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuickenEffectToken::CQuickenEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Quicken Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Sorcery, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("sorcery cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuickenEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuickenEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CRuthlessInvasionEffectToken::CRuthlessInvasionEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Ruthless Invasion Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CScoutsWarningEffectToken::CScoutsWarningEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Scout's Warning Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScoutsWarningEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CScoutsWarningEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CSlowtripEffectToken::CSlowtripEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Slowtrip Effect"), CardType::GlobalEnchantment, nID)	
	, bPrimed(0)
	, bFired(0)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlowtripEffectToken::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlowtripEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlowtripEffectToken::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSlowtripEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed != 0)|| (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bPrimed = 1;

	return true;
}

bool CSlowtripEffectToken::SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed == 0) || (bFired != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = 1;

	return true;
}

bool CSlowtripEffectToken::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bPrimed == 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CThePiecesAreComingTogetherEffectToken::CThePiecesAreComingTogetherEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("The Pieces Are Coming Together Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

		{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),
			_T("2")));
		ATLASSERT(cpAbility);
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
		}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CYourPunyMindsCannotFathomEffectToken::CYourPunyMindsCannotFathomEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Your Puny Minds Cannot Fathom Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

		{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
	//	cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
		}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CWindingCanyonsEffectToken::CWindingCanyonsEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Winding Canyons Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CHazezonTamarEffectToken::CHazezonTamarEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Hazezon Tamar Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(0)
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
				
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
		cpAbility->SetCreateTokenOption(TRUE, _T("Sand Warrior"), 62006, 0);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHazezonTamarEffectToken::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHazezonTamarEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHazezonTamarEffectToken::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CHazezonTamarEffectToken::SetTriggerContext1(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bFired != 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = 1;

	return true;
}

bool CHazezonTamarEffectToken::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	triggerContext.nValue1 = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CHazezonTamarEffectToken::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((bFired == 0) || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CMoonmistEffectToken::CMoonmistEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Moonmist Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::DealNoCombatDamage));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE2(Werewolf, Wolf), false));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CEtherswornShieldmageEffectToken::CEtherswornShieldmageEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Ethersworn Shieldmage Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_ArtifactCreature, true),
				Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CArchangelOfStrifeWarEffectToken::CArchangelOfStrifeWarEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Archangel of Strife War Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+3), Life(+0), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArchangelOfStrifePeaceEffectToken::CArchangelOfStrifePeaceEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Archangel of Strife Peace Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+3), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
/*
CChancellorOfTheAnnexEffectToken::CChancellorOfTheAnnexEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Chancellor of the Annex Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(2)
	, bPristine(TRUE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAllCounterSpellAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().AddManaCost(CManaCost::Color::Generic, 1);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChancellorOfTheAnnexEffectToken::SetTriggerContext1));		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChancellorOfTheAnnexEffectToken::SetTriggerContext2));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CChancellorOfTheAnnexEffectToken::SetTriggerContext1(CTriggeredAllCounterSpellAbility::TriggerContextType& triggerContext, CCard* pCard)
{
	if (bPristine == TRUE)
	{
		bPristine = FALSE;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (GetGame()->GetPlayer(ip) != GetController())
				bFired[ip] = 1;
			else
				bFired[ip] = 0;
	}

	if (this->GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pCard->GetController() == GetGame()->GetPlayer(ip))
			if (bFired[ip] == 0)
				return false;
			else
			{
				bFired[ip] = 0;
				triggerContext.m_pTargetedCard = pCard;
				return true;
			}

	return false;
}

bool CChancellorOfTheAnnexEffectToken::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	if (bPristine == TRUE) return false;

	bool bSpent = true;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (bFired[ip] == 1)
		{
			bSpent = false;
			break;
		}

	return bSpent;
}
*/
//____________________________________________________________________________
//
/*
CADisplayOfMyDarkPowerEffectToken::CADisplayOfMyDarkPowerEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("A Display of My Dark Power Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CADisplayOfMyDarkPowerEffectToken::SetTriggerContext));

		m_pTriggeredAbility = cpAbility.GetPointer();
		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CADisplayOfMyDarkPowerEffectToken::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Colorless))
	{m_pTriggeredAbility->SetProduceColorless(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceColorless(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red))
		{m_pTriggeredAbility->SetProduceRed(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green))
		{m_pTriggeredAbility->SetProduceGreen(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue))
		{m_pTriggeredAbility->SetProduceBlue(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black))
		{m_pTriggeredAbility->SetProduceBlack(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White))
		{m_pTriggeredAbility->SetProduceWhite(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}

bool CADisplayOfMyDarkPowerEffectToken::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	triggerContext.m_pCard = pManaAction->GetAbility()->GetCard();

	return TRUE;
}
*/
//____________________________________________________________________________
//
CEndOfCombatBounceEffectToken::CEndOfCombatBounceEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End of Combat Bounce Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatBounceEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndOfCombatBounceEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatBounceEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: AEther Membrane, Kaijin of the Vanishing Touch, Phantom Whelp, Quicksilver Behemoth, Wall of Junk, Wall of Tears, Windscouter
}

bool CEndOfCombatBounceEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndOfCombatBounceEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndOfCombatBounceEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CEndOfCombatDestroyEffectToken::CEndOfCombatDestroyEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End of Combat Destroy Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatDestroyEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndOfCombatDestroyEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatDestroyEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Abomination, Arrogant Bloodlord, Ceremonial Guard, Cinder Wall, Cockatrice, Deathgazer, Dread Specter,
	// Goblin Sappers, Gorgon Recluse, Infernal Medusa, Lowland Basilisk, Ohran Viper, Rock Basilisk, Serpentine Basilisk,
	// Silent Assassin, Sosuke, Son of Seshiro; Stone-Tongue Basilisk, Tangle Asp, Thicket Basilisk, Venomous Dragonfly
	// Future use: Battering Ram, Simic Basilisk
}

bool CEndOfCombatDestroyEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndOfCombatDestroyEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndOfCombatDestroyEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CAcidicDaggerEffectToken::CAcidicDaggerEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Acidic Dagger Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::CreatureEventCallback, &CWhenDamageDealtAny::SetCreatureEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAcidicDaggerEffectToken::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetAbilityName(_T("Destroy creature ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAcidicDaggerEffectToken::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcidicDaggerEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetAbilityName(_T("Sacrifice Acidic Dagger ability"));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CAcidicDaggerEffectToken::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (pToCreature->GetCardKeyword()->HasChangeling() || pToCreature->GetCreatureType().HasType(SingleCreatureType::Wall)) return false;
		
	triggerContext.m_pCard = pToCreature;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, GetController());
	triggerContext.m_MoveCardModifier = pModifier;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CAcidicDaggerEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		pCards1.RemoveCard(pCard);
		if (pCards2.HasCard(pCard))
			pCards2.RemoveCard(pCard);

		return true;
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CAcidicDaggerEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CBerserkEffectToken::CBerserkEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Berserk Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBerserkEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBerserkEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBerserkEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBerserkEffectToken::SetTriggerContextAux2));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CBerserkEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CBerserkEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		if (((CCreatureCard*)pCards.GetAt(i))->AttackedThisTurn())
			pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CBerserkEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CBerserkEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CZombieBoaWhiteEffectToken::CZombieBoaWhiteEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Zombie Boa White Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlockedAny,
			CWhenAttackedBlockedAny::BlockedByEventCallback, &CWhenAttackedBlockedAny::SetBlockedEachTimeEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaWhiteEffectToken::SetTriggerContext1));

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaWhiteEffectToken::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CZombieBoaWhiteEffectToken::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const
{
	if (!pCards.HasCard(pCreature)) return false;
	if (!pCreature2->IsColor(CManaPoolBase::Color::White)) return false;
		
	triggerContext.m_pCard = pCreature2;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, GetController());
	triggerContext.m_MoveCardModifier = pModifier;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CZombieBoaWhiteEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CZombieBoaBlueEffectToken::CZombieBoaBlueEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Zombie Boa Blue Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlockedAny,
			CWhenAttackedBlockedAny::BlockedByEventCallback, &CWhenAttackedBlockedAny::SetBlockedEachTimeEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaBlueEffectToken::SetTriggerContext1));

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaBlueEffectToken::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CZombieBoaBlueEffectToken::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const
{
	if (!pCards.HasCard(pCreature)) return false;
	if (!pCreature2->IsColor(CManaPoolBase::Color::Blue)) return false;
		
	triggerContext.m_pCard = pCreature2;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, GetController());
	triggerContext.m_MoveCardModifier = pModifier;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CZombieBoaBlueEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CZombieBoaBlackEffectToken::CZombieBoaBlackEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Zombie Boa Black Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlockedAny,
			CWhenAttackedBlockedAny::BlockedByEventCallback, &CWhenAttackedBlockedAny::SetBlockedEachTimeEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaBlackEffectToken::SetTriggerContext1));

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaBlackEffectToken::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CZombieBoaBlackEffectToken::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const
{
	if (!pCards.HasCard(pCreature)) return false;
	if (!pCreature2->IsColor(CManaPoolBase::Color::Black)) return false;
		
	triggerContext.m_pCard = pCreature2;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, GetController());
	triggerContext.m_MoveCardModifier = pModifier;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CZombieBoaBlackEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CZombieBoaRedEffectToken::CZombieBoaRedEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Zombie Boa Red Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlockedAny,
			CWhenAttackedBlockedAny::BlockedByEventCallback, &CWhenAttackedBlockedAny::SetBlockedEachTimeEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaRedEffectToken::SetTriggerContext1));

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaRedEffectToken::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CZombieBoaRedEffectToken::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const
{
	if (!pCards.HasCard(pCreature)) return false;
	if (!pCreature2->IsColor(CManaPoolBase::Color::Red)) return false;
		
	triggerContext.m_pCard = pCreature2;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, GetController());
	triggerContext.m_MoveCardModifier = pModifier;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CZombieBoaRedEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CZombieBoaGreenEffectToken::CZombieBoaGreenEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Zombie Boa Green Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlockedAny,
			CWhenAttackedBlockedAny::BlockedByEventCallback, &CWhenAttackedBlockedAny::SetBlockedEachTimeEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaGreenEffectToken::SetTriggerContext1));

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CZombieBoaGreenEffectToken::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CZombieBoaGreenEffectToken::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCreatureCard* pCreature, CCreatureCard* pCreature2) const
{
	if (!pCards.HasCard(pCreature)) return false;
	if (!pCreature2->IsColor(CManaPoolBase::Color::Green)) return false;
		
	triggerContext.m_pCard = pCreature2;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, GetController());
	triggerContext.m_MoveCardModifier = pModifier;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CZombieBoaGreenEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CAdarkarValkyrieEffectToken::CAdarkarValkyrieEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Adarkar Valkyrie Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAdarkarValkyrieEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAdarkarValkyrieEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CAdarkarValkyrieEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	
	return true;
}

bool CAdarkarValkyrieEffectToken::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;

	if (pCard->IsInGraveyard())
		pCard->Move(pAction->GetController()->GetZoneById(ZoneId::Battlefield), pAction->GetController(), MoveType::Others);

	return true;
}

//____________________________________________________________________________
//
CGracefulReprieveEffectToken::CGracefulReprieveEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Graceful Reprieve Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGracefulReprieveEffectToken::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGracefulReprieveEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;

	triggerContext.m_pCard = pCard;
	triggerContext.m_MoveCardModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, GetController());
	
	return true;
}

//____________________________________________________________________________
//
CInitiateOfBloodEffectToken::CInitiateOfBloodEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Initiate of Blood Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInitiateOfBloodEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInitiateOfBloodEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CInitiateOfBloodEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		if (pToZone->GetZoneId() != ZoneId::Graveyard)
		{
			pCards1.RemoveCard(pCard);
			if (pCards2.HasCard(pCard))
				pCards2.RemoveCard(pCard);
			return false;
		}
		else
		{
			pCards1.RemoveCard(pCard);
			if (pCards2.HasCard(pCard))
				pCards2.RemoveCard(pCard);

			return true;
		}
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CInitiateOfBloodEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFlipModifier pModifier = CCardFlipModifier();

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		if (!pCards2.GetAt(i)->GetOrientation()->IsFlipped())
			pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CReincarnationEffectToken::CReincarnationEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Reincarnation Effect"), CardType::GlobalEnchantment, nID)	
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CReincarnationEffectToken::OnCardSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReincarnationEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CReincarnationEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CReincarnationEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;

	triggerContext.nValue1 = (DWORD)pCard;

	return true;
}

bool CReincarnationEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pOwner = ((CCard*)pAction->GetTriggerContext().nValue1)->GetOwner();
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pOwner->GetZoneById(ZoneId::Graveyard);
	
	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pGraveyard->GetCardContainer()) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pGraveyard->GetSize(); ++i)
		{
			CCard* pCard = pGraveyard->GetAt(i);

			if (pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
				
				if (pOwner == pController)
					entry.strText.Format(_T("Return %s to the battlefield under your control"),
						pCard->GetCardName(TRUE));
				else
					entry.strText.Format(_T("Return %s to the battlefield under %s's control"),
					pCard->GetCardName(TRUE), pOwner->GetPlayerName());

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CReincarnationEffectToken::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (pCard->GetOwner() == pSelectionPlayer)
					strMessage.Format(_T("%s returns %s to the battlefield under his control"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				else
					strMessage.Format(_T("%s returns %s to the battlefield under %s's control"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE), pCard->GetOwner()->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//
CSandalsOfAbdallahEffectToken::CSandalsOfAbdallahEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Sandals of Abdallah Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandalsOfAbdallahEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSandalsOfAbdallahEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSandalsOfAbdallahEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		if (pToZone->GetZoneId() != ZoneId::Graveyard)
		{
			pCards1.RemoveCard(pCard);
			if (pCards2.HasCard(pCard))
				pCards2.RemoveCard(pCard);
			return false;
		}
		else
		{
			pCards1.RemoveCard(pCard);
			if (pCards2.HasCard(pCard))
				pCards2.RemoveCard(pCard);

			return true;
		}
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CSandalsOfAbdallahEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CSkeletonizeEffectToken::CSkeletonizeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Skeletonize Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::CreatureEventCallback, &CWhenDamageDealtAny::SetCreatureEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkeletonizeEffectToken::SetTriggerContextAux1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkeletonizeEffectToken::SetTriggerContextAux2));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSkeletonizeEffectToken::SetTriggerContext));
		cpAbility->SetCreateTokenOption(TRUE, _T("Skeleton B"), 62044, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSkeletonizeEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pDamagedCreatures.AddCard(pToCreature, CardPlacement::Top);

	return false;
}

bool CSkeletonizeEffectToken::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	pCards.RemoveCard(pCard);

	return false;
}

bool CSkeletonizeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pDamagedCreatures.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pDamagedCreatures.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;

	return true;
}

//____________________________________________________________________________
//
CVirulentWoundEffectToken::CVirulentWoundEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Virulent Wound Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVirulentWoundEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CVirulentWoundEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CVirulentWoundEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;

	triggerContext.nValue1 = (DWORD)pCard->GetController();

	return true;
}

bool CVirulentWoundEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;

	CPoisonModifier pModifier = CPoisonModifier(GetGame(), +1);
	pModifier.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CGenericContainerExileToken::CGenericContainerExileToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Generic Container - Exile"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGenericContainerExileToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGenericContainerExileToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CEndStepReturnFromExileEffectToken::CEndStepReturnFromExileEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Return from Exile Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepReturnFromExileEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepReturnFromExileEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepReturnFromExileEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepReturnFromExileEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: AEtherling, Anurid Brushhopper, Argent Sphinx, Astral Slide, Flickerwisp, Frenetic Sliver,
	// Galepowder Mage, Ghost Council of Orzhova, Ghostway, Glimmerpoint Stag, Hikari, Twilight Guardian; Liberate, Mistmeadow Witch,
	// Norin the Wary, Planar Guide, Saltskitter, Sudden Disappearance, Turn to Mist, Venser, the Sojourner; Voidwalk, Voyager Staff
}

bool CEndStepReturnFromExileEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepReturnFromExileEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepReturnFromExileEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepReturnFromExileEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepSacrificeEffectToken::CEndStepSacrificeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Sacrifice Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepSacrificeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepSacrificeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepSacrificeEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepSacrificeEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Apprentice Necromancer, Balduvian Dead, Chimeric Coils, Deathknell Kami, Dragon Whelp, Farrelite Priest,
	// Fatal Frenzy, Footsteps of the Goryo, Impromptu Raid, Incandescent Soulstoke, Initiates of the Ebon Hand, Junkyo Bell, Kiki-Jiki, Mirror Breaker;
	// Killer Instinct, Krovikan Elementalist, Pyric Salamander, Skirk Alarmist, Slave of Bolas, Sneak Attack, Tears of Rage, Thatcher Revolt,
	// Tidal Wave, Treacherous Urge, Varchild's Crusader, Wine of Blood and Iron
}

bool CEndStepSacrificeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepSacrificeEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepSacrificeEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepSacrificeEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepBounceEffectToken::CEndStepBounceEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Bounce Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepBounceEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepBounceEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepBounceEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepBounceEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Barbarian Guides, Cauldron Dance, Dragon Mask, Rakalite, Surprise Deployment
}

bool CEndStepBounceEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepBounceEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepBounceEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepBounceEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepDestroyEffectToken::CEndStepDestroyEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Destroy Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepDestroyEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepDestroyEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepDestroyEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepDestroyEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Blood Frenzy, Crazed Armodon, Glyph of Destruction, Hornet Cannon, Mogg Cannon, Puffer Extract, Rocket Launcher,
	// Stone Giant
}

bool CEndStepDestroyEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepDestroyEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepDestroyEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepDestroyEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepExileEffectToken::CEndStepExileEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Exile Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepExileEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepExileEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepExileEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepExileEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by Broken Visage, Corpse Dance, Dark Maze, Dawn of the Dead, Elemental Appeal, Elemental Mastery, Feral Lightning,
	// Firecat Blitz, Giantbaiting, Gruesome Encore, Lightning Coils, Mimic Vat, Nemesis Trap, Postmortem Lunge, Rakdos Guildmage, Seance,
	// Shallow Grave, Splinter Twin, Zektar Shrine Expedition, Zirilan of the Claw
	// Also used by the unearth mechanic
}

bool CEndStepExileEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepExileEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepExileEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepExileEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CBloodlordOfVaasgothEffectToken::CBloodlordOfVaasgothEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Bloodlord of Vaasgoth Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodlordOfVaasgothEffectToken::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CBloodlordOfVaasgothEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pCards.GetSize() == 0)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, true, MoveType::Others, GetController());
		pModifier.ApplyTo(this);
	}

	return false;
}

//____________________________________________________________________________
//
CBroodOfCockroachesEffectToken::CBroodOfCockroachesEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Brood of Cockroaches Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBroodOfCockroachesEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBroodOfCockroachesEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBroodOfCockroachesEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBroodOfCockroachesEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CBroodOfCockroachesEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CBroodOfCockroachesEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier1.ApplyTo(pAction->GetController());
	
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier2.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CBroodOfCockroachesEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CBroodOfCockroachesEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepSureSacrificeEffectToken::CEndStepSureSacrificeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Sure Sacrifice Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepSureSacrificeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepSureSacrificeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepSureSacrificeEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepSureSacrificeEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Cauldron Dance, Celestial Sword, Goblin Ski Patrol
}

bool CEndStepSureSacrificeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepSureSacrificeEffectToken::BeforeResolution(CAbilityAction* pAction) const
{

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pCards.GetAt(i)->GetController());
		pModifier.ApplyTo(pCards.GetAt(i));
	}

	return true;
}

bool CEndStepSureSacrificeEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepSureSacrificeEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CFalseMemoriesEffectToken::CFalseMemoriesEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("False Memories Effect"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFalseMemoriesEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFalseMemoriesEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFalseMemoriesEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CFalseMemoriesEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CFalseMemoriesEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	int nValue = pGraveyard->GetSize();
	if (nValue > 7) nValue = 7;
	
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
	pModifier.ApplyTo(pController);

	return true;
}

bool CFalseMemoriesEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CFlickerformEffectToken::CFlickerformEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Flickerform Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlickerformEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFlickerformEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlickerformEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFlickerformEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CFlickerformEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CFlickerformEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	if (pCards1.GetSize() == 0) return true;
	CCard* pCard = pCards1.GetAt(0);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());
	pModifier.ApplyTo(pCard);

	if (pCard->IsInplay())
		for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		{
			CCard* pAura = pCards2.GetAt(i);

			bool bValidAura = true;

			for (int j = 0; j < pAura->GetSpells().GetSize(); ++j)
			{
				CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pAura->GetSpells().GetAt(j));
				if (!pEnchantSpell) continue;
				if (!pEnchantSpell->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(pCard))
					bValidAura = false;
			}

			if (bValidAura)
			{
				pModifier.ApplyTo(pAura);

				for (int j = 0; j < pAura->GetSpells().GetSize(); ++j)
				{
					CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pAura->GetSpells().GetAt(j));
					if (!pEnchantSpell) continue;
					pEnchantSpell->Enchant(pCard, GetController(), pAura->GetSpells().GetAt(j)->GetActionValue());
				}
			}
		}

	return true;
}

bool CFlickerformEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
		pCards1.RemoveCard(pCard);

	if (pCards2.HasCard(pCard))
		pCards2.RemoveCard(pCard);

	return false;
}

bool CFlickerformEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CGiantCaterpillarPupaToken::CGiantCaterpillarPupaToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Giant Caterpillar Pupa"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiantCaterpillarPupaToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiantCaterpillarPupaToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiantCaterpillarPupaToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGiantCaterpillarPupaToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CGiantCaterpillarPupaToken::BeforeResolution(CAbilityAction* pAction) const
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Butterfly"), 2878, 1);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CGiantCaterpillarPupaToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CGoblinKitesEffectToken::CGoblinKitesEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Goblin Kites Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGoblinKitesEffectToken::OnFlipSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinKitesEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinKitesEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinKitesEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGoblinKitesEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGoblinKitesEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CGoblinKitesEffectToken::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		int Thumb = 0;
		int Exponent = 2;
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) 
			Exponent = 2 * Exponent;
		Flip = pController->GetRand() % Exponent;
	}

	if (Flip == 0)
	{
		CString strMessage;
		strMessage.Format(_T("%s loses the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);
		
		for (int i = pCards.GetSize() - 1; i >= 0; --i)
			pModifier.ApplyTo(pCards.GetAt(i));

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s wins the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CGoblinKitesEffectToken::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s wins the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
	
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s loses the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pSelectionPlayer);
		
				for (int i = pCards.GetSize() - 1; i >= 0; --i)
					pModifier.ApplyTo(pCards.GetAt(i));

				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}

bool CGoblinKitesEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CGoblinKitesEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CGraveBetrayalEffectToken::CGraveBetrayalEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Grave Betrayal Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraveBetrayalEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGraveBetrayalEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraveBetrayalEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraveBetrayalEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGraveBetrayalEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CGraveBetrayalEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	int nCounters = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11CountersAlways, nMultiplier, FALSE))
		nCounters <<= nMultiplier;

	CCardCounterModifier pModifier1(_T("+1/+1"), +nCounters, true);
	CCreatureTypeModifier pModifier2 = CCreatureTypeModifier(SingleCreatureType::Zombie);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCards.GetAt(i);
		pModifier1.ApplyTo(pCard);
		pCard->AddCardType(CardType::Black, CardType::Null, CardTypeEntry::Temporary);
		pModifier2.ApplyTo((CCreatureCard*)pCard);
		pCard->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

bool CGraveBetrayalEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CGraveBetrayalEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CIdeasUnboundEffectToken::CIdeasUnboundEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Ideas Unbound Effect"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIdeasUnboundEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIdeasUnboundEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIdeasUnboundEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CIdeasUnboundEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CIdeasUnboundEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nValue = pHand->GetSize();
	if (nValue > 3) nValue = 3;
	
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::AllPlayers, // reveal to
		CCardFilter::GetFilter(_T("cards")), // what cards
		ZoneId::Graveyard, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Discard, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
	pModifier.ApplyTo(pController);

	return true;
}

bool CIdeasUnboundEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CIgnorantBlissEffectToken::CIgnorantBlissEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Ignorant Bliss Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIgnorantBlissEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIgnorantBlissEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_ExileFaceDown, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIgnorantBlissEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIgnorantBlissEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CIgnorantBlissEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CIgnorantBlissEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier1.ApplyTo(pCards.GetAt(i));

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

bool CIgnorantBlissEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CIgnorantBlissEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
/*
	This generic effect is used when designated card(s) normally the creature card that this effect originated from
	are put into the graveyard (die) and they are required to return to the battlefield under their owner's 
	control at the beginning of the next end step.
	Ref: 
	Molten Firebird (2/2) 4R
	Creature - Phoenix
	Flying
	When Molten Firebird dies, return it to the battlefield under its owner's 
	control at the beginning of the next end step and you skip your next draw step.
	4R: Exile Molten Firebird.

	Most of this code is template derived from other similar effects.
*/
CEndStepReanimateEffectToken::CEndStepReanimateEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Reanimate Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		// below modify phase in which card is required to return
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		//
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepReanimateEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepReanimateEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepReanimateEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepReanimateEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by Ivory Gargoyle, Lifeline, Molten Firebird
}

bool CEndStepReanimateEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) 
		return false;
	bFired = TRUE;
	return true;
}

bool CEndStepReanimateEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	// below modify where effect requires card(s) to be moved from then to
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());
	//
	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));
	return true;
}

bool CEndStepReanimateEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) 
		return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) 
		return false;
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepReanimateEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) 
		return false;
	return true;
}

//____________________________________________________________________________
//
CTatsumasaTheDragonsFangEffectToken::CTatsumasaTheDragonsFangEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Tatsumasa, the Dragon's Fang Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTatsumasaTheDragonsFangEffectToken::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTatsumasaTheDragonsFangEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTatsumasaTheDragonsFangEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTatsumasaTheDragonsFangEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CTatsumasaTheDragonsFangEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);

	return pToZone->GetZoneId() == ZoneId::Graveyard;
}

bool CTatsumasaTheDragonsFangEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

bool CTatsumasaTheDragonsFangEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards2.RemoveCard(pCard);

	return false;
}

bool CTatsumasaTheDragonsFangEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (pCards1.GetSize() > 0) return false;

	return true;
}

//____________________________________________________________________________
//
CLoyalCatharEffectToken::CLoyalCatharEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Loyal Cathar Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLoyalCatharEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLoyalCatharEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLoyalCatharEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLoyalCatharEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CLoyalCatharEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CLoyalCatharEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CGraveyardFaceTransformModifier pModifier = CGraveyardFaceTransformModifier();

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		pModifier.ApplyTo(pCards.GetAt(i));
		pCards.GetAt(i)->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
	}

	return true;
}

bool CLoyalCatharEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CLoyalCatharEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepDestroyPacifistsEffectToken::CEndStepDestroyPacifistsEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Destroy Pacifists Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepDestroyPacifistsEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepDestroyPacifistsEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepDestroyPacifistsEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepDestroyPacifistsEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Nettling Imp, Norritt
}

bool CEndStepDestroyPacifistsEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	if (pCards.GetSize() > 0 && ((CCreatureCard*)pCards.GetAt(0))->GetCreatureFlag()->HasAttacked()) return false;

	return true;
}

bool CEndStepDestroyPacifistsEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		if (pCards.GetAt(i)->GetCardType().IsCreature() && !((CCreatureCard*)pCards.GetAt(i))->GetCreatureFlag()->HasAttacked())
			pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepDestroyPacifistsEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepDestroyPacifistsEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CMaddeningImpEffectToken::CMaddeningImpEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Maddening Imp Effect"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaddeningImpEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMaddeningImpEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaddeningImpEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CMaddeningImpEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CMaddeningImpEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	m_CardFilter.AddNegateComparer(new CreatureFlagComparer(CreatureFlag::Attacked, false));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)));

	pModifier.ApplyTo(GetGame()->GetActivePlayer());

	return true;
}

bool CMaddeningImpEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CShireiShizosCaretakerEffectToken::CShireiShizosCaretakerEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Shirei, Shizo's Caretaker Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CShireiShizosCaretakerEffectToken::OnSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShireiShizosCaretakerEffectToken::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShireiShizosCaretakerEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShireiShizosCaretakerEffectToken::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShireiShizosCaretakerEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShireiShizosCaretakerEffectToken::SetTriggerContext3));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShireiShizosCaretakerEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CShireiShizosCaretakerEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	bool bShirei = false;

	for (int i = 0; i < pCards2.GetSize(); ++i)
		if (pCards2.GetAt(i)->IsInplay())
			bShirei = true;

	return bShirei;
}

bool CShireiShizosCaretakerEffectToken::BeforeResolution(CAbilityAction* pAction)
{
	bool bShirei = false;

	for (int i = 0; i < pCards2.GetSize(); ++i)
		if (pCards2.GetAt(i)->IsInplay())
			bShirei = true;

	if (!bShirei || (pCards1.GetSize() == 0)) return true;

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Return %s to the battlefield"), pCards1.GetAt(0)->GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Do nothing"));

		entries.push_back(selectionEntry);
	}
	
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());

	return true;
}

void CShireiShizosCaretakerEffectToken::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others, pSelectionPlayer);

				for (int i = pCards1.GetSize() - 1; i >= 0; --i)
					pModifier.ApplyTo(pCards1.GetAt(i));
				
				return;
			}
		}
}

bool CShireiShizosCaretakerEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);

	return false;
}

bool CShireiShizosCaretakerEffectToken::SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards2.RemoveCard(pCard);

	return false;
}

bool CShireiShizosCaretakerEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CShichifukujinDragonEffectToken::CShichifukujinDragonEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Shichifukujin Dragon Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShichifukujinDragonEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShichifukujinDragonEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShichifukujinDragonEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShichifukujinDragonEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CShichifukujinDragonEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CShichifukujinDragonEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +3);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CShichifukujinDragonEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CShichifukujinDragonEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CSirensCallEffectToken::CSirensCallEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Siren's Call Effect"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::_Effects, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSirensCallEffectToken::SetTriggerContextS));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSirensCallEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSirensCallEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSirensCallEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSirensCallEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CSirensCallEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pController);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if (!pCreature->GetCardKeyword()->HasChangeling() &&
				!pCreature->GetCreatureType().HasType(SingleCreatureType::Wall) &&
				!pCreature->GetCreatureFlag()->HasAttacked())
			{
				int nTurnInControl = pCreature->GetControllerTurnChanged();
				if ((nTurnInControl >= 0) && (nTurnInControl < pCard->GetController()->GetPlayerTurnNumber()))
					pModifier.ApplyTo(pCreature);
			}
		}
	}

	return true;
}

bool CSirensCallEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

bool CSirensCallEffectToken::SetTriggerContextS(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pCard != this) return false;

	pPlayer = GetGame()->GetActivePlayer();

	return false;
}

//____________________________________________________________________________
//
CMemoryJarEffectToken::CMemoryJarEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Memory Jar Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMemoryJarEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMemoryJarEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_ExileFaceDown, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMemoryJarEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMemoryJarEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CMemoryJarEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CMemoryJarEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.SetReorderInformation(true, ZoneId::Graveyard);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier2.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CMemoryJarEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CMemoryJarEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CMagusOfTheJarEffectToken::CMagusOfTheJarEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Magus of the Jar Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMagusOfTheJarEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMagusOfTheJarEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_ExileFaceDown, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMagusOfTheJarEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMagusOfTheJarEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CMagusOfTheJarEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CMagusOfTheJarEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.SetReorderInformation(true, ZoneId::Graveyard);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));

	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier2.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CMagusOfTheJarEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CMagusOfTheJarEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CEndStepRaiseEffectToken::CEndStepRaiseEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End Step Raise Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepRaiseEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndStepRaiseEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepRaiseEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndStepRaiseEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Mangara's Blessing, Pure Intentions
}

bool CEndStepRaiseEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndStepRaiseEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndStepRaiseEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CEndStepRaiseEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CMystifyingMazeEffectToken::CMystifyingMazeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Mystifying Maze Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMystifyingMazeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMystifyingMazeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMystifyingMazeEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMystifyingMazeEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CMystifyingMazeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CMystifyingMazeEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		pCards.GetAt(i)->GetOrientation()->Tap();
		pModifier.ApplyTo(pCards.GetAt(i));
	}

	return true;
}

bool CMystifyingMazeEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CMystifyingMazeEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CNecropotenceEffectToken::CNecropotenceEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Necropotence Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecropotenceEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNecropotenceEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_ExileFaceDown, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecropotenceEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNecropotenceEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CNecropotenceEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CNecropotenceEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CNecropotenceEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CNecropotenceEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
COtherworldlyJourneyEffectToken::COtherworldlyJourneyEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Otherworldly Journey Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COtherworldlyJourneyEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COtherworldlyJourneyEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COtherworldlyJourneyEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COtherworldlyJourneyEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool COtherworldlyJourneyEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool COtherworldlyJourneyEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	int nCounters = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11CountersAlways, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	
	CCardCounterModifier pModifier1(_T("+1/+1"), +nCounters, true);
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pController);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		pModifier1.ApplyTo(pCards.GetAt(i));
		pModifier2.ApplyTo(pCards.GetAt(i));
	}

	return true;
}

bool COtherworldlyJourneyEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool COtherworldlyJourneyEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CProteanHydraEffectToken::CProteanHydraEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Protean Hydra Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHydraEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProteanHydraEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHydraEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProteanHydraEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CProteanHydraEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CProteanHydraEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +2);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CProteanHydraEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CProteanHydraEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CPureIntentionsEffectToken::CPureIntentionsEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Pure Intentions Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Hand, ZoneId::_AllZones, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPureIntentionsEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPureIntentionsEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CPureIntentionsEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	triggerContext.nValue1 = (DWORD)pCard;

	if (pToZone->GetZoneId() == ZoneId::Graveyard)
		triggerContext.nValue2 = 1;
	else
		triggerContext.nValue2 = 0;

	return (GetZoneId() == ZoneId::_Effects);
}

bool CPureIntentionsEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (pAction->GetTriggerContext().nValue2 == 1)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo((CCard*)pAction->GetTriggerContext().nValue1);
	}

	return true;
}

//____________________________________________________________________________
//
CRainbowValeEffectToken::CRainbowValeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Rainbow Vale Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CRainbowValeEffectToken::OnOpponentSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRainbowValeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRainbowValeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRainbowValeEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRainbowValeEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CRainbowValeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CRainbowValeEffectToken::BeforeResolution(CAbilityAction* pAction)
{
	if (pCards.GetSize() == 0) return true;

	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);

		if (pPlayer != pController)
		{
			SelectionEntry entry;

			entry.dwContext = ip;
				
			entry.strText.Format(_T("Choose %s"),
				pPlayer->GetPlayerName());

			entries.push_back(entry);
		}
	}
	m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CRainbowValeEffectToken::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(it->dwContext);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s chooses %s"), pSelectionPlayer->GetPlayerName(), pPlayer->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pCards.GetAt(0)->Move(pPlayer->GetZoneById(ZoneId::Battlefield), pPlayer, MoveType::Others);
				
			return;
		}
}

bool CRainbowValeEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CRainbowValeEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CRukhEggEffectToken::CRukhEggEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Rukh Egg Effect"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRukhEggEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRukhEggEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRukhEggEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CRukhEggEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CRukhEggEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Bird C"), 2711, 1);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CRukhEggEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CSandGolemEffectToken::CSandGolemEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Sand Golem Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandGolemEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSandGolemEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandGolemEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSandGolemEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSandGolemEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CSandGolemEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	
	int nCounters = 1;

	int nMultiplier = 0;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	// for Primal Vigor
	if (pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11CountersAlways, nMultiplier, FALSE))
		nCounters <<= nMultiplier;

	CCardCounterModifier pModifier1(_T("+1/+1"), +nCounters, true);
	CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others, pController);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCards.GetAt(i);
		pModifier1.ApplyTo(pCard);
		pModifier2.ApplyTo(pCard);
	}

	return true;
}

bool CSandGolemEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CSandGolemEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CSeraphFirstEffectToken::CSeraphFirstEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Seraph First Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphFirstEffectToken::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSeraphFirstEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphFirstEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphFirstEffectToken::SetTriggerContext3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphFirstEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CSeraphFirstEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CSeraphFirstEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);

	return false;
}

bool CSeraphFirstEffectToken::SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards2.RemoveCard(pCard);

	return false;
}

bool CSeraphFirstEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	if (pCards1.GetSize() > 0)
	{
		CCountedCardContainer pSubjects1;
		
		for (int i = pCards1.GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = pCards1.GetAt(i);

			pCard->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

			if (pCard->IsInplay())
				pSubjects1.AddCard(pCard, CardPlacement::Top);
		}

		if (pCards2.GetSize() > 0)
		{
			CCountedCardContainer pSubjects2;
			pSubjects2.AddCard(pCards2.GetAt(0), CardPlacement::Top);

			CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Seraph Second Effect"), 61092, &pSubjects1, &pSubjects2);
			pModifier.ApplyTo(pAction->GetController());
		}
	}

	return true;
}

bool CSeraphFirstEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CSeraphSecondEffectToken::CSeraphSecondEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Seraph Second Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphSecondEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSeraphSecondEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSeraphSecondEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CSeraphSecondEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (bFired) return FALSE;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pToZone->GetZoneId() != ZoneId::Battlefield)
	{
		if (pCards1.HasCard(pCard))
			pCards1.RemoveCard(pCard);

		if (pCards2.HasCard(pCard))
		{
			pCards2.RemoveCard(pCard);

			if (pCard->GetController() == GetController())
			{
				bFired = TRUE;

				return true;
			}
		}
	}
	else if ((pFromZone->GetPlayer() == GetController()) && (pToZone->GetPlayer() != GetController()) && pCards2.HasCard(pCard))
	{
		bFired = TRUE;

		return true;
	}

	return false;
}

bool CSeraphSecondEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards1.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards1.GetAt(i));

	return true;
}

bool CSeraphSecondEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CShiftyDoppelgangerEffectToken::CShiftyDoppelgangerEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Shifty Doppelganger Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShiftyDoppelgangerEffectToken::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShiftyDoppelgangerEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShiftyDoppelgangerEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShiftyDoppelgangerEffectToken::SetTriggerContext3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShiftyDoppelgangerEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CShiftyDoppelgangerEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CShiftyDoppelgangerEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);

	return false;
}

bool CShiftyDoppelgangerEffectToken::SetTriggerContext3(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards2.RemoveCard(pCard);

	return false;
}

bool CShiftyDoppelgangerEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	if (pCards1.GetSize() > 0)
	{
		CCard* pCard = pCards1.GetAt(0);

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());
		pModifier1.ApplyTo(pCard);

		if (!pCard->IsInplay())
		{
			CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());

			for (int i = pCards2.GetSize() - 1; i >= 0; --i)
				pModifier2.ApplyTo(pCards2.GetAt(i));
		}

	}

	return true;
}

bool CShiftyDoppelgangerEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CSpinalEmbraceEffectToken::CSpinalEmbraceEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Spinal Embrace Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpinalEmbraceEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSpinalEmbraceEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpinalEmbraceEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpinalEmbraceEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSpinalEmbraceEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CSpinalEmbraceEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pController);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCards.GetAt(i);

		Life nToughness = Life(0);

		if (pCard->GetCardType().IsCreature())
			nToughness = ((CCreatureCard*)pCard)->GetLastKnownToughness();

		pModifier1.ApplyTo(pCard);

		if (!pCard->IsInplay() && (nToughness > Life(0)))
		{
			CLifeModifier pModifier2 = CLifeModifier(Life(+nToughness), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
			pModifier2.ApplyTo(pController);
		}
	}

	return true;
}

bool CSpinalEmbraceEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CSpinalEmbraceEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CTransluminantEffectToken::CTransluminantEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Transluminant Effect"), CardType::GlobalEnchantment, nID)
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTransluminantEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTransluminantEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTransluminantEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CTransluminantEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CTransluminantEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Spirit J"), 2944, 1);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CTransluminantEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CBattleCryEffectToken::CBattleCryEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Battle Cry Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlockedAny,
								CWhenAttackedBlockedAny::EventCallback, &CWhenAttackedBlockedAny::SetBlockingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBattleCryEffectToken::SetTriggerContext));				
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CBattleCryEffectToken::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
											CCreatureCard* pCreature) const
{
	triggerContext.m_pCreature = pCreature;

	return true;
}

//____________________________________________________________________________
//
CHeartWolfEffectToken::CHeartWolfEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Heart Wolf Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHeartWolfEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHeartWolfEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CHeartWolfEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		pCards1.RemoveCard(pCard);
		if (pCards2.HasCard(pCard))
			pCards2.RemoveCard(pCard);

		return true;
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CHeartWolfEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CKjeldoranEliteGuardEffectToken::CKjeldoranEliteGuardEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Kjeldoran Elite Guard Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranEliteGuardEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKjeldoranEliteGuardEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CKjeldoranEliteGuardEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		pCards1.RemoveCard(pCard);
		if (pCards2.HasCard(pCard))
			pCards2.RemoveCard(pCard);

		return true;
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CKjeldoranEliteGuardEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CKjeldoranGuardEffectToken::CKjeldoranGuardEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Kjeldoran Guard Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKjeldoranGuardEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKjeldoranGuardEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CKjeldoranGuardEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		pCards1.RemoveCard(pCard);
		if (pCards2.HasCard(pCard))
			pCards2.RemoveCard(pCard);

		return true;
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CKjeldoranGuardEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CPhantasmalMountEffectToken::CPhantasmalMountEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Phantasmal Mount Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantasmalMountEffectToken::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhantasmalMountEffectToken::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantasmalMountEffectToken::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhantasmalMountEffectToken::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CPhantasmalMountEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);

	return true;
}

bool CPhantasmalMountEffectToken::BeforeResolution1(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

bool CPhantasmalMountEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards2.RemoveCard(pCard);

	return true;
}

bool CPhantasmalMountEffectToken::BeforeResolution2(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards1.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards1.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CSaffiEriksdotterEffectToken::CSaffiEriksdotterEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Saffi Eriksdotter Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSaffiEriksdotterEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSaffiEriksdotterEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSaffiEriksdotterEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;
	if (pCard->GetOwner() != GetController()) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	
	return true;
}

bool CSaffiEriksdotterEffectToken::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());

	pModifier.ApplyTo((CCard*)pAction->GetTriggerContext().nValue1);
	return true;
}

//____________________________________________________________________________
//
CWarBargeEffectToken::CWarBargeEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("War Barge Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarBargeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWarBargeEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CWarBargeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		pCards1.RemoveCard(pCard);
		if (pCards2.HasCard(pCard))
			pCards2.RemoveCard(pCard);

		return true;
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CWarBargeEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::DestroyWithoutRegeneration, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CBasaltGolemEffectToken::CBasaltGolemEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Basalt Golem Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBasaltGolemEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBasaltGolemEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBasaltGolemEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CBasaltGolemEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CBasaltGolemEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCards.GetAt(i);
		CPlayer* pPlayer = pCard->GetController();

		CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pPlayer);
		pModifier1.ApplyTo(pCard);

		if (!pCard->IsInplay())
		{
			CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Wall B"), 62046, 1);
			pModifier2.ApplyTo(pPlayer);
		}
	}

	return true;
}

bool CBasaltGolemEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CEndOfCombatRemovePlusCounterEffectToken::CEndOfCombatRemovePlusCounterEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End of Combat Remove Plus Counter Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatRemovePlusCounterEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndOfCombatRemovePlusCounterEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatRemovePlusCounterEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Clockwork Beetle, Clockwork Condor, Clockwork Dragon, Clockwork Vorrac
}

bool CEndOfCombatRemovePlusCounterEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndOfCombatRemovePlusCounterEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndOfCombatRemovePlusCounterEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CContemptEffectToken::CContemptEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Contempt Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CContemptEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CContemptEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CContemptEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CContemptEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CContemptEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, true, MoveType::Others, pAction->GetController());
	
	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));
	for (int i = pCards1.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards1.GetAt(i));

	return true;
}

bool CContemptEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	if (pCards1.HasCard(pCard))
		pCards1.RemoveCard(pCard);
	if (pCards2.HasCard(pCard))
		pCards2.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CEndOfCombatSacrificeEffectToken::CEndOfCombatSacrificeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End of Combat Sacrifice Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatSacrificeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndOfCombatSacrificeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatSacrificeEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Crumbling Colossus, Fog Elemental, Gemini Engine, Keldon Battlewagon, Stoic Ephemera
}

bool CEndOfCombatSacrificeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndOfCombatSacrificeEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndOfCombatSacrificeEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CRuneswordEffectToken::CRuneswordEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Runesword Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::CreatureEventCallback, &CWhenDamageDealtAny::SetCreatureEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRuneswordEffectToken::SetTriggerContextAux));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRuneswordEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRuneswordEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CRuneswordEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
		
	pToCreature->GetReplacementKeyword()->AddGraveyardToExile(TRUE);
	pToCreature->GetCreatureKeyword()->AddCantRegenerate(TRUE);

	return false;
}

bool CRuneswordEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard) && !pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
	{
		pCards1.RemoveCard(pCard);
		if (pCards2.HasCard(pCard))
			pCards2.RemoveCard(pCard);

		return true;
	}

	pCards2.RemoveCard(pCard);

	return false;
}

bool CRuneswordEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Sacrifice, pAction->GetController());

	for (int i = pCards2.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards2.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CDwarvenSeaClanEffectToken::CDwarvenSeaClanEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Dwarven Sea Clan Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDwarvenSeaClanEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenSeaClanEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDwarvenSeaClanEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CDwarvenSeaClanEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CDwarvenSeaClanEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	if (pCards2.GetSize() > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-2), pCards2.GetAt(0), PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		for (int i = pCards1.GetSize() - 1; i >= 0; --i)
			if (pCards1.GetAt(i)->GetCardType().IsCreature())
				pModifier.ApplyTo((CCreatureCard*)pCards1.GetAt(i));
	}

	return true;
}

bool CDwarvenSeaClanEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CFickleEfreetEffectToken::CFickleEfreetEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Fickle Efreet Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFickleEfreetEffectToken::OnFlipSelected))
	, m_OpponentSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFickleEfreetEffectToken::OnOpponentSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFickleEfreetEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFickleEfreetEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFickleEfreetEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CFickleEfreetEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CFickleEfreetEffectToken::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		int Thumb = 0;
		int Exponent = 2;
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) 
			Exponent = 2 * Exponent;
		Flip = pController->GetRand() % Exponent;
	}

	if (Flip == 0)
	{
		CString strMessage;
		strMessage.Format(_T("%s loses the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);

		OpponentSelection(pController);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s wins the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CFickleEfreetEffectToken::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s wins the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
	
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s loses the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				
				OpponentSelection(pSelectionPlayer);

				return;
			}
		}
}

void CFickleEfreetEffectToken::OpponentSelection(CPlayer* pSelectionPlayer)
{
	if (pCards.GetSize() > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);

			if (pPlayer != pSelectionPlayer)
			{
				SelectionEntry entry;

				entry.dwContext = ip;
				
				entry.strText.Format(_T("Choose %s"),
					pPlayer->GetPlayerName());

				entries.push_back(entry);
			}
		}
		m_OpponentSelection.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
	}
}

void CFickleEfreetEffectToken::OnOpponentSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(it->dwContext);

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s chooses %s"), pSelectionPlayer->GetPlayerName(), pPlayer->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pCards.GetAt(0)->Move(pPlayer->GetZoneById(ZoneId::Battlefield), pPlayer, MoveType::Others);
				
			return;
		}
}

bool CFickleEfreetEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CFrostwebSpiderEffectToken::CFrostwebSpiderEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Frostweb Spider Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrostwebSpiderEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFrostwebSpiderEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrostwebSpiderEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CFrostwebSpiderEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CFrostwebSpiderEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +1);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CFrostwebSpiderEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CEndOfCombatExileEffectToken::CEndOfCombatExileEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End of Combat Exile Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatExileEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndOfCombatExileEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatExileEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Geist of Saint Traft
}

bool CEndOfCombatExileEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndOfCombatExileEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndOfCombatExileEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CGlyphOfLifeEffectToken::CGlyphOfLifeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Glyph of Life Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealtAny, 
				CWhenDamageDealtAny::CreatureEventCallback, &CWhenDamageDealtAny::SetCreatureEventCallback  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlyphOfLifeEffectToken::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlyphOfLifeEffectToken::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGlyphOfLifeEffectToken::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (!pCards.HasCard(pToCreature)) return false;
	if (!pCard->GetCardType().IsCreature()) return false;
	if (!((CCreatureCard*)pCard)->IsAttacking()) return false;

	triggerContext.m_LifeModifier = CLifeModifier(-pDamage.m_nLifeDelta, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CGlyphOfLifeEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CEndOfCombatTopOfLibraryEffectToken::CEndOfCombatTopOfLibraryEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("End of Combat Top of Library Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatTopOfLibraryEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEndOfCombatTopOfLibraryEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEndOfCombatTopOfLibraryEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

	// Generic effect used by: Saprazzan Outrigger
}

bool CEndOfCombatTopOfLibraryEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CEndOfCombatTopOfLibraryEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, true, MoveType::Others, pAction->GetController());

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));

	return true;
}

bool CEndOfCombatTopOfLibraryEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CSawtoothOgreEffectToken::CSawtoothOgreEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Sawtooth Ogre Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSawtoothOgreEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSawtoothOgreEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSawtoothOgreEffectToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSawtoothOgreEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CSawtoothOgreEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	if (pCards2.GetSize() > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(-1), pCards2.GetAt(0), PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

		for (int i = pCards1.GetSize() - 1; i >= 0; --i)
			if (pCards1.GetAt(i)->GetCardType().IsCreature())
				pModifier.ApplyTo((CCreatureCard*)pCards1.GetAt(i));
	}

	return true;
}

bool CSawtoothOgreEffectToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards1.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards1.RemoveCard(pCard);
	return false;
}

//____________________________________________________________________________
//
CCoffinQueenEffectToken::CCoffinQueenEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Coffin Queen Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCoffinQueenEffectToken::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCoffinQueenEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenOrientationChangedAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetFromOrientation(Orientation::Tap);
		cpAbility->GetTrigger().SetToOrientation(Orientation::Untap);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCoffinQueenEffectToken::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCoffinQueenEffectToken::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCoffinQueenEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CCoffinQueenEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (bFired) return FALSE;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pToZone->GetZoneId() != ZoneId::Battlefield)
	{
		if (pCards1.HasCard(pCard))
			pCards1.RemoveCard(pCard);

		if (pCards2.HasCard(pCard))
		{
			pCards2.RemoveCard(pCard);

			if (pCard->GetController() == GetController())
			{
				bFired = TRUE;

				return true;
			}
		}
	}
	else if ((pFromZone->GetPlayer() == GetController()) && (pToZone->GetPlayer() != GetController()) && pCards2.HasCard(pCard))
	{
		bFired = TRUE;

		return true;
	}

	return false;
}

bool CCoffinQueenEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, Orientation pFromOrientation, Orientation pToOrientation)
{
	if (bFired) return false;
	if (!pCards2.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	bFired = TRUE;
	return true;
}

bool CCoffinQueenEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, true, MoveType::Others, pAction->GetController());

	for (int i = pCards1.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards1.GetAt(i));

	return true;
}

bool CCoffinQueenEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}
//____________________________________________________________________________
//
CBeckEffectToken::CBeckEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Beck Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBeckEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBeckEffectToken::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CVanishIntoMemoryEffectToken::CVanishIntoMemoryEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Vanish into Memory Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVanishIntoMemoryEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVanishIntoMemoryEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVanishIntoMemoryEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVanishIntoMemoryEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CVanishIntoMemoryEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CVanishIntoMemoryEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	
	if (pCards.GetSize() == 0) return true;

	CCreatureCard* pCard = (CCreatureCard*)pCards.GetAt(0);
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pController);
	pModifier.ApplyTo(pCard);

	if (pCard->IsInplay())
	{
		int nCards = (int)pCard->GetLife();
		int nHandSize = pController->GetZoneById(ZoneId::Hand)->GetSize();

		if (nCards > nHandSize) nCards = nHandSize;

		if (nCards > 0)
		{
			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(nCards), MaximumValue(nCards), // select cards to 
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Discard, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
			pModifier.ApplyTo(pController);
		}
	}

	return true;
}

bool CVanishIntoMemoryEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CVanishIntoMemoryEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CLegionsInitiativeEffectToken::CLegionsInitiativeEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Legion's Initiative Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningOfCombatStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLegionsInitiativeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLegionsInitiativeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLegionsInitiativeEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLegionsInitiativeEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CLegionsInitiativeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CLegionsInitiativeEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Exile, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());
	CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE);
	CCardKeywordModifier pModifier3 = CCardKeywordModifier(CardKeyword::CardHaste, TRUE);

	for (int i = pCards.GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pCards.GetAt(i);
		pModifier1.ApplyTo(pCard);

		if (pCard->GetCardType().IsCreature())
			pModifier2.ApplyTo((CCreatureCard*)pCard);
		else
			pModifier3.ApplyTo(pCard);
	}

	return true;
}

bool CLegionsInitiativeEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);
	return false;
}

bool CLegionsInitiativeEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CAweForTheGuildsEffectToken::CAweForTheGuildsEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Awe for the Guilds Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardMulticoloredComparer(CardMulticoloredComparer::MonocoloredCards));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CManaDrainEffectToken::CManaDrainEffectToken(CGame* pGame, UINT nID)
	: CNumberEffectCard(pGame, _T("Mana Drain Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaDrainEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManaDrainEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CManaDrainEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CManaDrainEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CManaDrainEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CManaPoolModifier pModifier =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
	for (int i = 0; i < nNumber; ++i) pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CManaDrainEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CPlasmCaptureEffectToken::CPlasmCaptureEffectToken(CGame* pGame, UINT nID)
	: CNumberEffectCard(pGame, _T("Plasm Capture Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
	, m_NumberSelectionW(pGame,CSelectionSupport::SelectionCallback(this, &CPlasmCaptureEffectToken::OnNumberSelectedW))
	, m_NumberSelectionU(pGame,CSelectionSupport::SelectionCallback(this, &CPlasmCaptureEffectToken::OnNumberSelectedU))
	, m_NumberSelectionB(pGame,CSelectionSupport::SelectionCallback(this, &CPlasmCaptureEffectToken::OnNumberSelectedB))
	, m_NumberSelectionR(pGame,CSelectionSupport::SelectionCallback(this, &CPlasmCaptureEffectToken::OnNumberSelectedR))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlasmCaptureEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPlasmCaptureEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlasmCaptureEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CPlasmCaptureEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	if (!GetGame()->IsFirstMainPhase()) return false;
	
	bFired = TRUE;

	return true;
}

bool CPlasmCaptureEffectToken::BeforeResolution(CAbilityAction* pAction)
{
	Remaining = nNumber;
	
	if (Remaining > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < Remaining + 1; i++)
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = i + 1;
			selectionEntry.strText.Format(_T("%d white mana"), i);

			entries.push_back(selectionEntry);
		}
		m_NumberSelectionW.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}

	return true;
}

void CPlasmCaptureEffectToken::OnNumberSelectedW(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pSelectionPlayer);

			Remaining = Remaining - n;

			if (Remaining > 0)
			{
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < Remaining + 1; i++)
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = i + 1;
					selectionEntry.strText.Format(_T("%d blue mana"), i);

					entries.push_back(selectionEntry);
				}
				m_NumberSelectionU.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}

		}
}

void CPlasmCaptureEffectToken::OnNumberSelectedU(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pSelectionPlayer);

			Remaining = Remaining - n;

			if (Remaining > 0)
			{
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < Remaining + 1; i++)
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = i + 1;
					selectionEntry.strText.Format(_T("%d black mana"), i);

					entries.push_back(selectionEntry);
				}
				m_NumberSelectionB.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}

		}
}

void CPlasmCaptureEffectToken::OnNumberSelectedB(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier.ApplyTo(pSelectionPlayer);

			Remaining = Remaining - n;

			if (Remaining > 0)
			{
				std::vector<SelectionEntry> entries;
				for (int i = 0; i < Remaining + 1; i++)
				{
					SelectionEntry selectionEntry;

					selectionEntry.dwContext = i + 1;
					selectionEntry.strText.Format(_T("%d red mana"), i);

					entries.push_back(selectionEntry);
				}
				m_NumberSelectionR.AddSelectionRequest(entries, 1, 1, NULL, pSelectionPlayer);
			}

		}
}

void CPlasmCaptureEffectToken::OnNumberSelectedR(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int n = (int)it->dwContext - 1;
			CManaPoolModifier pModifier1 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier1.ApplyTo(pSelectionPlayer);

			n = Remaining - n;

			CManaPoolModifier pModifier2 =  CManaPoolModifier(
				CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

			if (n!=0) for (int i=0; i<n; i++) pModifier2.ApplyTo(pSelectionPlayer);
		}
}

bool CPlasmCaptureEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CScatteringStrokeEffectToken::CScatteringStrokeEffectToken(CGame* pGame, UINT nID)
	: CNumberEffectCard(pGame, _T("Scattering Stroke Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CScatteringStrokeEffectToken::OnSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScatteringStrokeEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScatteringStrokeEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScatteringStrokeEffectToken::SetTriggerContextAux));
		AddAbility(cpAbility.GetPointer());
    }
}

bool CScatteringStrokeEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CScatteringStrokeEffectToken::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't add mana"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Add %d colorless mana to your mana pool"), nNumber);
		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return true;
}

void CScatteringStrokeEffectToken::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				return;
			}
			if (it->dwContext == 1)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
				for (int i = 0; i < nNumber; ++i) pModifier.ApplyTo(pSelectionPlayer);
			}
		}
}

bool CScatteringStrokeEffectToken::SetTriggerContextAux(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CSavageSummoningFirstEffectToken::CSavageSummoningFirstEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Savage Summoning First Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Copy, false));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Copy, false));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSavageSummoningFirstEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSavageSummoningFirstEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	CCardKeywordModifier pModifier1 = CCardKeywordModifier(CardKeyword::CantBeCountered, TRUE);
	pModifier1.ApplyTo(pCard);

	CCountedCardContainer pSubjects;
	pSubjects.AddCard(pCard, CardPlacement::Top);

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("Savage Summoning Second Effect"), 61124, &pSubjects);
	pModifier2.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CSavageSummoningSecondEffectToken::CSavageSummoningSecondEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Savage Summoning Second Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSavageSummoningSecondEffectToken::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSavageSummoningSecondEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pCards.GetSize() == 0)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, true, MoveType::Others, GetController());
		pModifier.ApplyTo(this);
	}

	return false;
}

//____________________________________________________________________________
//
CInsistEffectToken::CInsistEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Insist Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInsistEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInsistEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	CCardKeywordModifier pModifier = CCardKeywordModifier(CardKeyword::CantBeCountered, TRUE);
	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
COvermasterEffectToken::COvermasterEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Overmaster Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("instant cards or sorcery cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COvermasterEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool COvermasterEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;

	CCardKeywordModifier pModifier = CCardKeywordModifier(CardKeyword::CantBeCountered, TRUE);
	pModifier.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CGoblinDiplomatsEffectToken::CGoblinDiplomatsEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Goblin Diplomats Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CGenericContainerBattlefieldToken::CGenericContainerBattlefieldToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Generic Container - Battlefield"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGenericContainerBattlefieldToken::SetTriggerContextAux));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGenericContainerBattlefieldToken::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::Exile, TRUE, MoveType::Others, GetController());
	pModifier.ApplyTo(this);
	
	return false;
}

//____________________________________________________________________________
//
CSeismicStompEffectToken::CSeismicStompEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Seismic Stomp Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CStoneshockGiantEffectToken::CStoneshockGiantEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Stoneshock Giant Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
		cpAbility->SetAffectOpponentCardsOnly();

		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CElspethSunsChampionEmblemToken::CElspethSunsChampionEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Elspeth, Sun's Champion Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer, 
			Power(+2), Life(+2),
			CreatureKeyword::Flying));

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBidentOfThassaEffectToken::CBidentOfThassaEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Bident of Thassa Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::MustAttack));

		cpAbility->SetAffectOpponentCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CGiftOfImmortalityEffectToken::CGiftOfImmortalityEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Gift of Immortality Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiftOfImmortalityEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGiftOfImmortalityEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiftOfImmortalityEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiftOfImmortalityEffectToken::SetTriggerContextAux2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGiftOfImmortalityEffectToken::SetTriggerContextAux3));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CGiftOfImmortalityEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CGiftOfImmortalityEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	if ((pCards1.GetSize() == 0) || (pCards2.GetSize() == 0)) return true;
	CCard* pCard1 = pCards1.GetAt(0);
	CCard* pCard2 = pCards2.GetAt(0);

	bool bValidAura = true;

	for (int j = 0; j < pCard1->GetSpells().GetSize(); ++j)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pCard1->GetSpells().GetAt(j));
		if (!pEnchantSpell) continue;
		if (!pEnchantSpell->GetTargeting()->GetSubjectCardFilter().IsCardIncluded(pCard2))
			bValidAura = false;
	}

	if (bValidAura)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());
		pModifier.ApplyTo(pCard1);

		for (int j = 0; j < pCard1->GetSpells().GetSize(); ++j)
		{
			CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(pCard1->GetSpells().GetAt(j));
			if (!pEnchantSpell) continue;
			pEnchantSpell->Enchant(pCard2, GetController(), pCard1->GetSpells().GetAt(j)->GetActionValue());
		}
	}

	return true;
}

bool CGiftOfImmortalityEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
		pCards1.RemoveCard(pCard);

	return false;
}

bool CGiftOfImmortalityEffectToken::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards2.HasCard(pCard))
		pCards2.RemoveCard(pCard);

	return false;
}

bool CGiftOfImmortalityEffectToken::SetTriggerContextAux3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CRescueFromTheUnderworldEffectToken::CRescueFromTheUnderworldEffectToken(CGame* pGame, UINT nID)
	: CDoubleContainerEffectCard(pGame, _T("Rescue from the Underworld Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRescueFromTheUnderworldEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRescueFromTheUnderworldEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRescueFromTheUnderworldEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Exile, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRescueFromTheUnderworldEffectToken::SetTriggerContextAux2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_Effects, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRescueFromTheUnderworldEffectToken::SetTriggerContextAux2));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRescueFromTheUnderworldEffectToken::SetTriggerContextAux3));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CRescueFromTheUnderworldEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = TRUE;

	return true;
}

bool CRescueFromTheUnderworldEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	if (pCards1.GetSize() > 0)
		pCards1.GetAt(0)->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	if (pCards2.GetSize() > 0)
		pCards2.GetAt(0)->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	return true;
}

bool CRescueFromTheUnderworldEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards1.HasCard(pCard))
		pCards1.RemoveCard(pCard);
	if (pCards2.HasCard(pCard))
		pCards2.RemoveCard(pCard);

	return false;
}

bool CRescueFromTheUnderworldEffectToken::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	if (pCards2.HasCard(pCard))
		pCards2.RemoveCard(pCard);

	return false;
}

bool CRescueFromTheUnderworldEffectToken::SetTriggerContextAux3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) return false;

	return true;
}

//____________________________________________________________________________
//
CTimeToFeedEffectToken::CTimeToFeedEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Time to Feed Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTimeToFeedEffectToken::SetTriggerContext));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CTimeToFeedEffectToken::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) return false;
	
	pCards.RemoveCard(pCard);

	if (pToZone->GetZoneId() != ZoneId::Graveyard) return false;

	return true;
}

//____________________________________________________________________________
//
CTemurCharmEffectToken::CTemurCharmEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Temur Charm Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CreaturePowerComparer<std::less<int>>(4));
		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CSearingBloodEffectToken::CSearingBloodEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Searing Blood Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSearingBloodEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSearingBloodEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSearingBloodEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if(!pCards.HasCard(pCard)) 
		return false;
	if(GetZone()->GetZoneId() != ZoneId::_Effects) 
		return false;	
	pCards.RemoveCard(pCard);
	if(pToZone->GetZoneId() != ZoneId::Graveyard) 
		return false;
	triggerContext.nValue1 = (DWORD)pCard->GetController();
	return true;
}

bool CSearingBloodEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;
	//deal 3 damage to the target creature's controller.
	CLifeModifier pModifier = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pPlayer);
	return true;
}

//____________________________________________________________________________
//
CBurnAwayEffectToken::CBurnAwayEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Burn Away Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones, TRUE, FALSE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBurnAwayEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBurnAwayEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CBurnAwayEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if(!pCards.HasCard(pCard)) 
		return false;
	if(GetZone()->GetZoneId() != ZoneId::_Effects) 
		return false;	
	pCards.RemoveCard(pCard);
	if(pToZone->GetZoneId() != ZoneId::Graveyard) 
		return false;
	triggerContext.nValue1 = (DWORD)pCard->GetController();
	return true;
}

bool CBurnAwayEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;
	// Exile all cards from target creature's controller's graveyard.
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	pModifier.ApplyTo(pPlayer);
	return true;
}

//____________________________________________________________________________
//
/*
	This generic effect is used when designated card(s) normally the creature card that this effect originated from
	are put into the graveyard (die) and they are required to return to the battlefield under their owner's 
	control at the beginning of their next upkeep.
	Ref: 
	Phytotitan (7/2) 4GG
	Creature - Plant Elemental
	When Phytotitan dies, return it to the battlefield tapped under its owner's 
	control at the beginning of his or her next upkeep.7/2

	Most of this code is template derived from other similar effects such as CEndStepReanimateEffectToken.
*/
CUpkeepStepReanimateEffectToken::CUpkeepStepReanimateEffectToken(CGame* pGame, UINT nID)
	: CContainerEffectCard(pGame, _T("Upkeep Step Reanimate Effect"), CardType::GlobalEnchantment, nID)	
	, bFired(FALSE)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
		// below modify phase in which card is required to return
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		//
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUpkeepStepReanimateEffectToken::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CUpkeepStepReanimateEffectToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
												ZoneId::Graveyard, ZoneId::_AllZones, TRUE, FALSE, FALSE));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUpkeepStepReanimateEffectToken::SetTriggerContextAux1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUpkeepStepReanimateEffectToken::SetTriggerContextAux2));

		AddAbility(cpAbility.GetPointer());
    }
	// Generic effect used by Phytotitan
}

bool CUpkeepStepReanimateEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) 
		return false;
	bFired = TRUE;
	return true;
}

bool CUpkeepStepReanimateEffectToken::BeforeResolution(CAbilityAction* pAction) const
{
	// below modify where effect requires card(s) to be moved from then to
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others, pAction->GetController());
	//
	for (int i = pCards.GetSize() - 1; i >= 0; --i)
		pModifier.ApplyTo(pCards.GetAt(i));
	return true;
}

bool CUpkeepStepReanimateEffectToken::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext,
														    CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCards.HasCard(pCard)) 
		return false;
	if (GetZone()->GetZoneId() != ZoneId::_Effects) 
		return false;
	pCards.RemoveCard(pCard);
	return false;
}

bool CUpkeepStepReanimateEffectToken::SetTriggerContextAux2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bFired) 
		return false;
	return true;
}

//____________________________________________________________________________
//