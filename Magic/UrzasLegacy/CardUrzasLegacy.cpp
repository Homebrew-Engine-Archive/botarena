#include "stdafx.h"
#include "CardUrzasLegacy.h"

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

		DEFINE_CARD(CAboutFaceCard);
		DEFINE_CARD(CAngelsTrumpetCard);
		DEFINE_CARD(CAngelicCuratorCard);
		DEFINE_CARD(CAnthroplasmCard);
		DEFINE_CARD(CAuraFluxCard);
		DEFINE_CARD(CAvalancheRidersCard);
		DEFINE_CARD(CBloatedToadCard);
		DEFINE_CARD(CBoneShredderCard);
		DEFINE_CARD(CBouncingBeeblesCard);
		DEFINE_CARD(CBrinkOfMadnessCard);
		DEFINE_CARD(CBurstOfEnergyCard);
		DEFINE_CARD(CCessationCard);
		DEFINE_CARD(CCloudOfFaeriesCard);
		DEFINE_CARD(CCropRotationCard);
		DEFINE_CARD(CDarkwatchElvesCard);
		DEFINE_CARD(CDefenderOfChaosCard);
		DEFINE_CARD(CDefenderOfLawCard);
		DEFINE_CARD(CDefenseOfTheHeartCard);
		DEFINE_CARD(CDerangedHermitCard);
		DEFINE_CARD(CDevoutHarpistCard);
		DEFINE_CARD(CEvisceratorCard);
		DEFINE_CARD(CExpendableTroopsCard);
		DEFINE_CARD(CFogOfGnatsCard);
		DEFINE_CARD(CFranticSearchCard);
		DEFINE_CARD(CGhituSlingerCard);
		DEFINE_CARD(CGhituWarCryCard);
		DEFINE_CARD(CGoblinMedicsCard);
		DEFINE_CARD(CGoblinWelderCard);
		DEFINE_CARD(CGrimMonolithCard);
		DEFINE_CARD(CHarmonicConvergenceCard);
		DEFINE_CARD(CHopeAndGloryCard);
		DEFINE_CARD(CImpendingDisasterCard);
		DEFINE_CARD(CInterveneCard);
		DEFINE_CARD(CIronMaidenCard);
		DEFINE_CARD(CIronWillCard);
		DEFINE_CARD(CJhoirasToolboxCard);
		DEFINE_CARD(CKarmicGuideCard);
		DEFINE_CARD(CKingCrabCard);
		DEFINE_CARD(CLastDitchEffortCard);
		DEFINE_CARD(CMartyrsCauseCard);
		DEFINE_CARD(CMemoryJarCard);
		DEFINE_CARD(CMiscalculationCard);
		DEFINE_CARD(CMoltenHydraCard);
		DEFINE_CARD(CMultaniMaroSorcererCard);
		DEFINE_CARD(CMultanisAcolyteCard);
		DEFINE_CARD(CMotherofRunesCard);
		DEFINE_CARD(CNoMercyCard);
		DEFINE_CARD(CPalinchronCard);
		DEFINE_CARD(CParchCard);
		DEFINE_CARD(CPeaceAndQuietCard);
		DEFINE_CARD(CPhyrexianBroodlingsCard);
		DEFINE_CARD(CPhyrexianDebaserCard);
		DEFINE_CARD(CPhyrexianDefilerCard);
		DEFINE_CARD(CPhyrexianDenouncerCard);
		DEFINE_CARD(CPhyrexianReclamationCard);
		DEFINE_CARD(CPlanarCollapseCard);
		DEFINE_CARD(CRackAndRuinCard);
		DEFINE_CARD(CRadiantArchangelCard);
		DEFINE_CARD(CRadiantsDragoonsCard);
		DEFINE_CARD(CRadiantsJudgmentCard);
		DEFINE_CARD(CRankAndFileCard);
		DEFINE_CARD(CRavenFamiliarCard);
		DEFINE_CARD(CRebuildCard);
		DEFINE_CARD(CRepopulateCard);
		DEFINE_CARD(CRingOfGixCard);
		DEFINE_CARD(CRivalryCard);
		DEFINE_CARD(CScrapheapCard);
		DEFINE_CARD(CSecondChanceCard);
		DEFINE_CARD(CShivanPhoenixCard);
		DEFINE_CARD(CSickAndTiredCard);
		DEFINE_CARD(CSilkNetCard);
		DEFINE_CARD(CSimianGruntsCard);
		DEFINE_CARD(CSluggishnessCard);
		DEFINE_CARD(CSleeperSGuileCard);
		DEFINE_CARD(CSnapCard);
		DEFINE_CARD(CSubversionCard);
		DEFINE_CARD(CSwatCard);
		DEFINE_CARD(CTetheredSkirgeCard);
		DEFINE_CARD(CThornwindFaeriesCard);
		DEFINE_CARD(CThranLensCard);
		DEFINE_CARD(CThranWarMachineCard);
		DEFINE_CARD(CTickingGnomesCard);
		DEFINE_CARD(CTinkerCard);
		DEFINE_CARD(CTragicPoetCard);
		DEFINE_CARD(CTreefolkMysticCard);
		DEFINE_CARD(CUnearthCard);
		DEFINE_CARD(CUrzasBlueprintsCard);
		DEFINE_CARD(CViashinoCutthroatCard);
		DEFINE_CARD(CViashinoHereticCard);
		DEFINE_CARD(CWalkingSpongeCard);
		DEFINE_CARD(CWeatherseedElfCard);
		DEFINE_CARD(CWeatherseedFaeriesCard);
		DEFINE_CARD(CWeatherseedTreefolkCard);
		DEFINE_CARD(CWheelOfTortureCard);
		DEFINE_CARD(CYavimayaGrangerCard);
		DEFINE_CARD(CYavimayaScionCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CGrimMonolithCard::CGrimMonolithCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Grim Monolith"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)	
{
	GetCardKeyword()->AddNoUntapInUntapPhase();

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("3")));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfUntapAbility> cpAbility(
			::CreateObject<CSelfUntapAbility>(this,
				_T("4")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMotherofRunesCard::CMotherofRunesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mother of Runes"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetGainKeywordSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetGainKeywordSpell>>(this,
			_T(""),
			new AnyCreatureComparer));

	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
	cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSleeperSGuileCard::CSleeperSGuileCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sleeper's Guile"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Fear)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTinkerCard::CTinkerCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Tinker"), CardType::Sorcery, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("artifact cards")), 
		ZoneId::Battlefield, FALSE, FALSE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("artifact cards"))); // sacrifice a artifact in addition to cast
	m_pSearchLibrarySpell->SetRevealCards(TRUE);
}

//____________________________________________________________________________
//
CWeatherseedTreefolkCard::CWeatherseedTreefolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Weatherseed Treefolk"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvalancheRidersCard::CAvalancheRidersCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Avalanche Riders"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}
{
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CAvalancheRidersCard::CreateTemporaryAbility),
                _T("3") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CAvalancheRidersCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAvalancheRidersCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CAvalancheRidersCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CAvalancheRidersCard::CreateTemporaryAbility()
{
    return this;
}

void CAvalancheRidersCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CBloatedToadCard::CBloatedToadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bloated Toad"), CardType::Creature, CREATURE_TYPE(Frog), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlue, FALSE);

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CBloatedToadCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CBloatedToadCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CDarkwatchElvesCard::CDarkwatchElvesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Darkwatch Elves"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CDarkwatchElvesCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CDarkwatchElvesCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CDefenderOfChaosCard::CDefenderOfChaosCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Defender of Chaos"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//______________________________________________________________________________________
//
CDefenderOfLawCard::CDefenderOfLawCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Defender of Law"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddFlash(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//______________________________________________________________________________________
//
CDevoutHarpistCard::CDevoutHarpistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Devout Harpist"), CardType::Creature, CREATURE_TYPE(Human), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::EnchantCreature, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEvisceratorCard::CEvisceratorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Eviscerator"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExpendableTroopsCard::CExpendableTroopsCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Expendable Troops"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(2), Life(1),
		_T(""),
		new AttackingBlockingCreatureComparer, FALSE,
		Life(-2),	// life delta
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->AddSacrificeCost();
}

//____________________________________________________________________________
//
CFogOfGnatsCard::CFogOfGnatsCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Fog of Gnats"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CGoblinMedicsCard::CGoblinMedicsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Medics"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfOrientationChanged,
			CWhenSelfOrientationChanged::EventCallback, &CWhenSelfOrientationChanged::SetTapEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKingCrabCard::CKingCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("King Crab"), CardType::Creature, CREATURE_TYPE(Crab), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Green | CardType::Creature, true),
			ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMultaniMaroSorcererCard::CMultaniMaroSorcererCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Multani, Maro-Sorcerer"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCardKeyword()->AddShroud(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Hand,
			new TrueCardComparer));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianBroodlingsCard::CPhyrexianBroodlingsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Broodlings"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1")));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

	cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianDebaserCard::CPhyrexianDebaserCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phyrexian Debaser"), CardType::Creature, CREATURE_TYPE(Carrier), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-2), Life(-2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPhyrexianDefilerCard::CPhyrexianDefilerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Defiler"), CardType::Creature, CREATURE_TYPE(Carrier), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-3), Life(-3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPhyrexianDenouncerCard::CPhyrexianDenouncerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Denouncer"), CardType::Creature, CREATURE_TYPE(Carrier), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRadiantArchangelCard::CRadiantArchangelCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Radiant, Archangel"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new NegateCardComparer(new SpecificCardComparer(this))));

	cpAbility->GetSurveyCardFilter().AddComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRankAndFileCard::CRankAndFileCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rank and File"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("green creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CShivanPhoenixCard::CShivanPhoenixCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shivan Phoenix"), CardType::Creature, CREATURE_TYPE(Phoenix), nID,
		_T("4") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTetheredSkirgeCard::CTetheredSkirgeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tethered Skirge"), CardType::Creature, CREATURE_TYPE(Imp), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThornwindFaeriesCard::CThornwindFaeriesCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Thornwind Faeries"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AnyCreatureComparer,
		TRUE,
		Life(-1),	// life delta
		PreventableType::Preventable)
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CTragicPoetCard::CTragicPoetCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tragic Poet"), CardType::Creature, CREATURE_TYPE(Human), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CViashinoCutthroatCard::CViashinoCutthroatCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Viashino Cutthroat"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWalkingSpongeCard::CWalkingSpongeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Walking Sponge"), CardType::Creature, CREATURE_TYPE(Sponge), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Flying,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::FirstStrike,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Trample,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWeatherseedElfCard::CWeatherseedElfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Weatherseed Elf"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Forestwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWeatherseedFaeriesCard::CWeatherseedFaeriesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Weatherseed Faeries"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//______________________________________________________________________________________
//
CJhoirasToolboxCard::CJhoirasToolboxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jhoira's Toolbox"), CardType::_ArtifactCreature, CREATURE_TYPE(Insect), nID,
		_T("2"), Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T("2"),
			new CardTypeComparer(CardType::_ArtifactCreature, true)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThranWarMachineCard::CThranWarMachineCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thran War Machine"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(4), Life(5))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CThranWarMachineCard::CreateTemporaryAbility),
                _T("4"),
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CThranWarMachineCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CThranWarMachineCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CThranWarMachineCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CThranWarMachineCard::CreateTemporaryAbility()
{
    return this;
}

void CThranWarMachineCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CTickingGnomesCard::CTickingGnomesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ticking Gnomes"), CardType::_ArtifactCreature, CREATURE_TYPE(Gnome), nID,
		_T("3"), Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CTickingGnomesCard::CreateTemporaryAbility),
                _T("3"),
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CTickingGnomesCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTickingGnomesCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CTickingGnomesCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CTickingGnomesCard::CreateTemporaryAbility()
{
    return this;
}

void CTickingGnomesCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CCessationCard::CCessationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cessation"), nID,
		_T("2") WHITE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::CantAttack)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhituWarCryCard::CGhituWarCryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ghitu War Cry"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMartyrsCauseCard::CMartyrsCauseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Martyr's Cause"), CardType::GlobalEnchantment,	nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""), 
			new AnyCreatureComparer, TRUE,
			Life(PreventionType::PreventNextDamage),
			SourceColor::_AllSources));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPhyrexianReclamationCard::CPhyrexianReclamationCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Phyrexian Reclamation"), CardType::GlobalEnchantment, nID,
		BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddPayLifeDeltaCost(Life(-2));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSluggishnessCard::CSluggishnessCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Sluggishness"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::CantBlock)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBurstOfEnergyCard::CBurstOfEnergyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burst of Energy"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			FALSE, TRUE, //only untap
			new TrueCardComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CCropRotationCard::CCropRotationCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Crop Rotation"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("lands")), 
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

	m_pSearchLibrarySpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));
}

//____________________________________________________________________________
//
CHarmonicConvergenceCard::CHarmonicConvergenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Harmonic Convergence"), CardType::Instant, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Enchantment, false),
			ZoneId::Library, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHopeAndGloryCard::CHopeAndGloryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hope and Glory"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			Power(+1), Life(+1), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetSubjectCount(2, 2);

	cpSpell->GetTargetModifier().CCardModifiers::push_back(
		new CCardOrientationModifier(FALSE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CIronWillCard::CIronWillCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Iron Will"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+0), Life(+4),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CIronWillCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CIronWillCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CMiscalculationCard::CMiscalculationCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Miscalculation"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("2"));

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CMiscalculationCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CMiscalculationCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CParchCard::CParchCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Parch"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	counted_ptr<CTargetChgLifeSpell> cpSpell(
		::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			new CardTypeComparer(CardType::Blue | CardType::Creature, true),
			FALSE,
			Life(-4), PreventableType::Preventable));

	cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPeaceAndQuietCard::CPeaceAndQuietCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Peace and Quiet"), CardType::Instant, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CRackAndRuinCard::CRackAndRuinCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rack and Ruin"), CardType::Instant, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Artifact, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CRadiantsJudgmentCard::CRadiantsJudgmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Radiant's Judgment"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new CreaturePowerComparer<std::greater<int>>(3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRadiantsJudgmentCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRadiantsJudgmentCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRebuildCard::CRebuildCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rebuild"), CardType::Instant, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRebuildCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRebuildCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CSickAndTiredCard::CSickAndTiredCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Sick and Tired"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") BLACK_MANA_TEXT,
		Power(-1), Life(-1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CSilkNetCard::CSilkNetCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Silk Net"), CardType::Instant, nID, AbilityType::Instant,
		GREEN_MANA_TEXT,
		Power(+1), Life(+1),
		CreatureKeyword::Reach, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CSwatCard::CSwatCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Swat"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Instant,
		new CreaturePowerComparer<std::less<int>>(3),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CSwatCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CSwatCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CUnearthCard::CUnearthCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Unearth"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	//Generic Cycle ability
	counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CUnearthCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CUnearthCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CUrzasBlueprintsCard::CUrzasBlueprintsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Urza's Blueprints"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
				_T(""), 1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
    {
		typedef
            TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay,
                               CWhenSelfInplay::EventCallback,
                               &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CUrzasBlueprintsCard::CreateTemporaryAbility),
                _T("6"),
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CUrzasBlueprintsCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUrzasBlueprintsCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay,
                               CWhenSelfInplay::EventCallback,
                               &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CUrzasBlueprintsCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                              CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CUrzasBlueprintsCard::CreateTemporaryAbility()
{
    return this;
}

void CUrzasBlueprintsCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CCloudOfFaeriesCard::CCloudOfFaeriesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloud of Faeries"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetSubjectCount(0, 2);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CCloudOfFaeriesCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CCloudOfFaeriesCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CPalinchronCard::CPalinchronCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Palinchron"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(5))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetSubjectCount(0, 7);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBoneShredderCard::CBoneShredderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bone Shredder"), CardType::Creature, CREATURE_TYPE(Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Artifact | CardType::Black, false));	// Exclude all artifact OR black cards
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CBoneShredderCard::CreateTemporaryAbility),
                _T("2") BLACK_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CBoneShredderCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBoneShredderCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CBoneShredderCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CBoneShredderCard::CreateTemporaryAbility()
{
    return this;
}

void CBoneShredderCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CDerangedHermitCard::CDerangedHermitCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Deranged Hermit"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Squirrel C"), 2972, 4);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Squirrel), false),
				Power(+1), Life(+1)));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CDerangedHermitCard::CreateTemporaryAbility),
                _T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CDerangedHermitCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDerangedHermitCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CDerangedHermitCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CDerangedHermitCard::CreateTemporaryAbility()
{
    return this;
}

void CDerangedHermitCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CGhituSlingerCard::CGhituSlingerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghitu Slinger"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CGhituSlingerCard::CreateTemporaryAbility),
                _T("2") RED_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CGhituSlingerCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGhituSlingerCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CGhituSlingerCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CGhituSlingerCard::CreateTemporaryAbility()
{
    return this;
}

void CGhituSlingerCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CKarmicGuideCard::CKarmicGuideCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Karmic Guide"), CardType::Creature, CREATURE_TYPE2(Angel, Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CKarmicGuideCard::CreateTemporaryAbility),
                _T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CKarmicGuideCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKarmicGuideCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CKarmicGuideCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CKarmicGuideCard::CreateTemporaryAbility()
{
    return this;
}

void CKarmicGuideCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CMultanisAcolyteCard::CMultanisAcolyteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Multani's Acolyte"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CMultanisAcolyteCard::CreateTemporaryAbility),
                GREEN_MANA_TEXT GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CMultanisAcolyteCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMultanisAcolyteCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CMultanisAcolyteCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CMultanisAcolyteCard::CreateTemporaryAbility()
{
    return this;
}

void CMultanisAcolyteCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CRadiantsDragoonsCard::CRadiantsDragoonsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Radiant's Dragoons"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CRadiantsDragoonsCard::CreateTemporaryAbility),
                _T("3") WHITE_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CRadiantsDragoonsCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRadiantsDragoonsCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CRadiantsDragoonsCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CRadiantsDragoonsCard::CreateTemporaryAbility()
{
    return this;
}

void CRadiantsDragoonsCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CSimianGruntsCard::CSimianGruntsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Simian Grunts"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(4))
{
	GetCardKeyword()->AddFlash(FALSE);
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CSimianGruntsCard::CreateTemporaryAbility),
                _T("2") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CSimianGruntsCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSimianGruntsCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CSimianGruntsCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CSimianGruntsCard::CreateTemporaryAbility()
{
    return this;
}

void CSimianGruntsCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CRingOfGixCard::CRingOfGixCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Gix"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T("1"),
				TRUE, FALSE,
				new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
    {
		typedef
            TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay,
                               CWhenSelfInplay::EventCallback,
                               &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
		cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CRingOfGixCard::CreateTemporaryAbility),
                _T("3"),
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CRingOfGixCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRingOfGixCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
    {
		typedef
            TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfInplay,
                               CWhenSelfInplay::EventCallback,
                               &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::CantBeCountered);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);
        cpAbility->SetSkipStack(TRUE);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CRingOfGixCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                              CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CRingOfGixCard::CreateTemporaryAbility()
{
    return this;
}

void CRingOfGixCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CScrapheapCard::CScrapheapCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Scrapheap"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("artifacts or enchantments")));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSnapCard::CSnapCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Snap"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new AnyCreatureComparer,
		ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

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
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetSubjectCount(0, 2);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFranticSearchCard::CFranticSearchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Frantic Search"), CardType::Instant, nID)
{
	{
		counted_ptr<CDrawCardSpell> cpSpell(
			::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT, 2));

		cpSpell->SetDiscard(2, FALSE, MoveType::Discard);

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
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetTargeting().SetSubjectCount(0, 3);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYavimayaGrangerCard::CYavimayaGrangerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Granger"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
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
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CYavimayaGrangerCard::CreateTemporaryAbility),
                _T("2") GREEN_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CYavimayaGrangerCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CYavimayaGrangerCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
}

bool CYavimayaGrangerCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext,
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CYavimayaGrangerCard::CreateTemporaryAbility()
{
    return this;
}

void CYavimayaGrangerCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CIronMaidenCard::CIronMaidenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Iron Maiden"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CIronMaidenCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CIronMaidenCard::BeforeResolution(CIronMaidenCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pHand = m_pGame->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() <= 4)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(pHand->GetSize() - 4));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CWheelOfTortureCard::CWheelOfTortureCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Wheel of Torture"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWheelOfTortureCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CWheelOfTortureCard::BeforeResolution(CWheelOfTortureCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pHand = m_pGame->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() >= 3)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(pHand->GetSize()- 3));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CSubversionCard::CSubversionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Subversion"), CardType::GlobalEnchantment, nID, 
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSubversionCard::BeforeResolution));
	
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);
	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSubversionCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			PrevLife = (int)pPlayer->GetLife();
			pModifier1.ApplyTo(pPlayer);
			NewLife = (int)pPlayer->GetLife();
			if (NewLife < PrevLife)
				LifeGain += PrevLife - NewLife;
		}
	}

	if (LifeGain > 0)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(+LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CRavenFamiliarCard::CRavenFamiliarCard(CGame* pGame, UINT nID)
    : CFlyingCreatureCard(pGame, _T("Raven Familiar"), CardType::Creature, CREATURE_TYPE(Bird), nID,
        _T("2") BLUE_MANA_TEXT, Power(1), Life(2))
{
    {
        typedef 
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef 
            TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->SetCreateAbilityCallback(
            CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
                &CRavenFamiliarCard::CreateTemporaryAbility),
                _T("2") BLUE_MANA_TEXT,
            CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
                &CRavenFamiliarCard::PreRemoveAbilityCallback));

        cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRavenFamiliarCard::SetTriggerContextE));
        cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef 
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenNodeChanged > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
    {
        typedef 
            TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
                                    CWhenSelfInplay::EventCallback,
                                    &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetCardKeywordMod().GetModifier().SetToRemove(CardKeyword::CantBeCountered);
        cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
        cpAbility->SetSkipStack(TRUE);
        cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

        AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		CZoneModifier* pModifier3 = new CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));	
		pModifier3->GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier3->GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier3->GetSelection(0).moveType = MoveType::Others;
		pModifier3->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to bootom
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // any cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		// and finally put the last ones on the bottom of the library
		pModifier3->SetReorderInformation(
			true, 
			ZoneId::Library,	
			CZoneModifier::RoleType::PrimaryPlayer,	// this player's library
			CardPlacement::Bottom);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier3);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRavenFamiliarCard::SetTriggerContextE(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, 
                                                CNode* pToNode) const
{
    return GetCardKeyword()->CantBeCountered() == TRUE;
}

CCard* CRavenFamiliarCard::CreateTemporaryAbility()
{
    return this;
}

void CRavenFamiliarCard::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
    CMoveCardModifier modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice);
    modifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CAngelicCuratorCard::CAngelicCuratorCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Angelic Curator"), CardType::Creature, CREATURE_TYPE2(Angel, Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CYavimayaScionCard::CYavimayaScionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yavimaya Scion"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CBouncingBeeblesCard::CBouncingBeeblesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bouncing Beebles"), CardType::Creature, CREATURE_TYPE(Beeble), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddUnblockableWalk(FALSE, CCardFilter::GetFilter(_T("artifact cards")));
}

//____________________________________________________________________________
//
CBrinkOfMadnessCard::CBrinkOfMadnessCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Brink of Madness"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->SetDiscardCount(SpecialNumber::All);

	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBrinkOfMadnessCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBrinkOfMadnessCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CBrinkOfMadnessCard::SetTriggerContext(CTriggeredDiscardCardAbility::TriggerContextType& triggerContext,
												CNode* pToNode) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

bool CBrinkOfMadnessCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	return pHand->GetSize() == 0;
}

//____________________________________________________________________________
//
CDefenseOfTheHeartCard::CDefenseOfTheHeartCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Defense of the Heart"), CardType::GlobalEnchantment, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpAbility->SetToZone(ZoneId::Battlefield);

	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDefenseOfTheHeartCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDefenseOfTheHeartCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDefenseOfTheHeartCard::SetTriggerContext(CTriggeredSearchLibraryAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 2)
		return true;

	return false;
}

bool CDefenseOfTheHeartCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 2)
		return true;

	return false;
}

//____________________________________________________________________________
//
CImpendingDisasterCard::CImpendingDisasterCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Impending Disaster"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CImpendingDisasterCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CImpendingDisasterCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	unsigned int nLandCount = 0;
	CZone* pZone;
	CPlayer* pPlayer;
	CCard* pCard;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int ic = 0; ic < pZone->GetSize(); ++ic)
		{
			pCard = pZone->GetAt(ic);
			if (pCard->GetCardType().IsLand()) ++nLandCount;
		}
	}

	return (nLandCount >= 7);
}

//____________________________________________________________________________
//
CPlanarCollapseCard::CPlanarCollapseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Planar Collapse"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPlanarCollapseCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CPlanarCollapseCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	unsigned int nCreatureCount = 0;
	CZone* pZone;
	CPlayer* pPlayer;
	CCard* pCard;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pPlayer = GetGame()->GetPlayer(ip);
		pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int ic = 0; ic < pZone->GetSize(); ++ic)
		{
			pCard = pZone->GetAt(ic);
			if (pCard->GetCardType().IsCreature()) ++nCreatureCount;
		}
	}

	return (nCreatureCount >= 4);
}

//____________________________________________________________________________
//
CThranLensCard::CThranLensCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Thran Lens"), CardType::Artifact, nID)
{
	counted_ptr<CCardTypeEnchantment> cpSpell(
		::CreateObject<CCardTypeEnchantment>(this,
			_T("2"),
			new TrueCardComparer,
			CardType::Null, CardType::_ColorMask));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRepopulateCard::CRepopulateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Repopulate"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetPlayerCardsSpell> cpSpell(
			::CreateObject<CTargetPlayerCardsSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT,
				ZoneId::Graveyard,
				CCardFilter::GetFilter(_T("creatures"))));

		CMoveCardModifier* pCardModifier = new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Library, TRUE);
		pCardModifier->SetShuffle(TRUE);
		cpSpell->AddCardModifier(pCardModifier);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CRepopulateCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CRepopulateCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRivalryCard::CRivalryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rivalry"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//Controller
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRivalryCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRivalryCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Opponent
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRivalryCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRivalryCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRivalryCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount2;
    }

	{
		if (nCount2 >= nCount1)
			return false;
	}

	return true;
}

bool CRivalryCard::BeforeResolution1(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount2;
    }

	{
		if (nCount2 >= nCount1)
			return false;
	}

	return true;
}

bool CRivalryCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CNode* pToNode) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

bool CRivalryCard::BeforeResolution2(TriggeredAbility::TriggeredActionType* pAction) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsLand())
            ++nCount2;
    }

	{
		if (nCount1 >= nCount2)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CSecondChanceCard::CSecondChanceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Second Chance"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));
	
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetPlayerEffect(PlayerEffectType::TimeWalk, FALSE, 1);

	cpAbility->GetTriggeredCardModifiers().push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSecondChanceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSecondChanceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CSecondChanceCard::SetTriggerContext(CTriggeredPlayerEffectAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();

	return pPlayer->GetLife() <= Life(5);
}

bool CSecondChanceCard::BeforeResolution(CSecondChanceCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();

	return pPlayer->GetLife() <= Life(5);
}

//____________________________________________________________________________
//
CInterveneCard::CInterveneCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Intervene"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature, false));
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));
	m_pCounterSpell->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	
}

//____________________________________________________________________________
//
CAboutFaceCard::CAboutFaceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("About Face"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CAuraFluxCard::CAuraFluxCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Aura Flux"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_Enchantment, false),	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this, &CAuraFluxCard::CreateAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CAuraFluxCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CUpkeepAbility> cpUpkeepAbility(::CreateObject<CUpkeepAbility>(pCard, _T("2")));
	return counted_ptr<CAbility>(cpUpkeepAbility.GetPointer());
}

//____________________________________________________________________________
//
CGoblinWelderCard::CGoblinWelderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Welder"), CardType::Creature, CREATURE_TYPE2(Goblin, Artificer), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CGoblinWelderAbility> cpAbility(
		::CreateObject<CGoblinWelderAbility>(this, _T("")));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

CActionContainer* CGoblinWelderCard::CGoblinWelderAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	// Remove actions which involve cards from different players
	CDoubleTargetSpellAction* pDoubleTargetAction;
	for (int ia = pActionContainer->GetSize() - 1; ia >= 0; --ia)
	{
		pDoubleTargetAction = dynamic_cast<CDoubleTargetSpellAction*>(pActionContainer->GetAt(ia).GetPointer());
		if (!pDoubleTargetAction) continue;

		if (pDoubleTargetAction->GetTargetGroup1().GetFirstCardSubject()->GetController() != pDoubleTargetAction->GetTargetGroup2().GetFirstCardSubject()->GetController())
			pActionContainer->RemoveAt(ia);
	}

	return pActionContainer;
}

CGoblinWelderCard::CGoblinWelderAbility::CGoblinWelderAbility(CCard* pCard, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, AbilityType::Activated, strManaCost,
		new CardTypeComparer(CardType::Artifact, false), FALSE,
		new CardTypeComparer(CardType::Artifact, false), FALSE,
		_T(" to replace"))
{	
	SetToActivatedAbility();

	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Neutral);
	GetTargeting1()->SetSubjectZoneId(ZoneId::Battlefield);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting2()->SetSubjectZoneId(ZoneId::Graveyard);
}

void CGoblinWelderCard::CGoblinWelderAbility::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2,
													const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	if (!pContainer1.GetSize() || !pContainer2.GetSize()) return;

	CMoveCardModifier modifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pContainer1.GetAt(0)->GetController());
	CMoveCardModifier modifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pContainer2.GetAt(0)->GetController());

	modifier2.ApplyTo(pContainer2.GetAt(0));
	modifier1.ApplyTo(pContainer1.GetAt(0));
}

//____________________________________________________________________________
//
CNoMercyCard::CNoMercyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("No Mercy"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt, 
						CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CNoMercyCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
	AddAbility(cpAbility.GetPointer());
}

bool CNoMercyCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage)
{
	if (!pCard->GetCardType().IsCreature()) return FALSE;
	else triggerContext.m_pCard = pCard;

	return true;
}

//____________________________________________________________________________
//
CMoltenHydraCard::CMoltenHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Molten Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))

{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT));

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, true,
				Life(-0), PreventableType::Preventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(_T("+1/+1")), SpecialNumber::All);
		cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->SetExtraActionValueVector(ContextValue(+1));

		AddAbility(cpAbility.GetPointer());
	}
}

//______________________________________________________________________________
//
CViashinoHereticCard::CViashinoHereticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viashino Heretic"), CardType::Creature, CREATURE_TYPE(Viashino), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") RED_MANA_TEXT, 
			new CardTypeComparer(CardType::Artifact, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViashinoHereticCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CViashinoHereticCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pPlayer = pAction->GetAssociatedCard()->GetController();
	int nCMC = pAction->GetAssociatedCard()->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	CLifeModifier* pModifier = new CLifeModifier(Life(-nCMC), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier->ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CTreefolkMysticCard::CTreefolkMysticCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treefolk Mystic"), CardType::Creature, CREATURE_TYPE(Treefolk), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback2, 
							&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTreefolkMysticCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTreefolkMysticCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTreefolkMysticCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
					CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return true;
}


bool CTreefolkMysticCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCreatureCard* pCreature = (CCreatureCard*)triggerContext.nValue1;

	CCardFilter cfilter(new EnchantedOnComparer(pCreature));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, &cfilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)));
		pModifier->ApplyTo(GetGame()->GetPlayer(ip));
	}

	return true;
}

//____________________________________________________________________________
//
CAnthroplasmCard::CAnthroplasmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anthroplasm"), CardType::Creature, CREATURE_TYPE(Shapeshifter), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, false, ZoneId::_AllZones, ZoneId::Battlefield, false);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().SetExtraManaCost();
		cpAbility->AddTapCost();
		
		cpAbility->SetAbilityText(_T("Remove all +1/+1 counters and put X +1/+1 counters on. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAnthroplasmCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAnthroplasmCard::BeforeResolution(CAbilityAction* pAction)
{
	int nExtra = pAction->GetCostConfigEntry().GetExtraValue();

	int nCounters = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	CCardCounterModifier modifier1 = CCardCounterModifier(_T("+1/+1"), -nCounters);
	modifier1.ApplyTo(this);

	CCardCounterModifier modifier2 = CCardCounterModifier(_T("+1/+1"), nExtra);
	modifier2.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CLastDitchEffortCard::CLastDitchEffortCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Last-Ditch Effort"), CardType::Instant, nID)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CLastDitchEffortCard::OnNumberSelected))
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLastDitchEffortCard::BeforeResolution));
	AddSpell(cpSpell.GetPointer());
}

bool CLastDitchEffortCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CCard* pCreature = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pAction->GetAssociatedPlayer();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	CCardFilter temp;
	temp.SetComparer(new AnyCreatureComparer);

	int nCreatures = temp.CountIncluded(pBattlefield->GetCardContainer());

	if (nCreatures > 0)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't sacrifice anything"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nCreatures; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;

			if (i == 1)
				entry.strText.Format(_T("Sacrifice %d creature"),
					i);
			else
				entry.strText.Format(_T("Sacrifice %d creatures"),
					i);

			entries.push_back(entry);
		}
		if (!pPlayer)
			m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pCreature, 0);
		else
			m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pPlayer, 1);
	}
	return true;
}

void CLastDitchEffortCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't sacrifice anything"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			else
			{
				int nValue = it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					if (nValue == 1)
						strMessage.Format(_T("%s sacrifices %d creature"), pSelectionPlayer->GetPlayerName(), nValue);
					else
						strMessage.Format(_T("%s sacrifices %d creatures"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CCardFilter temp;
				temp.SetComparer(new AnyCreatureComparer);

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
				pModifier1.AddSelection(MinimumValue(nValue), MaximumValue(nValue), // select cards to reorder
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::AllPlayers, // reveal to
					&temp, // what cards
					ZoneId::Graveyard, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on 
					MoveType::Sacrifice, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
				CLifeModifier pModifier2 = CLifeModifier(Life(-nValue), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
				
				pModifier1.ApplyTo(pSelectionPlayer);

				if (dwContext2 == 0)
					pModifier2.ApplyTo((CCreatureCard*)dwContext1);
				else
					pModifier2.ApplyTo((CPlayer*)dwContext1);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CAngelsTrumpetCard::CAngelsTrumpetCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angel's Trumpet"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0),
				CreatureKeyword::Vigilance));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef 
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAngelsTrumpetCard::BeforeResolution));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CAngelsTrumpetCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pPlayer = GetGame()->GetActivePlayer();
	CZone* pBattlefield = pPlayer->GetZoneById(ZoneId::Battlefield);

	int nDamage = 0;
	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);
		if (pCard->GetCardType().IsCreature() && pCard->GetOrientation()->IsUntapped() && !((CCreatureCard*)pCard)->GetCreatureFlag()->HasAttacked())
		{
			pModifier1.ApplyTo(pCard);
			nDamage++;
		}
	}

	CLifeModifier pModifier2 = CLifeModifier(Life(-nDamage), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	pModifier2.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CMemoryJarCard::CMemoryJarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Memory Jar"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("")));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMemoryJarCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CMemoryJarCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();

	CCountedCardContainer pSubjects;
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Hand, ZoneId::_ExileFaceDown, true, MoveType::Others, pController);
	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(7), MaximumValue(7));

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pHand = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Hand);

		for (int i = pHand->GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = pHand->GetAt(i);
			pModifier1.ApplyTo(pCard);

			if (pCard->GetZoneId() == ZoneId::_ExileFaceDown)
				pSubjects.AddCard(pCard, CardPlacement::Top);
		}
	}

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));

	CContainerEffectModifier pModifier3 = CContainerEffectModifier(GetGame(), _T("Memory Jar Effect"), 61080, &pSubjects);
	pModifier3.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
