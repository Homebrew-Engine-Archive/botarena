#include "stdafx.h"
#include "CardArabianNights.h"

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

		DEFINE_CARD(CAladdinCard);
		DEFINE_CARD(CAlifromCairoCard);
		DEFINE_CARD(CArmyOfAllahCard);
		DEFINE_CARD(CBazaarofBaghdadCard);
		DEFINE_CARD(CDesertCard);
		DEFINE_CARD(CDiamondValleyCard);
		DEFINE_CARD(CDropOfHoneyCard);
		DEFINE_CARD(CElephantGraveyardCard);
		DEFINE_CARD(CErhnamDjinnCard);
		DEFINE_CARD(CFlyingMenCard);
		DEFINE_CARD(CHasranOgressCard);
		DEFINE_CARD(CIslandOfWakWakCard);
		DEFINE_CARD(CJuzamDjinnCard);
		DEFINE_CARD(CKhabalGhoulCard);
		DEFINE_CARD(CKingSuleimanCard);
		DEFINE_CARD(CLibraryOfAlexandriaCard);
		DEFINE_CARD(CMerchantShipCard);
		DEFINE_CARD(CMoorishCavalryCard);
		DEFINE_CARD(CSandalsOfAbdallahCard);
		DEFINE_CARD(CSerendibDjinnCard);
		DEFINE_CARD(CSingingTreeCard);
		DEFINE_CARD(CStoneThrowingDevilsCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBazaarofBaghdadCard::CBazaarofBaghdadCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Bazaar of Baghdad"), nID)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 2));

	cpAbility->AddTapCost();
	cpAbility->SetDiscard(3, FALSE, MoveType::Discard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlifromCairoCard::CAlifromCairoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ali from Cairo"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::Worship, 1, TRUE));

	cpEnchantment->SetAffectControllerOnly();

	cpEnchantment->SetMainSpell(FALSE);
	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CJuzamDjinnCard::CJuzamDjinnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Juzám Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
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
CFlyingMenCard::CFlyingMenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Flying Men"), CardType::Creature, CREATURE_TYPE(Human), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CArmyOfAllahCard::CArmyOfAllahCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Army of Allah"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+2), Life(+0)));

	cpSpell->SetToAttackingOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDesertCard::CDesertCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Desert"), nID, CardType::_DesertLand)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingCreatureComparer, FALSE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->SetUseInSpecificNode(NodeId::EndOfCombatStep);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CElephantGraveyardCard::CElephantGraveyardCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Elephant Graveyard"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T(""),
				new CreatureTypeComparer(CREATURE_TYPE(Elephant), false)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKingSuleimanCard::CKingSuleimanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("King Suleiman"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CreatureTypeComparer(CREATURE_TYPE(Djinn) | CREATURE_TYPE(Efreet), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoorishCavalryCard::CMoorishCavalryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moorish Cavalry"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CStoneThrowingDevilsCard::CStoneThrowingDevilsCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Stone-Throwing Devils"), CardType::Creature, CREATURE_TYPE(Devil), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CHasranOgressCard::CHasranOgressCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hasran Ogress"), CardType::Creature, CREATURE_TYPE(Ogre), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CHasranOgressCard::CreateTemporaryAbility), _T("2"),
			CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
				&CHasranOgressCard::PreRemoveAbilityCallback));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

CCard* CHasranOgressCard::CreateTemporaryAbility()
{
	return this;
}

void CHasranOgressCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CLifeModifier modifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	modifier.ApplyTo(pTriggeredPlayer);
}

//____________________________________________________________________________
//
CLibraryOfAlexandriaCard::CLibraryOfAlexandriaCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Library of Alexandria"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddTapCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CLibraryOfAlexandriaCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

BOOL CLibraryOfAlexandriaCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 7;
}

//____________________________________________________________________________
//
CIslandOfWakWakCard::CIslandOfWakWakCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Island of Wak-Wak"), nID)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(0));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSingingTreeCard::CSingingTreeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Singing Tree"), CardType::Creature, CREATURE_TYPE(Plant), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(0), Life(0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new AttackingCreatureComparer);

	CPowerModifier* pPowerModifier = new CPowerModifier;
	pPowerModifier->SetPowerDelta(Power(0));
	pPowerModifier->SetToBase(TRUE);
	pPowerModifier->SetReplacement(TRUE);
	pPowerModifier->SetOneTurnOnly(TRUE);

	cpAbility->GetTargetModifier().CCreatureModifiers::push_back(pPowerModifier);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMerchantShipCard::CMerchantShipCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Merchant Ship"), CardType::Creature, CREATURE_TYPE(Human), nID,
		BLUE_MANA_TEXT, Power(0), Life(2))
{
	{
		//Can't attack if defending player doesn't control an Island
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
					CPlayableIfTrait::PlayableCallback(this,
					&CMerchantShipCard::CanAttack)));

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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMerchantShipCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CMerchantShipCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Whenever this creature attacks and isn't blocked, you gain 2 life.
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			NodeId::DeclareBlockersStep2));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMerchantShipCard::SetTriggerContext3));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CMerchantShipCard::CanAttack(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
		if ((pInplay->GetAt(i)->GetCardType() & CardType::Island).Any())
			return TRUE;

		return FALSE;
}

bool CMerchantShipCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CMerchantShipCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
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

bool CMerchantShipCard::SetTriggerContext3(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CDiamondValleyCard::CDiamondValleyCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Diamond Valley"), nID, CardType::NonbasicLand)
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+0), PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiamondValleyCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDiamondValleyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	ContextValue context(GET_INTEGER(pCreature->GetLastKnownToughness()));
	pAction->SetValue(context);

	return true;
}

//____________________________________________________________________________
//
CDropOfHoneyCard::CDropOfHoneyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Drop of Honey"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new LeastPowerCreatureComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new CardKeywordComparer(CardKeyword::Indestructible, false));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDropOfHoneyCard::SetTriggerContext1));
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

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDropOfHoneyCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDropOfHoneyCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = GetGame()->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pCard = pOppInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	return true;
}

bool CDropOfHoneyCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);
	CZone* pOppInplay = GetGame()->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pCard = pOppInplay->GetAt(i);
		if (pCard->GetCardType().IsCreature())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CErhnamDjinnCard::CErhnamDjinnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Erhnam Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("3") GREEN_MANA_TEXT, Power(4), Life(5))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	cpAbility->GetTargeting().GetSubjectCardFilter().SetNotThisCardsControllerOnly(this);
	
	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
		pModifier1->GetModifier().SetToAdd(CreatureKeyword::Forestwalk);
		pModifier1->GetModifier().SetOneTurnOnly(false);

	CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(GetGame(), pModifier1,
		TurnNumberDelta(-1), NodeId::UpkeepStep, false, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater,
		CScheduledCreatureModifier::DeltaOption::CustomPlayerTurn, GetController());

	cpAbility->GetCreatureModifiers().Add(pModifier2);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKhabalGhoulCard::CKhabalGhoulCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Khabál Ghoul"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKhabalGhoulCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKhabalGhoulCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCreatures = GetGame()->GetCertainTypeDiedCount(CardType::Creature);
	if (nCreatures == 0) return false;

	CCardCounterModifier modifier(_T("+1/+1"), nCreatures);
	modifier.ApplyTo(pAction->GetOriginatingCard());

	return true;
}

//____________________________________________________________________________
//
CAladdinCard::CAladdinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Aladdin"), CardType::Creature, CREATURE_TYPE2(Human, Rogue), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(new ControlledByCardComparer((CCard*)this))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAladdinCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact, false),
			FALSE));

	cpAbility->AddTapCost();

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CGainControlModifier(GetGame(), (CCard*)this));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));

	m_pStealAbility = cpAbility.GetPointer();
	AddAbility(m_pStealAbility);
}

void CAladdinCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
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

	CGainControlModifier modifier = CGainControlModifier(GetGame(), (CCard*)this, true);

	for (int ic = 0; ic < cards.GetSize(); ++ic)
		modifier.ApplyTo(cards.GetAt(ic));
}

//____________________________________________________________________________
//
CSerendibDjinnCard::CSerendibDjinnCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Serendib Djinn"), CardType::Creature, CREATURE_TYPE(Djinn), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(6))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSerendibDjinnCard::OnCardSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSerendibDjinnCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Sacrifice this card if the controller doesn't control a land
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSerendibDjinnCard::SetTriggerContext1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility2;

		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CSerendibDjinnCard::SetTriggerContext2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSerendibDjinnCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	int nLands = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pBattlefield->GetCardContainer());

	if (nLands > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);

			SelectionEntry entry;

			if (pCard->GetCardType().IsLand())
			{
				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
				
				entry.strText.Format(_T("Sacrifice %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CSerendibDjinnCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);

			bool bIsland = (pCard->GetCardType() & CardType::Island).Any();
			
			pModifier1.ApplyTo(pCard);
				
			if (bIsland)
			{
				CLifeModifier pModifier2 = CLifeModifier(Life(-3), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
				pModifier2.ApplyTo(pSelectionPlayer);
			}

			return;
		}
}

bool CSerendibDjinnCard::SetTriggerContext1(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsLand())
			return false;
	}

	return true;
}

bool CSerendibDjinnCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCard->GetCardType().IsLand())
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CSandalsOfAbdallahCard::CSandalsOfAbdallahCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sandals of Abdallah"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CSandalsOfAbdallahCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::Islandwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
	AddAbility(cpAbility.GetPointer());
}

void CSandalsOfAbdallahCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{	
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects1.AddCard(pTarget, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Sandals of Abdallah Effect"), 61053, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
