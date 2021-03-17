	#include "stdafx.h"
#include "CardScourge.h"

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

		DEFINE_CARD(CAcceleratedMutationCard);
		DEFINE_CARD(CAgelessSentinelsCard);
		DEFINE_CARD(CAmbushCommanderCard);
		DEFINE_CARD(CAncientOozeCard);
		DEFINE_CARD(CArkOfBlightCard);
		DEFINE_CARD(CAstralSteelCard);
		DEFINE_CARD(CAvenLiberatorCard);
		DEFINE_CARD(CBladewingsThrallCard);
		DEFINE_CARD(CBladewingTheRisenCard);
		DEFINE_CARD(CBrainFreezeCard);
		DEFINE_CARD(CBreakAsunderCard);
		DEFINE_CARD(CCabalConditioningCard);
		DEFINE_CARD(CCarbonizeCard);
		DEFINE_CARD(CCarrionFeederCard);
		DEFINE_CARD(CChartoothCougarCard);
		DEFINE_CARD(CChillHauntingCard);
		DEFINE_CARD(CClawsOfWirewoodCard);
		DEFINE_CARD(CCoastWatcherCard);
		DEFINE_CARD(CConsumptiveGooCard);
		DEFINE_CARD(CDaruSpiritualistCard);
		DEFINE_CARD(CDaruWarchiefCard);
		DEFINE_CARD(CDawnElementalCard);
		DEFINE_CARD(CDayOfTheDragonsCard);
		DEFINE_CARD(CDeathsHeadBuzzardCard);
		DEFINE_CARD(CDecreeOfAnnihilationCard);
		DEFINE_CARD(CDecreeOfJusticeCard);
		DEFINE_CARD(CDecreeOfPainCard);
		DEFINE_CARD(CDecreeOfSavageryCard);
		DEFINE_CARD(CDecreeOfSilenceCard);
		DEFINE_CARD(CDispersalShieldCard);
		DEFINE_CARD(CDivergentGrowthCard);
		DEFINE_CARD(CDragonBreathCard);
		DEFINE_CARD(CDragonFangsCard);
		DEFINE_CARD(CDragonMageCard);
		DEFINE_CARD(CDragonScalesCard);
		DEFINE_CARD(CDragonShadowCard);
		DEFINE_CARD(CDragonspeakerShamanCard);
		DEFINE_CARD(CDragonstalkerCard);
		DEFINE_CARD(CDragonstormCard);
		DEFINE_CARD(CDragonTyrantCard);
		DEFINE_CARD(CDragonWingsCard);
		DEFINE_CARD(CEdgewalkerCard);
		DEFINE_CARD(CElvishAberrationCard);
		DEFINE_CARD(CEternalDragonCard);
		DEFINE_CARD(CExtraArmsCard);
		DEFINE_CARD(CFierceEmpathCard);
		DEFINE_CARD(CForgottenAncientCard);
		DEFINE_CARD(CFrozenSolidCard);
		DEFINE_CARD(CGildedLightCard);
		DEFINE_CARD(CGoblinWarchiefCard);
		DEFINE_CARD(CHinderingTouchCard);
		DEFINE_CARD(CHuntingPackCard);
		DEFINE_CARD(CKrosanDroverCard);
		DEFINE_CARD(CKrosanWarchiefCard);
		DEFINE_CARD(CKurgadonCard);
		DEFINE_CARD(CLingeringDeathCard);
		DEFINE_CARD(CLongTermPlansCard);
		DEFINE_CARD(CMetamorphoseCard);
		DEFINE_CARD(CMercurialKiteCard);
		DEFINE_CARD(CMisguidedRageCard);
		DEFINE_CARD(CNefashuCard);
		DEFINE_CARD(CNobleTemplarCard);
		DEFINE_CARD(COneWithNatureCard);
		DEFINE_CARD(CPemminsAuraCard);
		DEFINE_CARD(CPrimitiveEtchingsCard);
		DEFINE_CARD(CPutridRaptorCard);
		DEFINE_CARD(CPyrostaticPillarCard);
		DEFINE_CARD(CRavenGuildInitiateCard);
		DEFINE_CARD(CReapingTheGravesCard);
		DEFINE_CARD(CRecuperateCard);
		DEFINE_CARD(CRewardTheFaithfulCard);
		DEFINE_CARD(CRootElementalCard);
		DEFINE_CARD(CRushOfKnowledgeCard);
		DEFINE_CARD(CScattershotCard);
		DEFINE_CARD(CScornfulEgotistCard);
		DEFINE_CARD(CShorelineRangerCard);
		DEFINE_CARD(CSilverKnightCard);
		DEFINE_CARD(CSkirkVolcanistCard);
		DEFINE_CARD(CSkulltapCard);
		DEFINE_CARD(CSliverOverlordCard);
		DEFINE_CARD(CSparkSprayCard);
		DEFINE_CARD(CSproutingVinesCard);
		DEFINE_CARD(CStabilizerCard);
		DEFINE_CARD(CSulfuricVortexCard);
		DEFINE_CARD(CStifleCard);
		DEFINE_CARD(CTempleOfTheFalseGodCard);
		DEFINE_CARD(CTemporalFissureCard);
		DEFINE_CARD(CTendrilsofAgonyCard);
		DEFINE_CARD(CThundercloudElementalCard);
		DEFINE_CARD(CTitanicBulvoxCard);
		DEFINE_CARD(CTorrentOfFireCard);
		DEFINE_CARD(CTrapDiggerCard);
		DEFINE_CARD(CTreetopScoutCard);
		DEFINE_CARD(CTwistedAbominationCard);
		DEFINE_CARD(CUnburdenCard);
		DEFINE_CARD(CUncontrolledInfestationCard);
		DEFINE_CARD(CUndeadWarchiefCard);
		DEFINE_CARD(CUnspeakableSymbolCard);
		DEFINE_CARD(CVengefulDeadCard);
		DEFINE_CARD(CXantidSwarmCard);
		DEFINE_CARD(CWingShardsCard);
		DEFINE_CARD(CWipeCleanCard);
		DEFINE_CARD(CWirewoodGuardianCard);
		DEFINE_CARD(CWirewoodSymbioteCard);
		DEFINE_CARD(CWoodcloakerCard);
		DEFINE_CARD(CZombieCutthroatCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CDawnElementalCard::CDawnElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dawn Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	Life prevent(PreventionType::PreventAllDamage);
	CDamagePreventionEntry entry(prevent);
	entry.SetOneTurnOnly(FALSE);

	GetDamagePrevention().AddDamagePreventionEntry(entry);
}

//____________________________________________________________________________
//
CArkOfBlightCard::CArkOfBlightCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ark of Blight"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("3"),
			new CardTypeComparer(CardType::_Land, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAmbushCommanderCard::CAmbushCommanderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ambush Commander"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	{
		counted_ptr<CIsAlsoAEnchantment> cpAbility(
			::CreateObject<CIsAlsoAEnchantment>(this,
				new CardTypeComparer(CardType::Forest, false),
				_T("Elf AA"), 64042));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				Power(+3), Life(+3),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBladewingTheRisenCard::CBladewingTheRisenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Bladewing the Risen"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Dragon), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				BLACK_MANA_TEXT RED_MANA_TEXT,
				Power(+1), Life(+1),
				new CreatureTypeComparer(CREATURE_TYPE(Dragon), false)));

		cpAbility->GetGlobalCardFilter().AddNegateComparer(new AnyCreatureComparer);

		cpAbility->SetToActivatedAbility();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCarrionFeederCard::CCarrionFeederCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Carrion Feeder"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddCantBlock(FALSE);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));
		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CCoastWatcherCard::CCoastWatcherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Coast Watcher"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(1))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromGreen, FALSE);
}

//____________________________________________________________________________
//
CDeathsHeadBuzzardCard::CDeathsHeadBuzzardCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Death's-Head Buzzard"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElvishAberrationCard::CElvishAberrationCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Elvish Aberration"), CardType::Creature, CREATURE_TYPE2(Elf, Mutant), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(5),
		GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	//Forestcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("Forests"))));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CElvishAberrationCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CElvishAberrationCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CNobleTemplarCard::CNobleTemplarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Noble Templar"), CardType::Creature, CREATURE_TYPE3(Human, Cleric, Soldier), nID,
		_T("5") WHITE_MANA_TEXT, Power(3), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);

	//Plainscycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("Plains"))));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CNobleTemplarCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CNobleTemplarCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CShorelineRangerCard::CShorelineRangerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Shoreline Ranger"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("5") BLUE_MANA_TEXT, Power(3), Life(4))
{
	//Islandcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("Islands"))));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CShorelineRangerCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CShorelineRangerCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CSilverKnightCard::CSilverKnightCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Silver Knight"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CTreetopScoutCard::CTreetopScoutCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treetop Scout"), CardType::Creature, CREATURE_TYPE2(Elf, Scout), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	GetCreatureKeyword()->AddUnblockable(FALSE, CCardFilter::GetFilter(_T("flying creatures")));
}

//____________________________________________________________________________
//
CTwistedAbominationCard::CTwistedAbominationCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Twisted Abomination"), CardType::Creature, CREATURE_TYPE2(Zombie, Mutant), nID,
		_T("5") BLACK_MANA_TEXT, Power(5), Life(3),
		BLACK_MANA_TEXT)
{
	//Swampcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("Swamps"))));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CTwistedAbominationCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CTwistedAbominationCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CWirewoodGuardianCard::CWirewoodGuardianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirewood Guardian"), CardType::Creature, CREATURE_TYPE2(Elf, Mutant), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6))
{
	//Forestcycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("Forests"))));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CWirewoodGuardianCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CWirewoodGuardianCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CUnspeakableSymbolCard::CUnspeakableSymbolCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Unspeakable Symbol"), CardType::GlobalEnchantment, nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE));

	cpAbility->AddPayLifeDeltaCost(Life(-3));

	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1));
	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChartoothCougarCard::CChartoothCougarCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Chartooth Cougar"), CardType::Creature, CREATURE_TYPE2(Cat, Beast), nID,
		_T("5") RED_MANA_TEXT, Power(4), Life(4),
		RED_MANA_TEXT, Power(+1), Life(+0))
{
	//Mountaincycle ability
	counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
			_T("2"),
			CCardFilter::GetFilter(_T("Mountains"))));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CChartoothCougarCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CChartoothCougarCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CEternalDragonCard::CEternalDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Eternal Dragon"), CardType::Creature, CREATURE_TYPE2(Dragon, Spirit), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
	{
		counted_ptr<CSelfMoveCardAbility> cpAbility(
			::CreateObject<CSelfMoveCardAbility>(this,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->SetGraveyardOnly();
		cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Plainscycle ability
		counted_ptr<CActivatedAbility<CSearchCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchCyclingSpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("Plains"))));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CEternalDragonCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CEternalDragonCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CSliverOverlordCard::CSliverOverlordCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sliver Overlord"), CardType::_LegendaryCreature, CREATURE_TYPE2(Sliver, Mutant), nID,
		ALL_MANA_TEXT, Power(7), Life(7))
	, m_CardFilter(_T("a Sliver"), _T("Slivers"), new CreatureTypeComparer(CREATURE_TYPE(Sliver), false))
{
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("3"),
				&m_CardFilter, 
				ZoneId::Hand, TRUE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetRevealCards(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3"),
				new CreatureTypeComparer(CREATURE_TYPE(Sliver), false),
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVengefulDeadCard::CVengefulDeadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vengeful Dead"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetReportSelfMoves(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);//Vital part of the filter, need the next line to work
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Zombie), false));//This allow only Zombies to trigger the effect

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrimitiveEtchingsCard::CPrimitiveEtchingsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Primitive Etchings"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
		, m_ActivatedLastTurn(-1)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenCardDrew > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().SetRevealCards(TRUE);
	cpAbility->GetTrigger().SetFirstDrawOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPrimitiveEtchingsCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}
// Limits the trigger activation to once per turn
bool CPrimitiveEtchingsCard::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, 
	CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer)
{
	if (m_ActivatedLastTurn == GetGame()->GetGameTurnNumber()) return false;
	m_ActivatedLastTurn = GetGame()->GetGameTurnNumber();
	return true;
}

//____________________________________________________________________________
//
CUncontrolledInfestationCard::CUncontrolledInfestationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Uncontrolled Infestation"), CardType::EnchantLand, nID)
{
	counted_ptr<CAbilityEnchant> cpSpell(
		::CreateObject<CAbilityEnchant>(this,
			_T("1") RED_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			CAbilityEnchant::CreateAbilityCallback(this,
				&CUncontrolledInfestationCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::BasicLand, false));
	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CUncontrolledInfestationCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfOrientationChanged, 
							CWhenSelfOrientationChanged::EventCallback, 
							&CWhenSelfOrientationChanged::SetTapEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
		&CUncontrolledInfestationCard::SetTriggerContext));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CUncontrolledInfestationCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CDecreeOfSavageryCard::CDecreeOfSavageryCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Decree of Savagery"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("7") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0)));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDecreeOfSavageryCard::BeforeResolution));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfSavageryCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +4, false));

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDecreeOfSavageryCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Creature, true));

	CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter_temp,
		std::auto_ptr<CCardModifier>(new CCardCounterModifier(_T("+1/+1"), +4)));

	pModifier.ApplyTo(GetController());

	return true;
}

BOOL CDecreeOfSavageryCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CGildedLightCard::CGildedLightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Gilded Light"), CardType::Instant, nID)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpSpell(
			::CreateObject<CPlayerEffectEnchantment>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				PlayerEffectType::CantBeTargeted));

		cpSpell->SetAffectControllerOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGildedLightCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CGildedLightCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CRecuperateCard::CRecuperateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Recuperate"), CardType::Instant, nID)
{
	{
		// First spell
		counted_ptr<CChgLifeSpell> cpSpell(
			::CreateObject<CChgLifeSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT,
				Life(+6), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// Second spell
		counted_ptr<CTargetDamagePreventionSpell> cpSpell(
			::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT, 
				new AnyCreatureComparer, FALSE,
				Life(6), SourceColor::Null));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CSparkSprayCard::CSparkSprayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Spark Spray"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				RED_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CSparkSprayCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSparkSprayCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CWipeCleanCard::CWipeCleanCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wipe Clean"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell3> cpSpell(
			::CreateObject<CTargetMoveCardSpell3>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others,
				TRUE, FALSE));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("3")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWipeCleanCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CWipeCleanCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CBreakAsunderCard::CBreakAsunderCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Break Asunder"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	//Cycle ability
	 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
			_T("2")));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CBreakAsunderCard::CanPlay)));

	cpAbility->Add(cpTrait.GetPointer());
	cpAbility->SetHandOnly();
	cpAbility->AddDiscardCost();

	AddAbility(cpAbility.GetPointer());
}

BOOL CBreakAsunderCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CClawsOfWirewoodCard::CClawsOfWirewoodCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Claws of Wirewood"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") GREEN_MANA_TEXT,
		Life(-3),
		new AnyCreatureComparer, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	m_pGlobalChgLifeSpell->AddAbilityTag(AbilityTag::DamageSource);

	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CClawsOfWirewoodCard::CanPlay)));
		
		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CClawsOfWirewoodCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CMisguidedRageCard::CMisguidedRageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Misguided Rage"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
		::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Sorcery,					
			_T("2") RED_MANA_TEXT,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSkulltapCard::CSkulltapCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Skulltap"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLACK_MANA_TEXT, 2));

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUnburdenCard::CUnburdenCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unburden"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				2, MoveType::Discard, ZoneId::Graveyard, TRUE,
				TRUE,
				CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CUnburdenCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CUnburdenCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CAgelessSentinelsCard::CAgelessSentinelsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Ageless Sentinels"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") WHITE_MANA_TEXT, Power(4), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMorphCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback, 
								&CWhenSelfAttackedBlocked::SetBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddMorphToType(_T("4/4 Bird Giant creature with flying"), Power(4), Life(4), CREATURE_TYPE2(Bird, Giant), CreatureKeyword::Null); //has already flying

		CCreatureKeywordModifier* pModifier = new CCreatureKeywordModifier;
			pModifier->GetModifier().SetToRemove(CreatureKeyword::Defender);
			pModifier->GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetResolutionModifier().CCreatureModifiers::push_back(pModifier); //to remove defender
		//cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDragonTyrantCard::CDragonTyrantCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragon Tyrant"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("8") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddDoubleStrike(FALSE);

	AddUpkeepCost(RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFierceEmpathCard::CFierceEmpathCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Fierce Empath"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback,
			&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));
	cpAbility->SetToZone(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKurgadonCard::CKurgadonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kurgadon"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") GREEN_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +3));

//	cpAbility->GetLifeModifier().SetLifeDelta(Life(+3));
//	cpAbility->GetLifeModifier().SetToBase(TRUE);
//	cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
//	cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));
//	cpAbility->GetPowerModifier().SetToBase(TRUE);
//	cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNefashuCard::CNefashuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nefashu"), CardType::Creature, CREATURE_TYPE2(Zombie, Mutant), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								 CWhenSelfAttackedBlocked::AttackEventCallback,
								 &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetSubjectCount(0, 5);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTempleOfTheFalseGodCard::CTempleOfTheFalseGodCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Temple of the False God"), nID)
{
	counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("2")));

	cpNonbasicLandManaAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CTempleOfTheFalseGodCard::CanPlay)));

	cpNonbasicLandManaAbility->Add(cpTrait.GetPointer());

	AddAbility(cpNonbasicLandManaAbility.GetPointer());
}

BOOL CTempleOfTheFalseGodCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer()) > 4)
		return true;

	return false;
}

//____________________________________________________________________________
//
CPyrostaticPillarCard::CPyrostaticPillarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Pyrostatic Pillar"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDecreeOfJusticeCard::CDecreeOfJusticeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Decree of Justice"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Angel E"), 2971,
				0));

		cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
		cpSpell->SetExtraActionValueVector(ContextValue(1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		// Cycling ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("2") WHITE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfJusticeCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		// Cycle and put X soldier tokens onto the battlefield
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2") WHITE_MANA_TEXT,
				_T("Soldier E"), 2988,
				0));

		cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
		cpAbility->SetExtraActionValueVector();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfJusticeCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpAbility->AddAbilityTag(AbilityTag::Cycling);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CDecreeOfJusticeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CDecreeOfAnnihilationCard::CDecreeOfAnnihilationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Decree of Annihilation"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CDecreeOfAnnihilationCard::OnResolutionCompleted))
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("8") RED_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Land, false),
				ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfAnnihilationCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenThisCardCycled > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

void CDecreeOfAnnihilationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)));
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier1.ApplyTo(GetGame()->GetPlayer(ip));
	}
	
	CZoneCardModifier pModifier2 = CZoneCardModifier(ZoneId::Hand, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Exile, TRUE, MoveType::Others)));
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pModifier2.ApplyTo(GetGame()->GetPlayer(ip));
	}
}

BOOL CDecreeOfAnnihilationCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CXantidSwarmCard::CXantidSwarmCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Xantid Swarm"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		GREEN_MANA_TEXT, Power(0), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback, 
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetPlayerEffect(PlayerEffectType::CantPlaySpells, TRUE, (int)CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//______________________________________________________________________________
//
CExtraArmsCard::CExtraArmsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Extra Arms"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("4") RED_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CExtraArmsCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CExtraArmsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantedCard, pEnchantedCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLingeringDeathCard::CLingeringDeathCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Lingering Death"), CardType::EnchantCreature, nID,
		_T("1") BLACK_MANA_TEXT,
		new AnyCreatureComparer)
{
	m_pEnchantSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLingeringDeathCard::SetTriggerContext));

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

bool CLingeringDeathCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;

	triggerContext.m_pCard = m_pEnchantSpell->GetEnchantedOnCard();
	return pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController();
}

//____________________________________________________________________________
//
COneWithNatureCard::COneWithNatureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("One with Nature"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&COneWithNatureCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> COneWithNatureCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pEnchantCard, pEnchantedCard));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMetamorphoseCard::CMetamorphoseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Metamorphose"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer,
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();

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
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Stack, ZoneId::_Tokens));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetSubjectCount(1, 1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment | CardType::_Land, false));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDivergentGrowthCard::CDivergentGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Divergent Growth"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			GREEN_MANA_TEXT, 
			new CardTypeComparer(CardType::_Land, false),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDivergentGrowthCard::CreateAbility1)));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDivergentGrowthCard::CreateAbility2)));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDivergentGrowthCard::CreateAbility3)));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDivergentGrowthCard::CreateAbility4)));

	cpSpell->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDivergentGrowthCard::CreateAbility5)));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDivergentGrowthCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDivergentGrowthCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDivergentGrowthCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDivergentGrowthCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CDivergentGrowthCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWirewoodSymbioteCard::CWirewoodSymbioteCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wirewood Symbiote"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
	, m_CardFilter(_T("an Elf"), _T("Elves"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			FALSE, TRUE,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->SetMaxTurnUsageCount(1);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonstalkerCard::CDragonstalkerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragonstalker"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CFrozenSolidCard::CFrozenSolidCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Frozen Solid"), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+0))
{
	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

	CCardAbilityModifier* pModifier = new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CFrozenSolidCard::CreateAdditionalAbility));

	m_pChgPwrTghAttrEnchant->GetCardKeywordMod().LinkCardModifier(pModifier);
}

counted_ptr<CAbility> CFrozenSolidCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenDamageDealt,
						   CWhenDamageDealt::CreatureEventCallback, 
						   &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFrozenSolidCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

bool CFrozenSolidCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_pCard = (CCard*)pToCreature;
	return true;
}

//____________________________________________________________________________
//
CGoblinWarchiefCard::CGoblinWarchiefCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Goblin Warchief"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Goblin), false),
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDaruWarchiefCard::CDaruWarchiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Daru Warchief"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Soldier), false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Soldier), false),
				Power(+1), Life(+2), CreatureKeyword::Null));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDragonspeakerShamanCard::CDragonspeakerShamanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dragonspeaker Shaman"), CardType::Creature, CREATURE_TYPE3(Human, Barbarian, Shaman), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Dragon), false),
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEdgewalkerCard::CEdgewalkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Edgewalker"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CreatureTypeComparer(CREATURE_TYPE(Cleric), false),
			WHITE_MANA_TEXT BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrosanWarchiefCard::CKrosanWarchiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Warchief"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Beast), false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T("1") GREEN_MANA_TEXT,
				new CreatureTypeComparer(CREATURE_TYPE(Beast), false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUndeadWarchiefCard::CUndeadWarchiefCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Undead Warchief"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
			::CreateObject<CConsLessManaEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),
				_T("1")));
		ATLASSERT(cpAbility);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Zombie), false),
				Power(+2), Life(+1), CreatureKeyword::Null));
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThundercloudElementalCard::CThundercloudElementalCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thundercloud Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		counted_ptr<CGlobalTapSpell> cpAbility(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Activated,
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		cpAbility->GetGlobalCardFilter().AddComparer(new CreatureLifeComparer<std::less<int>>(3));

		cpAbility->SetToActivatedAbility();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Null));
		
		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);
		
		cpAbility->SetToActivatedAbility();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDragonShadowCard::CDragonShadowCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dragon Shadow"), nID, 
		_T("1") BLACK_MANA_TEXT,
		Power(+1), Life(+0), CreatureKeyword::Fear)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	

		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonShadowCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonShadowCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDragonShadowCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pCard->GetCardType().IsCreature() || !(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	triggerContext.m_pCreature = (CCreatureCard*)pCard;
	return true;
}

bool CDragonShadowCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (!(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);

	pModifier.ApplyTo((CCard*)this);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < GetSpells().GetSize(); ++i)
	{
		CChgPwrTghAttrEnchant* pEnchantSpell = dynamic_cast<CChgPwrTghAttrEnchant*>(GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->Enchant(triggerContext.m_pCreature, GetController(),GetSpells().GetAt(i)->GetActionValue());
		}
	}

	return true;
}

//____________________________________________________________________________
//
CKrosanDroverCard::CKrosanDroverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Drover"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new AnyCreatureComparer,
			_T("2")));
	ATLASSERT(cpAbility);

	cpAbility->GetEnchantmentCardFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonMageCard::CDragonMageCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Dragon Mage"), CardType::Creature, CREATURE_TYPE2(Dragon, Wizard), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CDragonMageCard::OnResolutionCompleted))
{
	typedef
		TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->SetDiscardCount(SpecialNumber::All);

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CDragonMageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(7), MaximumValue(7));

	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CDragonFangsCard::CDragonFangsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dragon Fangs"), nID, 
		_T("1") GREEN_MANA_TEXT,
		Power(+1), Life(+1), CreatureKeyword::Trample)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	

	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonFangsCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonFangsCard::SetTriggerContext));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(0));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDragonFangsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pCard->GetCardType().IsCreature() || !(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	triggerContext.m_pCreature = (CCreatureCard*)pCard;
	return true;
}

bool CDragonFangsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (!(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);

	pModifier.ApplyTo((CCard*)this);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < GetSpells().GetSize(); ++i)
	{
		CChgPwrTghAttrEnchant* pEnchantSpell = dynamic_cast<CChgPwrTghAttrEnchant*>(GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->Enchant(triggerContext.m_pCreature, GetController(),GetSpells().GetAt(i)->GetActionValue());
		}
	}

	return true;
}

//____________________________________________________________________________
//
CDragonScalesCard::CDragonScalesCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dragon Scales"), nID, 
		_T("1") WHITE_MANA_TEXT,
		Power(+1), Life(+2), CreatureKeyword::Vigilance)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	

	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonScalesCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonScalesCard::SetTriggerContext));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(0));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDragonScalesCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pCard->GetCardType().IsCreature() || !(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	triggerContext.m_pCreature = (CCreatureCard*)pCard;
	return true;
}

bool CDragonScalesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (!(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);

	pModifier.ApplyTo((CCard*)this);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < GetSpells().GetSize(); ++i)
	{
		CChgPwrTghAttrEnchant* pEnchantSpell = dynamic_cast<CChgPwrTghAttrEnchant*>(GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->Enchant(triggerContext.m_pCreature, GetController(),GetSpells().GetAt(i)->GetActionValue());
		}
	}

	return true;
}

//____________________________________________________________________________
//
CDragonWingsCard::CDragonWingsCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dragon Wings"), nID, 
		_T("1") BLUE_MANA_TEXT,
		Power(+0), Life(+0), CreatureKeyword::Flying)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	

		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater<int>>(5));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonWingsCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonWingsCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Generic Cycle ability
		counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("1") BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDragonWingsCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDragonWingsCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard,
										 CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pCard->GetCardType().IsCreature() || !(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	triggerContext.m_pCreature = (CCreatureCard*)pCard;
	return true;
}

bool CDragonWingsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	if (!(this->GetZone()->GetZoneId() == ZoneId::Graveyard))
		return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);

	pModifier.ApplyTo((CCard*)this);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < GetSpells().GetSize(); ++i)
	{
		CChgPwrTghAttrEnchant* pEnchantSpell = dynamic_cast<CChgPwrTghAttrEnchant*>(GetSpells().GetAt(i));
		if (!pEnchantSpell) 
			continue;
		{
			pEnchantSpell->Enchant(triggerContext.m_pCreature, GetController(),GetSpells().GetAt(i)->GetActionValue());
		}
	}

	return true;
}

BOOL CDragonWingsCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CBladewingsThrallCard::CBladewingsThrallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bladewing's Thrall"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
		cpAbility->SetConditionValue(1);
		
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBladewingsThrallCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBladewingsThrallCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBladewingsThrallCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CBladewingsThrallCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CDragonBreathCard::CDragonBreathCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Dragon Breath"), nID, 
		_T("1") RED_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Haste)
{
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pChgPwrTghAttrEnchant,
				RED_MANA_TEXT));

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+1)));

		cpAbility->SetAbilityText(_T("Enchanted creature gets +1/+0 until end of turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);	
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new ConvertedManaCostComparer<std::greater_equal<int>>(6));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonBreathCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonBreathCard::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDragonBreathCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (GetZone()->GetZoneId() != ZoneId::Graveyard)
		return false;

	triggerContext.nValue1 = reinterpret_cast<int>(pCard);
	return true;
}

bool CDragonBreathCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());
	CCard* pCard = reinterpret_cast<CCard*>(triggerContext.nValue1);

	if (GetZone()->GetZoneId() != ZoneId::Graveyard || pCard->GetZoneId() != ZoneId::Graveyard)
		return false;

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);
	pModifier.ApplyTo(this);

	for (int i = 0; i < GetSpells().GetSize(); ++i)
	{
		CChgPwrTghAttrEnchant* pEnchantSpell = dynamic_cast<CChgPwrTghAttrEnchant*>(GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(pCard, pAction->GetController(), GetSpells().GetAt(i)->GetActionValue());
	}

	return true;
}

//____________________________________________________________________________
//
CPemminsAuraCard::CPemminsAuraCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Pemmin's Aura"), CardType::EnchantCreature, nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				BLUE_MANA_TEXT));

		cpAbility->GetCardModifiers().Add(new CCardOrientationModifier(false));

		cpAbility->SetAbilityText(_T("Untap enchanted creature. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				BLUE_MANA_TEXT));

		cpAbility->GetCreatureModifiers().Add(new CCreatureKeywordModifier(CreatureKeyword::Flying, true));

		cpAbility->SetAbilityText(_T("Enchanted creature gains flying until end of turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				BLUE_MANA_TEXT));

		cpAbility->GetCardModifiers().Add(new CCardKeywordModifier(CardKeyword::Shroud, true));

		cpAbility->SetAbilityText(_T("Enchanted creature gains shroud until end of turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				_T("1")));

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(+1)));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpAbility->SetAbilityText(_T("Enchanted creature gets +1/-1 until end of turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CModifyEnchantedCardAbility> cpAbility(
			::CreateObject<CModifyEnchantedCardAbility>(this, m_pEnchantSpell,
				_T("1")));

		cpAbility->GetCreatureModifiers().Add(new CPowerModifier(Power(-1)));
		cpAbility->GetCreatureModifiers().Add(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpAbility->SetAbilityText(_T("Enchanted creature gets -1/+1 until end of turn. Activates"));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSulfuricVortexCard::CSulfuricVortexCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Sulfuric Vortex"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2)); 
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::CantGainLife));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CConsumptiveGooCard::CConsumptiveGooCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Consumptive Goo"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(_T("+1/+1"), +1));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTrapDiggerCard::CTrapDiggerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trap Digger"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("2") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				FALSE));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(TRAP_COUNTER, +1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));
		m_CardFilter.AddComparer(new CardCounterComparer<std::greater_equal<int>>(TRAP_COUNTER, 1));

		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AttackingCreatureComparer, FALSE,
				Life(-3), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->GetCost().AddSacrificeCardCost(1, &m_CardFilter);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStifleCard::CStifleCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stifle"), CardType::Instant, nID)
{
	{
		counted_ptr<CCounterAbilitySpell> cpSpell(
			::CreateObject<CCounterAbilitySpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT, CCardFilter::GetFilter(_T("cards"))));

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CTendrilsofAgonyCard::CTendrilsofAgonyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Tendrils of Agony"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(-2), PreventableType::NotPreventable));

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+2), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable

		cpSpell->SetDamageType(DamageType::NotDealingDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTendrilsofAgonyCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTendrilsofAgonyCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CTendrilsofAgonyCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CTendrilsofAgonyCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CTendrilsofAgonyCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CTendrilsofAgonyCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CAstralSteelCard::CAstralSteelCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Astral Steel"), CardType::Instant, nID, AbilityType::Instant,
		_T("2")  WHITE_MANA_TEXT,
		Power(+1), Life(+2),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAstralSteelCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAstralSteelCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CAstralSteelCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CAstralSteelCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CAstralSteelCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CAstralSteelCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CBrainFreezeCard::CBrainFreezeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Brain Freeze"), CardType::Instant, nID)	
{
	{
		counted_ptr<CTargetRevealLibraryCardSpell> cpSpell(
			::CreateObject<CTargetRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				3));

		cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBrainFreezeCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBrainFreezeCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CBrainFreezeCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CBrainFreezeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CBrainFreezeCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CBrainFreezeCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CDragonstormCard::CDragonstormCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dragonstorm"), CardType::Sorcery, nID)	
{
	m_CardFilter.SetFilterName(_T("a Dragon permanent"), _T("Dragon permanents"));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	{
		counted_ptr<CSearchLibrarySpell> cpSpell(
			::CreateObject<CSearchLibrarySpell>(this, AbilityType::Sorcery,
				_T("8") RED_MANA_TEXT,
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, FALSE, FALSE));

		cpSpell->SetSearchCount(MinimumValue(0), MaximumValue(1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDragonstormCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDragonstormCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CDragonstormCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CDragonstormCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CDragonstormCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CDragonstormCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CHinderingTouchCard::CHinderingTouchCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Hindering Touch"), CardType::Instant, nID,
		_T("3") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("2"));

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHinderingTouchCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHinderingTouchCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CHinderingTouchCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CHinderingTouchCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHinderingTouchCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CHinderingTouchCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CHuntingPackCard::CHuntingPackCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hunting Pack"), CardType::Instant, nID)	
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Instant,
				_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Beast F"), 2854,
				1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHuntingPackCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHuntingPackCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CHuntingPackCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CHuntingPackCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CHuntingPackCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CHuntingPackCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CReapingTheGravesCard::CReapingTheGravesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reaping the Graves"), CardType::Instant, nID)	
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				_T("2") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CReapingTheGravesCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CReapingTheGravesCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CReapingTheGravesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CReapingTheGravesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CReapingTheGravesCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CReapingTheGravesCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CScattershotCard::CScattershotCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Scattershot"), CardType::Instant, nID)	
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer,
				FALSE,
				Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScattershotCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScattershotCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CScattershotCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CScattershotCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CScattershotCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CScattershotCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CSproutingVinesCard::CSproutingVinesCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Sprouting Vines"), CardType::Instant, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Instant,
		CCardFilter::GetFilter(_T("basic lands")), 
		ZoneId::Hand, TRUE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(1));
	
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSproutingVinesCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSproutingVinesCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CSproutingVinesCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CSproutingVinesCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CSproutingVinesCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CSproutingVinesCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CTemporalFissureCard::CTemporalFissureCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Temporal Fissure"), CardType::Sorcery, nID)	
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Sorcery,
				_T("4") BLUE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTemporalFissureCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTemporalFissureCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CTemporalFissureCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}
bool CTemporalFissureCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CTemporalFissureCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}
counted_ptr<CAbility> CTemporalFissureCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CWingShardsCard::CWingShardsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Wing Shards"), CardType::Instant, nID)	
	, m_CardFilter(_T("an attacking creature"), _T("attacking creatures"), new AttackingCreatureComparer)
{
	{
		counted_ptr<CTargetPlayerSacrificeSpell> cpSpell(
			::CreateObject<CTargetPlayerSacrificeSpell>(this, AbilityType::Instant,					
				_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				&m_CardFilter));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
                                                ZoneId::_AllZones, ZoneId::Stack));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CWingShardsCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWingShardsCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}
bool CWingShardsCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
									 	  CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = GetGame()->GetTurnCastedSpellCount();

	if (pFromZone->GetZoneId() == ZoneId::_Tokens) return false;
	return true;
}

bool CWingShardsCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCardAbilityModifier* pAbilityModifier = new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CWingShardsCard::CreateAbility1));		

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), (CCard*)this, NULL, NULL, &pContainer, ZoneId::_Tokens);

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	for (int i = 0; i < triggerContext.nValue1 ; ++i)
	{
		pModifier.ApplyTo((CCard*)this);
	}

	for (int i = 0; i < pContainer.GetSize() ; ++i)
	{
		CCard* copy = pContainer.GetAt(i);
		pAbilityModifier->ApplyTo(copy);

		CCardKeywordModifier* pStormModifier = new CCardKeywordModifier;
		pStormModifier->GetModifier().SetToAdd(CardKeyword::StormCopy);
		pStormModifier->ApplyTo(copy);

		CSpecialEffectModifier triggerModifier = CSpecialEffectModifier(copy, 1);
		triggerModifier.ApplyTo(copy);
	}

	return true;
}

counted_ptr<CAbility> CWingShardsCard::CreateAbility1(CCard* pCard)
{
	typedef
			TTriggeredAbility< CTriggeredCopyCastAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetTriggerIndex(1);                                                // Certain index activated by modifier
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(pCard)); // Certain card activated by modifier

		cpAbility->SetSkipStack(TRUE);
	

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAcceleratedMutationCard::CAcceleratedMutationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Accelerated Mutation"), CardType::Instant, nID, AbilityType::Instant,
	    _T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAcceleratedMutationCard::BeforeResolution));
}

bool CAcceleratedMutationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		int nCost = pInplay->GetAt(i)->GetConvertedManaCost();
		if (nCost > nMaxCost) nMaxCost = nCost;
	}

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nMaxCost;
	Context.nValue2 = nMaxCost;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()), const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CCabalConditioningCard::CCabalConditioningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cabal Conditioning"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("6") BLACK_MANA_TEXT,
			0, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCabalConditioningCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCabalConditioningCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		int nCost = pInplay->GetAt(i)->GetConvertedManaCost();
		if (nCost > nMaxCost) nMaxCost = nCost;
	}


	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nMaxCost;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
	it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
	}
		
	return true;
}

//____________________________________________________________________________
//
CDispersalShieldCard::CDispersalShieldCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Dispersal Shield"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDispersalShieldCard::BeforeResolution));
}

bool CDispersalShieldCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		int nCost = pInplay->GetAt(i)->GetConvertedManaCost();
		if (nCost > nMaxCost) nMaxCost = nCost;
	}

	int n = pAction->GetAssociatedCard()->GetConvertedManaCost();

	return (n <= nMaxCost);
}

//____________________________________________________________________________
//
CRewardTheFaithfulCard::CRewardTheFaithfulCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Reward the Faithful"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,
		Life(+0), PreventableType::NotPreventable)
{
	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRewardTheFaithfulCard::BeforeResolution));
}

bool CRewardTheFaithfulCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		int nCost = pInplay->GetAt(i)->GetConvertedManaCost();
		if (nCost > nMaxCost) nMaxCost = nCost;
	}

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nMaxCost;

	for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CPlayer*>(*it),const_cast<const ContextValue&>(Context));
	}

	return true;
}

//____________________________________________________________________________
//
CRushOfKnowledgeCard::CRushOfKnowledgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rush of Knowledge"), CardType::Sorcery, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT, 0));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRushOfKnowledgeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CRushOfKnowledgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		int nCost = pInplay->GetAt(i)->GetConvertedManaCost();
		if (nCost > nMaxCost) nMaxCost = nCost;
	}

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = nMaxCost;

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CTorrentOfFireCard::CTorrentOfFireCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Torrent of Fire"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE, // Target player?
		Life(0), // Life delta
		PreventableType::Preventable) // Preventable?
{
	m_pTargetChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTorrentOfFireCard::BeforeResolution));
}

bool CTorrentOfFireCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nMaxCost = 0;

	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		int nCost = pInplay->GetAt(i)->GetConvertedManaCost();
		if (nCost > nMaxCost) nMaxCost = nCost;
	}

	if (pAction->GetAssociatedPlayer())
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nMaxCost;

		for (CSubjectGroup::PlayerSubjectIterator it = pTargetAction->GetTargetGroup().PlayerSubjectBegin();
		it != pTargetAction->GetTargetGroup().PlayerSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(*it, const_cast<const ContextValue&>(Context));
		}

		return true;
	}
	if (pAction->GetAssociatedCard())
	{
        CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = -nMaxCost;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)
		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;
	}

	return true;
}

//____________________________________________________________________________
//
CAncientOozeCard::CAncientOozeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancient Ooze"), CardType::Creature, CREATURE_TYPE(Ooze), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(0), Life(0))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CAncientOozeCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));
		
		cpAbility->GetTrigger().SetToControllerOnly(true);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAncientOozeCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::_AllZones));
		
		cpAbility->GetTrigger().SetToControllerOnly(true);

		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAncientOozeCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

void CAncientOozeCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pGrave = GetController()->GetZoneById(ZoneId::Battlefield);
		int p = 0;

		for (int i = 0; i < pGrave->GetSize(); ++i)
		{
			CCard* pCard = pGrave->GetAt(i);
			if (!pCard->GetCardType().IsLand() && pCard->GetCardType().IsCreature())
			p = p + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
		}

		p = p - 7;

		CPowerModifier* pPowerModifier = new CPowerModifier;
		pPowerModifier->SetPowerDelta(Power(p));
		pPowerModifier->SetToBase(TRUE);
		pPowerModifier->SetOneTurnOnly(FALSE);

		CLifeModifier* pLifeModifier = new CLifeModifier;
		pLifeModifier->SetLifeDelta(Life(p));
		pLifeModifier->SetToBase(TRUE);
		pLifeModifier->SetOneTurnOnly(FALSE);

		pLifeModifier->ApplyTo(this); pPowerModifier->ApplyTo(this);
	}
}

bool CAncientOozeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pGrave = GetController()->GetZoneById(ZoneId::Battlefield);
	int p = 0;

	for (int i = 0; i < pGrave->GetSize(); ++i)
	{
		CCard* pCard = pGrave->GetAt(i);
		if (!pCard->GetCardType().IsLand() && pCard->GetCardType().IsCreature())
		p = p + pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();
	}
	
	p = p - 7;
	
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(p)-(startpermanentpower-startpower), true);
	SetLife(NULL,Life(p)-(startpermanentlife-startlife));
	SetPermanentPower(Power(p), true);
	SetPermanentLife(Life(p), true);

	return true;
}

//____________________________________________________________________________
//
CCarbonizeCard::CCarbonizeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Carbonize"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AnyCreatureComparer, TRUE,
				Life(-3), PreventableType::Preventable));

		CReplacementKeywordModifier* pModifier1 = new CReplacementKeywordModifier();

		pModifier1->GetModifier().SetOneTurnOnly(TRUE);
		pModifier1->GetModifier().SetToAdd(ReplacementKeyword::GraveyardToExile);
		
		cpSpell->GetTargetModifier().CCardModifiers::push_back(pModifier1);

		CCreatureKeywordModifier* pModifier2 = new CCreatureKeywordModifier(CreatureKeyword::CantRegenerate, TRUE);
		cpSpell->GetTargetModifier().CCreatureModifiers::push_back(pModifier2);

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CTitanicBulvoxCard::CTitanicBulvoxCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Titanic Bulvox"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(4), _T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Beast);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Trample, true, false));
}

//____________________________________________________________________________
//
CChillHauntingCard::CChillHauntingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Chill Haunting"), CardType::Instant, nID)
{
	{
		/*
			Exile X creature cards from your graceyard, where X > 0.
			sample message: 
				Exile from graveyard Viscera Seer(1/1), Exile from graveyard Viscera Seer2(1/1): Casts Chill Haunting and targets Soulmender3(1/1)
		*/ 
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant, 
				_T("1") BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));  // bThisTurnOnly->TRUE this turn only
		
		// must be SpecialNumber::AnyPositive i.e. X > 0 so that X = 0 case is not included here 
		cpSpell->GetCost().AddExileGraveyardCardCost(SpecialNumber::AnyPositive, CCardFilter::GetFilter(_T("creatures")));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChillHauntingCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		/*
			Exile no creature cards from graveyard, X = 0.
			sample message: 
				Exile no creature cards from graveyard. Casts Chill Haunting and targets Soulmender3(1/1)
		*/
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant, 
				_T("1") BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));    // bThisTurnOnly->TRUE this turn only
		cpSpell->SetAbilityText(_T("Exile no creature cards from graveyard. Casts"));
		AddSpell(cpSpell.GetPointer());
	}
}

bool CChillHauntingCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nCount = pAction->GetCostConfigEntry().GetExileGraveyardCards()->GetSize();
	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = -nCount;
	Context.nValue2 = -nCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CPutridRaptorCard::CPutridRaptorCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Putrid Raptor"), CardType::Creature, CREATURE_TYPE3(Zombie, Lizard, Beast), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4), _T(""))
	, m_CardFilter(_T("a Zombie"), _T("Zombies"), new CreatureTypeComparer(CREATURE_TYPE(Zombie), false))
{
	AddCreatureType(SingleCreatureType::Zombie);
	AddCreatureType(SingleCreatureType::Lizard);
	AddCreatureType(SingleCreatureType::Beast);

	GetMorphAbility()->GetCost().AddDiscardCardCost(1, &m_CardFilter);
}

//____________________________________________________________________________
//
CRootElementalCard::CRootElementalCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Root Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5), _T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	AddCreatureType(SingleCreatureType::Elemental);

	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);	

	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(true);

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRavenGuildInitiateCard::CRavenGuildInitiateCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Raven Guild Initiate"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(4), _T(""))
	, m_CardFilter(_T("a Bird"), _T("Birds"), new CreatureTypeComparer(CREATURE_TYPE(Bird), false))
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);
	
	this->GetMorphAbility()->GetCost().AddReturnFromPlayCardCost(1, &m_CardFilter);

}

//____________________________________________________________________________
//
CScornfulEgotistCard::CScornfulEgotistCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Scornful Egotist"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("7") BLUE_MANA_TEXT, Power(1), Life(1), _T("") BLUE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Human);
	this->AddCreatureType(SingleCreatureType::Wizard);

}

//____________________________________________________________________________
//
CZombieCutthroatCard::CZombieCutthroatCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Zombie Cutthroat"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(4), _T(""))
{
	this->AddCreatureType(SingleCreatureType::Zombie);
	
	this->GetMorphAbility()->AddPayLifeDeltaCost(Life(-5));

}

//____________________________________________________________________________
//
CAvenLiberatorCard::CAvenLiberatorCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Aven Liberator"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3), _T("3") WHITE_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Bird);
	this->AddCreatureType(SingleCreatureType::Soldier);
	this->AddCreatureModifier(new CCreatureKeywordModifier(CreatureKeyword::Flying, true, false));
	{
		typedef
			TTriggeredTargetAbility< CTriggeredGainKeywordAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);		
		cpAbility->GetTargeting().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromWhite, TRUE, _T("white"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlue, TRUE, _T("blue"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromBlack, TRUE, _T("black"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromRed, TRUE, _T("red"));
		cpAbility->AddCardKeywordToSelection(CardKeyword::ProtectionFromGreen, TRUE, _T("green"));

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkirkVolcanistCard::CSkirkVolcanistCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Skirk Volcanist"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(1), _T(""))
{
	this->AddCreatureType(SingleCreatureType::Goblin);
	this->GetMorphAbility()->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Mountains")));
	{
		typedef
			TTriggeredTargetDivisionAbility< CTriggeredDividedModifyLifeAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-5));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetTargeting().SetDistributeValues();
		cpAbility->SetValueToDistribute(-3);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWoodcloakerCard::CWoodcloakerCard(CGame* pGame, UINT nID)
	: CMorphCreatureCard(pGame, _T("Woodcloaker"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("5") GREEN_MANA_TEXT, Power(3), Life(3), _T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT)
{
	this->AddCreatureType(SingleCreatureType::Elf);
	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Trample);
		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->GetTrigger().SetTriggerIndex(UNMORPH_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this)); // Certain card activated by modifier

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CDaruSpiritualistCard::CDaruSpiritualistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Daru Spiritualist"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Cleric), false));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDaruSpiritualistCard::SetTriggerContext));
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CDaruSpiritualistCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	triggerContext.m_pCreature = (CCreatureCard*)pToCard;
	return true;
}

//____________________________________________________________________________
//
CDecreeOfPainCard::CDecreeOfPainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Decree of Pain"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDecreeOfPainCard::OnResolutionCompleted))
	, m_nCards(0)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("6") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));
		ATLASSERT(cpSpell);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDecreeOfPainCard::BeforeResolution));
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfPainCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenThisCardCycled > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDecreeOfPainCard::BeforeResolution(CAbilityAction* pAction)
{
	m_nCards = 0;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards += CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}

	return true;
}

void CDecreeOfPainCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) 
		return;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pInplay = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_nCards -= CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pInplay->GetCardContainer());
	}

	CDrawCardModifier* pModifier = new CDrawCardModifier(GetGame(), MinimumValue(m_nCards), MaximumValue(m_nCards));
	pModifier->ApplyTo(pAbilityAction->GetController());
}

BOOL CDecreeOfPainCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CForgottenAncientCard::CForgottenAncientCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forgotten Ancient"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(3))
		, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForgottenAncientCard::OnCardSelected))
		, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CForgottenAncientCard::OnNumberSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
			
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CForgottenAncientCard::BeforeResolution));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CForgottenAncientCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddNegateComparer(new CardKeywordComparer(CardKeyword::CantGetCounters, false));

	int nLegal = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		nLegal += m_CardFilter.CountIncluded(pZone->GetCardContainer());
	}

	if ((GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0) && (nLegal > 0))
		CardSelection(pAction->GetController());

	return true;
}

void CForgottenAncientCard::CardSelection(CPlayer* pPlayer)
{
	CCardFilter m_CardFilter;
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddNegateComparer(new CardKeywordComparer(CardKeyword::CantGetCounters, false));

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Stop moving counters"));

		entries.push_back(selectionEntry);
	}
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pBattlefield = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (m_CardFilter.IsCardIncluded(pCard))
			{
				SelectionEntry entry;
					entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
								
				entry.strText.Format(_T("Move counters on %s"),
					pCard->GetCardName(TRUE));
					entries.push_back(entry);
			}
					
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer);
}

void CForgottenAncientCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s stops the effect"), pSelectionPlayer->GetPlayerName());
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
				NumberSelection(pCard, pSelectionPlayer);

				return;
			}
		}
}

void CForgottenAncientCard::NumberSelection(CCard* pCard, CPlayer* pPlayer)
{
	int nCounters = GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount();

	std::vector<SelectionEntry> entries;
	for (int i = 1; i <= nCounters; ++i)
	{
		SelectionEntry entry;
			entry.dwContext = i;
								
		entry.strText.Format(_T("Move %d +1/+1 counters from %s to %s"),
			i, GetCardName(TRUE), pCard->GetCardName(TRUE));
			entries.push_back(entry);
	}
	m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pCard);
}

void CForgottenAncientCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nCounter = (int)it->dwContext;
			CCard* pCard = (CCard*)dwContext1;
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s moves %d +1/+1 counters from %s to %s"), pSelectionPlayer->GetPlayerName(), nCounter, GetCardName(TRUE), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CCardCounterModifier pModifier1 = CCardCounterModifier(_T("+1/+1"), -nCounter);
			CCardCounterModifier pModifier2 = CCardCounterModifier(_T("+1/+1"), nCounter);

			pModifier1.ApplyTo(this);
			pModifier2.ApplyTo(pCard);

			if (GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0)
				CardSelection(pSelectionPlayer);

			return;
		}
}

//____________________________________________________________________________
//
CDayOfTheDragonsCard::CDayOfTheDragonsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Day of the Dragons"), CardType::GlobalEnchantment, nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDayOfTheDragonsCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDayOfTheDragonsCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDayOfTheDragonsCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::Exile, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CDayOfTheDragonsCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CDayOfTheDragonsCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CDayOfTheDragonsCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CDayOfTheDragonsCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CDayOfTheDragonsCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	int nExiled = 0;

	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetCardType().IsCreature())
		{
			nExiled++;
			if (!pCard->GetCardType().IsToken())
				pExiled.AddCard(pCard, CardPlacement::Top);
		}
	}

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others, pController)));
	pModifier1.ApplyTo(pController);

	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Dragon E"), 2866, nExiled);
	pModifier2.ApplyTo(pController);
	
	return true;
}

bool CDayOfTheDragonsCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);
	CCardFilter m_CardFilter1;
	m_CardFilter1.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Dragon), false));

	CZoneCardModifier pModifier1 = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter1,
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController)));
	pModifier1.ApplyTo(pController);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pCard->Move(pBattlefield, pController, MoveType::Others);
	}
	
	return true;
}

void CDayOfTheDragonsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CMercurialKiteCard::CMercurialKiteCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Mercurial Kite"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMercurialKiteCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMercurialKiteCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

bool CMercurialKiteCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool CMercurialKiteCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;
	
	CCardOrientationModifier pModifier1 = CCardOrientationModifier();
	CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::NoUntapInNextContUntap, TRUE, FALSE);

	pModifier1.ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
CDecreeOfSilenceCard::CDecreeOfSilenceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Decree of Silence"), CardType::GlobalEnchantment, nID,
		_T("6") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CDecreeOfSilenceCard::OnResolutionCompleted))
{
	{
		typedef 
			TTriggeredAbility< CTriggeredCounterSpellAbility, CWhenSpellCast >  TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDecreeOfSilenceCard::SetTriggerContext));		
		
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::Counterspell);
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Cycle ability
		 counted_ptr<CActivatedAbility<CCyclingSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCyclingSpell>>(this,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfSilenceCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());
		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Cycle ability and counter target spell
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				new TrueCardComparer));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDecreeOfSilenceCard::CanPlay)));

		cpAbility->SetHandOnly();
		cpAbility->AddDiscardCost();

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

		cpAbility->AddAbilityTag(AbilityTag::Cycling);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDecreeOfSilenceCard::SetTriggerContext(CTriggeredCounterSpellAbility::TriggerContextType& triggerContext, 
										 CCard* pCard) const
{
	triggerContext.m_pCard = pCard;
	
	return true;
}

void CDecreeOfSilenceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!IsInplay()) return;

	CCardCounterModifier pModifier1 = CCardCounterModifier(DEPLETION_COUNTER, +1);
	pModifier1.ApplyTo(this);

	if (GetCounterContainer()->GetCounter(DEPLETION_COUNTER)->GetCount() > 2)
	{
		CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAbilityAction->GetController());
		pModifier2.ApplyTo(this);
	}
}

BOOL CDecreeOfSilenceCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoCycling));
}

//____________________________________________________________________________
//
CStabilizerCard::CStabilizerCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Stabilizer"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoCycling));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLongTermPlansCard::CLongTermPlansCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Long-Term Plans"), CardType::Instant, nID)
{	
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("2") BLUE_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLongTermPlansCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CLongTermPlansCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	CCountedCardContainer pFound;
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController, MinimumValue(1), MaximumValue(1), pController, 
															ZoneId::Library, CCardFilter::GetFilter(_T("cards")), ZoneId::Library, TRUE, CardPlacement::Top, FALSE, FALSE, FALSE, &pFound);
	pModifier.ApplyTo(pController);

	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);

	int nSize = pLibrary->GetSize();

	if (nSize > 2)
	{
		pLibrary->GetAt(nSize - 3)->Move(pLibrary, pController, MoveType::Others, CardPlacement::Top);
		pLibrary->GetAt(nSize - 3)->Move(pLibrary, pController, MoveType::Others, CardPlacement::Top);
	}
	else if (nSize == 2)
		pLibrary->GetAt(1)->Move(pLibrary, pController, MoveType::Others, CardPlacement::Top);

	return true;
}

//____________________________________________________________________________
//
