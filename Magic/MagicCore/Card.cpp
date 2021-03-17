#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
int CCardTypeStack::AddCardType(CardType cardType, CardType mask, CardTypeEntry::Enum persistence)
{
	int nUniqueId = m_pGame ? m_pGame->GetUniqueId() : -1;

	Add(CardTypeEntry(cardType, mask, persistence, nUniqueId));

	m_CardType &= ~mask;
	m_CardType |= cardType;

	return nUniqueId;
}

void CCardTypeStack::RemoveCardType(int nUniqueId)
{
	CardType cardType;

	int nFound = -1;
	for (int i = 0; i < GetSize(); ++i)
	{
		const CardTypeEntry& entry = GetAt(i);
		if (entry.m_nUniqueId != nUniqueId)
		{
			cardType &= ~(entry.m_Mask);
			cardType |= entry.m_CardType;
		}
		else
			nFound = i;
	}

	if (nFound == -1)
	{
		return;
	}

	RemoveAt(nFound);

	m_CardType = cardType;
}

void CCardTypeStack::ResetTurnCardTypes()
{
	std::vector<CardTypeEntry> newCardTypeStack;
	CardType cardType;
	bool bFound = false;

	for (int i = 0; i < GetSize(); ++i)
	{
		const CardTypeEntry& entry = GetAt(i);
		if (entry.m_Persistence != CardTypeEntry::UntilEOT)
		{
			cardType &= ~(entry.m_Mask);
			cardType |= entry.m_CardType;
			newCardTypeStack.push_back(entry);
		}
		else
			bFound = true;
	}

	if (!bFound)
		return;

	RemoveAll();

	for (vector<CardTypeEntry>::const_iterator it = newCardTypeStack.begin(); it != newCardTypeStack.end(); ++it)
		Add(*it);

	m_CardType = cardType;
}

void CCardTypeStack::ResetTemporaryCardTypes()
{
	std::vector<CardTypeEntry> newCardTypeStack;
	CardType cardType;
	bool bFound = false;

	for (int i = 0; i < GetSize(); ++i)
	{
		const CardTypeEntry& entry = GetAt(i);
		if (entry.m_Persistence == CardTypeEntry::Permanent)
		{
			cardType &= ~(entry.m_Mask);
			cardType |= entry.m_CardType;
			newCardTypeStack.push_back(entry);
		}
		else
			bFound = true;
	}

	if (!bFound)
		return;

	RemoveAll();

	for (vector<CardTypeEntry>::const_iterator it = newCardTypeStack.begin(); it != newCardTypeStack.end(); ++it)
		Add(*it);

	m_CardType = cardType;
}

//____________________________________________________________________________
//

USHORT CCard::s_uNextInstanceID = 1;

CCard::CCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uImageID)
	: m_pGame(pGame)
	, m_apCounters(new CounterContainer(this))
	, m_bAllowUnlimitedCopies(FALSE)
	, m_cpDamageDealEventSource(::CreateObject<DamageDealEventSource>(_T("DEAL DAMAGE")))
	, m_cpBeforeDamageDealtEventSource(::CreateObject<BeforeDamageDealtEventSource>(_T("BEFORE DAMAGE DEALT")))
	, m_cpCounterMovedEventSource(::CreateObject<CounterMovedEventSource>(_T("COUNTER MOVED")))
	, m_cpSpecialTriggerEventSource(::CreateObject<SpecialTriggerEventSource>(_T("SECIAL TRIGGERS FIRE")))
	, m_cpCardCycledEventSource(::CreateObject<CardCycledEventSource>(_T("CARD CYCLED")))
	, m_cpMovedEventSource(::CreateObject<CardMovementEventSource>(_T("CARD MOVED")))
	, m_cpMovingEventSource(::CreateObject<CardMovementEventSource>(_T("CARD MOVING")))
	, m_cpCardTypeEventSource(::CreateObject<CardTypeEventSource>(_T("CARD TYPE")))
	, m_cpEnchantCount(::CreateObject<CNumberEventSource<int>>(_T("ENCHANT COUNT")))
	, m_cpOrientation(::CreateObject<COrientation>(this))
	, m_cpCardKeyword(::CreateObject<CCardKeyword>(this))
	, m_cpReplacementKeyword(::CreateObject<CReplacementKeyword>(this))
	, m_cpIsAlsoA(::CreateObject<CCountedPtrEventSource<CCard>>(_T("IS ALSO A")))
	, m_cpCardFlag(::CreateObject<CCardFlag>())
	, m_strCardName(strCardName)
	, m_strPrintedCardName(m_strCardName)
	, m_CardType(pGame, CardType::Null)
	, m_bInitialized(FALSE)
	, m_uImageID(uImageID)
	, m_pOwner(NULL)
	//, m_pPreviousController(NULL)
	//, m_pControlledBy(NULL)
	, m_nModificationCount(0)
	, m_bIntoPlayTapped(FALSE)
	, m_pZone(NULL)
	, m_pGoingToZone(NULL)
	, m_nInplayGameTurnNumber(0)
	, m_cpController(::CreateObject<CPtrEventSource1<CPlayer, CCard*>>(_T("CONTROLLER"), this))
	, m_cpISAAZoneListener(VAR_NAME(m_cpISAAZoneListener), CardMovementEventSource::Listener::EventCallback(this, &CCard::OnISAAZoneChanged))
	, m_cpISAAOrientationListener(VAR_NAME(m_cpISAAOrientationListener), COrientation::Listener::EventCallback(this, & CCard::OnISAAOrientationChanged))
	, m_cpISAACounterListener(VAR_NAME(m_cpISAACounterListener), CounterMovedEventSource::Listener::EventCallback(this, & CCard::OnAlsoCounterMoved))
	, m_cpISAOCounterListener(VAR_NAME(m_cpISAOCounterListener), CounterMovedEventSource::Listener::EventCallback(this, & CCard::OnSelfCounterMoved))
	, m_cpISAADamageListener(VAR_NAME(m_cpISAADamageListener), DamageDealEventSource::Listener::EventCallback(this, &CCard::OnISAADamageDealt))
	, m_IsAlsoOf(NULL)
	, m_nControllerTurnChanged(-1)
	, m_nZoneMoveNumber(-1)
	, m_nLastCastingExtraValue(0)
	, m_DredgeSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCard::OnDredgeSelected))
	, m_CommanderSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCard::OnCommanderSelected))
	, m_ToBattlefield(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCard::OnToBattlefieldSelected))
	, m_ToDiscard(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCard::OnToDiscardSelected))
	, m_nLastKnownp11Counters(0)
	, m_nLastKnownm11Counters(0)
	, m_nLastKnownFungusCounters(0)
	, m_LastCastingCostConfigEntry()
	, m_nTargetedNumber(0)
	, m_nDoubleCardName(FALSE)
{
	// Standard abilities

	counted_ptr<CUntapAbility> cpUntapAbility(::CreateObject<CUntapAbility>(this));
	ATLASSERT(cpUntapAbility);
	cpUntapAbility->DefineGameClassID();
	m_pUntapAbility = cpUntapAbility.GetPointer();
	AddAbility(m_pUntapAbility);

	counted_ptr<CDiscardAbility> cpDiscardAbility(::CreateObject<CDiscardAbility>(this));
	ATLASSERT(cpDiscardAbility);
	cpDiscardAbility->DefineGameClassID();
	m_pDiscardAbility = cpDiscardAbility.GetPointer();
	AddAbility(m_pDiscardAbility);

	// Setup identity

	AddCardType(cardType, CardType::_All, CardTypeEntry::Permanent);

	m_uInstanceID = s_uNextInstanceID++;

	// Initialized

	m_bInitialized = TRUE;
}

CCard::~CCard()
{
	if (m_pGame)
	{
		int nAbilityCount = m_Abilities.GetSize();
		for (int i = 0; i < nAbilityCount; ++i)
			m_pGame->OnAbilityRemovedFromCard(m_Abilities.GetAt(i).GetPointer());
	}
}

BOOL CCard::IsInplay() const							
{ 
	return m_pZone && m_pZone->GetZoneId() == ZoneId::Battlefield; 
}

BOOL CCard::IsInGraveyard() const							
{ 
	return m_pZone && m_pZone->GetZoneId() == ZoneId::Graveyard; 
}

void CCard::SetController(CPlayer* pPlayer)			
{ 
	*m_cpController = pPlayer;
}

ZoneId CCard::GetZoneId() const						
{ 
	return m_pZone ? m_pZone->GetZoneId() : ZoneId::Null; 
}

BOOL CCard::SetZone(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType)
{
	if (m_pZone == pToZone)
		return TRUE;

	CZone* pFromZone = m_pZone;

	if (pToZone && (!pFromZone || pFromZone->GetZoneId() != ZoneId::Battlefield || pToZone->GetZoneId() != ZoneId::Battlefield))
	{
		m_nZoneMoveNumber = m_pGame->GetActionNumber();
	}

	m_pZone = pToZone;

	return m_pZone == pToZone;
}

CString CCard::AppendToCardName(LPCTSTR strSuffix)
{
	m_strCardName += strSuffix;
	return m_strCardName;
}

DWORD CCard::GetConvertedManaCost() const
{
	const CPtrContainer_<CSpell>& spells(GetSpells());
	
	if (GetZoneId() == ZoneId::Stack)
		return this->GetLastCastingManaCost().GetTotal();
	else
	for (int i = 0; i < spells.GetSize(); ++i)
		{
			CSpell* pSpell = spells.GetAt(i);
			if (!pSpell->IsMainSpell())
				continue;
						
			return pSpell->GetCost().GetOriginalManaCost().GetTotal();
					
		}
	return 0;
}

DWORD CCard::GetManaCost(CManaCostBase::Color manaCost, BOOL bMax)
{
	const CPtrContainer_<CSpell>& spells(GetSpells());
	int temp = 0;
	int k = 0;

	if (GetZoneId() == ZoneId::Stack)
		temp = this->GetLastCastingManaCost().GetMana(CManaCostBase::ToPoolColor(manaCost));
	else
	for (int i = 0; i < spells.GetSize(); ++i)
		{
			CSpell* pSpell = spells.GetAt(i);
			if (!pSpell->IsMainSpell())
				continue;
			k = pSpell->GetCost().GetOriginalManaCost().GetCost(manaCost);

			if ((k > temp && bMax == TRUE) ||
				(k < temp && bMax == FALSE))
				temp = k;					
		}

	return temp;
}

void CCard::OnCardTypeChanged(CardType fromCardType)
{
#ifdef _MY_DEBUG
	/*
	if (m_pGame && !m_pGame->IsThinking())
		ATLTRACE(_T("*** Card type of %s changed from %08x to %08x ***\n"),
			m_strCardName,
			fromCardType.Get(),
			m_CardType.Get());
	*/
#endif
	
	// Special consideration for change of land types
	// TODO: implement real "IS A" function for cards, may need to consider double feature cards also

	bool bFromBasicLand = (fromCardType & (CardType::BasicLand | CardType::PseudoBasicLand)).Any();
	bool bToBasicLand = (m_CardType & (CardType::BasicLand | CardType::PseudoBasicLand)).Any();
	bool bFromNonbasicLand = (fromCardType & CardType::NonbasicLand).Any();
	bool bToNonbasicLand = (m_CardType & CardType::NonbasicLand).Any();
	bool TypeAdded = (((fromCardType & CardType::Plains).Any() && (m_CardType & CardType::Plains).Any()) ||
							((fromCardType & CardType::Forest).Any() && (m_CardType & CardType::Forest).Any()) ||
							((fromCardType & CardType::Mountain).Any() && (m_CardType & CardType::Mountain).Any()) ||
							((fromCardType & CardType::Swamp).Any() && (m_CardType & CardType::Swamp).Any()) ||
							((fromCardType & CardType::Island).Any() && (m_CardType & CardType::Island).Any()));
	
	
	if (bFromBasicLand && bToBasicLand &&
		fromCardType != m_CardType && !TypeAdded)
	{
		CManaPool::Color fromManaColor = CManaPool::Color::Colorless;
		switch ((fromCardType & (CardType::Swamp | CardType::Island | CardType::Forest | CardType::Mountain | CardType::Plains)).Get())
		{
		case CardType::Swamp:		fromManaColor = CManaPool::Color::Black; break;
		case CardType::Island:		fromManaColor = CManaPool::Color::Blue; break;
		case CardType::Forest:		fromManaColor = CManaPool::Color::Green; break;
		case CardType::Mountain:	fromManaColor = CManaPool::Color::Red; break;
		case CardType::Plains:		fromManaColor = CManaPool::Color::White; break;
		}

		CManaPool::Color toManaColor = CManaPool::Color::Colorless;
		switch ((m_CardType & (CardType::Swamp | CardType::Island | CardType::Forest | CardType::Mountain | CardType::Plains)).Get())
		{
		case CardType::Swamp:		toManaColor = CManaPool::Color::Black; break;
		case CardType::Island:		toManaColor = CManaPool::Color::Blue; break;
		case CardType::Forest:		toManaColor = CManaPool::Color::Green; break;
		case CardType::Mountain:	toManaColor = CManaPool::Color::Red; break;
		case CardType::Plains:		toManaColor = CManaPool::Color::White; break;
		}
		
		CBasicLandCard* pBasicLandCard = (CBasicLandCard*)this;

		if (pBasicLandCard->GetBasicLandManaAbility()->GetManaPool().RemoveMana(fromManaColor, 1, true))
			pBasicLandCard->GetBasicLandManaAbility()->GetManaPool().AddMana(CManaPool::Colors(toManaColor), 1);
		else
			ATLASSERT(false);		

		UpdateManaProductionHint();
	}
	else
	if (bFromBasicLand && bToNonbasicLand)
	{
		/* Current recognized non-basic land types:

			Urborg Volcano: add B or R
			Shivan Oasis: add R or G
			Salt Marsh: add U or B
			Elfhame Palace: add G or W
			Coastal Tower: add W or U

			Ebon Stronghold: add B; sac: add BB
			Ruins of Trokair: add W; sac: add WW
			Dwarven Ruins: add R; sac: add RR			
			Svyelunite Temple: add U; sac: add UU
			Havenwood Battleground: add G; sac: add GG
			Crystal Vein: add 1; sac: add 2

			Underground River: add 1; add U or B (ping self)
			Adarkar Wastes: add 1; add W or U (ping self)
			Karplusan Forest: add 1; add R or G (ping self)
			Sulfurous Springs: add 1; add B or R (ping self)
			Brushland: add 1; add G or W (ping self)
			Battlefield Forge: add 1; add R or W (ping self)
			Caves of Koilos: add 1; add W or B (ping self)
			Llanowar Wastes: add 1; add B or G (ping self)
			Shivan Reef: add 1; add U or R (ping self)
			Yavimaya Coast: add 1; add G or U (ping self)

			Urza's Mine: add 1 (or 2)
			Urza's Power Plant: add 1 (or 2)
			Urza's Tower: add 1 (or 3)

			Quicksand: add 1; creature ability

			City of Brass: add R; add B; add W; add G; add U
		*/

		CManaPool::Color fromManaColor = CManaPool::Color::Colorless;
		switch ((fromCardType & (CardType::Swamp | CardType::Island | CardType::Forest | CardType::Mountain | CardType::Plains)).Get())
		{
		case CardType::Swamp:		fromManaColor = CManaPool::Color::Black; break;
		case CardType::Island:		fromManaColor = CManaPool::Color::Blue; break;
		case CardType::Forest:		fromManaColor = CManaPool::Color::Green; break;
		case CardType::Mountain:	fromManaColor = CManaPool::Color::Red; break;
		case CardType::Plains:		fromManaColor = CManaPool::Color::White; break;
		}



		if (this->GetPrintedCardName() != _T("Dryad Arbor"))
		{
		CBasicLandCard* pBasicLandCard = (CBasicLandCard*)this;
		CManaProductionAbility* pBasicLandManaAbility = pBasicLandCard->GetBasicLandManaAbility();
		CLandAbility* pLandAbility = pBasicLandCard->GetLandAbility();
		
		if (pBasicLandManaAbility->GetManaPool().RemoveMana(fromManaColor, 1, true))
		{
			pBasicLandManaAbility->SetEnabled(FALSE);
			for (int i = 0; i < pBasicLandCard->GetAbilityCount(); ++i)
			{
				CAbility* pAbility = pBasicLandCard->GetAbility(i);
				if (pAbility != pBasicLandManaAbility && pAbility != pLandAbility)
					pAbility->SetEnabled(TRUE);
				
				CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
				if (!pEnchantmentAbility) //|| !pSpecialProtectionAbility->GetEnabled())
					continue;
				pEnchantmentAbility->StartEnchantment();
			}
		}
		}
		else
		{
		CManaProductionAbility* pBasicLandManaAbility = (CManaProductionAbility*)this->GetAbility(_T("Basic Mana"));
		CLandAbility* pLandAbility = (CLandAbility*)this->GetAbility(_T("Land Ability"));
		if (pBasicLandManaAbility->GetManaPool().RemoveMana(fromManaColor, 1, true))
			pBasicLandManaAbility->SetEnabled(FALSE);
		((CLandAbility*)this->GetAbility(_T("NonBasic Mana")))->SetEnabled(TRUE);
		}

		UpdateManaProductionHint();
	}
	else
	if (bFromNonbasicLand && bToBasicLand)
	{
		CManaPool::Color toManaColor = CManaPool::Color::Colorless;
		switch ((m_CardType & (CardType::Swamp | CardType::Island | CardType::Forest | CardType::Mountain | CardType::Plains)).Get())
		{
		case CardType::Swamp:		toManaColor = CManaPool::Color::Black; break;
		case CardType::Island:		toManaColor = CManaPool::Color::Blue; break;
		case CardType::Forest:		toManaColor = CManaPool::Color::Green; break;
		case CardType::Mountain:	toManaColor = CManaPool::Color::Red; break;
		case CardType::Plains:		toManaColor = CManaPool::Color::White; break;
		}

		if (this->GetPrintedCardName() != _T("Dryad Arbor"))
		{
		CNonbasicLandCard* pNonbasicLandCard = (CNonbasicLandCard*)this;
		CManaProductionAbility* pBasicLandManaAbility = pNonbasicLandCard->GetBasicLandManaAbility();
		CLandAbility* pLandAbility = pNonbasicLandCard->GetLandAbility();
		CUntapAbility* pUntapAbility = pNonbasicLandCard->GetUntapAbility();

		pBasicLandManaAbility->GetManaPool().AddMana(toManaColor, 1);
		pBasicLandManaAbility->SetEnabled(TRUE);
		for (int i = 0; i < pNonbasicLandCard->GetAbilityCount(); ++i)
		{
			CAbility* pAbility = pNonbasicLandCard->GetAbility(i);
			if (pAbility != pBasicLandManaAbility && pAbility != pLandAbility && pAbility != pUntapAbility)
				pAbility->SetEnabled(FALSE);


			CEnchantment* pEnchantmentAbility = dynamic_cast<CEnchantment*>(GetAbility(i));
			if (!pEnchantmentAbility) //|| !pSpecialProtectionAbility->GetEnabled())
				continue;
			pEnchantmentAbility->EndEnchantment();
		}
		}
		else
		{
			CManaProductionAbility* pBasicLandManaAbility = (CManaProductionAbility*)this->GetAbility(_T("Basic Mana"));
			CLandAbility* pLandAbility = (CLandAbility*)this->GetAbility(_T("Land Ability"));
			CUntapAbility* pUntapAbility = this->GetUntapAbility();
			pBasicLandManaAbility->GetManaPool().AddMana(toManaColor, 1);
			pBasicLandManaAbility->SetEnabled(TRUE);	
			((CLandAbility*)this->GetAbility(_T("NonBasic Mana")))->SetEnabled(FALSE);
		
		}

		UpdateManaProductionHint();
	}

	m_cpCardTypeEventSource->FireEvent(this, fromCardType, m_CardType);	
	
	if (m_pZone)
		m_pZone->OnCardTypeChanged(this, fromCardType, m_CardType);
}

CardType CCard::GetCardType() const
{ 
	/* Removed to allow Goblin Matron to be used properly. Individual ability should respect the visible card list 
	   manually.
	if (m_pGame && m_pGame->IsThinking() &&
		!m_pGame->IsCardVisible(this))
		return CardType::Null;	// 10/19/06 - added to keep invisible cards' types unknown
	*/

	return m_CardType; 
}

int CCard::AddCardType(CardType cardType, CardType mask, CardTypeEntry::Enum persistence)
{
	CardType previousCardType = m_CardType;

	int nUniqueId = m_CardType.AddCardType(cardType, mask, persistence);

	if (m_bInitialized && previousCardType != m_CardType)
		OnCardTypeChanged(previousCardType);

	return nUniqueId;
}

void CCard::RemoveCardType(int nUniqueId)
{
	CardType previousCardType = m_CardType;

	m_CardType.RemoveCardType(nUniqueId);

	if (previousCardType != m_CardType)
		OnCardTypeChanged(previousCardType);
}

void CCard::ResetTurnCardTypes()
{
	CardType previousCardType = m_CardType;

	m_CardType.ResetTurnCardTypes();

	if (previousCardType != m_CardType)
		OnCardTypeChanged(previousCardType);
}

CString CCard::GetCardName(BOOL bIncludeDetails) const
{
	if (!bIncludeDetails && !IsInplay())
		return m_strCardName;

	CString strCounters(m_apCounters->ToString());

	if (strCounters.IsEmpty())
		return m_strCardName;

	return m_strCardName + _T("[") + strCounters + _T("]");
}

CString CCard::GetSecondCardName(BOOL bIncludeDetails) const
{
	if (!bIncludeDetails && !IsInplay())
		return m_strCardName;

	CString strCounters(m_apCounters->ToString());

	if (strCounters.IsEmpty())
		return m_strCardName;

	return m_strCardName + _T("[") + strCounters + _T("]");
}

CString CCard::GetTrCardName(BOOL unused) const
{
	ATLASSERT(unused==false);//emulating GetCardName(false)
	CString out(m_strCardName);
	out.Replace(_T("â"),_T("a"));
	out.Replace(_T("à"),_T("a"));
	out.Replace(_T("á"),_T("a"));
	out.Replace(_T("Æ"),_T("AE"));
	out.Replace(_T("é"),_T("e"));
	out.Replace(_T("ú"),_T("u"));
	out.Replace(_T("û"),_T("u"));
	out.Replace(_T(":"),_T(""));
	return out;
}

int CCard::SetIsAlsoA(LPCTSTR strToken, UINT uID, CPlayer* pByPlayer)
{
	//ATLASSERT(GetZoneId() == ZoneId::Battlefield);
	if (GetZoneId() != ZoneId::Battlefield)
		return -1;

#if 0
	struct MyCrtMemBlockHeader
	{
        void* pBlockHeaderNext;
        void* pBlockHeaderPrev;
        char* szFileName;
        int nLine;
        unsigned nDataSize;
        int nBlockUse;
        long lRequest;
	};

	static bool bBreak = true;
	if (bBreak)
	{
		// This is to dump the current allocation number
		_CrtMemState memState;
		_CrtMemCheckpoint(&memState);

		if (memState.pBlockHeader && ((MyCrtMemBlockHeader*)(memState.pBlockHeader))->lRequest > 246000)
		{
			int* pDummy = (int*)malloc(sizeof(int));

			_CrtMemDumpAllObjectsSince(&memState);
			free(pDummy);

			long changeMe = 0;
			_CrtSetBreakAlloc(changeMe);
		}
	}
#endif

	// Check to see if the card is already the desired card

	CCard* pCurrentIsAlsoA = GetIsAlsoA();
	if (pCurrentIsAlsoA)
	{
		if (pCurrentIsAlsoA->GetImageID() == uID)
			return -1;
	}

	// Create the token

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, strToken, uID));

	// If this card currently 'is' another token:
	//	* Remove all the orientation listening

	m_cpISAAZoneListener->RemoveAllEventSources();
	m_cpISAAOrientationListener->RemoveAllEventSources();
	m_cpISAACounterListener->RemoveAllEventSources();
	m_cpISAOCounterListener->RemoveAllEventSources();
	m_cpISAADamageListener->RemoveAllEventSources();

	if (pCurrentIsAlsoA)
		pCurrentIsAlsoA->Destroy(pByPlayer, MoveType::Morph);
	else
		AddModification();

	// Put the token into play

	GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
	cpToken->Move(GetController()->GetZoneById(ZoneId::Battlefield), pByPlayer, MoveType::Morph);
	if (m_cpOrientation->IsTapped())
		cpToken->GetOrientation()->Tap();
	cpToken->SetIsAlsoOf(this);

	// Copy counters from source card

	CCounterCopyModifier pModifier = CCounterCopyModifier(cpToken.GetPointer());
	pModifier.ApplyTo(this);

	cpToken->SetTargetedNumber(this->GetTargetedNumber());

	// Copy the last controller changed turn number so that Natural Affinity's tokens obey the 
	// summoning sickness status of the original land card

	cpToken->m_nControllerTurnChanged = m_nControllerTurnChanged;

	// Check

	ATLASSERT(cpToken->GetZone() == GetZone());

	// Save entry into stack

	IsAlsoAEntry entry(strToken, uID, m_pGame->GetUniqueId());
	m_IsAlsoAStack.Add(entry);

	// Listen to changes

	GetZone()->GetCardMovedEventSource()->AddListener(m_cpISAAZoneListener.GetPointer());
	m_cpOrientation->AddListener(m_cpISAAOrientationListener.GetPointer());
	cpToken->GetOrientation()->AddListener(m_cpISAAOrientationListener.GetPointer());
	cpToken->GetCounterMovedEventSource()->AddListener(m_cpISAACounterListener.GetPointer());
	GetCounterMovedEventSource()->AddListener(m_cpISAOCounterListener.GetPointer());
	//cpToken->GetDealDamageEventSource()->AddListener(m_cpISAADamageListener.GetPointer());
	CGame* pGame = cpToken->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpISAADamageListener.GetPointer());

	SetIsAlsoA(cpToken.GetPointer());

	if (GetCardKeyword()->HasCardHaste() && cpToken.GetPointer()->GetCardType().IsCreature())
	{
		CCreatureKeywordModifier pModifierh;
		pModifierh.GetModifier().SetToAdd(CreatureKeyword::Haste);
		pModifierh.GetModifier().SetOneTurnOnly(TRUE);

		pModifierh.ApplyTo((CCreatureCard*)cpToken.GetPointer());
	}

	return entry.nUniqueId;
}

void CCard::RemoveIsAlsoA(int nUniqueId, CPlayer* pByPlayer)
{
	//ATLASSERT(GetZoneId() == ZoneId::Battlefield);
	if (GetZoneId() != ZoneId::Battlefield)
		return;

	int nIsAlsoAStackSize = m_IsAlsoAStack.GetSize();
	if (!nIsAlsoAStackSize)
		return;

	// If this unique id is not the one associated with the current token, just remove it from the stack

	if (m_IsAlsoAStack.GetAt(nIsAlsoAStackSize - 1).nUniqueId != nUniqueId)
	{
		for (int i = 0; i < nIsAlsoAStackSize; ++i)
			if (m_IsAlsoAStack.GetAt(i).nUniqueId == nUniqueId)
			{
				m_IsAlsoAStack.RemoveAt(i);
				return;
			}


		ATLASSERT(false);
		return;
	}

	m_cpISAAOrientationListener->RemoveAllEventSources();
	m_cpISAACounterListener->RemoveAllEventSources();
	m_cpISAOCounterListener->RemoveAllEventSources();
	m_cpISAAZoneListener->RemoveAllEventSources();
	m_cpISAADamageListener->RemoveAllEventSources();

	// If this unique id is associated with the current token:
	//	* Remove the token from play
	//	* Remove the listening
	//	* Create the last token from the stack into play if any

	CCard* pCurrentIsAlsoA = GetIsAlsoA();

	// Enchantment to graveyard should be put here

	CCardFilter AuraFilter;
	AuraFilter.SetComparer(new CardTypeComparer(CardType::_Aura, false));

	if (AuraFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer())>0)	
	{
		CCountedCardContainer Auras;

		if (AuraFilter.GetIncluded(*GetController()->GetZoneById(ZoneId::Battlefield), Auras))			
		
		for (int i = 0; i < Auras.GetSize(); ++i)
		{
			CEnchant* pEnchantAbility = NULL;
			for (int j = 0; j <  Auras.GetAt(i)->GetAbilityCount(); ++j)
			{
				pEnchantAbility = dynamic_cast<CEnchant*>(Auras.GetAt(i)->GetAbility(j));		

				if (pEnchantAbility)
				{
					if (pEnchantAbility->HasEnchantTarget())
					{
						if (pEnchantAbility->GetEnchantedOnCard() == pCurrentIsAlsoA) 
						{
							CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE);
							pModifier.ApplyTo(Auras.GetAt(i));
						}
					}
				}
			}
		}
	}
	pCurrentIsAlsoA->Destroy(pByPlayer, MoveType::Morph);

	m_IsAlsoAStack.RemoveAt(nIsAlsoAStackSize - 1);

	if (!m_IsAlsoAStack.GetSize())
	{
		RemoveModification();

		SetIsAlsoA(NULL);

		return;
	}

	IsAlsoAEntry lastEntry = m_IsAlsoAStack.GetAt(nIsAlsoAStackSize - 2);

	// Create the token

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateToken(m_pGame, 
		lastEntry.strToken, lastEntry.uID));

	GetController()->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
	cpToken->Move(GetController()->GetZoneById(ZoneId::Battlefield), pByPlayer, MoveType::Morph);
	if (m_cpOrientation->IsTapped())
		cpToken->GetOrientation()->Tap();

	CCounterCopyModifier pModifier = CCounterCopyModifier(cpToken.GetPointer());
	pModifier.ApplyTo(this);

	cpToken->SetTargetedNumber(this->GetTargetedNumber());

	// Check

	ATLASSERT(cpToken->GetZone() == GetZone());

	// Listen to changes

	GetZone()->GetCardMovedEventSource()->AddListener(m_cpISAAZoneListener.GetPointer());
	m_cpOrientation->AddListener(m_cpISAAOrientationListener.GetPointer());
	cpToken->GetOrientation()->AddListener(m_cpISAAOrientationListener.GetPointer());
	cpToken->GetCounterMovedEventSource()->AddListener(m_cpISAACounterListener.GetPointer());
	GetCounterMovedEventSource()->AddListener(m_cpISAOCounterListener.GetPointer());
	//cpToken->GetDealDamageEventSource()->AddListener(m_cpISAADamageListener.GetPointer());

	CGame* pGame = cpToken->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		pGame->GetPlayer(i)->GetDamageDealEventSource()->AddListener(m_cpISAADamageListener.GetPointer());

	SetIsAlsoA(cpToken.GetPointer());
}

void CCard::SetIsAlsoA(CCard* pCard)
{
	CCard* pPreviousIsAlsoA = GetIsAlsoA();
	if (pPreviousIsAlsoA == pCard)
		return;

	*m_cpIsAlsoA = pCard;

	if (m_pZone)
		m_pZone->OnCardIsAlsoAChanged(this, pPreviousIsAlsoA, pCard);
}

CCard* CCard::GetEnchantedOn() const
{
	CEnchant* pEnchantAbility = NULL;
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
			pEnchantAbility = dynamic_cast<CEnchant*>(GetAbility(i));
			if (pEnchantAbility)
				return pEnchantAbility->GetEnchantedOnCard();
	}

	return NULL;
}
CCard* CCard::GetEquippedOn() const
{
	CEquipAbility* pEnchantAbility = NULL;
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
			pEnchantAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
			if (pEnchantAbility)
				return pEnchantAbility->GetEquippedOnCreature();
	}

	return NULL;
}

void CCard::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	//m_nModificationCount = 0;						// No need to reset this here because who ever increased the value should be decreasing this in a listener

	// Aura card check

	if ((pToZone->GetZoneId() == ZoneId::Battlefield) && (m_CardType & CardType::_Aura).Any() && moveType != MoveType::Phasing)
	{
		CEnchant* pEnchantAbility = NULL;
		for (int i = 0; i < GetAbilityCount(); ++i)
		{
			pEnchantAbility = dynamic_cast<CEnchant*>(GetAbility(i));
			if (pEnchantAbility)
				break;
		}

		if (pEnchantAbility)
		{
			if (!pEnchantAbility->HasEnchantTarget())
			{
				// If card is currently in stack, move card to owner's graveyard. Otherwise, stay in current zone

				if (GetZone()->GetZoneId() != ZoneId::Stack)
					return;

				pToZone = GetOwner()->GetZoneById(ZoneId::Graveyard);
				moveType = MoveType::Others;
				cardPlacement = CardPlacement::Top;
			}
			else
				m_pGame->AddStatebasedHint(CGame::StatebasedHint::AuraCards);
		}
		else
			ATLASSERT(false);
	}

	CZone* pOriginalGoingToZone = pToZone;
	m_pGoingToZone = pToZone;				// Note: saving m_pGoingToZone in push and pop may not be needed
	CZone* pPreviousZone = GetZone();
	
	if (GetReplacementKeyword()->HasFlashback() && pPreviousZone->GetZoneId() == ZoneId::Stack)
	{
		m_pGoingToZone = pToZone->GetPlayer()->GetZoneById(ZoneId::Exile);
	}

	if ((moveType == MoveType::Sacrifice) && pByPlayer && (pByPlayer != GetController()))
		return;

	if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) && GetCardType().IsCreature() &&
		pToZone->GetZoneId() == ZoneId::Battlefield && (pPreviousZone->GetZoneId() == ZoneId::Library || pPreviousZone->GetZoneId() == ZoneId::Graveyard))
			return;

	//___________________________________________________________________________________________________________________________________________________________________
	//
	//                                                             Going to graveyard replacements should be here (similar to Dredge choices)
	//___________________________________________________________________________________________________________________________________________________________________
	//
	
	if (m_pGoingToZone->GetZoneId() == ZoneId::Graveyard)
	{
		//if (moveType == MoveType::Sacrifice && GetController() != pByPlayer && (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::OppCantForceYourSacrifice)))
		//{
		//	return;
		//}
		if ((GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ExileInsteadGraveyard) && !GetCardType().IsToken()) ||
			(GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ISExileInsteadGraveyard) && (GetCardType().IsInstant() || GetCardType().IsSorcery())) ||
			(GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::TokensExileInsteadGraveyard) && GetCardType().IsToken())
			)
			m_pGoingToZone = m_pGoingToZone->GetPlayer()->GetZoneById(ZoneId::Exile);

		if (pPreviousZone->GetZoneId() == ZoneId::Battlefield && (GetReplacementKeyword()->HasGraveyardToExile() ||
				GetReplacementKeyword()->HasUnearth() ||
				GetReplacementKeyword()->HasPseudoUnearth() ||
				GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PermanentsExileInsteadGraveyard)))
		{
			m_pGoingToZone = m_pGoingToZone->GetPlayer()->GetZoneById(ZoneId::Exile);
		}
	}
	
	if (GetReplacementKeyword()->HasCommanderFlag() && (m_pGoingToZone->GetZoneId() == ZoneId::Graveyard || m_pGoingToZone->GetZoneId() == ZoneId::Exile))   // Should be moved to other parts 
																																						     // for faster work
	{
		std::vector<SelectionEntry> entries;	

		if (m_pGoingToZone->GetZoneId() == ZoneId::Graveyard)
		{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1; 
			selectionEntry.strText.Format(_T("%s decides to put %s into graveyard"), GetOwner()->GetPlayerName(), GetCardName());
			entries.push_back(selectionEntry);
		}

		if (m_pGoingToZone->GetZoneId() == ZoneId::Exile)
		{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 2; 
			selectionEntry.strText.Format(_T("%s decides to exile %s"), GetOwner()->GetPlayerName(), GetCardName());
			entries.push_back(selectionEntry);
		}

		SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; 
			selectionEntry.strText.Format(_T("%s decides to put %s to command zone"), GetOwner()->GetPlayerName(), GetCardName());
			entries.push_back(selectionEntry);

		int placement = 0;

		if (cardPlacement == CardPlacement::Top) placement = 1;

		int movetype = 0;

		if (moveType == MoveType::Destroy)
		movetype = 1;
		else
		if (moveType == MoveType::NormalDiscard)
		movetype = 2;
		else
		if (moveType == MoveType::Discard)
		movetype = 3;
		else
		if (moveType == MoveType::DestroyWithoutRegeneration)
		movetype = 4;
		else
		if (moveType == MoveType::Sacrifice)
		movetype = 5;
		else
		if (moveType == MoveType::Suspend)
		movetype = 6;

		
		int legend = AddCardType(CardType::Null, CardType::Legendary);

		GetCardKeyword()->AddIndestructible(TRUE);

		m_CommanderSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetOwner(), (DWORD)pByPlayer, movetype, placement, legend);	

		return;
	}

	//___________________________________________________________________________________________________________________________________________________________________
	//
	//                                                             Going to graveyard replacements should be here (similar to Dredge choices)
	//___________________________________________________________________________________________________________________________________________________________________
	//
	//___________________________________________________________________________________________________________________________________________________________________
	//
	//							                                                           Discard replacements
	//___________________________________________________________________________________________________________________________________________________________________
	//
	if (moveType == MoveType::Discard && GetCardKeyword()->HasMadness() && can_dredge)
	{
		std::vector<SelectionEntry> entries;		

		{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; 
			selectionEntry.strText.Format(_T("%s decides to exile %s to activate madness"), GetController()->GetPlayerName(), GetCardName());
			entries.push_back(selectionEntry);
		}

		if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ExileInsteadGraveyard))
		{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1; 
			selectionEntry.strText.Format(_T("%s decides to exile %s"), GetController()->GetPlayerName(), GetCardName());
			entries.push_back(selectionEntry);
		}
		else
		{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 2; 
			selectionEntry.strText.Format(_T("%s decides to put %s into graveyard"), GetController()->GetPlayerName(), GetCardName());
			entries.push_back(selectionEntry);
		}

		m_ToDiscard.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());
	}
	//___________________________________________________________________________________________________________________________________________________________________
	//
	//							                                                           Discard replacements
	//___________________________________________________________________________________________________________________________________________________________________
	//
	else
	{
	//___________________________________________________________________________________________________________________________________________________________________
	//
	//                                                             Going to graveyard replacements should be here (similar to Dredge choices)
	//___________________________________________________________________________________________________________________________________________________________________
	//

	if (moveType == MoveType::Destroy || moveType == MoveType::DestroyWithoutRegeneration)
	{
		if (GetCardKeyword()->HasIndestructible() && !GetCardType().IsCreature())
			return;
		if (GetCardKeyword()->HasIndestructible() && GetCardType().IsCreature())
			if (((CCreatureCard*)this)->GetToughness() > Life(0))
			return;
		if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructiblePermanents))
			return;
		if ((GetCardType().IsArtifact()) && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructibleArtifacts))
			return;
		if ((GetCardType().IsLand()) && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructibleLands))
			return;
		if ((GetCardType().IsEnchantment()) && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructibleEnchantments))
			return;
	}


	//___________________________________________________________________________________________________________________________________________________________________
	//
	//                                                             Draw replacement effects 
	//___________________________________________________________________________________________________________________________________________________________________
	//
	
	if ((moveType == MoveType::Draw || moveType == MoveType::NormalDraw) && pPreviousZone->GetZoneId() == ZoneId::Library && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantDrawCards))
			return;

	if ((moveType == MoveType::Draw || moveType == MoveType::NormalDraw) && pPreviousZone->GetZoneId() == ZoneId::Library && GetController()->DredgeCards().GetSize()>0 && can_dredge == TRUE)
	{
		CCountedCardContainer dredge = GetController()->DredgeCards();
		int library_size =  GetController()->GetZoneById(ZoneId::Library)->GetSize();

		std::vector<SelectionEntry> entries;		

		{
			// Choose player
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; // player
			selectionEntry.strText.Format(_T("%s decides to draw a card"), GetController()->GetPlayerName());
			entries.push_back(selectionEntry);
		}

		for (int i = 0; i <  dredge.GetSize(); ++i)
		{
			const CCard* pCard =  dredge.GetAt(i);
			if (pCard->GetDredgeNumber() > library_size)
				continue;

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("put %d cards from the top of your library into your graveyard to dredge %s"), pCard->GetDredgeNumber(), pCard->GetCardName());

			entries.push_back(selectionEntry);
		}

		m_DredgeSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());
		//___________________________________________________________________________________________________________________________________________________________________
		//
		//                                                                  Draw replacement effects 
		//___________________________________________________________________________________________________________________________________________________________________
		//
	}
	else
	{	
		if ((GetReplacementKeyword()->HasUnearth() || GetReplacementKeyword()->HasPseudoUnearth()) && (m_pGoingToZone->GetZoneId() == ZoneId::Hand || m_pGoingToZone->GetZoneId() == ZoneId::Library))
		{
			m_pGoingToZone = m_pGoingToZone->GetPlayer()->GetZoneById(ZoneId::Exile);
		}

		//___________________________________________________________________________________________________________________________________________________________________
		//
		//                                                                  Entering battlefield replacement effects 
		//___________________________________________________________________________________________________________________________________________________________________
		//

		// Extra +1/+1 counters check
		if (m_pGoingToZone->GetZoneId() == ZoneId::Battlefield && this->GetCardType().IsCreature())
		{
			int nExtraCount = 0;
			CZone* pBattlefield = this->GetController()->GetZoneById(ZoneId::Battlefield);
			CZone* pGraveyard = this->GetController()->GetZoneById(ZoneId::Graveyard);
			CZone* pEffects = this->GetController()->GetZoneById(ZoneId::_Effects);
			
			for (int i = 0; i < pBattlefield->GetSize(); ++i)
			{
				CCard* pCard = pBattlefield->GetAt(i);

				if (pCard != this)
					if (pCard->GetPrintedCardName() == _T("Bramblewood Paragon") &&
						(this->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)this)->GetCreatureType().HasType(SingleCreatureType::Warrior)))
						nExtraCount += 1;
					else if (pCard->GetPrintedCardName() == _T("Master Biomancer"))
					{
						int nPower = GET_INTEGER(((CCreatureCard*)pCard)->GetLastKnownPower());
						if (nPower > 0)
							nExtraCount += nPower;

						CCreatureTypeModifier* pModifier = new CCreatureTypeModifier(SingleCreatureType::Mutant, true);
						pModifier->ApplyTo((CCreatureCard*)this);
					}
					else if (pCard->GetPrintedCardName() == _T("Oona's Blackguard") &&
						(this->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)this)->GetCreatureType().HasType(SingleCreatureType::Rogue)))
						nExtraCount += 1;
					else if (pCard->GetPrintedCardName() == _T("Sage of Fables") &&
						(this->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)this)->GetCreatureType().HasType(SingleCreatureType::Wizard)))
						nExtraCount += 1;
			}

			for (int i = 0; i < pGraveyard->GetSize(); ++i)
			{
				if (pGraveyard->GetAt(i)->GetPrintedCardName() == _T("Dearly Departed") &&
					(this->GetCardKeyword()->HasChangeling() || ((CCreatureCard*)this)->GetCreatureType().HasType(SingleCreatureType::Human)))
					nExtraCount += 1;
			}
			
			bool bBloodthirst = false;
			for (int ip = 0; ip < m_pGame->GetPlayerCount(); ++ip)
				if ((m_pGame->GetPlayer(ip) != GetController()) && (m_pGame->GetPlayer(ip)->GetDamageTakenThisTurn() > 0))
				{
					bBloodthirst = true;
					break;
				}

			if (bBloodthirst)
			{
				CCard* pBloodlordCard;
				for (int i = 0; i < pEffects->GetSize(); ++i)
				{
					if (pEffects->GetAt(i)->GetPrintedCardName() == _T("Bloodlord of Vaasgoth Effect"))
					{
						pBloodlordCard = ((CContainerEffectCard*)pEffects->GetAt(i))->GetCard();
						if (pBloodlordCard == this)
							nExtraCount += 3;
					}
				}
			}

			int nZameck = 0;

			if (this->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Extrap11Counter, nZameck, FALSE))
				nExtraCount += nZameck;

			if (nExtraCount > 0)
			{
				int nExtraMultiplier = 0;
				if (pToZone->GetPlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nExtraMultiplier, FALSE))
					nExtraCount <<= nExtraMultiplier;
				if (pToZone->GetPlayer()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nExtraMultiplier, FALSE))
					nExtraCount <<= nExtraMultiplier;

				CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), +nExtraCount);
				pModifier->ApplyTo(this);
			}
		}
		
		if (m_pGoingToZone->GetZoneId() == ZoneId::Battlefield && GetCardKeyword()->HasMovementReplacement() && can_dredge == TRUE)
		{
			std::vector<SelectionEntry> entries;	

			for (int i = 0; i < GetAbilityCount(); ++i)
			{
				CMovementReplacementAbility* pMovementReplacementAbility = dynamic_cast<CMovementReplacementAbility*>(GetAbility(i));
				if (!pMovementReplacementAbility)
				continue;

				if (this->GetCardType().IsCreature())
				{
					if (((CCreatureCard*)this)->GetCreatureKeyword()->Devour())
					{
						int pDevour = pMovementReplacementAbility->GetCardFilter()->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

						if (GetPrintedCardName() == _T("Shimatsu the Bloodcloaked") || GetPrintedCardName() == _T("Wood Elemental"))
						{
							SelectionEntry selectionEntry;
							selectionEntry.dwContext = 0; // no sacrifice
							selectionEntry.strText.Format(_T("sacrifice nothing to %s"), GetCardName());
							entries.push_back(selectionEntry);

							if (pDevour > 0)
							{
								int p = 0;

								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 1;
								selectionEntry.strText.Format(_T("sacrifice %s to %s"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
								entries.push_back(selectionEntry);

								for (int i = 1; i < pDevour; i++)
								{
									p = i + 1;

									SelectionEntry selectionEntry;
									selectionEntry.dwContext = p;
									selectionEntry.strText.Format(_T("sacrifice %s%d %s to %s"), p < p ? _T("up to ") : _T(""), p, pMovementReplacementAbility->GetCardFilter()->GetFilterNamePlural(), GetCardName());
									entries.push_back(selectionEntry);
								}
							}

							m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue(), (DWORD)pMovementReplacementAbility->GetCardFilter());
						}
						else
						{
							SelectionEntry selectionEntry;
							selectionEntry.dwContext = 0; // no sacrifice
							selectionEntry.strText.Format(_T("sacrifice nothing to devour ability of %s"), GetCardName());
							entries.push_back(selectionEntry);

							if (pDevour > 0)
							{
								int p = 0;

								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 1;
								selectionEntry.strText.Format(_T("sacrifice %s to devour ability of %s"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
								entries.push_back(selectionEntry);

								for (int i = 1; i < pDevour; i++)
								{
									p = i + 1;

									SelectionEntry selectionEntry;
									selectionEntry.dwContext = p;
									selectionEntry.strText.Format(_T("sacrifice %s%d %s to devour ability of %s"), p < p ? _T("up to ") : _T(""), p, pMovementReplacementAbility->GetCardFilter()->GetFilterNamePlural(), GetCardName());
									entries.push_back(selectionEntry);
								}
							}

							m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue(), (DWORD)pMovementReplacementAbility->GetCardFilter());
						}
					}
					else
					{
						if (((CCreatureCard*)this)->GetCreatureKeyword()->Amplify())
						{
							int pAmplify = pMovementReplacementAbility->GetCardFilter()->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer());

							if (GetPrintedCardName() == _T("Arsenal Thresher"))
							{
								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 0; // no reveal
								selectionEntry.strText.Format(_T("reveal nothing for %s"), GetCardName());
								entries.push_back(selectionEntry);

								if (pAmplify > 0)
								{
									int p = 0;

									SelectionEntry selectionEntry;
									selectionEntry.dwContext = 1;
									selectionEntry.strText.Format(_T("reveal %s for %s"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
									entries.push_back(selectionEntry);

									for (int i = 1; i < pAmplify; i++)
									{
										p = i + 1;

										SelectionEntry selectionEntry;
										selectionEntry.dwContext = p;
										selectionEntry.strText.Format(_T("reveal %s%d %s for %s"), p < p ? _T("up to ") : _T(""), p, pMovementReplacementAbility->GetCardFilter()->GetFilterNamePlural(), GetCardName());
										entries.push_back(selectionEntry);
									}
								}

								m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue(), (DWORD)pMovementReplacementAbility->GetCardFilter());
							}
							else
							{
								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 0; // no reveal
								selectionEntry.strText.Format(_T("reveal nothing for amplify ability of %s"), GetCardName());
								entries.push_back(selectionEntry);

								if (pAmplify > 0)
								{
									int p = 0;

									SelectionEntry selectionEntry;
									selectionEntry.dwContext = 1;
									selectionEntry.strText.Format(_T("reveal %s for amplify ability of %s"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
									entries.push_back(selectionEntry);

									for (int i = 1; i < pAmplify; i++)
									{
										p = i + 1;

										SelectionEntry selectionEntry;
										selectionEntry.dwContext = p;
										selectionEntry.strText.Format(_T("reveal %s%d %s for amplify ability of %s"), p < p ? _T("up to ") : _T(""), p, pMovementReplacementAbility->GetCardFilter()->GetFilterNamePlural(), GetCardName());
										entries.push_back(selectionEntry);
									}
								}

								m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue(), (DWORD)pMovementReplacementAbility->GetCardFilter());
							}
						}
						else
							if (((CCreatureCard*)this)->GetCreatureKeyword()->Unleash())
							{
								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 0; // don't give counter
								selectionEntry.strText.Format(_T("don't add a +1/+1 counter"));
								entries.push_back(selectionEntry);

								if (!(this->GetCardKeyword()->HasCantGetCounters()))
								{
									SelectionEntry selectionEntry;
									selectionEntry.dwContext = 1; // give a counter
									selectionEntry.strText.Format(_T("add a +1/+1 counter"));
									entries.push_back(selectionEntry);
								}

								m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue(), (DWORD)pMovementReplacementAbility->GetCardFilter());
						}
					}
					}
					else
					{
						if (GetPrintedCardName() == _T("Blood Crypt") || GetPrintedCardName() == _T("Breeding Pool") ||
							GetPrintedCardName() == _T("Godless Shrine") || GetPrintedCardName() == _T("Hallowed Fountain") ||
							GetPrintedCardName() == _T("Overgrown Tomb") || GetPrintedCardName() == _T("Sacred Foundry") ||
							GetPrintedCardName() == _T("Steam Vents") || GetPrintedCardName() == _T("Stomping Ground") ||
							GetPrintedCardName() == _T("Temple Garden") || GetPrintedCardName() == _T("Watery Grave"))
						{
							SelectionEntry selectionEntry;
							selectionEntry.dwContext = 2; // don't pay life
							selectionEntry.strText.Format(_T("put %s onto the battlefield tapped"), GetCardName());
							entries.push_back(selectionEntry);

							if (GetController()->GetLife() > Life(1) && !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
							{
								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 3; // pay life
								selectionEntry.strText.Format(_T("pay 2 life for %s"), GetCardName());
								entries.push_back(selectionEntry);
							}

							m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController());
						}
						else
						{
							if (GetPrintedCardName() == _T("Ancient Amphitheater") || GetPrintedCardName() == _T("Auntie's Hovel") ||
								GetPrintedCardName() == _T("Gilt-Leaf Palace") || GetPrintedCardName() == _T("Murmuring Bosk") ||
								GetPrintedCardName() == _T("Rustic Clachan") || GetPrintedCardName() == _T("Secluded Glen") ||
								GetPrintedCardName() == _T("Wanderwine Hub"))
							{
								SelectionEntry selectionEntry;
								selectionEntry.dwContext = 2; // don't reveal a card
								selectionEntry.strText.Format(_T("put %s onto the battlefield tapped"), GetCardName());
								entries.push_back(selectionEntry);

								if (pMovementReplacementAbility->GetCardFilter()->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
								{
									SelectionEntry selectionEntry;
									selectionEntry.dwContext = (DWORD)pMovementReplacementAbility->GetCardFilter(); // to reveal
									selectionEntry.strText.Format(_T("reveal %s for %s"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
									entries.push_back(selectionEntry);
								}

								m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue());
							}
							else
							{
								if (pMovementReplacementAbility->GetToZone() == ZoneId::Battlefield && GetPrintedCardName() == _T("Mox Diamond")) 
								{
									if (pMovementReplacementAbility->GetCardFilter()->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
									{
									SelectionEntry selectionEntry;
									selectionEntry.dwContext = (DWORD)pMovementReplacementAbility->GetCardFilter(); // to graveyard
									selectionEntry.strText.Format(_T("discard %s to put %s onto the battlefield"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
									entries.push_back(selectionEntry);
									}
									SelectionEntry selectionEntry;
									selectionEntry.dwContext = 0; // to graveyard
									selectionEntry.strText.Format(_T("put %s into the graveyard"), GetCardName());
									entries.push_back(selectionEntry);

									m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue());
								}
								else if (pMovementReplacementAbility->GetToZone() == ZoneId::Battlefield &&  pMovementReplacementAbility->GetCardFilter()->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= pMovementReplacementAbility->GetValue())
								{
									SelectionEntry selectionEntry;
									selectionEntry.dwContext = (DWORD)pMovementReplacementAbility->GetCardFilter(); // to graveyard
									selectionEntry.strText.Format(_T("sacrifice %s and put %s into the battlefield"), pMovementReplacementAbility->GetCardFilter()->GetFilterName(), GetCardName());
									entries.push_back(selectionEntry);
									
									m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue());
								}
								else if(GetPrintedCardName() == _T("Sheltered Valley") && pMovementReplacementAbility->GetCardFilter()->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) == 0)
								//If a Sheltered Valley is not already in play, this code will trigger (no sacrifices will be made). 
								{
									Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Cast, CardPlacement::NotApplicable, FALSE);
								}
								else if(GetPrintedCardName() != _T("Sheltered Valley")) //User should never get a choice to put this card in the GY
								{
									SelectionEntry selectionEntry;
									selectionEntry.dwContext = 0; // to graveyard
									selectionEntry.strText.Format(_T("put %s into the graveyard"), GetCardName());
									entries.push_back(selectionEntry);

									m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue());
								}
								else m_ToBattlefield.AddSelectionRequest(entries, 1, 1, NULL, GetController(), pMovementReplacementAbility->GetValue());
							}
						}
					}
				}
			
		//___________________________________________________________________________________________________________________________________________________________________
		//
		//                                                                  Entering battlefield replacement effects 
		//___________________________________________________________________________________________________________________________________________________________________
		//
		}
		else
		{
		//___________________________________________________________________________________________________________________________________________________________________
		//
		//                                                                  Entering battlefield replacement effects 
		//___________________________________________________________________________________________________________________________________________________________________
		//		

		BOOL bResult = m_pGoingToZone->AddCard(this, pByPlayer, moveType, cardPlacement, (m_pGoingToZone->GetZoneId() == ZoneId::Battlefield ? m_bIntoPlayTapped : FALSE));

		if (m_pGoingToZone &&
			m_pGoingToZone != pOriginalGoingToZone)
			Move(m_pGoingToZone, NULL, moveType, CardPlacement::Top);
		else
			m_pGoingToZone = NULL;

		ZoneId currentZoneId = GetZoneId();

		if (pPreviousZone && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::TopCardRevealed) && pPreviousZone == GetController()->GetZoneById(ZoneId::Library) && !m_pGame->IsThinking() 
			&& GetController()->GetZoneById(ZoneId::Library)->GetTopCard())
		{
			CString strMessage;
			strMessage.Format(_T("Top Card: %s reveals %s in %s's %s"), 
							GetController()->GetPlayerName(), GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
							GetController()->GetPlayerName(),
							GetController()->GetZoneById(ZoneId::Library)->GetZoneName());
				m_pGame->Message(
					strMessage, 
					GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
					MessageImportance::High
					);	

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
					{		
						m_pGame->GetPlayer(j)->MemorizeCard(GetController()->GetZoneById(ZoneId::Library)->GetTopCard());
					}
		}

		if (moveType != MoveType::Phasing)
		{
		if ((!pPreviousZone || pPreviousZone->GetZoneId() != ZoneId::Battlefield) &&
			currentZoneId == ZoneId::Battlefield)
			m_nInplayGameTurnNumber = m_pGame->GetGameTurnNumber();
		else
			if (currentZoneId != ZoneId::Battlefield)
				m_nInplayGameTurnNumber = -1;

		if (currentZoneId == ZoneId::Battlefield)
			m_nControllerTurnChanged = GetController()->GetPlayerTurnNumber();
		else
			m_nControllerTurnChanged = -1;
		}

		// Increase draw counts

		if (currentZoneId == ZoneId::Hand && pPreviousZone && pPreviousZone->GetZoneId() == ZoneId::Library &&
			pPreviousZone->GetPlayer() == GetController() && (moveType == MoveType::Draw || moveType == MoveType::NormalDraw))
		{
			GetController()->IncreaseTurnDrawCount();
			GetController()->AddToCardsDrawnThisTurn(this);
		}

		if (GetCardType().IsCreature() && currentZoneId == ZoneId::Battlefield && pPreviousZone && (pPreviousZone->GetZoneId() != ZoneId::Battlefield) && (moveType != MoveType::Phasing))
		{
			((CCreatureCard*)this)->ZeroCounts(false);
		}

		if ((currentZoneId == ZoneId::Graveyard || currentZoneId == ZoneId::Exile) && pPreviousZone && pPreviousZone->GetZoneId() == ZoneId::Hand &&
			pPreviousZone->GetPlayer() == GetController() && moveType == MoveType::Discard)
		{
			GetController()->IncreaseTurnDiscardCount();
		}

		if (pPreviousZone && pPreviousZone->GetZoneId() == ZoneId::Hand)
			GetController()->RemoveFromCardsDrawnThisTurn(this);

		// Check for Legendary and World cards
		if (IsInplay())
		{
			if ((GetCardType() & CardType::Legendary).Any())
				m_pGame->AddStatebasedHint(CGame::StatebasedHint::LegendaryCards);

			if ((GetCardType() & CardType::World).Any())
				m_pGame->AddStatebasedHint(CGame::StatebasedHint::WorldCards);
		}
#if 0
		if (!IsInplay() && (GetCardType() & CardType::Token).Any())
				{				
					m_pGame->AddStatebasedHint(CGame::StatebasedHint::TokenDestruction);
				}
#endif
		}
	}
	}
}
void CCard::OnDredgeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{
				// Player

				CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

				pNextDraw->Move(GetController()->GetZoneById(ZoneId::Hand), GetController(), MoveType::Draw, CardPlacement::Top, FALSE);
				//Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)

				return;
			}			
			

			CCard* pCard = (CCard*)(it->dwContext);
			int n = pCard->GetDredgeNumber();

			if (pCard->GetZone()->GetZoneId() == ZoneId::Graveyard)
			{
			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(0), MaximumValue(0), // select cards to bootom
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					NULL, // any cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
			pModifier.SetReorderInformation(
			true, 
			ZoneId::Graveyard,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Top);
			pModifier.ApplyTo(pCard->GetController());
			
			pCard->Move(GetController()->GetZoneById(ZoneId::Hand), GetController(), MoveType::Others);
			}
			else
			{
				CCard* pNextDraw = GetController()->GetZoneById(ZoneId::Library)->GetTopCard();

				pNextDraw->Move(GetController()->GetZoneById(ZoneId::Hand), GetController(), MoveType::Draw, CardPlacement::Top, FALSE);
			}
			return;
		}
}
void CCard::OnToBattlefieldSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (this->GetCardType().IsCreature())
			{
				if (((CCreatureCard*)this)->GetCreatureKeyword()->Devour())
				{
					if (!it->dwContext)
					{
						((CDevourCreatureCard*)this)->SetDevouredCount(0);
						Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
						return;
					}

					CCardFilter* pCardFilter = (CCardFilter*)dwContext2;
					int value = it->dwContext;

					if (GetPrintedCardName() == _T("Voracious Dragon"))
					{
						CCardFilter m_GoblinFilter;
						m_GoblinFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
						((CDevourCreatureCard*)this)->nDevouredGoblins = 0;

						int nPrevGoblins = m_GoblinFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

						CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
						pModifier.AddSelection(MinimumValue(value), MaximumValue(value), // select cards to bootom
							CZoneModifier::RoleType::PrimaryPlayer, // select by 
							CZoneModifier::RoleType::AllPlayers, // reveal to
							pCardFilter , // any cards
							ZoneId::Graveyard, // if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer, // select by this player
							CardPlacement::Top, // put selected cards on top
							MoveType::Sacrifice, // move type
							CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

						pModifier.ApplyTo(GetController());

						int nNextGoblins = m_GoblinFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

						if (nPrevGoblins > nNextGoblins)
							((CDevourCreatureCard*)this)->nDevouredGoblins = nPrevGoblins - nNextGoblins;
					}
					else
					{
						CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
						pModifier.AddSelection(MinimumValue(value), MaximumValue(value), // select cards to bootom
							CZoneModifier::RoleType::PrimaryPlayer, // select by 
							CZoneModifier::RoleType::AllPlayers, // reveal to
							pCardFilter , // any cards
							ZoneId::Graveyard, // if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer, // select by this player
							CardPlacement::Top, // put selected cards on top
							MoveType::Sacrifice, // move type
							CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

						pModifier.ApplyTo(GetController());
					}
					((CDevourCreatureCard*)this)->SetDevouredCount(value);
					Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
					return;
				}
				else
				{
					if (((CCreatureCard*)this)->GetCreatureKeyword()->Amplify())
					{
						if (!it->dwContext)
						{
							Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
							((CDevourCreatureCard*)this)->SetDevouredCount(0);
							return;
						}

						CCardFilter* pCardFilter = (CCardFilter*)dwContext2;
						int value = it->dwContext;

						CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
						pModifier.AddSelection(MinimumValue(value), MaximumValue(value), // select cards to bootom
							CZoneModifier::RoleType::PrimaryPlayer, // select by 
							CZoneModifier::RoleType::AllPlayers, // reveal to
							pCardFilter , // any cards
							ZoneId::Hand, // if selected, move cards to
							CZoneModifier::RoleType::PrimaryPlayer, // select by this player
							CardPlacement::Top, // put selected cards on top
							MoveType::Others, // move type
							CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

						pModifier.ApplyTo(GetController());

						((CDevourCreatureCard*)this)->SetDevouredCount(value);

						Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
						return;
					}
					else
						if (((CCreatureCard*)this)->GetCreatureKeyword()->Unleash())
						{
							if (!it->dwContext)
							{
								Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
								((CDevourCreatureCard*)this)->SetDevouredCount(0);
								return;
							}

							int value = it->dwContext;

							((CDevourCreatureCard*)this)->SetDevouredCount(value);

							Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
							return;
						}

				}
				}
				else
				{
					if (!it->dwContext)
					{
						Move(GetController()->GetZoneById(ZoneId::Graveyard), GetController(), MoveType::Others, CardPlacement::Top, FALSE);
						return;
					}
					if ((int)it->dwContext == 2)
					{
						GetOrientation()->Tap();
						Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
						return;
					}
					if ((int)it->dwContext == 3)
					{
						CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
						pModifier.ApplyTo((CPlayer*)GetController());
						Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
						return;
					}
					
					CCardFilter* pCardFilter = (CCardFilter*)(it->dwContext);
					int value = dwContext1;

					if (GetPrintedCardName() == _T("Ancient Amphitheater") || GetPrintedCardName() == _T("Auntie's Hovel") ||
						GetPrintedCardName() == _T("Gilt-Leaf Palace") || GetPrintedCardName() == _T("Murmuring Bosk") ||
						GetPrintedCardName() == _T("Rustic Clachan") || GetPrintedCardName() == _T("Secluded Glen") ||
						GetPrintedCardName() == _T("Wanderwine Hub"))
					{
						CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
						pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
								CZoneModifier::RoleType::PrimaryPlayer, // select by 
								CZoneModifier::RoleType::AllPlayers, // reveal to
								pCardFilter , // any cards
								ZoneId::Hand, // if selected, move cards to
								CZoneModifier::RoleType::PrimaryPlayer, // select by this player
								CardPlacement::Top, // put selected cards on top
								MoveType::Others, // move type
								CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

						pModifier.ApplyTo(GetController());						
						Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::NotApplicable, FALSE);
						return;
					}
					else
					{
						if (GetPrintedCardName() == _T("Mox Diamond") &&  pCardFilter->CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer()) > 0)
						{			
							CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
						pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
								CZoneModifier::RoleType::PrimaryPlayer, // select by 
								CZoneModifier::RoleType::AllPlayers, // reveal to
								pCardFilter , // any cards
								ZoneId::Graveyard, // if selected, move cards to
								CZoneModifier::RoleType::PrimaryPlayer, // select by this player
								CardPlacement::Top, // put selected cards on top
								MoveType::Discard, // move type
								CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
						
						pModifier.ApplyTo(GetController());						
						Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::Top, FALSE);	
						return;
						}
						else
						{
							if (pCardFilter->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) >= value)
							{
									CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,CZoneModifier::RoleType::PrimaryPlayer);
							pModifier.AddSelection(MinimumValue(value), MaximumValue(value), // select cards to bootom
								CZoneModifier::RoleType::PrimaryPlayer, // select by 
								CZoneModifier::RoleType::AllPlayers, // reveal to
								pCardFilter , // any cards
								ZoneId::Graveyard, // if selected, move cards to
								CZoneModifier::RoleType::PrimaryPlayer, // select by this player
								CardPlacement::Top, // put selected cards on top
								MoveType::Sacrifice, // move type
								CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
						
							pModifier.ApplyTo(GetController());

							Move(GetController()->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others, CardPlacement::Top, FALSE);	
							return;
							}
							else
							{
								Move(GetController()->GetZoneById(ZoneId::Graveyard), GetController(), MoveType::Others, CardPlacement::Top, FALSE);				
								return;
							}
						}
					}
				}
			return;
		}
}
void CCard::OnToDiscardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{
				// Madness				

				Move(GetController()->GetZoneById(ZoneId::Exile), GetController(), MoveType::Discard, CardPlacement::Top, FALSE);
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 666);
				pModifier.ApplyTo(this);

				return;
			}	

			if (it->dwContext == 1)
			{
				// Exile

				Move(GetController()->GetZoneById(ZoneId::Exile), GetController(), MoveType::Discard, CardPlacement::Top, FALSE);

				return;
			}

			if (it->dwContext == 2)
			{
				// Graveyard

				Move(GetController()->GetZoneById(ZoneId::Graveyard), GetController(), MoveType::Discard, CardPlacement::Top, FALSE);

				return;
			}
			return;
		}
}
void CCard::OnCommanderSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{

			CPlayer* pByPlayer = (CPlayer*)dwContext1;
			CardPlacement placement = CardPlacement::Bottom;
			if (dwContext3) placement = CardPlacement::Top;

			MoveType movetype;

			switch(dwContext2)
			{
			case 0: movetype = MoveType::Others;
			case 1: movetype = MoveType::Destroy;
			case 2: movetype = MoveType::NormalDiscard;
			case 3: movetype = MoveType::Discard;
			case 4: movetype = MoveType::DestroyWithoutRegeneration;
			case 5: movetype = MoveType::Sacrifice;
			case 6: movetype = MoveType::Suspend;
			}

			CZone* pToZone;

			if (!it->dwContext)
			{
				pToZone =  pSelectionPlayer->GetZoneById(ZoneId::_Effects);
			}			
			else
			if (it->dwContext == 1)
			{
				pToZone =  pSelectionPlayer->GetZoneById(ZoneId::Graveyard);
			}	
			else
				pToZone =  pSelectionPlayer->GetZoneById(ZoneId::Exile);

			RemoveCardType((int)dwContext4);

			CZone* pOriginalGoingToZone = pToZone;
			m_pGoingToZone = pToZone;				// Note: saving m_pGoingToZone in push and pop may not be needed
			CZone* pPreviousZone = GetZone();

			BOOL bResult = m_pGoingToZone->AddCard(this, pByPlayer, movetype, placement, (m_pGoingToZone->GetZoneId() == ZoneId::Battlefield ? m_bIntoPlayTapped : FALSE));

			if (m_pGoingToZone &&
				m_pGoingToZone != pOriginalGoingToZone)
				Move(m_pGoingToZone, NULL, movetype, CardPlacement::Top);
			else
				m_pGoingToZone = NULL;

			ZoneId currentZoneId = GetZoneId();

			if ((!pPreviousZone || pPreviousZone->GetZoneId() != ZoneId::Battlefield) &&
				currentZoneId == ZoneId::Battlefield)
				m_nInplayGameTurnNumber = m_pGame->GetGameTurnNumber();
			else
				if (currentZoneId != ZoneId::Battlefield)
					m_nInplayGameTurnNumber = -1;

			if (currentZoneId == ZoneId::Battlefield)
				m_nControllerTurnChanged = GetController()->GetPlayerTurnNumber();
			else
				m_nControllerTurnChanged = -1;

			// Increase draw counts

			if ((currentZoneId == ZoneId::Graveyard || currentZoneId == ZoneId::Exile) && pPreviousZone && pPreviousZone->GetZoneId() == ZoneId::Hand &&
				pPreviousZone->GetPlayer() == GetController() && movetype == MoveType::Discard)
			{
				GetController()->IncreaseTurnDiscardCount();
			}
			
#if 0
			if (!IsInplay() && (GetCardType() & CardType::Token).Any())
			{				
				m_pGame->AddStatebasedHint(CGame::StatebasedHint::TokenDestruction);
			}
#endif
		}
}		
void CCard::Destroy(const CPlayer* pByPlayer, MoveType moveType)			// Destroy tokens/dynamic cards
{
	m_nZoneMoveNumber = -1;

	// For trigger abilities sensitive to card zone changes

	Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, moveType);

	// Now remove it completely

	if (GetZoneId() == ZoneId::_Tokens)
	{
		GetZone()->RemoveCard(this); 
		m_pZone = NULL;
	}
}

BOOL CCard::IsVisibleTo(const CPlayer* pPlayer) const
{
	if (!GetZone())
		return FALSE;

	if (pPlayer->IsMemorizedCard(this))
		return TRUE;

	if (GetOrientation()->IsFaceDown())
		return FALSE;

	return GetZone()->IsVisibleTo(pPlayer);
}

int CCard::GetScore() const
{
	/*
		  In-play: +1 for how many turns since in-play

		  Ability: +1 for each

		 Untapped: +1
        
		For each mana consuming ability:
			+100 for each colorless cost
			+150 for each color cost

		For each mana producing ability:
			+50 for each colorless mana
			+75 for each color mana
	*/
		
	int nScore = 0;

	if (!GetOwner() || !m_pGame->IsThinking() ||
		m_pGame->IsCardVisible(this))
	{
		int nAbilityCount = m_Abilities.GetSize();
		nScore += nAbilityCount;

		if (GetZoneId() == ZoneId::Battlefield)
		{
			ATLASSERT(m_nInplayGameTurnNumber != -1);
			nScore += (m_pGame->GetGameTurnNumber() - m_nInplayGameTurnNumber);
		}

		for (int i = 0; i < nAbilityCount; ++i)
		{
			const CAbility* pAbility = m_Abilities.GetAt(i).GetPointer();

			if ((pAbility->GetAbilityType() & AbilityType::_ConsumeMana).Any())
			{
				const CManaConsumptionAbility* pManaConsumptionAbility = (const CManaConsumptionAbility*)pAbility;

				nScore += pManaConsumptionAbility->GetCost().GetManaCost().GetTotalColorCost() * 150;
				nScore += pManaConsumptionAbility->GetCost().GetManaCost().GetCost(CManaCost::Color::Generic) * 100;
			}

			if ((pAbility->GetAbilityType() & AbilityType::ManaSource).Any())
			{
				const CManaProductionAbility* pManaProductionAbility = (const CManaProductionAbility*)pAbility;

				nScore += pManaProductionAbility->GetManaPool().GetTotalColorMana() * 75;
				nScore += pManaProductionAbility->GetManaPool().GetMana(CManaPool::Color::Colorless) * 50;
			}
		}
	}
	else
	{
		nScore = GetOwner()->GetDeck().GetReferenceScore();
	}

	if (GetZone() && GetZone()->HasTapStance() &&
		GetOrientation()->IsUntapped())
		++nScore;

	return nScore;
}
int CCard::GetDredgeNumber() const
{
	int bFound = 0;
	for (int i = 0; i < GetAbilityCount() && !bFound; ++i)
	{
		CDredgeAbility* pDredgeAbility = dynamic_cast<CDredgeAbility*>(GetAbility(i));
		if (!pDredgeAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		const int number(pDredgeAbility->GetDredgeCount());

		if (number>0)
		{ 
			bFound = number;
		}
	}

	return bFound;
}
BOOL CCard::GetToZoneIdReplacement(ZoneId pToZone) const
{
	BOOL bFound = FALSE;
	for (int i = 0; i < GetAbilityCount() && !bFound; ++i)
	{
		CMovementReplacementAbility* pDredgeAbility = dynamic_cast<CMovementReplacementAbility*>(GetAbility(i));
		if (!pDredgeAbility)
			continue;

	    if (pDredgeAbility->GetToZone() == pToZone) return TRUE;

	}

	return bFound;
}
BOOL CCard::HasProtectionFrom(const CCard* pCard, BOOL pSpell) const
{
	if (GetZoneId() != ZoneId::Battlefield)
		return FALSE; // See ruling 502.7.Ruling.5

	CardKeyword protection = m_cpCardKeyword->GetProtection();

	if (!protection.Any()) // Should be added true to Special protection
		return FALSE; 

	CardType cardType;

	if ((protection & CardKeyword::ProtectionFromBlue).Any())
		cardType |= CardType::Blue;

	if ((protection & CardKeyword::ProtectionFromBlack).Any())
		cardType |= CardType::Black;

	if ((protection & CardKeyword::ProtectionFromWhite).Any())
		cardType |= CardType::White;

	if ((protection & CardKeyword::ProtectionFromGreen).Any())
		cardType |= CardType::Green;

	if ((protection & CardKeyword::ProtectionFromRed).Any())
		cardType |= CardType::Red;

	//--------------------------------------------------------------------------------------------
	BOOL bFound = FALSE;
	if ((protection & CardKeyword::ProtectionSpecial).Any())
	for (int i = 0; i < GetAbilityCount() && !bFound; ++i)
	{
		CSpecialProtectionAbility* pSpecialProtectionAbility = dynamic_cast<CSpecialProtectionAbility*>(GetAbility(i));
		if (!pSpecialProtectionAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		const CCardFilter* cardFilter(pSpecialProtectionAbility->GetCardFilter());
		
		if (pSpecialProtectionAbility->FromSpellsOnly() && !pSpell)
			continue;

		if (pSpecialProtectionAbility->GetCardFilter()->IsCardIncluded(pCard))
		{ 
			bFound = TRUE;
		}
	}
	//--------------------------------------------------------------------------------------------

	return ((pCard->GetCardType() & cardType).Any() || bFound);
}

void CCard::AddSpell(CSpell* pSpell)
{
	m_Spells.Add(pSpell); // No need to AddRef()

	CardType cardType;

	for (int i = 0; i < m_Spells.GetSize(); ++i)
	{
		CSpell* pSpell = m_Spells.GetAt(i);

		if (pSpell->GetCost().GetManaCost().GetCost(CManaCost::Color::Blue))
			cardType |= CardType::Blue;

		if (pSpell->GetCost().GetManaCost().GetCost(CManaCost::Color::Black))
			cardType |= CardType::Black;

		if (pSpell->GetCost().GetManaCost().GetCost(CManaCost::Color::Red))
			cardType |= CardType::Red;

		if (pSpell->GetCost().GetManaCost().GetCost(CManaCost::Color::Green))
			cardType |= CardType::Green;

		if (pSpell->GetCost().GetManaCost().GetCost(CManaCost::Color::White))
			cardType |= CardType::White;
	}

	/* Removed to allow no-cost cards (e.g. tokens) and zero-cost cards (e.g. Black Lotus)
	if (!cardType && pSpell->GetManaCost()->GetCost(CManaCost::Color::Generic))
		cardType = CardType::Artifact;
	*/

	AddCardType(cardType, CardType::_ColorMask, CardTypeEntry::Permanent);

	AddAbility(pSpell);
}

void CCard::AddAbility(CAbility* pAbility)
{  
	m_Abilities.Add(pAbility);

	if (m_pGame)
		m_pGame->OnAbilityAddedToCard(pAbility);
}

void CCard::RemoveAbility(CAbility* pAbility)
{  
	m_Abilities.Remove(pAbility);

	if (m_pGame)
		m_pGame->OnAbilityRemovedFromCard(pAbility);
}

void CCard::RemoveSpell(int i)
{  
	RemoveAbility(m_Spells.GetAt(i));
	m_Spells.RemoveAt(i);
}

void CCard::RemoveSpell(CSpell* pSpell)
{  
	m_Spells.Remove(pSpell);

	if (m_pGame)
		m_pGame->OnAbilityRemovedFromCard(pSpell);
}

void CCard::AddUpkeepCost(LPCTSTR strManaCost)
{
	counted_ptr<CUpkeepAbility> cpUpkeepAbility(::CreateObject<CUpkeepAbility>(this, strManaCost));
	AddAbility(cpUpkeepAbility.GetPointer());
}

BOOL CCard::IsColor(CManaPool::Color color) const
{
#if 1 // Changed to rely on m_CardType
	switch(color.Get())
	{
	case CManaPool::Color::Blue:		return (m_CardType & CardType::Blue).Any();
	case CManaPool::Color::Black:		return (m_CardType & CardType::Black).Any();
	case CManaPool::Color::Red:			return (m_CardType & CardType::Red).Any();
	case CManaPool::Color::Green:		return (m_CardType & CardType::Green).Any();
	case CManaPool::Color::White:		return (m_CardType & CardType::White).Any();
	case CManaPool::Color::Colorless:	return (m_CardType & CardType::Artifact).Any();
	}

	ATLASSERT(false);

	return FALSE;
#else
	/*
	CSpell* pSpell = GetSpell();
	if (!pSpell)
		return FALSE;

	CManaCost* pManaCost = pSpell->GetManaCost();
	if (!pManaCost)
		return FALSE;

	return pManaCost->GetCost(color) > 0;
	*/
#endif
}

SourceColor CCard::GetSourceColor() const
{
	SourceColor sourceColor;

	if ((m_CardType & CardType::Blue).Any())
		sourceColor |= SourceColor::BlueSource;

	if ((m_CardType & CardType::Black).Any())
		sourceColor |= SourceColor::BlackSource;		

	if ((m_CardType & CardType::Red).Any())
		sourceColor |= SourceColor::RedSource;

	if ((m_CardType & CardType::Green).Any())
		sourceColor |= SourceColor::GreenSource;

	if ((m_CardType & CardType::White).Any())
		sourceColor |= SourceColor::WhiteSource;

	if (sourceColor == SourceColor::Null)
		sourceColor = SourceColor::ColorlessSource;

	return sourceColor;
}

void CCard::AddModification()
{
	++m_nModificationCount;
}

void CCard::RemoveModification()
{
	ATLASSERT(m_nModificationCount > 0);
	--m_nModificationCount;
}

void CCard::AddEnchant()
{
	int nPreviousEnchantCount = *m_cpEnchantCount;

	(*m_cpEnchantCount) += 1;

	if (m_pZone)
		m_pZone->OnCardEnchantCountChanged(this, nPreviousEnchantCount, nPreviousEnchantCount + 1);
}

void CCard::RemoveEnchant()
{
	int nPreviousEnchantCount = *m_cpEnchantCount;

	ATLASSERT(*m_cpEnchantCount > 0);

	if (*m_cpEnchantCount > 0)
	{
		(*m_cpEnchantCount) -= 1;

		if (m_pZone)
			m_pZone->OnCardEnchantCountChanged(this, nPreviousEnchantCount, nPreviousEnchantCount - 1);
	}
}

void CCard::OnDealDamage(CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	m_cpDamageDealEventSource->FireEvent(this, pToPlayer, pToCreature, pToPlaneswalker, damage);

	CPlayer* pController = GetController();
	if (pController)
		pController->GetDamageDealEventSource()->FireEvent(this, pToPlayer, pToCreature, pToPlaneswalker, damage);
}
void CCard::BeforeDealDamage(CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage, int effect_index)
{
	m_cpBeforeDamageDealtEventSource->FireEvent(this, pToPlayer, pToCreature, pToPlaneswalker, damage, effect_index);

	CPlayer* pController = GetController();
	if (pController)
		pController->GetBeforeDamageDealtEventSource()->FireEvent(this, pToPlayer, pToCreature, pToPlaneswalker, damage, effect_index);
}
void CCard::CounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	m_cpCounterMovedEventSource->FireEvent(this, name, old, n_value);

	CPlayer* pController = GetController();
	if (pController)
		pController->GetCounterMovedEventSource()->FireEvent(this, name, old, n_value);
}
void CCard::SpecialTrigger(CCard* pCard, int n_value)
{
	m_cpSpecialTriggerEventSource->FireEvent(this, n_value);

	CPlayer* pController = GetController();
	if (pController)
		pController->GetSpecialTriggerEventSource()->FireEvent(this, n_value);
}
void CCard::CardCycled(CCard* pFromCard, CPlayer* byPlayer)
{
	m_cpCardCycledEventSource->FireEvent(this, byPlayer);

	CPlayer* pController = GetController();
	if (pController)
		pController->GetCardCycledEventSource()->FireEvent(this, byPlayer);
}
void CCard::OnISAAZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone ||
		((pCard != this) && (pCard != m_cpIsAlsoA->GetPointer())))
		return;

	ATLASSERT(pFromZone != pToZone);

	if (pFromZone->GetZoneId() != ZoneId::Battlefield)
		return;	// Let OnSetIsAlsoA() to handle

	// Have to consider control spell situations

	if (pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		m_cpISAAZoneListener->RemoveAllEventSources();

		if (pCard == this)
		{
			// Move the Is-also-a token

			m_cpIsAlsoA->GetPointer()->Move(pToZone, pByPlayer, MoveType::Morph);
		}
		else
		{
			// Move this card also

			Move(pToZone, pByPlayer, MoveType::Others);
		}

		GetZone()->GetCardMovedEventSource()->AddListener(m_cpISAAZoneListener.GetPointer());

		return;
	}

	m_IsAlsoAStack.RemoveAll();
	m_cpISAAOrientationListener->RemoveAllEventSources();
	m_cpISAACounterListener->RemoveAllEventSources();
	m_cpISAOCounterListener->RemoveAllEventSources();
	m_cpISAAZoneListener->RemoveAllEventSources();
	m_cpISAADamageListener->RemoveAllEventSources();


	if (pCard == this)
	{
		// Remove the token

		CCard* pIsAlsoA = m_cpIsAlsoA->GetPointer();
		pIsAlsoA->Destroy(pByPlayer, MoveType::Morph);

		*m_cpIsAlsoA = counted_ptr<CCard>();
	}
	else
	{
		*m_cpIsAlsoA = counted_ptr<CCard>();

		// Move this card

		Move(pToZone, pByPlayer, moveType);
	}
}

void CCard::OnISAAOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation)
{	
	CCard* pCard = pOrientation->GetCard();

	if (pCard->GetZoneId() != ZoneId::Battlefield)
		return;

	m_cpISAAOrientationListener->RemoveAllEventSources();	// Clear listener to prevent re-entrant
	CCard* pIsAlsoA = m_cpIsAlsoA->GetPointer(); // save previous pointer to card

	ATLASSERT(pIsAlsoA);
	if (!pIsAlsoA)
		return;

	if ((fromOrientation & Orientation::Untap).Any() && (toOrientation & Orientation::Tap).Any())
	{
		// Became tapped

		if (pCard == this)
		{
			// Tap the is-also-a token also

			ATLASSERT(m_cpIsAlsoA->GetPointer()->GetOrientation()->IsUntapped());

			m_cpIsAlsoA->GetPointer()->GetOrientation()->Tap();
		}
		else
		{
			// Tap this card too

			ATLASSERT(GetOrientation()->IsUntapped());

			GetOrientation()->Tap();
		}
	}
	else
		if ((fromOrientation & Orientation::Tap).Any() && (toOrientation & Orientation::Untap).Any())
	{
		// Became untapped

		if (pCard == this)
		{
			// Tap the is-also-a token also

			ATLASSERT(m_cpIsAlsoA->GetPointer()->GetOrientation()->IsTapped());

			m_cpIsAlsoA->GetPointer()->GetOrientation()->Untap();
		}
		else
		{
			// Tap this card too

			ATLASSERT(GetOrientation()->IsTapped());

			GetOrientation()->Untap();
		}
	}

	if (pIsAlsoA == m_cpIsAlsoA->GetPointer() && m_cpIsAlsoA->GetPointer()->GetZone()->GetZoneId() == ZoneId::Battlefield)
	{
		m_cpOrientation->AddListener(m_cpISAAOrientationListener.GetPointer());
		m_cpIsAlsoA->GetPointer()->GetOrientation()->AddListener(m_cpISAAOrientationListener.GetPointer());
	}
}
void CCard::OnISAADamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage)
{
	CCard* pIsAlsoA = m_cpIsAlsoA->GetPointer();

	if (GetCardType().IsPlaneswalker() &&  pToCreature && pIsAlsoA->GetCardName() == pToCreature->GetCardName())
	{		
		CPlaneswalkerCard* pWalker = (CPlaneswalkerCard*)this;
		
		if (((pIsAlsoA->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventDamagetoGideon) && pWalker->GetPrintedCardName() == "Gideon Jura") ||
			(pIsAlsoA->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventDamagetoGideon2) && pWalker->GetPrintedCardName() == "Gideon, Champion of Justice"))
			&& damage.m_Preventable == PreventableType::Preventable)
			return;
		else
		{
			CCreatureCard* pCreature = (CCreatureCard*)pIsAlsoA;
			if (!pCreature->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllDamageToPWalkers) ||
												pCreature->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage) || damage.m_Preventable != PreventableType::Preventable)			
			{

				if (damage.m_pSourceCard->GetCardKeyword()->HasLifelink())
				{
					Damage lifelink_damage;
					lifelink_damage.m_nLifeDelta = Life(-damage.m_nLifeDelta);
					lifelink_damage.m_Preventable = PreventableType::NotPreventable;
					lifelink_damage.m_DamageType = DamageType::NotDealingDamage;
					lifelink_damage.m_pSourceCard = damage.m_pSourceCard;
					damage.m_pSourceCard->GetController()->ChangeLife(lifelink_damage);
				}

				if ((damage.m_DamageType & DamageType::CombatDamage).Any())
					damage.m_pSourceCard->GetCardFlag()->AddHasDealtCombatDamage();
				if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
					damage.m_pSourceCard->GetCardFlag()->AddHasDealtNonCombatDamage();

				Counter* pCounter = pWalker->GetLoyaltyCounter();
				pCounter->DecreaseCount(-GET_INTEGER(damage.m_nLifeDelta));			

				m_pGame->AddStatebasedHint(CGame::StatebasedHint::PlaneswalkerCards);
			}
		}
	}
}
void CCard::OnSelfCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (m_cpIsAlsoA->GetPointer() && pFromCard == this &&  m_cpIsAlsoA->GetPointer()->GetCounterContainer()->GetCounter(name)->GetCount() != GetCounterContainer()->GetCounter(name)->GetCount())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(name, n_value, TRUE);
		pModifier.SetDoubling(false);
		pModifier.ApplyTo(m_cpIsAlsoA->GetPointer());
	}
}
void CCard::OnAlsoCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value)
{
	if (pFromCard == m_cpIsAlsoA->GetPointer() && m_cpIsAlsoA->GetPointer()->GetCounterContainer()->GetCounter(name)->GetCount() != GetCounterContainer()->GetCounter(name)->GetCount())
	{
		CCardCounterModifier pModifier = CCardCounterModifier(name, n_value, TRUE);
		pModifier.SetDoubling(false);
		pModifier.ApplyTo(this);
	}
}

void CCard::ResetTurnProperties()
{
	GetCardKeyword()->TurnReset();
	GetReplacementKeyword()->TurnReset();
	GetCardFlag()->TurnReset();
	ResetTurnCardTypes();
	m_nTargetedNumber = 0;
}

void CCard::ResetTurnPropertiesNoFlag()
{
	GetCardKeyword()->TurnReset();
	GetReplacementKeyword()->TurnReset();
	//GetCardFlag()->TurnReset();
	ResetTurnCardTypes();
	m_nTargetedNumber = 0;
}

void CCard::ResetProperties()
{
	m_CardType.ResetTemporaryCardTypes();
}

void CCard::CControlStack::AddControl(CPlayer* pPreviousController, const CCard* pControllingCard)
{
	if (pPreviousController)
	{
		std::pair<CPlayer*, const CCard*> entry;
		entry.first = pPreviousController;
		entry.second = pControllingCard;

		Add(entry);
	}
}

// Removes control effect(oldest one if more than one exists) of the card from stack
// Returns previous controller if last control on stack
// Otherwise returns NULL
CPlayer* CCard::CControlStack::RemoveControl(const CCard* pControllingCard)
{
	int nIndex = FindCardIndex(pControllingCard);
	CPlayer* pPreviousController = NULL;

	if (nIndex != -1) // Found something to remove
		pPreviousController = RemoveControlAt(nIndex);

	return pPreviousController;
}

// Returns true if this is the last control on stack
// Use when the control card itself changes controller
// Used only in CControlEnchant class
BOOL CCard::CControlStack::UpdateControl(CPlayer* pNewController, const CCard* pControllingCard)
{
	int nIndex = FindCardIndex(pControllingCard);
	BOOL IsLast = true;

	if (nIndex == -1) // Nothing to update
		IsLast = false;
	else if (nIndex != GetSize() - 1) // Update control entry that comes after this controlling card
	{
		at(nIndex + 1).first = pNewController;
		IsLast = false;
	}

	return IsLast;
}

// Returns true if the card has a control entry in the stack
bool CCard::CControlStack::HasControl(const CCard* pControllingCard) const
{
	return FindCardIndex(pControllingCard) != -1;
}

// Returns index of instance ID
// Returns -1 if instance ID is not found
int CCard::CControlStack::FindCardIndex(const CCard* pControllingCard) const
{
	if (pControllingCard) // Control effects without controlling cards are permanent, Ref: Jinxed Idol
		for (size_type i = 0; i < size(); ++i)
			if (GetAt(i).second == pControllingCard)
				return i;

	return -1;
}

// Removes control at index
// Returns previous controller if it is the last entry
// Returns NULL otherwise
CPlayer* CCard::CControlStack::RemoveControlAt(int nIndex)
{
	CPlayer* pPreviousController = GetAt(nIndex).first;

	if (nIndex != GetSize() - 1) // Update next control entry on stack before removing this one
	{
		at(nIndex + 1).first = pPreviousController;
		pPreviousController = NULL;
	}

	RemoveAt(nIndex);
	return pPreviousController;
}
