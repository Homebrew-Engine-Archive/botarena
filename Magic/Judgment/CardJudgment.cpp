#include "stdafx.h"
#include "CardJudgment.h"

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

		DEFINE_CARD(CAngerCard);
		DEFINE_CARD(CAnuridBarkripperCard);
		DEFINE_CARD(CAnuridBrushhopperCard);
		DEFINE_CARD(CAnuridSwarmsnapperCard);
		DEFINE_CARD(CAvenFogbringerCard);
		DEFINE_CARD(CAvenWarcraftCard);
		DEFINE_CARD(CBalthorTheDefiledCard);
		DEFINE_CARD(CBattleScreechCard);
		DEFINE_CARD(CBattlewiseAvenCard);
		DEFINE_CARD(CBenevolentBodyguardCard);
		DEFINE_CARD(CBookBurningCard);
		DEFINE_CARD(CBorderPatrolCard);
		DEFINE_CARD(CBrawnCard);
		DEFINE_CARD(CBreakingPointCard);
		DEFINE_CARD(CBrowbeatCard);
		DEFINE_CARD(CBurningWishCard);
		DEFINE_CARD(CCabalTherapyCard);
		DEFINE_CARD(CCabalTraineeCard);
		DEFINE_CARD(CCagemailCard);
		DEFINE_CARD(CCanopyClawsCard);
		DEFINE_CARD(CCentaurRootcasterCard);
		DEFINE_CARD(CCephalidInkshrouderCard);
		DEFINE_CARD(CCommanderEeshaCard);
		DEFINE_CARD(CCunningWishCard);
		DEFINE_CARD(CCrushOfWurmsCard);
		DEFINE_CARD(CDeathWishCard);
		DEFINE_CARD(CDefyGravityCard);
		DEFINE_CARD(CDwarvenBloodboilerCard);
		DEFINE_CARD(CDwarvenDrillerCard);
		DEFINE_CARD(CDwarvenScorcherCard);
		DEFINE_CARD(CEarsplittingRatsCard);
		DEFINE_CARD(CElephantGuideCard);
		DEFINE_CARD(CEmberShotCard);
		DEFINE_CARD(CEnvelopCard);
		DEFINE_CARD(CEpicStruggleCard);
		DEFINE_CARD(CExoskeletalArmorCard);
		DEFINE_CARD(CFilthCard);
		DEFINE_CARD(CFirecatBlitzCard);
		DEFINE_CARD(CFlaringPainCard);
		DEFINE_CARD(CFlashOfInsightCard);
		DEFINE_CARD(CFledglingDragonCard);
		DEFINE_CARD(CFolkMedicineCard);
		DEFINE_CARD(CFuneralPyreCard);
		DEFINE_CARD(CGenesisCard);
		DEFINE_CARD(CGiantWarthogCard);
		DEFINE_CARD(CGloryCard);
		DEFINE_CARD(CGoldenWishCard);
		DEFINE_CARD(CGoretuskFirebeastCard);
		DEFINE_CARD(CGraveConsequencesCard);
		DEFINE_CARD(CGrizzlyFateCard);
		DEFINE_CARD(CGuiltfeederCard);
		DEFINE_CARD(CHaplessResearcherCard);
		DEFINE_CARD(CHarvesterDruidCard);
		DEFINE_CARD(CHuntingGroundsCard);
		DEFINE_CARD(CInfectiousRageCard);
		DEFINE_CARD(CIronshellBeetleCard);
		DEFINE_CARD(CJeskaWarriorAdeptCard);
		DEFINE_CARD(CKeepWatchCard);
		DEFINE_CARD(CKrosanReclamationCard);
		DEFINE_CARD(CKrosanVergeCard);
		DEFINE_CARD(CKrosanWayfarerCard);
		DEFINE_CARD(CLavaDartCard);
		DEFINE_CARD(CLeadAstrayCard);
		DEFINE_CARD(CLiberatedDwarfCard);
		DEFINE_CARD(CLightningSurgeCard);
		DEFINE_CARD(CLivingWishCard);
		DEFINE_CARD(CMentalNoteCard);
		DEFINE_CARD(CMirarisWakeCard);
		DEFINE_CARD(CMirrorWallCard);
		DEFINE_CARD(CNantukoMonasteryCard);
		DEFINE_CARD(CNantukoTracerCard);
		DEFINE_CARD(CPhantomCentaurCard);
		DEFINE_CARD(CPhantomFlockCard);
		DEFINE_CARD(CPhantomNantukoCard);
		DEFINE_CARD(CPhantomNishobaCard);
		DEFINE_CARD(CPhantomNomadCard);
		DEFINE_CARD(CPhantomTigerCard);
		DEFINE_CARD(CQuietSpeculationCard);
		DEFINE_CARD(CRatsFeastCard);
		DEFINE_CARD(CRayOfRevelationCard);
		DEFINE_CARD(CRiftstonePortalCard);
		//DEFINE_CARD(CSereneSunsetCard);
		DEFINE_CARD(CSilverSeraphCard);
		DEFINE_CARD(CSolitaryConfinementCard);
		DEFINE_CARD(CSoulgorgerOrggCard);
		DEFINE_CARD(CSpellgorgerBarbarianCard);
		DEFINE_CARD(CSpiritCairnCard);
		DEFINE_CARD(CStitchTogetherCard);
		DEFINE_CARD(CSuddenStrengthCard);
		DEFINE_CARD(CSwelterCard);
		DEFINE_CARD(CSwirlingSandstormCard);
		DEFINE_CARD(CSylvanSafekeeperCard);
		DEFINE_CARD(CTelekineticBondsCard);
		DEFINE_CARD(CTestOfEnduranceCard);
		DEFINE_CARD(CThrissNantukoPrimusCard);
		DEFINE_CARD(CToxicStenchCard);
		DEFINE_CARD(CTrainedPronghornCard);
		DEFINE_CARD(CTreacherousVampireCard);
		DEFINE_CARD(CTreacherousWerewolfCard);
		DEFINE_CARD(CTunnelerWurmCard);
		DEFINE_CARD(CValorCard);
		DEFINE_CARD(CVenomousVinesCard);
		DEFINE_CARD(CVigilantSentryCard);
		DEFINE_CARD(CWonderCard);
		DEFINE_CARD(CWorldgorgerDragonCard);
		DEFINE_CARD(CWormfangBehemothCard);
		DEFINE_CARD(CWormfangCrabCard);
		DEFINE_CARD(CWormfangDrakeCard);
		DEFINE_CARD(CWormfangMantaCard);
		DEFINE_CARD(CWormfangNewtCard);
		DEFINE_CARD(CWormfangTurtleCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CBorderPatrolCard::CBorderPatrolCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Border Patrol"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("4") WHITE_MANA_TEXT, Power(1), Life(6))
{
	GetCreatureKeyword()->AddVigilance(FALSE);
}

//____________________________________________________________________________
//
CGiantWarthogCard::CGiantWarthogCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Giant Warthog"), CardType::Creature, CREATURE_TYPE2(Boar, Beast), nID,
		_T("5") GREEN_MANA_TEXT, Power(5), Life(5))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CJeskaWarriorAdeptCard::CJeskaWarriorAdeptCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Jeska, Warrior Adept"), CardType::_LegendaryCreature, CREATURE_TYPE3(Human, Barbarian, Warrior), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(3), Life(1))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

	counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CThrissNantukoPrimusCard::CThrissNantukoPrimusCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Thriss, Nantuko Primus"), CardType::_LegendaryCreature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(5), Life(5))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			GREEN_MANA_TEXT,
			Power(+5), Life(+5),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddTapCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTunnelerWurmCard::CTunnelerWurmCard(CGame* pGame, UINT nID)
	: CRegenerationCreatureCard(pGame, _T("Tunneler Wurm"), CardType::Creature, CREATURE_TYPE(Wurm), nID,
		_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(6), Life(6),
		_T(""))
{
	m_pRegenerationAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));
}

//____________________________________________________________________________
//
CBattleScreechCard::CBattleScreechCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Battle Screech"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::White, true));
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
				_T("Bird A"), 2770,
				2));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T(""),
				_T("Bird A"), 2770,
				2));

		cpSpell->GetCost().AddTapCardCost(3, &m_CardFilter);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCanopyClawsCard::CCanopyClawsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Canopy Claws"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Flying,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				GREEN_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Null, CreatureKeyword::Flying,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CCrushOfWurmsCard::CCrushOfWurmsCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Crush of Wurms"), CardType::Sorcery, nID)
{
	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Creature | CardType::White, true));
	m_CardFilter.AddComparer(new NegateCardComparer(new SpecificCardComparer(this)));

	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("6") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Wurm G"), 2957,
				3));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("9") GREEN_MANA_TEXT GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Wurm G"), 2957,
				3));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CFolkMedicineCard::CFolkMedicineCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Folk Medicine"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("2") GREEN_MANA_TEXT));

		cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CChgLifeBySurveySpell> cpSpell(
			::CreateObject<CChgLifeBySurveySpell>(this, AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT));

		cpSpell->SetCardsMultiplier(1, CCardFilter::GetFilter(_T("creatures")), ZoneId::Battlefield);
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::Green, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CLavaDartCard::CLavaDartCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lava Dart"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					RED_MANA_TEXT,
					new AnyCreatureComparer,
					TRUE,
					Life(-1), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
				::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Instant,
					_T(""),
					new AnyCreatureComparer,
					TRUE,
					Life(-1), PreventableType::Preventable));

		cpSpell->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("Mountains")));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CRayOfRevelationCard::CRayOfRevelationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Ray of Revelation"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				_T("1") WHITE_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetMoveCardSpell>cpSpell(
			::CreateObject <CTargetMoveCardSpell>(this,  AbilityType::Instant,
				GREEN_MANA_TEXT,
				new CardTypeComparer(CardType::_Enchantment, false),
				ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());

		AddCardType(CardType::White, CardType::_ColorMask); //to fix the color of this card.
	}
}

//____________________________________________________________________________
//
CSolitaryConfinementCard::CSolitaryConfinementCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Solitary Confinement"), CardType::GlobalEnchantment, nID, 
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		//Prevent all damage
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::PreventDamage, 262144));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//You have shroud
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantBeTargeted));

		cpAbility->SetAffectControllerOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Skip your draw step
		typedef
			TTriggeredAbility< CTriggeredPlayerEffectAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetPlayerEffect(PlayerEffectType::SkipNextDrawStep, FALSE);
		cpAbility->SetRemoveEffectWhenLeaveInplay(TRUE);
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		//Upkeep cost: Discard a card
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
			new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CAvenFogbringerCard::CAvenFogbringerCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Aven Fogbringer"), CardType::Creature, CREATURE_TYPE2(Bird, Wizard), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(
		new CardTypeComparer(CardType::_Land, false));

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBalthorTheDefiledCard::CBalthorTheDefiledCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Balthor the Defiled"), CardType::_LegendaryCreature, CREATURE_TYPE2(Zombie, Dwarf), nID,
		_T("2") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreatureTypeComparer(CREATURE_TYPE(Minion), false),
				Power(+1), Life(+1)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
				BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT,
				new AnyCreatureComparer,
				ZoneId::Battlefield, TRUE,
				MoveType::Others, ZoneId::Graveyard));

		cpAbility->GetGlobalCardFilter().AddComparer(new CardTypeComparer(CardType::Black | CardType::Red, false));
		
		cpAbility->AddExileCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBenevolentBodyguardCard::CBenevolentBodyguardCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Benevolent Bodyguard"), CardType::Creature, CREATURE_TYPE2(Human, Cleric), nID,
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

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCabalTraineeCard::CCabalTraineeCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cabal Trainee"), CardType::Creature, CREATURE_TYPE2(Human, Minion), nID,
		BLACK_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(-2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCentaurRootcasterCard::CCentaurRootcasterCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Centaur Rootcaster"), CardType::Creature, CREATURE_TYPE2(Centaur, Druid), nID,
		_T("3") GREEN_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();

	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CCephalidInkshrouderCard::CCephalidInkshrouderCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Cephalid Inkshrouder"), CardType::Creature, CREATURE_TYPE(Cephalid), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(1))
{
	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			_T(""),
			Power(+0), Life(+0), CreatureKeyword::Unblockable));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDwarvenBloodboilerCard::CDwarvenBloodboilerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Bloodboiler"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))

	, m_CardFilter(_T("a Dwarf"), _T("Dwarves"), new CreatureTypeComparer(CREATURE_TYPE(Dwarf), false))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+2), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCost().AddTapCardCost(1, &m_CardFilter);

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CEarsplittingRatsCard::CEarsplittingRatsCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Earsplitting Rats"), CardType::Creature, CREATURE_TYPE(Rat), nID,
		_T("3") BLACK_MANA_TEXT, Power(2), Life(1))
{
	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				_T("")));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback,
								&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetDiscardCount(1);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToAllPlayers);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CGoretuskFirebeastCard::CGoretuskFirebeastCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Goretusk Firebeast"), CardType::Creature, CREATURE_TYPE3(Elemental, Boar, Beast), nID,
		_T("5") RED_MANA_TEXT, Power(2), Life(2))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyLifeAbility, CWhenSelfInplay,
			CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
	cpAbility->GetLifeModifier().SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);
	cpAbility->GetTargeting().SetIncludePlayers(TRUE);
	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

	cpAbility->AddAbilityTag(AbilityTag::DamageSource);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHaplessResearcherCard::CHaplessResearcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Hapless Researcher"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		BLUE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CDrawCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CDrawCardSpell>>(this,
			_T(""), 1));

	cpAbility->SetDiscard(1, FALSE, MoveType::Discard);
	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CHarvesterDruidCard::CHarvesterDruidCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Harvester Druid"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Black));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Blue));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Red));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::Green));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CManaProductionAbility3> cpAbility(
			::CreateObject<CManaProductionAbility3>(this, _T(""), AbilityType::Activated,
				new CardTypeComparer(CardType::_Land, false),
				CManaPool::Color::White));

		cpAbility->SetMonitorControllerOnly();
		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CIronshellBeetleCard::CIronshellBeetleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Ironshell Beetle"), CardType::Creature, CREATURE_TYPE(Insect), nID,
		_T("1") GREEN_MANA_TEXT, Power(1), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredModifyCardAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Positive);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetCardModifiers().push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CKrosanWayfarerCard::CKrosanWayfarerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Krosan Wayfarer"), CardType::Creature, CREATURE_TYPE2(Human, Druid), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CSearchLibrarySpell>> cpAbility(
		::CreateObject<CActivatedAbility<CSearchLibrarySpell>>( this,
			_T(""),
			CCardFilter::GetFilter(_T("lands")),
			ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
	cpAbility->SetFromZoneId(ZoneId::Hand);

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLiberatedDwarfCard::CLiberatedDwarfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Liberated Dwarf"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0),
			CreatureKeyword::FirstStrike, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable, 
			new CardTypeComparer(CardType::Green | CardType::Creature, true)));

	cpAbility->AddSacrificeCost();

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CMirrorWallCard::CMirrorWallCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Mirror Wall"), CardType::Creature, CREATURE_TYPE(Wall), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(4))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				WHITE_MANA_TEXT,
				Power(+0), Life(+0), CreatureKeyword::DefenderMayAttack));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpellgorgerBarbarianCard::CSpellgorgerBarbarianCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Spellgorger Barbarian"), CardType::Creature, CREATURE_TYPE3(Human, Nightmare, Barbarian), nID,
		_T("3") RED_MANA_TEXT, Power(3), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredDiscardCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetPickerIsTriggeredPlayer(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSylvanSafekeeperCard::CSylvanSafekeeperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Sylvan Safekeeper"), CardType::Creature, CREATURE_TYPE2(Human, Wizard), nID,
		GREEN_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
			_T(""),
			Power(+0), Life(+0),
			CreatureKeyword::Null, CreatureKeyword::Null,
			TRUE, PreventableType::NotPreventable));

	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Shroud);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(TRUE);

	cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();

	cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("lands")));

	AddAbility(cpAbility.GetPointer());	
}

//____________________________________________________________________________
//
CTrainedPronghornCard::CTrainedPronghornCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Trained Pronghorn"), CardType::Creature, CREATURE_TYPE(Antelope), nID,
		_T("1") WHITE_MANA_TEXT, Power(1), Life(1))
{
	counted_ptr<CActivatedAbility<CTargetDamagePreventionSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetDamagePreventionSpell>>(this,
			_T(""),
			new SpecificCardComparer(this),
			FALSE,
			Life(PreventionType::PreventAllDamage),
			SourceColor::Null));

	cpAbility->GetCost().AddDiscardCardCost(1, CCardFilter::GetFilter(_T("cards")));

	AddAbility(cpAbility.GetPointer()); 
}

//____________________________________________________________________________
//
CCagemailCard::CCagemailCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Cagemail"), nID,
		_T("1") WHITE_MANA_TEXT,
		Power(+2), Life(+2), CreatureKeyword::CantAttack)
{
}

//____________________________________________________________________________
//
CEpicStruggleCard::CEpicStruggleCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Epic Struggle"), CardType::GlobalEnchantment, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredLoseGameAbility, CMyTrigger > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiritCairnCard::CSpiritCairnCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Spirit Cairn"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetCreateTokenOption(TRUE, _T("Spirit H"), 2942, 1);

	cpAbility->SetResolutionCost(WHITE_MANA_TEXT);

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTestOfEnduranceCard::CTestOfEnduranceCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Test of Endurance"), CardType::GlobalEnchantment, nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTestOfEnduranceCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CTestOfEnduranceCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CTestOfEnduranceCard::SetTriggerContext(CTriggeredLoseGameAbility::TriggerContextType& triggerContext,
											CNode* pToNode) const
{
	CPlayer* pPlayer = GetController();

	return pPlayer->GetLife() >= Life(50);
}

bool CTestOfEnduranceCard::BeforeResolution(CTestOfEnduranceCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CPlayer* pPlayer = pAction->GetController();

	return pPlayer->GetLife() >= Life(50);
}

//____________________________________________________________________________
//
CDefyGravityCard::CDefyGravityCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Defy Gravity"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgPwrTghAttrSpell> cpSpell(
			::CreateObject<CTargetChgPwrTghAttrSpell>(this, AbilityType::Instant,
				BLUE_MANA_TEXT,
				Power(+0), Life(+0),
				CreatureKeyword::Flying, CreatureKeyword::Null,
				TRUE, PreventableType::NotPreventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CEmberShotCard::CEmberShotCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Ember Shot"), CardType::Instant, nID, AbilityType::Instant,
		_T("6") RED_MANA_TEXT,
		new AnyCreatureComparer,
		TRUE,	// Target player?
		Life(-3),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CEnvelopCard::CEnvelopCard(CGame* pGame, UINT nID)
	: CCounterSpellCard(pGame, _T("Envelop"), CardType::Instant, nID,
		BLUE_MANA_TEXT, AbilityType::Instant,
		new CardTypeComparer(CardType::Sorcery, false))
{
}

//____________________________________________________________________________
//
CLeadAstrayCard::CLeadAstrayCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lead Astray"), CardType::Instant, nID)
{
	counted_ptr<CTargetTapUntapCardSpell> cpSpell(
		::CreateObject<CTargetTapUntapCardSpell>(this, AbilityType::Instant,
			_T("1") WHITE_MANA_TEXT,
			TRUE,
			FALSE,
			new AnyCreatureComparer));

	cpSpell->GetTargeting()->SetSubjectCount(0, 2);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CMentalNoteCard::CMentalNoteCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Mental Note"), CardType::Instant, nID)
{
	counted_ptr<CRevealLibraryCardSpell> cpSpell(
	::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
		BLUE_MANA_TEXT,
		2));

	cpSpell->SetRevealCardsToOthers(TRUE, FALSE);
	cpSpell->SetReorder(TRUE, ZoneId::Graveyard);

	cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
//
//"Serene Sunset\n{XG}\nInstant\nJUD,U\nPrevent all combat damage X target creatures would deal this turn."
//The "All Actions" button is required to cast this spell...
//
//CSereneSunsetCard::CSereneSunsetCard(CGame* pGame, UINT nID)
//	: CChgPwrTghAttrSpellCard(pGame, _T("Serene Sunset"), CardType::Instant, nID, AbilityType::Instant,
//		GREEN_MANA_TEXT,
//		Power(+0), Life(+0),
//		CreatureKeyword::DealNoCombatDamage, CreatureKeyword::Null,
//		TRUE, PreventableType::NotPreventable)
//{
//	m_pTargetChgPwrTghAttrSpell->GetCost().SetExtraManaCost();
//	m_pTargetChgPwrTghAttrSpell->AdjustTargetCountWithExtraCostValue();
//
//	m_pTargetChgPwrTghAttrSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
//}
//
////____________________________________________________________________________
////
CSuddenStrengthCard::CSuddenStrengthCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Sudden Strength"), CardType::Instant, nID, AbilityType::Instant,
		_T("3") GREEN_MANA_TEXT,
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1)));
}

//____________________________________________________________________________
//
CRatsFeastCard::CRatsFeastCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Rats' Feast"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT, AbilityType::Sorcery,
		new TrueCardComparer,
		ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetCost().SetExtraManaCost();
	m_pTargetMoveCardSpell->AdjustTargetCountWithExtraCostValue();
	m_pTargetMoveCardSpell->GetTargeting()->SetSingleSourceZone(true);
}

//____________________________________________________________________________
//
CSwelterCard::CSwelterCard(CGame* pGame, UINT nID)
	: CTargetChgLifeSpellCard(pGame, _T("Swelter"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT,
		new AnyCreatureComparer,
		FALSE,	// Target player?
		Life(-2),		// Life delta
		PreventableType::Preventable)	// Preventable?
{
	m_pTargetChgLifeSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);

	m_pTargetChgLifeSpell->GetTargeting()->SetSubjectCount(2, 2);
}

//____________________________________________________________________________
//
CAnuridBarkripperCard::CAnuridBarkripperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anurid Barkripper"), CardType::Creature, CREATURE_TYPE2(Frog, Beast), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+2), Life(+2)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);
	
	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CBattlewiseAvenCard::CBattlewiseAvenCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Battlewise Aven"), CardType::Creature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new SpecificCardComparer(this),
			Power(+1), Life(+1)));

	cpAbility->SetConditionWork();
	cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
	cpAbility->SetConditionValue(7);

	cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::FirstStrike);
	cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CNantukoMonasteryCard::CNantukoMonasteryCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Nantuko Monastery"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CIsAlsoAAbility> cpAbility(
			::CreateObject<CIsAlsoAAbility>(this,
				WHITE_MANA_TEXT GREEN_MANA_TEXT,
				_T("Insect Monk AA"), 64061));
		ATLASSERT(cpAbility);	

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,
				CPlayableIfTrait::PlayableCallback(this,
				&CNantukoMonasteryCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CNantukoMonasteryCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CFledglingDragonCard::CFledglingDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Fledgling Dragon"), CardType::Creature, CREATURE_TYPE(Dragon), nID,
		_T("2") RED_MANA_TEXT RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPumpAbility> cpAbility(
			::CreateObject<CPumpAbility>(this,
				RED_MANA_TEXT,
				Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		counted_ptr<CPlayableIfTrait> cpTrait(
			::CreateObject<CPlayableIfTrait>(
				m_pUntapAbility,		  
				CPlayableIfTrait::PlayableCallback(this,
				&CFledglingDragonCard::CanPlay)));

		cpAbility->Add(cpTrait.GetPointer());

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+3), Life(+3)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
}

BOOL CFledglingDragonCard::CanPlay(BOOL bIncludeTricks)
{
	CPlayer* pController = GetController();
	if (!pController)
		return FALSE;

	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);

	return pGraveyard->GetSize() >= 7;
}

//____________________________________________________________________________
//
CVigilantSentryCard::CVigilantSentryCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Vigilant Sentry"), CardType::Creature, CREATURE_TYPE2(Human, Nomad), nID,
		_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+1), Life(+1)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CVigilantSentryCard::CreateAdditionalAbility)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CVigilantSentryCard::CreateAdditionalAbility(CCard* pCard)
{
	counted_ptr<CActivatedAbility<CTargetChgPwrTghAttrSpell>> cpAbility(
	::CreateObject<CActivatedAbility<CTargetChgPwrTghAttrSpell>>(this,
		_T(""),	// No mana cost
		Power(+3), Life(+3),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable,
		new AttackingBlockingCreatureComparer));
		
	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CGenesisCard::CGenesisCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Genesis"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("4") GREEN_MANA_TEXT, Power(4), Life(4))
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->GetTargeting().SetIncludeControllerCardsOnly();
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

	cpAbility->SetResolutionCost(_T("2") GREEN_MANA_TEXT);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGenesisCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGenesisCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

	AddAbility(cpAbility.GetPointer());
}

bool CGenesisCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

bool CGenesisCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	return (GetZone()->GetZoneId() == ZoneId::Graveyard);
}

//____________________________________________________________________________
//
CGuiltfeederCard::CGuiltfeederCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Guiltfeeder"), CardType::Creature, CREATURE_TYPE(Horror), nID,
		_T("3") BLACK_MANA_TEXT BLACK_MANA_TEXT, Power(0), Life(4))
{
	GetCreatureKeyword()->AddFear(FALSE);
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		NodeId::DeclareBlockersStep2));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->GetLifeModifier().SetLifeDelta(Life(-1)); //change bool "BeforeResolution" for life gain or life lost
	cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CGuiltfeederCard::BeforeResolution));
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGuiltfeederCard::SetTriggerContext));

	AddAbility(cpAbility.GetPointer());
}

bool CGuiltfeederCard::BeforeResolution(CGuiltfeederCard::TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(
		m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Graveyard)->GetSize()));

	pAction->SetTriggerContext(triggerContext);

	return true;
}

bool CGuiltfeederCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
												 CNode* pToNode) const
{
	return (IsAttacking() == TRUE && IsBlocked() == FALSE);
}

//____________________________________________________________________________
//
CSilverSeraphCard::CSilverSeraphCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Silver Seraph"), CardType::Creature, CREATURE_TYPE(Angel), nID,
		_T("5") WHITE_MANA_TEXT WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(6), Life(6))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new SpecificCardComparer(this)), // Not this card
				Power(+2), Life(+2)));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
/* 	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback,
				&CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverSeraphCard::SetTriggerContext1));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(+2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);
		
		cpAbility->GetLifeModifier().SetLifeDelta(Life(+2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetToControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverSeraphCard::SetTriggerContext2));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Graveyard, ZoneId::_AllZones));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->GetTrigger().SetFromControllerOnly(true);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverSeraphCard::SetTriggerContext3));
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfInplay, 
								 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));
		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-2));
		cpAbility->GetPowerModifier().SetOneTurnOnly(FALSE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-2));
		cpAbility->GetLifeModifier().SetOneTurnOnly(FALSE);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSilverSeraphCard::SetTriggerContext1));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSilverSeraphCard::BeforeResolution1));	
		cpAbility->SetSkipStack(true);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSilverSeraphCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false;
}

bool CSilverSeraphCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 7)
			return true;
	}

	return false;
}

bool CSilverSeraphCard::SetTriggerContext3(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() == 6)
			return true;
	}

	return false;
}

bool CSilverSeraphCard::BeforeResolution1(TriggeredAbility1::TriggeredActionType* pAction)
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	{
		if (pSurvey->GetSize() >= 7)
			return true;
	}

	return false; */
}

//____________________________________________________________________________
//
CWormfangDrakeCard::CWormfangDrakeCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wormfang Drake"), CardType::Creature, CREATURE_TYPE2(Nightmare, Drake), nID,
		_T("2") BLUE_MANA_TEXT, Power(3), Life(4))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer); 
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this)); // not this card

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		cpAbility->GetOptionalModifier().CCardModifiers::push_back(
				new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Sacrifice));
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::OptionalTrick);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
}

//___________________________________________________________________________________
//
CWormfangNewtCard::CWormfangNewtCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wormfang Newt"), CardType::Creature, CREATURE_TYPE3(Nightmare, Salamander, Beast), nID,
		_T("1") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); // only lands

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
}

//___________________________________________________________________________________
//
CWormfangTurtleCard::CWormfangTurtleCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wormfang Turtle"), CardType::Creature, CREATURE_TYPE3(Nightmare, Turtle, Beast), nID,
		_T("2") BLUE_MANA_TEXT, Power(2), Life(4))
{
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetGatherer().SetDefaultCharacteristic(Characteristic::Negative);
		cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new CardTypeComparer(CardType::_Land, false)); // only lands

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
}

//___________________________________________________________________________________
//
CGrizzlyFateCard::CGrizzlyFateCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grizzly Fate"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("3") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Bear B"), 2996,
				0));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrizzlyFateCard::BeforeResolution));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTokenProductionSpell> cpSpell(
			::CreateObject<CTokenProductionSpell>(this, AbilityType::Sorcery,
				_T("5") GREEN_MANA_TEXT GREEN_MANA_TEXT,
				_T("Bear"), TOKEN_ID_BY_NAME,
				0));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGrizzlyFateCard::BeforeResolution));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CGrizzlyFateCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = GetController()->GetZoneById(ZoneId::Graveyard);

	int n = 2;
	if (pSurvey->GetSize()>6) n=4;

	ContextValue Context(pAction->GetValue());
	Context.nValue1 = n;
	pAction->SetValue(Context);	

	return true;
}

//____________________________________________________________________________
//
CCommanderEeshaCard::CCommanderEeshaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Commander Eesha"), CardType::_LegendaryCreature, CREATURE_TYPE2(Bird, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(2), Life(4))
{
	GetCardKeyword()->AddSpecialProtection(FALSE, CCardFilter::GetFilter(_T("creatures")));
}

//____________________________________________________________________________
//
CTelekineticBondsCard::CTelekineticBondsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Telekinetic Bonds"), CardType::GlobalEnchantment, nID,
		_T("2") BLUE_MANA_TEXT BLUE_MANA_TEXT BLUE_MANA_TEXT, AbilityType::Enchantment)
{
	typedef
		TTriggeredTargetAbility< CTriggeredTapCardAbility, CWhenCardDiscarded > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->SetResolutionCost(_T("1") BLUE_MANA_TEXT);

	cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::TapUntapSingleCard);

	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CExoskeletalArmorCard::CExoskeletalArmorCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Exoskeletal Armor"), CardType::EnchantCreature, nID)
{
	counted_ptr<CCreatureAbilityEnchant> cpSpell(
		::CreateObject<CCreatureAbilityEnchant>(this,
			_T("1") GREEN_MANA_TEXT,
			CAbilityEnchant::CreateAbilityCallback(this,
				&CExoskeletalArmorCard::CreateEnchantAbility),
			CAbilityEnchant::AdditionType::ToEnchantCard,
			CAbilityEnchant::PostEnchantCallback(this,
				&CExoskeletalArmorCard::PostEnchant)));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddSpell(cpSpell.GetPointer());
}

counted_ptr<CAbility> CExoskeletalArmorCard::CreateEnchantAbility(CCard* pEnchantedCard, CCard* pEnchantCard, ContextValue_& contextValue)
{
	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpEnchantAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(pEnchantCard, ZoneId::Graveyard,
			new AnyCreatureComparer, (CCreatureCard*)pEnchantedCard));

	cpEnchantAbility->SetListenToAllPlayersZones();

	return counted_ptr<CAbility>(cpEnchantAbility.GetPointer());
}

void CExoskeletalArmorCard::PostEnchant(CAbility* pAbility)
{
	((CTriggeredChgPwrTghWhenCardPlayedAbility*)pAbility)->StartListening(pAbility->GetCard()->GetZone()->GetPlayer());
}

//____________________________________________________________________________
//
CAnuridBrushhopperCard::CAnuridBrushhopperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anurid Brushhopper"), CardType::Creature, CREATURE_TYPE2(Frog, Beast), nID,
		_T("1") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(4))
	, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CAnuridBrushhopperCard::OnResolutionCompleted1))
{
	counted_ptr<CActivatedAbility<CGlobalMoveCardSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGlobalMoveCardSpell>>(this,
			_T(""),
			new SpecificCardComparer(this),
			ZoneId::Exile, TRUE, MoveType::Others));
	ATLASSERT(cpAbility);

	cpAbility->GetCost().AddDiscardCardCost(2, CCardFilter::GetFilter(_T("cards")));

	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

void CAnuridBrushhopperCard::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CCountedCardContainer pSubjects;
	if (GetZoneId() == ZoneId::Exile)
		pSubjects.AddCard(this, CardPlacement::Top);

	CContainerEffectModifier pModifier = CContainerEffectModifier(GetGame(), _T("End Step Return from Exile Effect"), 61057, &pSubjects);
	pModifier.ApplyTo(pAbilityAction->GetController());
}

//____________________________________________________________________________
//
CWormfangMantaCard::CWormfangMantaCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wormfang Manta"), CardType::Creature, CREATURE_TYPE3(Nightmare, Fish, Beast), nID,
		_T("5") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(6), Life(1))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

		cpAbility->GetTriggeredPlayerModifiers().push_back(new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
								CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->GetTriggeredPlayerModifiers().push_back(new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFuneralPyreCard::CFuneralPyreCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Funeral Pyre"), CardType::Instant, nID)
{
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeControllerCardsOnly();
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Spirit H"), 2942, 1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		counted_ptr<CTargetMoveCardSpell> cpSpell(
			::CreateObject<CTargetMoveCardSpell>(this, AbilityType::Instant,
				WHITE_MANA_TEXT,
				new TrueCardComparer,
				ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others));

		cpSpell->GetTargeting()->SetIncludeNonControllerCardsOnly();
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Spirit H"), 2942, 1, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
//"Anger\n{3R}\nCreature - Incarnation\nJUD,U\nHaste\rAs long as Anger is in your graveyard and you control a Mountain, creatures you control have haste.\n2/2"
//CAngerCard::CAngerCard(CGame* pGame, UINT nID)
//	: CHasteCreatureCard(pGame, _T("Anger"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
//		_T("3") RED_MANA_TEXT, Power(2), Life(2))
//{
//	m_CardFilter.AddComparer(new CardTypeComparer(CardType::Mountain, false));
//
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(
//			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
//		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
//
//		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
//		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngerCard::SetTriggerContext1));
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//		cpAbility->SetSkipStack(TRUE);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(
//			::CreateObject<TriggeredAbility>(this, ZoneId::_AllZones, ZoneId::Graveyard));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
//		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
//
//		cpAbility->GetCreatureKeywordMod().GetModifier().SetToAdd(CreatureKeyword::Haste);
//		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//
//		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
//		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
//		cpAbility->GetTrigger().SetReportInPlayChanges(TRUE);
//
//		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAngerCard::SetTriggerContext2));
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//		cpAbility->SetSkipStack(TRUE);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//	{
//		typedef
//			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;
//
//		counted_ptr<TriggeredAbility> cpAbility(
//			::CreateObject<TriggeredAbility>(this, ZoneId::Graveyard, ZoneId::_AllZones));
//
//		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
//
//		cpAbility->SetModifyCreatureOption(TriggeredAbility::ModifyCreatureOption::ModifyTriggeredPlayersCreatures);
//		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
//
//		cpAbility->GetCreatureKeywordMod().GetModifier().SetToRemove(CreatureKeyword::Haste);
//		cpAbility->GetCreatureKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
//
//		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
//		cpAbility->SetSkipStack(TRUE);
//
//		AddAbility(cpAbility.GetPointer());
//	}
//}
//
//bool CAngerCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//									CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
//{
//	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
//
//	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
//		return true;
//
//	return false;
//}
//
//bool CAngerCard::SetTriggerContext2(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
//										  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer) const
//{
//	CZone* pInplay = GetController()->GetZoneById(ZoneId::Battlefield);
//
//	if (m_CardFilter.CountIncluded(pInplay->GetCardContainer()) > 0)
//		return true;
//
//	return false;
//}
//
////____________________________________________________________________________
////
CCabalTherapyCard::CCabalTherapyCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cabal Therapy"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetPlayerDiscardCardNameSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardNameSpell>(this, AbilityType::Sorcery,
				BLACK_MANA_TEXT,
				ZoneId::Graveyard, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetPlayerDiscardCardNameSpell> cpSpell(
			::CreateObject<CTargetPlayerDiscardCardNameSpell>(this, AbilityType::Sorcery,
				_T(""),
				ZoneId::Graveyard, TRUE));

		cpSpell->GetCost().AddSacrificeCardCost(1,CCardFilter::GetFilter(_T("creatures")));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CPhantomCentaurCard::CPhantomCentaurCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Centaur"), CardType::Creature, CREATURE_TYPE2(Centaur, Spirit), nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, Power(2), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomCentaurCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomCentaurCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomCentaurCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomCentaurCard::BeforeResolution(CPhantomCentaurCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CPhantomFlockCard::CPhantomFlockCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Phantom Flock"), CardType::Creature, CREATURE_TYPE3(Bird, Soldier, Spirit), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 3, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomFlockCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomFlockCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomFlockCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomFlockCard::BeforeResolution(CPhantomFlockCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CPhantomNantukoCard::CPhantomNantukoCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Nantuko"), CardType::Creature, CREATURE_TYPE2(Insect, Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomNantukoCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomNantukoCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("")));

		cpAbility->AddTapCost();

		cpAbility->SetAbilityText(_T("Put a +1/+1 counter on"));

		cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CCardCounterModifier(_T("+1/+1"), +1, false));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomNantukoCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomNantukoCard::BeforeResolution(CPhantomNantukoCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CPhantomNishobaCard::CPhantomNishobaCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Nishoba"), CardType::Creature, CREATURE_TYPE3(Cat, Beast, Spirit), nID,
		_T("5") GREEN_MANA_TEXT WHITE_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 7, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomNishobaCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomNishobaCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
								CWhenSelfDamageDealt::DamageEventCallback, 
								&CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomNishobaCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomNishobaCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomNishobaCard::BeforeResolution(CPhantomNishobaCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

bool CPhantomNishobaCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CPhantomNomadCard::CPhantomNomadCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Nomad"), CardType::Creature, CREATURE_TYPE2(Spirit, Nomad), nID,
		_T("1") WHITE_MANA_TEXT, Power(0), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomNomadCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomNomadCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomNomadCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomNomadCard::BeforeResolution(CPhantomNomadCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CPhantomTigerCard::CPhantomTigerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Phantom Tiger"), CardType::Creature, CREATURE_TYPE2(Cat, Spirit), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(0))
{
	GetCreatureKeyword()->AddFullReplacedDamage(FALSE);
	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 2, true, ZoneId::_AllZones, ZoneId::Battlefield, false);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CBeforeDamageDealt,
								CBeforeDamageDealt::CreatureEventCallback, 
								&CBeforeDamageDealt::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().GetToCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetToCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPhantomTigerCard::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CPhantomTigerCard::BeforeResolution));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetAbilityName(_T("Hidden. Self damage replacement"));

		cpAbility->SetReplacementEffect(TRUE);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CPhantomTigerCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CCard*, CCreatureCard*, Damage damage, int effect_index) const
{
	return (effect_index==1);
}

bool CPhantomTigerCard::BeforeResolution(CPhantomTigerCard::TriggeredAbility::TriggeredActionType* pAction)
{
	CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), -1, false);

	pModifier.ApplyTo(this);

	return true;
}

//____________________________________________________________________________
//
CFlaringPainCard::CFlaringPainCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flaring Pain"), CardType::Instant, nID)
{
	{
		//Regular mana cost
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				_T("1") RED_MANA_TEXT,
				PlayerEffectType::CantPreventDamage, TRUE));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CPlayerEffectSpell> cpSpell(
			::CreateObject<CPlayerEffectSpell>(this, AbilityType::Instant,
				RED_MANA_TEXT,
				PlayerEffectType::CantPreventDamage, TRUE));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

//____________________________________________________________________________
//
CKrosanVergeCard::CKrosanVergeCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Krosan Verge"), nID)
{
	SetIntoPlayTapped();

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
				CCardFilter::GetFilter(_T("Plains")), 
				ZoneId::Battlefield, FALSE, TRUE, TRUE));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetAbilityText(_T("Search your library for a Forest card and a Plains card. Activates"));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CKrosanVergeCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CKrosanVergeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(GetController(),
		MinimumValue(0), MaximumValue(1),
		GetController(), ZoneId::Library,
		CCardFilter::GetFilter(_T("Forests")),
		ZoneId::Battlefield, FALSE, CardPlacement::Top, TRUE, TRUE);

	pModifier.ApplyTo(GetController());

	return true;
}

//____________________________________________________________________________
//
CNantukoTracerCard::CNantukoTracerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Nantuko Tracer"), CardType::Creature, CREATURE_TYPE2(Insect, Druid), nID,
		_T("1") GREEN_MANA_TEXT, Power(2), Life(1))
{
	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfInplay,
								 CWhenSelfInplay::EventCallback,
								 &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);
	cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Graveyard);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
	cpAbility->GetMoveCardModifier().SetToTop(FALSE);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Library));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CWorldgorgerDragonCard::CWorldgorgerDragonCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Worldgorger Dragon"), CardType::Creature, CREATURE_TYPE2(Nightmare, Dragon), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT RED_MANA_TEXT, Power(7), Life(7))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
}

//____________________________________________________________________________
//
CWormfangBehemothCard::CWormfangBehemothCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wormfang Behemoth"), CardType::Creature, CREATURE_TYPE3(Nightmare, Fish, Beast), nID,
		_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT, Power(5), Life(5))
{
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToController);

		cpAbility->SetMoveCardOption(CTriggeredMoveCardAbility::MoveCardOption::MoveMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWormfangCrabCard::CWormfangCrabCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Wormfang Crab"), CardType::Creature, CREATURE_TYPE2(Nightmare, Crab), nID,
		_T("3") BLUE_MANA_TEXT, Power(3), Life(6))
{
	GetCreatureKeyword()->AddUnblockable(FALSE);

	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
		
		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddNegateComparer(new SpecificCardComparer(this));
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		m_CardFlagModifier1.GetModifier().SetOneTurnOnly(FALSE);
		m_CardFlagModifier1.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier1.GetModifier().SetAdditionData(cpAbility->GetInstanceID());
		cpAbility->GetMoveCardModifier().LinkCardModifier(&m_CardFlagModifier1); // link card flag modifier with the move card modifier; when a card is moved, the card will be flagged also

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
	{
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
}

//___________________________________________________________________________________
//
CKeepWatchCard::CKeepWatchCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Keep Watch"), CardType::Instant, nID)
{
	counted_ptr<CDrawCardSpell2> cpSpell(
		::CreateObject<CDrawCardSpell2>(this, AbilityType::Instant,
			_T("2") BLUE_MANA_TEXT,
			ZoneId::Battlefield, TRUE, TRUE));

	cpSpell->GetSurveyCardFilter().AddComparer(new AttackingCreatureComparer);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CKrosanReclamationCard::CKrosanReclamationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Krosan Reclamation"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
					&CKrosanReclamationCard::OnResolutionCompleted))
{
	{
		//Regular mana cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT));

			ATLASSERT(cpAbility);

			cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericTargetPlayerSpell> cpSpell(
			::CreateObject<CGenericTargetPlayerSpell>(this, AbilityType::Instant,
				_T("1") GREEN_MANA_TEXT));

			ATLASSERT(cpAbility);

		cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

void CKrosanReclamationCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
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
		pmodifier2.AddSelection(MinimumValue(1), MaximumValue(2), // select cards to reorder
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
CQuietSpeculationCard::CQuietSpeculationCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Quiet Speculation"), CardType::Sorcery, nID)
	, m_CardFilter(new CardAbilityNameComparer(_T("Flashback")))
{
	counted_ptr<CTargetPlayerSearchLibraryCardSpell> cpSpell(
		::CreateObject<CTargetPlayerSearchLibraryCardSpell>(this, AbilityType::Sorcery,
			_T("1") BLUE_MANA_TEXT,
			MinimumValue(0), MaximumValue(3),
			&m_CardFilter));

	cpSpell->GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);

	cpSpell->SetSearchLibraryData(ZoneId::Graveyard, TRUE, TRUE, FALSE, TRUE);

	AddSpell(cpSpell.GetPointer());
}

//____________________________________________________________________________
//
CAngerCard::CAngerCard(CGame* pGame, UINT nID)
	: CHasteCreatureCard(pGame, _T("Anger"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetAffectControllerCardsOnly();	
		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Mountain,false));
		cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CBrawnCard::CBrawnCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Brawn"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("3") GREEN_MANA_TEXT, Power(3), Life(3))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Trample));

		cpAbility->SetAffectControllerCardsOnly();	
		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Forest,false));
		cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFilthCard::CFilthCard(CGame* pGame, UINT nID)
	: CLandwalkCreatureCard(pGame, _T("Filth"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2), CreatureKeyword::Swampwalk)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Swampwalk));

		cpAbility->SetAffectControllerCardsOnly();	
		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Swamp,false));
		cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWonderCard::CWonderCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Wonder"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("3") BLUE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Flying));

		cpAbility->SetAffectControllerCardsOnly();	
		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Island,false));
		cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CValorCard::CValorCard(CGame* pGame, UINT nID)
	: CFirstStrikeCreatureCard(pGame, _T("Valor"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("3") WHITE_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::FirstStrike));

		cpAbility->SetAffectControllerCardsOnly();	
		cpAbility->SetConditionWork();
		cpAbility->GetConditionFilter().AddComparer(new CardTypeComparer(CardType::Plains,false));
		cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CMirarisWakeCard::CMirarisWakeCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Mirari's Wake"), CardType::GlobalEnchantment, nID, 
		_T("3") GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();	
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSpecialProdManaAbility, CWhenTappedForMana > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));
	
		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
		cpAbility->SetSkipStack(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMirarisWakeCard::SetTriggerContext));

		m_pTriggeredAbility = cpAbility.GetPointer();
		AddAbility(m_pTriggeredAbility);
	}
}
bool CMirarisWakeCard::SetTriggerContext(CTriggeredSpecialProdManaAbility::TriggerContextType& triggerContext,
											const CManaProductionAbilityAction* pManaAction) const
{
	bool activate = false;

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Colorless))
	{m_pTriggeredAbility->SetProduceColorless(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceColorless(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Red))
		{m_pTriggeredAbility->SetProduceRed(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceRed(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Green))
		{m_pTriggeredAbility->SetProduceGreen(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceGreen(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Blue))
		{m_pTriggeredAbility->SetProduceBlue(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlue(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::Black))
		{m_pTriggeredAbility->SetProduceBlack(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceBlack(FALSE);

	if (m_pTriggeredAbility->GetTrigger().GetManaPool(pManaAction).GetMana(CManaPool::Color::White))
		{m_pTriggeredAbility->SetProduceWhite(TRUE); activate=true;}
	else m_pTriggeredAbility->SetProduceWhite(FALSE);

	return activate;
}
//____________________________________________________________________________
//
CBurningWishCard::CBurningWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Burning Wish"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") RED_MANA_TEXT));
		
		CZoneModifier* pmodifier2 = new CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			CCardFilter::GetFilter(_T("sorcery cards")), // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier2);

		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CCunningWishCard::CCunningWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Cunning Wish"), CardType::Instant, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Instant,
				_T("2") BLUE_MANA_TEXT));
		
		CZoneModifier* pmodifier2 = new CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			CCardFilter::GetFilter(_T("instant cards")), // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier2);

		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CGoldenWishCard::CGoldenWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Golden Wish"), CardType::Sorcery, nID)
{
	{
		
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT));
		
		CZoneModifier* pmodifier2 = new CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			CCardFilter::GetFilter(_T("artifacts or enchantments")), // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier2);

		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CDeathWishCard::CDeathWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Death Wish"), CardType::Sorcery, nID)
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") BLACK_MANA_TEXT BLACK_MANA_TEXT));
		
		CZoneModifier* pmodifier2 = new CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			CCardFilter::GetFilter(_T("artifacts or enchantments")), // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier2);
		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(SpecialNumber::DivideBy2RoundUp), this, PreventableType::NotPreventable, DamageType::NotDealingDamage));

		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//	
CLivingWishCard::CLivingWishCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Living Wish"), CardType::Sorcery, nID)
	, m_CardFilter(new CardTypeComparer(CardType::Creature | CardType::_Land, false))
{
	{
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				_T("1") GREEN_MANA_TEXT));
		
		CZoneModifier* pmodifier2 = new CZoneModifier(GetGame(), ZoneId::_Sideboard, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pmodifier2->AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&m_CardFilter, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		cpSpell->GetResolutionModifier().CPlayerModifiers::push_back(pmodifier2);
		
		cpSpell->SetToZoneIfSuccess(ZoneId::Exile, TRUE);

		AddSpell(cpSpell.GetPointer());
	}
}
//____________________________________________________________________________
//
CVenomousVinesCard::CVenomousVinesCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Venomous Vines"), CardType::Sorcery, nID,
		_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT, AbilityType::Sorcery,
		new EnchantedCardComparer,
		ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy)
{
}

//____________________________________________________________________________
//
CFirecatBlitzCard::CFirecatBlitzCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Firecat Blitz"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->GetCost().SetExtraManaCost();
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFirecatBlitzCard::BeforeResolution1));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CGenericSpell> cpSpell(
			::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
				RED_MANA_TEXT RED_MANA_TEXT));

		cpSpell->GetCost().AddSacrificeCardCost(SpecialNumber::Any, CCardFilter::GetFilter(_T("Mountains")));
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFirecatBlitzCard::BeforeResolution2));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CFirecatBlitzCard::BeforeResolution1(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetExtraValue();

	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Elemental Cat"), 2937, nValue, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

bool CFirecatBlitzCard::BeforeResolution2(CAbilityAction* pAction) const
{
	int nValue = pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize();
	
	CCountedCardContainer pTokens;

	CTokenCreationModifier pModifier1 = CTokenCreationModifier(GetGame(), _T("Elemental Cat"), 2937, nValue, false, ZoneId::Battlefield, &pTokens);
	pModifier1.ApplyTo(pAction->GetController());

	CContainerEffectModifier pModifier2 = CContainerEffectModifier(GetGame(), _T("End Step Exile Effect"), 61061, &pTokens);
	pModifier2.ApplyTo(pAction->GetController());

	return true;
}

//____________________________________________________________________________
//
CFlashOfInsightCard::CFlashOfInsightCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Flash of Insight"), CardType::Instant, nID)
	, m_CardFilter(new CardTypeComparer(CardType::Blue, false))
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	{
		//Regular mana cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				0));

		cpSpell->GetCost().SetExtraManaCost();

		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetRevealCardsToOthers(
			TRUE,	// reveal cards to others
			TRUE);	// reveal only selected cards

		cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("cards")));

		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CRevealLibraryCardSpell> cpSpell(
			::CreateObject<CRevealLibraryCardSpell>(this, AbilityType::Instant,
				_T("1") BLUE_MANA_TEXT,
				0));

		cpSpell->GetCost().AddExileGraveyardCardCost(SpecialNumber::Any, &m_CardFilter);

		cpSpell->SetReorder(TRUE, ZoneId::Library, CardPlacement::Bottom);
		cpSpell->SetRevealCardsToOthers(
			TRUE,	// reveal cards to others
			TRUE);	// reveal only selected cards

		cpSpell->SetSelectionOptions(MinimumValue(1), MaximumValue(1), ZoneId::Hand, CardPlacement::NotApplicable, CCardFilter::GetFilter(_T("cards")));

		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFlashOfInsightCard::BeforeResolution));

		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CFlashOfInsightCard::BeforeResolution(CAbilityAction* pAction) const
{
	ContextValue Context(pAction->GetValue());

	Context.nValue1 = pAction->GetCostConfigEntry().GetExileGraveyardCards()->GetSize();

	pAction->SetValue(Context);

	return true;
}

//____________________________________________________________________________
//
CElephantGuideCard::CElephantGuideCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Elephant Guide"), nID,
		_T("2") GREEN_MANA_TEXT,
		Power(+3), Life(+3))
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Graveyard, TRUE, FALSE));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new EnchantedByComparer(this));

	cpAbility->SetCreateTokenOption(TRUE, _T("Elephant B"), 2748, 1);
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTreacherousWerewolfCard::CTreacherousWerewolfCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Treacherous Werewolf"), CardType::Creature, CREATURE_TYPE2(Werewolf, Minion), nID,
		_T("2") BLACK_MANA_TEXT, Power(2), Life(2))
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
    {
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetLifeModifier().SetLifeDelta(Life(-4));
        cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
        cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

        cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTreacherousWerewolfCard::SetTriggerContext));

        AddAbility(cpAbility.GetPointer());
    }
}

bool CTreacherousWerewolfCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() >= 7);
}

//____________________________________________________________________________
//
CInfectiousRageCard::CInfectiousRageCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrEnchantCard(pGame, _T("Infectious Rage"), nID,
		_T("1") RED_MANA_TEXT,
		Power(+2), Life(-1))
	, m_CardFilter(new EnchantableComparer(this))
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
			&CInfectiousRageCard::OnResolutionCompleted))
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
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CInfectiousRageCard::BeforeResolution));
	cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

bool CInfectiousRageCard::BeforeResolution(CAbilityAction* pAction) const
{
	int nValid = 0;

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		nValid += m_CardFilter.CountIncluded(GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	return nValid > 0;
}

void CInfectiousRageCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	if (!bResult) return;

	CCountedCardContainer cards;
	CZone* pZone;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		pZone = GetGame()->GetPlayer(ip)->GetZoneById(ZoneId::Battlefield);
		m_CardFilter.GetIncluded(*pZone, cards);
	}

	if (!cards.GetSize()) return;
	cards.Shuffle(pAbilityAction->GetController());
	CCard* pCard = cards.GetAt(0);

	for (int i = 0; i < this->GetSpells().GetSize(); ++i)
	{
		CEnchant* pEnchantSpell = dynamic_cast<CEnchant*>(this->GetSpells().GetAt(i));
		if (!pEnchantSpell) continue;
		pEnchantSpell->Enchant(pCard, GetController(), this->GetSpells().GetAt(i)->GetActionValue());
	}
}

//____________________________________________________________________________
//
CStitchTogetherCard::CStitchTogetherCard(CGame* pGame, UINT nID)
	: CTargetMoveCardSpellCard(pGame, _T("Stitch Together"), CardType::Sorcery, nID,
		BLACK_MANA_TEXT BLACK_MANA_TEXT, AbilityType::Sorcery,
		new AnyCreatureComparer,
		ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others)
{
	m_pTargetMoveCardSpell->GetTargeting()->SetIncludeControllerCardsOnly();
	m_pTargetMoveCardSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CStitchTogetherCard::BeforeResolution));
}

bool CStitchTogetherCard::BeforeResolution(CAbilityAction* pAction) const
{
	if (pAction->GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() < 7)
		return true;

	CTargetSpellAction* pTargetAction = dynamic_cast<CTargetSpellAction*>(pAction);

	const CCard* pCard = pTargetAction->GetTargetGroup().GetFirstCardSubject();
	ContextValue context = pTargetAction->GetTargetGroup().GetValue(pCard);
	context.nValue2 = reinterpret_cast<int>(pAction->GetController()->GetZoneById(ZoneId::Battlefield));

	pTargetAction->GetTargetGroup().SetValue(pCard, context);

	return true;
}

//____________________________________________________________________________
//
CRiftstonePortalCard::CRiftstonePortalCard(CGame* pGame, UINT nID)
	: CNonbasicLandCard(pGame, _T("Riftstone Portal"), nID)
{
	{
		counted_ptr<CManaProductionAbility> cpNonbasicLandManaAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));

		cpNonbasicLandManaAbility->AddTapCost();

		AddAbility(cpNonbasicLandManaAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::_Land, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::Graveyard);

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CRiftstonePortalCard::CreateAbility1)));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CRiftstonePortalCard::CreateAbility2)));

		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CRiftstonePortalCard::CreateAbility1(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, WHITE_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

counted_ptr<CAbility> CRiftstonePortalCard::CreateAbility2(CCard* pCard)
{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

	cpAbility->AddTapCost();

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CAnuridSwarmsnapperCard::CAnuridSwarmsnapperCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Anurid Swarmsnapper"), CardType::Creature, CREATURE_TYPE2(Frog, Beast), nID,
		_T("2") GREEN_MANA_TEXT, Power(1), Life(4))
{
	GetCreatureKeyword()->AddReach(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("1") GREEN_MANA_TEXT));

		cpAbility->GetResolutionModifier().CCreatureModifiers::Add(new CCreatureCanBlockAdditionModifier);
		
		AddAbility(cpAbility.GetPointer());
	}
}
//____________________________________________________________________________
//
CHuntingGroundsCard::CHuntingGroundsCard(CGame* pGame, UINT nID)
	: CInPlaySpellCard(pGame, _T("Hunting Grounds"), CardType::GlobalEnchantment, nID, 
		GREEN_MANA_TEXT WHITE_MANA_TEXT, AbilityType::Enchantment)
{
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetOtherCardModifiers().Add(new CCardAbilityModifier(CCardAbilityModifier::CreateAbilityCallback(this,
				&CHuntingGroundsCard::CreateAdditionalAbility)));
		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
}

counted_ptr<CAbility> CHuntingGroundsCard::CreateAdditionalAbility(CCard* pCard)
{
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);

	cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new TrueCardComparer);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

	cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
	cpAbility->GetMoveCardModifier().SetToOwnersZone(FALSE);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
	
	AddAbility(cpAbility.GetPointer());

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CLightningSurgeCard::CLightningSurgeCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Lightning Surge"), CardType::Sorcery, nID)
{
	{
		//Regular mana cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("3") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLightningSurgeCard::BeforeResolution));
		AddSpell(cpSpell.GetPointer());
	}
	{
		//Flashback cost
		counted_ptr<CTargetChgLifeSpell> cpSpell(
			::CreateObject<CTargetChgLifeSpell>(this, AbilityType::Sorcery,
				_T("5") RED_MANA_TEXT RED_MANA_TEXT,
				new AnyCreatureComparer,
				TRUE,
				Life(-4), PreventableType::Preventable));
		
		cpSpell->SetAbilityName(_T("Flashback"));
		cpSpell->SetAbilityText(_T("Flashback. Casts"));

		cpSpell->SetGraveyardOnly();

		cpSpell->SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
		cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CLightningSurgeCard::BeforeResolution));

		cpSpell->SetMainSpell(FALSE);
		AddSpell(cpSpell.GetPointer());
	}
}

bool CLightningSurgeCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7)
	{
		CLifeModifier* pModifier = new CLifeModifier(Life(-6), this, PreventableType::NotPreventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

		CCard* tCreature = pAction->GetAssociatedCard();
		CPlayer* tPlayer = pAction->GetAssociatedPlayer();

		if (tCreature) pModifier->ApplyTo((CCreatureCard*)tCreature);
		if (tPlayer) pModifier->ApplyTo(tPlayer);
		return false;
	}
	return true;
}
//____________________________________________________________________________
//
CSwirlingSandstormCard::CSwirlingSandstormCard(CGame* pGame, UINT nID)
	: CGlobalChgLifeSpellCard(pGame, _T("Swirling Sandstorm"), CardType::Sorcery, nID, AbilityType::Sorcery,
		_T("3") RED_MANA_TEXT,
		Life(-5),	// life delta
		new AnyCreatureComparer, FALSE,
		PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
{
	m_pGlobalChgLifeSpell->GetGlobalCardFilter().AddNegateComparer(
		new CreatureKeywordComparer(CreatureKeyword::Flying, false));
	m_pGlobalChgLifeSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSwirlingSandstormCard::BeforeResolution));
}

bool CSwirlingSandstormCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7) return true;
	else return false;
}
//____________________________________________________________________________
//
CToxicStenchCard::CToxicStenchCard(CGame* pGame, UINT nID)
	: CChgPwrTghAttrSpellCard(pGame, _T("Toxic Stench"), CardType::Instant, nID, AbilityType::Instant,
		_T("1") BLACK_MANA_TEXT,
		Power(-1), Life(-1),
		CreatureKeyword::Null, CreatureKeyword::Null,
		TRUE, PreventableType::NotPreventable)
{
	m_pTargetChgPwrTghAttrSpell->GetTargeting()->GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Black, false));
	m_pTargetChgPwrTghAttrSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CToxicStenchCard::BeforeResolution));
}

bool CToxicStenchCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZone* pSurvey = pAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7)
	{
		CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration);
		modifier.ApplyTo(pAction->GetAssociatedCard());

		return false;
	}
	else return true;
}
//____________________________________________________________________________
//
CAvenWarcraftCard::CAvenWarcraftCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Aven Warcraft"), CardType::Instant, nID)
	, m_cpEventListener(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
				&CAvenWarcraftCard::OnResolutionCompleted))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CAvenWarcraftCard::OnColorSelected))
{
	counted_ptr<CGlobalChgPwrTghSpell> cpSpell(
		::CreateObject<CGlobalChgPwrTghSpell>(this, AbilityType::Instant,
			_T("2") WHITE_MANA_TEXT,
			Power(+0), Life(+2),
			new AnyCreatureComparer));

	cpSpell->SetAffectControllerCardsOnly();

	cpSpell->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener.GetPointer());

	AddSpell(cpSpell.GetPointer());
}

void CAvenWarcraftCard::OnResolutionCompleted(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CZone* pSurvey = pAbilityAction->GetController()->GetZoneById(ZoneId::Graveyard);
	if (pSurvey->GetSize() >= 7)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("white"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("blue"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 3;
			selectionEntry.strText.Format(_T("black"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 4;
			selectionEntry.strText.Format(_T("red"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 5;
			selectionEntry.strText.Format(_T("green"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
	
		if (bResult) m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
}

void CAvenWarcraftCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	CCountedCardContainer cards;
	CCardFilter m_CardFilter = CCardFilter(_T("a creature"), _T("creatures"), new AnyCreatureComparer);
	
	CZone* pFromZone;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}
		}
	
}
//____________________________________________________________________________
//
CGloryCard::CGloryCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Glory"), CardType::Creature, CREATURE_TYPE(Incarnation), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT, Power(3), Life(3))
	, m_ColorSelection(pGame,CSelectionSupport::SelectionCallback(this, &CGloryCard::OnColorSelected))
{
	counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CGenericSpell>>(this,
			_T("2") WHITE_MANA_TEXT));

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGloryCard::BeforeResolution));

	cpAbility->SetPlayableFrom(ZoneId::Graveyard);

	AddAbility(cpAbility.GetPointer());
}

bool CGloryCard::BeforeResolution(CAbilityAction* pAction)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("white"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("blue"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 3;
		selectionEntry.strText.Format(_T("black"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 4;
		selectionEntry.strText.Format(_T("red"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 5;
		selectionEntry.strText.Format(_T("green"), this->GetCardName());

		entries.push_back(selectionEntry);
	}
	
	m_ColorSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return true;
}

void CGloryCard::OnColorSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	CCountedCardContainer cards;
	CCardFilter m_CardFilter = CCardFilter(_T("a creature"), _T("creatures"), new AnyCreatureComparer);
	
	CZone* pFromZone;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromWhite);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlue);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 3)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromBlack);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 4)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromRed);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}

			if ((int)it->dwContext == 5)
			{
				CCardKeywordModifier* modifier = new CCardKeywordModifier;
				modifier->GetModifier().SetToAdd(CardKeyword::ProtectionFromGreen);
				modifier->GetModifier().SetOneTurnOnly(TRUE);

				pFromZone = pSelectionPlayer->GetZoneById(ZoneId::Battlefield);
				m_CardFilter.GetIncluded(*pFromZone, cards);

				for (int ic = 0; ic < cards.GetSize(); ++ic)
					modifier->ApplyTo(cards.GetAt(ic));
				
				return;
			}
		}
	
}
//____________________________________________________________________________
//
CBookBurningCard::CBookBurningCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Book Burning"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBookBurningCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBookBurningCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBookBurningCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	bSomeonePaid = 0;
	PunisherFunction(pActivePlayerID, pTarget);

	return true;
}

void CBookBurningCard::PunisherFunction(int PlayerID, CPlayer* pTarget)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't take damage"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Take 6 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pTarget);
}

void CBookBurningCard::Advance(int PlayerID, CPlayer* pTarget)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer, pTarget);
	else if (bSomeonePaid == 0)
	{
		CZoneModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(6), MaximumValue(6));		
		pModifier.GetSelection(0).nMinSelectionCount = MinimumValue(0);
		pModifier.GetSelection(0).nMaxSelectionCount = MaximumValue(0);
		pModifier.GetSelection(0).moveType = MoveType::Others;
		pModifier.AddSelection(MinimumValue(6), MaximumValue(6), // select cards to graveyard
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			NULL, // any cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on top
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

		pModifier.ApplyTo(pTarget);
	}
}

void CBookBurningCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s takes 6 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-6), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				bSomeonePaid = 1;
				Advance(dwContext1, (CPlayer*)dwContext2);
				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CBreakingPointCard::CBreakingPointCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Breaking Point"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBreakingPointCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Sorcery,
			_T("1") RED_MANA_TEXT RED_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBreakingPointCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBreakingPointCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	bSomeonePaid = 0;
	PunisherFunction(pActivePlayerID);

	return true;
}

void CBreakingPointCard::PunisherFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't take damage"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Take 6 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID);
}

void CBreakingPointCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer);
	else if (bSomeonePaid == 0)
	{
		CCardFilter m_CardFilter;
		m_CardFilter.SetComparer(new AnyCreatureComparer);

		CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Battlefield, &m_CardFilter,
			std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::DestroyWithoutRegeneration)));

		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
			pModifier.ApplyTo(GetGame()->GetPlayer(ip));
	}
}

void CBreakingPointCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				Advance(dwContext1);
				
				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s takes 6 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-6), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);

				bSomeonePaid = 1;
				Advance(dwContext1);

				return;
			}
		}
}
//____________________________________________________________________________
//
CBrowbeatCard::CBrowbeatCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Browbeat"), CardType::Sorcery, nID)
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CBrowbeatCard::OnPunisherSelected))
	, bSomeonePaid(0)
{
	counted_ptr<CTargetSpell> cpSpell(
		::CreateObject<CTargetSpell>(this, AbilityType::Sorcery,
			_T("2") RED_MANA_TEXT,
			FALSE_CARD_COMPARER, true));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CBrowbeatCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CBrowbeatCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();
	CPlayer* pTarget = pAction->GetAssociatedPlayer();
	int pActivePlayerID;
	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	bSomeonePaid = 0;
	PunisherFunction(pActivePlayerID, pTarget);

	return true;
}

void CBrowbeatCard::PunisherFunction(int PlayerID, CPlayer* pTarget)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't take damage"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Take 5 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, PlayerID, (DWORD)pTarget);
}

void CBrowbeatCard::Advance(int PlayerID, CPlayer* pTarget)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		PunisherFunction(NextPlayer, pTarget);
	else if (bSomeonePaid == 0)
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(3), MaximumValue(3));

		pModifier.ApplyTo(pTarget);
	}
}

void CBrowbeatCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
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
					strMessage.Format(_T("%s takes 5 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-5), this, PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);

				bSomeonePaid = 1;
				Advance(dwContext1, (CPlayer*)dwContext2);

				return;
			}
		}
}

//____________________________________________________________________________
//
CDwarvenDrillerCard::CDwarvenDrillerCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Driller"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		_T("3") RED_MANA_TEXT, Power(2), Life(2))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDwarvenDrillerCard::OnPunisherSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new CardTypeComparer(CardType::_Land, false), false));

	cpAbility->AddTapCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenDrillerCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CDwarvenDrillerCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't take damage"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Take 2 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTarget);
	return true;
}

void CDwarvenDrillerCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, true, MoveType::Destroy);
				
				pModifier.ApplyTo((CCard*)dwContext1);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s takes 2 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}
//____________________________________________________________________________
//
CDwarvenScorcherCard::CDwarvenScorcherCard(CGame* pGame, UINT nID)
	: CCreatureCard(pGame, _T("Dwarven Scorcher"), CardType::Creature, CREATURE_TYPE(Dwarf), nID,
		RED_MANA_TEXT, Power(1), Life(1))
	, m_PunisherSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDwarvenScorcherCard::OnPunisherSelected))
{
	counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(
		::CreateObject<CActivatedAbility<CTargetSpell>>(this,
			_T(""),
			new AnyCreatureComparer, false));

	cpAbility->AddSacrificeCost();

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDwarvenScorcherCard::BeforeResolution));
	AddAbility(cpAbility.GetPointer());
}

bool CDwarvenScorcherCard::BeforeResolution(CAbilityAction* pAction)
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pPlayer = pTarget->GetController();
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't take damage"));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Take 2 damage"));

		entries.push_back(selectionEntry);
	}
	m_PunisherSelection.AddSelectionRequest(entries, 1, 1, NULL, pPlayer, (DWORD)pTarget);
	return true;
}

void CDwarvenScorcherCard::OnPunisherSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s doesn't take damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-1), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo((CCreatureCard*)dwContext1);

				return;
			}
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s takes 2 damage"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-2), this, PreventableType::Preventable, DamageType::AbilityDamage | DamageType::NonCombatDamage);

				pModifier.ApplyTo(pSelectionPlayer);
				
				return;
			}
		}
}

//____________________________________________________________________________
//
CGraveConsequencesCard::CGraveConsequencesCard(CGame* pGame, UINT nID)
	: CCard(pGame, _T("Grave Consequences"), CardType::Instant, nID)
{
	counted_ptr<CGenericSpell> cpSpell(
		::CreateObject<CGenericSpell>(this, AbilityType::Instant,
			_T("1") BLACK_MANA_TEXT));

	cpSpell->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGraveConsequencesCard::BeforeResolution));

	AddSpell(cpSpell.GetPointer());
}

bool CGraveConsequencesCard::BeforeResolution(CAbilityAction* pAction)
{
	int pActivePlayerID;
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		if (pActivePlayer == GetGame()->GetPlayer(ip))
		{
			pActivePlayerID = ip;
			break;
		}

	ExileFunction(pActivePlayerID);
	
	return true;
}

void CGraveConsequencesCard::ExileFunction(int PlayerID)
{
	CPlayer* pPlayer = GetGame()->GetPlayer(PlayerID);
	CCardFilter temp;
	temp.AddComparer(new TrueCardComparer);

	int GraveCount = pPlayer->GetZoneById(ZoneId::Graveyard)->GetSize();

	CZoneModifier pModifier1 = CZoneModifier(GetGame(), ZoneId::Graveyard, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier1.AddSelection(MinimumValue(0), MaximumValue(GraveCount), // select cards to reorder
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::PrimaryPlayer, // reveal to
		&temp, // what cards
		ZoneId::Exile, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on 
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier1.ApplyTo(pPlayer);
	
	Advance(PlayerID);
}

void CGraveConsequencesCard::Advance(int PlayerID)
{
	int NextPlayer = PlayerID + 1;
	int PlayerCount = GetGame()->GetPlayerCount();
	CPlayer* pActivePlayer = GetGame()->GetActivePlayer();

	if (NextPlayer >= PlayerCount)
		NextPlayer -= PlayerCount;
	if (GetGame()->GetPlayer(NextPlayer) != pActivePlayer)
		ExileFunction(NextPlayer);
	else
	{
		for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
		{
			CPlayer* pPlayer = GetGame()->GetPlayer(ip);
			int GraveCount = pPlayer->GetZoneById(ZoneId::Graveyard)->GetSize();
			CLifeModifier pModifier1 = CLifeModifier(Life(-GraveCount), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

			pModifier1.ApplyTo(pPlayer);
		}

		CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pModifier2.ApplyTo(GetController());
	}
}

//____________________________________________________________________________
//
CSoulgorgerOrggCard::CSoulgorgerOrggCard(CGame* pGame, UINT nID)
	:  CCreatureCard(pGame, _T("Soulgorger Orgg"), CardType::Creature, CREATURE_TYPE2(Nightmare, Orgg), nID,
		_T("3") RED_MANA_TEXT RED_MANA_TEXT, Power(6), Life(6))
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CSoulgorgerOrggCard::OnZoneChanged))
	, nLifeLost(0)
{
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());

	GetCreatureKeyword()->AddTrample(FALSE);
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetEnterEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoulgorgerOrggCard::BeforeResolution1));

		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility < CTriggeredAbility<>, CWhenSelfInplay, 
									 CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag::LifeGain);
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CSoulgorgerOrggCard::BeforeResolution2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSoulgorgerOrggCard::BeforeResolution1(CAbilityAction* pAction)
{
	pAffected = pAction->GetController();
	nLifeLost = 0;
	Life nLife = pAffected->GetLife();

	if (nLife > 1)
	{
		Life nToLose = nLife - 1;

		CLifeModifier pModifier = CLifeModifier(-nToLose, this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAffected);

		Life newLife = pAffected->GetLife();

		if (newLife < nLife)
			nLifeLost = GET_INTEGER(nLife - newLife);
	}

	return true;
}

bool CSoulgorgerOrggCard::BeforeResolution2(CAbilityAction* pAction)
{
	if (pAffected && (pAffected == pAction->GetController()) && nLifeLost > 0)
	{
		CLifeModifier pModifier = CLifeModifier(Life(+nLifeLost), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier.ApplyTo(pAffected);
	}

	return true;
}

void CSoulgorgerOrggCard::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone) return;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && moveType != MoveType::Phasing)
	{
		pAffected = NULL;
	}
}

//____________________________________________________________________________
//
CTreacherousVampireCard::CTreacherousVampireCard(CGame* pGame, UINT nID)
	: CFlyingCreatureCard(pGame, _T("Treacherous Vampire"), CardType::Creature, CREATURE_TYPE(Vampire), nID,
		_T("4") BLACK_MANA_TEXT, Power(4), Life(4))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CTreacherousVampireCard::OnCardSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfAttackedBlocked, 
										CWhenSelfAttackedBlocked::EventCallback, 
										&CWhenSelfAttackedBlocked::SetAttackingOrBlockingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Exile));

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CTreacherousVampireCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+2), Life(+2)));

		cpAbility->SetConditionWork();
		cpAbility->SetConditionCheckZone(ZoneId::Graveyard);
		cpAbility->SetConditionValue(7);
	
		AddAbility(cpAbility.GetPointer());
	}
    {
        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

        cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
        cpAbility->GetLifeModifier().SetLifeDelta(Life(-6));
        cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
        cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

        cpAbility->AddAbilityTag(AbilityTag::LifeLost);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTreacherousVampireCard::SetTriggerContext));

        AddAbility(cpAbility.GetPointer());
    }
}

bool CTreacherousVampireCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);
	
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Sacrifice %s"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pGraveyard->GetSize(); ++i)
	{
		CCard* pCard = pGraveyard->GetAt(i);

		SelectionEntry entry;

		entry.dwContext = (DWORD)pCard;
		entry.cpAssociatedCard = pCard;
									
		entry.strText.Format(_T("Exile %s"),
			pCard->GetCardName(TRUE));

		entries.push_back(entry);
	}
	m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);

	return true;
}

void CTreacherousVampireCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s sacrifices %s"), pSelectionPlayer->GetPlayerName(), GetCardName(TRUE));
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
					strMessage.Format(_T("%s exiles %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Exile, TRUE, MoveType::Others, pSelectionPlayer);

				pModifier.ApplyTo(pCard);
				
				return;
			}
		}
}

bool CTreacherousVampireCard::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, 
											CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (GetController()->GetZoneById(ZoneId::Graveyard)->GetSize() >= 7);
}

//____________________________________________________________________________
//