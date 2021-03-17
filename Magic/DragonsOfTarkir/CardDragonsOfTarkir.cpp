#include "stdafx.h"
#include "CardDragonsOfTarkir.h"

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
		DEFINE_CARD(CAcidSpewerDragonCard);
		DEFINE_CARD(CAerieBowmastersCard);
		DEFINE_CARD(CAnafenzaKinTreeSpiritCard);
		DEFINE_CARD(CAncestralStatueCard);
		DEFINE_CARD(CAncientCarpCard);
		DEFINE_CARD(CArashinSovereignCard);
		DEFINE_CARD(CAssaultFormationCard);
		DEFINE_CARD(CAtarkaBeastbreakerCard);
		DEFINE_CARD(CAtarkaMonumentCard);
		DEFINE_CARD(CAtarkaPummelerCard);
		DEFINE_CARD(CAvenSunstrikerCard);
		DEFINE_CARD(CAvenTacticianCard);
		DEFINE_CARD(CBerserkersOnslaughtCard);
		DEFINE_CARD(CButchersGleeCard);
		DEFINE_CARD(CCircleOfEldersCard);
		DEFINE_CARD(CCoatWithVenomCard);
		DEFINE_CARD(CContradictCard);
		DEFINE_CARD(CCunningBreezedancerCard);
		DEFINE_CARD(CCustodianOfTheTroveCard);
		DEFINE_CARD(CDeadlyWanderingsCard);
		DEFINE_CARD(CDefeatCard);
		DEFINE_CARD(CDirgurNemesisCard);
		DEFINE_CARD(CDragonloftIdolCard);
	//	DEFINE_CARD(CDragonlordAtarkaCard);
		DEFINE_CARD(CDragonlordDromokaCard);
		DEFINE_CARD(CDragonlordsServantCard);
		DEFINE_CARD(CDromokaCaptainCard);
		DEFINE_CARD(CDromokaMonumentCard);
		DEFINE_CARD(CDromokaWarriorCard);
		DEFINE_CARD(CDutifulAttendantCard);
		DEFINE_CARD(CFlattenCard);
		DEFINE_CARD(CGateSmasherCard);
		DEFINE_CARD(CGudulLurkerCard);
		DEFINE_CARD(CHandOfSilumgarCard);
		DEFINE_CARD(CHarbingerOfTheHuntCard);
		DEFINE_CARD(CKolaghanMonumentCard);
		DEFINE_CARD(CLoseCalmCard);
		DEFINE_CARD(CMagmaticChasmCard);
		DEFINE_CARD(CMarshHulkCard);
		DEFINE_CARD(CMisthoofKirinCard);
		DEFINE_CARD(COjutaiInterceptorCard);
		DEFINE_CARD(COjutaiMonumentCard);
		DEFINE_CARD(CRendingVolleyCard);
		DEFINE_CARD(CRoastCard);
		DEFINE_CARD(CSandcrafterMageCard);
		DEFINE_CARD(CSandsteppeScavengerCard);
		DEFINE_CARD(CSandstormChargerCard);
		DEFINE_CARD(CSarkhansTriumphCard);
		DEFINE_CARD(CSarkhanUnbrokenCard);
		DEFINE_CARD(CScionOfUginCard);
		DEFINE_CARD(CSegmentedKrotiqCard);
		DEFINE_CARD(CSeismicRuptureCard);
		DEFINE_CARD(CShamblingGoblinCard);
		DEFINE_CARD(CSibsigIcebreakersCard);
		DEFINE_CARD(CSilumgarMonumentCard);
		DEFINE_CARD(CStormcragElementalCard);
		DEFINE_CARD(CStormriderRigCard);
		DEFINE_CARD(CTailSlashCard);
		DEFINE_CARD(CTapestryOfTheAgesCard);
		DEFINE_CARD(CTerritorialRocCard);
		DEFINE_CARD(CTwinBoltCard);
		DEFINE_CARD(CUkudCobraCard);
		DEFINE_CARD(CUpdraftElementalCard);
		DEFINE_CARD(CVandalizeCard);
		DEFINE_CARD(CVialOfDragonfireCard);
		DEFINE_CARD(CVirulentPlagueCard);
		DEFINE_CARD(CVolcanicRushCard);
		DEFINE_CARD(CWanderingTombshellCard);
		DEFINE_CARD(CYouthfulScholarCard);
	} while (false);

	return cpCard;
}
//____________________________________________________________________________
//
CDromokaWarriorCard::CDromokaWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dromoka Warrior"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") WHITE_MANA_TEXT, Power(3), Life(1))
{
}

//____________________________________________________________________________
//
CMagmaticChasmCard::CMagmaticChasmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Magmatic Chasm"), CardType::Sorcery, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT));

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Seismic Stomp Effect"), 61129, 1, FALSE, ZoneId::_Effects));
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTerritorialRocCard::CTerritorialRocCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Territorial Roc"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
}

//____________________________________________________________________________
//
CContradictCard::CContradictCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Contradict"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CStormriderRigCard::CStormriderRigCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Stormrider Rig"), CardType::Artifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

		cpAbility->AddCreatureModifier(new CLifeModifier(Life(+1), this,
			PreventableType::NotPreventable, DamageType::NonCombatDamage, FALSE));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStormriderRigCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStormriderRigCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStormriderRigCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CStormriderRigCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CEquipAbility* pEquipAbility = dynamic_cast<CEquipAbility*>(GetAbility(i));
		if (!pEquipAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pEquipAbility->Unequip();
		pEquipAbility->Equip(triggerContext.m_pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CGateSmasherCard::CGateSmasherCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gate Smasher"), CardType::Artifact | CardType::Equipment, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this,
			_T("3"),
			new CreatureToughnessComparer<std::greater<int>>(3))); // toughness 4 or greater

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+3), FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Trample);
	pModifier->GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddCreatureModifier(pModifier);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonloftIdolCard::CDragonloftIdolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragonloft Idol"), CardType::_ArtifactCreature, CREATURE_TYPE(Gargoyle), nID,
		_T("4"), Power(3), Life(3))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
	cpAbility->SetConditionValue(1);
	
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying | CreatureKeyword::Trample);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAncestralStatueCard::CAncestralStatueCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancestral Statue"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(3), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAtarkaMonumentCard::CAtarkaMonumentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Atarka Monument"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4") RED_MANA_TEXT GREEN_MANA_TEXT,
				_T("Dragon AA"), 64088));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDromokaMonumentCard::CDromokaMonumentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Dromoka Monument"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT,
				_T("Dragon AB"), 64089));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKolaghanMonumentCard::CKolaghanMonumentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Kolaghan Monument"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4") BLACK_MANA_TEXT RED_MANA_TEXT,
				_T("Dragon AC"), 64090));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COjutaiMonumentCard::COjutaiMonumentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ojutai Monument"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT,
				_T("Dragon AD"), 64091));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSilumgarMonumentCard::CSilumgarMonumentCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Silumgar Monument"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				_T("4") BLUE_MANA_TEXT BLACK_MANA_TEXT,
				_T("Dragon AE"), 64092));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCustodianOfTheTroveCard::CCustodianOfTheTroveCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Custodian of the Trove"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("3"), Power(2), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	SetIntoPlayTapped();
}

//____________________________________________________________________________
//
CScionOfUginCard::CScionOfUginCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Scion of Ugin"), CardType::Creature, CREATURE_TYPE2(Dragon, Spirit), nID,
		_T("6"), Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CTapestryOfTheAgesCard::CTapestryOfTheAgesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tapestry of the Ages"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("2"), 1));
	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,								// not used
			CPlayableIfTrait::PlayableCallback(this,
			&CTapestryOfTheAgesCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CTapestryOfTheAgesCard::CanPlay(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainAntiTypeCastedCount(CardType::Creature)>0); //check if you've cast a noncreature spell this turn
}

//____________________________________________________________________________
//
CVialOfDragonfireCard::CVialOfDragonfireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Vial of Dragonfire"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2"),
			new AnyCreatureComparer, FALSE,				// FALSE->do not target players
			Life(-2), PreventableType::Preventable));
	cpAbility->AddSacrificeCost();
	cpAbility->AddTapCost();
	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSarkhanUnbrokenCard::CSarkhanUnbrokenCard(CGame* pGame, UINT nID)
	: CPlaneswalkerCard(pGame, _T("Sarkhan Unbroken"), nID,
		_T("2") GREEN_MANA_TEXT BLUE_MANA_TEXT RED_MANA_TEXT,
		PlaneswalkerType::Sarkhan, 4)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CSarkhanUnbrokenCard::OnResolutionCompleted1))
	, m_ColorSelection(pGame, CSelectionSupport::SelectionCallback(this, &CSarkhanUnbrokenCard::OnColorSelected))
	, m_CardFilter(_T("a Dragon"), _T("Dragons"), new CreatureTypeComparer(CREATURE_TYPE(Dragon), false))
{
	{	// +1: Draw a card, then add one mana of any color to your mana pool.
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), +1);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());
		AddAbility(cpAbility.GetPointer());
	}
	{  // −2: Put a 4/4 red Dragon creature token with flying onto the battlefield.
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T(""),
				_T("Dragon H"), 55027,
				1)); 
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -2);		
		AddAbility(cpAbility.GetPointer());
	}
	{  // −8: Search your library for any number of Dragon creature cards and put them onto the battlefield. Then shuffle your library.
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""), &m_CardFilter, 
				ZoneId::Battlefield, FALSE, TRUE, FALSE));
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(SpecialNumber::Any));
		cpAbility->GetCost().AddCounterCost(GetLoyaltyCounter(), -8);
		AddAbility(cpAbility.GetPointer());
	}
}

void CSarkhanUnbrokenCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;
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
	if (bResult) 
		m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, pAbilityAction->GetController());
}

void CSarkhanUnbrokenCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 3)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 4)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}

			if ((int)it->dwContext == 5)
			{
				CManaPoolModifier pModifier =  CManaPoolModifier(
					CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

				pModifier.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}
//____________________________________________________________________________
//
CCunningBreezedancerCard::CCunningBreezedancerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cunning Breezedancer"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new AnyCreatureComparer)); // noncreature spell
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonlordDromokaCard::CDragonlordDromokaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragonlord Dromoka"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(7))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);
	GetCardKeyword()->AddLifelink(FALSE);
	{
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CDragonlordDromokaCard::SetTriggerContext));

		m_pTriggeredAbility1 = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility1);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDragonlordDromokaCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
											   CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (m_pGame->GetActivePlayer() == GetController())
		m_pTriggeredAbility1->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	return true;
}

//____________________________________________________________________________
//
CArashinSovereignCard::CArashinSovereignCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Arashin Sovereign"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CArashinSovereignCard::OnSelected))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CArashinSovereignCard::BeforeResolution));
	
	AddAbility(cpAbility.GetPointer());
}

bool CArashinSovereignCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("put %s on top of its owner's library"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("put %s on the bottom of its owner's library"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("put %s into its owner's graveyard"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	return true;
}

void CArashinSovereignCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s puts %s on top of its owner's library"), pSelectionPlayer->GetPlayerName(), this->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				this->Move(this->GetOwner()->GetZoneById(ZoneId::Library), pSelectionPlayer, MoveType::Others, CardPlacement::Top);	
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s on the bottom of its owner's library"), pSelectionPlayer->GetPlayerName(), this->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				this->Move(this->GetOwner()->GetZoneById(ZoneId::Library), pSelectionPlayer, MoveType::Others, CardPlacement::Bottom);	
				return;
			}
			
			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s puts %s into its owner's graveyard"), pSelectionPlayer->GetPlayerName(),this->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				this->Move(this->GetOwner()->GetZoneById(ZoneId::Graveyard), pSelectionPlayer, MoveType::Others, CardPlacement::Top);	
				return;
			}
		}
}

//____________________________________________________________________________
//
CSegmentedKrotiqCard::CSegmentedKrotiqCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Segmented Krotiq"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("5") GREEN_MANA_TEXT, Power(6), Life(5), _T("6") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Insect);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAerieBowmastersCard::CAerieBowmastersCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Aerie Bowmasters"), CardType::Creature, CREATURE_TYPE2(Hound, Archer), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4), _T("5") GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Hound);
	this->AddCreatureType(SingleCreatureType::Archer);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Reach, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvenSunstrikerCard::CAvenSunstrikerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Aven Sunstriker"), CardType::Creature, CREATURE_TYPE2(Bird, Warrior), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1), _T("4") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Warrior);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Flying, true, false));
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::DoubleStrike, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDirgurNemesisCard::CDirgurNemesisCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Dirgur Nemesis"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("5") BLUE_MANA_TEXT, Power(6), Life(5), _T("6") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Serpent);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Defender, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGudulLurkerCard::CGudulLurkerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Gudul Lurker"), CardType::Creature, CREATURE_TYPE(Salamander), nID,
		BLUE_MANA_TEXT, Power(1), Life(1), BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Salamander);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Unblockable, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMarshHulkCard::CMarshHulkCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Marsh Hulk"), CardType::Creature, CREATURE_TYPE2(Zombie, Ogre), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(6), _T("6") BLACK_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Zombie);
	this->AddCreatureType(SingleCreatureType::Ogre);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMisthoofKirinCard::CMisthoofKirinCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Misthoof Kirin"), CardType::Creature, CREATURE_TYPE(Kirin), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1), _T("1") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Kirin);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Flying, true, false));
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Vigilance, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COjutaiInterceptorCard::COjutaiInterceptorCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Ojutai Interceptor"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(1), _T("3") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Soldier);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Flying, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSandstormChargerCard::CSandstormChargerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Sandstorm Charger"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(4), _T("4") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStormcragElementalCard::CStormcragElementalCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Stormcrag Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") RED_MANA_TEXT, Power(5), Life(5), _T("4") RED_MANA_TEXT RED_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elemental);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Trample, true, false));
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAcidSpewerDragonCard::CAcidSpewerDragonCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Acid-Spewer Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("5") BLACK_MANA_TEXT, Power(3), Life(3), _T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT)
	, m_CardFilter(_T("a Dragon"), _T("Dragons"), new CreatureTypeComparer(CREATURE_TYPE(Dragon), false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	this->AddCreatureType(SingleCreatureType::Dragon);
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CSpecialTrigger > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
// megamorph start		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
// megamorph end		
		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // certain card activated by modifier
		
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcidSpewerDragonCard::BeforeResolution));
		
		AddAbility(cpAbility.GetPointer());
	}

}

bool CAcidSpewerDragonCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter, 
													std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +1)));
	pModifier.ApplyTo(pController);
	return true;
}

//____________________________________________________________________________
//
CAncientCarpCard::CAncientCarpCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancient Carp"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("4") BLUE_MANA_TEXT, Power(2), Life(5))
{
}

//____________________________________________________________________________
//
CWanderingTombshellCard::CWanderingTombshellCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wandering Tombshell"), CardType::Creature, CREATURE_TYPE2(Zombie, Turtle), nID,
		_T("3") BLACK_MANA_TEXT, Power(1), Life(6))
{
}

//____________________________________________________________________________
//
CYouthfulScholarCard::CYouthfulScholarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Youthful Scholar"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetDrawCount(2);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUpdraftElementalCard::CUpdraftElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Updraft Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4))
{
}

//____________________________________________________________________________
//
CVirulentPlagueCard::CVirulentPlagueCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Virulent Plague"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Token, true),
			Power(-2), Life(-2)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUkudCobraCard::CUkudCobraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ukud Cobra"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(5))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CSibsigIcebreakersCard::CSibsigIcebreakersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sibsig Icebreakers"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHandOfSilumgarCard::CHandOfSilumgarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hand of Silumgar"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CFlattenCard::CFlattenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flatten"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("3") BLACK_MANA_TEXT,
			Power(-4), Life(-4),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());	
}

//____________________________________________________________________________
//
CDutifulAttendantCard::CDutifulAttendantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dutiful Attendant"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDefeatCard::CDefeatCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Defeat"), CardType::Sorcery, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Sorcery,
		new CreaturePowerComparer<std::less<int>>(3),						// power 2 or less
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CDeadlyWanderingsCard::CDeadlyWanderingsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Deadly Wanderings"), CardType::GlobalEnchantment, nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+2), Life(+0),
			CreatureKeyword::Null));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch | CardKeyword::Lifelink);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Battlefield);
	cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->SetConditionValue(1);
	cpAbility->SetConditionIsMaximum();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoatWithVenomCard::CCoatWithVenomCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Coat with Venom"), CardType::Instant, nID, AbilityType::Instant,
		BLACK_MANA_TEXT,
		Power(+1), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Deathtouch);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
}

//____________________________________________________________________________
//
CButchersGleeCard::CButchersGleeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Butcher's Glee"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		Power(+3), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CButchersGleeCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
	m_pTargetChgPwrTghAttrSpell->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CButchersGleeCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	CCreatureCard* pCreatureCard = (CCreatureCard*)pAbilityAction->GetAssociatedCard();
	pCreatureCard->AddRegenerationShield();
}

//____________________________________________________________________________
//
CDragonlordsServantCard::CDragonlordsServantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragonlord's Servant"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Dragon), false),
			_T("1")));

	ATLASSERT(cpAbility);
	cpAbility->SetAffectControllerCardsOnly();
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRendingVolleyCard::CRendingVolleyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Rending Volley"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,
		Life(-4),
		PreventableType::Preventable)
{
	GetCardKeyword()->AddCantBeCountered(FALSE); //can't be countered by spells or abilities
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::White | CardType::Blue, false));
	m_pTargetChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	GetCardKeyword()->AddCantBeCountered(FALSE);
}

//____________________________________________________________________________
//
CAssaultFormationCard::CAssaultFormationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Assault Formation"), CardType::GlobalEnchantment, nID,
		_T("1") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	// Each creature you control assigns combat damage equal to its toughness rather than its power.
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::ToughnessCombatDamage));
	cpAbility->SetAffectControllerOnly();
	AddAbility(cpAbility.GetPointer());
	{//G: Target creature with defender can attack this turn as though it didn't have defender.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DefenderMayAttack, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureKeywordComparer(CreatureKeyword::Defender, false)));

		AddAbility(cpAbility.GetPointer());
	}
	{//2G: Creatures you control get +0/+1 until end of turn.
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T("2") GREEN_MANA_TEXT,
				Power(+0), Life(+1),
				new AnyCreatureComparer));

		cpAbility->SetToActivatedAbility();

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAtarkaBeastbreakerCard::CAtarkaBeastbreakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Atarka Beastbreaker"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				_T("4") GREEN_MANA_TEXT,
				Power(+4), Life(+4)));
	
	// Formidable - Activate this ability only if creatures you control have total power 8 or greater.
	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAtarkaBeastbreakerCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

// Code below is the check if formidable abilities are able to be played
BOOL CAtarkaBeastbreakerCard::CanPlay(BOOL bIncludeTricks)
{	
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	Power power(0);
	// add up powers of player's (caster's) creatures
	for(int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pCard = pBattle->GetAt(i);
		if(pCard->GetCardType().IsCreature())
		{ 
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			power = power + pCreature->GetPower();
		}
	}
	if(power >= Power(8))
		return TRUE;

	return FALSE;
}
//____________________________________________________________________________
//
CAtarkaPummelerCard::CAtarkaPummelerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Atarka Pummeler"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("4") RED_MANA_TEXT, Power(4), Life(5))
{
	// Formidable - Activate this ability only if creatures you control have total power 8 or greater.
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0),
				CreatureKeyword::CantBeBlockedBy1));
	cpAbility->SetAffectControllerCardsOnly();
	cpAbility->SetToActivatedAbility();
	
	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CAtarkaPummelerCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

// Code below is the check if formidable abilities are able to be played
BOOL CAtarkaPummelerCard::CanPlay(BOOL bIncludeTricks)
{	
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	Power power(0);
	// add up powers of player's (caster's) creatures
	for(int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pCard = pBattle->GetAt(i);
		if(pCard->GetCardType().IsCreature())
		{ 
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			power = power + pCreature->GetPower();
		}
	}
	if(power >= Power(8))
		return TRUE;

	return FALSE;
}
//____________________________________________________________________________
//
CCircleOfEldersCard::CCircleOfEldersCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Circle of Elders"), CardType::Creature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	// Formidable - Activate this ability only if creatures you control have total power 8 or greater.
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("3")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCircleOfEldersCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

// Code below is the check if formidable abilities are able to be played
BOOL CCircleOfEldersCard::CanPlay(BOOL bIncludeTricks)
{	
	CZone* pBattle = GetController()->GetZoneById(ZoneId::Battlefield);
	Power power(0);
	// add up powers of player's (caster's) creatures
	for(int i = 0; i < pBattle->GetSize(); ++i)
	{
		CCard* pCard = pBattle->GetAt(i);
		if(pCard->GetCardType().IsCreature())
		{ 
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			power = power + pCreature->GetPower();
		}
	}
	if(power >= Power(8))
		return TRUE;

	return FALSE;
}
//____________________________________________________________________________
//
CSandcrafterMageCard::CSandcrafterMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandcrafter Mage"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredBolsterAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCounterCardModifier().SetValue(1); // bolster 1
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnafenzaKinTreeSpiritCard::CAnafenzaKinTreeSpiritCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anafenza, Kin-Tree Spirit"), CardType::_LegendaryCreature, CREATURE_TYPE2(Spirit, Soldier), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility<  CTriggeredBolsterAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));

	cpAbility->GetCounterCardModifier().SetValue(1); // bolster 1
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvenTacticianCard::CAvenTacticianCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Tactician"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredBolsterAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCounterCardModifier().SetValue(1); // bolster 1
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDromokaCaptainCard::CDromokaCaptainCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Dromoka Captain"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredBolsterAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCounterCardModifier().SetValue(1); // bolster 1
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSandsteppeScavengerCard::CSandsteppeScavengerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sandsteppe Scavenger"), CardType::Creature, CREATURE_TYPE2(Hound, Scout), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredBolsterAbility, CWhenSelfInplay,
						   CWhenSelfInplay::EventCallback,
						   &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
	ATLASSERT(cpAbility);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetCounterCardModifier().SetValue(2); // bolster 2
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShamblingGoblinCard::CShamblingGoblinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shambling Goblin"), CardType::Creature, CREATURE_TYPE2(Zombie, Goblin), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTwinBoltCard::CTwinBoltCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Twin Bolt"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-2),
		PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_pTargetChgLifeSpell->GetTargeting()->SetDistributeValues();
}

//____________________________________________________________________________
//
CBerserkersOnslaughtCard::CBerserkersOnslaughtCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Berserkers' Onslaught"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::DoubleStrike));

	cpAbility->SetToAttackingOnly();
	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
/*
This code allows planeswalker targets but when they are targeted they are not damaged.  
CTargetChgLifeSpell::ResolveCard needs to be updated for planeswalkers.

Dragonlord Atarka\n{5RG}\nCreature - Elder Dragon\nDTK,MR\nFlying, trample\rWhen Dragonlord Atarka enters the battlefield, it deals 5 damage divided as you choose among any number of target creatures and/or planeswalkers your opponents control.\n8/8

CDragonlordAtarkaCard::CDragonlordAtarkaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragonlord Atarka"), CardType::Creature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("5") RED_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	{
		typedef
			TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddChildFilter(new CCardFilter(new CardTypeComparer(CardType::Planeswalker, true)));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetTargeting().SetDistributeValues();
		cpAbility->SetValueToDistribute(-5);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}*/
//____________________________________________________________________________
//
CHarbingerOfTheHuntCard::CHarbingerOfTheHuntCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Harbinger of the Hunt"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(3))
{
	{//Harbinger of the Hunt deals 1 damage to each creature without flying.
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("2") RED_MANA_TEXT,										// cost
				Life(-1),													// life delta
				new AnyCreatureComparer,									// affects creatures
				FALSE,														// FALSE->does not affects players
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage)); // Preventable

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		AddAbility(cpAbility.GetPointer());
	}
	{//Harbinger of the Hunt deals 1 damage to each other creature with flying.
		counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
				_T("2") GREEN_MANA_TEXT,									// cost
				Life(-1),													// life delta
				new CreatureKeywordComparer(CreatureKeyword::Flying, false),// affects flying creatures
				FALSE,														// FALSE->does not affects players
				PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage)); // Preventable

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CLoseCalmCard::CLoseCalmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lose Calm"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

	cpSpell->GetTargetModifier().CCardModifiers::push_back(new CCardOrientationModifier(FALSE));

	CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
	pModifier->GetModifier().SetToAdd(CreatureKeyword::Haste | CreatureKeyword::CantBeBlockedBy1); //Menace
	pModifier->GetModifier().SetOneTurnOnly(TRUE);

	cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier);

	cpSpell->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRoastCard::CRoastCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Roast"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,										//FALSE->do not allow player targets
		Life(-5), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
}

//____________________________________________________________________________
//
CSarkhansTriumphCard::CSarkhansTriumphCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Sarkhan's Triumph"), CardType::Instant, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Instant,
		&m_CardFilter,
		ZoneId::Hand, TRUE, TRUE, FALSE)
	, m_CardFilter(_T("a Dragon creature card"), _T("Dragon creature cards"), new CreatureTypeComparer(CREATURE_TYPE(Dragon), false))
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
}

//____________________________________________________________________________
//
CSeismicRuptureCard::CSeismicRuptureCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Seismic Rupture"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") RED_MANA_TEXT,
		Life(-2),						// life delta
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
}

//____________________________________________________________________________
//
CTailSlashCard::CTailSlashCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tail Slash"), CardType::Instant, nID)
{
	counted_ptr<CSoulsFireSpell> cpSpell(
		::CreateObject <CSoulsFireSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT));

	AddSpell(cpSpell.GetPointer());
}

CTailSlashCard::CSoulsFireSpell::CSoulsFireSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,
		new AnyCreatureComparer, false,
		new AnyCreatureComparer, false,
		_T(""))
{
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting2()->SetIncludeNonControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTailSlashCard::CSoulsFireSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
												   const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || (!pContainer2.GetSize() && !pPContainer2.GetSize())) 
		return;

	const CCreatureCard* pCreature1 = dynamic_cast<const CCreatureCard*>(pContainer1.GetAt(0));
	if (!pCreature1) 
		return;

	CLifeModifier modifier = CLifeModifier(Life(-GET_INTEGER(pCreature1->GetPower())),
										   pCreature1, PreventableType::Preventable, DamageType::NonCombatDamage);
	if (pContainer2.GetSize())
	{
		CCreatureCard* pCreature2 = dynamic_cast<CCreatureCard*>(pContainer2.GetAt(0));
		if (pCreature2) 
			modifier.ApplyTo(pCreature2);
	}
	else 
		if (pPContainer2.GetSize()) modifier.ApplyTo(pPContainer2.GetAt(0));
}

//____________________________________________________________________________
//
CVandalizeCard::CVandalizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Vandalize"), CardType::Sorcery, nID)
{
	{
		//Destroy target artifact.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Destroy target land.
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Choose both.
		counted_ptr<CDoubleTargetSpell> cpSpell(
			::CreateObject<CDoubleTargetSpell>(this, AbilityType::Sorcery,
				_T("4") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false), false, 
				new CardTypeComparer(CardType::_Land, false), false, _T("")));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVandalizeCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
}

bool CVandalizeCard::BeforeResolution(CAbilityAction* pAction)
{
	CDoubleTargetSpellAction* pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pAction);
	CCard* pTarget1 = (CCard*)pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject();
	CCard* pTarget2 = (CCard*)pDoubleTargetAction->GetTargetGroup2().GetFirstPlayerSubject();

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy, pAction->GetController());
	pModifier.ApplyTo(pTarget1);
	pModifier.ApplyTo(pTarget2);

	return true;
}

//____________________________________________________________________________
//
CVolcanicRushCard::CVolcanicRushCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Volcanic Rush"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			_T("4") RED_MANA_TEXT,
			new AttackingCreatureComparer,
			Power(+2), Life(+0), CreatureKeyword::Trample));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//