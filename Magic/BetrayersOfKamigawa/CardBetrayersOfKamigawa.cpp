#include "stdafx.h"
#include "CardBetrayersOfKamigawa.h"

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

		DEFINE_CARD(CAkkiBlizzardHerderCard);
		DEFINE_CARD(CAkkiRaiderCard);
		DEFINE_CARD(CAshenMonstrosityCard);
		DEFINE_CARD(CAuraBarbsCard);
		DEFINE_CARD(CBakuAltarCard);
		DEFINE_CARD(CBileUrchinCard);
		DEFINE_CARD(CBlademaneBakuCard);
		DEFINE_CARD(CBlazingShoalCard);
		DEFINE_CARD(CBlessingOfLeechesCard);
		DEFINE_CARD(CBodyOfJukaiCard);
		DEFINE_CARD(CBudokaPupilCard);
		DEFINE_CARD(CCallForBloodCard);
		DEFINE_CARD(CCallowJushiCard);
		DEFINE_CARD(CChildOfThornsCard);
		DEFINE_CARD(CChiseiHeartOfOceansCard);
		DEFINE_CARD(CClashOfRealitiesCard);
		DEFINE_CARD(CCrackTheEarthCard);
		DEFINE_CARD(CCrawlingFilthCard);
		DEFINE_CARD(CCunningBanditCard);
		DEFINE_CARD(CDayOfDestinyCard);
		DEFINE_CARD(CDisruptingShoalCard);
		DEFINE_CARD(CEnshrinedMemoriesCard);
		DEFINE_CARD(CFaithfulSquireCard);
		DEFINE_CARD(CFinalJudgmentCard);
		DEFINE_CARD(CFirstVolleyCard);
		DEFINE_CARD(CFlamesOfTheBloodHandCard);
		DEFINE_CARD(CFloodbringerCard);
		DEFINE_CARD(CForkedBranchGaramiCard);
		DEFINE_CARD(CFrostOgreCard);
		DEFINE_CARD(CFrostlingCard);
		DEFINE_CARD(CGenjuOfTheCedarsCard);
		DEFINE_CARD(CGenjuOfTheFallsCard);
		DEFINE_CARD(CGenjuOfTheFensCard);
		DEFINE_CARD(CGenjuOfTheFieldsCard);
		DEFINE_CARD(CGenjuOfTheRealmCard);
		DEFINE_CARD(CGenjuOfTheSpiresCard);
		DEFINE_CARD(CGnarledMassCard);
		DEFINE_CARD(CGoblinCohortCard);
		DEFINE_CARD(CGodsEyeGateToTheReikaiCard);
		DEFINE_CARD(CHarbingerOfSpringCard);
		DEFINE_CARD(CHeartlessHidetsuguCard);
		DEFINE_CARD(CHerosDemiseCard);
		DEFINE_CARD(CHigureTheStillWindCard);
		DEFINE_CARD(CHiredMuscleCard);
		DEFINE_CARD(CHokoriDustDrinkerCard);
		DEFINE_CARD(CIndebtedSamuraiCard);
		DEFINE_CARD(CInkEyesServantOfOniCard);
		DEFINE_CARD(CInTheWebOfWarCard);
		DEFINE_CARD(CIreOfKaminariCard);
		DEFINE_CARD(CIsaoEnlightenedBushiCard);
		DEFINE_CARD(CIshiIshiAkkiCrackshotCard);
		DEFINE_CARD(CIwamoriOfTheOpenFistCard);
		DEFINE_CARD(CKaijinOfTheVanishingTouchCard);
		DEFINE_CARD(CKamiOfFalseHopeCard);
		DEFINE_CARD(CKamiOfTatteredShojiCard);
		DEFINE_CARD(CKamiOfTheHonoredDeadCard);
		DEFINE_CARD(CKiraGreatGlassSpinnerCard);
		DEFINE_CARD(CKyokiSanitysEclipseCard);
		DEFINE_CARD(CLifegiftCard);
		DEFINE_CARD(CLifespinnerCard);
		DEFINE_CARD(CLoamDwellerCard);
		DEFINE_CARD(CMannichiTheFeveredDreamCard);
		DEFINE_CARD(CMarkOfTheOniCard);
		DEFINE_CARD(CMatsuTribeSniperCard);
		DEFINE_CARD(CMinamoSightbenderCard);
		DEFINE_CARD(CMirrorGalleryCard);
		DEFINE_CARD(CMistbladeShinobiCard);
		DEFINE_CARD(CMoonlitStriderCard);
		DEFINE_CARD(CNezumiShadowWatcherCard);
		DEFINE_CARD(CNinjaoftheDeepHoursCard);
		DEFINE_CARD(COgreRecluseCard);
		DEFINE_CARD(COkibaGangShinobiCard);
		DEFINE_CARD(COrbOfDreamsCard);
		DEFINE_CARD(COyobiWhoSplitTheHeavensCard);
		DEFINE_CARD(CPetalmaneBakuCard);
		DEFINE_CARD(CPsychicSpearCard);
		DEFINE_CARD(CPusKamiCard);
		DEFINE_CARD(CReduceToDreamsCard);
		DEFINE_CARD(CRibbonsOfTheReikaiCard);
		DEFINE_CARD(CRoninCliffriderCard);
		DEFINE_CARD(CRoninWarclubCard);
		DEFINE_CARD(CScaledHulkCard);
		DEFINE_CARD(CScourgeOfNumaiCard);
		DEFINE_CARD(CShinkaGatekeeperCard);
		DEFINE_CARD(CShireiShizosCaretakerCard);
		DEFINE_CARD(CShukoCard);
		DEFINE_CARD(CSickeningShoalCard);
		DEFINE_CARD(CSilverstormSamuraiCard);
		DEFINE_CARD(CSkullmaneBakuCard);
		DEFINE_CARD(CSkullsnatcherCard);
		DEFINE_CARD(CSoratamiMindsweeperCard);
		DEFINE_CARD(CSosukesSummonsCard);
		DEFINE_CARD(CSplitTailMikoCard);
		DEFINE_CARD(CStirTheGraveCard);
		DEFINE_CARD(CStreamOfConsciousnessCard);
		DEFINE_CARD(CSwayOfTheStarsCard);
		DEFINE_CARD(CTakenosCavalryCard);
		DEFINE_CARD(CTakenumaBleederCard);
		DEFINE_CARD(CTallowispCard);
		DEFINE_CARD(CTeardropKamiCard);
		DEFINE_CARD(CTendoIceBridgeCard);
		DEFINE_CARD(CTerashisGraspCard);
		DEFINE_CARD(CTerashisVerdictCard);
		DEFINE_CARD(CThatWhichWasTakenCard);
		DEFINE_CARD(CThreadsofDisloyaltyCard);
		DEFINE_CARD(CThreeTragediesCard);
		DEFINE_CARD(CThroatSlitterCard);
		DEFINE_CARD(CToilsOfNightAndDayCard);
		DEFINE_CARD(CTraprootKamiCard);
		DEFINE_CARD(CTwistAllegianceCard);
		DEFINE_CARD(CUmezawasJitteCard);
		DEFINE_CARD(CUncheckedGrowthCard);
		DEFINE_CARD(CUprootCard);
		DEFINE_CARD(CWalkerOfSecretWaysCard);
		DEFINE_CARD(CWardOfPietyCard);
		DEFINE_CARD(CYomijiWhoBarsTheWayCard);
		DEFINE_CARD(CYukoraThePrisonerCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CHerosDemiseCard::CHerosDemiseCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Hero's Demise"), CardType::Instant, nID,
		_T("1") BLACK_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::_LegendaryCreature, true),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CAkkiBlizzardHerderCard::CAkkiBlizzardHerderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akki Blizzard-Herder"), CardType::Creature, CREATURE_TYPE2(Goblin, Shaman), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredSubjectAbility < CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAkkiRaiderCard::CAkkiRaiderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Akki Raider"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+0));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAshenMonstrosityCard::CAshenMonstrosityCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Ashen Monstrosity"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(4))
{
	GetCreatureKeyword()->AddMustAttack(FALSE);
}

//____________________________________________________________________________
//
CBileUrchinCard::CBileUrchinCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Bile Urchin"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
		_T(""),
			FALSE_CARD_COMPARER, TRUE,
			Life(-1), PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::NotDealingDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBodyOfJukaiCard::CBodyOfJukaiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Body of Jukai"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("7") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(8), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		//Soulshift 8
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 8
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(9)); //=Soulshift 8

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CChildOfThornsCard::CChildOfThornsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Child of Thorns"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+1), Life(+1),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CCrawlingFilthCard::CCrawlingFilthCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Crawling Filth"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") BLACK_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddFear(FALSE);
	//Soulshift 5
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 5
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(6)); //=Soulshift 5

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CForkedBranchGaramiCard::CForkedBranchGaramiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Forked-Branch Garami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(4), Life(4))
{
	{
		//Soulshift 4-number one
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 4-number two
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFrostOgreCard::CFrostOgreCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frost Ogre"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(5), Life(3))
{
}

//____________________________________________________________________________
//
CFrostlingCard::CFrostlingCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Frostling"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this, 
			_T(""),
			new AnyCreatureComparer, FALSE,
			Life(-1), PreventableType::Preventable));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGnarledMassCard::CGnarledMassCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Gnarled Mass"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CHokoriDustDrinkerCard::CHokoriDustDrinkerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hokori, Dust Drinker"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
			::CreateObject<CCardKeywordEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false)));

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::NoUntapInUntapPhase);

		AddAbility(cpAbility.GetPointer());
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
CIndebtedSamuraiCard::CIndebtedSamuraiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Indebted Samurai"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(3))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Samurai), false));

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIsaoEnlightenedBushiCard::CIsaoEnlightenedBushiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Isao, Enlightened Bushi"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(1))
{
	GetCardKeyword()->AddCantBeCountered(FALSE);

	{
		//Bushido 2
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2)); //=Bushido 2
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2)); //=Bushido 2

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetRegenerationSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetRegenerationSpell>>(this,
				_T("2"),
				new CreatureTypeComparer(CREATURE_TYPE(Samurai), false)));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIwamoriOfTheOpenFistCard::CIwamoriOfTheOpenFistCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Iwamori of the Open Fist"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Monk), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
										CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_LegendaryCreature, true));

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CKaijinOfTheVanishingTouchCard::CKaijinOfTheVanishingTouchCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kaijin of the Vanishing Touch"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT, Power(0), Life(3))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKaijinOfTheVanishingTouchCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKaijinOfTheVanishingTouchCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKaijinOfTheVanishingTouchCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCreatureCard* pCreature, BOOL bBlocked, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.nValue1 = (DWORD)pCreature2;

	return (IsBlocking() == TRUE);
}

bool CKaijinOfTheVanishingTouchCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects;
	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInplay())
		pSubjects.AddCard(pSubject, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End of Combat Bounce Effect"), 61040, &pSubjects);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CKamiOfFalseHopeCard::CKamiOfFalseHopeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of False Hope"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CPlayerEffectSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CPlayerEffectSpell>>(this,
			_T(""),
			PlayerEffectType::PreventAllCombatDamage, TRUE));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfTheHonoredDeadCard::CKamiOfTheHonoredDeadCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kami of the Honored Dead"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(5))
{
	{
		//Soulshift 6
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 6
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(7)); //=Soulshift 6

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
									 CWhenDamageDealt::CreatureEventCallback, 
									 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKamiOfTheHonoredDeadCard::SetTriggerContext));

		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKamiOfTheHonoredDeadCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CLifespinnerCard::CLifespinnerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Lifespinner"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))

	, m_CardFilter(_T("a Spirit"), _T("Spirits"), new CreatureTypeComparer(CREATURE_TYPE(Spirit), false))
{
	m_CardFilter2.SetFilterName(_T("a legendary Spirit permanent"), _T("legendary Spirit permanents"));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::Legendary, false));
	m_CardFilter2.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
	m_CardFilter2.AddComparer(new CardTypeComparer(CardType::_Permanent, false));

	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>(this,
			_T(""),
			&m_CardFilter2,
			ZoneId::Battlefield, FALSE, FALSE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

	cpAbility->AddTapCost();
	cpAbility->GetCost().AddSacrificeCardCost(3, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________________
//
CMoonlitStriderCard::CMoonlitStriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Moonlit Strider"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(4))
{
	{
		//Soulshift 3
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 3
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(4)); //=Soulshift 3

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
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

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CNezumiShadowWatcherCard::CNezumiShadowWatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nezumi Shadow-Watcher"), CardType::Creature, CREATURE_TYPE2(Rat, Warrior), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T(""),
			new CreatureTypeComparer(CREATURE_TYPE(Ninja), false),
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COgreRecluseCard::COgreRecluseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ogre Recluse"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("3") RED_MANA_TEXT, Power(5), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredTapCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapSingleCard);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CPusKamiCard::CPusKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Pus Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(3))
{
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Soulshift 6
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 6
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(7)); //=Soulshift 6

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CRoninCliffriderCard::CRoninCliffriderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ronin Cliffrider"), CardType::Creature, CREATURE_TYPE2(Human, Samurai), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
							CWhenSelfAttackedBlocked::AttackEventCallback,
							&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyAllPlayersCreatures);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardControllerComparer(this));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		cpAbility->AddAbilityTag(AbilityTag::DamageSource);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CShinkaGatekeeperCard::CShinkaGatekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shinka Gatekeeper"), CardType::Creature, CREATURE_TYPE2(Ogre, Warrior), nID,
		_T("2") RED_MANA_TEXT, Power(3), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealt,
								 CWhenDamageDealt::CreatureEventCallback, 
								 &CWhenDamageDealt::SetCreatureEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShinkaGatekeeperCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

bool CShinkaGatekeeperCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										CCard* pCard, CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CSilverstormSamuraiCard::CSilverstormSamuraiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Silverstorm Samurai"), CardType::Creature, CREATURE_TYPE2(Fox, Samurai), nID,
		_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSplitTailMikoCard::CSplitTailMikoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Split-Tail Miko"), CardType::Creature, CREATURE_TYPE2(Fox, Cleric), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			WHITE_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			Life(2), SourceColor::Null));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CTakenosCavalryCard::CTakenosCavalryCard(CGame* pGame, UINT nID)
	: CTargetChgLifeTCreatureCard(pGame, _T("Takeno's Cavalry"), CardType::Creature, CREATURE_TYPE3(Human, Samurai, Archer), nID,
		_T("3") WHITE_MANA_TEXT, Power(1), Life(1),
		_T(""),
		new AttackingBlockingCreatureComparer,
		FALSE,
		Life(-1),
		PreventableType::Preventable)
{
	m_pTargetChgLifeAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

	{
		//Bushido 1
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::BlockEventCallback2, 
								&CWhenSelfAttackedBlocked::SetBlockingOrBlockedEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+1)); //=Bushido 1
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+1)); //=Bushido 1

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTeardropKamiCard::CTeardropKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Teardrop Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T(""),
			TRUE,	// tap
			TRUE,	// untap
			new AnyCreatureComparer));
	ATLASSERT(cpAbility);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTraprootKamiCard::CTraprootKamiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Traproot Kami"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddDefender(FALSE);
	GetCreatureKeyword()->AddReach(FALSE);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Battlefield,
				new CardTypeComparer(CardType::Forest, false)));

		cpAbility->SetChangeToughnessOnly();

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CYomijiWhoBarsTheWayCard::CYomijiWhoBarsTheWayCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yomiji, Who Bars the Way"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Legendary, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CYomijiWhoBarsTheWayCard::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CYomijiWhoBarsTheWayCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CYukoraThePrisonerCard::CYukoraThePrisonerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Yukora, the Prisoner"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Ogre), false));

	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGodsEyeGateToTheReikaiCard::CGodsEyeGateToTheReikaiCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Gods' Eye, Gate to the Reikai"), nID, CardType::NonbasicLand | CardType::Legendary)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Spirit A"), 2800, 1);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrbOfDreamsCard::COrbOfDreamsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Orb of Dreams"), CardType::Artifact, nID,
		_T("3"), AbilityType::Artifact)
{
	counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
		::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::InPlayTapped,
			(int)CCardFilter::GetFilter(_T("cards")),	
			TRUE));

	cpEnchantment->SetMainSpell(FALSE);
	AddSpell(cpEnchantment.GetPointer());
}

//____________________________________________________________________________
//
CShukoCard::CShukoCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Shuko"), CardType::Artifact | CardType::Equipment, nID, 
		_T("1"), AbilityType::Artifact)
{
	counted_ptr<CEquipAbility> cpAbility(
		::CreateObject<CEquipAbility>(this, _T("0")));

	cpAbility->AddCreatureModifier(new CPowerModifier(Power(+1), FALSE));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBlessingOfLeechesCard::CBlessingOfLeechesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Blessing of Leeches"), CardType::EnchantCreature, nID)
{
	GetCardKeyword()->AddFlash(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CCreatureAbilityEnchant> cpSpell(
			::CreateObject<CCreatureAbilityEnchant>(this,
				_T("2") BLACK_MANA_TEXT,
				CAbilityEnchant::CreateAbilityCallback(this,
					&CBlessingOfLeechesCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
}

counted_ptr<CAbility> CBlessingOfLeechesCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CRegenerationAbility> cpEnchantAbility(
		::CreateObject<CRegenerationAbility>(pEnchantCard, _T("0"), (CCreatureCard*)pEnchantedCard));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CDayOfDestinyCard::CDayOfDestinyCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Day of Destiny"), CardType::GlobalEnchantment | CardType::Legendary, nID,
		_T("3") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::_LegendaryCreature, true),
			Power(+2), Life(+2)));

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CInTheWebOfWarCard::CInTheWebOfWarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("In the Web of War"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInTheWebOfWarCard::SetTriggerContext));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

bool CInTheWebOfWarCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCreature = reinterpret_cast<CCreatureCard*>(pCard);
	return true;
}

//____________________________________________________________________________
//
CLifegiftCard::CLifegiftCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Lifegift"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTerashisVerdictCard::CTerashisVerdictCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Terashi's Verdict"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetMoveCardSpell> cpSpell(
		::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			new AttackingCreatureComparer,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreaturePowerComparer<std::less<int>>(4));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUncheckedGrowthCard::CUncheckedGrowthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Unchecked Growth"), CardType::Instant | CardType::Arcane, nID)
{
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new NegateCardComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false))));

		cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT,
				Power(+4), Life(+4),
				CreatureKeyword::Trample, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFinalJudgmentCard::CFinalJudgmentCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Final Judgment"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("4") WHITE_MANA_TEXT WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Exile, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CReduceToDreamsCard::CReduceToDreamsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Reduce to Dreams"), CardType::Sorcery, nID)
{
	counted_ptr<CGlobalMoveCardSpell> cpSpell(
		::CreateObject<CGlobalMoveCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			ZoneId::Hand, TRUE, MoveType::Others));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CRibbonsOfTheReikaiCard::CRibbonsOfTheReikaiCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ribbons of the Reikai"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Sorcery,
			_T("4") BLUE_MANA_TEXT,
			ZoneId::Battlefield, TRUE, FALSE));

	cpSpell->GetSurveyCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CThreeTragediesCard::CThreeTragediesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Three Tragedies"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
			3, MoveType::Discard, ZoneId::Graveyard, TRUE,
			TRUE,
			CCardFilter::GetFilter(_T("cards"))));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CUprootCard::CUprootCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Uproot"), CardType::Sorcery | CardType::Arcane, nID,
		_T("3") GREEN_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::_Land, false),
		ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)
{
}

//____________________________________________________________________________
//
CUmezawasJitteCard::CUmezawasJitteCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Umezawa's Jitte"), CardType::_LegendaryArtifact | CardType::Equipment, nID, 
		_T("2"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("2"),
				new AnyCreatureComparer));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CGlobalChgPwrTghSpell> cpAbility( //this can be activated several times and work all of their
			::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Activated,
				_T(""),
				Power(+2), Life(+2),
				new EquippedByComparer(this)));

		cpAbility->SetToActivatedAbility();

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		cpAbility->SetAbilityText(_T("Equipped creature gets +2/+2 until end of turn. Activates"));

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenDamageDealt, 
								CWhenDamageDealt::DamageEventCallback, 
								&CWhenDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetFromCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetFromCardFilterHelper().GetCustomFilter().AddComparer(new EquippedByComparer(this));
		cpAbility->GetTrigger().SetCombatDamageOnly(TRUE);

		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(CHARGE_COUNTER, +2));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(-1), Life(-1),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CChgLifeSpell>>(this,
				_T(""),	Life(+2), PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTendoIceBridgeCard::CTendoIceBridgeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Tendo Ice Bridge"), nID)
{
	GetCounterContainer()->ScheduleCounter(CHARGE_COUNTER, 1, false, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLUE_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, BLACK_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, RED_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpNonbasicLandManaAbility->AddTapCost();
		cpNonbasicLandManaAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(CHARGE_COUNTER), -1);

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
}

//_______________________________________________________________________________________
//
CCrackTheEarthCard::CCrackTheEarthCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crack the Earth"), CardType::Sorcery | CardType::Arcane, nID)
{
	counted_ptr<CGlobalChgLifeSpell3> cpSpell(
		::CreateObject<CGlobalChgLifeSpell3>(this, AbilityType::Sorcery,
			RED_MANA_TEXT,
			Life(+0),
			FALSE_CARD_COMPARER, PreventableType::NotPreventable,
			1,
			new TrueCardComparer));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
/*CNinjaoftheDeepHoursCard::CNinjaoftheDeepHoursCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ninja of the Deep Hours"), CardType::Creature, CREATURE_TYPE2(Human, Ninja), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CNinjaoftheDeepHoursCard::OnResolutionCompleted))
	, m_CardFilter(new AttackingCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new BlockedCreatureComparer);
	m_CardFilter.GetThisCardsControllerOnly();

	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			0));

		cpAbility->SetAbilityType(AbilityType::Instant);
		cpAbility->SetHandOnly();
		cpAbility->SetAbilityName(_T("Ninjutsu"));
		cpAbility->SetAbilityText(_T("Return an unblocked attacker you control to hand: Put this card onto the battlefield from your hand tapped and attacking. Activates"));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CNinjaoftheDeepHoursCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNinjaoftheDeepHoursCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* battle = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(battle->GetCardContainer())>0;
}

void CNinjaoftheDeepHoursCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* battle = GetController()->GetZoneById(ZoneId::Battlefield);
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController());

	if (m_CardFilter.CountIncluded(battle->GetCardContainer())>0)

	{
		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		&m_CardFilter, // what cards
		ZoneId::Hand, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
				
		CMoveCardModifier pmodifier3 = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others);
		pmodifier3.SetTapped(TRUE);

		pmodifier2.ApplyTo(GetController());
		pmodifier3.ApplyTo(this);
		this->Attack(opponent);

	}
}

//____________________________________________________________________________
//*/
CThatWhichWasTakenCard::CThatWhichWasTakenCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("That Which Was Taken"), CardType::_LegendaryArtifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility( 
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("4"),
				new TrueCardComparer, FALSE));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));

		cpAbility->AddTapCost();

		cpAbility->GetTargetModifier().CCardModifiers::push_back(new CCardCounterModifier(DIVINITY_COUNTER, +1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new TrueCardComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardCounterComparer<std::greater<int>>(DIVINITY_COUNTER, 0));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Indestructible);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIshiIshiAkkiCrackshotCard::CIshiIshiAkkiCrackshotCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ishi-Ishi, Akki Crackshot"), CardType::_LegendaryCreature, CREATURE_TYPE2(Goblin, Warrior), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	
	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKamiOfTatteredShojiCard::CKamiOfTatteredShojiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kami of Tattered Shoji"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") WHITE_MANA_TEXT, Power(2), Life(5))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Flying);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKyokiSanitysEclipseCard::CKyokiSanitysEclipseCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Kyoki, Sanity's Eclipse"), CardType::_LegendaryCreature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(6), Life(4))
{
	typedef
		TTriggeredTargetAbility< CTriggeredDiscardCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	
	cpAbility->SetToZone(ZoneId::Exile);
	cpAbility->SetDiscardMoveType(MoveType::Others);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLoamDwellerCard::CLoamDwellerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Loam Dweller"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
	cpAbility->GetMoveCardModifier().SetTapped(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
COyobiWhoSplitTheHeavensCard::COyobiWhoSplitTheHeavensCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Oyobi, Who Split the Heavens"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("6") WHITE_MANA_TEXT, Power(3), Life(6))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit E"), 2855, 1);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CScaledHulkCard::CScaledHulkCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scaled Hulk"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("5") GREEN_MANA_TEXT, Power(4), Life(4))
{
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
	cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTallowispCard::CTallowispCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Tallowisp"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(3))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
	
	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::EnchantCreature, false));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBakuAltarCard::CBakuAltarCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Baku Altar"), CardType::Artifact, nID,
		_T("2"), AbilityType::Artifact)
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(KI_COUNTER, +1));

		cpAbility->AddAbilityTag(AbilityTag::CardChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("2"),
				_T("Spirit A"), 2800,
				1));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), -1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CPsychicSpearCard::CPsychicSpearCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Psychic Spear"), CardType::Sorcery, nID)

	, m_CardFilter(new CardSpiritArcaneComparer)
{
	counted_ptr<CTargetPlayerDiscardCardSpell> cpSpell(
		::CreateObject<CTargetPlayerDiscardCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			1, MoveType::Discard, ZoneId::Graveyard, TRUE,
			FALSE,	// TRUE -> Targeted player chooses, FALSE -> Caster chooses
			&m_CardFilter));	//only discards nonbasic lands
	
	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CFloodbringerCard::CFloodbringerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Floodbringer"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
			_T("2"),
			TRUE, FALSE,
			new CardTypeComparer(CardType::_Land, false)));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSoratamiMindsweeperCard::CSoratamiMindsweeperCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Soratami Mindsweeper"), CardType::Creature, CREATURE_TYPE2(Moonfolk, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(1), Life(4))
{
	counted_ptr<CActivatedAbility<CTargetRevealLibraryCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetRevealLibraryCardSpell>>(this,
			_T("2"), 2));
	ATLASSERT(cpAbility);

	cpAbility->SetRevealCardsToOthers(TRUE);
	//cpAbility->SetRevealedCardsTo(new TrueCardComparer, ZoneId::Graveyard, MoveType::Others);
	cpAbility->SetReorder(TRUE, ZoneId::Graveyard);

	cpAbility->GetCost().AddReturnFromPlayCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThreadsofDisloyaltyCard::CThreadsofDisloyaltyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Threads of Disloyalty"), CardType::EnchantCreature, nID)
{
	counted_ptr<CControlEnchant> cpSpell(
		::CreateObject<CControlEnchant>(this,
			_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT,
			 new ConvertedManaCostComparer<std::less<int>>(3)));

	cpSpell->GetTargeting()->GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CHarbingerOfSpringCard::CHarbingerOfSpringCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harbinger of Spring"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("4") GREEN_MANA_TEXT, Power(2), Life(1))
{
	m_CardFilter.AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
	m_CardFilter.AddComparer(new AnyCreatureComparer);

	GetCardKeyword()->AddSpecialProtection(FALSE, &m_CardFilter);

	{
		//Soulshift 4
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false)); //=Soulshift 4
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new ConvertedManaCostComparer<std::less<int>>(5)); //=Soulshift 4

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIreOfKaminariCard::CIreOfKaminariCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ire of Kaminari"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgLifeBySurveySpell> cpSpell(
		::CreateObject<CTargetChgLifeBySurveySpell>(this, AbilityType::Instant,
			_T("3") RED_MANA_TEXT,
			new AnyCreatureComparer, TRUE,
			ZoneId::Graveyard, TRUE,
			new CardTypeComparer(CardType::Arcane, false), PreventableType::Preventable));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMarkOfTheOniCard::CMarkOfTheOniCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mark of the Oni"), CardType::EnchantCreature, nID)
{
	{
		counted_ptr<CControlEnchant> cpSpell(
			::CreateObject<CControlEnchant>(this,
				_T("2") BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Creature, false)));

		AddSpell(cpSpell.GetPointer());
	}
	{
		m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));
		
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMarkOfTheOniCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMarkOfTheOniCard::BeforeResolution));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMarkOfTheOniCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, 
										CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CMarkOfTheOniCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CTerashisGraspCard::CTerashisGraspCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Terashi's Grasp"), CardType::Sorcery | CardType::Arcane, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Sorcery,
		new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
		ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTerashisGraspCard::BeforeResolution));
}

bool CTerashisGraspCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* target=pAction->GetAssociatedCard();
	int converted = target->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	CLifeModifier pModifier = CLifeModifier(Life(+converted), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CRoninWarclubCard::CRoninWarclubCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Ronin Warclub"), CardType::Artifact | CardType::Equipment, nID, 
		_T("3"), AbilityType::Artifact)
{
	{
		counted_ptr<CEquipAbility> cpAbility(
			::CreateObject<CEquipAbility>(this, _T("5")));

		cpAbility->AddCreatureModifier(new CPowerModifier(Power(+2), FALSE));

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

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CRoninWarclubCard::BeforeResolution));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRoninWarclubCard::SetTriggerContext));
		cpAbility->GetLifeModifier().SetLifeDelta(Life(0));
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CRoninWarclubCard::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pCard);
	if (!pCreature) return false;

	triggerContext.m_pCreature = pCreature;
	return true;
}

bool CRoninWarclubCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
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
CGoblinCohortCard::CGoblinCohortCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goblin Cohort"), CardType::Creature, CREATURE_TYPE2(Goblin, Warrior), nID,
		RED_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPlayableIfTrait> cpTrait(
		::CreateObject<CPlayableIfTrait>(
			m_pAttackAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CGoblinCohortCard::CanAttack)));

	m_pAttackAbility->Add(cpTrait.GetPointer());
}

BOOL CGoblinCohortCard::CanAttack(BOOL bIncludeTricks)
{
	return (GetController()->GetCertainTypeCastedCount(CardType::Creature)>0);
}

//____________________________________________________________________________
//
CSosukesSummonsCard::CSosukesSummonsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sosuke's Summons"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") GREEN_MANA_TEXT,
				_T("Snake F"), 2877, 2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Snake), false));
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSosukesSummonsCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSosukesSummonsCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CHeartlessHidetsuguCard::CHeartlessHidetsuguCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Heartless Hidetsugu"), CardType::_LegendaryCreature, CREATURE_TYPE2(Ogre, Shaman), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(4), Life(3))
{
	counted_ptr<CActivatedAbility<CGlobalChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalChgLifeSpell>>(this,
			_T(""),
			Life(SpecialNumber::DivideBy2RoundDown),
			FALSE_CARD_COMPARER, 
			TRUE, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMannichiTheFeveredDreamCard::CMannichiTheFeveredDreamCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mannichi, the Fevered Dream"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") RED_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this, AbilityType::Activated,
			_T("1") RED_MANA_TEXT,
			new AnyCreatureComparer,
			Power(+0), Life(+0), CreatureKeyword::SwitchedPT));

	cpAbility->SetToActivatedAbility();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CMirrorGalleryCard::CMirrorGalleryCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirror Gallery"), CardType::Artifact, nID,
		_T("5"), AbilityType::Artifact)
{
	{
		counted_ptr<CPlayerEffectEnchantment> cpEnchantment(
			::CreateObject<CPlayerEffectEnchantment>(this,
			PlayerEffectType::NoLegendRule));

		cpEnchantment->SetMainSpell(FALSE);
		AddSpell(cpEnchantment.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMirrorGalleryCard::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMirrorGalleryCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	m_pGame->AddStatebasedHint(CGame::StatebasedHint::LegendaryCards);
	return true;
}

//____________________________________________________________________________
//
CScourgeOfNumaiCard::CScourgeOfNumaiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Scourge of Numai"), CardType::Creature, CREATURE_TYPE2(Demon, Spirit), nID,
		_T("3") BLACK_MANA_TEXT, Power(4), Life(4))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ogre), false));

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CScourgeOfNumaiCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScourgeOfNumaiCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CScourgeOfNumaiCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CNode* pToNode) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CScourgeOfNumaiCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CTakenumaBleederCard::CTakenumaBleederCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Takenuma Bleeder"), CardType::Creature, CREATURE_TYPE2(Ogre, Shaman), nID,
		_T("2") BLACK_MANA_TEXT, Power(3), Life(3))
{
	m_CardFilter.AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Demon), false));

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTakenumaBleederCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTakenumaBleederCard::SetTriggerContext));
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CTakenumaBleederCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
													CCreatureCard* pCreatureCard) const
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

bool CTakenumaBleederCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);

	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
		return false;

	return true;
}

//____________________________________________________________________________
//
CWardOfPietyCard::CWardOfPietyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ward of Piety"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") WHITE_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CWardOfPietyCard::CreateEnchantAbility),
				CAbilityEnchant::AdditionType::ToEnchantCard));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CWardOfPietyCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>> cpEnchantAbility(
		::CreateObject<CActivatedAbility<CTargetCreatureDamageRedirectionSpell2>>(pEnchantedCard,
			_T("1") WHITE_MANA_TEXT,
			new AnyCreatureComparer,
			TRUE,
			SourceColor::Null, TRUE));

	cpEnchantAbility->SetRedirectValue(Life(1));

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

//____________________________________________________________________________
//
CCallForBloodCard::CCallForBloodCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Call for Blood"), CardType::Instant | CardType::Arcane, nID)
{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T("4") BLACK_MANA_TEXT,
			Power(+0), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CCallForBloodCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CCallForBloodCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pCard = pAction->GetSacrificeCards()->GetAt(0);
	if (!pCard->GetCardType().IsCreature())
	return false;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	int nPower = GET_INTEGER(pCreature->GetLastKnownPower());

	CPowerModifier pModifier1 = CPowerModifier(Power(-nPower), TRUE);
	CLifeModifier pModifier2 = CLifeModifier(Life(-nPower), this, PreventableType::NotPreventable, DamageType::NotDealingDamage, TRUE);

	//apply to target
	CCard* pCard1 = pAction->GetAssociatedCard();
	CCreatureCard* pCreature1 = (CCreatureCard*)pCard1;

	pModifier1.ApplyTo(pCreature1);
	pModifier2.ApplyTo(pCreature1);

	return true;
}

//____________________________________________________________________________
//
CFirstVolleyCard::CFirstVolleyCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("First Volley"), CardType::Instant | CardType::Arcane, nID, AbilityType::Instant,
		_T("1") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-1),		// Life delta
		PreventableType::Preventable)	// Preventable?

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			   &CFirstVolleyCard::OnResolutionCompleted))
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
}

void CFirstVolleyCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCard* target=pAbilityAction->GetAssociatedCard();

	CLifeModifier pModifier=CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

	if (bResult) pModifier.ApplyTo(target->GetController()); // Last known controller should be used here
}

//____________________________________________________________________________
//
CStreamOfConsciousnessCard::CStreamOfConsciousnessCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stream of Consciousness"), CardType::Instant | CardType::Arcane, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CStreamOfConsciousnessCard::OnResolutionCompleted))

{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
			_T("1") BLUE_MANA_TEXT));

		ATLASSERT(cpAbility);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CStreamOfConsciousnessCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CPlayer* target = pAbilityAction->GetAssociatedPlayer();
	CZone* pLibrary = target->GetZoneById(ZoneId::Library);
	CZone* pGraveyard = target->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter_temp;

	m_CardFilter_temp.SetComparer(new NegateCardComparer(new SpecificCardComparer(this)));	
	if (m_CardFilter_temp.CountIncluded(pGraveyard->GetCardContainer())>0)

	{
		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier2.AddSelection(MinimumValue(1), MaximumValue(4), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			&m_CardFilter_temp, // what cards
			ZoneId::Library, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pmodifier2.ApplyTo(target);

		pLibrary->Shuffle(); 
	}
}

//____________________________________________________________________________
//
CToilsOfNightAndDayCard::CToilsOfNightAndDayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Toils of Night and Day"), CardType::Instant | CardType::Arcane, nID)
{
		counted_ptr<CTargetTapUntapCardSpell> cpSpell(
			::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT,
				TRUE, TRUE,
				new TrueCardComparer));

		cpSpell->FlagTargets(TRUE, TRUE);
		cpSpell->SetToZoneIfSuccess(ZoneId::_Tokens, TRUE);

		AddSpell(cpSpell.GetPointer());

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

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);
		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardAbilityFlagComparer(cpSpell.GetPointer()));
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSwayOfTheStarsCard::CSwayOfTheStarsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Sway of the Stars"), CardType::Sorcery, nID)

	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CSwayOfTheStarsCard::OnResolutionCompleted))
{
	counted_ptr<CGlobalDrawCardSpell> cpSpell(
		::CreateObject<CGlobalDrawCardSpell>(this, AbilityType::Sorcery,
			_T("8") BLUE_MANA_TEXT BLUE_MANA_TEXT, 7, 7));

	cpSpell->SetMergeGraveyard(TRUE);
	cpSpell->SetMergeHand(TRUE);

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSwayOfTheStarsCard::BeforeResolution));

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

bool CSwayOfTheStarsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneCardModifier* pModifier = new CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("cards")),
		std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Library, TRUE, MoveType::Others)));

	pModifier->ApplyTo(GetController());
	pModifier->ApplyTo(m_pGame->GetNextPlayer(GetController()));

	return true;
}

void CSwayOfTheStarsCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CLifeModifier pModifier = CLifeModifier(Life(7), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.SetReplacement(TRUE);

	pModifier.ApplyTo(GetController());
	pModifier.ApplyTo(m_pGame->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CClashOfRealitiesCard::CClashOfRealitiesCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Clash of Realities"), CardType::GlobalEnchantment, nID,
		_T("3") RED_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//"All Spirits"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Spirit), false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CClashOfRealitiesCard::CreateAbility1)));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Stack | ZoneId::Exile | ZoneId::_Tokens);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//"Non-Spirit creatures"
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CClashOfRealitiesCard::CreateAbility2)));

		cpAbility->SetAffectCardsInTheseZones(ZoneId::Graveyard | ZoneId::Hand | ZoneId::Library | ZoneId::Stack | ZoneId::Exile | ZoneId::_Tokens);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CClashOfRealitiesCard::CreateAbility1(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->SetAbilityName(_T("Battlefield ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CClashOfRealitiesCard::CreateAbility2(CCard* pCard)
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-3));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Spirit), false));
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
	cpAbility->GetTargeting().SetIncludePlayers(FALSE);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);
	cpAbility->SetAbilityName(_T("Battlefield ability"));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKiraGreatGlassSpinnerCard::CKiraGreatGlassSpinnerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Kira, Great Glass-Spinner"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2))
{	
	{
		typedef
			TTriggeredAbility< CTriggeredAllCounterSpellAbility, CWhenSubjectTargeted, 
								CWhenSubjectTargeted::CardEventCallback, &CWhenSubjectTargeted::SetCardEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardControllerComparer(this));
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKiraGreatGlassSpinnerCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKiraGreatGlassSpinnerCard::SetTriggerContext(CTriggeredAllCounterSpellAbility::TriggerContextType& triggerContext, 
										CCard* pToCard, CPlayer* byPlayer) 
{
	if (pToCard->GetTargetedNumber() > 0) return false;
	else
	{
	CStack& stack = m_pGame->GetStack();
	if (stack.GetStackSize()>0) triggerContext.m_pStackAction = stack.GetTopAction(); else  triggerContext.m_pStackAction = NULL;
	triggerContext.m_pTargetedCard = pToCard;	
	return TRUE;
	}
}

//____________________________________________________________________________
//
CNinjaoftheDeepHoursCard::CNinjaoftheDeepHoursCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ninja of the Deep Hours"), CardType::Creature, CREATURE_TYPE2(Human, Ninja), nID,
	_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
/*	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
	&CNinjaoftheDeepHoursCard::OnResolutionCompleted))
	, m_CardFilter(new AttackingCreatureComparer)*/
{
	/*m_CardFilter.AddNegateComparer(new BlockedCreatureComparer);
	m_CardFilter.GetThisCardsControllerOnly();

	{
		counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			0));

		cpAbility->SetAbilityType(AbilityType::Instant);
		cpAbility->SetHandOnly();
		cpAbility->SetAbilityName(_T("Ninjutsu"));
		cpAbility->SetAbilityText(_T("Return an unblocked attacker you control to hand: Put this card onto the battlefield from your hand tapped and attacking."));

		counted_ptr<CPlayableIfTrait> cpTrait(::CreateObject<CPlayableIfTrait>(
			m_pUntapAbility, CPlayableIfTrait::PlayableCallback(this, &CNinjaoftheDeepHoursCard::CanPlay)));
		cpAbility->Add(cpTrait.GetPointer());

		cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}*/
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfDamageDealt, 
			CWhenSelfDamageDealt::PlayerEventCallback, 
			&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

/*BOOL CNinjaoftheDeepHoursCard::CanPlay(BOOL bIncludeTricks)
{
	CZone* battle = GetController()->GetZoneById(ZoneId::Battlefield);

	return m_CardFilter.CountIncluded(battle->GetCardContainer())>0;
}
void CNinjaoftheDeepHoursCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* battle = GetController()->GetZoneById(ZoneId::Battlefield);
	CPlayer* opponent = m_pGame->GetNextPlayer(GetController()); 

	if (m_CardFilter.CountIncluded(battle->GetCardContainer())>0) 
	{
		int amount = m_CardFilter.CountIncluded(battle->GetCardContainer());
		USHORT *walker_mas=new USHORT[amount];
		USHORT *atack_mas=new USHORT[amount];

		CCountedCardContainer contain;
		if (m_CardFilter.GetIncluded(*battle, contain))
			for (int i = 0; i < contain.GetSize(); ++i)
			{
				CCard* cont = contain.GetAt(i);
				CCreatureCard* creat = (CCreatureCard*)cont;
				atack_mas [i] = creat->GetInstanceID();
				walker_mas[i] = creat->GetAttackedPlaneswalker()->GetInstanceID();
			}

			CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Battlefield, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pmodifier2.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				&m_CardFilter, // what cards
				ZoneId::_Tokens, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on 
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			CMoveCardModifier pmodifier3 = CMoveCardModifier(ZoneId::Hand, ZoneId::Battlefield, TRUE, MoveType::Others);
			pmodifier3.SetTapped(TRUE);
			CMoveCardModifier pmodifier4 = CMoveCardModifier(ZoneId::_Tokens, ZoneId::Hand, TRUE, MoveType::Others); 

			CCard* ToTokenCard = GetController()->GetZoneById(ZoneId::_Tokens)->GetAt(0);

			USHORT Planes = 0;

			for (int i = 0; i < amount; ++i)
			{
				if (atack_mas[i]=ToTokenCard->GetInstanceID()) Planes=walker_mas[i];
			}
			CZone* op_battle = opponent->GetZoneById(ZoneId::Battlefield);

			CPlaneswalkerCard* walker;

			for (int i = 0; i < op_battle->GetSize(); ++i)
			{
				CCard* pOppCard = op_battle->GetAt(i); 
				if (pOppCard->GetInstanceID()==Planes && pOppCard->GetCardType().IsPlaneswalker()) 
				{
					CPlaneswalkerCard* temp= (CPlaneswalkerCard*)pOppCard;
					walker=temp;
				} 
			}

			pmodifier2.ApplyTo(GetController());
			pmodifier3.ApplyTo(this);
			if (Planes==0) this->Attack(opponent); else this->Attack(walker);
			pmodifier4.ApplyTo(ToTokenCard);

			delete []walker_mas;
			delete []atack_mas;
	}
}*/
//____________________________________________________________________________
//
CHigureTheStillWindCard::CHigureTheStillWindCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Higure, the Still Wind"), CardType::_LegendaryCreature, CREATURE_TYPE2(Human, Ninja), nID,
	_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(3), Life(4))
		, m_CardFilter(_T("an Ninja"), _T("Ninjas"), new CreatureTypeComparer(CREATURE_TYPE(Ninja), false))
{

	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ninja), false));
		cpAbility->SetToZone(ZoneId::Hand);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Target Ninja creature is unblockable this turn.
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("2"),
				Power(+0), Life(+0),
				CreatureKeyword::Unblockable, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(new CreatureTypeComparer(CREATURE_TYPE(Ninja), false));
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CInkEyesServantOfOniCard::CInkEyesServantOfOniCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Ink-Eyes, Servant of Oni"), CardType::_LegendaryCreature, CREATURE_TYPE2(Rat, Ninja), nID,
	_T("4") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(5), Life(4), _T("1") BLACK_MANA_TEXT)
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
				CWhenSelfDamageDealt::PlayerEventCallback,
				&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);

		CGainControlModifier* pModifier1 = new CGainControlModifier(GetGame(), (CCard*)this);

		cpAbility->GetMoveCardModifier().LinkCardModifier(pModifier1);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMistbladeShinobiCard::CMistbladeShinobiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mistblade Shinobi"), CardType::Creature, CREATURE_TYPE2(Human, Ninja), nID,
	_T("2") BLUE_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("") BLUE_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COkibaGangShinobiCard::COkibaGangShinobiCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Okiba-Gang Shinobi"), CardType::Creature, CREATURE_TYPE2(Rat, Ninja), nID,
	_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(3), Life(2))
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("3") BLACK_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetDiscardCount(2);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSkullsnatcherCard::CSkullsnatcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skullsnatcher"), CardType::Creature, CREATURE_TYPE2(Rat, Ninja), nID,
	_T("1") BLACK_MANA_TEXT, Power(2), Life(1))
	
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("") BLACK_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);
		cpAbility->GetTargeting().SetSubjectCount(0, 2);
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CThroatSlitterCard::CThroatSlitterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Throat Slitter"), CardType::Creature, CREATURE_TYPE2(Rat, Ninja), nID,
	_T("4") BLACK_MANA_TEXT, Power(2), Life(2))
	
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("2") BLACK_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(
			new CardTypeComparer(CardType::Black, false));
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
			
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWalkerOfSecretWaysCard::CWalkerOfSecretWaysCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Walker of Secret Ways"), CardType::Creature, CREATURE_TYPE2(Human, Ninja), nID,
	_T("2")BLUE_MANA_TEXT, Power(1), Life(2))
	
{
	{
		counted_ptr<CNinjutsuSelfMoveCardAbility> cpAbility(
			::CreateObject<CNinjutsuSelfMoveCardAbility>(this,
				_T("1") BLUE_MANA_TEXT,
				ZoneId::Battlefield, TRUE, MoveType::Others));				

		AddAbility(cpAbility.GetPointer());
	}
	{
		
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
			_T("1") BLUE_MANA_TEXT,
			new CreatureTypeComparer(CREATURE_TYPE(Ninja), false),
			ZoneId::Battlefield, ZoneId::Hand, TRUE, MoveType::Others));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CWalkerOfSecretWaysCard::CanPlay1)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredTargetAbility< CTriggeredRevealHandAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
		cpAbility->GetTargeting().SetIncludeNonControllerCardsOnly();
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, 
			&CWalkerOfSecretWaysCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CWalkerOfSecretWaysCard::SetTriggerContext(CTriggeredRevealHandAbility::TriggerContextType& triggerContext,
												CPlayer* pPlayer, Damage damage) const
{
	triggerContext.m_pRevealTo = GetController();
	return true;
}
BOOL CWalkerOfSecretWaysCard::CanPlay1(BOOL bIncludeTricks)
{
	return m_pGame->GetActivePlayer() == GetController();
}

//____________________________________________________________________________
//
CFlamesOfTheBloodHandCard::CFlamesOfTheBloodHandCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Flames of the Blood Hand"), CardType::Instant, nID, AbilityType::Instant,
		_T("2") RED_MANA_TEXT,
		FALSE_CARD_COMPARER,
		TRUE,	// Target player?
		Life(-4),		// Life delta
		PreventableType::NotPreventable)	// Preventable?
{
	CScheduledPlayerModifier* pModifier = new CScheduledPlayerModifier(GetGame(),
		new CPlayerEffectModifier(PlayerEffectType::CantGainLife),
		TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::ApplyToNowRemoveLater);

	m_pTargetChgLifeSpell->GetTargetModifier().CPlayerModifiers::Add(pModifier);
}

//____________________________________________________________________________
//
CBudokaPupilCard::CBudokaPupilCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Budoka Pupil"), CardType::Creature, CREATURE_TYPE2(Human, Monk), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2), Power(4), Life(3), _T("Ichiga, Who Topples Oaks"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Monk, FALSE);
	CCreatureTypeModifier* pModifier3 = new CCreatureTypeModifier(SingleCreatureType::Spirit, TRUE);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier(CreatureKeyword::Trample, true, false);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBudokaPupilCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CBudokaPupilCard::SetTriggerContext2));
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T(""),
				Power(+2), Life(+2),
				CreatureKeyword::Null, CreatureKeyword::Null,
				true, PreventableType::NotPreventable));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CBudokaPupilCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard* pCard) const
{
	return !GetOrientation()->IsFlipped();
}

bool CBudokaPupilCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (!GetOrientation()->IsFlipped() && GetCounterContainer()->GetCounter(KI_COUNTER)->GetCount() >= 2);
}

//____________________________________________________________________________
//
CCallowJushiCard::CCallowJushiCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Callow Jushi"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(2), Life(2), Power(3), Life(4), _T("Jaraku the Interloper"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Wizard, FALSE);
	CCreatureTypeModifier* pModifier3 = new CCreatureTypeModifier(SingleCreatureType::Spirit, TRUE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCallowJushiCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCallowJushiCard::SetTriggerContext2));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CCounterSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CCounterSpell>>(this,
				_T(""),
				new TrueCardComparer));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), -1);

		cpAbility->SetCanBeDenied();
		cpAbility->GetDenialCost().SetManaCost(_T("1"));

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CCallowJushiCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return !GetOrientation()->IsFlipped();
}

bool CCallowJushiCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if(!GetOrientation()->IsFlipped() && GetCounterContainer()->GetCounter(KI_COUNTER)->GetCount() >= 2) return true;
	return false;
}

//____________________________________________________________________________
//
CCunningBanditCard::CCunningBanditCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Cunning Bandit"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2), Power(5), Life(2), _T("Azamuki, Treachery Incarnate"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Warrior, FALSE);
	CCreatureTypeModifier* pModifier3 = new CCreatureTypeModifier(SingleCreatureType::Spirit, TRUE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCunningBanditCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCunningBanditCard::SetTriggerContext2));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T(""),
				new AnyCreatureComparer,
				ZoneId::Battlefield, ZoneId::Battlefield, FALSE, MoveType::Others));

		cpAbility->SetReturnToPreviousControllerAtNext(NodeId::CleanupStep1);

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CCunningBanditCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return !GetOrientation()->IsFlipped();
}

bool CCunningBanditCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if(!GetOrientation()->IsFlipped() && GetCounterContainer()->GetCounter(KI_COUNTER)->GetCount() >= 2) return true;
	return false;
}

//____________________________________________________________________________
//
CFaithfulSquireCard::CFaithfulSquireCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Faithful Squire"), CardType::Creature, CREATURE_TYPE2(Human, Soldier), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2), Power(3), Life(4), _T("Kaiso, Memory of Loyalty"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Soldier, FALSE);
	CCreatureTypeModifier* pModifier3 = new CCreatureTypeModifier(SingleCreatureType::Spirit, TRUE);
	CCreatureKeywordModifier* pModifier4 = new CCreatureKeywordModifier(CreatureKeyword::Flying, true, false);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);
	AddCreatureModifier(pModifier4);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFaithfulSquireCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFaithfulSquireCard::SetTriggerContext2));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(PreventionType::PreventAllDamage), SourceColor::Null));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CFaithfulSquireCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return !GetOrientation()->IsFlipped();
}

bool CFaithfulSquireCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if(!GetOrientation()->IsFlipped() && GetCounterContainer()->GetCounter(KI_COUNTER)->GetCount() >= 2) return true;
	return false;
}

//____________________________________________________________________________
//
CHiredMuscleCard::CHiredMuscleCard(CGame* pGame, UINT nID)
	: CFlipCreatureCard(pGame, _T("Hired Muscle"), CardType::Creature, CREATURE_TYPE2(Human, Warrior), nID,
		_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2), Power(4), Life(4), _T("Scarmaker"))
{
	CCreatureTypeModifier* pModifier1 = new CCreatureTypeModifier(SingleCreatureType::Human, FALSE);
	CCreatureTypeModifier* pModifier2 = new CCreatureTypeModifier(SingleCreatureType::Warrior, FALSE);
	CCreatureTypeModifier* pModifier3 = new CCreatureTypeModifier(SingleCreatureType::Spirit, TRUE);
	AddCreatureModifier(pModifier1);
	AddCreatureModifier(pModifier2);
	AddCreatureModifier(pModifier3);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().Add(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CardChange);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHiredMuscleCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CHiredMuscleCard::SetTriggerContext2));

		cpAbility->GetTriggeredCardModifiers().Add(new CCardFlipModifier);
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				BLACK_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Fear, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable,
				new AnyCreatureComparer));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), -1);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CFlipCreatureCard::CanPlayFlipped)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CHiredMuscleCard::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CCard* pCard) const
{
	return !GetOrientation()->IsFlipped();
}

bool CHiredMuscleCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	if(!GetOrientation()->IsFlipped() && GetCounterContainer()->GetCounter(KI_COUNTER)->GetCount() >= 2) return true;
	return false;
}

//____________________________________________________________________________
//
CDisruptingShoalCard::CDisruptingShoalCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Disrupting Shoal"), CardType::Instant | CardType::Arcane, nID,
		BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Instant, 
		new TrueCardComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Blue, false));

	m_pCounterSpell->GetCost().SetExtraManaCost();
	m_pCounterSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDisruptingShoalCard::BeforeResolution));

	{		
		counted_ptr<CCounterSpell> cpSpell(
			::CreateObject<CCounterSpell>(this, AbilityType::Instant,
				_T(""),
				new TrueCardComparer));
				
		cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDisruptingShoalCard::BeforeResolution1));
		cpSpell->SetMainSpell(FALSE);

		AddSpell(cpSpell.GetPointer());
	}
}
bool CDisruptingShoalCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n =  m_pCounterSpell->GetCost().GetExtraValue(pAction->GetCostConfigEntry());
	return pAction->GetAssociatedCard()->GetConvertedManaCost() == n;
}

bool CDisruptingShoalCard::BeforeResolution1(CAbilityAction* pAction) const
{
	return pAction->GetExileFromHandCards()->GetAt(0)->GetConvertedManaCost() == pAction->GetAssociatedCard()->GetConvertedManaCost();
}

//____________________________________________________________________________
//
CBlazingShoalCard::CBlazingShoalCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Blazing Shoal"), CardType::Instant  | CardType::Arcane, nID, AbilityType::Instant,
		RED_MANA_TEXT RED_MANA_TEXT, 
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(0, 1 /*power*/));

	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Red, false));

	{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T(""),
			Power(+1), Life(+0), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlazingShoalCard::BeforeResolution));
	cpSpell->SetMainSpell(FALSE);

	AddSpell(cpSpell.GetPointer());
	}
}

bool CBlazingShoalCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = pAction->GetExileFromHandCards()->GetAt(0)->GetConvertedManaCost();
	
	 CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue2 = +n;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
	it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}
	
	return true;
}

//____________________________________________________________________________
//
CSickeningShoalCard::CSickeningShoalCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Sickening Shoal"), CardType::Instant  | CardType::Arcane, nID, AbilityType::Instant,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, 
		Power(+0), Life(+0),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	m_pTargetChgPwrTghAttrSpell->SetExtraActionValueVector(ContextValue(-1, -1 /*power*/));

	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Black, false));

	{
	counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
		::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
			_T(""),
			Power(-1), Life(-1), 
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpSpell->GetCost().AddExileHandCardCost(1, &m_CardFilter);
	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSickeningShoalCard::BeforeResolution));
	cpSpell->SetMainSpell(FALSE);

	AddSpell(cpSpell.GetPointer());
	}
}

bool CSickeningShoalCard::BeforeResolution(CAbilityAction* pAction) const
{
	int n = pAction->GetExileFromHandCards()->GetAt(0)->GetConvertedManaCost();
	
	 CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());

	Context.nValue1 = -n;
	Context.nValue2 = -n;

	for (CSubjectGroup::CardSubjectIterator it = pTargetAction->GetTargetGroup().CardSubjectBegin();
	it != pTargetAction->GetTargetGroup().CardSubjectEnd(); ++it)

	{
		pTargetAction->GetTargetGroup().SetValue(const_cast<const CCard*>(it->GetPointer()),const_cast<const ContextValue&>(Context));
	}
	
	return true;
}

//____________________________________________________________________________
//
CAuraBarbsCard::CAuraBarbsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aura Barbs"), CardType::Instant | CardType::Arcane, nID)
{
    counted_ptr<CGenericSpell> cpSpell(
        ::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("2") RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CAuraBarbsCard::BeforeResolution));

    AddSpell(cpSpell.GetPointer());
}

bool CAuraBarbsCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCountedCardContainer enchantments;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		CCardFilter::GetFilter(_T("enchantments"))->GetIncluded(*(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)), enchantments);

	if (enchantments.GetSize() == 0) return false;

	for (int ic = 0; ic < enchantments.GetSize(); ++ic)
	{
		CLifeModifier* pModifier = new CLifeModifier(Life(-2), enchantments.GetAt(ic), PreventableType::Preventable);
		pModifier->ApplyTo(enchantments.GetAt(ic)->GetController());

		if ((enchantments.GetAt(ic)->GetCardType() & CardType::_Aura).Any())
			for (int is = 0; is < enchantments.GetAt(ic)->GetSpells().GetSize(); ++is)
			{
				CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(enchantments.GetAt(ic)->GetSpells().GetAt(is));
				if (!pEnchantSpell) continue;

				if (pEnchantSpell->GetEnchantedOnCard()->GetCardType().IsCreature())
				{
					CCreatureCard* pCreature = dynamic_cast<CCreatureCard*>(pEnchantSpell->GetEnchantedOnCard());
					if (!pCreature) continue;

					CLifeModifier* pModifier = new CLifeModifier(Life(-2), enchantments.GetAt(ic), PreventableType::Preventable);
					pModifier->ApplyTo(pCreature);

					break;
				}
			}
	}

	return true;
}

//____________________________________________________________________________
//
CEnshrinedMemoriesCard::CEnshrinedMemoriesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Enshrined Memories"), CardType::Sorcery, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
		::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Sorcery,
			GREEN_MANA_TEXT,
			0));

	cpSpell->GetCost().SetExtraManaCost();

	cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
	cpSpell->SetRevealCardsToOthers(
		TRUE,	// reveal cards to others
		FALSE);	// reveal only selected cards

	cpSpell->SetSelectionOptions(MinimumValue(SpecialNumber::All), MaximumValue(SpecialNumber::Any), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("creatures")));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CBlademaneBakuCard::CBlademaneBakuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Blademane Baku"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") RED_MANA_TEXT, Power(1), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->SetAbilityText(_T("Remove 0 ki counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBlademaneBakuCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CBlademaneBakuCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCounterCount = pAction->GetCostConfigEntry().GetExtraValue();

	CPowerModifier* pModifier = new CPowerModifier(Power(-2 * nCounterCount));
	pModifier->ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CSkullmaneBakuCard::CSkullmaneBakuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Skullmane Baku"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetSpell>>(this,
				_T("1"),
				new AnyCreatureComparer, false));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Remove 0 ki counters from"));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
				_T("1"),
				Power(-0), Life(-0),
				CreatureKeyword::Null, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		cpAbility->AddTapCost();
		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSkullmaneBakuCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSkullmaneBakuCard::BeforeResolution(CAbilityAction* pAction)
{
	int nCount = pAction->GetCostConfigEntry().GetExtraValue();

    CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = nCount;
	Context.nValue2 = nCount;

	pTargetAction->GetTargetGroup().SetValue(pTargetAction->GetTargetGroup().GetFirstCardSubject(), const_cast<const ContextValue&>(Context));

	return true;
}

//____________________________________________________________________________
//
CGenjuOfTheCedarsCard::CGenjuOfTheCedarsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Genju of the Cedars"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::Forest, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGenjuOfTheCedarsCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGenjuOfTheCedarsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(pEnchantCard,
			_T("2"),
			_T("Spirit AC"), 64070,
			pEnchantedCard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGenjuOfTheFallsCard::CGenjuOfTheFallsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Genju of the Falls"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				BLUE_MANA_TEXT,
				new CardTypeComparer(CardType::Island, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGenjuOfTheFallsCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGenjuOfTheFallsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(pEnchantCard,
			_T("2"),
			_T("Spirit AD"), 64071,
			pEnchantedCard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGenjuOfTheFensCard::CGenjuOfTheFensCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Genju of the Fens"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				BLACK_MANA_TEXT,
				new CardTypeComparer(CardType::Swamp, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGenjuOfTheFensCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGenjuOfTheFensCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(pEnchantCard,
			_T("2"),
			_T("Spirit AE"), 64072,
			pEnchantedCard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGenjuOfTheFieldsCard::CGenjuOfTheFieldsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Genju of the Fields"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::Plains, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGenjuOfTheFieldsCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGenjuOfTheFieldsCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(pEnchantCard,
			_T("2"),
			_T("Spirit AF"), 64073,
			pEnchantedCard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGenjuOfTheSpiresCard::CGenjuOfTheSpiresCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Genju of the Spires"), CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				RED_MANA_TEXT,
				new CardTypeComparer(CardType::Mountain, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGenjuOfTheSpiresCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGenjuOfTheSpiresCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(pEnchantCard,
			_T("2"),
			_T("Spirit AG"), 64074,
			pEnchantedCard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGenjuOfTheRealmCard::CGenjuOfTheRealmCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Genju of the Realm"), CardType::Legendary | CardType::EnchantLand, nID)
{
	{
		counted_ptr<CAbilityEnchant> cpSpell(
			::CreateObject<CAbilityEnchant>(this,
				ALL_MANA_TEXT,
				new CardTypeComparer(CardType::_Land, false),
				CAbilityEnchant::CreateAbilityCallback(this,
					&CGenjuOfTheRealmCard::CreateEnchantAbility),
					CAbilityEnchant::AdditionType::ToEnchantCard));

		cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

		AddSpell(cpSpell.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this,
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CGenjuOfTheRealmCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CIsAlsoAAbility> cpAbility(
		::CreateObject<CIsAlsoAAbility>(pEnchantCard,
			_T("2"),
			_T("Spirit L"), 2946,
			pEnchantedCard));

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTwistAllegianceCard::CTwistAllegianceCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Twist Allegiance"), CardType::Sorcery, nID)
, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				   &CTwistAllegianceCard::OnResolutionCompleted))
{
	counted_ptr<CGenericTargetPlayerSpell> cpSpell(
		::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Sorcery,
			_T("6") RED_MANA_TEXT));

	cpSpell->GetTargeting()->SetIncludeOpponentPlayersOnly();
	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CTwistAllegianceCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer contCreatures;
	CCountedCardContainer oppCreatures;
	
	CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*GetController()->GetZoneById(ZoneId::Battlefield), contCreatures);
	CCardFilter::GetFilter(_T("creatures"))->GetIncluded(*GetGame()->GetNextPlayer(GetController())->GetZoneById(ZoneId::Battlefield), oppCreatures);
	
	if (contCreatures.GetSize())
	for (int i = 0; i < contCreatures.GetSize(); ++i)
	{
		CTransferControlModifier* pModifier1 = new CTransferControlModifier(GetGame(), (CCard*)contCreatures.GetAt(i), (CCard*)contCreatures.GetAt(i));
		CTransferControlModifier* pModifier1_return = new CTransferControlModifier(GetGame(), (CCard*)contCreatures.GetAt(i), (CCard*)contCreatures.GetAt(i), true);
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToLater);
		pModifier1->ApplyTo(GetGame()->GetNextPlayer(GetController()));
		pModifier2->ApplyTo(GetGame()->GetNextPlayer(GetController()));
	}
	
	if (oppCreatures.GetSize())
	for (int i = 0; i < oppCreatures.GetSize(); ++i)
	{
		CTransferControlModifier* pModifier1 = new CTransferControlModifier(GetGame(), (CCard*)oppCreatures.GetAt(i), (CCard*)oppCreatures.GetAt(i));
		CTransferControlModifier* pModifier1_return = new CTransferControlModifier(GetGame(), (CCard*)oppCreatures.GetAt(i), (CCard*)oppCreatures.GetAt(i), true);
		CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pModifier1_return, TurnNumberDelta(-1), NodeId::CleanupStep2, CScheduledPlayerModifier::Operation::ApplyToLater);
		pModifier1->ApplyTo(GetController());
		pModifier2->ApplyTo(GetController());
	}
	
	CZoneCardModifier pModifier3 = CZoneCardModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCardModifier>(new CCardOrientationModifier(false)));

	pModifier3.ApplyTo(GetController());
	pModifier3.ApplyTo(GetGame()->GetNextPlayer(GetController()));
	
	CZoneCreatureModifier pModifier4 = CZoneCreatureModifier(ZoneId::Battlefield, CCardFilter::GetFilter(_T("creatures")),
		std::auto_ptr<CCreatureModifier>(new CCreatureKeywordModifier(CreatureKeyword::Haste, true, true)));

	pModifier4.ApplyTo(GetController());
	pModifier4.ApplyTo(GetGame()->GetNextPlayer(GetController()));
}

//____________________________________________________________________________
//
CStirTheGraveCard::CStirTheGraveCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Stir the Grave"), CardType::Sorcery, nID)
{
	counted_ptr<CTargetExtraMoveCardSpell> cpSpell(
		::CreateObject<CTargetExtraMoveCardSpell>(this, AbilityType::Sorcery,
			BLACK_MANA_TEXT,
			new AnyCreatureComparer,
			ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, TRUE));

	cpSpell->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);

	cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CPetalmaneBakuCard::CPetalmaneBakuCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Petalmane Baku"), CardType::Creature, CREATURE_TYPE(Spirit), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(2))
{
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSpellCast > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardSpiritArcaneComparer);
		
		cpAbility->GetTriggeredCardModifiers().push_back(new CCardCounterModifier(KI_COUNTER, +1));
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddManaCost(_T("1"));
		cpAbility->SetAbilityText(_T("Remove 0 ki counters from"));
		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetAbilityText(_T("White mana. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPetalmaneBakuCard::BeforeResolution1));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetAbilityText(_T("Blue mana. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPetalmaneBakuCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetAbilityText(_T("Black mana. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPetalmaneBakuCard::BeforeResolution3));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetAbilityText(_T("Red mana. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPetalmaneBakuCard::BeforeResolution4));

		AddAbility(cpAbility.GetPointer());	
	}
	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this,
				_T(""), AbilityType::Activated, _T("")));

		cpAbility->GetCost().AddCounterCost(GetCounterContainer()->GetCounter(KI_COUNTER), SpecialNumber::AnyNegative);
		cpAbility->GetCost().AddManaCost(_T("1"));

		cpAbility->SetAbilityText(_T("Green mana. Activates"));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CPetalmaneBakuCard::BeforeResolution5));

		AddAbility(cpAbility.GetPointer());	
	}
}

bool CPetalmaneBakuCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(WHITE_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

bool CPetalmaneBakuCard::BeforeResolution2(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLUE_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

bool CPetalmaneBakuCard::BeforeResolution3(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(BLACK_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

bool CPetalmaneBakuCard::BeforeResolution4(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(RED_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

bool CPetalmaneBakuCard::BeforeResolution5(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int nCounterCount = -pAction->GetCostConfigEntry().GetExtraValue();

	CManaPoolModifier pModifier1 = CManaPoolModifier(
		CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT));

	for (int i = 0; i < nCounterCount; i++) pModifier1.ApplyTo(pController);

	return true;
}

//____________________________________________________________________________
//
CChiseiHeartOfOceansCard::CChiseiHeartOfOceansCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Chisei, Heart of Oceans"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(4), Life(4))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChiseiHeartOfOceansCard::OnCardSelected))
	, m_CounterSelection(pGame, CSelectionSupport::SelectionCallback(this, &CChiseiHeartOfOceansCard::OnCounterSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CChiseiHeartOfOceansCard::BeforeResolution));
	
	cpAbility->AddAbilityTag(AbilityTag::CardChange);

	AddAbility(cpAbility.GetPointer());
}

bool CChiseiHeartOfOceansCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pBattlefield = pController->GetZoneById(ZoneId::Battlefield);

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Sacrifice %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pBattlefield->GetSize(); ++i)
	{
		CCard* pCard = pBattlefield->GetAt(i);

		if (pCard->GetCounterContainer()->HasAnyCounters())
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)pCard;
			entry.cpAssociatedCard = pCard;
									
			entry.strText.Format(_T("Remove a counter from %s"),
				pCard->GetCardName(TRUE));

			entries.push_back(entry);
		}
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CChiseiHeartOfOceansCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s sacrifices"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice, pSelectionPlayer);
				pModifier.ApplyTo(this);

				return;
			}
			else
			{
				CCard* pCard = (CCard*)it->dwContext;

				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s decides to remove a counter from %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				struct PushBack
				{
					PushBack(CCard* nCard)
						: entries()
						, kCard(nCard)
					{}
					void operator()(Counter* c)
					{
						LPCTSTR name = c->GetName();
		
						SelectionEntry selectionEntry;

						selectionEntry.dwContext = (DWORD)c;  //assuming size_of(c)==size_of(DWORD)
						selectionEntry.strText.Format(_T("remove %s from %s"), name, kCard->GetCardName());

						if (c->GetCount()!=0)
							entries.push_back(selectionEntry);
					}

					CCard* kCard;
		
					std::vector<SelectionEntry> entries;

				} push(pCard);
	
				m_CounterSelection.AddSelectionRequest(pCard->GetCounterContainer()->ForEachCounter(push).entries, 1, 1, NULL, pSelectionPlayer, (DWORD)pCard);

				return;
			}
		}
}

void CChiseiHeartOfOceansCard::OnCounterSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			Counter* counter = (Counter*)it->dwContext;
			CCard* pCard = (CCard*)dwContext1;

			CCardCounterModifier modifier(counter->GetName(), -1);
			modifier.ApplyTo(pCard);
		}
}

//____________________________________________________________________________
//
CMinamoSightbenderCard::CMinamoSightbenderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Minamo Sightbender"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		_T("1") BLUE_MANA_TEXT, Power(1), Life(2))
{
	counted_ptr<CActivatedAbility<CTargetExtraPowerSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetExtraPowerSpell>>(this,
		_T(""),
			new AnyCreatureComparer, TRUE));

	cpAbility->AddTapCost();

	cpAbility->GetCost().SetExtraManaCost(SpecialNumber::Any, TRUE, CManaCost::AllCostColors);
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMinamoSightbenderCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CMinamoSightbenderCard::BeforeResolution(CAbilityAction* pAction)
{
	CCreatureCard* pTarget = (CCreatureCard*)pAction->GetAssociatedCard();
	
	CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Unblockable, TRUE);
	pModifier.ApplyTo(pTarget);

	return true;
}

//____________________________________________________________________________
//
CShireiShizosCaretakerCard::CShireiShizosCaretakerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Shirei, Shizo's Caretaker"), CardType::_LegendaryCreature, CREATURE_TYPE(Spirit), nID,
		_T("4") BLACK_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->GetTrigger().SetToControllerOnly(TRUE);
	
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CShireiShizosCaretakerCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CShireiShizosCaretakerCard::BeforeResolution));
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CreaturePowerComparer<std::less_equal<int>>(1));

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CShireiShizosCaretakerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;

	return true;
}

bool CShireiShizosCaretakerCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCountedCardContainer pSubjects1;
	CCountedCardContainer pSubjects2;

	CCard* pSubject = (CCard*)pAction->GetTriggerContext().nValue1;
	if (pSubject->IsInGraveyard())
		pSubjects1.AddCard(pSubject, CardPlacement::Top);
	if (IsInplay())
		pSubjects2.AddCard(this, CardPlacement::Top);

	CDoubleContainerEffectModifier pModifier = CDoubleContainerEffectModifier(GetGame(), _T("Shirei, Shizo's Caretaker Effect"), 61077, &pSubjects1, &pSubjects2);
	pModifier.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CMatsuTribeSniperCard::CMatsuTribeSniperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Matsu-Tribe Sniper"), CardType::Creature, CREATURE_TYPE3(Snake, Warrior, Archer), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, FALSE,
				Life(-1),	// life delta
				PreventableType::Preventable));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();
		cpAbility->GetTargeting()->GetSubjectCardFilter().AddComparer(
			new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMatsuTribeSniperCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CMatsuTribeSniperCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMatsuTribeSniperCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, 
													CCreatureCard* pToCreature, Damage damage) const
{
	triggerContext.nValue1 = (DWORD)pToCreature;
	return true;
}

bool CMatsuTribeSniperCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
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