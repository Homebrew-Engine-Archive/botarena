#include "stdafx.h"
#include "CardRevised.h"

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

		DEFINE_CARD(CAladdinsRingCard);
		DEFINE_CARD(CAtogCard);
		DEFINE_CARD(CBottleOfSuleimanCard);
		DEFINE_CARD(CBrassManCard);
		DEFINE_CARD(CCrumbleCard);
		DEFINE_CARD(CDancingScimitarCard);
		DEFINE_CARD(CDesertTwisterCard);
		DEFINE_CARD(CDragonEngineCard);
		DEFINE_CARD(CDwarvenWeaponsmithCard);
		DEFINE_CARD(CEbonyHorseCard);
		DEFINE_CARD(CElHajjajCard);
		DEFINE_CARD(CEnergyFluxCard);
		DEFINE_CARD(CErgRaidersCard);
		DEFINE_CARD(CFlyingCarpetCard);
		DEFINE_CARD(CHurkylsRecallCard);
		DEFINE_CARD(CIslandFishJasconiusCard);
		DEFINE_CARD(CIvoryTowerCard);
		DEFINE_CARD(CJandorsRingCard);
		DEFINE_CARD(CJandorsSaddlebagsCard);
		DEFINE_CARD(CKirdApeCard);
		DEFINE_CARD(CMijaeDjinnCard);
		DEFINE_CARD(CMillstoneCard);
		DEFINE_CARD(COnuletCard);
		DEFINE_CARD(COrnithopterCard);
		DEFINE_CARD(CPrimalClayCard);
		DEFINE_CARD(CReconstructionCard);
		DEFINE_CARD(CRocketLauncherCard);
		DEFINE_CARD(CSerendibEfreetCard);
		DEFINE_CARD(CShatterstormCard);
		DEFINE_CARD(CSorceressQueenCard);
		DEFINE_CARD(CTheRackCard);
		DEFINE_CARD(CUnstableMutationCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CElHajjajCard::CElHajjajCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("El-Hajjâj"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, 
							&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CElHajjajCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CElHajjajCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CBrassManCard::CBrassManCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brass Man"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("1"), Power(1), Life(3))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::UpkeepStep));

	cpAbility->SetAbilityName(_T("untap ability"));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
	cpAbility->SetResolutionCost(_T("1"));
	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIslandFishJasconiusCard::CIslandFishJasconiusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Island Fish Jasconius"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(8))
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CIslandFishJasconiusCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control an Island
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("Islands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIslandFishJasconiusCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIslandFishJasconiusCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetAbilityName(_T("untap ability"));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->SetResolutionCost(BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CIslandFishJasconiusCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

	return FALSE;
}

bool CIslandFishJasconiusCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

bool CIslandFishJasconiusCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if ((pCard->GetCardType() & CardType::Island).Any())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
COnuletCard::COnuletCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Onulet"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAtogCard::CAtogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Atog"), CardType::Creature, CREATURE_TYPE(Atog), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility( 
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+2), Life(+2)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIvoryTowerCard::CIvoryTowerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ivory Tower"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIvoryTowerCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CIvoryTowerCard::BeforeResolution(CIvoryTowerCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pHand = m_pGame->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() <= 4)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(pHand->GetSize() - 4));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CReconstructionCard::CReconstructionCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Reconstruction"), CardType::Sorcery, nID,
		BLUE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
}

//____________________________________________________________________________
//
CTheRackCard::CTheRackCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("The Rack"), CardType::Artifact, nID,
		_T("1"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CTheRackCard::OnSelectionDone))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTheRackCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTheRackCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

void CTheRackCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedPlayer = NULL;

		std::vector<SelectionEntry> entries;

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			if (GetController() != GetGame()->GetPlayer(ip))
			{
				SelectionEntry entry;
				entry.dwContext = ip;
				entry.strText.Format(_T("choose %s"), GetGame()->GetPlayer(ip)->GetPlayerName());
				entries.push_back(entry);
			}
		m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());	
	}
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

void CTheRackCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SelectedPlayer = GetGame()->GetPlayer(it->dwContext);
			return;
		}
}

bool CTheRackCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetGame()->GetActivePlayer() == SelectedPlayer);
}

bool CTheRackCard::BeforeResolution(CTheRackCard::TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pHand = pAction->GetTriggeredPlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() >= 3)
		return false;

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(3 - pHand->GetSize()));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CDesertTwisterCard::CDesertTwisterCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Desert Twister"), CardType::Sorcery, nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Permanent, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CSerendibEfreetCard::CSerendibEfreetCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serendib Efreet"), CardType::Creature, CREATURE_TYPE(Efreet), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAladdinsRingCard::CAladdinsRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aladdin's Ring"), CardType::Artifact, nID,
		_T("8"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("8"),
			new AnyCreatureComparer, TRUE,
			Life(-4), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBottleOfSuleimanCard::CBottleOfSuleimanCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Bottle of Suleiman"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBottleOfSuleimanCard::OnFlipSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
		_T("1")));

	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBottleOfSuleimanCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CBottleOfSuleimanCard::BeforeResolution (CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
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
		CLifeModifier* pModifier = new CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
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
		CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Djinn"), 2707, 1);
		pModifier->ApplyTo(pController);
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

void CBottleOfSuleimanCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				CTokenCreationModifier* pModifier = new CTokenCreationModifier(GetGame(), _T("Djinn"), 2707, 1);
				pModifier->ApplyTo(pSelectionPlayer);
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
				CLifeModifier* pModifier = new CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier->ApplyTo(pSelectionPlayer);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
				return;
			}
		}
}
//____________________________________________________________________________
//
CDancingScimitarCard::CDancingScimitarCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dancing Scimitar"), CardType::_ArtifactCreature, CREATURE_TYPE(Spirit), nID,
		_T("4"), Power(1), Life(5))
{
}

//____________________________________________________________________________
//
CDragonEngineCard::CDragonEngineCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Dragon Engine"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("3"), Power(1), Life(3),
		_T("2"), Power(+1), Life(+0))
{
}

//____________________________________________________________________________
//
CEbonyHorseCard::CEbonyHorseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ebony Horse"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage | CreatureKeyword::PreventAllCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AttackingCreatureComparer));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlyingCarpetCard::CFlyingCarpetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flying Carpet"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHurkylsRecallCard::CHurkylsRecallCard(CGame* pGame, UINT nID)	
	: CCard(pGame, _T("Hurkyl's Recall"), CardType::Instant, nID)
{
	counted_ptr<CTargetPlayerCardsSpell> cpSpell(
		::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, 
			ZoneId::_OwnedCards, 
			CCardFilter::GetFilter(_T("artifact cards"))));

	cpSpell->AddCardModifier(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CJandorsSaddlebagsCard::CJandorsSaddlebagsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jandor's Saddlebags"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("3"),
			FALSE, TRUE,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CKirdApeCard::CKirdApeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kird Ape"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));

	cpAbility->SetMaximumAddedPower(Power(1));
	cpAbility->SetMaximumAddedToughness(Life(2));

	cpAbility->SetPowerMultiplier(Power(1));
	cpAbility->SetToughnessMultiplier(Life(2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMillstoneCard::CMillstoneCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Millstone"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("2"), 2));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);
	//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
COrnithopterCard::COrnithopterCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ornithopter"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("0"), Power(0), Life(2))
{
}

//____________________________________________________________________________
//
CPrimalClayCard::CPrimalClayCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Primal Clay"), CardType::_ArtifactCreature, CREATURE_TYPE(Shapeshifter), nID,
		_T("4"), Power(0), Life(0))
{
	typedef
		TTriggeredAbility< CTriggeredMorphCreatureAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddMorphToType(_T("3/3 artifact creature"), Power(3), Life(3), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Null);
	cpAbility->AddMorphToType(_T("2/2 artifact creature with flying"), Power(2), Life(2), CREATURE_TYPE(Shapeshifter), CreatureKeyword::Flying);
	cpAbility->AddMorphToType(_T("1/6 Shapeshifter Wall artifact creature with defender"), Power(1), Life(6), CREATURE_TYPE2(Shapeshifter, Wall), CreatureKeyword::Defender);

	cpAbility->SetSkipStack(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShatterstormCard::CShatterstormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Shatterstorm"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSorceressQueenCard::CSorceressQueenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sorceress Queen"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this))); // Not this card

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(0));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	CLifeModifier* pLifeModifier = new CLifeModifier;
	pLifeModifier->SetLifeDelta(Life(2));
	pLifeModifier->SetPreventable(PreventableType::NotPreventable);
	pLifeModifier->SetToBase(TRUE);
	pLifeModifier->SetReplacement(TRUE);
	pLifeModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pLifeModifier);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenWeaponsmithCard::CDwarvenWeaponsmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Weaponsmith"), CardType::Creature, CREATURE_TYPE2(Dwarf, Artificer), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards")));
	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUnstableMutationCard::CUnstableMutationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Unstable Mutation"), nID,
		BLUE_MANA_TEXT,
		Power(+3), Life(+3))
{
	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CUnstableMutationCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CUnstableMutationCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("-1/-1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrumbleCard::CCrumbleCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Crumble"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCrumbleCard::BeforeResolution));
}

bool CCrumbleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* TargetsController=pAction->GetAssociatedCard()->GetController();

	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(TargetsController);

	return true;
}

//____________________________________________________________________________
//
CEnergyFluxCard::CEnergyFluxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Energy Flux"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CEnergyFluxCard::CreateAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CEnergyFluxCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CUpkeepAbility> cpUpkeepAbility(::CreateObject<CUpkeepAbility>(pCard, _T("2")));

	return counted_ptr<CAbility>(cpUpkeepAbility.GetPointer());
}

//____________________________________________________________________________
//
CErgRaidersCard::CErgRaidersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Erg Raiders"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(3))
{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CErgRaidersCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
}

bool CErgRaidersCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (AttackedThisTurn() ||
		GetInplayGameTurnNumber() == GetGame()->GetGameTurnNumber() ||
		GetControllerTurnChanged() == GetGame()->GetGameTurnNumber() ) return false;
	
	return true;
}

//____________________________________________________________________________
//
CMijaeDjinnCard::CMijaeDjinnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mijae Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(3))
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMijaeDjinnCard::OnFlipSelected))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->AddAbilityTag(AbilityTag(AbilityTag::CreatureChange));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMijaeDjinnCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMijaeDjinnCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pController = pAction->GetController();
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
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
		RemoveFromCombat(FALSE);
		CCardOrientationModifier* pModifier = new CCardOrientationModifier(TRUE);
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

void CMijaeDjinnCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				RemoveFromCombat(FALSE);
				CCardOrientationModifier* pModifier = new CCardOrientationModifier(TRUE);
				pModifier->ApplyTo(this);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
CJandorsRingCard::CJandorsRingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Jandor's Ring"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
		, m_CardFilter(_T("last card drawn this turn"), _T("last cards drawn this turn"), new LastCardDrawnThisTurnComparer)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));

	cpAbility->AddTapCost();

	cpAbility->GetCost().AddDiscardCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRocketLauncherCard::CRocketLauncherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rocket Launcher"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CRocketLauncherCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, TRUE, 
			Life(-1),	// life delta
			PreventableType::Preventable));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CRocketLauncherCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	ATLASSERT(cpAbility);
		
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CRocketLauncherCard::CanPlay(BOOL bIncludeTricks)
{
	int nTurnInControl = GetControllerTurnChanged();
	if (nTurnInControl < 0)	return false;
	if (nTurnInControl >= GetController()->GetPlayerTurnNumber()) return false;

	return true;
}

void CRocketLauncherCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer pSubjects;

	if (IsInplay())
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//