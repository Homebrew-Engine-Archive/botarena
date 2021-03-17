#include "stdafx.h"
#include "CardCommander2013.h"

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
		DEFINE_CARD(CAngelOfFinalityCard);
		DEFINE_CARD(CBalefulForceCard);
		DEFINE_CARD(CBaneOfProgressCard);
		DEFINE_CARD(CDereviEmpyrialTacticianCard);
		DEFINE_CARD(CFellShepherdCard);
		DEFINE_CARD(CFromTheAshesCard);
		DEFINE_CARD(CGahijiHonoredOneCard);
		DEFINE_CARD(CHoodedHorrorCard);
		DEFINE_CARD(CNekusartheMindrazerCard);
		DEFINE_CARD(COloroAgelessAsceticCard);
		DEFINE_CARD(COphiomancerCard);
		DEFINE_CARD(CPriceOfKnowledgeCard);
		DEFINE_CARD(CPrimalVigorCard);
		DEFINE_CARD(CRestoreCard);
		DEFINE_CARD(CShattergangBrothersCard);
		DEFINE_CARD(CSpawningGroundsCard);
		DEFINE_CARD(CSuddenDemiseCard);
		DEFINE_CARD(CSydriGalvanicGeniusCard);
		DEFINE_CARD(CTemptWithDiscoveryCard);
		DEFINE_CARD(CTemptWithGloryCard);
		DEFINE_CARD(CTemptWithImmortalityCard);
		DEFINE_CARD(CTemptWithReflectionsCard);
		DEFINE_CARD(CTemptWithVengeanceCard);
		DEFINE_CARD(CTerraRavagerCard);
		DEFINE_CARD(CToxicDelugeCard);
		DEFINE_CARD(CWitchHuntCard);
	} while (false);

	return cpCard;
}
//____________________________________________________________________________
//
CBalefulForceCard::CBalefulForceCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Baleful Force"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, 
		PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CToxicDelugeCard::CToxicDelugeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Toxic Deluge"), CardType::Sorcery, nID)
{
/*
	To Do - Fix Outstanding Issue
	In action window in botarena, pay life options messages not all appearing correctly.  
	Eg {B}{B}{B},:Casts Toxic Deluge appears (parts of the string are missing) where the 
	message should be {B}{B}{B},Pay 20 life (X=20):Casts Toxic Deluge.  
	The options with the incorrect strings work when chosen.
*/
	counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT,
			Power(-0), Life(-0),
			new AnyCreatureComparer));

	cpSpell->AddPayLifeDeltaCost(Life(SpecialNumber::Any));
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
COphiomancerCard::COphiomancerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ophiomancer"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep)); // trigger all upkeep steps

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetCreateTokenOption(TRUE, _T("Snake G"), 62066, 1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COphiomancerCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COphiomancerCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool COphiomancerCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CPlayer* pController = GetController();
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));
	int nCount = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	bool bTokenCreate = false;
	if (nCount == 0)              // create snake token only if you control no snakes 
		bTokenCreate = true;
	return bTokenCreate;
}

bool COphiomancerCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));
	int nCount = m_CardFilter.CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	bool bTokenCreate = false;	
	if (nCount == 0)               // create snake token only if you control no snakes 
		bTokenCreate = true;
	return bTokenCreate;
}

//____________________________________________________________________________
//
CFellShepherdCard::CFellShepherdCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fell Shepherd"), CardType::Creature, CREATURE_TYPE(Avatar), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(8), Life(6))
{
	{
		typedef
				TTriggeredAbility< CTriggeredAbility<>, CWhenSelfDamageDealt, 
									CWhenSelfDamageDealt::PlayerEventCallback, 
									&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Hand, false, MoveType::Others, ZoneId::Graveyard));
		cpAbility->GetGlobalCardFilter().AddComparer(new CardPresentinHistoryComparer(ZoneId::Graveyard, ZoneId::Battlefield));
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(-2), Life(-2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		m_CardFilter.AddComparer(new AnyCreatureComparer);
	    m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);
		AddAbility(cpAbility.GetPointer());	
	}
}
//____________________________________________________________________________
//
CPriceOfKnowledgeCard::CPriceOfKnowledgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Price of Knowledge"), CardType::GlobalEnchantment, nID,
		_T("6") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPriceOfKnowledgeCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectPlayers(); // Affect all players	

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPriceOfKnowledgeCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInHand = GetGame()->GetActivePlayer()->GetZoneById(ZoneId::Hand);

	int nCount = CCardFilter::GetFilter(_T("cards"))->CountIncluded(pInHand->GetCardContainer());

	CLifeModifier pModifier1 = CLifeModifier(Life(-nCount), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier1.ApplyTo(GetGame()->GetActivePlayer());

	return true;
}

//____________________________________________________________________________
//
CHoodedHorrorCard::CHoodedHorrorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hooded Horror"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(4))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::HoodedHorrorEffect));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
/*
	This card, CTemptWithGloryCard uses the Tempting Offer mechanic which is
	an extension of the Punisher type cards from mainly from the Odyssey block.  
	Format of these cards
	Tempting Offer - Use effect. Each oppenent may use effect. For each opponent who does,
		use effect n times. Where n = number of opponents who chose to use effect.
	This code is derived from CDesecrationDemonCard.
*/
CTemptWithGloryCard::CTemptWithGloryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tempt with Glory"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTemptWithGloryCard::OnPunisherSelected))
	, nOpponentsPaid(0) // declaration of counter that stores how many opponents use the effect
{
	// perform the basic effect of spell (use effect)
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
			_T("5") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0)));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTemptWithGloryCard::BeforeResolution));

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

bool CTemptWithGloryCard::BeforeResolution(CAbilityAction* pAction)
{
	// perform the basic effect of spell (use effect)
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));

	pModifier.ApplyTo(GetController());

	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	nOpponentsPaid = 0;
	int pActivePlayerID;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CTemptWithGloryCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	/*
	   There is a player who is about to use effect i.e. put a +1/+1 counter on each creature they 
	   control (in the beginning, this is the active player). 
	*/
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	if (pPlayer != pController && m_CardFilter.CountIncluded(pBattlefield->GetCardContainer()) > 0)
	{
		// define the selections
		std::vector<SelectionEntry> entries; // player chooses not to use the effect
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("does not put a +1/+1 counter on each creature."));
			entries.push_back(selectionEntry);
		}
		{                                    // player chooses to use the effect
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("does put a +1/+1 counter on each creature."));
			entries.push_back(selectionEntry);
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}
/*
	Advance loops through players from current player.
*/
void CTemptWithGloryCard::Advance(int PlayerID, CPlayer* pController)
{	
	int NextPlayer         = PlayerID + 1;
	int PlayerCount        = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer(); 
	if (NextPlayer >= PlayerCount)						   
		NextPlayer -= PlayerCount;                         
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer) // apply punisher function to opponents only.
		PunisherFunction(NextPlayer, pController);
	else if (nOpponentsPaid > 0) 
	{
		/*
			performs the effect an additional n times based on the value of counter (nOpponentsPaid) that is 
			how many opponents choose to use the effect. (in 2-player game, the effect will only be run once more time)
		*/
		CCardFilter m_CardFilter_temp;
		m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
				std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +nOpponentsPaid)));

		pModifier.ApplyTo(pActivePlayer);
	}
}

void CTemptWithGloryCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected) // opponent chooses not to use the effect
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not put a +1/+1 counter on each creature."), pSelectionPlayer->GetPlayerName());
						m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);	
				return;
			}
			else		  // opponent chooses to use the effect
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does put a +1/+1 counter on each creature."), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentsPaid++;                        // keep track of how many opponents use the effect

				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.SetComparer(new AnyCreatureComparer);

				CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
					std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));

				pModifier.ApplyTo(pSelectionPlayer);
				Advance(dwContext1, (CPlayer*)dwContext2);

				return;
			}
		}
}
//____________________________________________________________________________
//
CAngelOfFinalityCard::CAngelOfFinalityCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angel of Finality"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(3), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CAngelOfFinalityCard::OnResolutionCompleted))
{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback >  TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().GetSubjectCardFilter().SetComparer(FALSE_CARD_COMPARER);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());		

		AddAbility(cpAbility.GetPointer());
}

void CAngelOfFinalityCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	pModifier.ApplyTo(target);
}

//____________________________________________________________________________
//
/*
	This card, CTemptWithReflectionsCard uses the Tempting Offer mechanic which is
	an extension of the Punisher type cards from mainly from the Odyssey block.  
	Format of these cards
	Tempting Offer - Use effect. Each oppenent may use effect. For each opponent who does,
		use effect n times. Where n = number of opponents who chose to use effect.
	This code is derived from CDesecrationDemonCard.
*/
CTemptWithReflectionsCard::CTemptWithReflectionsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tempt with Reflections"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTemptWithReflectionsCard::OnPunisherSelected))
	, nOpponentsPaid(0) // declaration of counter that stores how many opponents use the effect
{
	// perform the basic effect of spell (use effect)
	counted_ptr<CTargetSpell> cpSpell( 
			::CreateObject<CTargetSpell>(this,  AbilityType::Sorcery,
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer, FALSE));

	cpSpell->GetTargeting()->GetSubjectCardFilter().SetThisCardsControllerOnly(this);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardCopyModifier(GetGame(), this));
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTemptWithReflectionsCard::BeforeResolution));
				
	AddSpell(cpSpell.GetPointer());
}

bool CTemptWithReflectionsCard::BeforeResolution(CAbilityAction* pAction)
{
	pTargetCreature = (CCreatureCard*)pAction->GetAssociatedCard();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	nOpponentsPaid = 0;
	int pActivePlayerID;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CTemptWithReflectionsCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	/*
	   There is a player who is about to use effect i.e. choose target creature they control 
	   and put a token onto the battlefield that's a copy of that creature (in the beginning, 
	   this is the active player). 
	*/
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	if (pPlayer != pController)
	{
		// define the selections
		std::vector<SelectionEntry> entries;              // player chooses not to use the effect
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("does not put a token onto the battlefield."));
			entries.push_back(selectionEntry);
		}
		{												  // player chooses to use the effect
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("does put a %s token onto the battlefield."), pTargetCreature->GetCardName()); 
			entries.push_back(selectionEntry);
		
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}
/*
	Advance loops through players from current player.
*/
void CTemptWithReflectionsCard::Advance(int PlayerID, CPlayer* pController)
{	
	int NextPlayer         = PlayerID + 1;
	int PlayerCount        = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer(); 
	if (NextPlayer >= PlayerCount)						   
		NextPlayer -= PlayerCount;                         
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer) // apply punisher function to opponents only.
		PunisherFunction(NextPlayer, pController);
	else if (nOpponentsPaid > 0) 
	{
		/*
			performs the effect an additional n times based on the value of counter (nOpponentsPaid) that is 
			how many opponents choose to use the effect. (in 2-player game, the effect will only be run once more time)
		*/	
		for (int i = 0; i < nOpponentsPaid; i++)
		{
			CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), pTargetCreature, NULL, NULL, NULL, ZoneId::Battlefield);
			pModifier.ApplyTo(pTargetCreature);
		}
	}
}

void CTemptWithReflectionsCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)	// opponent chooses not to use the effect
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not put a token onto the battlefield."), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);			
				return;
			}
			else		   // opponent chooses to use the effect
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does put a token onto the battlefield."), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentsPaid++;                        // keep track of how many opponents use the effect
				CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), pTargetCreature, NULL, NULL, NULL, ZoneId::Battlefield);
				pModifier.ApplyTo(pTargetCreature);
				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
/*
	This card, CTemptWithVengeanceCard uses the Tempting Offer mechanic which is
	an extension of the Punisher type cards from mainly from the Odyssey block.  
	Format of these cards
	Tempting Offer - Use effect. Each oppenent may use effect. For each opponent who does,
		use effect n times. Where n = number of opponents who chose to use effect.
	This code is derived from CDesecrationDemonCard.
*/
CTemptWithVengeanceCard::CTemptWithVengeanceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tempt with Vengeance"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTemptWithVengeanceCard::OnPunisherSelected))
	, nOpponentsPaid(0) // declaration of counter that stores how many opponents use the effect
{
	// perform the basic effect of spell (use effect)
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTemptWithVengeanceCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTemptWithVengeanceCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	nToken = pAction->GetCostConfigEntry().GetExtraValue();
	CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elemental V"), 62067, nToken);
	pModifier.ApplyTo(pAction->GetController());
	nOpponentsPaid = 0;
	int pActivePlayerID;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CTemptWithVengeanceCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	/*
	   There is a player who is about to use effect i.e. Put X 1/1 red Elemental creature 
	   tokens with haste onto the battlefield. (in the beginning, this is the active player). 
	*/
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	if (pPlayer != pController)
	{
		// define the selections
		std::vector<SelectionEntry> entries;              // player chooses not to use the effect
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("does not put %d 1/1 red Elemental creature tokens onto the battlefield."), nToken);
			entries.push_back(selectionEntry);
		}
		{												  // player chooses to use the effect
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("does put %d 1/1 red Elemental creature tokens onto the battlefield."), nToken); 
			entries.push_back(selectionEntry);
		
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}
/*
	Advance loops through players from current player.
*/
void CTemptWithVengeanceCard::Advance(int PlayerID, CPlayer* pController)
{	
	int NextPlayer         = PlayerID + 1;
	int PlayerCount        = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer(); 
	if (NextPlayer >= PlayerCount)						   
		NextPlayer -= PlayerCount;                         
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer) // apply punisher function to opponents only.
		PunisherFunction(NextPlayer, pController);
	else if (nOpponentsPaid > 0) 
	{
		/*
			performs the effect an additional n times based on the value of counter (nOpponentsPaid) that is 
			how many opponents choose to use the effect. (in 2-player game, the effect will only be run once more time)
		*/	
		for (int i = 0; i < nOpponentsPaid; i++)
		{
			CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elemental V"), 62067, nToken);
			pModifier.ApplyTo(pController);
		}
	}
}

void CTemptWithVengeanceCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)	// opponent chooses not to use the effect
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not put %d 1/1 red Elemental creature tokens onto the battlefield."), 
						                  pSelectionPlayer->GetPlayerName(), nToken);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);			
				return;
			}
			else		   // opponent chooses to use the effect
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does put %d 1/1 red Elemental creature tokens onto the battlefield."), 
						                  pSelectionPlayer->GetPlayerName(), nToken);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentsPaid++;                        // keep track of how many opponents use the effect
				CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elemental V"), 62067, nToken);
				pModifier.ApplyTo(pSelectionPlayer);
				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
/*
	This card, CTemptWithImmortalityCard uses the Tempting Offer mechanic which is
	an extension of the Punisher type cards from mainly from the Odyssey block.  
	Format of these cards
	Tempting Offer - Use effect. Each oppenent may use effect. For each opponent who does,
		use effect n times. Where n = number of opponents who chose to use effect.
	This code is derived from CDesecrationDemonCard.
*/
CTemptWithImmortalityCard::CTemptWithImmortalityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tempt with Immortality"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTemptWithImmortalityCard::OnPunisherSelected))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTemptWithImmortalityCard::OnCardSelected))
	, nOpponentsPaid(0) // declaration of counter that stores how many opponents use the effect
{
	// perform the basic effect of spell (use effect)
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery, 
			_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer, 
			ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTemptWithImmortalityCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTemptWithImmortalityCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	nOpponentsPaid = 0;
	int pActivePlayerID;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CTemptWithImmortalityCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	/*
	   There is a player who is about to use effect i.e. Return a creature card from their 
	   graveyard to the battlefield. (in the beginning, this is the active player). 
	*/
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new AnyCreatureComparer);
	
	if (pPlayer != pController && m_CardFilter.CountIncluded(pGraveyard->GetCardContainer()) > 0)
	{
		// define the selections
		std::vector<SelectionEntry> entries;              // player chooses not to use the effect
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("does not return a creature card from his graveyard to the battlefield."));
			entries.push_back(selectionEntry);
		}						
		for (int i = 0; i < pGraveyard->GetSize(); ++i) // player chooses to use the effect
		{
			CCard* pCard = pGraveyard->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				SelectionEntry entry;
				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;                
				entry.strText.Format(_T("Return %s from his graveyard to the battlefield"),
				pCard->GetCardName(TRUE));
				entries.push_back(entry);
			}
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}
/*
	Advance loops through players from current player.
*/
void CTemptWithImmortalityCard::Advance(int PlayerID, CPlayer* pController)
{	
	int NextPlayer         = PlayerID + 1;
	int PlayerCount        = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer(); 
	if (NextPlayer >= PlayerCount)						   
		NextPlayer -= PlayerCount;                         
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer) // apply punisher function to opponents only.
		PunisherFunction(NextPlayer, pController);
	else if (nOpponentsPaid > 0) 
	{
		/*
			performs the effect an additional n times based on the value of counter (nOpponentsPaid) that is 
			how many opponents choose to use the effect. (in 2-player game, the effect will only be run once more time)
		*/	
		for (int i = 0; i < nOpponentsPaid; i++)
		{
			int nCreatures = 0;
		    nCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pActivePlayer->GetZoneById(ZoneId::Graveyard)->GetCardContainer());
			if (nCreatures > 0)
			{
				std::vector<SelectionEntry> entries;
				CZone* pGraveyard = pActivePlayer->GetZoneById(ZoneId::Graveyard);
				for (int j = 0; j < pGraveyard->GetSize(); ++j)
				{
					CCard* pCard = pGraveyard->GetAt(j);
					if (pCard->GetCardType().IsCreature())
					{
						SelectionEntry entry;
						entry.dwContext = (DWORD)pCard;
						entry.cpAssociatedCard = pCard;
						entry.strText.Format(_T("Return %s from his graveyard to the battlefield"),
						                     pCard->GetCardName(TRUE));
						entries.push_back(entry);
					}
				}			
				m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
			}
		}
	}
}

void CTemptWithImmortalityCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)	// opponent chooses not to use the effect
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not return a creature card from his graveyard to the battlefield."), 
						                  pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);			
				return;
			}
			else		   // opponent chooses to use the effect
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s returns %s from his graveyard onto the battlefield"), pSelectionPlayer->GetPlayerName(), 
					    pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard,   // from which zone to move
												 	  	        ZoneId::Battlefield, // move to which zone
                                                                true,                // move to owners zone
                                                                MoveType::Others,    // Movement type
                                                                pSelectionPlayer);   // player that will move the creature
				pModifier.ApplyTo(pCard);
				nOpponentsPaid++;                        // keep track of how many opponents use the effect
				Advance(dwContext1, (CPlayer*)dwContext2);

				return;
			}
		}
}

void CTemptWithImmortalityCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCreatureCard* pCreature = (CCreatureCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				if (pCreature->GetOwner() == pSelectionPlayer)
					strMessage.Format(_T("%s returns %s from his graveyard onto the battlefield"), pSelectionPlayer->GetPlayerName(), pCreature->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
			}
			pCreature->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);
			return;
		}
}
//____________________________________________________________________________
//
/*
	This card, CTemptWithDiscoveryCard uses the Tempting Offer mechanic which is
	an extension of the Punisher type cards from mainly from the Odyssey block.  
	Format of these cards
	Tempting Offer - Use effect. Each oppenent may use effect. For each opponent who does,
		use effect n times. Where n = number of opponents who chose to use effect.
	This code is derived from CDesecrationDemonCard.
*/
CTemptWithDiscoveryCard::CTemptWithDiscoveryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tempt with Discovery"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTemptWithDiscoveryCard::OnPunisherSelected))
	, nOpponentsPaid(0) // declaration of counter that stores how many opponents use the effect
{
	// perform the basic effect of spell (use effect)
	counted_ptr<CSearchLibrarySpell> cpSpell(
		::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			CCardFilter::GetFilter(_T("lands")), 
			ZoneId::Battlefield, TRUE, FALSE, FALSE));

	cpSpell->SetSearchCount(MinimumValue(1), MaximumValue(1));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTemptWithDiscoveryCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CTemptWithDiscoveryCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	nOpponentsPaid = 0;
	int pActivePlayerID;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}
	PunisherFunction(pActivePlayerID, pAction->GetController());

	return true;
}

void CTemptWithDiscoveryCard::PunisherFunction(int PlayerID, CPlayer* pController)
{
	/*
	   There is a player who is about to use effect i.e. Search your library for a land card 
	   and put it onto the battlefield.  (in the beginning, this is the active player). 
	*/
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	if (pPlayer != pController)
	{
		// define the selections
		std::vector<SelectionEntry> entries;              // player chooses not to use the effect
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("does not put a land onto the battlefield."));
			entries.push_back(selectionEntry);
		}
		{												  // player chooses to use the effect
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("does put a land onto the battlefield.")); 
			entries.push_back(selectionEntry);
		
		}
		m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}
/*
	Advance loops through players from current player.
*/
void CTemptWithDiscoveryCard::Advance(int PlayerID, CPlayer* pController)
{	
	int NextPlayer         = PlayerID + 1;
	int PlayerCount        = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer(); 
	if (NextPlayer >= PlayerCount)						   
		NextPlayer -= PlayerCount;                         
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer) // apply punisher function to opponents only.
		PunisherFunction(NextPlayer, pController);
	else if (nOpponentsPaid > 0) 
	{
		/*
			performs the effect an additional n times based on the value of counter (nOpponentsPaid) that is 
			how many opponents choose to use the effect. (in 2-player game, the effect will only be run once more time)
		*/	
		for (int i = 0; i < nOpponentsPaid; i++)
		{
			CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController,
											                        MinimumValue(0), MaximumValue(1),
																	pController, ZoneId::Library,
																	CCardFilter::GetFilter(_T("lands")),
																    ZoneId::Battlefield, TRUE, 
																	CardPlacement::Top, FALSE, TRUE);
		   pModifier.ApplyTo(pController);
		}
	}
}

void CTemptWithDiscoveryCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)	// opponent chooses not to use the effect
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does not put a land onto the battlefield."), 
						                  pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);			
				return;
			}
			else		   // opponent chooses to use the effect
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s does put a land onto the battlefield."), 
						                  pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				nOpponentsPaid++;                        // keep track of how many opponents use the effect
				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
											                            MinimumValue(0), MaximumValue(1),
																	    pSelectionPlayer, ZoneId::Library,
																	    CCardFilter::GetFilter(_T("lands")),
																        ZoneId::Battlefield, TRUE, 
																	    CardPlacement::Top, FALSE, TRUE);
				pModifier.ApplyTo(pSelectionPlayer);
				
				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CFromTheAshesCard::CFromTheAshesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("From the Ashes"), CardType::Instant, nID)
	, m_SelectionSearchOrNot(pGame, CSelectionSupport::SelectionCallback(this, &CFromTheAshesCard::OnSelectionDone))
	, m_nNonBasicLand(6) // array of all players' non basic land in play counts
	                     // max number of players = 6
{	
	// perform the basic effect of spell. (Destroy all nonbasic lands.)
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new CardTypeComparer(CardType::NonbasicLand, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFromTheAshesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CFromTheAshesCard::BeforeResolution(CAbilityAction* pAction)
{	
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	/*
	   store all players' non basic land in play counts just before sacrifice
	   is done, these are used later to determine the number of basic lands
	   each player may search for.
	*/
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nNonBasicLand[ip] = (CCardFilter::GetFilter(_T("nonbasic lands"))->CountIncluded(pInplay->GetCardContainer()));
	}
	int pActivePlayerID;
	// iterate through players until the active player's ID number is found. 
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}	
	SelectionSearchOrNotFunction(pActivePlayerID, pAction->GetController());
	return true;
}

void CFromTheAshesCard::SelectionSearchOrNotFunction(int PlayerID, CPlayer* pController)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	/*
		The selection where players decide whether to search their library or not must
		to be included so that if a player chooses not to search their library, their 
		library is not shuffled. 
	*/
	int iNonBasicLandCnt; // stores non basic land in play count for player with current ID
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pPlayer == GetGame()->GetPlayer(ip))
		{
			iNonBasicLandCnt = m_nNonBasicLand[ip];
			break;
		}	
	if (iNonBasicLandCnt > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't search for any basic lands"));
			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Search for basic lands"));
			entries.push_back(selectionEntry);
		}
		m_SelectionSearchOrNot.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pController);
	}
	else
		Advance(PlayerID, pController);
}
/*
	Advance loops through players from current player.
*/
void CFromTheAshesCard::Advance(int PlayerID, CPlayer* pController)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		SelectionSearchOrNotFunction(NextPlayer, pController);
}

void CFromTheAshesCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);
	int iNonBasicLandCnt;
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't search for any basic lands"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1, (CPlayer*)dwContext2);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s searches for basic lands"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
					if (pSelectionPlayer == GetGame()->GetPlayer(ip))
					{
						/*
						   for player that made selection (pSelectionPlayer) lookup their
						   pre sacrifice non basic land count, this determines how many
						   basic lands they may search for.
						*/
						iNonBasicLandCnt = m_nNonBasicLand[ip]; 																                                           
						break;
					}		
				CPlayerSearchModifier pModifier = CPlayerSearchModifier(pSelectionPlayer,
											                MinimumValue(0), MaximumValue(iNonBasicLandCnt),
															pSelectionPlayer, ZoneId::Library,
														    CCardFilter::GetFilter(_T("basic lands")),
															ZoneId::Battlefield, TRUE, 
															CardPlacement::Top, FALSE, FALSE);  
				Advance(dwContext1, (CPlayer*)dwContext2);
				pModifier.ApplyTo(pSelectionPlayer);
				return;
			}
		}
}
//____________________________________________________________________________
//
CSuddenDemiseCard::CSuddenDemiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sudden Demise"), CardType::Sorcery, nID)
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSuddenDemiseCard::OnColorSelected))
	, nLife(0)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
		RED_MANA_TEXT));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSuddenDemiseCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());	
}

bool CSuddenDemiseCard::BeforeResolution(CAbilityAction* pAction)
{
	nLife = pAction->GetCostConfigEntry().GetExtraValue(); // store x ie. how many extra mana player paid.

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"));

		entries.push_back(selectionEntry);
	}
	
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return true;
}

void CSuddenDemiseCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				DealDamageToCreatures(CManaPoolBase::Color::White);		
				return;
			}
			if ((int)it->dwContext == 2)
			{
				DealDamageToCreatures(CManaPoolBase::Color::Blue);
				return;
			}
			if ((int)it->dwContext == 3)
			{
				DealDamageToCreatures(CManaPoolBase::Color::Black);
				return;
			}
			if ((int)it->dwContext == 4)
			{
				DealDamageToCreatures(CManaPoolBase::Color::Red);
				return;
			}
			if ((int)it->dwContext == 5)
			{
				DealDamageToCreatures(CManaPoolBase::Color::Green);
				return;
			}
		}
}
/*
	This function is called by CSuddenDemiseCard::OnColorSelected
	Deal x damage to all players' creatures of chosen color (CreatureColor). 
*/
void CSuddenDemiseCard::DealDamageToCreatures(CManaPoolBase::Color CreatureColor)
{
	CLifeModifier pModifier = CLifeModifier(Life(-nLife), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				if (pCreature->IsColor(CreatureColor))
					pModifier.ApplyTo(pCreature);
			}
		}			
	}
}
//____________________________________________________________________________
//
CTerraRavagerCard::CTerraRavagerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Terra Ravager"), CardType::Creature, CREATURE_TYPE2(Elemental, Beast), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTerraRavagerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTerraRavagerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	/*
		IMPORTANT NOTE: For multiplayer support pDefendingPlayer needs to implemented.
		Here defending player is implemented as next player after attacking player.
	*/
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController()); // update for proper multiplayer support. 																
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount = m_CardFilter.CountIncluded(pInplay->GetCardContainer());

	CPowerModifier pModifier = CPowerModifier(Power(+nCount));
	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CWitchHuntCard::CWitchHuntCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Witch Hunt"), CardType::GlobalEnchantment, nID,
		_T("4") RED_MANA_TEXT, AbilityType::Enchantment)
{
   /*	
      To do, update code to target opponent chosen at random. 
	  Implemented in this code, controller chooses target opponent. 
	  This only supports single player where there is one opponent
	  that can be randomly choosen.
   */
	
	{ 
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::CantGainLife));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			 TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;
	    counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);

		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();

		cpAbility->GetTriggeredPlayerModifiers().Add(new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
		cpAbility->SetAbilityName(_T("gain control ability"));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBaneOfProgressCard::CBaneOfProgressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bane of Progress"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
		, nCardDestroy(0) // number of artifacts / enchantments destroyed
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
			
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBaneOfProgressCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBaneOfProgressCard::BeforeResolution(CAbilityAction* pAction)
{	
	nCardDestroy           = 0;
	/*
	   store the total of all players' non basic land in play count just before 
	   sacrifice is done, these are used later to determine how many +1/+1 counters 
	   Bane of Progress gains when it enters the battlefield.
	*/
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip) 
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nCardDestroy = (CCardFilter::GetFilter(_T("artifacts or enchantments"))->CountIncluded(pInplay->GetCardContainer())) + nCardDestroy;
	}
	CCardCounterModifier* pModifier = new CCardCounterModifier(_T("+1/+1"), +nCardDestroy);
	pModifier->ApplyTo(this);    

	return true;
}
//____________________________________________________________________________
//
CPrimalVigorCard::CPrimalVigorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Primal Vigor"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::DoubleCounters, 1, TRUE));

		cpAbility->SetAffectPlayers();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::DoubleTokens, 1, TRUE));

		cpAbility->SetAffectPlayers();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRestoreCard::CRestoreCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Restore"), CardType::Sorcery, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::NonbasicLand | CardType::BasicLand, false), 
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{

}

//____________________________________________________________________________
//
CSpawningGroundsCard::CSpawningGroundsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spawning Grounds"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CSpawningGroundsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantedCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CSpawningGroundsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(pEnchantedCard,
				_T(""),
				 _T("Beast N"), 62068,
				1));

	cpEnchantAbility->AddTapCost();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}


//_________________________________________________________________________
//
CSydriGalvanicGeniusCard::CSydriGalvanicGeniusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sydri, Galvanic Genius"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("") BLACK_MANA_TEXT WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CardTypeComparer(CardType::_ArtifactCreature, true)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink | CardKeyword::Deathtouch);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false), false));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new AnyCreatureComparer);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSydriGalvanicGeniusCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSydriGalvanicGeniusCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Artifact B"), 64058, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	CCreatureCard* pCreature = (CCreatureCard*)pCard->GetIsAlsoA();

	pCreature->SetPrintedPower(Power(nCMC));
	pCreature->SetPrintedToughness(Life(nCMC));

	return true;
}

//____________________________________________________________________________
//
CNekusartheMindrazerCard::CNekusartheMindrazerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nekusar, the Mindrazer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("2")  BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(4))
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
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardDrew > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
COloroAgelessAsceticCard::COloroAgelessAsceticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oloro, Ageless Ascetic"), CardType::_LegendaryCreature, CREATURE_TYPE2(Giant, Soldier), nID,
		_T("3")  WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT , Power(4), Life(5))

{

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COloroAgelessAsceticCard::SetTriggerContext));
		//cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRoyalAssassinAvatarCard::BeforeResolution));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable)); // lost of life, not preventable

		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
	{

		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenPlayerLifeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new COpponentModifier(GetGame(), new CLifeModifier(Life(-1), this, PreventableType::NotPreventable,
			DamageType::NotDealingDamage)));

		cpAbility->SetResolutionCost(_T("1"));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COloroAgelessAsceticCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}

}

bool COloroAgelessAsceticCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool COloroAgelessAsceticCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
											const CPlayer* pPlayer, Life nFromLife, Life nToLife) const
{
	if (nToLife > nFromLife) 
		return true;

	return false;
}
//____________________________________________________________________________
//
CDereviEmpyrialTacticianCard::CDereviEmpyrialTacticianCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Derevi, Empyrial Tactician"), CardType::_LegendaryCreature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(3))
		, m_TapSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDereviEmpyrialTacticianCard::OnTapSelected))
		, m_TargetZoneSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDereviEmpyrialTacticianCard::OnTargetZoneSelected))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDereviEmpyrialTacticianCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
    {
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
				ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenDamageDealt, 
								CWhenDamageDealt::PlayerEventCallback, 
								&CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);	
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDereviEmpyrialTacticianCard::BeforeResolution));	

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);


		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(2);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		//cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);
		//cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
			
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}
bool CDereviEmpyrialTacticianCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	
	if (pTarget->GetOrientation()->IsTapped())
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't untap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Untap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		m_TapSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 0, (DWORD)pTarget);
	}
	else
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't tap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Tap %s"), pTarget->GetCardName(TRUE));

			entries.push_back(selectionEntry);
		}
		m_TapSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController(), 1, (DWORD)pTarget);
	}
	return true;
}

void CDereviEmpyrialTacticianCard::OnTapSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCard* pCard = (CCard*)dwContext2;

				CCardOrientationModifier pModifier = CCardOrientationModifier(dwContext1);
				pModifier.ApplyTo(pCard);
				return;
			}
			return;
		}
}

bool CDereviEmpyrialTacticianCard::BeforeResolution(CDereviEmpyrialTacticianCard::TriggeredAbility::TriggeredActionType* pAction)
{
	std::vector<SelectionEntry> entries;

	if (pAction->GetController()->GetZoneById(ZoneId::Battlefield)->GetSize()>0)
	{
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("Untap target permanent"));

			entries.push_back(selectionEntry);
		}
	}
	if (m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetSize()>0 )
	{
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("tap target permanent"));

			entries.push_back(selectionEntry);
		}
	}

	m_TargetZoneSelection.AddSelectionRequest(entries, 1, 1, NULL, pAction->GetController());
	return false;
}
void CDereviEmpyrialTacticianCard::OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 1);        // With this modifier we activate SpecialTrigger for certain card (this) with certain index (1)
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				CSpecialEffectModifier pModifier = CSpecialEffectModifier((CCard*)this, 2);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}
//____________________________________________________________________________
//
CGahijiHonoredOneCard::CGahijiHonoredOneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gahiji, Honored One"), CardType::_LegendaryCreature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlocked,
							CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGahijiHonoredOneCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CGahijiHonoredOneCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;
	return (pCreature->GetAttackedPlayer() != GetController());
	//Does the creature attack defending player (and not a planeswalker)?
}
//____________________________________________________________________________
//

CRoonoftheHiddenRealmCard::CRoonoftheHiddenRealmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Roon of the Hidden Realm"), CardType::_LegendaryCreature, CREATURE_TYPE2(Rhino, Soldier), nID,
		_T("2")  GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
    , m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CRoonoftheHiddenRealmCard::OnResolutionCompleted))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("2"),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // Not this card
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

void CRoonoftheHiddenRealmCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}
//____________________________________________________________________________
//
CShattergangBrothersCard::CShattergangBrothersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shattergang Brothers"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Artificer), nID,
		_T("1")  BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetPlayerSacrificeSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerSacrificeSpell2>>(this,
				_T("2") BLACK_MANA_TEXT,
				CCardFilter::GetFilter(_T("creatures"))));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerSacrificeSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerSacrificeSpell2>>(this,
				_T("2") RED_MANA_TEXT,
				CCardFilter::GetFilter(_T("artifacts"))));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetPlayerSacrificeSpell2>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetPlayerSacrificeSpell2>>(this,
				_T("2") GREEN_MANA_TEXT,
				CCardFilter::GetFilter(_T("enchantments"))));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//

