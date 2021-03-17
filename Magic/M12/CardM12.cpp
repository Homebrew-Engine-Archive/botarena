#include "stdafx.h"
#include "CardM12.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		DEFINE_CARD(CAdaptiveAutomatonCard);
		DEFINE_CARD(CAlabasterMageCard);
		DEFINE_CARD(CAmphinCutthroatCard);
		DEFINE_CARD(CAngelicDestinyCard);
		DEFINE_CARD(CArachnusSpinnerCard);
		DEFINE_CARD(CArachnusWebCard);
		DEFINE_CARD(CArbalestEliteCard);
		DEFINE_CARD(CArchonOfJusticeCard);
		DEFINE_CARD(CArmoredWarhorseCard);
		DEFINE_CARD(CAvenFleetwingCard);
		DEFINE_CARD(CAuramancerCard);
		DEFINE_CARD(CAzureMageCard);
		DEFINE_CARD(CBelltowerSphinxCard);
		DEFINE_CARD(CBenalishVeteranCard);
		DEFINE_CARD(CBloodOgreCard);
		DEFINE_CARD(CBloodSeekerCard);
		DEFINE_CARD(CBloodlordOfVaasgothCard);
		DEFINE_CARD(CBloodrageVampireCard);
		DEFINE_CARD(CBonebreakerGiantCard);
		DEFINE_CARD(CBrinkOfDisasterCard);
		DEFINE_CARD(CBuriedRuinCard);
		DEFINE_CARD(CCallToTheGraveCard);
		DEFINE_CARD(CCarnageWurmCard);
		DEFINE_CARD(CChandrasPhoenixCard);
		DEFINE_CARD(CChandraTheFirebrandCard);
		DEFINE_CARD(CChasmDrakeCard);
		DEFINE_CARD(CCircleOfFlameCard);
		DEFINE_CARD(CCrimsonMageCard);
		DEFINE_CARD(CCrownOfEmpiresCard);
		DEFINE_CARD(CCrumblingColossusCard);
		DEFINE_CARD(CDarkFavorCard);
		DEFINE_CARD(CDevouringSwarmCard);
		DEFINE_CARD(CDoublingChantCard);
		DEFINE_CARD(CDivineFavorCard);
		DEFINE_CARD(CDriftingShadeCard);
		DEFINE_CARD(CDruidicSatchelCard);
		DEFINE_CARD(CDungroveElderCard);
		DEFINE_CARD(CDuskhunterBatCard);
		DEFINE_CARD(CFlameblastDragonCard);
		DEFINE_CARD(CFrostBreathCard);
		DEFINE_CARD(CFurybornHellkiteCard);
		DEFINE_CARD(CGarrukPrimalHunterCard);
		DEFINE_CARD(CGarruksHordeCard);
		DEFINE_CARD(CGideonsAvengerCard);
		DEFINE_CARD(CGideonJuraCard);
		DEFINE_CARD(CGideonsLawkeeperCard);
		DEFINE_CARD(CGladecoverScoutCard);
		DEFINE_CARD(CGoblinArsonistCard);
		DEFINE_CARD(CGoblinBangchuckersCard);
		DEFINE_CARD(CGoblinFireslingerCard);
		DEFINE_CARD(CGoblinGrenadeCard);
		DEFINE_CARD(CGoblinWarPaintCard);
		DEFINE_CARD(CGorehornMinotaursCard);
		DEFINE_CARD(CGrandAbolisherCard);
		DEFINE_CARD(CGreatSwordCard);
		DEFINE_CARD(CGriffinRiderCard);
		DEFINE_CARD(CGrimLavamancerCard);
		DEFINE_CARD(CGuardiansPledgeCard);
		DEFINE_CARD(CHideousVisageCard);
		DEFINE_CARD(CJaceMemoryAdeptCard);
		DEFINE_CARD(CJacesArchivistCard);
		DEFINE_CARD(CJadeMageCard);
		DEFINE_CARD(CKiteShieldCard);
		DEFINE_CARD(CLurkingCrocodileCard);
		DEFINE_CARD(CLordOfTheUnrealCard);
		DEFINE_CARD(CManalithCard);
		DEFINE_CARD(CMasterThiefCard);
		DEFINE_CARD(CMerfolkMesmeristCard);
		DEFINE_CARD(CMindUnboundCard);
		DEFINE_CARD(COblivionRingCard);
		DEFINE_CARD(COnyxMageCard);
		DEFINE_CARD(CPentavusCard);
		DEFINE_CARD(CPeregrineGriffinCard);
		DEFINE_CARD(CPhantasmalBearCard);
		DEFINE_CARD(CPhantasmalDragonCard);
		DEFINE_CARD(CPrideGuardianCard);
		DEFINE_CARD(CPrimordialHydraCard);
		DEFINE_CARD(CQuicksilverAmuletCard);
		DEFINE_CARD(CRitesOfFlourishingCard);
		DEFINE_CARD(CRustedSentinelCard);
		DEFINE_CARD(CRuneScarredDemonCard);
		DEFINE_CARD(CScepterOfEmpiresCard);
		DEFINE_CARD(CScrambleverseCard);
		DEFINE_CARD(CSkinshifterCard);
		DEFINE_CARD(CSkywinderDrakeCard);
		DEFINE_CARD(CSlaughterCryCard);
		DEFINE_CARD(CSmallpoxCard);
		DEFINE_CARD(CSolemnSimulacrumCard);
		DEFINE_CARD(CSorinsThirstCard);
		DEFINE_CARD(CSorinsVengeanceCard);
		DEFINE_CARD(CSphinxOfUthuunCard);
		DEFINE_CARD(CStaveOffCard);
		DEFINE_CARD(CStingerflingSpiderCard);
		DEFINE_CARD(CStonehornDignitaryCard);
		DEFINE_CARD(CStormbloodBerserkerCard);
		DEFINE_CARD(CSundialOfTheInfiniteCard);
		DEFINE_CARD(CSwiftfootBootsCard);
		DEFINE_CARD(CTasteOfBloodCard);
		DEFINE_CARD(CTectonicRiftCard);
		DEFINE_CARD(CThroneOfEmpiresCard);
		DEFINE_CARD(CTimelyReinforcementsCard);
		DEFINE_CARD(CTitanicGrowthCard);
		DEFINE_CARD(CTormentedSoulCard);
		DEFINE_CARD(CTrollhideCard);
		DEFINE_CARD(CVampireOutcastsCard);
		DEFINE_CARD(CVastwoodGorgerCard);
		DEFINE_CARD(CVisionsOfBeyondCard);
		DEFINE_CARD(CWallOfTorchesCard);
		DEFINE_CARD(CWarstormSurgeCard);
		DEFINE_CARD(CWorldslayerCard);
		DEFINE_CARD(CWringFleshCard);
		DEFINE_CARD(CZombieInfestationCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CGideonsAvengerCard::CGideonsAvengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gideon's Avenger"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));	

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGideonsLawkeeperCard::CGideonsLawkeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gideon's Lawkeeper"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			WHITE_MANA_TEXT,
			TRUE, // tap
			FALSE, // untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhantasmalBearCard::CPhantasmalBearCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantasmal Bear"), CardType::Creature, CREATURE_TYPE2(Illusion, Bear), nID,
		BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBloodrageVampireCard::CBloodrageVampireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloodrage Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBloodrageVampireCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CBloodrageVampireCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CDuskhunterBatCard::CDuskhunterBatCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Duskhunter Bat"), CardType::Creature, CREATURE_TYPE(Bat), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDuskhunterBatCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CDuskhunterBatCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CVampireOutcastsCard::CVampireOutcastsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vampire Outcasts"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CVampireOutcastsCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCardKeyword()->AddLifelink(FALSE);
}

void CVampireOutcastsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +2, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CFurybornHellkiteCard::CFurybornHellkiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Furyborn Hellkite"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFurybornHellkiteCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CFurybornHellkiteCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +6, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CGorehornMinotaursCard::CGorehornMinotaursCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gorehorn Minotaurs"), CardType::Creature, CREATURE_TYPE2(Minotaur, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGorehornMinotaursCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CGorehornMinotaursCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +2, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CDungroveElderCard::CDungroveElderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dungrove Elder"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCardKeyword()->AddHexproof(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTormentedSoulCard::CTormentedSoulCard(CGame* pGame, UINT nID)
	: CUnblockableCreatureCard(pGame, _T("Tormented Soul"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);
}

//____________________________________________________________________________
//
CArchonOfJusticeCard::CArchonOfJusticeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Archon of Justice"), CardType::Creature, CREATURE_TYPE(Archon), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1); // trigger to previous zone controller

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAuramancerCard::CAuramancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Auramancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Enchantment, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGideonJuraCard::CGideonJuraCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Gideon Jura"), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		PlaneswalkerType::Gideon, 6)	
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				FALSE_CARD_COMPARER, true));

		CPlayerEffectModifier* pPModifier = new CPlayerEffectModifier(PlayerEffectType::MustAttackGideon);
		
		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargetModifier().CPlayerModifiers::push_back(pPModifier);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +2);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T(""),
				_T("Animated Gideon Jura"), 64005));

		cpAbility->SetAbilityText(_T("0: Gideon Jura becomes a 6/6 creature. Activates")); 

		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::PreventDamagetoGideon);
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	

		pmodifier->LinkPlayerModifier(pModifier2);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier);	

		//cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), 0);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COblivionRingCard::COblivionRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Oblivion Ring"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false)); // non-land and...
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//___________________________________________________________________________________
//
CBrinkOfDisasterCard::CBrinkOfDisasterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brink of Disaster"), CardType::EnchantCreature | CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CBrinkOfDisasterCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CBrinkOfDisasterCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, 
							&CWhenSelfOrientationChanged::SetTapEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CBrinkOfDisasterCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CBrinkOfDisasterCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CCallToTheGraveCard::CCallToTheGraveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Call to the Grave"), CardType::GlobalEnchantment, nID,
		_T("4") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCallToTheGraveCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCallToTheGraveCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCallToTheGraveCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	int nCreatures = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCreatures += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	return nCreatures == 0;
}

bool CCallToTheGraveCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCreatures = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nCreatures += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	return nCreatures == 0;
}

//____________________________________________________________________________
//
CSmallpoxCard::CSmallpoxCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Smallpox"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalChgLifeSpell> cpSpell(
			::CreateObject<CGlobalChgLifeSpell>(this, AbilityType::Sorcery,					
				BLACK_MANA_TEXT BLACK_MANA_TEXT,
				Life(-1), FALSE_CARD_COMPARER, TRUE,
				PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Tokens);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, FALSE));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, FALSE));
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CZombieInfestationCard::CZombieInfestationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Zombie Infestation"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Zombie H"), 2987,
			1));

	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlameblastDragonCard::CFlameblastDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Flameblast Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							   CWhenSelfAttackedBlocked::AttackEventCallback,
							   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Flash);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(0), PreventableType::Preventable));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector(ContextValue(-1));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetMaxTurnUsageCount(1);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CFlameblastDragonCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DeclareBlockersStep2));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CFlameblastDragonCard::CanPlay(BOOL bIncludeTricks)
{
	return GetCardKeyword()->HasFlash() == TRUE;
}

//____________________________________________________________________________
//
CGoblinArsonistCard::CGoblinArsonistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Arsonist"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinGrenadeCard::CGoblinGrenadeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Goblin Grenade"), CardType::Sorcery, nID, AbilityType::Sorcery,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-5),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_CardFilter(_T("a Goblin"), _T("Goblins"), new CreatureTypeComparer(CREATURE_TYPE(Goblin), false))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetCost().AddSacrificeCardCost(1, &m_CardFilter); // sacrifice a goblin in addition to cast
}

//____________________________________________________________________________
//
CGoblinWarPaintCard::CGoblinWarPaintCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Goblin War Paint"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::Haste)
{
}

//____________________________________________________________________________
//
CGrimLavamancerCard::CGrimLavamancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grim Lavamancer"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE, 
			Life(-2),	// life delta
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddExileGraveyardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSlaughterCryCard::CSlaughterCryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Slaughter Cry"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT,
			Power(+3), Life(+0), 
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRitesOfFlourishingCard::CRitesOfFlourishingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rites of Flourishing"), CardType::GlobalEnchantment, nID,
		_T("2")	GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
			::CreateObject<CPlayExtraLandEnchantment>(this, +1));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVastwoodGorgerCard::CVastwoodGorgerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vastwood Gorger"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(6))
{
}

//____________________________________________________________________________
//
CPentavusCard::CPentavusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pentavus"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("7"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 5, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("1"),
				_T("Pentavite"), TOKEN_ID_BY_NAME,
				1));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Pentavite), false));

		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CQuicksilverAmuletCard::CQuicksilverAmuletCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quicksilver Amulet"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("4"),
			CCardFilter::GetFilter(_T("creatures")),//new AnyCreatureComparer, 
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSolemnSimulacrumCard::CSolemnSimulacrumCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Solemn Simulacrum"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(2), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(FALSE);
		cpAbility->SetTapped(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWorldslayerCard::CWorldslayerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Worldslayer"), CardType::Artifact | CardType::Equipment, nID, 
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("5")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CAlabasterMageCard::CAlabasterMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Alabaster Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArbalestEliteCard::CArbalestEliteCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Arbalest Elite"), CardType::Creature, CREATURE_TYPE2(Human, Archer), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3),
		_T("2") WHITE_MANA_TEXT,
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-3), PreventableType::Preventable)
{
	CCardKeywordModifier* pModifier = new CCardKeywordModifier;
		pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
		pModifier->GetModifier().SetOneTurnOnly(FALSE);

	m_pTargetChgLifeAbility->GetResolutionModifier().CCardModifiers::push_back(pModifier);
}
//____________________________________________________________________________
//
CArmoredWarhorseCard::CArmoredWarhorseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Armored Warhorse"), CardType::Creature, CREATURE_TYPE(Horse), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CBenalishVeteranCard::CBenalishVeteranCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benalish Veteran"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDivineFavorCard::CDivineFavorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Divine Favor"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+3))
{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGriffinRiderCard::CGriffinRiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Griffin Rider"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+3), Life(+3), CreatureKeyword::Flying));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Griffin), false));
	cpAbility->GetConditionFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->SetConditionValue(1);
		
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGuardiansPledgeCard::CGuardiansPledgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Guardians' Pledge"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+2)));

	cpSpell->GetEnchantmentCardFilter().AddComparer(new CardControllerComparer(this));
	cpSpell->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::White, false));
	cpSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPeregrineGriffinCard::CPeregrineGriffinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Peregrine Griffin"), CardType::Creature, CREATURE_TYPE(Griffin), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CBloodSeekerCard::CBloodSeekerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blood Seeker"), CardType::Creature, CREATURE_TYPE2(Vampire, Shaman), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetGatherer().SetIncludeOpponentPlayersOnly();

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrideGuardianCard::CPrideGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pride Guardian"), CardType::Creature, CREATURE_TYPE2(Cat, Monk), nID,
		WHITE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStaveOffCard::CStaveOffCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stave Off"), CardType::Instant, nID)
{
	counted_ptr<CTargetGainKeywordSpell> cpSpell(
		::CreateObject<CTargetGainKeywordSpell>(this,
			AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpSpell->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStonehornDignitaryCard::CStonehornDignitaryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stonehorn Dignitary"), CardType::Creature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CStonehornDignitaryCard::OnResolutionCompleted))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->SetDiscardCount(0);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetAbilityName(_T("skip next combat phase ability"));
	cpAbility->SetPickerIsTriggeredPlayer(FALSE);

	AddAbility(cpAbility.GetPointer());
}

void CStonehornDignitaryCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();	
	CPlayerEffectModifier pmodifier = CPlayerEffectModifier(PlayerEffectType::SkipNextCombatPhase);	
	if (bResult) pmodifier.ApplyTo(target);
}

//____________________________________________________________________________
//
CAmphinCutthroatCard::CAmphinCutthroatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Amphin Cutthroat"), CardType::Creature, CREATURE_TYPE2(Salamander, Rogue), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(4))
{
}

//____________________________________________________________________________
//
CAvenFleetwingCard::CAvenFleetwingCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Fleetwing"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CAzureMageCard::CAzureMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Azure Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("3") BLUE_MANA_TEXT, 1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJaceMemoryAdeptCard::CJaceMemoryAdeptCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Jace, Memory Adept"), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, 
		PlaneswalkerType::Jace, 4)
{
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 1));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJaceMemoryAdeptCard::BeforeResolution));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
				_T(""), 10));
		ATLASSERT(cpAbility);

		cpAbility->SetRevealCardsToOthers(TRUE);
		cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
				_T(""), 20));

		cpAbility->GetTargeting()->SetSubjectCount(1, SpecialNumber::Any);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -7);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJaceMemoryAdeptCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CBuriedRuinCard::CBuriedRuinCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Buried Ruin"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

	cpNonbasicLandManaAbility->AddTapCost();

	AddAbility(cpNonbasicLandManaAbility.GetPointer());

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	
		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->AddSacrificeCost();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGreatSwordCard::CGreatSwordCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Greatsword"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKiteShieldCard::CKiteShieldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kite Shield"), CardType::Artifact | CardType::Equipment, nID, 
		_T("0"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("3")));

	cpAbility->AddCreatureModifier(new CLifeModifier(Life(+3), this, 
		PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CManalithCard::CManalithCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Manalith"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRustedSentinelCard::CRustedSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rusted Sentinel"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4") , Power(3), Life(4))
{
	SetIntoPlayTapped();
}

//____________________________________________________________________________
//
CChasmDrakeCard::CChasmDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chasm Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("4") BLUE_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhantasmalDragonCard::CPhantasmalDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phantasmal Dragon"), CardType::Creature, CREATURE_TYPE2(Dragon, Illusion), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, 
							&CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMasterThiefCard::CMasterThiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Master Thief"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_CardFilter(new ControlledByCardComparer((CCard*)this))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CMasterThiefCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay,
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
	
	cpAbility->GetCardModifiers().Add(new CGainControlModifier(GetGame(), (CCard*)this));

	m_pStealAbility = cpAbility.GetPointer();
	AddAbility(m_pStealAbility);
}

void CMasterThiefCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield || pFromZone == pToZone)
		return;

	// Remove abilities from stack
	CStack& stack = GetGame()->GetStack();
	for (int i = stack.GetStackSize() -1; i >= 0; --i)
		if (stack.GetStackAction(i).GetPointer()->GetAbility() == m_pStealAbility)
			stack.RemoveActionAt(i);

	// Return stolen cards
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pZone, cards);
	}
	if (cards.GetSize() == 0) return;

	CGainControlModifier modifier = CGainControlModifier(GetGame(), (CCard*)this, true);
	modifier.ApplyTo(cards.GetAt(0));
}

//____________________________________________________________________________
//
CMerfolkMesmeristCard::CMerfolkMesmeristCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merfolk Mesmerist"), CardType::Creature, CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))

{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("") BLUE_MANA_TEXT, 2));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CSkywinderDrakeCard::CSkywinderDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Skywinder Drake"), CardType::Creature, CREATURE_TYPE(Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CVisionsOfBeyondCard::CVisionsOfBeyondCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Visions of Beyond"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT, 1));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVisionsOfBeyondCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CVisionsOfBeyondCard::BeforeResolution(CAbilityAction* pAction) const
{
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Graveyard)->GetSize() >= 20)
		{
			ContextValue Context(pAction->GetValue());
			Context.nValue1 = 3;
			pAction->SetValue(Context);
			break;
		}

	return true;
}

//_________________________________________________________________________________________________
//
CJacesArchivistCard::CJacesArchivistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jace's Archivist"), CardType::Creature, CREATURE_TYPE2(Vedalken, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CJacesArchivistCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			BLUE_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	cpAbility->SetAbilityName(_T("Each player discards his or her hand, then draws cards equal to the greatest number of cards a player discarded this way. Activate"));
	cpAbility->SetAbilityText(_T("Each player discards his or her hand, then draws cards equal to the greatest number of cards a player discarded this way. Activate"));


	AddAbility(cpAbility.GetPointer());	
}

void CJacesArchivistCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* pPlayer;
	int nCards = 0;

	CZoneCardModifier pDiscardModifier = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard, GetController())));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		nCards = std::max(nCards, pPlayer->GetZoneById(ZoneId::Hand)->GetSize());
		pDiscardModifier.ApplyTo(pPlayer);
	}
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		CDrawCardModifier pDrawModifier = CDrawCardModifier(GetGame(),  MinimumValue(nCards), MaximumValue(nCards));
		pDrawModifier.ApplyTo(pPlayer);

	}
}

//____________________________________________________________________________
//
CGoblinFireslingerCard::CGoblinFireslingerCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Goblin Fireslinger"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("") RED_MANA_TEXT, Power(1), Life(1),
		_T(""),
		FALSE_CARD_COMPARER,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CFrostBreathCard::CFrostBreathCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Frost Breath"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			TRUE, FALSE,	// Tap, Untap
			new CardTypeComparer(CardType::Creature, false)));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		cpSpell->GetTargeting()->SetSubjectCount(0, 2);

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::NoUntapInNextContUntap);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier);

	AddSpell(cpSpell.GetPointer());
}


//____________________________________________________________________________
//
CDarkFavorCard::CDarkFavorCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dark Favor"), nID,
		_T("1") BLACK_MANA_TEXT,
		Power(+3), Life(+1))
{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDevouringSwarmCard::CDevouringSwarmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Devouring Swarm"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+1), Life(+1)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDriftingShadeCard::CDriftingShadeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Drifting Shade"), CardType::Creature, CREATURE_TYPE(Shade), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COnyxMageCard::COnyxMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Onyx Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRuneScarredDemonCard::CRuneScarredDemonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Rune-Scarred Demon"), CardType::Creature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	//cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetRevealCardsToOthers(false);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSorinsThirstCard::CSorinsThirstCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Sorin's Thirst"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT BLACK_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CSorinsVengeanceCard::CSorinsVengeanceCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Sorin's Vengeance"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-10),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+10), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CTasteOfBloodCard::CTasteOfBloodCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Taste of Blood"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));
}

//____________________________________________________________________________
//
CWringFleshCard::CWringFleshCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Wring Flesh"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(-3), Life(-1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CBloodOgreCard::CBloodOgreCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Blood Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBloodOgreCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
}

void CBloodOgreCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CBonebreakerGiantCard::CBonebreakerGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bonebreaker Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CCrimsonMageCard::CCrimsonMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crimson Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormbloodBerserkerCard::CStormbloodBerserkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stormblood Berserker"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CStormbloodBerserkerCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddCantBeBlockedByOne(FALSE);
}

void CStormbloodBerserkerCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +2, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CTectonicRiftCard::CTectonicRiftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tectonic Rift"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Falter Effect"), 2916, 1, FALSE, ZoneId::_Effects));

	AddSpell(cpSpell.GetPointer());
}
	
//____________________________________________________________________________
//
CWallOfTorchesCard::CWallOfTorchesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Torches"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT, Power(4), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWarstormSurgeCard::CWarstormSurgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Warstorm Surge"), CardType::GlobalEnchantment, nID,
		_T("5") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWarstormSurgeCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWarstormSurgeCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CWarstormSurgeCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_LifeModifier.SetSourceCard(pCard);
	return true;
}

bool CWarstormSurgeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	if (!triggerContext.m_LifeModifier.GetSourceCard()->GetCardType().IsCreature())
		return false;

	const CCreatureCard* pCreature = dynamic_cast<const CCreatureCard*>(triggerContext.m_LifeModifier.GetSourceCard());
	if (!pCreature) return false;

	int nDamage = GET_INTEGER(pCreature->GetLastKnownPower());
	
	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nDamage));
	pAction->SetTriggerContext(triggerContext);

	return nDamage > 0;
}

//____________________________________________________________________________
//
CCarnageWurmCard::CCarnageWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carnage Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("6") GREEN_MANA_TEXT, Power(6), Life(6))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CCarnageWurmCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);
}

void CCarnageWurmCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +3, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CGarruksHordeCard::CGarruksHordeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Garruk's Horde"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGarruksHordeCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::TopCardRevealed));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::PlayCardsFromLibraryTop,
			(int)CCardFilter::GetFilter(_T("non-lands creatures"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

void CGarruksHordeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !GetGame()->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			GetController()->GetPlayerName(), GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			GetController()->GetPlayerName(),
			GetController()->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(GetController()->GetZoneById(ZoneId::Library)->GetTopCard());
	}
}

//____________________________________________________________________________
//
CGladecoverScoutCard::CGladecoverScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gladecover Scout"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddHexproof(FALSE);
}

//____________________________________________________________________________
//
CJadeMageCard::CJadeMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jade Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") GREEN_MANA_TEXT , Power(2), Life(1))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") GREEN_MANA_TEXT,
			_T("Saproling K"), 62002,
			1));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLurkingCrocodileCard::CLurkingCrocodileCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Lurking Crocodile"), CardType::Creature, CREATURE_TYPE(Crocodile), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2),
		CreatureKeyword::Islandwalk)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CLurkingCrocodileCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);
}

void CLurkingCrocodileCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +1, true);
		modifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CTitanicGrowthCard::CTitanicGrowthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Titanic Growth"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") GREEN_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CTrollhideCard::CTrollhideCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Trollhide"), nID, 
		_T("2") GREEN_MANA_TEXT,
		Power(+2), Life(+2))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CTrollhideCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CTrollhideCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CRegenerationAbility> cpAbility(
		::CreateObject<CRegenerationAbility>(this,
			_T("1") GREEN_MANA_TEXT,
			(CCreatureCard*)pCard));
	ATLASSERT(cpAbility);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStingerflingSpiderCard::CStingerflingSpiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stingerfling Spider"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("4") GREEN_MANA_TEXT , Power(2), Life(5))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
									 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

			counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

			cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
			cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
			cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
			cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
			cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
			cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrumblingColossusCard::CCrumblingColossusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crumbling Colossus"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("5"), Power(7), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCrumblingColossusCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CCrumblingColossusCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Sacrifice Effect"), 61106, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}
//____________________________________________________________________________
//
CGarrukPrimalHunterCard::CGarrukPrimalHunterCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Garruk, Primal Hunter"), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, 
		PlaneswalkerType::Garruk, 3)
{
	{
		counted_ptr<CActivatedAbility<CTokenProductionBySurveySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionBySurveySpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				FALSE, FALSE,
				_T("Wurm H"), 2922, 1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Beast L"), 2897,
				1));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""),
				0));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -3);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGarrukPrimalHunterCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGarrukPrimalHunterCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	if (pInplay->GetSize() > 0)
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{
				int nCost = GET_INTEGER(((CCreatureCard*)pCard)->GetPower());
				if (nCost > nMaxCost)
				{
					nMaxCost = nCost;
				}
			}
		}

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nMaxCost;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CSwiftfootBootsCard::CSwiftfootBootsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Swiftfoot Boots"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("1")));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCreatureModifier(pModifier);

	CCardKeywordModifier* pModifier2 = new CCardKeywordModifier;
	pModifier2->GetModifier().SetToAdd(CardKeyword::Hexproof);
	
	pModifier2->GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->AddCardModifier(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLordOfTheUnrealCard::CLordOfTheUnrealCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lord of the Unreal"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Illusion), false));
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//

CBelltowerSphinxCard::CBelltowerSphinxCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Belltower Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(5))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetReorder(true, ZoneId::Graveyard);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBelltowerSphinxCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Graveyard));

	m_pTriggeredAbility = cpAbility.GetPointer();

	AddAbility(m_pTriggeredAbility);
}

bool CBelltowerSphinxCard::SetTriggerContext(CTriggeredRevealLibraryAbility::TriggerContextType& triggerContext,
											  CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	m_pTriggeredAbility->SetRevealCount(GET_INTEGER(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CChandrasPhoenixCard::CChandrasPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chandra's Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery | CardType::Planeswalker, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

	GetCreatureKeyword()->AddHaste(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(&m_CardFilter);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChandrasPhoenixCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CChandrasPhoenixCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CChandrasPhoenixCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pFromCard, CPlayer* pToPlayer, Damage damage) const
{	
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CChandrasPhoenixCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CAngelicDestinyCard::CAngelicDestinyCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Angelic Destiny"), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(+4), Life(+4),
		CreatureKeyword::Flying | CreatureKeyword::FirstStrike)
{
	m_pChgPwrTghAttrEnchant->AddCreatureModifier(new CCreatureTypeModifier(SingleCreatureType::Angel));

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArachnusWebCard::CArachnusWebCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Arachnus Web"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock)
	, m_CardFilter(_T("enchanted by this"), _T("enchanted by this"), new EnchantedByComparer(this))
{
	CCantActivateAbilitiesModifier* pModifier = new CCantActivateAbilitiesModifier(GetGame(), &m_CardFilter);
	m_pChgPwrTghAttrEnchant->GetCreatureKeywordMod().LinkCardModifier(pModifier);
	m_pChgPwrTghAttrEnchant->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArachnusWebCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CArachnusWebCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArachnusWebCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											  CNode* pToNode) const
{
	CCreatureCard* pCreature = (CCreatureCard*)m_pChgPwrTghAttrEnchant->GetEnchantedOnCard();
	return (GET_INTEGER(pCreature->GetPower()) >= 4);
}

bool CArachnusWebCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCreatureCard* pCreature = (CCreatureCard*)m_pChgPwrTghAttrEnchant->GetEnchantedOnCard();
	return (GET_INTEGER(pCreature->GetPower()) >= 4);
}

//____________________________________________________________________________
//
CArachnusSpinnerCard::CArachnusSpinnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arachnus Spinner"), CardType::Creature, CREATURE_TYPE(Spider), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(7))
	, m_CardFilter1(_T("a Spider"), _T("Spiders"), new CreatureTypeComparer(CREATURE_TYPE(Spider), false))
	, m_CardFilter2(_T("a card named Arachnus Web"), _T("cards named Arachnus Web"), new CardNameComparer(_T("Arachnus Web")))
{
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T(""),
				new AnyCreatureComparer, false));

		cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter1);
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetAbilityText(_T("Search. Activate"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArachnusSpinnerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CArachnusSpinnerCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetAssociatedCard()->GetZoneId() != ZoneId::Battlefield || !pAction->GetAssociatedCard()->GetCardType().IsCreature()) return false;
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetAssociatedCard());
	if (!pCreature) return false;

	CCountedCardContainer SelectedCards;
	CPlayerSearchModifier* pModifier = new CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library | ZoneId::Graveyard,
		&m_CardFilter2,
		ZoneId::Battlefield, false,
		CardPlacement::Top, false, false, false,
		&SelectedCards);
	pModifier->ApplyTo(pAction->GetController());

	if (!SelectedCards.GetSize()) return false;
	CCard* enchCard = SelectedCards.GetAt(0);

	for (int i = 0; i < enchCard->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(enchCard->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(pCreature, GetController(), enchCard->GetSpells().GetAt(i)->GetActionValue());
	}

	return true;
}

//____________________________________________________________________________
//
CTimelyReinforcementsCard::CTimelyReinforcementsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Timely Reinforcements"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTimelyReinforcementsCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTimelyReinforcementsCard::BeforeResolution(CAbilityAction* pAction) const
{
	bool bFound;

	bFound = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (GetGame()->GetPlayer(ip)->GetLife() > pAction->GetController()->GetLife())
		{
			bFound = true;
			break;
		}
	if (bFound)
	{
		CLifeModifier* pModifier = new CLifeModifier(Life(6), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier->ApplyTo(pAction->GetController());
	}

	bFound = false;
	int nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > nCreatures)
		{
			bFound = true;
			break;
		}
	if (bFound)
	{
		CTokenCreationModifier* pModifier= new CTokenCreationModifier(GetGame(), _T("Soldier K"), 2983, 3);
		pModifier->ApplyTo(pAction->GetController());
	}

	return true;
}

//____________________________________________________________________________
//
CGrandAbolisherCard::CGrandAbolisherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Grand Abolisher"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));
	
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CGrandAbolisherCard::SetTriggerContext1));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, true,
			(int)CCardFilter::GetFilter(_T("artifacts, creatures or enchantments")));

		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CGrandAbolisherCard::SetTriggerContext2));

		m_pTriggeredAbility2 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility2);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, true,
			(int)CCardFilter::GetFilter(_T("artifacts, creatures or enchantments")));
	
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells,
			(int)CCardFilter::GetFilter(_T("cards")));
	
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGrandAbolisherCard::SetTriggerContext1(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (m_pGame->GetActivePlayer() == GetController())
		m_pTriggeredAbility1->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	return true;
}

bool CGrandAbolisherCard::SetTriggerContext2(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
												 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (m_pGame->GetActivePlayer() == GetController())
		m_pTriggeredAbility2->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	return true;
}

//____________________________________________________________________________
//
CCrownOfEmpiresCard::CCrownOfEmpiresCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crown of Empires"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_ScepterCardFilter(new CardNameComparer(_T("Scepter of Empires")))
	, m_ThroneCardFilter(new CardNameComparer(_T("Throne of Empires")))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CCrownOfEmpiresCard::OnResolutionCompleted))
{
	m_ScepterCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
	m_ThroneCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("3"),
			new AnyCreatureComparer,
			false));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	cpAbility->SetAbilityText(_T("Tap target creature. Activates"));

	AddAbility(cpAbility.GetPointer());
}

void CCrownOfEmpiresCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	if (m_ScepterCardFilter.CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0 ||
		m_ThroneCardFilter.CountIncluded(pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
	{
		CCardOrientationModifier modifier = CCardOrientationModifier(true);
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
	}
	else
	{
		CGainControlModifier modifier = CGainControlModifier(GetGame(), this);
		modifier.ApplyTo(pAbilityAction->GetAssociatedCard());
	}
}

//____________________________________________________________________________
//
CScepterOfEmpiresCard::CScepterOfEmpiresCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scepter of Empires"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_CrownCardFilter(new CardNameComparer(_T("Crown of Empires")))
	, m_ThroneCardFilter(new CardNameComparer(_T("Throne of Empires")))
{
	m_CrownCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
	m_ThroneCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER,
			true,
			Life(-1),
			PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScepterOfEmpiresCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CScepterOfEmpiresCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_CrownCardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0 ||
		m_ThroneCardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
			return true;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);
	ContextValue context(pAction->GetValue());

	context.nValue1 = -3;
	const CPlayer* pPlayer = pTargetAction->GetTargetGroup().GetFirstPlayerSubject();
	pTargetAction->GetTargetGroup().SetValue(pPlayer, context);

	return true;
}

//____________________________________________________________________________
//
CThroneOfEmpiresCard::CThroneOfEmpiresCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Throne of Empires"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_CrownCardFilter(new CardNameComparer(_T("Crown of Empires")))
	, m_ScepterCardFilter(new CardNameComparer(_T("Scepter of Empires")))
{
	m_CrownCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));
	m_ScepterCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));

	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("1"),
			_T("Soldier K"), 2983, 1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CThroneOfEmpiresCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CThroneOfEmpiresCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (m_CrownCardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0 ||
		m_ScepterCardFilter.CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
			return true;

	ContextValue context(pAction->GetValue());
	context.nValue1 = 5;
	pAction->SetValue(context);

	return true;
}

//____________________________________________________________________________
//
CPrimordialHydraCard::CPrimordialHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primordial Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CPrimordialHydraCard::OnZoneChanged))
	, m_cpBListener(VAR_NAME(m_cpBListener), CounterMovedEventSource::Listener::EventCallback(this, &CPrimordialHydraCard::OnCounterMoved))
	, m_TrampleModifier(CreatureKeyword::Trample, true, false)
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCounterMovedEventSource()->AddListener(m_cpBListener.GetPointer());
	GetSpells().GetAt(0)->GetCost().SetExtraManaCost();

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPrimordialHydraCard::BeforeResolution));
		
	AddAbility(cpAbility.GetPointer());
}

void CPrimordialHydraCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast)
	{
		int nCount = GetLastCastingExtraValue();

		CCardCounterModifier modifier = CCardCounterModifier(_T("+1/+1"), nCount);
		modifier.ApplyTo(this);
	}
}

void CPrimordialHydraCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (old < 10 && n_value >= 10)
		m_TrampleModifier.ApplyTo(this);
	else if (old >= 10 && n_value < 10)
		m_TrampleModifier.RemoveFrom(this);
}

bool CPrimordialHydraCard::BeforeResolution(CAbilityAction* pAction)
{
	if (!(GetCounterContainer()->GetActiveZones() & GetZoneId()).Any()) return false;

	int nCount = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CCardCounterModifier modifier = CCardCounterModifier(_T("+1/+1"), nCount);
	modifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSkinshifterCard::CSkinshifterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skinshifter"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CGenericSpell>>(this,
					GREEN_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CCreatureKeywordModifier(CreatureKeyword::Trample, true, true));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CPowerModifier(Power(+3), false, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CLifeModifier(Life(+3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, false, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Rhino, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Human, false),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Shaman, false),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CSkinshifterCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Become a 4/4 Rhino and gain trample until end of turn. Activates"));
		m_pAbilityR = cpAbility.GetPointer();
		AddAbility(m_pAbilityR);
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CGenericSpell>>(this,
					GREEN_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CCreatureKeywordModifier(CreatureKeyword::Flying, true, true));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CPowerModifier(Power(+1), false, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, false, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Bird, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Human, false),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Shaman, false),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CSkinshifterCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Become a 2/2 Bird and gain flying until end of turn. Activates"));
		m_pAbilityB = cpAbility.GetPointer();
		AddAbility(m_pAbilityB);
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
				::CreateObject<CActivatedAbility<CGenericSpell>>(this,
					GREEN_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CPowerModifier(Power(-1), false, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CLifeModifier(Life(+7), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, false, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Plant, true),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Human, false),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));
		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CScheduledCreatureModifier(GetGame(),
			new CCreatureTypeModifier(SingleCreatureType::Shaman, false),
			TurnNumberDelta(-1), NodeId::CleanupStep2, true, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater));

		counted_ptr<CPlayableIfTrait> cpTrait(
				::CreateObject<CPlayableIfTrait>(
					m_pUntapAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CSkinshifterCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->SetAbilityText(_T("Become a 0/8 Plant until end of turn. Activates"));
		m_pAbilityP = cpAbility.GetPointer();
		AddAbility(m_pAbilityP);
	}
}

BOOL CSkinshifterCard::CanPlay(BOOL bIncludeTricks)
{
	return (m_pAbilityR->GetTurnUsageCount() + m_pAbilityB->GetTurnUsageCount() + m_pAbilityP->GetTurnUsageCount() == 0) ? TRUE : FALSE;
}

//____________________________________________________________________________
//
CScrambleverseCard::CScrambleverseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scrambleverse"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new TrueCardComparer);
	m_CardFilter.AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("6") RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CScrambleverseCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CScrambleverseCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer cards;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pFromZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pFromZone, cards);
	}

	if (!cards.GetSize()) 
		return true;

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		CTransferControlModifier* pModifier1 = new CTransferControlModifier(GetGame(), (CCard*)cards.GetAt(i), (CCard*)cards.GetAt(i));
		if (GetController()->GetRand() % 2)
			pModifier1->ApplyTo(GetController());
		else
			pModifier1->ApplyTo(GetGame()->GetNextPlayer(GetController()));
	}

	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(false)));

	pModifier2.ApplyTo(GetController());
	pModifier2.ApplyTo(GetGame()->GetNextPlayer(GetController()));

	return true;
}

//____________________________________________________________________________
//
CSphinxOfUthuunCard::CSphinxOfUthuunCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Sphinx of Uthuun"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CSphinxOfUthuunCard::OnResolutionCompleted))
, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSphinxOfUthuunCard::OnTargetZoneSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());	

	AddAbility(cpAbility.GetPointer());
}

void CSphinxOfUthuunCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	m_SelectedCards1.RemoveAll();
	m_SelectedCards2.RemoveAll();

	if (bResult)
	{
		CPlayer* pTarget =  pAbilityAction->GetController();
		CPlayer* pOpponent =  m_pGame->GetNextPlayer(pTarget);
		
		CZone* pLibrary = pTarget->GetZoneById(ZoneId::Library);	
		int iCardsToRevealCnt = 5;
		
		//If you have fewer than five cards in your library, reveal your entire library and opponent separates it
		if (pLibrary->GetSize() < 5) 
		iCardsToRevealCnt = pLibrary->GetSize();

		CCountedCardContainer SelectFrom;
		//CCardFilter::GetFilter(_T("cards"))->GetIncluded(*Battle, SelectFrom);

		for (int i = pLibrary->GetSize() - 1; i >= 0 && (pLibrary->GetSize() - i) <= iCardsToRevealCnt; --i)
			SelectFrom.AddCard(pLibrary->GetAt(i), CardPlacement::Top);

		if(SelectFrom.GetSize())

			if (m_pGame->IsThinking() || pOpponent->IsComputer())
			{
				SelectFrom.Sort(TRUE);

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (m_SelectedCards1.GetSize()>m_SelectedCards2.GetSize())
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
					else
						m_SelectedCards1.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				if (!pTarget->IsComputer() && !m_pGame->IsThinking())
				{
						for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				}

				ProcessPiling(pTarget, pAbilityAction->GetController());
			}
			else
			{
				SelectCardsData selectCardData;

				selectCardData.pCardContainer = &SelectFrom;
				selectCardData.nMinSelect = MinimumValue(0);
				selectCardData.nMaxSelect = MaximumValue(SelectFrom.GetSize());
				selectCardData.pCardFilter = CCardFilter::GetFilter(_T("cards"));

				pOpponent->GetInterface()->SelectCard(&selectCardData);
				m_SelectedCards1 = selectCardData.SelectedCards;

				for (int i = 0; i < SelectFrom.GetSize(); ++i)
				{
					if (!m_SelectedCards1.HasCard(SelectFrom.GetAt(i)))
						m_SelectedCards2.AddCard(SelectFrom.GetAt(i), CardPlacement::Top);
				}

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 1"), m_SelectedCards1.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					CString strMessage;
					strMessage.Format(_T("%s is in pile 2"), m_SelectedCards2.GetAt(i)->GetCardName());

					m_pGame->Message(
						strMessage,
						pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				ProcessPiling(pTarget, pAbilityAction->GetController());
			}

	}
}

void CSphinxOfUthuunCard::ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2)
{	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Select pile 1"));

		entries.push_back(selectionEntry);
	}

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Select pile 2"));

		entries.push_back(selectionEntry);
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL,  pPlayer1);
}

void CSphinxOfUthuunCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards1.GetAt(i));
				}
			
				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier2.ApplyTo(m_SelectedCards2.GetAt(i));
				}

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
				CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);

				for (int i = 0; i < m_SelectedCards2.GetSize(); ++i)
				{
					pModifier1.ApplyTo(m_SelectedCards2.GetAt(i));
				}
				
				for (int i = 0; i < m_SelectedCards1.GetSize(); ++i)
				{
					pModifier2.ApplyTo(m_SelectedCards1.GetAt(i));
				}

				return;
			}
			return;
		}
}

//____________________________________________________________________________
//
CDruidicSatchelCard::CDruidicSatchelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Druidic Satchel"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CDruidicSatchelCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("2"),
			1));

	cpAbility->SetRevealCardsToOthers(TRUE,FALSE);
	cpAbility->AddTapCost();
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDruidicSatchelCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CPlayer* pController = pAbilityAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);
	if (pLibrary->GetSize() == 0) return;

	if (pLibrary->GetTopCard()->GetCardType().IsCreature())
	{
		CTokenCreationModifier* pModifier1 = new CTokenCreationModifier(GetGame(), _T("Saproling K"), 62002, 1);
		pModifier1->ApplyTo(pController);
	}
	if (pLibrary->GetTopCard()->GetCardType().IsLand())
	{
		CZoneModifier* pModifier2 = new CZoneModifier(GetGame(), ZoneId::Library, 1 , CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			
		pModifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select 1 card
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Battlefield, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier2->ApplyTo(pController);
	}
	if (!(pLibrary->GetTopCard()->GetCardType().IsCreature() || pLibrary->GetTopCard()->GetCardType().IsLand()))
	{
		CLifeModifier* pModifier3 = new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier3->ApplyTo(pController);
	}
}
//____________________________________________________________________________
//
CGoblinBangchuckersCard::CGoblinBangchuckersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Bangchuckers"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CGoblinBangchuckersCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, true));

	cpAbility->AddAbilityTag(AbilityTag(AbilityTag::DamageSource));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGoblinBangchuckersCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CGoblinBangchuckersCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pTargetPlayer = pAction->GetAssociatedPlayer();
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
		CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		pModifier->ApplyTo(this);
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
		CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		if (pTargetCreature)
			pModifier->ApplyTo(pTargetCreature);
		else
			pModifier->ApplyTo(pTargetPlayer);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo((CCard*)this);
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
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTargetCreature, (DWORD)pTargetPlayer);
	}
	return false;
}

void CGoblinBangchuckersCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				if (dwContext1)
					pModifier->ApplyTo((CCreatureCard*)dwContext1);
				else
					pModifier->ApplyTo((CPlayer*)dwContext2);
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
				CLifeModifier* pModifier = new CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CHideousVisageCard::CHideousVisageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hideous Visage"), CardType::Sorcery, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Intimidate));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCircleOfFlameCard::CCircleOfFlameCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Circle of Flame"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCircleOfFlameCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CCircleOfFlameCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCreatureCard* pCreature, AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return true;
}

//____________________________________________________________________________
//
CChandraTheFirebrandCard::CChandraTheFirebrandCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Chandra, the Firebrand"), nID,
		_T("3") RED_MANA_TEXT, 
		PlaneswalkerType::Chandra, 3)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Chandra, the Firebrand Effect"), 61018, 1, FALSE, ZoneId::_Effects));

		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-6), PreventableType::Preventable));

		cpAbility->GetTargeting()->SetSubjectCount(0, 6);
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -6);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAdaptiveAutomatonCard::CAdaptiveAutomatonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Adaptive Automaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2))
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CAdaptiveAutomatonCard::OnSelectionDone))
{
}

counted_ptr<CAbility> CAdaptiveAutomatonCard::CreateAdditionAbility(CCard* pCard)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	// Not this card
			Power(+1), Life(+1)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(SelectedType, false));
	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->SetAffectControllerCardsOnly();
		
	cpAbility->SetAbilityName(_T("Adaptive Automaton boost"));	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

void CAdaptiveAutomatonCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;

		if (m_pGame->IsThinking() || GetController()->IsComputer())
		{
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				BOOL bAdd = FALSE;

				CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
						for (int k = 0; k < pInplay->GetSize(); ++k)
						{
							if ((pInplay->GetAt(k)->GetCardType() & CardType::Creature).Any() &&
								(((CCreatureCard*)pInplay->GetAt(k))->GetCreatureType().HasType(creatureType)) || pInplay->GetAt(k)->GetCardKeyword()->HasChangeling())
							{
								bAdd = TRUE;
								break;
							}
						}
			
				if (bAdd == TRUE)
				{
					SelectionEntry entry;
					entry.dwContext = creatureType;
					entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName());		
					entries.push_back(entry);
				}
			}

		}
		else
			for (int i = 1; i < SingleCreatureType::_SingleTypeCount; ++i)
			{
				SingleCreatureType::Enum creatureType = (SingleCreatureType::Enum)i;

				SelectionEntry entry;
				entry.dwContext = creatureType;
				entry.strText.Format(_T("select %s for %s"),SingleCreatureType(creatureType).ToString(), GetCardName(TRUE));		
				entries.push_back(entry);
			}

		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if	(bBattlefield && (pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		CCreatureTypeModifier pModifier1 = CCreatureTypeModifier(SelectedType);
		pModifier1.RemoveFrom(this);

		CCardAbilityModifier pModifier2 = CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CAdaptiveAutomatonCard::CreateAdditionAbility));

		for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
		{
			CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
			if (!pEnchantSpell) 
				continue;
			{
				pEnchantSpell->EndEnchantment();
			}
		}

		pModifier2.RemoveFrom(this);
	}
}

void CAdaptiveAutomatonCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;

			CCreatureTypeModifier pModifier1 = CCreatureTypeModifier(SelectedType);
			pModifier1.ApplyTo(this);

			CCardAbilityModifier pModifier2 = CCardAbilityModifier(
				CCardAbilityModifier::CreateAbilityCallback(this,
				&CAdaptiveAutomatonCard::CreateAdditionAbility));

			pModifier2.ApplyTo(this);

			for (int i = 0; i < this->GetAbilities().GetSize(); ++i)
			{
				CPwrTghAttrEnchantment* pEnchantSpell = dynamic_cast<CPwrTghAttrEnchantment*>(GetAbilities().GetAt(i).GetPointer());
				if (!pEnchantSpell) 
					continue;

				pEnchantSpell->StartEnchantment();
			}

			break;
		}
}

//____________________________________________________________________________
//
CDoublingChantCard::CDoublingChantCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Doubling Chant"), CardType::Sorcery, nID)
	, m_CreatureSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDoublingChantCard::OnCreatureSelected))
{
	counted_ptr<CGenericSpell> cpSpell(::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
		_T("5") GREEN_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDoublingChantCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CDoublingChantCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	pSelectedCreatures.RemoveAll();

	for (int i = 0; i < pBattlefield->GetSize();++i)
		if (pBattlefield->GetAt(i)->GetCardType().IsCreature())
			pSelectedCreatures.AddCard(pBattlefield->GetAt(i), CardPlacement::Top);

	if (pSelectedCreatures.GetSize() > 0)
		SelectCreature(pController);

	return true;
}

void CDoublingChantCard::SelectCreature(CPlayer* pController)
{	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop searching"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pSelectedCreatures.GetSize(); ++i)
	{
		CCard* pCard = pSelectedCreatures.GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Search based on %s"),
			pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_CreatureSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
}

void CDoublingChantCard::OnCreatureSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s stops searching"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				if (pSelectedCards.GetSize() > 0)
				{
					CCardFilter m_CardFilter;
					m_CardFilter.SetComparer(new ContainedinComparer(&pSelectedCards));

					CMoveCardModifier* pModifier1 = new CMoveCardModifier(ZoneId::Library, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
					CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Library, &m_CardFilter,
						std::auto_ptr<CCardModifier>(pModifier1));

					pModifier2.ApplyTo(pSelectionPlayer);
				}

				pSelectionPlayer->GetZoneById(ZoneId::Library)->Shuffle();
				
				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				pSelectedCreatures.RemoveCard(pCard);

				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new AnyCreatureComparer);
				m_CardFilter.AddComparer(new CardNameComparer(pCard->GetPrintedCardName()));
				m_CardFilter.AddNegateComparer(new ContainedinComparer(&pSelectedCards));

				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer, MinimumValue(0), MaximumValue(1), pSelectionPlayer,
																 ZoneId::Library, &m_CardFilter, ZoneId::Library, TRUE, CardPlacement::Top,
																 FALSE, FALSE, FALSE, &pSelectedCards, FALSE);
				pModifier.ApplyTo(pSelectionPlayer);

				SelectCreature(pSelectionPlayer);
				return;
			}
		}
}

//____________________________________________________________________________
//
CSundialOfTheInfiniteCard::CSundialOfTheInfiniteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sundial of the Infinite"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSundialOfTheInfiniteCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1")));

	cpAbility->AddTapCost();
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CSundialOfTheInfiniteCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CStack& stack = m_pGame->GetStack();
	
	stack.ClearStack();
	
	CCountedCardContainer creatures;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*pZone, creatures);
	}


	for (int ic = 0; ic < creatures.GetSize(); ++ic)
		((CCreatureCard*)creatures.GetAt(ic))->RemoveFromCombat(TRUE);

	m_pGame->GetCurrentNode()->GetGraph()->SetNode(m_pGame->GetCurrentNode()->GetGraph(), m_pGame->GetCurrentNode()->GetGraph(), NodeId::CleanupStep1);

}

//____________________________________________________________________________
//
CMindUnboundCard::CMindUnboundCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mind Unbound"), CardType::GlobalEnchantment, nID, 
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_nCounterCount(0)
	, m_cpAListener(VAR_NAME(m_cpAListener), 
			CounterMovedEventSource::Listener::EventCallback(this, &CMindUnboundCard::OnCounterMoved))
{
	this->GetCounterMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMindUnboundCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CMindUnboundCard::BeforeResolution(CAbilityAction* pAction)
{
	if (IsInplay())
	{
		CCardCounterModifier pModifier1 = CCardCounterModifier(LORE_COUNTER, +1);
		pModifier1.ApplyTo(this);
		m_nCounterCount = GetCounterContainer()->GetCounter(LORE_COUNTER)->GetCount();
	}

	if (m_nCounterCount > 0)
	{
		CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(m_nCounterCount), MaximumValue(m_nCounterCount));
		pModifier2.ApplyTo(pAction->GetController());
	}

	return true;
}

void CMindUnboundCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
		m_nCounterCount = 0;

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CMindUnboundCard::OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if ((pFromCard != this) || ((CString)name != LORE_COUNTER)) return;
	m_nCounterCount = n_value;
}

//____________________________________________________________________________
//
CBloodlordOfVaasgothCard::CBloodlordOfVaasgothCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bloodlord of Vaasgoth"), CardType::Creature, CREATURE_TYPE2(Vampire, Warrior), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CBloodlordOfVaasgothCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBloodlordOfVaasgothCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBloodlordOfVaasgothCard::BeforeResolution));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Vampire), false));
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

void CBloodlordOfVaasgothCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	bool bBloodthirst = false;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if ((GetGame()->GetPlayer(ip) != GetController()) && (GetGame()->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
		{
			bBloodthirst = true;
			break;
		}

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && bBloodthirst)
	{
		CCardCounterModifier modifier(_T("+1/+1"), +3, true);
		modifier.ApplyTo(this);
	}
}

bool CBloodlordOfVaasgothCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.nValue1 = (DWORD)pCard;

	return true;
}

bool CBloodlordOfVaasgothCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->GetZoneId() == ZoneId::Stack)
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Bloodlord of Vaasgoth Effect"), 61062, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
