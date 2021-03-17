#include "stdafx.h"
#include "CardDominiasVault.h"

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

		DEFINE_CARD(CBlackerLotusCard);
		DEFINE_CARD(CDrenchTheSoilInTheirBloodCard);
		DEFINE_CARD(CFormOfTheSquirrelCard);
		DEFINE_CARD(CGemBazaarCard);
		DEFINE_CARD(CIncomingCard);
		DEFINE_CARD(CJohnnyComboPlayerCard);
		DEFINE_CARD(CManaCryptCard);
		DEFINE_CARD(CPaperTigerCard);
		DEFINE_CARD(CPerhapsYouveMetMyCohortCard);
		DEFINE_CARD(CRockLobsterCard);
		DEFINE_CARD(CShichifukujinDragonCard);
		DEFINE_CARD(CScissorsLizardCard);
		DEFINE_CARD(CUktabiKongCard);
		DEFINE_CARD(CWhoWhatWhenWhereWhyCard);
		DEFINE_CARD(CWindseekerCentaurCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CWindseekerCentaurCard::CWindseekerCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Windseeker Centaur"), CardType::Creature, CREATURE_TYPE(Centaur), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CJohnnyComboPlayerCard::CJohnnyComboPlayerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Johnny, Combo Player"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Gamer), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("4"),
			CCardFilter::GetFilter(_T("cards")), 
			ZoneId::Hand, TRUE, TRUE, FALSE));

	cpAbility->SetRevealCards(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUktabiKongCard::CUktabiKongCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Uktabi Kong"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								   CWhenSelfInplay::EventCallback,
								   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Artifact, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ape), false));

		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Ape C"), 2849,
				1));

		cpAbility->GetCost().AddTapCardCost(2, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPaperTigerCard::CPaperTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Paper Tiger"), CardType::_ArtifactCreature, CREATURE_TYPE(Null), nID, //originally had no creature type
		_T("4"), Power(4), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardNameComparer(_T("Rock Lobster")),
			Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRockLobsterCard::CRockLobsterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rock Lobster"), CardType::_ArtifactCreature, CREATURE_TYPE(Null), nID, //originally had no creature type
		_T("4"), Power(4), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardNameComparer(_T("Scissors Lizard")),
			Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScissorsLizardCard::CScissorsLizardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scissors Lizard"), CardType::_ArtifactCreature, CREATURE_TYPE(Null), nID, //originally had no creature type
		_T("4"), Power(4), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardNameComparer(_T("Paper Tiger")),
			Power(+0), Life(+0), CreatureKeyword::CantAttack | CreatureKeyword::CantBlock));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlackerLotusCard::CBlackerLotusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Blacker Lotus"), CardType::Artifact, nID,
		_T("0"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFormOfTheSquirrelCard::CFormOfTheSquirrelCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Form of the Squirrel"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)

	, m_CardFilter(FALSE_CARD_COMPARER)
{
	{
		//As Form of the Squirrel comes into play, put a 1/1 green Squirrel creature token into play. (Token: You lose the game when it leaves play.)
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Squirrel B"), 2769, 1);
		//cpAbility->SetCreateTokenOption(TRUE, _T("Squirrel"), TOKEN_ID_BY_NAME, 1); //flag it and when it leaves the battlefield lose the game?

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Creatures can't attack you.
		counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
			::CreateObject<CCanBeAttackedByEnchantment>(this,
				&m_CardFilter));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//You can't be the target of spells or abilities.
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantBeTargeted));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//You can't play spells.
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantPlaySpells,
				(int)CCardFilter::GetFilter(_T("cards"))));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWhoWhatWhenWhereWhyCard::CWhoWhatWhenWhereWhyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Who/What/When/Where/Why"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(0), PreventableType::NotPreventable)
{
	//Who (above): Target player gains X life.
	m_pTargetChgLifeSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgLifeSpell->SetExtraActionValueVector(ContextValue(1));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::LifeGain);

	m_pTargetChgLifeSpell->SetAbilityText(_T("WHO: Target player gains X life. Casts"));

	{
		//What: Destroy target artifact.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("WHAT: Destroy target artifact. Casts"));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//When: Counter target creature spell.
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				_T("2") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->SetAbilityText(_T("WHEN: Counter target creature spell. Casts"));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Where: Destroy target land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("3") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("WHERE: Destroy target land. Casts"));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Why: Destroy target enchantment.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->SetAbilityText(_T("WHY: Destroy target enchantment. Casts"));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CIncomingCard::CIncomingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Incoming!"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment | CardType::_Land, false));

	counted_ptr<CGlobalSearchLibrarySpell> cpSpell(
		::CreateObject<CGlobalSearchLibrarySpell>(this, AbilityType::Sorcery,					
			_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			&m_CardFilter,
			0, SpecialNumber::Any,
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CManaCryptCard::CManaCryptCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mana Crypt"), CardType::Artifact, nID,
		_T(""), AbilityType::Artifact)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CManaCryptCard::OnFlipSelected))
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
		ATLASSERT(cpAbility);

		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	
		cpAbility->AddAbilityTag(AbilityTag(AbilityTag::DamageSource));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CManaCryptCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CManaCryptCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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
		CLifeModifier* pModifier = new CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
		pModifier->ApplyTo(pController);
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

void CManaCryptCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CLifeModifier* pModifier = new CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier->ApplyTo(pSelectionPlayer);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CGemBazaarCard::CGemBazaarCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gem Bazaar"), nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CGemBazaarCard::OnResolutionCompleted))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CGemBazaarCard::OnCardMoved))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, ALL_MANA_TEXT));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	pAbility = cpAbility.GetPointer();
	AddAbility(pAbility);
}

void CGemBazaarCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (bResult) dynamic_cast<CManaProductionAbility*>(pAbility)->GetManaPool().SetMana(CManaPool(ChooseRandomColor(), 1));
}

void CGemBazaarCard::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::Battlefield) dynamic_cast<CManaProductionAbility*>(pAbility)->GetManaPool().SetMana(CManaPool(ChooseRandomColor(), 1));
}

CManaPool::Color CGemBazaarCard::ChooseRandomColor(void)
{
	CManaPool::Color result;

	switch (GetController()->GetRand() % 5)
	{
	case 0: result = CManaPool::Color::White;	break;
	case 1: result = CManaPool::Color::Blue;	break;
	case 2: result = CManaPool::Color::Black;	break;
	case 3: result = CManaPool::Color::Red;		break;
	case 4: result = CManaPool::Color::Green;	break;
	}

	return result;
}

//____________________________________________________________________________
//
CPerhapsYouveMetMyCohortCard::CPerhapsYouveMetMyCohortCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Perhaps You've Met My Cohort"), nID)
{
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Planeswalker, false));
	

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Battlefield);
		cpAbility->SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDrenchTheSoilInTheirBloodCard::CDrenchTheSoilInTheirBloodCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Drench the Soil in Their Blood"), nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CDrenchTheSoilInTheirBloodCard::OnResolutionCompleted))
{
	{
		typedef
			TTriggeredAbility< CTriggeredExtraCombatAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
}

void CDrenchTheSoilInTheirBloodCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CZoneCreatureModifier pModifier = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::Vigilance, true, true)));
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CShichifukujinDragonCard::CShichifukujinDragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shichifukujin Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("6") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 7, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT));

	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), -2);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CShichifukujinDragonCard::BeforeResolution));

	cpAbility->SetAbilityType((cpAbility->GetAbilityType() & ~AbilityType::Activated) | AbilityType::AsSorcery);
	AddAbility(cpAbility.GetPointer());
}

bool CShichifukujinDragonCard::BeforeResolution(CAbilityAction* pAction)
{
	CCountedCardContainer pSubjects;
	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Shichifukujin Dragon Effect"), 61078, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
