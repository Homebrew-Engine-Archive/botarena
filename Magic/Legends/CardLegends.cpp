#include "stdafx.h"
#include "CardLegends.h"

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

		DEFINE_CARD(CAErathiBerserkerCard);
		DEFINE_CARD(CAcidRainCard);
		DEFINE_CARD(CActiveVolcanoCard);
		DEFINE_CARD(CAdunOakenshieldCard);
		DEFINE_CARD(CAlchorsTombCard);
		DEFINE_CARD(CAllHallowsEveCard);
		DEFINE_CARD(CAngelicVoicesCard);
		DEFINE_CARD(CAngusMackenzieCard);
		DEFINE_CARD(CArcadesSabbothCard);
		DEFINE_CARD(CArenaOfTheAncientsCard);
		DEFINE_CARD(CAvoidFateCard);
		DEFINE_CARD(CAxelrodGunnarsonCard);
		DEFINE_CARD(CBarbaryApesCard);
		DEFINE_CARD(CBarktoothWarbeardCard);
		DEFINE_CARD(CBartelRuneaxeCard);
		DEFINE_CARD(CBeastsOfBogardanCard);
		DEFINE_CARD(CBlazingEffigyCard);
		DEFINE_CARD(CBorisDevilboonCard);
		DEFINE_CARD(CChromiumCard);
		DEFINE_CARD(CCleanseCard);
		DEFINE_CARD(CConcordantCrossroadsCard);
		DEFINE_CARD(CCrevasseCard);
		DEFINE_CARD(CCrimsonKoboldsCard);
		DEFINE_CARD(CCrookshankKoboldsCard);
		DEFINE_CARD(CDakkonBlackbladeCard);
		DEFINE_CARD(CDarknessCard);
		DEFINE_CARD(CDeadfallCard);
		DEFINE_CARD(CDemonicTormentCard);
		DEFINE_CARD(CDevouringDeepCard);
		DEFINE_CARD(CDisharmonyCard);
		DEFINE_CARD(CDreamCoatCard);
		DEFINE_CARD(CDwarvenSongCard);
		DEFINE_CARD(CElderSpawnCard);
		DEFINE_CARD(CEmeraldDragonflyCard);
		DEFINE_CARD(CEurekaCard);
		DEFINE_CARD(CFieldOfDreamsCard);
		DEFINE_CARD(CFireSpritesCard);
		DEFINE_CARD(CFlashFloodCard);
		DEFINE_CARD(CFrostGiantCard);
		DEFINE_CARD(CGabrielAngelfireCard);
		DEFINE_CARD(CGhostsOfTheDamnedCard);
		DEFINE_CARD(CGiantTurtleCard);
		DEFINE_CARD(CGlyphOfDestructionCard);
		DEFINE_CARD(CGlyphOfLifeCard);
		DEFINE_CARD(CGostaDirkCard);
		DEFINE_CARD(CGravitySphereCard);
		DEFINE_CARD(CGreatDefenderCard);
		DEFINE_CARD(CGreatWallCard);
		DEFINE_CARD(CGwendlynDiCorciCard);
		DEFINE_CARD(CHalfdaneCard);
		DEFINE_CARD(CHammerheimCard);
		DEFINE_CARD(CHazezonTamarCard);
		DEFINE_CARD(CHeadlessHorsemanCard);
		DEFINE_CARD(CHeavensGateCard);
		DEFINE_CARD(CHellfireCard);
		DEFINE_CARD(CHellSwarmCard);
		DEFINE_CARD(CHornetCobraCard);
		DEFINE_CARD(CHornOfDeafeningCard);
		DEFINE_CARD(CHundingGjornersenCard);
		DEFINE_CARD(CHyperionBlacksmithCard);
		DEFINE_CARD(CIndestructibleAuraCard);
		DEFINE_CARD(CInfernalMedusaCard);
		DEFINE_CARD(CJacquesLeVertCard);
		DEFINE_CARD(CJasmineBorealCard);
		DEFINE_CARD(CJeditOjanenCard);
		DEFINE_CARD(CJerrardOfTheClosedFistCard);
		DEFINE_CARD(CJovialEvilCard);
		DEFINE_CARD(CKarakasCard);
		DEFINE_CARD(CKasimirTheLoneWolfCard);
		DEFINE_CARD(CKeepersOfTheFaithCard);
		DEFINE_CARD(CKeiTakahashiCard);
		DEFINE_CARD(CKnowledgeVaultCard);
		DEFINE_CARD(CKoboldDrillSergeantCard);
		DEFINE_CARD(CKoboldOverlordCard);
		DEFINE_CARD(CKoboldsOfKherKeepCard);
		DEFINE_CARD(CKoboldTaskmasterCard);
		DEFINE_CARD(CLadyCaleriaCard);
		DEFINE_CARD(CLadyEvangelaCard);
		DEFINE_CARD(CLadyOrcaCard);
		DEFINE_CARD(CLesserWerewolfCard);
		DEFINE_CARD(CLifebloodCard);
		DEFINE_CARD(CLifeChiselCard);
		//DEFINE_CARD(CLifeMatrixCard);
		DEFINE_CARD(CLivingPlaneCard);
		DEFINE_CARD(CLivonyaSiloneCard);
		DEFINE_CARD(CLordMagnusCard);
		DEFINE_CARD(CManaDrainCard);
		DEFINE_CARD(CMarhaultElsdragonCard);
		DEFINE_CARD(CMirrorUniverseCard);
		DEFINE_CARD(CMoatCard);
		DEFINE_CARD(CMoldDemonCard);
		DEFINE_CARD(CMountainYetiCard);
		DEFINE_CARD(CNebuchadnezzarCard);
		DEFINE_CARD(CNicolBolasCard);
		DEFINE_CARD(CPalladiaMorsCard);
		DEFINE_CARD(CPartWaterCard);
		DEFINE_CARD(CPavelMalikiCard);
		DEFINE_CARD(CPendelhavenCard);
		DEFINE_CARD(CPetraSphinxCard);
		DEFINE_CARD(CPixieQueenCard);
		DEFINE_CARD(CPrincessLucreziaCard);
		DEFINE_CARD(CPsychicPurgeCard);
		DEFINE_CARD(CPuppetMasterCard);
		DEFINE_CARD(CQuagmireCard);
		DEFINE_CARD(CRagingBullCard);
		DEFINE_CARD(CRagnarCard);
		DEFINE_CARD(CRamirezDePietroCard);
		DEFINE_CARD(CRamsesOverdarkCard);
		DEFINE_CARD(CReincarnationCard);
		DEFINE_CARD(CRelicBarrierCard);
		DEFINE_CARD(CResetCard);
		DEFINE_CARD(CRighteousAvengersCard);
		DEFINE_CARD(CRingOfImmortalsCard);
		DEFINE_CARD(CRivenTurnbullCard);
		DEFINE_CARD(CRustCard);
		DEFINE_CARD(CSeaKingsBlessingCard);
		DEFINE_CARD(CSirShandlarOfEberynCard);
		DEFINE_CARD(CSivitriScarzamCard);
		DEFINE_CARD(CSolkanarTheSwampKingCard);
		DEFINE_CARD(CSpinalVillainCard);
		DEFINE_CARD(CStanggCard);
		DEFINE_CARD(CStormSeekerCard);
		DEFINE_CARD(CStormWorldCard);
		DEFINE_CARD(CSunastianFalconerCard);
		DEFINE_CARD(CSylvanParadiseCard);
		DEFINE_CARD(CTakklemaggotCard);
		DEFINE_CARD(CTeleportCard);
		DEFINE_CARD(CTetsuoUmezawaCard);
		DEFINE_CARD(CTheAbyssCard);
		DEFINE_CARD(CTheLadyOfTheMountainCard);
		DEFINE_CARD(CTheTabernacleatPendrellValeCard);
		DEFINE_CARD(CThunderSpiritCard);
		DEFINE_CARD(CTobiasAndrionCard);
		DEFINE_CARD(CTorstenVonUrsusCard);
		DEFINE_CARD(CTorWaukiCard);
		DEFINE_CARD(CTouchOfDarknessCard);
		DEFINE_CARD(CTransmutationCard);
		DEFINE_CARD(CTriassicEggCard);
		DEFINE_CARD(CTuknirDeathlockCard);
		DEFINE_CARD(CTyphoonCard);
		DEFINE_CARD(CUndertowCard);
		DEFINE_CARD(CUrborgCard);
		DEFINE_CARD(CUrDragoCard);
		DEFINE_CARD(CVaevictisAsmadiCard);
		DEFINE_CARD(CWalkingDeadCard);
		DEFINE_CARD(CWallOfEarthCard);
		DEFINE_CARD(CWallOfHeatCard);
		DEFINE_CARD(CWallOfLightCard);
		DEFINE_CARD(CWallOfOppositionCard);
		DEFINE_CARD(CWallOfTombstonesCard);
		DEFINE_CARD(CWoodElementalCard);
		DEFINE_CARD(CXiraArienCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CAcidRainCard::CAcidRainCard(CGame* pGame, UINT uID)
	: CCard(pGame, _T("Acid Rain"), CardType::Sorcery, uID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Forest, false),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAdunOakenshieldCard::CAdunOakenshieldCard(CGame* pGame, UINT uID)
	: CCreatureCard(pGame, _T("Adun Oakenshield"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), uID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAlchorsTombCard::CAlchorsTombCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Alchor's Tomb"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(this,
			_T("2"),
			new TrueCardComparer));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, FALSE, _T("white permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, FALSE, _T("blue permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, FALSE, _T("black permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, FALSE, _T("red permanent"));
	cpAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, FALSE, _T("green permanent"));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CActiveVolcanoCard::CActiveVolcanoCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Active Volcano"), CardType::Instant, nID,
		RED_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Blue, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	counted_ptr<CTargetMoveCardSpell> cpAbility(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAngusMackenzieCard::CAngusMackenzieCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Angus Mackenzie"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpAbility->AddTapCost();

	counted_ptr<CPlayableIfTrait> cpTrait1(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CAngusMackenzieCard::CanPlay)));
	cpAbility->Add(cpTrait1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

BOOL CAngusMackenzieCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::UpkeepStep ||
			pCurrentNode->GetNodeId() == NodeId::DrawStep2 ||
			m_pGame->IsMainPhase(TRUE) == TRUE ||
			pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2 ||
			pCurrentNode->GetNodeId() == NodeId::DeclareBlockersStep2);
}

//____________________________________________________________________________
//
CArcadesSabbothCard::CArcadesSabbothCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Arcades Sabboth"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(7), Life(7))
{
	AddUpkeepCost(GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new AttackingCreatureComparer),
				Power(+0), Life(+2)));

		cpAbility->SetAffectUntappedOnly();
		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+1)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CArenaOfTheAncientsCard::CArenaOfTheAncientsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Arena of the Ancients"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new CardTypeComparer(CardType::_LegendaryCreature, true)));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapMultipleCards);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("legendary creatures")));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBarbaryApesCard::CBarbaryApesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barbary Apes"), CardType::Creature, CREATURE_TYPE(Ape), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CBarktoothWarbeardCard::CBarktoothWarbeardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Barktooth Warbeard"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(5))
{
}

//____________________________________________________________________________
//
CBartelRuneaxeCard::CBartelRuneaxeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bartel Runeaxe"), CardType::_LegendaryCreature, CREATURE_TYPE2(Giant, Warrior), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
	GetCardKeyword()->AddShroud(FALSE, CCardFilter::GetFilter(_T("non-aura spells but aura permanents"))); // can't be target of everything EXCEPT for 'non-aura cards' -> can't be target of 'aura cards'
}

//____________________________________________________________________________
//
CCleanseCard::CCleanseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cleanse"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new CardTypeComparer(CardType::Creature | CardType::Black, true),
			ZoneId::Graveyard, TRUE, MoveType::Destroy));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDakkonBlackbladeCard::CDakkonBlackbladeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dakkon Blackblade"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(0))
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::_Land, false)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDarknessCard::CDarknessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Darkness"), CardType::Instant, nID)
{
	counted_ptr<CPlayerEffectSpell> cpSpell(
		::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDemonicTormentCard::CDemonicTormentCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Demonic Torment"), nID,
		_T("2") BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::DealNoCombatDamage | CreatureKeyword::CantAttack)
{
}

//____________________________________________________________________________
//
CDevouringDeepCard::CDevouringDeepCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Devouring Deep"), CardType::Creature, CREATURE_TYPE(Fish), nID,
		_T("2") BLUE_MANA_TEXT, Power(1), Life(2),
		CreatureKeyword::Islandwalk)
{
}

//____________________________________________________________________________
//
CEmeraldDragonflyCard::CEmeraldDragonflyCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Emerald Dragonfly"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFireSpritesCard::CFireSpritesCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fire Sprites"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CManaFilterAbility> cpAbility(
		::CreateObject<CManaFilterAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT, GREEN_MANA_TEXT));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CFlashFloodCard::CFlashFloodCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Flash Flood"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Red, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	counted_ptr<CTargetMoveCardSpell> cpAbility(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Mountain, false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGhostsOfTheDamnedCard::CGhostsOfTheDamnedCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ghosts of the Damned"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-1), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGwendlynDiCorciCard::CGwendlynDiCorciCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gwendlyn Di Corci"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Rogue), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetPlayerDiscardCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetPlayerDiscardCardSpell>>(this,
			_T(""),
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	cpAbility->SetAtRandom();

	cpAbility->AddTapCost();

	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHeadlessHorsemanCard::CHeadlessHorsemanCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Headless Horseman"), CardType::Creature, CREATURE_TYPE2(Zombie, Knight), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CHellSwarmCard::CHellSwarmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hell Swarm"), CardType::Instant, nID)
{
	counted_ptr<CPwrTghAttrEnchantment> cpSpell(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			Power(-1), Life(+0)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHornOfDeafeningCard::CHornOfDeafeningCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Horn of Deafening"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T("2"),
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHornetCobraCard::CHornetCobraCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Hornet Cobra"), CardType::Creature, CREATURE_TYPE(Snake), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(1))
{
}

//____________________________________________________________________________
//
CHyperionBlacksmithCard::CHyperionBlacksmithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hyperion Blacksmith"), CardType::Creature, CREATURE_TYPE2(Human, Artificer), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, TRUE,
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeNonControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CIndestructibleAuraCard::CIndestructibleAuraCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Indestructible Aura"), CardType::Instant, nID)
{
	counted_ptr<CTargetDamagePreventionSpell> cpSpell(
		::CreateObject<CTargetDamagePreventionSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, FALSE,
			Life(PreventionType::PreventAllDamage), SourceColor::Null));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CInfernalMedusaCard::CInfernalMedusaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Infernal Medusa"), CardType::Creature, CREATURE_TYPE(Basilisk), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(4))
{
	{
		//Whenever Infernal Medusa blocks a creature, destroy that creature at end of combat.
		counted_ptr<TriggeredAbility1> cpAbility(::CreateObject<TriggeredAbility1>(this));

		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CInfernalMedusaCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CInfernalMedusaCard::BeforeResolution1));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Whenever Infernal Medusa becomes blocked by a non-Wall creature, destroy that creature at end of combat.
		counted_ptr<TriggeredAbility2> cpAbility(::CreateObject<TriggeredAbility2>(this));

		cpAbility->SetOptionalType(TriggeredAbility2::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-Wall creatures")));

		cpAbility->SetContextFunction(TriggeredAbility2::ContextFunction(this, &CInfernalMedusaCard::SetTriggerContext2));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility2::BeforeResolveSelectionCallback(this, &CInfernalMedusaCard::BeforeResolution2));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CInfernalMedusaCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext,
		CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;
	return (IsBlocking() == TRUE);
}

bool CInfernalMedusaCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

bool CInfernalMedusaCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, 
												CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;

	return true;
}

bool CInfernalMedusaCard::BeforeResolution2(TriggeredAbility2::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Destroy Effect"), 61041, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CJacquesLeVertCard::CJacquesLeVertCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jacques le Vert"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature | CardType::Green, true),
			Power(+0), Life(+2)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJasmineBorealCard::CJasmineBorealCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jasmine Boreal"), CardType::_LegendaryCreature, CREATURE_TYPE(Human), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(5))
{
}

//____________________________________________________________________________
//
CJeditOjanenCard::CJeditOjanenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jedit Ojanen"), CardType::_LegendaryCreature, CREATURE_TYPE2(Cat, Warrior), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
}

//____________________________________________________________________________
//
CJerrardOfTheClosedFistCard::CJerrardOfTheClosedFistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Jerrard of the Closed Fist"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(5))
{
}

//____________________________________________________________________________
//
CKasimirTheLoneWolfCard::CKasimirTheLoneWolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kasimir the Lone Wolf"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(3))
{
}

//____________________________________________________________________________
//
CKeepersOfTheFaithCard::CKeepersOfTheFaithCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Keepers of the Faith"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(3))
{
}

//____________________________________________________________________________
//
CKeiTakahashiCard::CKeiTakahashiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kei Takahashi"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		_T("2") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(2),
			SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKoboldDrillSergeantCard::CKoboldDrillSergeantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kobold Drill Sergeant"), CardType::Creature, CREATURE_TYPE2(Kobold, Soldier), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+0), Life(+1), CreatureKeyword::Trample));

	cpAbility->GetEnchantmentCardFilter().AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Kobold), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKoboldOverlordCard::CKoboldOverlordCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Kobold Overlord"), CardType::Creature, CREATURE_TYPE(Kobold), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+0), Life(+0), CreatureKeyword::FirstStrike));

	cpAbility->GetEnchantmentCardFilter(). AddComparer(
		new CreatureTypeComparer(CREATURE_TYPE(Kobold), false)); // Kobold
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKoboldTaskmasterCard::CKoboldTaskmasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kobold Taskmaster"), CardType::Creature, CREATURE_TYPE(Kobold), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
			Power(+1), Life(0)));

	cpAbility->GetEnchantmentCardFilter().
		AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Kobold), false));
	cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLadyCaleriaCard::CLadyCaleriaCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Lady Caleria"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Archer), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(6),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-3), // life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CLadyEvangelaCard::CLadyEvangelaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lady Evangela"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			WHITE_MANA_TEXT BLACK_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLadyOrcaCard::CLadyOrcaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lady Orca"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T("5") BLACK_MANA_TEXT RED_MANA_TEXT, Power(7), Life(4))
{
}

//____________________________________________________________________________
//
CLifebloodCard::CLifebloodCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lifeblood"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenOrientationChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().SetFromOrientation(Orientation::Untap);
	cpAbility->GetTrigger().SetToOrientation(Orientation::Tap);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Mountain, false));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoatCard::CMoatCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Moat"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CCanBeAttackedByEnchantment> cpAbility(
		::CreateObject<CCanBeAttackedByEnchantment>(this,
			CCardFilter::GetFilter(_T("flying creatures"))));

	cpAbility->SetAffectPlayers();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMoldDemonCard::CMoldDemonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mold Demon"), CardType::Creature, CREATURE_TYPE2(Fungus, Demon), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(6))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
		CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetGatherer().SetSubjectCount(2, 2);
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Swamp, false));
	cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetOptionalModifier().CCardModifiers::push_back(
		new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMountainYetiCard::CMountainYetiCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Mountain Yeti"), CardType::Creature, CREATURE_TYPE(Yeti), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		CreatureKeyword::Mountainwalk)
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
}

//____________________________________________________________________________
//
CNicolBolasCard::CNicolBolasCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Nicol Bolas"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	AddUpkeepCost(BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT);

	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback,
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(SpecialNumber::All);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPalladiaMorsCard::CPalladiaMorsCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Palladia-Mors"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(7), Life(7))
{
	AddUpkeepCost(RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CPavelMalikiCard::CPavelMalikiCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Pavel Maliki"), CardType::_LegendaryCreature, CREATURE_TYPE(Human), nID,
		_T("4") BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3),
		BLACK_MANA_TEXT RED_MANA_TEXT, Power(+1), Life(0))
{
}

//____________________________________________________________________________
//
CPixieQueenCard::CPixieQueenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Pixie Queen"), CardType::Creature, CREATURE_TYPE(Faerie), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
			Power(+0), Life(+0),
			CreatureKeyword::Flying, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPrincessLucreziaCard::CPrincessLucreziaCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Princess Lucrezia"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4),
		BLUE_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CPsychicPurgeCard::CPsychicPurgeCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Psychic Purge"), CardType::Sorcery, nID, AbilityType::Sorcery,
		BLUE_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,
		Life(-1), PreventableType::Preventable)
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Hand, ZoneId::_AllZones));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPsychicPurgeCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPsychicPurgeCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CPsychicPurgeCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();
	if (pAction && pAction->GetController() == GetController()) return false;
	
	if (moveType != MoveType::Discard) return false;

	triggerContext.nValue1 = (DWORD)pAction->GetController();

	return true;
}

bool CPsychicPurgeCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = (CPlayer*)pAction->GetTriggerContext().nValue1;

	CLifeModifier pModifier = CLifeModifier(Life(-5), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo(pPlayer);

	return true;
}

//____________________________________________________________________________
//
CRagingBullCard::CRagingBullCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Raging Bull"), CardType::Creature, CREATURE_TYPE(Ox), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CRagnarCard::CRagnarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ragnar"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Cleric), nID,
		GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
			GREEN_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRamirezDePietroCard::CRamirezDePietroCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ramirez DePietro"), CardType::Creature, CREATURE_TYPE2(Human, Pirate), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
}

//____________________________________________________________________________
//
CRelicBarrierCard::CRelicBarrierCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Relic Barrier"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE, // tap
			FALSE, // untap
			new CardTypeComparer(CardType::Artifact, false)));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRivenTurnbullCard::CRivenTurnbullCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Riven Turnbull"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("5") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(7),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CSirShandlarOfEberynCard::CSirShandlarOfEberynCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sir Shandlar of Eberyn"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Knight), nID,
		_T("4") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(7))
{
}

//____________________________________________________________________________
//
CSivitriScarzamCard::CSivitriScarzamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sivitri Scarzam"), CardType::_LegendaryCreature, CREATURE_TYPE(Human), nID,
		_T("5") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
}

//____________________________________________________________________________
//
CSolkanarTheSwampKingCard::CSolkanarTheSwampKingCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Sol'kanar the Swamp King"), CardType::_LegendaryCreature, CREATURE_TYPE(Demon), nID,
		_T("2") BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5),
		CreatureKeyword::Swampwalk)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("black cards")));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpinalVillainCard::CSpinalVillainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spinal Villain"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::Blue | CardType::Creature, true),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CStormSeekerCard::CStormSeekerCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Storm Seeker"), CardType::Instant, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("3") GREEN_MANA_TEXT,
			FALSE_CARD_COMPARER, TRUE,
			ZoneId::Hand, FALSE,
			new TrueCardComparer, PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSunastianFalconerCard::CSunastianFalconerCard(CGame* pGame, UINT nID)
	: CManaProductionTCreatureCard(pGame, _T("Sunastian Falconer"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Shaman), nID,
		_T("3") RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4),
		_T("2"))
{
}

//____________________________________________________________________________
//
CRighteousAvengersCard::CRighteousAvengersCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Righteous Avengers"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("4") WHITE_MANA_TEXT, Power(3), Life(1),
		CreatureKeyword::Plainswalk)
{
}

//____________________________________________________________________________
//
CTetsuoUmezawaCard::CTetsuoUmezawaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tetsuo Umezawa"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Archer), nID,
		BLUE_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddShroud(FALSE, CCardFilter::GetFilter(_T("non-aura spells but aura permanents")));

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new TappedComparer);

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddChildFilter(new CCardFilter(new BlockingCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTheLadyOfTheMountainCard::CTheLadyOfTheMountainCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("The Lady of the Mountain"), CardType::_LegendaryCreature, CREATURE_TYPE(Giant), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
}

//____________________________________________________________________________
//
CThunderSpiritCard::CThunderSpiritCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Thunder Spirit"), CardType::Creature, CREATURE_TYPE2(Elemental, Spirit), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CTobiasAndrionCard::CTobiasAndrionCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tobias Andrion"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Advisor), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CTorWaukiCard::CTorWaukiCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Tor Wauki"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Archer), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT, Power(3), Life(3),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-2), // life delta
		PreventableType::Preventable)
{
}

//____________________________________________________________________________
//
CTorstenVonUrsusCard::CTorstenVonUrsusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Torsten Von Ursus"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(5), Life(5))
{
}

//____________________________________________________________________________
//
CTuknirDeathlockCard::CTuknirDeathlockCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Tuknir Deathlock"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT GREEN_MANA_TEXT,
			Power(+2), Life(+2),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CVaevictisAsmadiCard::CVaevictisAsmadiCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Vaevictis Asmadi"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(7), Life(7))
{
	AddUpkeepCost(BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, BLACK_MANA_TEXT, Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, RED_MANA_TEXT, Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this, GREEN_MANA_TEXT, Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWalkingDeadCard::CWalkingDeadCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Walking Dead"), CardType::Creature, CREATURE_TYPE(Zombie), nID,
		_T("1") BLACK_MANA_TEXT, Power(1), Life(1),
		BLACK_MANA_TEXT)
{
}

//____________________________________________________________________________
//
CWallOfEarthCard::CWallOfEarthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Earth"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") RED_MANA_TEXT, Power(0), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfHeatCard::CWallOfHeatCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Heat"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") RED_MANA_TEXT, Power(2), Life(6))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWallOfLightCard::CWallOfLightCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Light"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("2") WHITE_MANA_TEXT, Power(1), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
}

//____________________________________________________________________________
//
CWallOfOppositionCard::CWallOfOppositionCard(CGame* pGame, UINT nID)
	: CPumpCreatureCard(pGame, _T("Wall of Opposition"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(0), Life(6),
		_T("1"), Power(+1), Life(+0))
{
	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CXiraArienCard::CXiraArienCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Xira Arien"), CardType::_LegendaryCreature, CREATURE_TYPE2(Insect, Wizard), nID,
		BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDrawCardSpell>>(this,
			BLACK_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, 1));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBorisDevilboonCard::CBorisDevilboonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Boris Devilboon"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Wizard), nID,
		_T("3") BLACK_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
			_T("2") BLACK_MANA_TEXT RED_MANA_TEXT,
			_T("Minor Demon"), TOKEN_ID_BY_NAME,
			1));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAxelrodGunnarsonCard::CAxelrodGunnarsonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Axelrod Gunnarson"), CardType::_LegendaryCreature, CREATURE_TYPE(Giant), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt2 > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludePlayers(TRUE);
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(+1), this, PreventableType::NotPreventable));

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTeleportCard::CTeleportCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Teleport"), CardType::Instant, nID, AbilityType::Instant,
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::Unblockable, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->SetUseInSpecificNode(NodeId::DeclareAttackersStep2);
}

//____________________________________________________________________________
//
CMirrorUniverseCard::CMirrorUniverseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirror Universe"), CardType::Artifact, nID,
		_T("6"), AbilityType::Artifact)
{
	counted_ptr<CActivatedAbility<CExchangeLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CExchangeLifeSpell>>(this,
			_T(""),
			32767));

	cpAbility->AddTapCost();
	cpAbility->AddSacrificeCost();
	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrimsonKoboldsCard::CCrimsonKoboldsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crimson Kobolds"), CardType::Creature, CREATURE_TYPE(Kobold), nID,
		_T("0"), Power(0), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CCrookshankKoboldsCard::CCrookshankKoboldsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crookshank Kobolds"), CardType::Creature, CREATURE_TYPE(Kobold), nID,
		_T("0"), Power(0), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CKoboldsOfKherKeepCard::CKoboldsOfKherKeepCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kobolds of Kher Keep"), CardType::Creature, CREATURE_TYPE(Kobold), nID,
		_T("0"), Power(0), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CKarakasCard::CKarakasCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Karakas"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new CardTypeComparer(CardType::_LegendaryCreature, true),
				ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHammerheimCard::CHammerheimCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Hammerheim"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::_LandwalkMask | CreatureKeyword::NonBasicWalk,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPendelhavenCard::CPendelhavenCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Pendelhaven"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(1), Life(2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreaturePowerComparer<std::equal_to<int>>(1)));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureLifeComparer<std::equal_to<int>>(1));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer()); 
	}
}

//____________________________________________________________________________
//
CTyphoonCard::CTyphoonCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Typhoon"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalChgLifeBySurveySpell> cpSpell(
		::CreateObject<CGlobalChgLifeBySurveySpell>(this, AbilityType::Sorcery,					
			_T("2") GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::Island, false),
			PreventableType::Preventable));

	cpSpell->SetMultiplier(-1);
	cpSpell->SetTargetOpponentPlayerOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenSongCard::CDwarvenSongCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dwarven Song"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			RED_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	cpSpell->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, TRUE, _T("red creature"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHeavensGateCard::CHeavensGateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Heaven's Gate"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	cpSpell->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, TRUE, _T("white creature"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSeaKingsBlessingCard::CSeaKingsBlessingCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sea Kings' Blessing"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	cpSpell->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, TRUE, _T("blue creature"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CSylvanParadiseCard::CSylvanParadiseCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sylvan Paradise"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			GREEN_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	cpSpell->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, TRUE, _T("green creature"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CTouchOfDarknessCard::CTouchOfDarknessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Touch of Darkness"), CardType::Instant, nID)
{
	counted_ptr<CTargetChangeCardTypeSpell> cpSpell(
		::CreateObject<CTargetChangeCardTypeSpell>(this, AbilityType::Instant,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, SpecialNumber::Any);
	cpSpell->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, TRUE, _T("black creature"));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CElderSpawnCard::CElderSpawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Elder Spawn"), CardType::Creature, CREATURE_TYPE(Spawn), nID,
		_T("4") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(6))
{
	m_CardFilter.AddComparer(new AnyCreatureComparer);
	m_CardFilter.AddComparer(new NegateCardComparer(new CardTypeComparer(CardType::Red, false)));

	GetCreatureKeyword()->AddUnblockable(FALSE, &m_CardFilter);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Island, false));
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->GetOptionalModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-6), this, PreventableType::Preventable,
																	 DamageType::AbilityDamage | DamageType::NonCombatDamage));
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag::DamageSource);
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStanggCard::CStanggCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Stangg"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Stangg Twin"), TOKEN_ID_BY_NAME, 1);

		cpAbility->SetAbilityName(_T("token creation ability"));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(FALSE, _T("Stangg Twin"), TOKEN_ID_BY_NAME, SpecialNumber::All); //kills all tokens with the name "Stangg Twin"

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardNameComparer(_T("Stangg Twin")));
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBeastsOfBogardanCard::CBeastsOfBogardanCard(CGame* pGame, UINT nID)
    : CCreatureCard(pGame, _T("Beasts of Bogardan"), CardType::Creature, CREATURE_TYPE(Beast), nID,
		_T("4") RED_MANA_TEXT, Power(3), Life(3))
{
    GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromRed, FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::White, false)));

		cpAbility->GetSurveyCardFilter().AddNegateComparer(new CardControllerComparer(this)); //"your opponents control"

		cpAbility->SetMaximumAddedPower(Power(1));
		cpAbility->SetMaximumAddedToughness(Life(1));

		cpAbility->SetPowerMultiplier(Power(1));
		cpAbility->SetToughnessMultiplier(Life(1));

		cpAbility->SetListenToAllPlayersZones(); //necessary to check both sides

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CUrborgCard::CUrborgCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Urborg"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

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
				CreatureKeyword::Null, CreatureKeyword::Swampwalk,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPartWaterCard::CPartWaterCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Part Water"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Sorcery,
			BLUE_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Islandwalk, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors, TRUE); //"ContextValue(1), TRUE" is needed to use a doubled X cost [e.g. "XX:" or "XXR:"] (the "TRUE" is the vital part).
	cpSpell->AdjustTargetCountWithExtraCostValue();

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAErathiBerserkerCard::CAErathiBerserkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ærathi Berserker"), CardType::Creature, CREATURE_TYPE2(Human, Berserker), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAErathiBerserkerCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAErathiBerserkerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 3;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CChromiumCard::CChromiumCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chromium"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elder, Dragon), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(7), Life(7))
{
	AddUpkeepCost(WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CChromiumCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CChromiumCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 2;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
// 
CFrostGiantCard::CFrostGiantCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frost Giant"), CardType::Creature, CREATURE_TYPE(Giant), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CFrostGiantCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CFrostGiantCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 2;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CHundingGjornersenCard::CHundingGjornersenCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hunding Gjornersen"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CHundingGjornersenCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CHundingGjornersenCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 1;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CMarhaultElsdragonCard::CMarhaultElsdragonCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Marhault Elsdragon"), CardType::_LegendaryCreature, CREATURE_TYPE2(Elf, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(6))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMarhaultElsdragonCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMarhaultElsdragonCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 1;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CTriassicEggCard::CTriassicEggCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Triassic Egg"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3")));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(HATCHLING_COUNTER, +1));
        cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
			::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
				_T(""),
				CCardFilter::GetFilter(_T("creatures")),
				ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetFromZoneId(ZoneId::Hand);

	    cpAbility->AddSacrificeCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CTriassicEggCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Graveyard, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	    cpAbility->AddSacrificeCost();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CTriassicEggCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CTriassicEggCard::CanPlay(BOOL bIncludeTricks)
{
	int nCounterCount = GetCounterContainer()->GetCounter(HATCHLING_COUNTER)->GetCount();

	return nCounterCount > 1;
}

//____________________________________________________________________________
//
CGlyphOfDestructionCard::CGlyphOfDestructionCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Glyph of Destruction"), CardType::Instant, nID, AbilityType::Instant,
		RED_MANA_TEXT,
		Power(+10), Life(+0),
		CreatureKeyword::PreventAllCombatDamage | CreatureKeyword::PreventAllNoncombatDamage, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new BlockingCreatureComparer)
		, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CGlyphOfDestructionCard::OnResolutionCompleted))
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	//Remove +10/+0 at end of combat.
	m_pTargetChgPwrTghAttrSpell->GetTargetModifier().CCreatureModifiers::push_back(
		new CScheduledCreatureModifier(pGame, new CPowerModifier(Power(-10), TRUE),
		TurnNumberDelta(-1),
		NodeId::EndOfCombatStep,
		true, // in-play only
		CScheduledCreatureModifier::Operation::ApplyToLater));

	m_pTargetChgPwrTghAttrSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CGlyphOfDestructionCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAbilityAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Destroy Effect"), 61060, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CLifeChiselCard::CLifeChiselCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Life Chisel"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CLifeChiselCard::OnResolutionCompleted))
{
	counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
			_T(""),
			Life(+0), PreventableType::NotPreventable));

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, 
			FALSE,	// opponent's turn only
			TRUE);	// your turn only

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CLifeChiselCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* pCard = pAbilityAction->GetSacrificeCards()->GetAt(0);
	if (pCard->GetCardType().IsCreature()) 
	{
		CCreatureCard* pCreature = (CCreatureCard*)pCard;
		CLifeModifier pmodifier1 = CLifeModifier(
			Life(pCreature->GetLastKnownToughness()), // number on which the life will be altered
		this, // sourcecard of life altering
		PreventableType::NotPreventable // preventable or not prevantable
		, DamageType::NonCombatDamage // Damage Type
		);
		pmodifier1.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CConcordantCrossroadsCard::CConcordantCrossroadsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Concordant Crossroads"), CardType::_WorldEnchantment, nID,
		GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0),
			CreatureKeyword::Haste));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGravitySphereCard::CGravitySphereCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Gravity Sphere"), CardType::_WorldEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLivingPlaneCard::CLivingPlaneCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Living Plane"), CardType::_WorldEnchantment, nID)
{
	counted_ptr<CIsAlsoAEnchantment> cpSpell(
		::CreateObject<CIsAlsoAEnchantment>(this,
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false),
			_T("Animated Land C"), 64009));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CStormWorldCard::CStormWorldCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Storm World"), CardType::_WorldEnchantment, nID,
		RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStormWorldCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CStormWorldCard::BeforeResolution(CStormWorldCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pHand = m_pGame->GetActivePlayer()->GetZoneById(ZoneId::Hand);
	if (pHand->GetSize() >= 4)
		return false;

	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(Life(pHand->GetSize()- 4));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CTheAbyssCard::CTheAbyssCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("The Abyss"), CardType::_WorldEnchantment, nID,
		_T("3") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::DestroyWithoutRegeneration);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWoodElementalCard::CWoodElementalCard(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Wood Elemental"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("3") GREEN_MANA_TEXT, Power(0), Life(0), &m_CardFilter)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CWoodElementalCard::OnZoneChanged))
	, m_CardFilter(_T("an untapped Forest"), _T("untapped Forests"), new CardTypeComparer(CardType::Forest, false))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	m_CardFilter.AddComparer(new UntappedComparer);
	GetCreatureKeyword()->AddDevour(FALSE);
}

void CWoodElementalCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	int nCount = GetDevouredCount();

	if (pToZone->GetZoneId() == ZoneId::Battlefield && moveType == MoveType::Cast && nCount > 0)
	{
		CPowerModifier powerModifier(Power(nCount), FALSE, TRUE);
		powerModifier.ApplyTo(this);

		CLifeModifier lifeModifier(Life(nCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE, TRUE);
		lifeModifier.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CDreamCoatCard::CDreamCoatCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Dream Coat"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			BLUE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CDreamCoatCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CDreamCoatCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetChangeCardTypeSpell>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetChangeCardTypeSpell>>(pEnchantCard,
			_T(""),
			new SpecificCardComparer(pEnchantedCard)));

	cpEnchantAbility->SetMaxTurnUsageCount(1);
	
	cpEnchantAbility->AddCardTypeToSelection(CardType::White, CardType::_ColorMask, FALSE, _T("white creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue, CardType::_ColorMask, FALSE, _T("blue creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Black, CardType::_ColorMask, FALSE, _T("black creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Red, CardType::_ColorMask, FALSE, _T("red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Green, CardType::_ColorMask, FALSE, _T("green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue, CardType::_ColorMask, FALSE, _T("white and blue creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Black, CardType::_ColorMask, FALSE, _T("white and black creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Red, CardType::_ColorMask, FALSE, _T("white and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Green, CardType::_ColorMask, FALSE, _T("white and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black, CardType::_ColorMask, FALSE, _T("blue and black creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red, CardType::_ColorMask, FALSE, _T("blue and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Green, CardType::_ColorMask, FALSE, _T("blue and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("black and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("black and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black, CardType::_ColorMask, FALSE, _T("white, blue and black creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red, CardType::_ColorMask, FALSE, _T("white, blue and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Green, CardType::_ColorMask, FALSE, _T("white, blue and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("white, black and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("white, black and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("white, red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("blue, black and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("blue, black and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("blue, red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("black, red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Red, CardType::_ColorMask, FALSE, _T("white, blue, black and red creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Black | CardType::Green, CardType::_ColorMask, FALSE, _T("white, blue, black and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Blue | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("white, blue, red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::White | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("white, black, red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::Blue | CardType::Black | CardType::Red | CardType::Green, CardType::_ColorMask, FALSE, _T("blue, black, red and green creature"));
	cpEnchantAbility->AddCardTypeToSelection(CardType::_ColorMask, CardType::_ColorMask, FALSE, _T("all colors creature"));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CRingOfImmortalsCard::CRingOfImmortalsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ring of Immortals"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	m_CardFilter.AddComparer(new CardControllerComparer(this));
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));

	counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CCounterSpell>>(this,
			_T("3"),
			new CardTypeComparer(CardType::Instant | CardType::_Aura, false)));
	ATLASSERT(cpAbility);

	cpAbility->AddTapCost();

	cpAbility->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAvoidFateCard::CAvoidFateCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Avoid Fate"), CardType::Instant, nID,
		GREEN_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Instant | CardType::_Aura, false))

	, m_CardFilter (_T("card you control") , _T("card you control"),
	new CardControllerComparer(this))
{
	m_CardFilter.AddComparer(new CardZoneComparer(ZoneId::Battlefield));
	m_pCounterSpell->GetCounterspellCardFilter().AddComparer(new StackTargetingComparer(&m_CardFilter));	
}

//____________________________________________________________________________
//
CTransmutationCard::CTransmutationCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Transmutation"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT,
		Power(+0), Life(+0),
		CreatureKeyword::SwitchedPT, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
}

//____________________________________________________________________________
//
CTheTabernacleatPendrellValeCard::CTheTabernacleatPendrellValeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("The Tabernacle at Pendrell Vale"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new AnyCreatureComparer,	
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
		CCardAbilityModifier::CreateAbilityCallback(this,
			&CTheTabernacleatPendrellValeCard::CreateAbility1)));

	AddAbility(cpAbility.GetPointer());
}

counted_ptr<CAbility> CTheTabernacleatPendrellValeCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CTabernacleUpkeepAbility> cpUpkeepAbility(::CreateObject<CTabernacleUpkeepAbility>(pCard, _T("1")));

	return counted_ptr<CAbility>(cpUpkeepAbility.GetPointer());
}

//____________________________________________________________________________
//
//"Life Matrix\n{4}\nArtifact\nLEG,R\n{4}, {T}: Put a matrix counter on target creature and that creature gains "Remove a matrix counter from this creature: Regenerate this creature." Activate this ability only during your upkeep."
//AddCounterCost doesn't remove the counter from the creature.
//CLifeMatrixCard::CLifeMatrixCard(CGame* pGame, UINT nID)
//	: CInPlaySpellCard(pGame, _T("Life Matrix"), CardType::Artifact, nID,
//		_T("4"), AbilityType::Artifact)
//{
//	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
//		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
//			_T("4"),
//			new AnyCreatureComparer, FALSE));
//
//	cpAbility->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
//
//	cpAbility->AddTapCost();
//	cpAbility->SetUseInSpecificNode(NodeId::UpkeepStep, FALSE, TRUE);
//
//	cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(MATRIX_COUNTER, +1));
//
//	cpAbility->GetTargetModifier().CCardModifiers::push_back(
//		new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
//				&CLifeMatrixCard::CreateAdditionalAbility)));
//
//	AddAbility(cpAbility.GetPointer());
//}
//
//counted_ptr<CAbility> CLifeMatrixCard::CreateAdditionalAbility(CCard* pCard)
//{
//	counted_ptr<CRegenerationAbility> cpAbility(
//		::CreateObject<CRegenerationAbility>(pCard,
//			_T("")));
//
//	cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(MATRIX_COUNTER), -1);
//
//	return counted_ptr<CAbility>(cpAbility.GetPointer());
//}
//
////____________________________________________________________________________
////
CGreatDefenderCard::CGreatDefenderCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Great Defender"), CardType::Instant, nID, AbilityType::Instant,
	    WHITE_MANA_TEXT,
		Power(0), Life(0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{	
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGreatDefenderCard::BeforeResolution));
}

bool CGreatDefenderCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

		ContextValue Context(pAction->GetValue());

		Context.nValue1 = converted;

		for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
		it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

		{
			pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
		}

		return true;

	return true;
}

//____________________________________________________________________________
//
CEurekaCard::CEurekaCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Eureka"), CardType::Sorcery, nID)
{	
	m_CardFilter.SetComparer(new CardTypeComparer(CardType::Creature | CardType::Artifact | CardType::_Enchantment | CardType::_Land | CardType::Planeswalker, false));

	{
	counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT));	

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEurekaCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
	}
}
bool CEurekaCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* cont = GetController();
	CPlayer* opp = m_pGame->GetNextPlayer(cont);

	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier.AddSelection(MinimumValue(0), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer,					 // select by 
			CZoneModifier::RoleType::PrimaryPlayer,					 // reveal to
			&m_CardFilter,											 // what cards
			ZoneId::Battlefield,									 // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer,					 // select by this player
			CardPlacement::Top,										 // put selected cards on 
			MoveType::Others,										 // move type
			CZoneModifier::RoleType::PrimaryPlayer);				 // order selected cards by this player

	int cont_hand = cont->GetZoneById(ZoneId::Hand)->GetSize();
	int opp_hand = opp->GetZoneById(ZoneId::Hand)->GetSize();

	int loop = cont_hand;
	if (opp_hand > cont_hand) 
		loop = opp_hand;

	for (int i = 0; i < loop; ++i)
	{
		cont_hand = cont->GetZoneById(ZoneId::Hand)->GetSize();
		opp_hand = opp->GetZoneById(ZoneId::Hand)->GetSize();

		pModifier.ApplyTo(cont);
		pModifier.ApplyTo(opp);

		int cont_new_hand = cont->GetZoneById(ZoneId::Hand)->GetSize();
		int opp_new_hand = opp->GetZoneById(ZoneId::Hand)->GetSize();

		if (cont_hand == cont_new_hand && opp_hand == opp_new_hand) 
			break;
	}

	return true;
}
//____________________________________________________________________________
//
CRustCard::CRustCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Rust"), CardType::Instant, nID)
{

		counted_ptr<CCounterAbilitySpell> cpSpell(
			::CreateObject<CCounterAbilitySpell>(this, AbilityType::Instant,
				_T("") GREEN_MANA_TEXT, CCardFilter::GetFilter(_T("artifact cards")), TRUE, FALSE));

		AddSpell(cpSpell.GetPointer());

}
//____________________________________________________________________________
//
CJovialEvilCard::CJovialEvilCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Jovial Evil"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("2") BLACK_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-0),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CJovialEvilCard::OnResolutionCompleted))
{	
	m_pTargetChgLifeSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CJovialEvilCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target= pAbilityAction->GetAssociatedPlayer();
	CZone* targetBattle = target->GetZoneById(ZoneId::Battlefield);
    int count=0;

	for (int i = 0; i < targetBattle->GetSize(); ++i)
	{
	CCard* pCard = targetBattle->GetAt(i);
	if (pCard->GetCardType().IsCreature())
		{
			CCreatureCard* pCreature = (CCreatureCard*)pCard;
			if ((pCard->GetCardType() & CardType::White ).Any()) count=count+1;
		}
	}
	count=count*2;

	CLifeModifier pmodifier1 = CLifeModifier(
		Life(-count), // number on which the life will be altered
	this, // sourcecard of life altering
	PreventableType::Preventable // preventable or not prevantable
	, DamageType::SpellDamage | DamageType::NonCombatDamage // Damage Type
	);

	if (bResult) pmodifier1.ApplyTo(target);
}

//____________________________________________________________________________
//
CLivonyaSiloneCard::CLivonyaSiloneCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Livonya Silone"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Legendary, false));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::_Land, false));

	GetCreatureKeyword()->AddNonBasicWalk(FALSE, &m_CardFilter);
}

//____________________________________________________________________________
//
CGostaDirkCard::CGostaDirkCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Gosta Dirk"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Islandwalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCrevasseCard::CCrevasseCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Crevasse"), CardType::GlobalEnchantment, nID,
		_T("2") RED_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Mountainwalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDeadfallCard::CDeadfallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Deadfall"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Forestwalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGreatWallCard::CGreatWallCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Great Wall"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Plainswalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CQuagmireCard::CQuagmireCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Quagmire"), CardType::GlobalEnchantment, nID,
		_T("2") BLACK_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Swampwalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUndertowCard::CUndertowCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Undertow"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Islandwalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CUrDragoCard::CUrDragoCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Ur-Drago"), CardType::_LegendaryCreature, CREATURE_TYPE(Elemental), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility( 
		::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Swampwalk));

	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLordMagnusCard::CLordMagnusCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Lord Magnus"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Druid), nID,
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(3))
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility( 
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Plainswalk));

		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility( 
			::CreateObject<CPlayerEffectEnchantment>(this, PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Forestwalk));

		ATLASSERT(cpAbility);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHalfdaneCard::CHalfdaneCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Halfdane"), CardType::_LegendaryCreature, CREATURE_TYPE(Shapeshifter), nID,
		_T("1") WHITE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CHalfdaneCard::OnResolutionCompleted))
{
	GetCardKeyword()->AddChangeling(false);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalHide);
	cpAbility->GetTrigger().SetMonitorControllerOnly(true);

	// Power & Life replacement modifiers overlap with the previous turn one's during upkeep phase
	CPowerModifier* pModifier1 = new CPowerModifier(Power(+3), false, true);
	pModifier1->SetReplacement(true);
	CLifeModifier* pModifier2 = new CLifeModifier(Life(+3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, false, true);
	pModifier2->SetReplacement(true);
	CScheduledCreatureModifier* pModifier3 = new CScheduledCreatureModifier(GetGame(), pModifier1,
		TurnNumberDelta(0), NodeId::DrawStep1, false, CScheduledCreatureModifier::Operation::ApplyToLater);
	CScheduledCreatureModifier* pModifier4 = new CScheduledCreatureModifier(GetGame(), pModifier2,
		TurnNumberDelta(0), NodeId::DrawStep1, false, CScheduledCreatureModifier::Operation::ApplyToLater);
	cpAbility->GetOptionalModifier().CCreatureModifiers::Add(pModifier3);
	cpAbility->GetOptionalModifier().CCreatureModifiers::Add(pModifier4);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CHalfdaneCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pAbilityAction->GetAssociatedCard());
	if (!pCreature) return;

	// Unfortunately Power & Life replacement modifiers can't be scheduled
	CPowerModifier* pModifier1 = new CPowerModifier(pCreature->GetLastKnownPower(), false, true);
	pModifier1->SetReplacement(true);

	CLifeModifier* pModifier2 = new CLifeModifier(pCreature->GetLastKnownToughness(), this,	PreventableType::NotPreventable, DamageType::NotDealingDamage, false, true);
	pModifier2->SetReplacement(true);

	pModifier1->ApplyTo(this);
	pModifier2->ApplyTo(this);
}

//____________________________________________________________________________
//
CRamsesOverdarkCard::CRamsesOverdarkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ramses Overdark"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Assassin), nID,
	_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new AnyCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new EnchantedCardComparer);

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLesserWerewolfCard::CLesserWerewolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lesser Werewolf"), CardType::Creature, CREATURE_TYPE(Werewolf), nID,
	_T("3") BLACK_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			BLACK_MANA_TEXT,
			new AttackingBlockingThisCreatureComparer(this),
			false));

	cpAbility->GetTargetModifier().CCardModifiers::Add(new CCardCounterModifier(_T("-0/-1"), +1));
	cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CPowerModifier(Power(-1)));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLesserWerewolfCard::BeforeResolution));
	cpAbility->SetUseInSpecificNode(NodeId::DeclareBlockersStep2);

	AddAbility(cpAbility.GetPointer());
}

bool CLesserWerewolfCard::BeforeResolution(CAbilityAction* pAction) const
{
	return (GET_INTEGER(GetPower()) >= 1);
}

//____________________________________________________________________________
//
CManaDrainCard::CManaDrainCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Mana Drain"), CardType::Instant, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CManaDrainCard::BeforeResolution));
}

bool CManaDrainCard::BeforeResolution(CAbilityAction* pAction) const
{
	DWORD nCMC = pAction->GetAssociatedCard()->GetConvertedManaCost();

	CNumberEffectModifier pModifier = CNumberEffectModifier(GetGame(), _T("Mana Drain Effect"), 61120, nCMC);
	pModifier.ApplyTo(pAction->GetController());
	
	return true;
}

//____________________________________________________________________________
//
CPuppetMasterCard::CPuppetMasterCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Puppet Master"), CardType::EnchantCreature, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT,
		new AnyCreatureComparer)
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CSpecialEffectModifier(this, 1));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPuppetMasterCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetResolutionCost(BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT);

		cpAbility->GetTrigger().SetTriggerIndex(1);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPuppetMasterCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CTakklemaggotCard::CTakklemaggotCard(CGame* pGame, UINT nID)
	: CEnchantCard(pGame, _T("Takklemaggot"), CardType::EnchantCreature, nID,
		_T("2") /*BLACK_MANA_TEXT BLACK_MANA_TEXT*/,
		new AnyCreatureComparer)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CTakklemaggotCard::OnResolutionCompleted))
{
	m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
	m_CardFlagModifier1.GetModifier().SetAdditionData(GetInstanceID());
	m_CardFlagModifier1.GetModifier().SetOneTurnOnly(TRUE);

	m_CardFlagModifier2.GetModifier().SetToRemove(CardFlag::AbilityFlag);
	m_CardFlagModifier2.GetModifier().SetRemovalData(GetInstanceID());
	m_CardFlagModifier2.GetModifier().SetOneTurnOnly(TRUE);

	counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(
				this, &CTakklemaggotCard::CanPlay)));
		
		m_pEnchantSpell->Add(cpTrait.GetPointer());
		//cpSpell->Add(cpTrait.GetPointer());

	{
		counted_ptr<CEnchant> cpSpell(
			::CreateObject<CEnchant>(this,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		
		m_pEnchantSpell = cpSpell.GetPointer();
		AddSpell(m_pEnchantSpell);
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTakklemaggotCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTakklemaggotCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTakklemaggotCard::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTakklemaggotCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new EnchantableComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTakklemaggotCard::SetTriggerContext3));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		cpAbility->GetCardModifiers().Add(new CCardFlagModifier(m_CardFlagModifier1));
		cpAbility->SetAbilityText(_T("Return Takklemaggot to play."));

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CTakklemaggotCard::CanPlay(BOOL bIncludeTricks)
{
	return false;
}

bool CTakklemaggotCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return ((GetCardType() & CardType::EnchantCreature).Any() && pToNode->GetGraph()->GetPlayer() == m_pEnchantSpell->GetEnchantedOnCard()->GetController());
}

bool CTakklemaggotCard::BeforeResolution1(CAbilityAction* pAction) const
{
	if (!m_pEnchantSpell->GetEnchantedOnCard()) return false;

	CCardCounterModifier modifier = CCardCounterModifier(_T("-0/-1"), +1);
	modifier.ApplyTo(m_pEnchantSpell->GetEnchantedOnCard());

	return true;
}

bool CTakklemaggotCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!(GetCardType() & CardType::EnchantCreature).Any() && pToNode->GetGraph()->GetPlayer() == m_Player.GetPointer());
}

bool CTakklemaggotCard::BeforeResolution2(CAbilityAction* pAction) const
{
	CLifeModifier modifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);
	modifier.ApplyTo(m_Player.GetPointer());

	return true;
}

bool CTakklemaggotCard::SetTriggerContext3(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_Player = pCard->GetController();
	return true;
}

void CTakklemaggotCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCardFilter* pFilter = m_pEnchantSpell->GetTargeting()->GetSubjectCardFilter().Clone();
	CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
	pComparer->SetData(GetInstanceID());
	pFilter->AddComparer(pComparer);

	CCountedCardContainer cards;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CZone* pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		pFilter->GetIncluded(*pZone, cards);
		if (cards.GetSize() > 0) break;
	}
	delete pFilter;

	if (cards.GetSize())
	{
		CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);
		modifier.ApplyTo(this);

		CCard* pCard = cards.GetAt(0);

		for (int i = 0; i < this->GetSpells().GetSize(); ++i)
		{
			CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(this->GetSpells().GetAt(i));
			if (!pEnchantSpell) continue;
			pEnchantSpell->Enchant(pCard, GetController(), this->GetSpells().GetAt(i)->GetActionValue());
		}
		m_CardFlagModifier2.ApplyTo(pCard);
	}
	else
	{
		CCardTypeModifier modifier1 = CCardTypeModifier(CardType::GlobalEnchantment, false, CardType::EnchantCreature);
		modifier1.ApplyTo(this);

		CMoveCardModifier modifier2 = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE);
		modifier2.ApplyTo(this);
	}
}

//____________________________________________________________________________
//
CAllHallowsEveCard::CAllHallowsEveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("All Hallow's Eve"), CardType::Sorcery, nID)

	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CAllHallowsEveCard::OnResolutionCompleted1))
	, m_cpEventListener2(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CAllHallowsEveCard::OnResolutionCompleted2))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);
		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{ // At the beginning of your upkeep, remove a scream counter from this.
		counted_ptr<TriggeredAbility1> cpAbility(
			::CreateObject<TriggeredAbility1>(this, NodeId::UpkeepStep, FALSE));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility1::OptionalType::Required);
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(SCREAM_COUNTER, -1));

		cpAbility->SetContextFunction(TriggeredAbility1::ContextFunction(this, &CAllHallowsEveCard::SetTriggerContextS1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility1::BeforeResolveSelectionCallback(this, &CAllHallowsEveCard::BeforeResolution1));
		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener2.GetPointer());

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

void CAllHallowsEveCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCardCounterModifier pModifier = CCardCounterModifier(SCREAM_COUNTER, +2, TRUE);
	pModifier.ApplyTo(this);
}

bool CAllHallowsEveCard::SetTriggerContextS1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext,
										  CNode* pToNode) const
{
	if (GetZone()->GetZoneId() != ZoneId::Exile) return false;
	return GetCounterContainer()->GetCounter(SCREAM_COUNTER)->GetCount() > 0;
}

bool CAllHallowsEveCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Exile);
}

void CAllHallowsEveCard::OnResolutionCompleted2(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (GetCounterContainer()->GetCounter(SCREAM_COUNTER)->GetCount() > 0) return;

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Exile, ZoneId::Graveyard, TRUE, MoveType::Others);
	pModifier1.ApplyTo(this);

	CZoneCardModifier* pModifier2 = new CZoneCardModifier(ZoneId::Graveyard, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others)));
	pModifier2->ApplyTo(GetController());
	pModifier2->ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CFieldOfDreamsCard::CFieldOfDreamsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Field of Dreams"), CardType::_WorldEnchantment, nID,
		BLUE_MANA_TEXT, AbilityType::Enchantment)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CFieldOfDreamsCard::OnZoneChanged))
{
	counted_ptr<CPlayerEffectEnchantment> cpAbility(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::TopCardRevealed));

	AddAbility(cpAbility.GetPointer());
}

void CFieldOfDreamsCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (pToZone->GetZoneId() == ZoneId::_Effects && GetController()->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			GetController()->GetPlayerName(), GetController()->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			GetController()->GetPlayerName(),
			GetController()->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			GetController()->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(GetController()->GetZoneById(ZoneId::Library)->GetTopCard());
	}

	if (pToZone->GetZoneId() == ZoneId::_Effects && m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetSize() > 0 && !m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s reveals %s in %s's %s"), 
			m_pGame->GetNextPlayer(GetController())->GetPlayerName(), m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetTopCard()->GetCardName(),
			m_pGame->GetNextPlayer(GetController())->GetPlayerName(),
			m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetZoneName());
		GetGame()->Message(strMessage, 
			m_pGame->GetNextPlayer(GetController())->IsComputer() ? m_pGame->GetComputerImage() :m_pGame->GetHumanImage(),
			MessageImportance::High);	

		for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
			GetGame()->GetPlayer(j)->MemorizeCard(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Library)->GetTopCard());
	}
}

//____________________________________________________________________________
//
CAngelicVoicesCard::CAngelicVoicesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Angelic Voices"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Creature, false),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->GetConditionFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetConditionFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact | CardType::White, false));
	cpAbility->SetConditionValue(0);		
	cpAbility->SetConditionIsMaximum();

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CDisharmonyCard::CDisharmonyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Disharmony"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("2") RED_MANA_TEXT,
				new AttackingCreatureComparer, FALSE));


	counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
		m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CDisharmonyCard::CanPlay)));
	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDisharmonyCard::BeforeResolution));
	
	AddSpell(cpSpell.GetPointer());
}

BOOL CDisharmonyCard::CanPlay(BOOL bIncludeTricks)
{
	CNode* pCurrentNode = GetGame()->GetCurrentNode();

	return (pCurrentNode->GetNodeId() == NodeId::BeginningOfCombatStep ||
			pCurrentNode->GetNodeId() == NodeId::DeclareAttackersStep2);
}

bool CDisharmonyCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	
	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(pTarget);

	pTarget->RemoveFromCombat(FALSE);
	
	CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);
	
	CGainControlModifier* pModifier1_return = new CGainControlModifier(GetGame(), (CCard*)this, true);
	CScheduledCardModifier* pModifier2 = new CScheduledCardModifier(
		GetGame(), pModifier1_return, TurnNumberDelta(-1), NodeId::EndStep, true, CScheduledCardModifier::Operation::ApplyToLater);

	pModifier1-> ApplyTo(pTarget);
	pModifier2-> ApplyTo(pTarget);
		
	return true;
}
//____________________________________________________________________________
//
CBlazingEffigyCard::CBlazingEffigyCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blazing Effigy"), CardType::Creature, CREATURE_TYPE(Elemental), nID,
		_T("1") RED_MANA_TEXT, Power(0), Life(3))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CBlazingEffigyCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CBlazingEffigyCard::BeforeResolution(CBlazingEffigyCard::TriggeredAbility::TriggeredActionType* pAction)
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	int nDamage = 3 + GetBlazingEffigyDamage();

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(nDamage));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CGiantTurtleCard::CGiantTurtleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Turtle"), CardType::Creature, CREATURE_TYPE(Turtle), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(4))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
			CPlayableIfTrait::PlayableCallback(this,
				&CGiantTurtleCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CGiantTurtleCard::CanAttack(BOOL bIncludeTricks)
{
	if (this->AttackedLastTurn(this->GetController()))
		return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
CNebuchadnezzarCard::CNebuchadnezzarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nebuchadnezzar"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("3") BLUE_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CNebuchadnezzarCard::OnNameSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();
	cpAbility->GetTargeting()->SetIncludeOpponentPlayersOnly();

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CNebuchadnezzarCard::BeforeResolution));
	cpAbility->SetUseInSpecificNode(NodeId::Null, FALSE, TRUE);

	AddAbility(cpAbility.GetPointer());
}

bool CNebuchadnezzarCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCards = pAction->GetCostConfigEntry().GetExtraValue();
	
	CPlayer* pController = pAction->GetController();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int nZoneCount = pTarget->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pTarget->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken())
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pController, (DWORD)pTarget, (DWORD)nCards);
	return true;
}

void CNebuchadnezzarCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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

				CPlayer* pTarget = (CPlayer*)dwContext1;
				int nCards = (int)dwContext2;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

				if (nCards > pHand->GetSize())
					nCards = pHand->GetSize();

				if (nCards > 0)
				{
					CCountedCardContainer copyHand;
					copyHand.RemoveAll();

					for (int i = 0; i < pHand->GetSize(); ++i)
						copyHand.AddCard(pHand->GetAt(i), CardPlacement::Top);

					copyHand.Shuffle(pTarget);

					CCountedCardContainer pChoice;

					for (int i = 0; i < nCards; ++i)
						pChoice.AddCard(copyHand.GetAt(i), CardPlacement::Top);

					if (!m_pGame->IsThinking())
					{
						for (int i = 0; i < pChoice.GetSize(); ++i)
						{
							CString strMessage;
							strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pChoice.GetAt(i)->GetCardName(TRUE));

							m_pGame->Message(
								strMessage,
								pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
								MessageImportance::High
								);

							for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
							{
								m_pGame->GetPlayer(j)->MemorizeCard(pChoice.GetAt(i));
							}
						}
					}
				}
				return;
			}
			else
			{
				CCard* pSelected = (CCard*)it->dwContext;
				CPlayer* pTarget = (CPlayer*)dwContext1;
				int nCards = (int)dwContext2;
				CZone* pHand = pTarget->GetZoneById(ZoneId::Hand);

				if (pHand->GetSize() > 0)
				{
					if (nCards > pHand->GetSize())
						nCards = pHand->GetSize();
					CCountedCardContainer copyHand;
					copyHand.RemoveAll();

					for (int i = 0; i < pHand->GetSize(); ++i)
						copyHand.AddCard(pHand->GetAt(i), CardPlacement::Top);

					copyHand.Shuffle(pTarget);

					CCountedCardContainer pChoice;

					for (int i = 0; i < nCards; ++i)
						pChoice.AddCard(copyHand.GetAt(i), CardPlacement::Top);

					if (!m_pGame->IsThinking())
					{
						for (int i = 0; i < pChoice.GetSize(); ++i)
						{
							CString strMessage;
							strMessage.Format(_T("%s reveals %s"), pTarget->GetPlayerName(), pChoice.GetAt(i)->GetCardName(TRUE));

							m_pGame->Message(
								strMessage,
								pTarget->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
								MessageImportance::High
								);

							for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
							{
								m_pGame->GetPlayer(j)->MemorizeCard(pChoice.GetAt(i));
							}
						}
					}

					CCardFilter m_CardFilter;
					m_CardFilter.AddComparer(new ContainedinComparer(&pChoice));
					m_CardFilter.AddComparer(new CardNameComparer(pSelected->GetPrintedCardName()));

					CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Hand, &m_CardFilter,
						std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Hand, ZoneId::Graveyard, TRUE, MoveType::Discard)));
					pModifier.ApplyTo(pTarget);
				}
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CPetraSphinxCard::CPetraSphinxCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Petra Sphinx"), CardType::Creature, CREATURE_TYPE(Sphinx), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
	, m_NameSelection(pGame, CSelectionSupport::SelectionCallback(this, &CPetraSphinxCard::OnNameSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			FALSE_CARD_COMPARER, true));

	cpAbility->AddTapCost();

	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPetraSphinxCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CPetraSphinxCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int nZoneCount = pTarget->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pTarget->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken())
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

	m_NameSelection.AddSelectionRequest(entries, 1, 1, NULL, pTarget);
	return true;
}

void CPetraSphinxCard::OnNameSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
				if (pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize() > 0)
				{
					CCard* pCard = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

					pModifier1.ApplyTo(pSelectionPlayer);

					CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);
					pModifier2.ApplyTo(pCard);
				}
								
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
				if (pSelectionPlayer->GetZoneById(ZoneId::Library)->GetSize() > 0)
				{
					CCard* pCard = pSelectionPlayer->GetZoneById(ZoneId::Library)->GetTopCard();

					CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer,
						CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);

					pModifier1.ApplyTo(pSelectionPlayer);

					if (pCard->GetPrintedCardName() == pSelected->GetPrintedCardName())
					{
						CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE, MoveType::Others, pSelectionPlayer);
						pModifier2.ApplyTo(pCard);
					}
					else
					{
						CMoveCardModifier pModifier2 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pSelectionPlayer);
						pModifier2.ApplyTo(pCard);
					}
				}
								
				return;
			}
		}
}

//____________________________________________________________________________
//
CKnowledgeVaultCard::CKnowledgeVaultCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Knowledge Vault"), CardType::Artifact, nID,
		_T("4"), AbilityType::Artifact)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CKnowledgeVaultCard::OnZoneChanged))
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("2")));

		cpAbility->AddTapCost();

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::_ExileFaceDown));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKnowledgeVaultCard::BeforeResolution1));
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Hand));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKnowledgeVaultCard::BeforeResolution2));
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_ExileFaceDown, ZoneId::Graveyard));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKnowledgeVaultCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbilityAux> cpAbility(
			::CreateObject<TriggeredAbilityAux>(this, ZoneId::_ExileFaceDown, ZoneId::_AllZones, FALSE, TRUE));

		cpAbility->SetOptionalType(TriggeredAbilityAux::OptionalType::Required);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbilityAux::ContextFunction(this, &CKnowledgeVaultCard::SetTriggerContextAux));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbilityAux::BeforeResolveSelectionCallback(this, &CKnowledgeVaultCard::BeforeResolutionAux));
		AddAbility(cpAbility.GetPointer());
	}
}

bool CKnowledgeVaultCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	if (!pExiled.HasCard(pCard)) return false;

	triggerContext.nValue1 = (DWORD)pCard;
	return true;
}

bool CKnowledgeVaultCard::BeforeResolutionAux(TriggeredAbilityAux::TriggeredActionType* pAction)
{
	TriggeredAbilityAux::TriggerContextType triggerContext(pAction->GetTriggerContext());
	
	CCard* pCard = (CCard*)triggerContext.nValue1;

	pExiled.RemoveCard(pCard);

	return true;
}

bool CKnowledgeVaultCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pLibrary = pController->GetZoneById(ZoneId::Library);
	
	if (pLibrary->GetSize() == 0) return false;

	CCard* pCard = pLibrary->GetTopCard();
	pExiled.AddCard(pCard, CardPlacement::Top);

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::_ExileFaceDown, TRUE, MoveType::Others, pController);
	pModifier.ApplyTo(pCard);

	return true;
}

bool CKnowledgeVaultCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	if (!IsInplay() || GetController() != pController) return false;

	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pController);
	pModifier1.ApplyTo(this);

	CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier2.SetReorderInformation(true, ZoneId::Graveyard, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top, MoveType::Discard);
	pModifier2.ApplyTo(pController);

	CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Hand, TRUE, MoveType::Others, pController);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pModifier3.ApplyTo(pCard);
	}

	return true;
}

bool CKnowledgeVaultCard::BeforeResolution3(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_ExileFaceDown, ZoneId::Graveyard, TRUE, MoveType::Others, pController);

	while (pExiled.GetSize() > 0)
	{
		CCard* pCard = pExiled.GetAt(0);
		pExiled.RemoveCard(pCard);
		pModifier.ApplyTo(pCard);
	}

	return true;
}

void CKnowledgeVaultCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pExiled.RemoveAll();
	}
}

//____________________________________________________________________________
//
CWallOfTombstonesCard::CWallOfTombstonesCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wall of Tombstones"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("1") BLACK_MANA_TEXT, Power(0), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CWallOfTombstonesCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWallOfTombstonesCard::BeforeResolution(CAbilityAction* pAction)
{
	int nGraveyardCount = CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetCardContainer());

	CLifeModifier pModifier = CLifeModifier(Life(nGraveyardCount + 1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, FALSE, TRUE);
	pModifier.SetReplacement(TRUE);
	
	pModifier.ApplyTo(this);
	
	return true;
}

//____________________________________________________________________________
//
CGabrielAngelfireCard::CGabrielAngelfireCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gabriel Angelfire"), CardType::_LegendaryCreature, CREATURE_TYPE(Angel), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
	, m_Selection(pGame, CSelectionSupport::SelectionCallback(this, &CGabrielAngelfireCard::OnSelected))
	, Rampage(0)
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGabrielAngelfireCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGabrielAngelfireCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGabrielAngelfireCard::BeforeResolutionRampage));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGabrielAngelfireCard::SetTriggerContextAux1));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay,
									 CWhenSelfInplay::EventCallback,
										 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGabrielAngelfireCard::SetTriggerContextAux2));
		cpAbility->SetSkipStack(TRUE);
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CGabrielAngelfireCard::SetTriggerContextAux1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	Rampage = 0;

	return false;
}

bool CGabrielAngelfireCard::SetTriggerContextAux2(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	Rampage = 0;

	return false;
}

bool CGabrielAngelfireCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Flying"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("First strike"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("Trample"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("Rampage 3"));

		entries.push_back(selectionEntry);
	}

	m_Selection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CGabrielAngelfireCard::OnSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s selects flying"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
					pModifier1->GetModifier().SetToAdd(CreatureKeyword::Flying);
					pModifier1->GetModifier().SetOneTurnOnly(false);

				CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(GetGame(), pModifier1,
					TurnNumberDelta(-1), NodeId::UpkeepStep, false, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater,
					CScheduledCreatureModifier::DeltaOption::CustomPlayerTurn, GetController());

				pModifier2->ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects first strike"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
					pModifier1->GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
					pModifier1->GetModifier().SetOneTurnOnly(false);

				CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(GetGame(), pModifier1,
					TurnNumberDelta(-1), NodeId::UpkeepStep, false, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater,
					CScheduledCreatureModifier::DeltaOption::CustomPlayerTurn, GetController());

				pModifier2->ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects trample"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				CCreatureKeywordModifier* pModifier1 = new CCreatureKeywordModifier();
					pModifier1->GetModifier().SetToAdd(CreatureKeyword::Trample);
					pModifier1->GetModifier().SetOneTurnOnly(false);

				CScheduledCreatureModifier* pModifier2 = new CScheduledCreatureModifier(GetGame(), pModifier1,
					TurnNumberDelta(-1), NodeId::UpkeepStep, false, CScheduledCreatureModifier::Operation::ApplyToNowRemoveLater,
					CScheduledCreatureModifier::DeltaOption::CustomPlayerTurn, GetController());

				pModifier2->ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 3)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s selects rampage 3"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				Rampage = 1;

				return;
			}
		}
}

bool CGabrielAngelfireCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, CCreatureCard* pCreature1, CCreatureCard* pCreature2, int n1, int n2) const
{
	return Rampage == 1;
}

bool CGabrielAngelfireCard::BeforeResolutionRampage(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CZone* pOppInplay = m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield);

	int nRampage = 3;
	int nBlockingCount = -1;

	for (int i = 0; i < pOppInplay->GetSize(); ++i)
	{
		CCard* pOppCard = pOppInplay->GetAt(i);
		if (pOppCard->GetCardType().IsCreature())
		{
			CCreatureCard* pOppCreature = (CCreatureCard*)pOppCard;
			if (pOppCreature->IsBlocking(this) == TRUE)
				++nBlockingCount;
		}
	}

	triggerContext.m_LifeModifier.SetLifeDelta(Life(nRampage*nBlockingCount));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	triggerContext.m_PowerModifier.SetPowerDelta(Power(nRampage*nBlockingCount));

	pAction->SetTriggerContext(triggerContext);

	return nBlockingCount > 0;
}

//____________________________________________________________________________
//
CHazezonTamarCard::CHazezonTamarCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hazezon Tamar"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("4") RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Hazezon Tamar Effect"), 61031, 1, FALSE, ZoneId::_Effects));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE2(Sand, Warrior), true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHellfireCard::CHellfireCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Hellfire"), CardType::Sorcery, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CHellfireCard::OnResolutionCompleted))
	, m_nCards(0)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, TRUE, MoveType::Destroy));
	ATLASSERT(cpSpell);

	cpSpell->GetGlobalCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CHellfireCard::BeforeResolution));
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CHellfireCard::BeforeResolution(CAbilityAction* pAction)
{
	m_nCards = GetGame()->GetCertainTypeDiedCount(CardType::Creature);

	return true;
}

void CHellfireCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	int nDead = GetGame()->GetCertainTypeDiedCount(CardType::Creature);
	
	int nDamage = 3 + nDead - m_nCards;

	CLifeModifier pModifier = CLifeModifier(Life(-nDamage), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CReincarnationCard::CReincarnationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reincarnation"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				new AnyCreatureComparer, false));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CReincarnationCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CReincarnationCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Reincarnation Effect"), 61052, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CResetCard::CResetCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reset"), CardType::Instant, nID)
{
	counted_ptr<CGlobalUntapSpell> cpSpell(
		::CreateObject<CGlobalUntapSpell>(this, AbilityType::Instant,
			BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::_Land, false)));

	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility,
			CPlayableIfTrait::PlayableCallback(this,
			&CResetCard::CanPlay)));

	cpSpell->Add(cpTrait.GetPointer());

	cpSpell->SetAffectControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

BOOL CResetCard::CanPlay(BOOL bIncludeTricks)
{
	if (GetGame()->GetActivePlayer() == GetController()) return false;

	CNode* pCurrentNode = m_pGame->GetCurrentNode();

	return (pCurrentNode->GetNodeId() != NodeId::UpkeepStep);
}

//____________________________________________________________________________
//
CGlyphOfLifeCard::CGlyphOfLifeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Glyph of Life"), CardType::Instant, nID)
{
	counted_ptr<CTargetSpell> cpSpell(
			::CreateObject<CTargetSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new AnyCreatureComparer, false));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Wall), false));
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGlyphOfLifeCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGlyphOfLifeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer pSubjects;
	CCard* pTarget = pAction->GetAssociatedCard();
	if (pTarget->IsInplay())
		pSubjects.AddCard(pTarget, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("Glyph of Life Effect"), 61112, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//