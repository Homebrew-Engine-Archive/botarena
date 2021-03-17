#include "stdafx.h"
#include "CardNemesis.h"

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

		DEFINE_CARD(CAEtherBarrierCard);
		DEFINE_CARD(CAccumulatedKnowledgeCard);
		DEFINE_CARD(CAirBladderCard);
		DEFINE_CARD(CAncientHydraCard);
		DEFINE_CARD(CAngelicFavorCard);
		DEFINE_CARD(CAnimateLandCard);
		DEFINE_CARD(CArcMageCard);
		DEFINE_CARD(CAvengerEnDalCard);
		DEFINE_CARD(CBattlefieldPercherCard);
		DEFINE_CARD(CBelbesArmorCard);
		DEFINE_CARD(CBelbesPercherCard);
		DEFINE_CARD(CBelbesPortalCard);
		DEFINE_CARD(CBlastodermCard);
		DEFINE_CARD(CBolaWarriorCard);
		DEFINE_CARD(CChieftainEnDalCard);
		DEFINE_CARD(CCloudskateCard);
		DEFINE_CARD(CCoilingWoodwormCard);
		DEFINE_CARD(CComplexAutomatonCard);
		DEFINE_CARD(CDarkTriumphCard);
		DEFINE_CARD(CDazeCard);
		DEFINE_CARD(CDefenderEnVecCard);
		DEFINE_CARD(CDefiantFalconCard);
		DEFINE_CARD(CDiviningWitchCard);
		DEFINE_CARD(CDominateCard);
		DEFINE_CARD(CDownhillChargeCard);
		DEFINE_CARD(CEnsnareCard);
		DEFINE_CARD(CEyeOfYawgmothCard);
		DEFINE_CARD(CFanaticalDevotionCard);
		DEFINE_CARD(CFlintGolemCard);
		DEFINE_CARD(CFlameRiftCard);
		DEFINE_CARD(CFlowstoneOverseerCard);
		DEFINE_CARD(CFlowstoneStrikeCard);
		DEFINE_CARD(CFlowstoneSurgeCard);
		DEFINE_CARD(CFlowstoneThopterCard);
		DEFINE_CARD(CFlowstoneWallCard);
		DEFINE_CARD(CInfiltrateCard);
		DEFINE_CARD(CJoltingMerfolkCard);
		DEFINE_CARD(CKorHavenCard);
		DEFINE_CARD(CLawbringerCard);
		DEFINE_CARD(CLightbringerCard);
		DEFINE_CARD(CLinSivviDefiantHeroCard);
		DEFINE_CARD(CMassacreCard);
		DEFINE_CARD(CMoggAlarmCard);
		DEFINE_CARD(CMoggcatcherCard);
		DEFINE_CARD(CMoggSalvageCard);
		DEFINE_CARD(CMoggToadyCard);
		DEFINE_CARD(CMossdogCard);
		DEFINE_CARD(CNestingWurmCard);
		DEFINE_CARD(CNetterEnDalCard);
		DEFINE_CARD(CNobleStandCard);
		DEFINE_CARD(COffBalanceCard);
		DEFINE_CARD(COraxidCard);
		DEFINE_CARD(COverlaidTerrainCard);
		DEFINE_CARD(CPackHuntCard);
		//DEFINE_CARD(CParallaxNexusCard);
		DEFINE_CARD(CParallaxTideCard);
		DEFINE_CARD(CParallaxWaveCard);
		DEFINE_CARD(CPhyrexianDriverCard);
		DEFINE_CARD(CPhyrexianProwlerCard);
		DEFINE_CARD(CPlagueWitchCard);
		DEFINE_CARD(CPredatorFlagshipCard);
		DEFINE_CARD(CRacklingCard);
		DEFINE_CARD(CRathiAssassinCard);
		DEFINE_CARD(CRathiFiendCard);
		DEFINE_CARD(CRathiIntimidatorCard);
		DEFINE_CARD(CRathsEdgeCard);
		DEFINE_CARD(CRefreshingRainCard);
		DEFINE_CARD(CRejuvenationChamberCard);
		DEFINE_CARD(CReverentSilenceCard);
		DEFINE_CARD(CRisingWatersCard);
		DEFINE_CARD(CRustingGolemCard);
		DEFINE_CARD(CSaprolingBurstCard);
		DEFINE_CARD(CSeahunterCard);
		DEFINE_CARD(CSealOfCleansingCard);
		DEFINE_CARD(CSealOfDoomCard);
		DEFINE_CARD(CSealOfFireCard);
		DEFINE_CARD(CSealOfRemovalCard);
		DEFINE_CARD(CSealOfStrengthCard);
		DEFINE_CARD(CShriekingMoggCard);
		DEFINE_CARD(CSilkenfistFighterCard);
		DEFINE_CARD(CSilkenfistOrderCard);
		DEFINE_CARD(CSivvisRuseCard);
		DEFINE_CARD(CSkyshroudBehemothCard);
		DEFINE_CARD(CSkyshroudClaimCard);
		DEFINE_CARD(CSkyshroudCutterCard);
		DEFINE_CARD(CSkyshroudPoacherCard);
		DEFINE_CARD(CSkyshroudSentinelCard);
		DEFINE_CARD(CSkyshroudRidgebackCard);
		DEFINE_CARD(CSliptideSerpentCard);
		DEFINE_CARD(CSpiritualAsylumCard);
		DEFINE_CARD(CSpitefulBullyCard);
		DEFINE_CARD(CStampedeDriverCard);
		DEFINE_CARD(CStrongholdBiologistCard);
		DEFINE_CARD(CStrongholdMachinistCard);
		DEFINE_CARD(CStrongholdZeppelinCard);
		DEFINE_CARD(CSubmergeCard);
		DEFINE_CARD(CTangleWireCard);
		DEFINE_CARD(CTerrainGeneratorCard);
		DEFINE_CARD(CTricksterMageCard);
		DEFINE_CARD(CViselingCard);
		DEFINE_CARD(CVoiceOfTruthCard);
		DEFINE_CARD(CVolrathTheFallenCard);
		DEFINE_CARD(CWildMammothCard);
		DEFINE_CARD(CWoodripperCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CFlameRiftCard::CFlameRiftCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Flame Rift"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("1") RED_MANA_TEXT,
		Life(-4),
		FALSE_CARD_COMPARER, TRUE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
}

//____________________________________________________________________________
//
CFlowstoneOverseerCard::CFlowstoneOverseerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flowstone Overseer"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT RED_MANA_TEXT,
			Power(+1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CFlowstoneStrikeCard::CFlowstoneStrikeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flowstone Strike"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("1") RED_MANA_TEXT,
			Power(+1), Life(-1), 
			CreatureKeyword::Haste, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneSurgeCard::CFlowstoneSurgeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Flowstone Surge"), CardType::GlobalEnchantment, nID,
		_T("1") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+1), Life(-1)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CArcMageCard::CArcMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Arc Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T("2") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->GetTargeting()->SetDistributeValues();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvengerEnDalCard::CAvengerEnDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Avenger en-Dal"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell3>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell3>>(this,
			_T("2") WHITE_MANA_TEXT,
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others,
			FALSE, TRUE)); //gain Power?, gain Toughness?

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetCreatureControllerGainLife(TRUE);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattlefieldPercherCard::CBattlefieldPercherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Battlefield Percher"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T("1") BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBelbesPercherCard::CBelbesPercherCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Belbe's Percher"), CardType::Creature, CREATURE_TYPE(Bird), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);
}

//____________________________________________________________________________
//
CBolaWarriorCard::CBolaWarriorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bola Warrior"), CardType::Creature, CREATURE_TYPE3(Human, Spellshaper, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantBlock, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CChieftainEnDalCard::CChieftainEnDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Chieftain en-Dal"), CardType::Creature, CREATURE_TYPE2(Human, Knight), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AttackingCreatureComparer);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCoilingWoodwormCard::CCoilingWoodwormCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Coiling Woodworm"), CardType::Creature, CREATURE_TYPE2(Insect, Worm), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(1))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));

	cpAbility->SetChangePowerOnly();

	cpAbility->SetListenToAllPlayersZones();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDefiantFalconCard::CDefiantFalconCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Defiant Falcon"), CardType::Creature, CREATURE_TYPE2(Rebel, Bird), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))

	, m_CardFilter(_T("a Rebel"), _T("Rebels"), new CreatureTypeComparer(CREATURE_TYPE(Rebel), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
	m_CardFilter.SetFilterName(_T("a Rebel permanent with converted mana cost 3 or less"), _T("Rebel permanents with converted mana cost 3 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("4"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CFlowstoneWallCard::CFlowstoneWallCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") RED_MANA_TEXT, Power(0), Life(6),
		RED_MANA_TEXT, Power(+1), Life(-1))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CLawbringerCard::CLawbringerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lawbringer"), CardType::Creature, CREATURE_TYPE2(Kor, Rebel), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature | CardType::Red, true),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLightbringerCard::CLightbringerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lightbringer"), CardType::Creature, CREATURE_TYPE2(Kor, Rebel), nID,
		_T("2") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoggcatcherCard::CMoggcatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moggcatcher"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	m_CardFilter.SetFilterName(_T("a Goblin permanent"), _T("Goblin permanents"));
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CNestingWurmCard::CNestingWurmCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nesting Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("4") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
								CWhenSelfInplay::EventCallback, 
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(3));
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Nesting Wurm")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNetterEnDalCard::CNetterEnDalCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Netter en-Dal"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::CantAttack, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COraxidCard::COraxidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Oraxid"), CardType::Creature, CREATURE_TYPE2(Crab, Beast), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(3))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);
}

//____________________________________________________________________________
//
CPhyrexianDriverCard::CPhyrexianDriverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phyrexian Driver"), CardType::Creature, CREATURE_TYPE2(Zombie, Mercenary), nID,
		_T("2") BLACK_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPlagueWitchCard::CPlagueWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Plague Witch"), CardType::Creature, CREATURE_TYPE2(Elf, Spellshaper), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			BLACK_MANA_TEXT,
			Power(-1), Life(-1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CRathiAssassinCard::CRathiAssassinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rathi Assassin"), CardType::Creature, CREATURE_TYPE3(Zombie, Mercenary, Assassin), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
		m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 3 or less"), _T("Mercenary permanents with converted mana cost 3 or less"));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("3"),
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, FALSE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRathiFiendCard::CRathiFiendCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rathi Fiend"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
		m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(4));
		m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 3 or less"), _T("Mercenary permanents with converted mana cost 3 or less"));

		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("3"),
				&m_CardFilter,
				ZoneId::Battlefield, FALSE, FALSE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage); // life lost
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRathiIntimidatorCard::CRathiIntimidatorCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rathi Intimidator"), CardType::Creature, CREATURE_TYPE2(Horror, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))

	, m_CardFilter(_T("a Mercenary"), _T("Mercenaries"), new CreatureTypeComparer(CREATURE_TYPE(Mercenary), false))
{
	GetCreatureKeyword()->AddFear(FALSE);
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less<int>>(3));
	m_CardFilter.SetFilterName(_T("a Mercenary permanent with converted mana cost 2 or less"), _T("Mercenary permanents with converted mana cost 2 or less"));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("2"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CSeahunterCard::CSeahunterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Seahunter"), CardType::Creature, CREATURE_TYPE2(Human, Mercenary), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Merfolk permanent"), _T("Merfolk permanents"), new CreatureTypeComparer(CREATURE_TYPE(Merfolk), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CShriekingMoggCard::CShriekingMoggCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Shrieking Mogg"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilkenfistFighterCard::CSilkenfistFighterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silkenfist Fighter"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSilkenfistOrderCard::CSilkenfistOrderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silkenfist Order"), CardType::Creature, CREATURE_TYPE2(Kor, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSkyshroudPoacherCard::CSkyshroudPoacherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Poacher"), CardType::Creature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("an Elf permanent"), _T("Elf permanents"), new CreatureTypeComparer(CREATURE_TYPE(Elf), false))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CSkyshroudSentinelCard::CSkyshroudSentinelCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Sentinel"), CardType::Creature, CREATURE_TYPE(Elf), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfInplay,
							CWhenSelfInplay::EventCallback, 
							&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(3));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Skyshroud Sentinel")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSliptideSerpentCard::CSliptideSerpentCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sliptide Serpent"), CardType::Creature, CREATURE_TYPE(Serpent), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CSelfMoveCardAbility> cpAbility(
		::CreateObject<CSelfMoveCardAbility>(this,
			_T("3") BLUE_MANA_TEXT,
			ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpitefulBullyCard::CSpitefulBullyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spiteful Bully"), CardType::Creature, CREATURE_TYPE2(Zombie, Mercenary), nID,
		_T("1") BLACK_MANA_TEXT, Power(3), Life(3))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStampedeDriverCard::CStampedeDriverCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stampede Driver"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpAbility(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
			_T("1") GREEN_MANA_TEXT,
			Power(+1), Life(+1),
			new AnyCreatureComparer));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->SetToActivatedAbility();

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier;
	pModifier1->GetModifier().SetOneTurnOnly(TRUE);
	pModifier1->GetModifier().SetToAdd(CreatureKeyword::Trample);

	CZoneCreatureModifier* pModifier = new CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(pModifier1));

	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrongholdBiologistCard::CStrongholdBiologistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stronghold Biologist"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrongholdMachinistCard::CStrongholdMachinistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stronghold Machinist"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new NegateCardComparer(new AnyCreatureComparer)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStrongholdZeppelinCard::CStrongholdZeppelinCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Stronghold Zeppelin"), CardType::Creature, CREATURE_TYPE(Human), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	
}

//____________________________________________________________________________
//
CTricksterMageCard::CTricksterMageCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trickster Mage"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			BLUE_MANA_TEXT,
			TRUE, TRUE,
			new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Land, false)));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVoiceOfTruthCard::CVoiceOfTruthCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Voice of Truth"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CComplexAutomatonCard::CComplexAutomatonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Complex Automaton"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CComplexAutomatonCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CComplexAutomatonCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CComplexAutomatonCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (pInplay->GetSize() > 6);
}

bool CComplexAutomatonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	return (pInplay->GetSize() > 6);
}

//____________________________________________________________________________
//
CFlintGolemCard::CFlintGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Flint Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(2), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredRevealLibraryAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::BlockEventCallback, 
							&CWhenSelfAttackedBlocked::SetBlockedEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->SetRevealCount(3);
	cpAbility->SetReorder(true, ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlowstoneThopterCard::CFlowstoneThopterCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Flowstone Thopter"), CardType::_ArtifactCreature, CREATURE_TYPE(Thopter), nID,
		_T("7"), Power(4), Life(4),
		_T("1"), Power(+1), Life(-1), CreatureKeyword::Flying)
{
}

//____________________________________________________________________________
//
CKorHavenCard::CKorHavenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Kor Haven"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1") WHITE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable, new AttackingCreatureComparer));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRathsEdgeCard::CRathsEdgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Rath's Edge"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("4"),
				new AnyCreatureComparer, TRUE, 
				Life(-1),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBelbesArmorCard::CBelbesArmorCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Belbe's Armor"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().SetExtraManaCost(
		SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetExtraActionValueVector(ContextValue(+1 /*toughness*/, -1 /*power*/));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CPredatorFlagshipCard::CPredatorFlagshipCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Predator, Flagship"), CardType::_LegendaryArtifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"), Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("5"),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAirBladderCard::CAirBladderCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Air Bladder"), nID,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Flying | CreatureKeyword::OnlyBlockFlying)
{
}

//____________________________________________________________________________
//
CFanaticalDevotionCard::CFanaticalDevotionCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Fanatical Devotion"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			_T(""),
			new AnyCreatureComparer));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNobleStandCard::CNobleStandCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Noble Stand"), CardType::GlobalEnchantment, nID,
		_T("4") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenAttackedBlocked,
			CWhenAttackedBlocked::EventCallback, &CWhenAttackedBlocked::SetBlockingEventCallback> TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRisingWatersCard::CRisingWatersCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rising Waters"), CardType::GlobalEnchantment, nID)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpSpell(
			::CreateObject<CCardKeywordEnchantment>(this,
				_T("3") BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false)));

		cpSpell->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapSingleCard);
		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSealOfCleansingCard::CSealOfCleansingCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seal of Cleansing"), CardType::GlobalEnchantment, nID,
		_T("1") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""), 
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSealOfDoomCard::CSealOfDoomCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seal of Doom"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(
		new CardTypeComparer(CardType::Black, false));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSealOfFireCard::CSealOfFireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seal of Fire"), CardType::GlobalEnchantment, nID,
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-2), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSealOfRemovalCard::CSealOfRemovalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seal of Removal"), CardType::GlobalEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSealOfStrengthCard::CSealOfStrengthCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Seal of Strength"), CardType::GlobalEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+3), Life(+3),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiritualAsylumCard::CSpiritualAsylumCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spiritual Asylum"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::_Land, false),
				Power(+0), Life(+0)));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenAttackedBlocked,
								CWhenAttackedBlocked::PlayerEventCallback, &CWhenAttackedBlocked::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRacklingCard::CRacklingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rackling"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRacklingCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CRacklingCard::BeforeResolution(CRacklingCard::TriggeredAbility::TriggeredActionType* pAction)
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
CViselingCard::CViselingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Viseling"), CardType::_ArtifactCreature, CREATURE_TYPE(Construct), nID,
		_T("4"), Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CViselingCard::BeforeResolution));
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CViselingCard::BeforeResolution(CViselingCard::TriggeredAbility::TriggeredActionType* pAction)
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
CInfiltrateCard::CInfiltrateCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Infiltrate"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Unblockable, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
COffBalanceCard::COffBalanceCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Off Balance"), CardType::Instant, nID, AbilityType::Instant,
		WHITE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::CantAttack | CreatureKeyword::CantBlock, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CMoggAlarmCard::CMoggAlarmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mogg Alarm"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT RED_MANA_TEXT,
				_T("Goblin F"), 2720,
				2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T(""),
				_T("Goblin F"), 2720,
				2));

		cpSpell->GetCost().AddSacrificeCardCost(2, CCardFilter::GetFilter(_T("Mountains")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CMoggAlarmCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CMoggAlarmCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CSkyshroudClaimCard::CSkyshroudClaimCard(CGame* pGame, UINT nID)
	: CSearchLibrarySpellCard(pGame, _T("Skyshroud Claim"), CardType::Sorcery, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Sorcery,
		CCardFilter::GetFilter(_T("Forests")), 
		ZoneId::Battlefield, FALSE, TRUE, FALSE)
{
	m_pSearchLibrarySpell->SetSearchCount(MinimumValue(0), MaximumValue(2));
}

//____________________________________________________________________________
//
CBlastodermCard::CBlastodermCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blastoderm"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCardKeyword()->AddShroud(FALSE);

	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

		{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlastodermCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CBlastodermCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CAncientHydraCard::CAncientHydraCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ancient Hydra"), CardType::Creature, CREATURE_TYPE(Hydra), nID,
		_T("4") RED_MANA_TEXT, Power(5), Life(1))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 5, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAncientHydraCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CAncientHydraCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CCloudskateCard::CCloudskateCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Cloudskate"), CardType::Creature, CREATURE_TYPE(Illusion), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCloudskateCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCloudskateCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CDefenderEnVecCard::CDefenderEnVecCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Defender en-Vec"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 4, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(2), SourceColor::Null));

			cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer()); 
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDefenderEnVecCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CDefenderEnVecCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CJoltingMerfolkCard::CJoltingMerfolkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jolting Merfolk"), CardType::Creature, CREATURE_TYPE(Merfolk), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 4, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				_T(""),
				TRUE, FALSE,
				new CardTypeComparer(CardType::Creature, false)));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CJoltingMerfolkCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CJoltingMerfolkCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CPhyrexianProwlerCard::CPhyrexianProwlerCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Phyrexian Prowler"), CardType::Creature, CREATURE_TYPE2(Zombie, Mercenary), nID,
		_T("3") BLACK_MANA_TEXT, Power(3), Life(3),
		_T(""), Power(+1), Life(+1))
{
	m_pPumpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPhyrexianProwlerCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhyrexianProwlerCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CRejuvenationChamberCard::CRejuvenationChamberCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Rejuvenation Chamber"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),
				Life(+2), PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRejuvenationChamberCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRejuvenationChamberCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CSkyshroudBehemothCard::CSkyshroudBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Behemoth"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(10), Life(10))
{
	SetIntoPlayTapped();

	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkyshroudBehemothCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkyshroudBehemothCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CSkyshroudRidgebackCard::CSkyshroudRidgebackCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Ridgeback"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		GREEN_MANA_TEXT, Power(2), Life(3))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 2, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkyshroudRidgebackCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkyshroudRidgebackCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CWoodripperCard::CWoodripperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Woodripper"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(6))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 3, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1"),
				new CardTypeComparer(CardType::Artifact, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWoodripperCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWoodripperCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
COverlaidTerrainCard::COverlaidTerrainCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Overlaid Terrain"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
				CWhenSelfInplay::EventCallback, 
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&COverlaidTerrainCard::CreateAbility1)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&COverlaidTerrainCard::CreateAbility2)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&COverlaidTerrainCard::CreateAbility3)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&COverlaidTerrainCard::CreateAbility4)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&COverlaidTerrainCard::CreateAbility5)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> COverlaidTerrainCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> COverlaidTerrainCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLUE_MANA_TEXT BLUE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> COverlaidTerrainCard::CreateAbility3(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> COverlaidTerrainCard::CreateAbility4(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, RED_MANA_TEXT RED_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> COverlaidTerrainCard::CreateAbility5(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAccumulatedKnowledgeCard::CAccumulatedKnowledgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Accumulated Knowledge"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell> cpSpell(
		::CreateObject<CDrawCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT, 1));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAccumulatedKnowledgeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAccumulatedKnowledgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardNameComparer(_T("Accumulated Knowledge")));

	CZone* pOppGrave = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard);
	CZone* ppGrave = GetController()->GetZoneById(ZoneId::Graveyard);

	int n = m_CardFilter.CountIncluded(ppGrave->GetCardContainer()) +  m_CardFilter.CountIncluded(pOppGrave->GetCardContainer());
	
	ContextValue Context(pAction->GetValue());

	Context.nValue1 = (n+1);

	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CDazeCard::CDazeCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Daze"), CardType::Instant, nID,
		_T("1") BLUE_MANA_TEXT, AbilityType::Instant,
		new TrueCardComparer)
{
	m_pCounterSpell->SetCanBeDenied();
	m_pCounterSpell->GetDenialCost().SetManaCost(_T("1"));

	{
		//Alternative cost
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant, 
				_T(""),
				new TrueCardComparer));

		cpSpell->SetCanBeDenied();
		cpSpell->GetDenialCost().SetManaCost(_T("1"));
		cpSpell->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("Islands")));

		cpSpell->SetAbilityText(_T("Casts"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDazeCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CDazeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CEnsnareCard::CEnsnareCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ensnare"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T("3") BLUE_MANA_TEXT,
				new AnyCreatureComparer));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Alternative cost
		counted_ptr<CGlobalTapSpell> cpSpell(
			::CreateObject<CGlobalTapSpell>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer));

		cpSpell->GetCost().AddReturnFromPlayCardCost(2, CCardFilter::GetFilter(_T("Islands")));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CEnsnareCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CEnsnareCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CAngelicFavorCard::CAngelicFavorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Angelic Favor"), CardType::Instant, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("3") WHITE_MANA_TEXT));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAngelicFavorCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAngelicFavorCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Plains, false));

		//alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("")));

		cpSpell->GetCost().AddTapCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAngelicFavorCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CAngelicFavorCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		cpSpell->SetMainSpell(FALSE);

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAngelicFavorCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CAngelicFavorCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep1b ||
			pCurrentNode->GetNodeId() == NodeId::CombatDamageStep2b ||
			pCurrentNode->GetNodeId() == NodeId::EndOfCombatStep);
}

BOOL CAngelicFavorCard::CanPlay1(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

bool CAngelicFavorCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Angel C"), 2954, 1, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(GetGame(),
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others),
				TurnNumberDelta(-1),
				NodeId::EndStep,
				true, // in-play only
				CScheduledCardModifier::Operation::ApplyToLater);

	for (int i = 0; i < pTokens.GetSize(); ++i)
		pModifier2->ApplyTo(pTokens.GetAt(i));

	return true;
}

//____________________________________________________________________________
//
CDarkTriumphCard::CDarkTriumphCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dark Triumph"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("4") BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+2), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CardTypeComparer(CardType::Swamp, false));

		//alternative cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+2), Life(+0)));

		cpSpell->SetAffectControllerCardsOnly();

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CDarkTriumphCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CDarkTriumphCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMassacreCard::CMassacreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Massacre"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, 
				new AnyCreatureComparer,
				Power(-2), Life(-2)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Plains, false));
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Swamp, false));

		//alternative cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Sorcery,
				_T(""), 
				new AnyCreatureComparer,
				Power(-2), Life(-2)));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CMassacreCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CMassacreCard::CanPlay2)));
		cpSpell->Add(cpTrait2.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CMassacreCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CMassacreCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMoggSalvageCard::CMoggSalvageCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mogg Salvage"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("2") RED_MANA_TEXT,
				new CardTypeComparer(CardType::Artifact, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Island, false));
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Mountain, false));

		//alternative cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T(""),
				new CardTypeComparer(CardType::Artifact, false), 
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CMoggSalvageCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CMoggSalvageCard::CanPlay2)));
		cpSpell->Add(cpTrait2.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CMoggSalvageCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CMoggSalvageCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMoggToadyCard::CMoggToadyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mogg Toady"), CardType::Creature, CREATURE_TYPE(Goblin), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(2))
{	
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CMoggToadyCard::CanAttack)));

		m_pAttackAbility->Add(cpTrait.GetPointer());
	}
	{
		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pBlockAbility,
				CPlayableIfTrait::PlayableCallback(this,
					&CMoggToadyCard::CanBlock)));

		m_pBlockAbility->Add(cpTrait.GetPointer());
	}
}

BOOL CMoggToadyCard::CanAttack(BOOL bIncludeTricks)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount2;
    }

	{
		if (nCount2 >= nCount1)
			return false;
	}

	return true;
}

BOOL CMoggToadyCard::CanBlock(BOOL bIncludeTricks)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);

	int nCount1 = 0;
    for (int i = 0; i < pSurvey->GetSize(); ++i)
    {
        CCard* pCard = pSurvey->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount1;
    }

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	int nCount2 = 0;
    for (int i = 0; i < pInplay->GetSize(); ++i)
    {
        CCard* pCard = pInplay->GetAt(i);
        if (pCard->GetCardType().IsCreature())
            ++nCount2;
    }

	{
		if (nCount2 >= nCount1)
			return false;
	}

	return true;
}

//____________________________________________________________________________
//
CRefreshingRainCard::CRefreshingRainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Refreshing Rain"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T("3") GREEN_MANA_TEXT,
				FALSE_CARD_COMPARER, TRUE,
				Life(+6), PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Swamp, false));
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Forest, false));

		//alternative cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
				_T(""),
				FALSE_CARD_COMPARER, TRUE,
				Life(+6), PreventableType::NotPreventable));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRefreshingRainCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CRefreshingRainCard::CanPlay2)));
		cpSpell->Add(cpTrait2.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CRefreshingRainCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CRefreshingRainCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CReverentSilenceCard::CReverentSilenceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reverent Silence"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//alternative cost
		counted_ptr<CGlobalMoveCardSpell> cpSpell(
			::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
				_T(""),
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Graveyard, TRUE, MoveType::Destroy));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CReverentSilenceCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetAbilityText(_T("Have each other player gain 6 life to cast"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+6));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CReverentSilenceCard::BeforeResolveSelection));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CReverentSilenceCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nForestCount = 0;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);		
		if ((pCard->GetCardType() & CardType::Forest).Any())
			++nForestCount;
	}

	return ((nForestCount >= 1) && !m_pGame->GetNextPlayer(GetController())->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife));
}

bool CReverentSilenceCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	// valid until mana cost reduction is implanted and
	// there aren't effects requiring 4 or more extra mana to cast spells

	return GetLastCastingManaCost().GetTotal() < 4;
}

//____________________________________________________________________________
//
CSivvisRuseCard::CSivvisRuseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sivvi's Ruse"), CardType::Instant, nID)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

		cpSpell->SetAffectControllerCardsOnly();

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Mountain, false));
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Plains, false));

		//alternative cost
		counted_ptr<CPwrTghAttrEnchantment> cpSpell(
			::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
				_T(""),
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage));

		cpSpell->SetAffectControllerCardsOnly();

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSivvisRuseCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSivvisRuseCard::CanPlay2)));
		cpSpell->Add(cpTrait2.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSivvisRuseCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CSivvisRuseCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CSkyshroudCutterCard::CSkyshroudCutterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skyshroud Cutter"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	{
		//alternative cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Creature,
				_T("")));

		cpSpell->SetToZoneIfSuccess(ZoneId::Battlefield, TRUE);

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSkyshroudCutterCard::CanPlay)));
		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetAbilityText(_T("Have each other player gain 5 life to cast"));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Stack));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+5));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSkyshroudCutterCard::BeforeResolveSelection));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CSkyshroudCutterCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetCardKeyword()->HasFreecast()) return false;
	CZone* pContInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	int nForestCount = 0;

	for (int i = 0; i < pContInplay->GetSize(); ++i)
	{
		CCard* pCard = pContInplay->GetAt(i);		
		if ((pCard->GetCardType() & CardType::Forest).Any())
			++nForestCount;
	}

	return ((nForestCount >= 1) && !m_pGame->GetNextPlayer(GetController())->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantGainLife));
}

bool CSkyshroudCutterCard::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction)
{
	// valid until mana cost reduction is implanted and
	// there aren't effects requiring 3 or more extra mana to cast spells

	return GetLastCastingManaCost().GetTotal() < 4;
}

//____________________________________________________________________________
//
CSubmergeCard::CSubmergeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Submerge"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T("4") BLUE_MANA_TEXT,
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter1.AddComparer(new CardTypeComparer(CardType::Forest, false));
		m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Island, false));

		//alternative cost
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant, 
				_T(""),
				new AnyCreatureComparer, 
				ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others));

		counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSubmergeCard::CanPlay1)));
		cpSpell->Add(cpTrait1.GetPointer());

		counted_ptr<CPlayableIfTrait> cpTrait2(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this,
				&CSubmergeCard::CanPlay2)));
		cpSpell->Add(cpTrait2.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

BOOL CSubmergeCard::CanPlay1(BOOL bIncludeTricks)
{
	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController());
	CZone* pInplay = pNextPlayer->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter1.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

BOOL CSubmergeCard::CanPlay2(BOOL bIncludeTricks)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter2.CountIncluded(pInplay->GetCardContainer()) > 0)
		return true;

	return false;
}

//____________________________________________________________________________
//
CMossdogCard::CMossdogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mossdog"), CardType::Creature, CREATURE_TYPE2(Plant, Hound), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSubjectTargeted, 
							CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMossdogCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CMossdogCard::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) const
{
	return (byPlayer == m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CDownhillChargeCard::CDownhillChargeCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Downhill Charge"), CardType::Instant, nID, AbilityType::Instant,
	    _T("2") RED_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDownhillChargeCard::BeforeResolution));

	{
		//Alternative cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T(""),
				Power(0), Life(0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Mountains")));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDownhillChargeCard::BeforeResolution));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CDownhillChargeCard::CanPlay)));

		cpSpell->Add(cpTrait.GetPointer());

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CDownhillChargeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pBattlefield = GetController()->GetZoneById(ZoneId::Battlefield);

	CCardFilter m_CardFilter_temp;
	m_CardFilter_temp.SetComparer(new CardTypeComparer(CardType::Mountain, false));

	int nDomainCount = m_CardFilter_temp.CountIncluded(pBattlefield->GetCardContainer());

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue2 = nDomainCount;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

BOOL CDownhillChargeCard::CanPlay(BOOL bIncludeTricks)
{
	return (!GetCardKeyword()->HasFreecast());
}

//____________________________________________________________________________
//
CTangleWireCard::CTangleWireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Tangle Wire"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 4, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new UntappedComparer);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Artifact | CardType::_Land | CardType::Creature, false));

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTangleWireCard::SetTriggerContext1));
	
				CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToRemove(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		cpAbility->SetSkipStack(TRUE);
		m_pTriggeredAbility = cpAbility.GetPointer();

		AddAbility(m_pTriggeredAbility);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetAbilityName(_T("tap ability"));

		CCardKeywordModifier* pModifier = new CCardKeywordModifier;
			pModifier->GetModifier().SetToAdd(CardKeyword::Flash);
		cpAbility->GetTriggeredCardModifiers().push_back(pModifier);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTangleWireCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTangleWireCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

bool CTangleWireCard::SetTriggerContext1(TriggeredAbility::TriggerContextType& triggerContext, 
									   CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword) const
{
	if (toCardKeyword != CardKeyword::Flash) return false;

	int nCounterCount = GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount();
	m_pTriggeredAbility->GetGatherer().SetSubjectCount(nCounterCount, nCounterCount, TRUE);

	if (m_pGame->GetActivePlayer() == GetController())
	{
		m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
		return true;
	}

	m_pTriggeredAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	return true;
}

//____________________________________________________________________________
//
CRustingGolemCard::CRustingGolemCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Rusting Golem"), CardType::_ArtifactCreature, CREATURE_TYPE(Golem), nID,
		_T("4"), Power(0), Life(0))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 5, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	{
		counted_ptr<CCounterPwrTghAbility> cpAbility(
			::CreateObject<CCounterPwrTghAbility>(this, FADE_COUNTER));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRustingGolemCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRustingGolemCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CSaprolingBurstCard::CSaprolingBurstCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Saproling Burst"), CardType::GlobalEnchantment, nID,
		_T("4") GREEN_MANA_TEXT, AbilityType::Enchantment)
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		&CSaprolingBurstCard::OnResolutionCompleted1))
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 7, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T(""),
			_T("Saproling C"), 2925, 1));

		cpAbility->FlagTokens(TRUE, false);
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);
	
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(cpAbility->GetInstanceID());
		m_CardFilter.AddComparer(pComparer);

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID()+100);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		m_CardFlagModifier2.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
		m_CardFlagModifier2.GetModifier().SetRemovalData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // remove 'flag' flagged by the first trigger
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier2); // when the card is returned, unflag card

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards); // not specific card -> need to use the search filter below
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier1.GetModifier().GetAdditionData()); // note: find card flagged by the first trigger
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(pComparer); // find flagged card
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield); // in Exile
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSaprolingBurstCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSaprolingBurstCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

void CSaprolingBurstCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pBattlefield = pAbilityAction->GetController()->GetZoneById(ZoneId::Battlefield);
		CCountedCardContainer tokens;
		if (m_CardFilter.GetIncluded(*pBattlefield, tokens))
			for (int i = 0; i < tokens.GetSize(); ++i)
				m_CardFlagModifier1.ApplyTo((CCreatureCard*)tokens.GetAt(i));
}

//____________________________________________________________________________
//
CEyeOfYawgmothCard::CEyeOfYawgmothCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Eye of Yawgmoth"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CRevealLibraryCardSpell>>(this,
			_T("3"), 0));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetRevealCardsToOthers(true, false);
	cpAbility->SetReorder(true, ZoneId::Exile);

	cpAbility->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::Top, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEyeOfYawgmothCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());	
}

bool CEyeOfYawgmothCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0));
	if (!pCreature) return false;

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = GET_INTEGER(pCreature->GetLastKnownPower());

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CLinSivviDefiantHeroCard::CLinSivviDefiantHeroCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lin Sivvi, Defiant Hero"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rebel), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(1), Life(3))
	, m_CardFilter(_T("a Rebel permanent with converted mana cost X or less"), _T("Rebel permanents with converted mana cost X or less"), new TrueCardComparer)
{
	{
			counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
				::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
					_T(""),
					&m_CardFilter, 
					ZoneId::Battlefield,
					false, true, false));

			cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

			cpAbility->GetCost().SetExtraManaCost();
			cpAbility->AddTapCost();

			cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLinSivviDefiantHeroCard::BeforeResolution));

			AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("3"),
				new CreatureTypeComparer(CREATURE_TYPE(Rebel), false),
				ZoneId::Graveyard, ZoneId::Library, true, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		cpAbility->SetCardPlacement(CardPlacement::Bottom);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CLinSivviDefiantHeroCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCMC = pAction->GetCostConfigEntry().GetExtraValue();

	m_CardFilter.RemoveAllComparers();
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Rebel), false));
	m_CardFilter.AddComparer(new ConvertedManaCostComparer<std::less_equal<int>>(nCMC));

	return true;
}

//____________________________________________________________________________
//
CDominateCard::CDominateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dominate"), CardType::Instant, nID)
{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Battlefield, false, MoveType::Others, true));		

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
			
	AddSpell(cpSpell.GetPointer());
}
//____________________________________________________________________________
//
CWildMammothCard::CWildMammothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wild Mammoth"), CardType::Creature, CREATURE_TYPE(Elephant), nID,
		_T("2") GREEN_MANA_TEXT, Power(3), Life(4))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CWildMammothCard::OnResolutionCompleted))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CWildMammothCard::SetTriggerContext));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CWildMammothCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) != 
			CCardFilter::GetFilter(_T("creatures"))->CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer()));
}

void CWildMammothCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int nContCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer());
	int nOppCreatures = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	if (nContCreatures == nOppCreatures) return;
	CTransferControlModifier* pModifier = new CTransferControlModifier(GetGame(), (CCard*)this, (CCard*)this);
	
	if (nContCreatures > nOppCreatures)
	{
		pModifier->ApplyTo(GetController());
		return;
	}

	if (nContCreatures < nOppCreatures)
	{
		pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));
	}
}

//____________________________________________________________________________
//
CVolrathTheFallenCard::CVolrathTheFallenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Volrath the Fallen"), CardType::_LegendaryCreature, CREATURE_TYPE(Shapeshifter), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CVolrathTheFallenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CVolrathTheFallenCard::BeforeResolution(CAbilityAction* pAction)
{
	int nValue = pAction->GetCostConfigEntry().GetDiscardCards()->GetAt(0)->GetConvertedManaCost();

	CPowerModifier pModifier1 = CPowerModifier(Power(nValue));
	CLifeModifier pModifier2 = CLifeModifier(Life(nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier1.ApplyTo(this);
	pModifier2.ApplyTo(this);
	return true;
}

//____________________________________________________________________________
//
CAEtherBarrierCard::CAEtherBarrierCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("AEther Barrier"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->SetCanBeDenied();
	cpAbility->GetDenialCost().SetManaCost(_T("1"));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBelbesPortalCard::CBelbesPortalCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Belbe's Portal"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
	, m_Selection(pGame,CSelectionSupport::SelectionCallback(this, &CBelbesPortalCard::OnSelectionDone))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T("3"),
			&m_CardFilter,
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->AddTapCost();
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	AddAbility(cpAbility.GetPointer());
}

void CBelbesPortalCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{	
	bool bBattlefield = (GetZoneId() == ZoneId::Battlefield) || (GetZoneId() == ZoneId::_PhasedOut);

	if	(!bBattlefield && (pToZone->GetZoneId() == ZoneId::Battlefield))
	{
		SelectedType = SingleCreatureType::Null;

		std::vector<SelectionEntry> entries;

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
}

void CBelbesPortalCard::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{ 
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			SingleCreatureType creatureType((SingleCreatureType::Enum)it->dwContext);

			SelectedType = creatureType;
			m_CardFilter.SetFilterName(_T("a creature of the chosen type"), _T("creatures of the chosen type"));
			m_CardFilter.AddComparer(new CreatureTypeComparer(SelectedType, false));
			m_CardFilter.AddComparer(new AnyCreatureComparer);

			return;
		}
}

//____________________________________________________________________________
//
CDiviningWitchCard::CDiviningWitchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Divining Witch"), CardType::Creature, CREATURE_TYPE2(Human, Spellshaper), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDiviningWitchCard::OnNameSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("1") BLACK_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDiviningWitchCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDiviningWitchCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nZoneCount = pController->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pController->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken() && !pCard->GetCardType().IsLand())
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Name %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	return true;
}

void CDiviningWitchCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects no name"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 6, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.AddSelection(MinimumValue(6), MaximumValue(6), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier1.ApplyTo(pSelectionPlayer);

				int nLibrarySize = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize();

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.AddSelection(MinimumValue(nLibrarySize), MaximumValue(nLibrarySize), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		
				pModifier2.ApplyTo(pSelectionPlayer);
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s names %s"), pSelectionPlayer->GetPlayerName(), pSelected->GetPrintedCardName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 6, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier1.AddSelection(MinimumValue(6), MaximumValue(6), // select cards to 
					CZoneModifier::RoleType::PrimaryPlayer, // select by 
					CZoneModifier::RoleType::PrimaryPlayer, // reveal to
					NULL, // any cards
					ZoneId::Exile, // if selected, move cards to
					CZoneModifier::RoleType::PrimaryPlayer, // select by this player
					CardPlacement::Top, // put selected cards on top
					MoveType::Others, // move type
					CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

				pModifier1.ApplyTo(pSelectionPlayer);

				int n = 0;
				bool bSearch = true;
				CCard* pFound;
				
				CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);

				for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
				{		
					if (!bSearch)
						break;
					else
					{
						++n;
						if (pLibrary->GetAt(i)->GetPrintedCardName() == pSelected->GetPrintedCardName())
						{
							bSearch = false;
							pFound = pLibrary->GetAt(i);
						}
					}
				}

				CCardFilter m_CardFilter;
				m_CardFilter.SetComparer(new SpecificCardComparer(pFound));

				CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
					CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
				pModifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to 
						CZoneModifier::RoleType::PrimaryPlayer, // select by 
						CZoneModifier::RoleType::AllPlayers, // reveal to
						&m_CardFilter, // any cards
						ZoneId::Hand, // if selected, move cards to
						CZoneModifier::RoleType::PrimaryPlayer, // select by this player
						CardPlacement::Top, // put selected cards on top
						MoveType::Others, // move type
						CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				pModifier2.SetReorderInformation(true, ZoneId::Exile);
		
				pModifier2.ApplyTo(pSelectionPlayer);

				return;
			}
		}
}

//____________________________________________________________________________
//
CPackHuntCard::CPackHuntCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Pack Hunt"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("3") GREEN_MANA_TEXT,
			new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPackHuntCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CPackHuntCard::BeforeResolution(CAbilityAction* pAction)
{
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardNameComparer(pAction->GetAssociatedCard()->GetPrintedCardName()));
	CPlayer* pController = pAction->GetController();

	CPlayerSearchModifier pModifier = CPlayerSearchModifier(pController,
		MinimumValue(0), MaximumValue(3),
		pController, ZoneId::Library,
		&m_CardFilter);
	pModifier.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CParallaxWaveCard::CParallaxWaveCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Paralax Wave"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 5, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{//exile target creature
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		cpAbility->FlagTargets(true,  // flag targets
							 false); // until end of turn

		AddAbility(cpAbility.GetPointer());

		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());	
	}

	{//return exiled creatures
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
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CParallaxWaveCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CParallaxWaveCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
CParallaxTideCard::CParallaxTideCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Paralax Tide"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 5, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	{//exile target land
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_Land, false),
				ZoneId::Battlefield, ZoneId::Exile, TRUE, MoveType::Others));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		cpAbility->FlagTargets(true,  // flag targets
							 false); // until end of turn

		AddAbility(cpAbility.GetPointer());

		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());	
	}

	{//return exiled lands
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
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CParallaxTideCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CParallaxTideCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}

//____________________________________________________________________________
//
//Parallax Nexus\n{2B}\nEnchantment\nNMS,R\nFading 5\rRemove a fade counter from Parallax Nexus: Target opponent exiles a card from his or her hand. Activate this ability only any time you could cast a sorcery.\rWhen Parallax Nexus leaves the battlefield, each player returns to his or her hand all cards he or she owns exiled with Parallax Nexus.
//NOTE: Need a way to flag "discarded" cards. Also need to work as a sorcery (just too lazy to fix it if the card doesn't work ;) )
/*CParallaxNexusCard::CParallaxNexusCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Paralax Nexus"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	GetCounterContainer()->ScheduleCounter(FADE_COUNTER, 5, true, ZoneId::_AllZones, ZoneId::Battlefield, true);

	
	{//exile target card
		counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			1, MoveType::Discard, ZoneId::Exile, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(FADE_COUNTER), -1);

		cpAbility->FlagTargets(true,  // flag targets
							 false); // until end of turn

		cpAbility->SetUseInSpecificNode(NodeId::MainPhaseStep, FALSE, TRUE);

		AddAbility(cpAbility.GetPointer());

		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());	
	}

	{//return exiled cards
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
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand); // to owner's Battlefield
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged  > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		cpAbility->SetAbilityName(_T("fading ability"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CParallaxNexusCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CParallaxNexusCard::BeforeResolution(CAbilityAction* pAction)
{
	if (GetCounterContainer()->GetCounter(FADE_COUNTER)->GetCount() > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(FADE_COUNTER, -1);
		pModifier.ApplyTo(this);
	}
	else
	{
		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pAction->GetController());
		pModifier.ApplyTo(this);
	}
	
	return true;
}
*/
//____________________________________________________________________________
//
CTerrainGeneratorCard::CTerrainGeneratorCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Terrain Generator"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T("2"),
				CCardFilter::GetFilter(_T("basic lands")),
				ZoneId::Battlefield, FALSE, TRUE, TRUE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAnimateLandCard::CAnimateLandCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Animate Land"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false), false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAnimateLandCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CAnimateLandCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetAssociatedCard();

	CCardIsAlsoAModifier* pModifier1 = new CCardIsAlsoAModifier( _T("Animated Land D"), 64049, pAction->GetController());
	CScheduledCardModifier pModifier2 =  CScheduledCardModifier(
			GetGame(), pModifier1, TurnNumberDelta(-1), NodeId::CleanupStep2, true,  CScheduledCardModifier::Operation::RemoveFromLater);

	pModifier1->ApplyTo(pCard);
	pModifier2.ApplyTo(pCard);

	return true;
}

//____________________________________________________________________________
//
