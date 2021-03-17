#include "stdafx.h"


#define new DEBUG_NEW
//____________________________________________________________________________
//
CPlayer::CPlayer(CGame* pGame)
	: m_pGame(pGame)
	, m_cpDamageDealEventSource(::CreateObject<DamageDealEventSource>(VAR_NAME(m_cpDamageDealEventSource)))
	, m_cpBeforeDamageDealtEventSource(::CreateObject<BeforeDamageDealtEventSource>(VAR_NAME(m_cpBeforeDamageDealtEventSource)))
	, m_cpCounterMovedEventSource(::CreateObject<CounterMovedEventSource>(VAR_NAME(m_cpCounterMovedEventSource)))
	, m_cpSpecialTriggerEventSource(::CreateObject<SpecialTriggerEventSource>(VAR_NAME(m_cpSpecialTriggerEventSource)))
	, m_cpCardCycledEventSource(::CreateObject<CardCycledEventSource>(VAR_NAME(m_cpCardCycledEventSource)))
	, m_cpChangeLifeEventSource(::CreateObject<ChangeLifeEventSource>(VAR_NAME(m_cpChangeLifeEventSource)))
	, m_cpManaAddEventSource(::CreateObject<ManaAddEventSource>(VAR_NAME(m_cpManaAddEventSource)))
	, m_bLost(FALSE)
	, m_bDrawFailed(FALSE)
	, m_bLostByOtherReasons(FALSE)
	, m_bLostByPoison(FALSE)
	, m_nPoisonCounters(0)
	, m_bStartingPlayer(FALSE)
	, m_nLife(Life(DEFAULT_PLAYER_LIFE))
	, m_nMaxHandSize(DEFAULT_MAX_HAND_SIZE)
	, m_nPlayerTurnNumber(0)
	//, m_nPlayerDrawNumber(0)
	, m_bComputer(FALSE)
	, m_nInPlayBonus(0)
	, m_nInHandBonus(0)
	, m_nMiscBonus(0)
	, m_nTurnUntappedCount(0)
	, m_nTurnUntappedLandsCount(0)
	, m_nTurnUntappedCreaturesCount(0)
	, m_nTurnCastedSpellCount(0)
	, m_apTriggeredMoveContainer(new CTriggeredActionContainer)
	, m_nStartingLife(Life(0))						//life player starts the game at normally 20
	, m_nTurnCombatDamageTaken(Life(0))
	, m_nTurnNoncombatDamageTaken(Life(0))
	, m_nTurnLifeLossTaken(Life(0))
//last turn start-----------------------------------------------	
	, m_nLastTurnCastedSpellCount(0)
	, m_nLifeAtBeginningOfTurn(Life(0))				//life at beginning of turn is life carried from the conclusion of last turn
	, m_nTurnCombatDamageTakenLastTurn(Life(0))
	, m_nTurnNoncombatDamageTakenLastTurn(Life(0))
	, m_nTurnLifeLossTakenLastTurn(Life(0))
//last turn end-------------------------------------------------
	, m_nTurnLifeGain(Life(0))
	, m_nProwl(FALSE)
	, m_DamageRedirectionSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CPlayer::OnDamageRedirectionSelected))
	, m_PlaneswalkerSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CPlayer::OnPlaneswalkerSelected))
	, m_ReplacementSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CPlayer::OnReplacementSelected))
	, m_UntapCardType(pGame, CardType::_All)
	, m_CantUntapCardType(pGame, CardType::Null)
	, m_CanBeAttackedBy(pGame, CCardFilter::GetFilter(_T("creatures")))
	, m_cpNListener(VAR_NAME(m_cpNListener), ChangeNodeEventSource::Listener::EventCallback(this, &CPlayer::OnCurrentNodeChanged))
	, m_bFinishedMulligan(FALSE)
	, m_nTurnDrawCount(0)
	, m_nTurnDiscardCount(0)
	, m_nTurnAttackCount(0)
	, m_bSearchedLibraryThisTurn(FALSE)
	, m_bCreatureCounteredByOpponent(FALSE)
	, m_uSeed(0)
	, m_OwnedCards(ZoneId::_OwnedCards, FALSE, FALSE, FALSE, this)
	, s_hCard()
	, detainedCard()
	, s_hTypes()
	, s_hfromZones()
	, s_htoZones()
	//, b_fTypes()
	, m_archenemy(FALSE)
	, m_planechase(FALSE)
	, m_resolved_scheme(FALSE)
	, m_commander(FALSE)
	, m_phasing(FALSE)
{
#ifdef THINK_HISTORY
	m_nPlayerTurnNumber.SetUseInThinkHistory(false);
	m_nPlayerTurnLandsNumber.SetUseInThinkHistory(false);
	m_nPlayerTurnCreaturesNumber.SetUseInThinkHistory(false);
	m_nTurnUntappedCount.SetUseInThinkHistory(false);
	m_nTurnCastedSpellCount.SetUseInThinkHistory(false);
	//m_nPlayerDrawNumber.SetUseInThinkHistory(false);
#endif

	m_Zones.Add(new CZone(ZoneId::Battlefield,	  TRUE,  TRUE,  TRUE,  this));
	m_Zones.Add(new CZone(ZoneId::_PhasedOut,	  TRUE,  TRUE,  TRUE,  this));
	m_Zones.Add(new CZone(ZoneId::Hand,			  TRUE,  FALSE, FALSE, this));
	m_Zones.Add(new CZone(ZoneId::Graveyard,	  TRUE,  TRUE,  FALSE, this));
	m_Zones.Add(new CZone(ZoneId::Library,		  FALSE, FALSE, FALSE, this));
	m_Zones.Add(new CZone(ZoneId::Stack,		  TRUE,  TRUE,  FALSE, this));
	m_Zones.Add(new CZone(ZoneId::Exile,		  FALSE, FALSE, FALSE, this));  // If visibility changed to true cascade freecast crashes the game, for getting actions visibility is overriden in game.cpp (str 1824, 1911)
	m_Zones.Add(new CZone(ZoneId::_Tokens,		  FALSE, FALSE, FALSE, this));	
	m_Zones.Add(new CZone(ZoneId::_Effects,		  TRUE,  TRUE,  FALSE, this));
	m_Zones.Add(new CZone(ZoneId::_ExileFaceDown, TRUE,  FALSE, FALSE, this));
	m_Zones.Add(new CZone(ZoneId::_Sideboard,	  TRUE,  FALSE, FALSE, this));
	m_Zones.Add(new CZone(ZoneId::_Schemes,		  FALSE, FALSE, FALSE, this));
	m_Zones.Add(new CZone(ZoneId::_Planes,		  FALSE, FALSE, FALSE, this));
}

CPlayer::~CPlayer()
{
	for (int i = 0; i < m_Zones.GetSize(); ++i)
	{
		CZone* pZone = m_Zones.GetAt(i);
		delete pZone;
	}
}

CZone* CPlayer::GetZoneById(ZoneId zoneId) const
{ 
	if (zoneId != ZoneId::_OwnedCards)
		return m_Zones.GetZoneById(zoneId); 

	// Remove all tokens from owned cards

	int nCardCount = m_OwnedCards.GetSize();
	for (int i = nCardCount - 1; i >= 0; --i)
	{
		CCard* pCard = m_OwnedCards.GetAt(i);
		if ((pCard->GetCardType() & CardType::Token).Any())
			m_OwnedCards.RemoveAt(i);
		else
			break; // Put all tokens at the end (top) of the owned zone
	}

	// Add tokens to owned cards

	int nPlayerCount = m_pGame->GetPlayerCount();
	for (int j = 0; j < nPlayerCount; ++j)
	{
		CZone* pBattlefield = m_pGame->GetPlayer(j)->GetZoneById(ZoneId::Battlefield);
		nCardCount = pBattlefield->GetSize();
		for (int i = 0; i < nCardCount; ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if ((pCard->GetCardType() & CardType::Token).Any())
				m_OwnedCards.AddCard(pCard);
		}
	}

	return &m_OwnedCards;
}
/* 
This function calculates and returns devotion to a single color of a player who is casting card 
with devotion mechanic.

Calculate devotion to green 
	int SymDevotionGCnt = GetDevotion(CManaCost::Green);
Calculate devotion to blue and black requires two calls to function
	int SymDevotionUCnt = GetDevotion(CManaCost::Blue);
	int SymDevotionBCnt = GetDevotion(CManaCost::Black);

The devotion mechanic was introduced in Theros. A player’s devotion to [color] is equal to 
the number of mana symbols of that color among the mana costs of permanents that player controls.
Example
	A permanent that costs RRR adds three to your devotion to red. 
Some cards have more than one way to pay the mana cost, eg hybrid, phyrexian mana, etc.
The count obtained from the mana cost with highest number of mana symbols of the devotion 
color is returned.
Example 1 - hybrid mana cost
	Card Jund Hackblade costs B/G R, cost is BR or GR, if GetDevotion(CManaCost::Green) was
	called, this card will contribute 1 to the devotion count for green.  This is the highest
	devotion count for green obtainable from BR or GR.
Example 2 - phyrexian mana	
	Card Birthing Pod costs 3G or 3 + player pays 2 life, if GetDevotion(CManaCost::Green) was
	called, this card will contribute 1 to the devotion count for green.  This is the highest
	devotion count for green obtainable from 3G or 3.
Example 3 - Fifth Dawn Bringers, etc
	Card Bringer of the Black Dawn costs 7BB or you may pay WUBRG as indicated in card's text box.
	Devotion rules state "symbols in the text boxes of permanents you control don’t count toward 
	your devotion to any color" so always the first alternate mana cost must be used NOT the 
	highest mana cost.

Reaper King is supported and covered by Example 1.
Chroma (Eventide) is a early version of Devotion where instead of just number of mana 
symbols of that color in the mana costs of permanents you control, variations exist such as
number of R symbols in sacrificed creature's mana cost, number of G symbols in revealed cards 
from hand mana cost, etc.  These versions of mana cost symbol counting are too diverse and are
not supported in this function.  Since there are only a few cards, duplicate and modify this 
function and include in the card level code.
*/
int CPlayer::GetDevotion(CManaCost::Color DevotionColor)
{	
	CZone* pBattlefield = m_pGame->GetActivePlayer()->GetZoneById(ZoneId::Battlefield);
	int nCardCount		= pBattlefield->GetSize();
	int SymDevotionCur	= 0;						// current devotion symbol total
	int SymDevotionTmp	= 0;
	int SymDevotionCnt	= 0;						// devotion symbol count
	for (int i = 0; i < nCardCount; ++i)
	{
		SymDevotionCur = 0;						
		CCard* pCard = pBattlefield->GetAt(i);  // each card
		if ((pCard->GetPrintedCardName() == _T("Bringer of the Blue Dawn" )) ||  // put exceptions here where devotion must be 
			(pCard->GetPrintedCardName() == _T("Bringer of the Black Dawn")) ||  // calculated using first alternate mana cost
			(pCard->GetPrintedCardName() == _T("Bringer of the Green Dawn")) ||	  
			(pCard->GetPrintedCardName() == _T("Bringer of the Red Dawn"  )) ||
			(pCard->GetPrintedCardName() == _T("Bringer of the White Dawn")))
		{
			/*
				Mana symbols in the text boxes of permanents you control don’t count toward your devotion to any color.
				So in this case use first alternative mana cost to calculate devotion. 
			*/
			SymDevotionCur = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetCost(DevotionColor);  	
		}
		else
		{
			/*
				Supports normal, hybred, phyrexian mana cases - use the mana cost with highest 
				number of mana symbols of the devotion color.
			*/
			for (int j = 0; j < pBattlefield->GetAt(i)->GetSpells().GetSize(); ++j) // go though card's alternate mana costs
			{
				SymDevotionTmp = pCard->GetSpells().GetAt(j)->GetCost().GetOriginalManaCost().GetCost(DevotionColor);
				if (SymDevotionTmp > SymDevotionCur)
					SymDevotionCur = SymDevotionTmp;  	
			}
		}
		SymDevotionCnt = SymDevotionCnt + SymDevotionCur;	
	}
	return SymDevotionCnt;
}

void CPlayer::SetSeed(unsigned uSeed)
{
	ATLASSERT(!m_apRNG.get());	// SetSeed() has already been called

	if (!uSeed)
		uSeed = GetTickCount();

	m_apRNG = std::auto_ptr<CMTRNG>(new CMTRNG(uSeed));
	m_uSeed = uSeed;

	m_pGame->Log(_T("// Player %s, Seed = %u\n"), m_strPlayerName, m_uSeed);
}

unsigned long CPlayer::GetRand() const
{
	ATLASSERT(m_apRNG.get());			// Need to call SetSeed() before here
	ATLASSERT(!m_pGame->IsThinking());	// Illegal to call random number generator during thinking

	return m_apRNG->genrand_int32();
}

CGraph* CPlayer::GetGraph() const
{
	return m_apGraph.get();
}

void CPlayer::SetGraph(CGraph* pGraph)
{
	m_apGraph.reset(pGraph);

	m_apGraph->GetNodeById(NodeId::CleanupStep2)->GetChangeNodeEventSource()->AddListener(m_cpNListener.GetPointer());
}

void CPlayer::SetLife(Life nLife)
{
	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nLife)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nLife)))
	{
		LOG_WARNING(_T("Special number %d not supported for SetLife(). Ignored."), nLife);
		return;
	}

	if (nLife == m_nLife)
		return;
	
	Life nLifeDelta(nLife - m_nLife);

	if (nLifeDelta>Life(0))
	{
		if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife))
			return;

		int nMultiplier = 0;
		
		if (GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::MultiplyLifeGain, nMultiplier, FALSE))
			for (int i = 0; i < nMultiplier; ++i)
				nLifeDelta *= Life(2);

		nLife = m_nLife + nLifeDelta;
		AddLifeGainThisTurn(nLifeDelta);
	}
	else
		AddLifeLossTakenThisTurn(-nLifeDelta);

	Life nPreviousLife = m_nLife;

	m_nLife = nLife;

	m_cpChangeLifeEventSource->FireEvent(this, nPreviousLife, nLife);
}

void CPlayer::ChangeLife(Damage damage, int rep_index)
{
	// Check if damage replacement choosebox is needed---------------------------------------------------------------------------------------------
	// Used index ( to know which alteration is already used )
	// 1 - Furnace of Rath used
	// 2 - Urza Armor Used	
	// 3 - Both used

	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife)) return;

	int n=0;

	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
		damage.m_Preventable = PreventableType::NotPreventable;

	if ((damage.m_DamageType & DamageType::CombatDamage).Any())
		if ((GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllPlayerDamage) || GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventPlayerCombatDamage)) && damage.m_Preventable == PreventableType::Preventable &&
			!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage)) n = n+1;

	if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
		if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllPlayerDamage) && damage.m_Preventable == PreventableType::Preventable &&
			!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage)) n = n+1;

	std::set<const CCardFilter*> cardFilters;
	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Protection, cardFilters) && ((damage.m_DamageType & DamageType::CombatDamage).Any() || (damage.m_DamageType & DamageType::NonCombatDamage).Any())
		&& !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
	{
		if (!cardFilters.size())
			n=n+1; // no card filter, prevent all spells

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(damage.m_pSourceCard))
				n=n+1;
	}

	int nMultiplier = 0;
	if (damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::MultiplyDamage, nMultiplier, FALSE) && damage.m_Preventable != PreventableType::NotPreventable && rep_index != 1 && rep_index != 3) n=n+1;

	if (damage.m_Preventable == PreventableType::Preventable && !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) && rep_index < 2)
	{
		int nPreventedDamage = 0;
		if (GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::PreventDamage, nPreventedDamage, FALSE) &&
			nPreventedDamage)
		if (nPreventedDamage >0) n=n+1;

		if (!m_DamagePrevention.IsEmpty()) n=n+1;
	}

	if (CanRedirectToPlaneswalkers(damage)) n=n+1;

	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::DamageToLifeReplacement) && (damage.m_DamageType & DamageType::NonCombatDamage).Any() && damage.m_Preventable == PreventableType::Preventable)
		n=n+1;

	if (damage.m_pSourceCard->GetPrintedCardName() == "Szadek, Lord of Secrets" && (damage.m_DamageType & DamageType::CombatDamage).Any())
		n=n+1;

	if ((damage.m_DamageType & DamageType::SpellDamage).Any() && GetPlayerEffect().HasPlayerEffect(PlayerEffectType::DamageToTokensReplacement) &&
		(damage.m_DamageType & DamageType::NonCombatDamage).Any())
		n=n+1;

	if ((damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ZombieMill)) && (damage.m_DamageType & DamageType::CombatDamage).Any() &&
		(damage.m_pSourceCard->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)damage.m_pSourceCard)->GetCreatureType().HasType(SingleCreatureType::Zombie)))
		n=n+1;

	// ----------------------------------------------------------------------------------------------------------------------------
	
	if (damage.m_nLifeDelta == Life(0))
		return;


	if (damage.m_DamageType == DamageType::NonCombatDamage && damage.m_pSourceCard && damage.m_pSourceCard->GetCardType().IsCreature())
	{
		CCreatureCard* pCreatureCard = (CCreatureCard*)damage.m_pSourceCard;
		if (pCreatureCard->GetCreatureKeyword()->DealNoNoncombatDamage())
			return;
	}

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(damage.m_nLifeDelta)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(damage.m_nLifeDelta)))
	{
		LOG_WARNING(_T("Special number %d not supported for ChangeLife(). Ignored."), damage.m_nLifeDelta);
		return;
	}

	if (damage.m_nLifeDelta > Life(0))
	{
		if (!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife)) SetLife(m_nLife + damage.m_nLifeDelta);
		return;
	}

	if ((damage.m_DamageType & DamageType::CombatDamage).Any())
		if ((GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllPlayerDamage) || GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventPlayerCombatDamage)) && damage.m_Preventable == PreventableType::Preventable &&
			!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) && n < 2)
			return;

	if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
		if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllPlayerDamage) && damage.m_Preventable == PreventableType::Preventable &&
			!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) && n < 2)
			return;


	//std::set<const CCardFilter*> cardFilters;
	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Protection, cardFilters) && ((damage.m_DamageType & DamageType::CombatDamage).Any() || (damage.m_DamageType & DamageType::NonCombatDamage).Any())
		&& !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) && n < 2)
	{
		if (!cardFilters.size())
			return; // no card filter, prevent all spells

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(damage.m_pSourceCard))
				return;
	}

	// Furnace of Rath
	if (damage.m_Preventable != PreventableType::NotPreventable && n < 2 && rep_index != 1 && rep_index != 3)
	{
		nMultiplier = 0;
		if (damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::MultiplyDamage, nMultiplier, FALSE))
			for (int i = 0; i < nMultiplier; ++i)
				damage.m_nLifeDelta *= Life(2);
	}

	if (damage.m_Preventable == PreventableType::Preventable && !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) && n < 2 && rep_index < 2)
	{
#if 1	// To support Urza's Armor
		int nPreventedDamage = 0;
		if (GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::PreventDamage, nPreventedDamage, FALSE) &&
			nPreventedDamage)
		{
			if (nPreventedDamage > GET_INTEGER(-damage.m_nLifeDelta))
				nPreventedDamage = GET_INTEGER(-damage.m_nLifeDelta);

			damage.m_nLifeDelta += Life(nPreventedDamage);
		}
#endif

		m_DamagePrevention.PreventDamage(damage);		// Prevent damage may reverse damage to life gain (ref: Reverse Damage)
	}

	if (damage.m_nLifeDelta >= Life(0))
	{
		if (damage.m_nLifeDelta > Life(0))
			if (!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife)) SetLife(m_nLife + damage.m_nLifeDelta);

		return;
	}

	// Planeswalker

	if (CanRedirectToPlaneswalkers(damage) && n < 2)
	{
		std::vector<SelectionEntry> entries;

		{
			// Choose player
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; // player
			selectionEntry.strText.Format(_T("selects %s to receive the non-combat damage"), m_strPlayerName);
			entries.push_back(selectionEntry);
		}

		const CZone* pBattlefield = m_Zones.GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			const CCard* pCard = pBattlefield->GetAt(i);
			if (!(pCard->GetCardType() & CardType::Planeswalker).Any())
				continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("redirects the non-combat damage to %s"), pCard->GetCardName());

			entries.push_back(selectionEntry);
		}

		m_PlaneswalkerSelection.AddSelectionRequest(
			entries, 1, 1, NULL, damage.m_pSourceCard->GetController(), // damage source's controller pick which planeswalker, not this player who is receiving the damage
			(DWORD)GET_INTEGER(damage.m_nLifeDelta),
			(DWORD)damage.m_Preventable.Get(),
			(DWORD)damage.m_DamageType.Get(),
			(DWORD)damage.m_pSourceCard);

		return;
	}

	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::DamageToLifeReplacement) && (damage.m_DamageType & DamageType::NonCombatDamage).Any() && damage.m_Preventable == PreventableType::Preventable && n<2)
	{
		Damage lifelink_damage;
		lifelink_damage.m_nLifeDelta  = Life(-damage.m_nLifeDelta);
		lifelink_damage.m_Preventable = PreventableType::NotPreventable;
		lifelink_damage.m_DamageType  = DamageType::NotDealingDamage;
		lifelink_damage.m_pSourceCard = damage.m_pSourceCard;
		ChangeLife(lifelink_damage);
		return;
	}

	if (damage.m_pSourceCard->GetPrintedCardName() == "Szadek, Lord of Secrets" && (damage.m_DamageType & DamageType::CombatDamage).Any() && n<2)
	{
		const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(this, NULL, NULL, damage,3);
		return;
	}

	if ((damage.m_DamageType & DamageType::SpellDamage).Any() && GetPlayerEffect().HasPlayerEffect(PlayerEffectType::DamageToTokensReplacement) &&
		(damage.m_DamageType & DamageType::NonCombatDamage).Any() && n<2)
	{
		CTokenCreationModifier pModifierT = CTokenCreationModifier(GetGame(), _T("Elemental Shaman"), TOKEN_ID_BY_NAME, GET_INTEGER(-damage.m_nLifeDelta));
		pModifierT.ApplyTo(damage.m_pSourceCard->GetController());

		return;
	}

	if ((damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ZombieMill)) && (damage.m_DamageType & DamageType::CombatDamage).Any() &&
		(damage.m_pSourceCard->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)damage.m_pSourceCard)->GetCreatureType().HasType(SingleCreatureType::Zombie)))
	{
		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, GET_INTEGER(-damage.m_nLifeDelta), CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pModifier.SetReorderInformation(true, ZoneId::Graveyard);

		pModifier.ApplyTo(this);

		damage.m_nLifeDelta = Life(0);
	}

	if   (n>1)
	{
		std::vector<SelectionEntry> entries;

		if ((damage.m_DamageType & DamageType::CombatDamage).Any() && 
			((GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllPlayerDamage) || GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventPlayerCombatDamage)) && damage.m_Preventable == PreventableType::Preventable &&
			!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage)))
		{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("selects %s to prevent damage due to global prevention effect"), m_strPlayerName);
			entries.push_back(selectionEntry);
		}

		if ((damage.m_DamageType & DamageType::NonCombatDamage).Any() && 
			(GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllPlayerDamage) && damage.m_Preventable == PreventableType::Preventable &&
			!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage)))
		{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("selects %s to prevent damage due to global prevention effect"), m_strPlayerName);
			entries.push_back(selectionEntry);
		}
		
		if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Protection, cardFilters) && ((damage.m_DamageType & DamageType::CombatDamage).Any() || (damage.m_DamageType & DamageType::NonCombatDamage).Any())
		&& !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
		{
		if (!cardFilters.size() )
			{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("selects %s to prevent damage due to global protection"), m_strPlayerName);
			entries.push_back(selectionEntry);
			}

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(damage.m_pSourceCard))				
			{

			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 3;
			selectionEntry.strText.Format(_T("selects %s to prevent damage due to protection"), m_strPlayerName);
			entries.push_back(selectionEntry);
			}
		}

		if (nMultiplier>0  && rep_index != 1 && rep_index != 3)
		{		
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 4;
			selectionEntry.strText.Format(_T("selects %s to multiply damage"), m_strPlayerName);
			entries.push_back(selectionEntry);
		}
		
		if (CanRedirectToPlaneswalkers(damage))
		
		{		
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 5;
			selectionEntry.strText.Format(_T("selects %s to redirect damage to planeswalkers"), m_strPlayerName);
			entries.push_back(selectionEntry);
		}

		if (damage.m_Preventable == PreventableType::Preventable && !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) && rep_index > 1)
		{
		int nPreventedDamage = 0;
		if (GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::PreventDamage, nPreventedDamage, FALSE) &&
			nPreventedDamage)
			if (nPreventedDamage >0) 
			{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 6;
			selectionEntry.strText.Format(_T("selects %s to alter damage due global prevention effect"), m_strPlayerName);
			entries.push_back(selectionEntry);
			}


		if (!m_DamagePrevention.IsEmpty())
			{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 6;
			selectionEntry.strText.Format(_T("selects %s to alter damage due prevention effect"), m_strPlayerName);
			entries.push_back(selectionEntry);
			}
		}

		if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::DamageToLifeReplacement) && (damage.m_DamageType & DamageType::NonCombatDamage).Any() && damage.m_Preventable == PreventableType::Preventable)
			{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 7;
			selectionEntry.strText.Format(_T("selects %s to use Purity effect"), m_strPlayerName);
			entries.push_back(selectionEntry);			
			}

		if (damage.m_pSourceCard->GetPrintedCardName() == "Szadek, Lord of Secrets" && (damage.m_DamageType & DamageType::CombatDamage).Any())
		{
			{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 8;
			selectionEntry.strText.Format(_T("selects %s to use Szadek, Lord of Secrets effect"), m_strPlayerName);
			entries.push_back(selectionEntry);			
			}
		}

		if ((damage.m_DamageType & DamageType::SpellDamage).Any() && GetPlayerEffect().HasPlayerEffect(PlayerEffectType::DamageToTokensReplacement) &&
		(damage.m_DamageType & DamageType::NonCombatDamage).Any())
		{
			{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 9;
			selectionEntry.strText.Format(_T("selects %s to use Hostility effect"), m_strPlayerName);
			entries.push_back(selectionEntry);			
			}
		}

		if ((damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ZombieMill)) && (damage.m_DamageType & DamageType::CombatDamage).Any() &&
			(damage.m_pSourceCard->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)damage.m_pSourceCard)->GetCreatureType().HasType(SingleCreatureType::Zombie)))
		{
			{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 10;
			selectionEntry.strText.Format(_T("selects %s to use Undead Alchemist effect"), m_strPlayerName);
			entries.push_back(selectionEntry);			
			}
		}

		m_ReplacementSelection.AddSelectionRequest(
			entries, 1, 1, NULL, this, 
			(DWORD)GET_INTEGER(damage.m_nLifeDelta),
			(DWORD)damage.m_Preventable.Get(),
			(DWORD)damage.m_DamageType.Get(),
			(DWORD)damage.m_pSourceCard,
			(DWORD)rep_index);
	}

	else

	ChangeLifeImpl(damage);
}
void CPlayer::OnReplacementSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	Damage damage;
	damage.m_nLifeDelta = Life(dwContext1);
	damage.m_Preventable = PreventableType::Enum(dwContext2);
	damage.m_DamageType = static_cast<DamageType::Enum>(dwContext3);
	damage.m_pSourceCard = (CCard*)dwContext4;
	int index = (int) dwContext4;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext < 4) return;

			if (it->dwContext == 4)
			{
				int nMultiplier = 0;
				if (damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::MultiplyDamage, nMultiplier, FALSE))
					for (int i = 0; i < nMultiplier; ++i)
						damage.m_nLifeDelta *= Life(2);
				if (index == 0) ChangeLife(damage, 1);
				else ChangeLife(damage, 3);
			}

			if (it->dwContext == 5)
			{
				std::vector<SelectionEntry> entries;

				{
					// Choose player
					SelectionEntry selectionEntry;
					selectionEntry.dwContext = 0; // player
					selectionEntry.strText.Format(_T("selects %s to receive the non-combat damage"), m_strPlayerName);
					entries.push_back(selectionEntry);
				}

				const CZone* pBattlefield = m_Zones.GetZoneById(ZoneId::Battlefield);
				for (int i = 0; i < pBattlefield->GetSize(); ++i)
				{
					const CCard* pCard = pBattlefield->GetAt(i);
					if (!(pCard->GetCardType() & CardType::Planeswalker).Any())
						continue;

					SelectionEntry selectionEntry;

					selectionEntry.dwContext = (DWORD)pCard;
					selectionEntry.strText.Format(_T("redirects the non-combat damage to %s"), pCard->GetCardName());

					entries.push_back(selectionEntry);
				}

				m_PlaneswalkerSelection.AddSelectionRequest(
					entries, 1, 1, NULL, damage.m_pSourceCard->GetController(), // damage source's controller pick which planeswalker, not this player who is receiving the damage
					(DWORD)GET_INTEGER(damage.m_nLifeDelta),
					(DWORD)damage.m_Preventable.Get(),
					(DWORD)damage.m_DamageType.Get(),
					(DWORD)damage.m_pSourceCard);

				return;
			}

			if (it->dwContext == 6)
			{
#if 1	// To support Urza's Armor
				int nPreventedDamage = 0;
				if (GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::PreventDamage, nPreventedDamage, FALSE) &&
					nPreventedDamage)
				{
					if (nPreventedDamage > GET_INTEGER(-damage.m_nLifeDelta))
						nPreventedDamage = GET_INTEGER(-damage.m_nLifeDelta);

					damage.m_nLifeDelta += Life(nPreventedDamage);
				}
#endif
				m_DamagePrevention.PreventDamage(damage);		// Prevent damage may reverse damage to life gain (ref: Reverse Damage)
				if (index == 1) ChangeLife(damage, 3);
				else ChangeLife(damage, 2);
			}
			if (it->dwContext == 7)
			{
				Damage lifelink_damage;
				lifelink_damage.m_nLifeDelta  = Life(-damage.m_nLifeDelta);
				lifelink_damage.m_Preventable = PreventableType::NotPreventable;
				lifelink_damage.m_DamageType  = DamageType::NotDealingDamage;
				lifelink_damage.m_pSourceCard = damage.m_pSourceCard;
				ChangeLife(lifelink_damage);
			}
			
			if (it->dwContext == 8)
			{
				const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(this, NULL, NULL, damage,3);
			}

			if (it->dwContext == 9)
			{
				CTokenCreationModifier pModifierT = CTokenCreationModifier(GetGame(), _T("Elemental Shaman"), TOKEN_ID_BY_NAME, GET_INTEGER(-damage.m_nLifeDelta));
				pModifierT.ApplyTo(damage.m_pSourceCard->GetController());
			}

			if (it->dwContext == 10)
			{
				CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, GET_INTEGER(-damage.m_nLifeDelta), CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier.SetReorderInformation(true, ZoneId::Graveyard);

				pModifier.ApplyTo(this);

				damage.m_nLifeDelta = Life(0);
			}
		}

}
void CPlayer::ChangeLifeImpl(Damage damage)
{
	std::vector<int> redirections;
	m_DamageRedirection.GetRedirections(damage, redirections);

	size_t redirectionCount = redirections.size();

	if (redirectionCount)
	{
		if (redirectionCount > 1)
		{
			std::vector<SelectionEntry> entries;

			for (std::vector<int>::const_iterator i = redirections.begin(); i != redirections.end();
				++i)
			{
				const CDamageRedirectionEntry& entry(m_DamageRedirection.GetRedirection(*i));

				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)*i;
				selectionEntry.strText = entry.ToString();
	
				entries.push_back(selectionEntry);
			}

			m_DamageRedirectionSelection.AddSelectionRequest(
				entries, 1, 1, NULL, this,
				(DWORD)GET_INTEGER(damage.m_nLifeDelta),
				(DWORD)damage.m_Preventable.Get(),
				(DWORD)damage.m_DamageType.Get(),
				(DWORD)damage.m_pSourceCard);

			return;
		}
		
		m_DamageRedirection.RedirectDamage(damage, redirections[0]);
	}

	ChangeLifeImpl2(damage);
}

void CPlayer::OnDamageRedirectionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	Damage damage;
	damage.m_nLifeDelta  = Life(dwContext1);
	damage.m_Preventable = PreventableType::Enum(dwContext2);
	damage.m_DamageType  = static_cast<DamageType::Enum>(dwContext3);
	damage.m_pSourceCard = (CCard*)dwContext4;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			m_DamageRedirection.RedirectDamage(damage, it->dwContext);
			break;
		}

	ChangeLifeImpl2(damage);
}

void CPlayer::OnPlaneswalkerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	Damage damage;
	damage.m_nLifeDelta  = Life(dwContext1);
	damage.m_Preventable = PreventableType::Enum(dwContext2);
	damage.m_DamageType  = static_cast<DamageType::Enum>(dwContext3);
	damage.m_pSourceCard = (CCard*)dwContext4;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{
				// Player

				ChangeLifeImpl(damage);
				return;
			}

			// Planeswalker

			if (((GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventDamagetoGideon) &&  ((CPlaneswalkerCard*)(it->dwContext))->GetPrintedCardName() == "Gideon Jura") ||
				(GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventDamagetoGideon2) &&  ((CPlaneswalkerCard*)(it->dwContext))->GetPrintedCardName() == "Gideon, Champion of Justice"))
				&& damage.m_Preventable == PreventableType::Preventable)
				return;

			if (!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllDamageToPWalkers) || GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) || damage.m_Preventable != PreventableType::Preventable)
			{

				if (damage.m_pSourceCard->GetCardKeyword()->HasLifelink())
				{
					Damage lifelink_damage;
					lifelink_damage.m_nLifeDelta  = Life(-damage.m_nLifeDelta);
					lifelink_damage.m_Preventable = PreventableType::NotPreventable;
					lifelink_damage.m_DamageType  = DamageType::NotDealingDamage;
					lifelink_damage.m_pSourceCard = damage.m_pSourceCard;
					damage.m_pSourceCard->GetController()->ChangeLife(lifelink_damage);
				}

				if ((damage.m_DamageType & DamageType::CombatDamage).Any())
					damage.m_pSourceCard->GetCardFlag()->AddHasDealtCombatDamage();
				if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
					damage.m_pSourceCard->GetCardFlag()->AddHasDealtNonCombatDamage();
			
			if (((CPlaneswalkerCard*)(it->dwContext))->GetIsAlsoA())
			{
				if (((CPlaneswalkerCard*)(it->dwContext))->GetIsAlsoA()->GetCardType().IsCreature())
				{
					CCreatureCard* pCreature = (CCreatureCard*)(((CPlaneswalkerCard*)(it->dwContext))->GetIsAlsoA());
					pCreature->ChangeLife(damage, FALSE);

					Counter* pCounter = ((CPlaneswalkerCard*)(it->dwContext))->GetLoyaltyCounter();
					int old = pCounter->GetCount();
					pCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));

					const_cast<CCard*>((CCard*)(it->dwContext))->CounterMoved((CCard*)(it->dwContext), LOYALTY_COUNTER, old, old+GET_INTEGER(damage.m_nLifeDelta));
				}
				else
				{
					Counter* pCounter = ((CPlaneswalkerCard*)(it->dwContext))->GetLoyaltyCounter();
					int old = pCounter->GetCount();
					pCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));

					const_cast<CCard*>((CCard*)(it->dwContext))->CounterMoved((CCard*)(it->dwContext), LOYALTY_COUNTER, old, old+GET_INTEGER(damage.m_nLifeDelta));
				}
			}
			else
			{
				Counter* pCounter = ((CPlaneswalkerCard*)(it->dwContext))->GetLoyaltyCounter();

				int old = pCounter->GetCount();

				pCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));

				const_cast<CCard*>((CCard*)(it->dwContext))->CounterMoved((CCard*)(it->dwContext), LOYALTY_COUNTER, old, old+GET_INTEGER(damage.m_nLifeDelta));
			}

			m_pGame->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);
			}

			return;
		}
}

void CPlayer::ChangeLifeImpl2(Damage damage)
{
	if (damage.m_nLifeDelta >= Life(0))
	{
		if (damage.m_nLifeDelta > Life(0))
			if (!GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife)) SetLife(m_nLife + damage.m_nLifeDelta);

		return;
	}

	// 10/29/2003: To support Worship
	if (damage.m_Preventable == PreventableType::Preventable && !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
	{
		int nMaxParam = 0;
		int nMinParam = 0;
		if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Worship, nMaxParam, nMinParam) &&  !GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife) &&
			(m_nLife + damage.m_nLifeDelta < Life(nMaxParam)))
		{
			damage.m_nLifeDelta = Life(nMaxParam) - m_nLife;
			if (damage.m_nLifeDelta >= Life(0))
						return;
			// Moved to CEnchantment: Control any creatures?
			/*
			CZone* pInplay = GetZoneById(ZoneId::Battlefield);
			for (int i = 0; i < pInplay->GetSize(); ++i)
				if ((pInplay->GetAt(i)->GetCardType() & CardType::Creature).Any())
				{
					damage.m_nLifeDelta = Life(nMaxParam) - m_nLife;
					if (damage.m_nLifeDelta >= Life(0))
						return;
					break;
				}
			*/
		}
	}

	Life previousLife(m_nLife);

	if (damage.m_pSourceCard->GetCardKeyword()->HasLifelink() && !(damage.m_DamageType == DamageType::NotDealingDamage))
	{
		Damage lifelink_damage;
		lifelink_damage.m_nLifeDelta  = Life(-damage.m_nLifeDelta);
		lifelink_damage.m_Preventable = PreventableType::NotPreventable;
		lifelink_damage.m_DamageType  = DamageType::NotDealingDamage;
		lifelink_damage.m_pSourceCard = damage.m_pSourceCard;
		damage.m_pSourceCard->GetController()->ChangeLife(lifelink_damage);
	}

	if ((damage.m_DamageType & DamageType::CombatDamage).Any())
		damage.m_pSourceCard->GetCardFlag()->AddHasDealtCombatDamage();
	if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
		damage.m_pSourceCard->GetCardFlag()->AddHasDealtNonCombatDamage();

	if ((damage.m_DamageType & DamageType::CreatureSpellOnlyDamage).Any())
	{
		CPlayerEffectModifier* pmodifier = new CPlayerEffectModifier(PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("non-creatures")));	

		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pmodifier, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater);

		pModifier2->ApplyTo(this);
	}

	if (damage.m_pSourceCard->GetCardKeyword()->HasInfect())
	{
		CPoisonModifier pPoisonModifier = CPoisonModifier(GetGame(), -GET_INTEGER(damage.m_nLifeDelta));
		pPoisonModifier.ApplyTo(this);

		if (m_pGame->IsThinking() && GET_INTEGER(m_nLife) > (10 - m_nPoisonCounters))           // Thinking approximation for poison
		{
			SetLife(Life(10 - m_nPoisonCounters));
		}
	}
	else
	SetLife(m_nLife + damage.m_nLifeDelta);

	if ((damage.m_DamageType & DamageType::CombatDamage).Any())
		m_nTurnCombatDamageTaken -= damage.m_nLifeDelta;
	if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
		m_nTurnNoncombatDamageTaken -= damage.m_nLifeDelta;
	if (!GetDamageSourcesThisTurn().HasCard(damage.m_pSourceCard))
		AddToDamageSourcesThisTurn((CCard*)damage.m_pSourceCard);
	if ((damage.m_DamageType & DamageType::CombatDamage).Any() && damage.m_pSourceCard->GetCardType().IsCreature())
		{
			const CCreatureCard* pCreatureCard = (const CCreatureCard*)damage.m_pSourceCard;
			if (pCreatureCard->GetCardKeyword()->HasChangeling() || pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Rogue) || pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Goblin))
				m_nProwl=true;
		}


#if 1	// 8/25/2001: Added to support Spirit Link
	// 5/13/2002: 0 damages will not trigger OnDealDamage events
	if (((damage.m_DamageType & DamageType::CombatDamage).Any() || (damage.m_DamageType & DamageType::NonCombatDamage).Any()) &&
		damage.m_pSourceCard)
		const_cast<CCard*>(damage.m_pSourceCard)->OnDealDamage(this, NULL, NULL, damage);
#endif
}

bool CPlayer::HasPlaneswalkers() const
{
	const CZone* pBattlefield = m_Zones.GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pBattlefield->GetSize(); ++i)
		if ((pBattlefield->GetAt(i)->GetCardType() & CardType::Planeswalker).Any())
			return true;

	return false;
}

bool CPlayer::CanRedirectToPlaneswalkers(Damage damage) const
{
	if (!(damage.m_DamageType & DamageType::NonCombatDamage).Any() || // non-combat damage only
		!damage.m_pSourceCard ||
		damage.m_pSourceCard->GetController() == this) // opponents only
		return false;

	return HasPlaneswalkers();
}

Life CPlayer::GetLife() const
{
	return m_nLife;
}

Life CPlayer::GetLifeAtBeginningOfTurn() const			//life at beginning of turn is life carried from the conclusion of last turn
{
	return m_nLifeAtBeginningOfTurn;
}

Life CPlayer::GetStartingLife() const
{
	return m_nStartingLife;
}

void CPlayer::SetStartingLife(Life nLife)
{
	m_nStartingLife = nLife;
}

Life CPlayer::GetCombatDamageTakenThisTurn() const
{
	return m_nTurnCombatDamageTaken;
}

Life CPlayer::GetNoncombatDamageTakenThisTurn() const
{
	return m_nTurnNoncombatDamageTaken;
}

Life CPlayer::GetLifeLossTakenThisTurn() const
{
	return m_nTurnLifeLossTaken;
}
//last turn start-----------------------------------------------
Life CPlayer::GetLifeLossTakenLastTurn()		const 
{
	return m_nTurnLifeLossTakenLastTurn; 
}

Life CPlayer::GetCombatDamageTakenLastTurn()	const 
{
	return m_nTurnCombatDamageTakenLastTurn;
}

Life CPlayer::GetNoncombatDamageTakenLastTurn() const 
{
	return m_nTurnNoncombatDamageTakenLastTurn;
}

Life CPlayer::GetDamageTakenLastTurn()			const		
{
	return m_nTurnCombatDamageTakenLastTurn + m_nTurnNoncombatDamageTakenLastTurn;
}

Life CPlayer::GetTotalLifeLossTakenLastTurn()	const
{
	return m_nTurnLifeLossTakenLastTurn + m_nTurnCombatDamageTakenLastTurn + m_nTurnNoncombatDamageTakenLastTurn;
}
//last turn end--------------------------------------------------
Life CPlayer::GetLifeGainThisTurn()				const
{
	return m_nTurnLifeGain;
}

Life CPlayer::GetDamageTakenThisTurn()			const
{
	return m_nTurnCombatDamageTaken + m_nTurnNoncombatDamageTaken;
}

Life CPlayer::GetTotalLifeLossTakenThisTurn()	const
{
	return m_nTurnLifeLossTaken + m_nTurnCombatDamageTaken + m_nTurnNoncombatDamageTaken;
}

BOOL CPlayer::IsProwled()						const
{
	return m_nProwl;
}

const CDamagePrevention_& CPlayer::GetDamagePrevention() const
{
	return m_DamagePrevention;
}

CDamagePrevention_& CPlayer::GetDamagePrevention()
{
	return m_DamagePrevention;
}

void CPlayer::Reset()
{
	m_DamagePrevention.RemoveAll();
	m_DamageRedirection.RemoveTurnRedirections();
}

BOOL CPlayer::GetLost() const
{
	return m_bLost;
}

void CPlayer::UpdateLost()
{
	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantLoseGame))
	{
		m_bLost = FALSE;
		return;
	}

	if (m_bDrawFailed && GetPlayerEffect().HasPlayerEffect(PlayerEffectType::WinInsteadTopDeck))
	{
		m_pGame->GetNextPlayer(this)->SetLostByOtherReasons();		
		return;
	}

	m_bLost = m_nLife <= Life(0) || m_bDrawFailed || m_bLostByOtherReasons || m_bLostByPoison;
}

const CManaPool_& CPlayer::GetManaPool() const
{
	return m_ManaPool;
}

CManaPool_& CPlayer::GetManaPool()
{
	return m_ManaPool;
}

int CPlayer::GetMaxHandSize() const
{
	if (m_nMaxHandSize<0) return 0;

	return m_nMaxHandSize;
}

void CPlayer::SetMaxHandSize(int nMaxHandSize)
{
	m_nMaxHandSize = nMaxHandSize;
}
void CPlayer::IncreaseMaxHandSize(int nMaxHandSize)
{
	m_nMaxHandSize = m_nMaxHandSize+nMaxHandSize;
}
BOOL CPlayer::GetCreatureCounteredByOpponent() const
{
	return m_bCreatureCounteredByOpponent;
}

void CPlayer::SetCreatureCounteredByOpponent(BOOL searched)
{
	m_bCreatureCounteredByOpponent = searched;
}
BOOL CPlayer::GetSearchedLibraryThisTurn() const
{
	return m_bSearchedLibraryThisTurn;
}

void CPlayer::SetSearchedLibraryThisTurn(BOOL searched)
{
	m_bSearchedLibraryThisTurn = searched;
}
void CPlayer::SetPoisonCounters(int value,BOOL replace)
{
	if (replace == TRUE) m_nPoisonCounters=value;
	else m_nPoisonCounters = m_nPoisonCounters + value;

	if (m_nPoisonCounters>9)  m_bLostByPoison = TRUE;
	UpdateLost();
}

void CPlayer::AddLifeLossTakenThisTurn(Life pLifeLost)
{
	m_nTurnLifeLossTaken = m_nTurnLifeLossTaken + pLifeLost;
}

void CPlayer::AddLifeGainThisTurn(Life pLifeGained)
{
	m_nTurnLifeGain = m_nTurnLifeGain + pLifeGained;
}

CString CPlayer::GetPlayerName() const
{
	return m_strPlayerName;
}

void CPlayer::SetPlayerName(LPCTSTR strName)
{
	m_strPlayerName = strName;
}

const CTriggeredActionContainer* CPlayer::GetTriggeredActionContainer() const
{
	return m_apTriggeredMoveContainer.get();
}

CTriggeredActionContainer* CPlayer::GetTriggeredActionContainer()
{
	return m_apTriggeredMoveContainer.get();
}

const CCountedPtrContainer<CUndoAction>* CPlayer::GetUndoActions() const
{
	return &m_UndoActions;
}

CCountedPtrContainer<CUndoAction>* CPlayer::GetUndoActions()
{
	return &m_UndoActions;
}

int CPlayer::GetPlayerTurnNumber() const
{
	return m_nPlayerTurnNumber;
}

void CPlayer::IncreasePlayerTurnNumber()
{
	++m_nPlayerTurnNumber;
}

CCountedCardContainer CPlayer::DredgeCards()
{
	CCountedCardContainer dredge_cards;
	CZone* graveyard = m_Zones.GetZoneById(ZoneId::Graveyard);
	int library_size =  m_Zones.GetZoneById(ZoneId::Library)->GetSize();

	for (int i = 0; i < graveyard->GetSize(); ++i)
	{
		CCard* pCard = graveyard->GetAt(i);

		if (pCard->GetCardKeyword()->HasDredge() && pCard->GetDredgeNumber()<=library_size) dredge_cards.AddCard(pCard,CardPlacement::Top);					

	}
	return dredge_cards;
}
bool CPlayer::ExternalDamageReplacementCards()
{
	CCountedCardContainer dredge_cards;
	CZone* battlefield = m_Zones.GetZoneById(ZoneId::Battlefield);	
	bool replacers = false;


	for (int i = 0; i < battlefield->GetSize(); ++i)
	{
		CCard* pCard = battlefield->GetAt(i);

		if (pCard->GetPrintedCardName() == "Vigor") replacers=true;      // later replacement effects should be done via flags/abilities that returns certain value

	}
	
	return replacers;
}
/*
int CPlayer::GetPlayerDrawNumber() const
{
	return m_nPlayerDrawNumber;
}

void CPlayer::IncreasePlayerDrawNumber()
{
	++m_nPlayerDrawNumber;
}
*/

void CPlayer::SetComputer()
{
	m_bComputer = TRUE;
}

BOOL CPlayer::IsComputer() const
{
	return m_bComputer;
}

BOOL CPlayer::IsLocal() const
{
	if (m_bComputer)
		return FALSE;

	CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(m_apInterface.get());
	if (pNetInterface)
		return FALSE;

	return TRUE;
}

BOOL CPlayer::IsRemote() const
{
	if (m_bComputer)
		return FALSE;

	CNetInterface* pNetInterface = dynamic_cast<CNetInterface*>(m_apInterface.get());
	if (pNetInterface)
		return TRUE;

	return FALSE;
}

void CPlayer::OnCurrentNodeChanged(CNode* pToNode)
{
	ATLASSERT(pToNode->GetNodeId() == NodeId::CleanupStep2);
	Reset();
}

counted_ptr<CAction> CPlayer::GetNextStrategy()
{
	if (!m_Strategy.GetSize())
		return NULL;

	return m_Strategy.GetFirstAction();
}

void CPlayer::RemoveNextStrategy()
{
	if (!m_Strategy.GetSize())
		return;

	m_Strategy.RemoveFirstAction();
}

void CPlayer::RemoveStrategy(StrategyRemovalReason reason)
{
	m_Strategy.RemoveAll();
	if (m_pGame->IsDeveloper())
	{
		CString strMessage;
		strMessage.Format(_T(" Removed strategy for %s - reason %d"), GetPlayerName(), reason.Get());
		m_pGame->Message(strMessage, m_pGame->GetDebugImage());
	}
}

void CPlayer::SetStrategy(const CStrategy& strategy)
{
	m_Strategy = strategy;
}

void CPlayer::AddInPlayBonus(int nBonus)
{
	m_nInPlayBonus += nBonus;
}

int CPlayer::GetInPlayBonus() const
{
	return m_nInPlayBonus;
}

void CPlayer::ResetInPlayBonus()
{
	m_nInPlayBonus = 0;
}

void CPlayer::AddInHandBonus(int nBonus)
{
	m_nInHandBonus += nBonus;
}

int CPlayer::GetInHandBonus() const
{
	return m_nInHandBonus;
}

void CPlayer::ResetInHandBonus()
{
	m_nInHandBonus = 0;
}

void CPlayer::AddMiscBonus(int nBonus)
{
	m_nMiscBonus += nBonus;
}

int CPlayer::GetMiscBonus() const
{
	return m_nMiscBonus;
}

void CPlayer::ResetMiscBonus()
{
	m_nMiscBonus = 0;
}

void CPlayer::SetInterface(CInterface* pInterface)
{
	m_apInterface.reset(pInterface);
}

CInterface* CPlayer::GetInterface() const
{
	return m_apInterface.get();
}

void CPlayer::MemorizeCard(const CCard* pCard)
{
	ATLASSERT(!m_pGame->IsThinking());

	m_MemorizedCards.Set(pCard);

	ATLTRACE(_T("%s memorized %s\n"), m_strPlayerName, pCard->GetCardName());
}

void CPlayer::ForgetCard(const CCard* pCard)
{
	ATLASSERT(!m_pGame->IsThinking());
	
	if (m_MemorizedCards.Remove(pCard))
	{
		ATLTRACE(_T("%s forgot %s\n"), m_strPlayerName, pCard->GetCardName());
	}
}

bool CPlayer::IsMemorizedCard(const CCard* pCard) const
{
	return m_MemorizedCards.Contains(pCard);
}

bool CPlayer::AreMemorizedCards(const CCountedCardContainer& cards) const
{
	for (int i = 0; i < cards.GetSize(); ++i)
		if (!m_MemorizedCards.Contains(cards.GetAt(i)))
			return false;

	return true;
}

const CCountedPtrSet<const CCard>& CPlayer::GetMemorizedCards() const
{
	return m_MemorizedCards;
}

void CPlayer::SetDeck(const CDeck& deck)
{
	ATLASSERT(deck.GetStatus() == CDeck::DeckStatus::Okay);
	if (deck.GetStatus() != CDeck::DeckStatus::Okay)
		return;

	m_Deck = deck;

	CZone* pLibrary		= GetZoneById(ZoneId::Library);
	CZone* pBattlefield = GetZoneById(ZoneId::Battlefield);
	CZone* pEmblems		= GetZoneById(ZoneId::_Effects);
	CZone* pTokens		= GetZoneById(ZoneId::_Tokens);
	CZone* pSideboard	= GetZoneById(ZoneId::_Sideboard);
	CZone* pHand		= GetZoneById(ZoneId::Hand);
	CZone* pScheme		= GetZoneById(ZoneId::_Schemes);
	CZone* pPlane		= GetZoneById(ZoneId::_Planes);

	m_pGame->Log(_T("/// %s's deck\n"), GetPlayerName());

	const StringArray& fileLines(deck.GetFileLines());
	for (size_t i = 0; i < fileLines.size(); ++i)
		m_pGame->Log(_T("%s"), fileLines[i]);

	const StringSet& unsupported(deck.GetUnsupportedCards());
	if (unsupported.size())
	{
		m_pGame->Log(_T("\n/// *** UNSUPPORTED CARDS ****\n"));
		for (StringSet::const_iterator i = unsupported.begin(); i != unsupported.end(); ++i)
			m_pGame->Log(_T("/// %s\n"), *i);
	}

	const StringSet& tooMany(deck.GetCardsWithExtraCopiesRemoved());
	if (tooMany.size())
	{
		m_pGame->Log(_T("\n/// *** CARDS WITH MORE THAN 4 COPIES (EXTRAS REMOVED) ****\n"));
		for (StringSet::const_iterator i = tooMany.begin(); i != tooMany.end(); ++i)
			m_pGame->Log(_T("/// %s\n"), *i);
	}

	const CDeck::DeckCards& deckCards(deck.GetDeck());

	StringSet cardNames;
	for (size_t i = 0; i < deckCards.size(); ++i)
	{
		const CDeck::DeckCard& card(deckCards[i]);

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(m_pGame, card.strCardName, card.nImageId));
		if (!cpCard.GetPointer())
		{
			m_pGame->Log(_T("/// Cannot create %s\n"), card.strCardName);
			continue;
		}

		if (!cpCard.GetPointer()->GetCardType().IsEmblem() && !cpCard.GetPointer()->GetCardType().IsScheme() && cpCard.GetPointer()->GetPrintedCardName() != _T("Commander") && cpCard.GetPointer()->GetPrintedCardName() != _T("Planechase")  && !cpCard.GetPointer()->GetCardType().IsPlane())
		{
			pLibrary->AddCard(cpCard.GetPointer());
			m_OwnedCards.AddCard(cpCard.GetPointer());
		}
		else
		{
			if (!cpCard.GetPointer()->GetCardType().IsScheme() && !cpCard.GetPointer()->GetCardType().IsPlane())
			{
			pTokens->AddCard(cpCard.GetPointer());
			(cpCard.GetPointer())->Move(pEmblems,this,MoveType::Others);
			m_OwnedCards.AddCard(cpCard.GetPointer());
			if (cpCard.GetPointer()->GetPrintedCardName() == _T("Commander")) 
				m_commander = TRUE;
			}
			else
			{
				if (cpCard.GetPointer()->GetCardType().IsScheme())
				{
					pScheme->AddCard(cpCard.GetPointer());
					m_OwnedCards.AddCard(cpCard.GetPointer());
				}
				else
				{
					pPlane->AddCard(cpCard.GetPointer());
					m_OwnedCards.AddCard(cpCard.GetPointer());
				}
			}
		}



		if (m_pGame->IsDeveloper())
		{
			if (cardNames.find(cpCard->GetPrintedCardName()) == cardNames.end())
			{	
				m_pGame->Log(_T("/// %s (ID=%d, Score=%d)\n"), card.strCardName, card.nImageId, card.nScore);
				cardNames.insert(cpCard->GetPrintedCardName());
			}
		}

		if (m_phasing != TRUE && CCardFilter::GetFilter(_T("pregame phasing cards"))->IsCardIncluded(cpCard.GetPointer()))
		{
			m_phasing = TRUE;
			m_pGame->GetNextPlayer(this)->SetPhasing();
		}
	}

	const CDeck::DeckCards& sideCards(deck.GetSideboard());

	StringSet cardNames1;
	for (size_t i = 0; i < sideCards.size(); ++i)
	{
		const CDeck::DeckCard& card(sideCards[i]);

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(m_pGame, card.strCardName, card.nImageId));
		if (!cpCard.GetPointer())
		{
			m_pGame->Log(_T("/// Cannot create %s\n"), card.strCardName);
			continue;
		}

		pSideboard->AddCard(cpCard.GetPointer());
		m_OwnedCards.AddCard(cpCard.GetPointer());

		if (m_pGame->IsDeveloper())
		{
			if (cardNames1.find(cpCard->GetPrintedCardName()) == cardNames.end())
			{	
				m_pGame->Log(_T("/// %s (ID=%d, Score=%d)\n"), card.strCardName, card.nImageId, card.nScore);
				cardNames.insert(cpCard->GetPrintedCardName());
			}
		}
	}

	const CDeck::DeckCards& emblemCards(deck.GetStartWithEmblems());

	StringSet cardNames3;
	for (size_t i = 0; i < emblemCards.size(); ++i)
	{
		const CDeck::DeckCard& card(emblemCards[i]);

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(m_pGame, card.strCardName, card.nImageId));
		if (!cpCard.GetPointer())
		{
			m_pGame->Log(_T("/// Cannot create %s\n"), card.strCardName);
			continue;
		}

		pTokens->AddCard(cpCard.GetPointer());
		
		(cpCard.GetPointer())->Move(pEmblems,this,MoveType::Others);

		//pEmblems->AddCard(cpCard.GetPointer());
		m_OwnedCards.AddCard(cpCard.GetPointer());

		if (((cpCard.GetPointer())->GetCardType() & CardType::Legendary).Any() && m_commander == TRUE)
		{
			(cpCard.GetPointer())->GetReplacementKeyword()->AddCommanderFlag(FALSE);
			(cpCard.GetPointer())->GetCardKeyword()->AddEmblem(FALSE);
		
				const CPtrContainer_<CSpell>& spells((cpCard.GetPointer())->GetSpells());

				for (int i = 0; i < spells.GetSize(); ++i)
			{
				spells.GetAt(i)->SetAddPlayableFromCommanderZone();
			}
		}

		pTokens->AddCard(cpCard.GetPointer());
		
		(cpCard.GetPointer())->Move(pEmblems,this,MoveType::Others);

		//pEmblems->AddCard(cpCard.GetPointer());
		m_OwnedCards.AddCard(cpCard.GetPointer());

		if (m_pGame->IsDeveloper())
		{
			if (cardNames3.find(cpCard->GetPrintedCardName()) == cardNames.end())
			{	
				m_pGame->Log(_T("/// %s (ID=%d, Score=%d)\n"), card.strCardName, card.nImageId, card.nScore);
				cardNames.insert(cpCard->GetPrintedCardName());
			}
		}
	}

	const CDeck::DeckCards& battleCards(deck.GetStartWithBattlefield());

	StringSet cardNames2;
	for (size_t i = 0; i < battleCards.size(); ++i)
	{
		const CDeck::DeckCard& card(battleCards[i]);

		counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(m_pGame, card.strCardName, card.nImageId));
		if (!cpCard.GetPointer())
		{
			m_pGame->Log(_T("/// Cannot create %s\n"), card.strCardName);
			continue;
		}

		pTokens->AddCard(cpCard.GetPointer());
		
		(cpCard.GetPointer())->Move(pBattlefield,this,MoveType::Others);

//		pBattlefield->AddCard(cpCard.GetPointer());
		m_OwnedCards.AddCard(cpCard.GetPointer());

		if (m_pGame->IsDeveloper())
		{
			if (cardNames2.find(cpCard->GetPrintedCardName()) == cardNames.end())
			{	
				m_pGame->Log(_T("/// %s (ID=%d, Score=%d)\n"), card.strCardName, card.nImageId, card.nScore);
				cardNames.insert(cpCard->GetPrintedCardName());
			}
		}
	}

	CCardFilter temp;
	temp.AddComparer(new CardTypeComparer(CardType::Vanguard, FALSE));

	int LifeModifier = 0;
	int HandModifier = 0;

	if (temp.CountIncluded(pEmblems->GetCardContainer()))
		for (int i = 0; i < pEmblems->GetSize(); ++i)
		{
			if ((pEmblems->GetAt(i)->GetCardType() & CardType::Vanguard).Any())
				{
				LifeModifier = LifeModifier + ((CVanguardCard*)pEmblems->GetAt(i))->GetStartingLifeModifier();
				HandModifier = HandModifier + ((CVanguardCard*)pEmblems->GetAt(i))->GetStartingHandModifier();
				}
		}

	if (pScheme->GetSize())
	{
		pScheme->Shuffle();
		m_archenemy = TRUE;
	}

	if (pPlane->GetSize())
	{
		pPlane->Shuffle();
		m_planechase = TRUE;
	}

	if (!deck.GetNoShuffle())
		pLibrary->Shuffle();
	else
		m_pGame->Log(_T("/// *** SHUFFLING DISABLED ***\n"));

	SetLife(Life(deck.GetStartingLife()) + Life(LifeModifier));
	SetStartingLife(GetLife());

#ifdef _MY_DEBUG
	m_pGame->Log(_T("\n/// Library after shuffle:\n"));
	for (int i = 0; i < pLibrary->GetSize(); ++i)
	{
		CCard* pCard = pLibrary->GetAt(i);
		m_pGame->Log(_T("/// %2d) %s\n"), i, pCard->GetCardName());

		ATLASSERT(pCard->GetZone() == pLibrary);
	}
#endif

	m_nMaxHandSize = m_nMaxHandSize + HandModifier;

	for (int i = 0; i < m_nMaxHandSize; ++i)
	{
		CCard* pCard = pLibrary->GetTopCard();
#ifdef _MY_DEBUG
		m_pGame->Log(_T("/// Drew %s\n"), pCard->GetCardName());
#endif
		pHand->AddCard(pCard);
	}

	m_pGame->Log(_T("\n/// Statistics\n"));
	m_pGame->Log(_T("/// ====================================\n"));
	m_pGame->Log(_T("///         Cards: %d (unique: %d)\n"), deckCards.size(),		  deck.GetCardNames().size());
	if (deck.GetLandCount())
		m_pGame->Log(_T("///         Lands: %d (%.2f%%)\n"), deck.GetLandCount(),	  deck.GetLandPercentage());
	if (deck.GetCreatureCount())
		m_pGame->Log(_T("///     Creatures: %d (%.2f%%)\n"), deck.GetCreatureCount(), deck.GetCreaturePercentage());
	if (deck.GetInstantCount())
		m_pGame->Log(_T("///      Instants: %d (%.2f%%)\n"), deck.GetInstantCount(),  deck.GetInstantPercentage());
	if (deck.GetSorceryCount())
		m_pGame->Log(_T("///     Sorceries: %d (%.2f%%)\n"), deck.GetSorceryCount(),  deck.GetSorceryPercentage());
	if (deck.GetEnchantmentCount())
		m_pGame->Log(_T("///  Enchantments: %d (%.2f%%)\n"), deck.GetEnchantmentCount(), deck.GetEnchantmentPercentage());
	if (deck.GetArtifactCount())
		m_pGame->Log(_T("///     Artifacts: %d (%.2f%%)\n"), deck.GetArtifactCount(), deck.GetArtifactPercentage());
	
	m_pGame->Log(_T("/// Deck Reference Score: %d\n"), deck.GetReferenceScore());
	m_pGame->Log(_T("/// Prominent Mana Color: %s\n"), CManaPool::Color::ToString(deck.GetProminentManaColor()));
	m_pGame->Log(_T("/// Prominent Card Color: %s\n"), CManaPool::Color::ToString(deck.GetProminentManaColorByCard()));

	const std::set<SingleCreatureType>& creatureTypes(deck.GetCreatureTypes());
	m_pGame->Log(_T("///       Creature Types: %d\n"), creatureTypes.size());
	for (std::set<SingleCreatureType>::const_iterator i = creatureTypes.begin(); 
		i != creatureTypes.end(); ++i)
		m_pGame->Log(_T("///         %s\n"), i->ToString());

	m_pGame->Log(_T("\n"));
}

void CPlayer::ResetTurnInfo()
{
//last turn start-----------------------------------------------
	m_nLifeAtBeginningOfTurn			= m_nLife;						//life at beginning of turn is life carried from the conclusion of last turn
	m_nLastTurnCastedSpellCount			= m_nTurnCastedSpellCount;
	m_nTurnCombatDamageTakenLastTurn	= m_nTurnCombatDamageTaken;
	m_nTurnNoncombatDamageTakenLastTurn = m_nTurnNoncombatDamageTaken;
	m_nTurnLifeLossTakenLastTurn		= m_nTurnLifeLossTaken;
//last turn end-------------------------------------------------
//this turn below-----------------------------------------------
	m_nTurnUntappedCount				= 0;
	m_nTurnUntappedLandsCount			= 0;
	m_nTurnUntappedCreaturesCount		= 0;
	m_nTurnCastedSpellCount				= 0;
	m_nTurnDrawCount					= 0;
	m_pCardsDrawnThisTurn.RemoveAll();
	m_pLastDrawThisTurn					= NULL;
	m_pDamageSourcesThisTurn.RemoveAll();
	m_nTurnDiscardCount					= 0;
	m_nTurnAttackCount					= 0;
	m_nTurnCombatDamageTaken			= Life(0);
	m_nTurnNoncombatDamageTaken			= Life(0);
	m_nTurnLifeLossTaken				= Life(0);
	m_nTurnLifeGain						= Life(0);
	m_nProwl							= FALSE;
	m_bSearchedLibraryThisTurn			= FALSE;
	m_bCreatureCounteredByOpponent		= FALSE;
	m_resolved_scheme					= FALSE;

	m_UntapCardType.ResetTurnCardTypes();
	m_CantUntapCardType.ResetTurnCardTypes();

	GetPlayerEffect().ResetTurnPlayerEffects();

	m_CanBeAttackedBy.ResetTurnPredefinedCardFilters();

	s_hCard.RemoveAll();	
	s_hTypes.RemoveAllSpecial();
	//b_fTypes.RemoveAllSpecial();
	s_hfromZones.RemoveAllSpecial();
	s_htoZones.RemoveAllSpecial();
	
}

int CPlayer::GetCertainTypeCastedCount(CardType pType)
{
	int count=0;

	if (s_hTypes.GetSizeSpecial())
		for (int i = 0; i < s_hTypes.GetSizeSpecial(); ++i) 
			if ((s_hTypes.GetAtSpecial(i).m_CardType & pType).Any() && s_htoZones.GetAtSpecial(i).m_ZoneId == ZoneId::Stack) count=count+1;

	return count;
}

bool CPlayer::IsCertainCardPresentInHistory(CCard* pCard, ZoneId toZone, ZoneId fromZone)
{
	int count=0;

	if (s_hCard.GetSize())
		for (int i = 0; i < s_hCard.GetSize(); ++i) 
			if (s_hCard.GetAt(i) == pCard && s_htoZones.GetAtSpecial(i).m_ZoneId == toZone  && s_hfromZones.GetAtSpecial(i).m_ZoneId == fromZone) return true;

	return false;
}
bool CPlayer::IsCertainCardDetained(CCard* pCard)
{
	int count=0;

	if (detainedCard.GetSize())
		for (int i = 0; i < detainedCard.GetSize(); ++i) 
			if (detainedCard.GetAt(i) == pCard) 
				return true;

	return false;
}

int CPlayer::GetCertainTypeDiedCount(CardType pType)
{
	int count=0;

	if (s_hTypes.GetSizeSpecial())
		for (int i = 0; i < s_hTypes.GetSizeSpecial(); ++i) 
			if ((s_hTypes.GetAtSpecial(i).m_CardType & pType).Any() && s_htoZones.GetAtSpecial(i).m_ZoneId == ZoneId::Graveyard
				&& s_hfromZones.GetAtSpecial(i).m_ZoneId == ZoneId::Battlefield) 
				++count;

	return count;
}

int CPlayer::GetCertainTypeDiedCountNonToken(CardType pType)
{
	int count=0;

	if (s_hTypes.GetSizeSpecial())
		for (int i = 0; i < s_hTypes.GetSizeSpecial(); ++i) 
			if ((s_hTypes.GetAtSpecial(i).m_CardType & pType).Any() && !(s_hTypes.GetAtSpecial(i).m_CardType & CardType::Token).Any() && s_htoZones.GetAtSpecial(i).m_ZoneId == ZoneId::Graveyard
				&& s_hfromZones.GetAtSpecial(i).m_ZoneId == ZoneId::Battlefield) 
				++count;

	return count;
}

int CPlayer::GetCertainAntiTypeCastedCount(CardType pType)
{
	int count=0;

	if (s_hTypes.GetSizeSpecial())
		for (int i = 0; i < s_hTypes.GetSizeSpecial(); ++i) 
			if (!(s_hTypes.GetAtSpecial(i).m_CardType & pType).Any() && s_htoZones.GetAtSpecial(i).m_ZoneId == ZoneId::Stack) 
				++count;

	return count;
}
int CPlayer::GetCertainTypeEnteredBattlefieldCount(CardType pType)
{
	int count=0;

	if (s_hTypes.GetSizeSpecial())
		for (int i = 0; i < s_hTypes.GetSizeSpecial(); ++i) 
			if ((s_hTypes.GetAtSpecial(i).m_CardType & pType).Any() && s_htoZones.GetAtSpecial(i).m_ZoneId == ZoneId::Battlefield) 
				++count;

	return count;
}

int CPlayer::GetCertainAntiTypeEnteredBattlefieldCount(CardType pType)
{
	int count=0;

	if (s_hTypes.GetSizeSpecial())
		for (int i = 0; i < s_hTypes.GetSizeSpecial(); ++i) 
			if (!(s_hTypes.GetAtSpecial(i).m_CardType & pType).Any() && s_htoZones.GetAtSpecial(i).m_ZoneId == ZoneId::Stack) 
				++count;

	return count;
}

int CPlayer::AddUntapCardType(CardType cardType, CardType mask, BOOL bThisTurnOnly)
{
	return m_UntapCardType.AddCardType(cardType, mask, bThisTurnOnly ? CardTypeEntry::UntilEOT : CardTypeEntry::Temporary);
}

void CPlayer::RemoveUntapCardType(int nUniqueId)
{
	m_UntapCardType.RemoveCardType(nUniqueId);
}

int CPlayer::AddCantUntapCardType(CardType cardType, CardType mask, BOOL bThisTurnOnly)
{
	return m_CantUntapCardType.AddCardType(cardType, mask, bThisTurnOnly ? CardTypeEntry::UntilEOT : CardTypeEntry::Temporary);
}

void CPlayer::RemoveCantUntapCardType(int nUniqueId)
{
	m_CantUntapCardType.RemoveCardType(nUniqueId);
}

BOOL CPlayer::CanUntap(const CCard* pCard) const
{
	if ((m_CantUntapCardType & pCard->GetCardType()).Any())
		return FALSE;

	return (m_UntapCardType & pCard->GetCardType()).Any();
}

int CPlayer::SetCanBeAttackedBy(const CCardFilter* pCardFilter, BOOL bThisTurnOnly)
{
	return m_CanBeAttackedBy.SetPredefinedCardFilter(pCardFilter, bThisTurnOnly);
}

void CPlayer::RemoveCanBeAttackedBy(int nUniqueId)
{
	m_CanBeAttackedBy.RemovePredefinedCardFilter(nUniqueId);
}

bool CPlayer::CanBeAttackedBy(const CCreatureCard* pCreature) const
{
	// To support Ensnaring Bridge
	std::vector<int> params;
	if (GetPlayerEffect().HasPlayerEffect(PlayerEffectType::EnsnaringBridge, params))
	{
		for (size_t i = 0; i < params.size(); ++i)
			if (GET_INTEGER(pCreature->GetPower()) > reinterpret_cast<const CPlayer*>(params[i])->GetZoneById(ZoneId::Hand)->GetSize())
				return false;
	}

	return m_CanBeAttackedBy.Get()->IsCardIncluded(pCreature);
}

void CPlayer::GetState(StringArray& lines, BOOL bLibrary, BOOL bHand) const
{
/*
01234567890123456789012345678901234567890123456789012345678901234567890123456789

=============== 01234567890123456789012345678 (##, Active, Priority) Turn:## == 
|Library (##)                                                                 |
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
|Graveyard (##)                                                               |
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
|Battlefield (##) ------------------------------------------------------------|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
|Hand (##) -------------------------------------------------------------------|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
| 012345678901234567890123  012345678901234567890123  012345678901234567890123|
| 012345678901234567890123                                                    |
|Mana Pool:############                                                       |
------------------------------------------------------------------------------- 
*/
	CString strTemp;
	strTemp.Format(_T("=============== %s (%d"),
		TrimMid(GetPlayerName(), 29), 
		GetLife());
	if (m_pGame->GetActivePlayer() == this || m_pGame->GetPriorityPlayer() == this)
	{
		if (m_pGame->GetActivePlayer() == this && m_pGame->GetPriorityPlayer() == this)
			strTemp.AppendFormat(_T(", Active, Priority) "));
		else
			strTemp.AppendFormat(_T(", %s%s) "),
			(m_pGame->GetActivePlayer()   == this) ? _T("Active")   : _T(""),
			(m_pGame->GetPriorityPlayer() == this) ? _T("Priority") : _T(""));
	}
	else
		strTemp.Append(_T(") "));

	strTemp.AppendFormat(_T("%s Turn:%2d =="),
		CString(_T('='), 79 - strTemp.GetLength() - 11),
		GetPlayerTurnNumber());

	lines.push_back(strTemp);

	std::vector<ZoneId> zones;
	if (bLibrary)
		zones.push_back(ZoneId::Library);
	zones.push_back(ZoneId::Graveyard);
	zones.push_back(ZoneId::Battlefield);
	if (bHand)
		zones.push_back(ZoneId::Hand);

	bool bFound = false;

	// Show zone and card info
	for (size_t j = 0; j < zones.size(); ++j)
	{
		CZone* pZone = GetZoneById(zones[j]);

		if (pZone->GetSize())
		{
			strTemp.Format(_T("|%s (%2d) "), pZone->GetZoneName(), pZone->GetSize());
			strTemp.AppendFormat(_T("%s|"), CString(_T(' '), 79 - strTemp.GetLength() - 1));

			lines.push_back(strTemp);

			bool bLibrary = (pZone->GetZoneId() == ZoneId::Library);

			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(bLibrary ? pZone->GetSize() - k - 1 : k);

				CCreatureCard* pCreature = (pCard->GetCardType().IsCreature() ? 
					(CCreatureCard*)pCard : NULL);

				CString strCardName;

				if (bLibrary || !pCard->GetOrientation()->IsFaceDown())
				{
					if (pZone->GetZoneId() == ZoneId::Hand)
					{
						CManaConsumptionAbility* pAbility = 
							(CManaConsumptionAbility*)pCard->GetAbility(_T("Cast"));
						if (pAbility)
							strCardName.Append(pAbility->GetCost().GetManaCost().ToString() + _T(":"));
					}
					else
					{
						if (pCard->GetOrientation()->IsTapped())
							strCardName.Append(_T("(T)"));

						if (pCreature)
						{
							if (pCreature->IsAttacking())
								strCardName.Append(_T("(A)"));

							if (pCreature->IsBlocking())
								strCardName.Append(_T("(B)"));
						}
					}

					if (pCreature)
						strCardName.Append(pCreature->GetCreatureName(TRUE));
					else
						strCardName.Append(pCard->GetCardName());
				}
				else
					strCardName = _T("<Face down>");

				strCardName = ToFixedLength(strCardName, 24);

				//| 012345678901234567890123  012345678901234567890123  012345678901234567890123|

				switch (k % 3)
				{
					case 0: strTemp.Format(_T("| %s "), strCardName);	   break;
					case 1: strTemp.AppendFormat(_T(" %s "), strCardName); break;
					case 2: strTemp.AppendFormat(_T(" %s|"), strCardName); 
							lines.push_back(strTemp);
							strTemp.Empty();							   break;
				}

				if (bLibrary && k == 2)
					break;
			}

			if (!strTemp.IsEmpty())
			{
				strTemp.AppendFormat(_T("%s|"), CString(_T(' '), 78 - strTemp.GetLength()));
				lines.push_back(strTemp);
				strTemp.Empty();
			}

			bFound = true;
		}
	}

	if (GetManaPool().GetTotal())
	{
		strTemp.Format(_T("|Mana pool: %s"), GetManaPool().ToString());
		strTemp.AppendFormat(_T("%s|"), CString(_T(' '), 78 - strTemp.GetLength()));

		lines.push_back(strTemp);
	}

	if (bFound)
		lines.push_back(_T("-------------------------------------------------------------------------------"));

	//lines.push_back(_T(""));
}

//____________________________________________________________________________
//
void CPlayerFilter::GetPlayers(const CPlayer* pController, std::vector<CPlayer*>& players) const
{
	CGame* pGame     = pController->GetGame();
	int nPlayerCount = pGame->GetPlayerCount();
	for (int i = 0; i < nPlayerCount; ++i)
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);
		if (IsPlayerIncluded(pPlayer, pController))
			players.push_back(pPlayer);
	}
}
//____________________________________________________________________________
//
