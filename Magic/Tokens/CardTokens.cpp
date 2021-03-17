#include "stdafx.h"
#include "CardTokens.h"

#define new DEBUG_NEW

#define DEFINE_TOKEN(T)	\
	if (!_tcsicmp(strTokenName, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		// Add new card class names here:
		DEFINE_TOKEN(CAngelIToken);
		DEFINE_TOKEN(CBeastMToken);
		DEFINE_TOKEN(CBeastNToken);
		DEFINE_TOKEN(CBirdIToken);
		DEFINE_TOKEN(CBirdJToken);
		DEFINE_TOKEN(CBirdKToken);
		DEFINE_TOKEN(CBlankAToken);
		DEFINE_TOKEN(CBlankBToken);
		DEFINE_TOKEN(CBlankCToken);
		DEFINE_TOKEN(CBlankDToken);
		DEFINE_TOKEN(CBlankEToken);
		DEFINE_TOKEN(CBlankFToken);
		DEFINE_TOKEN(CBlankGToken);
		DEFINE_TOKEN(CBlankHToken);
		DEFINE_TOKEN(CBlankIToken);
		DEFINE_TOKEN(CBlankJToken);
		DEFINE_TOKEN(CBlankKToken);
		DEFINE_TOKEN(CBlankLToken);
		DEFINE_TOKEN(CBoarBToken);
		DEFINE_TOKEN(CCatSoldierAToken);
		DEFINE_TOKEN(CCentaurDToken);
		DEFINE_TOKEN(CDragonGToken);
		DEFINE_TOKEN(CDragonSpiritToken);
		DEFINE_TOKEN(CEldraziToken);
		DEFINE_TOKEN(CElementalQToken);
		DEFINE_TOKEN(CElementalRToken);
		DEFINE_TOKEN(CElementalSToken);
		DEFINE_TOKEN(CElementalTToken);
		DEFINE_TOKEN(CElementalUToken);
		DEFINE_TOKEN(CElementalVToken);
		DEFINE_TOKEN(CElementalWToken);
		DEFINE_TOKEN(CGoblinGToken);
		DEFINE_TOKEN(CGoblinHToken);
		DEFINE_TOKEN(CGoblinIToken);
		DEFINE_TOKEN(CGoblinJToken);
		DEFINE_TOKEN(CGoblinKToken);
		DEFINE_TOKEN(CGoblinLToken);
		DEFINE_TOKEN(CGoblinMToken);
		DEFINE_TOKEN(CGoblinSoldierBToken);
		DEFINE_TOKEN(CGolemEToken);
		DEFINE_TOKEN(CHarpyToken);
		DEFINE_TOKEN(CHippoBToken);
		DEFINE_TOKEN(CHorrorCToken);
		DEFINE_TOKEN(CHumanCToken);
		DEFINE_TOKEN(CInsectGToken);
		DEFINE_TOKEN(CInsectHToken);
		DEFINE_TOKEN(CKithkinSoldierBToken);
		DEFINE_TOKEN(CKrakenAToken);
		DEFINE_TOKEN(CLizardToken);
		DEFINE_TOKEN(CMinionAToken);
		DEFINE_TOKEN(CMinionBToken);
		DEFINE_TOKEN(CMinotaurAToken);
		DEFINE_TOKEN(CMyrBToken);
		DEFINE_TOKEN(CMyrCToken);
		DEFINE_TOKEN(COozeFToken);
		DEFINE_TOKEN(COrbToken);
		DEFINE_TOKEN(CPegasusCToken);
		DEFINE_TOKEN(CReflectionBToken);
		DEFINE_TOKEN(CSandWarriorToken);
		DEFINE_TOKEN(CSaprolingIToken);
		DEFINE_TOKEN(CSaprolingJToken);
		DEFINE_TOKEN(CSaprolingKToken);
		DEFINE_TOKEN(CSaprolingLToken);
		DEFINE_TOKEN(CSaprolingMToken);
		DEFINE_TOKEN(CSaprolingNToken);
		DEFINE_TOKEN(CSatyrToken);
		DEFINE_TOKEN(CSkeletonBToken);
		DEFINE_TOKEN(CSliverCToken);
		DEFINE_TOKEN(CSnakeGToken);
		DEFINE_TOKEN(CSoldierNToken);
		DEFINE_TOKEN(CSoldierOToken);
		DEFINE_TOKEN(CSoldierPToken);
		DEFINE_TOKEN(CSoldierQToken);
		DEFINE_TOKEN(CTetraviteToken);
		DEFINE_TOKEN(CTwinToken);
		DEFINE_TOKEN(CWallBToken);
		DEFINE_TOKEN(CWolfIToken);
		DEFINE_TOKEN(CWolfJToken);
		DEFINE_TOKEN(CZombieNToken);
		DEFINE_TOKEN(CZombieOToken);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here

void CTokenCreature::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::Battlefield && !this->GetCardType().IsToken())
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//
CSaprolingIToken::CSaprolingIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// 10TH version; used by Verdant Force
}

//____________________________________________________________________________
//
CSaprolingJToken::CSaprolingJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ALA version; Jund Battlemage, Mycoloth, Necrogenesis, Sprouting Thrinax, Spore Burst, Tukatongue Thallid, Morbid Bloom, Roots of All Evil, Ghave, Guru of Spores
}

//____________________________________________________________________________
//
CSaprolingKToken::CSaprolingKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// M12 version; used by Druidic Satchel, Jade Mage, Dreampod Druid
// Future use: Grand Ossuary
}

//____________________________________________________________________________
//
CSaprolingLToken::CSaprolingLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// M13 version; used by Fungal Sprouting
}

//____________________________________________________________________________
//
CSaprolingMToken::CSaprolingMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// RTR version; used by Korozda Guildmage
}

//____________________________________________________________________________
//
CReflectionBToken::CReflectionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Reflection"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Reflection), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Used by Pure Reflection
}

//____________________________________________________________________________
//
CSandWarriorToken::CSandWarriorToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sand Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Sand, Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::Green | CardType::White, CardType::_ColorMask);

// Used by Pure Reflection
}

//____________________________________________________________________________
//
CPegasusCToken::CPegasusCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Pegasus"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Pegasus), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// TSP version; used by Sacred Mesa
}

//____________________________________________________________________________
//
CMyrBToken::CMyrBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Myr"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Myr), nID,
		_T(""),
		Power(1), Life(1))
{
// SOM version; used by Myr Battlesphere, Myrsmith, Origin Spellbomb, Master's Call, Myr Sire, Myr Turbine
}

//____________________________________________________________________________
//
CMyrCToken::CMyrCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Myr"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Myr), nID,
		_T(""),
		Power(1), Life(1))
{
// NPH version; used by Parasitic Implant, Shrine of Loyal Legions
}

//____________________________________________________________________________
//
CKithkinSoldierBToken::CKithkinSoldierBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kithkin Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// SHM version; used by Repel Intruders, Cenn's Enlistment, Gwyllion Hedge-Mage, Patrol Signaler
}

//____________________________________________________________________________
//
CInsectGToken::CInsectGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ONS version; used by Broodhatch Nantuko, Symbiotic Beast, Symbiotic Elf, Symbiotic Wurm, Vitality Charm, Wirewood Hivemaster
}

//____________________________________________________________________________
//
CInsectHToken::CInsectHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// MRD version; used by Living Hive, One Dozen Eyes, Infested Roothold, Beacon of Creation
}

//____________________________________________________________________________
//
CHumanCToken::CHumanCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Human"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Human), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// AVR version; used by Commander's Authority, Voice of the Provinces
}

//____________________________________________________________________________
//
CHippoBToken::CHippoBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hippo"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hippo), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// PLS version; used by Questing Phelddagrif
}

//____________________________________________________________________________
//
CElementalQToken::CElementalQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	
// Used by Evil Comes to Fruition
}

//____________________________________________________________________________
//
CEldraziToken::CEldraziToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Eldrazi), nID,
		_T(""),
		Power(7), Life(7))
{
	//Annihilator 1 (Whenever this creature attacks, defending player sacrifices X permanents.)
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetSubjectCount(1, 1, true);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());

// Used by Hedron Fields of Agadeem
}

//____________________________________________________________________________
//
COozeFToken::COozeFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ROE version; used by Gelatinous Genesis
}

//____________________________________________________________________________
//
CGoblinGToken::CGoblinGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// STH version; used by Mogg Infestation
}

//____________________________________________________________________________
//
CGoblinHToken::CGoblinHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// RAV version; used by Hunted Phantasm
}

//____________________________________________________________________________
//
CGoblinIToken::CGoblinIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// TSP version; used by Empty the Warrens, Ib Halfheart, Goblin Tactician; Mogg War Marshal, Sarpadian Empires, Vol. VII
}

//____________________________________________________________________________
//
CGoblinJToken::CGoblinJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// M10 version; used by Siege-Gang Commander
}

//____________________________________________________________________________
//
CGoblinKToken::CGoblinKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// SOM version; used by Kuldotha Rebirth, Beetleback Chief
// Future use: Jund
}

//____________________________________________________________________________
//
CGoblinLToken::CGoblinLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// M13 version; used by Krenko's Command, Krenko, Mob Boss
}

//____________________________________________________________________________
//
CGoblinMToken::CGoblinMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// RTR version; used by Goblin Rally, Survey the Wreckage
}

//____________________________________________________________________________
//
CGoblinSoldierBToken::CGoblinSoldierBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Goblin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::White, CardType::_ColorMask);

// APC version; used by Goblin Trenches
}

//____________________________________________________________________________
//
COrbToken::COrbToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Orb"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Orb), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Phantasmal Sphere
}

//____________________________________________________________________________
//
CHorrorCToken::CHorrorCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Horror"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Horror), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Phyrexian Rebirth
}

//____________________________________________________________________________
//
CMinionAToken::CMinionAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Minion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minion), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Phyrexian Processor
}

//____________________________________________________________________________
//
CMinionBToken::CMinionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Minion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minion), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Infernal Genesis
}

//____________________________________________________________________________
//
CLizardToken::CLizardToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Lizard"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minion), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Predatory Advantage
}

//____________________________________________________________________________
//
CTetraviteToken::CTetraviteToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Tetravite"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Tetravite), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddCantBeEnchanted(FALSE);

// Used by Tetravus
}

//____________________________________________________________________________
//
CBlankAToken::CBlankAToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	strVariableName = _T("Blank A");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankBToken::CBlankBToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	strVariableName = _T("Blank B");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankCToken::CBlankCToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	strVariableName = _T("Blank C");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankDToken::CBlankDToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	strVariableName = _T("Blank D");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankEToken::CBlankEToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	strVariableName = _T("Blank E");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankFToken::CBlankFToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	strVariableName = _T("Blank F");

// Used by Volrath's Laboratory in case no color is selected
}

//____________________________________________________________________________
//
CBlankGToken::CBlankGToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	strVariableName = _T("Blank G");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankHToken::CBlankHToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	strVariableName = _T("Blank H");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankIToken::CBlankIToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	strVariableName = _T("Blank I");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankJToken::CBlankJToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	strVariableName = _T("Blank J");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankKToken::CBlankKToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	strVariableName = _T("Blank K");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankLToken::CBlankLToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	strVariableName = _T("Blank L");

// Used by Riptide Replicator in case no color is selected
}

//____________________________________________________________________________
//
CSkeletonBToken::CSkeletonBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Skeleton"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Skeleton), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				BLACK_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}

// ALA version; used by Skeletonize
}

//____________________________________________________________________________
//
CDragonSpiritToken::CDragonSpiritToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Dragon, Spirit), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Tatsumasa, the Dragon's Fang
}

//____________________________________________________________________________
//
CWallBToken::CWallBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wall"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);

// Used by Basalt Golem
}

//____________________________________________________________________________
//
CTwinToken::CTwinToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Twin"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Construct), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Gemini Engine
}

//____________________________________________________________________________
//
CElementalRToken::CElementalRToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());

// Used by Voice of Resurgence
}

//____________________________________________________________________________
//
CAngelIToken::CAngelIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// M14 version; used by Angelic Accord and Devout Invocation
}

//____________________________________________________________________________
//
CSliverCToken::CSliverCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sliver"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sliver), nID,
		_T(""),
		Power(1), Life(1))
{
// M14 version; used by Hive Stirrings
}

//____________________________________________________________________________
//
CElementalSToken::CElementalSToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// M14 version; used by Molten Birth, Young Pyromancer
}

//____________________________________________________________________________
//
CBeastMToken::CBeastMToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// M14 version; used by Primeval Bounty
}

//____________________________________________________________________________
//
CSaprolingNToken::CSaprolingNToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// M14 version: used by Sporemound
}

//____________________________________________________________________________
//
CDragonGToken::CDragonGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			RED_MANA_TEXT,
			Power(+1), Life(+0)));
	ATLASSERT(cpAbility);

	AddAbility(cpAbility.GetPointer());

// M14 version: used by Dragon Egg
}

//____________________________________________________________________________
//
CWolfIToken::CWolfIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// M14 version: used by Howl of the Night Pack
}

//____________________________________________________________________________
//
CElementalTToken::CElementalTToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// M14 version: used by Molten Birth
}

//____________________________________________________________________________
//
CHarpyToken::CHarpyToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Harpy"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Harpy), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// THS version: used by Abhorrent Overloard
}

//____________________________________________________________________________
//
CElementalUToken::CElementalUToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(1), Life(0))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// THS version: used by Master of Waves
}

//____________________________________________________________________________
//
CSoldierNToken::CSoldierNToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// THS version: used by Akroan Crusader
}

//____________________________________________________________________________
//
CSoldierOToken::CSoldierOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// THS version: used by Akroan Horse
}

//____________________________________________________________________________
//
CSoldierPToken::CSoldierPToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// THS version: used by Elspeth, Sun's Champion; Evangel of Heliod
}

//____________________________________________________________________________
//
CGolemEToken::CGolemEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::GlobalEnchantment| CardType::Artifact | CardType::Creature | CardType::Token,
		CREATURE_TYPE(Golem), nID,
		_T(""),
		Power(3), Life(3))
{

// THS version: used by Hammer of Purphoros
}

//____________________________________________________________________________
//
CBoarBToken::CBoarBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Boar"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Boar), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// THS version: used by Curse of the Swine
}

//____________________________________________________________________________
//
CBirdIToken::CBirdIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// THS version: used by Swan Song
}

//____________________________________________________________________________
//
CSatyrToken::CSatyrToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Satyr"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Satyr), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);
	GetCreatureKeyword()->AddHaste(FALSE);
// THS version: used by Xenagos, the Reveler
}

//____________________________________________________________________________
//
CSnakeGToken::CSnakeGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCardKeyword()->AddDeathtouch(FALSE);
// C13 version: used by Ophiomancer
}

//____________________________________________________________________________
//
CElementalVToken::CElementalVToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddHaste(FALSE);
// C13 version: used by Tempt With Vengeance
}

//____________________________________________________________________________
//
CBeastNToken::CBeastNToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(5), Life(5))
{
    AddCardType(CardType::Green, CardType::_ColorMask);
	GetCreatureKeyword()->AddTrample(FALSE);
// C13 version: used by Spawning Grounds
}

//____________________________________________________________________________
//
CCatSoldierAToken::CCatSoldierAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Cat, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddVigilance(FALSE);
// BNG version: used by Vanguard of Brimaz
}

//____________________________________________________________________________
//
CSoldierQToken::CSoldierQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// BNG version: used by God-Favored General 
}

//____________________________________________________________________________
//
CBirdJToken::CBirdJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// BNG version: used by Aerie Worshippers 
}

//____________________________________________________________________________
//
CZombieNToken::CZombieNToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// BNG version: used by Forlorn Pseudamma 
}

//____________________________________________________________________________
//
CElementalWToken::CElementalWToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddHaste(FALSE);
// BNG version: used by Satyr Nyx-Smith 
}

//____________________________________________________________________________
//
CCentaurDToken::CCentaurDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Centaur"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Centaur), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// BNG version: used by Pheres-Band Raiders 
}

//____________________________________________________________________________
//
CWolfJToken::CWolfJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// BNG version: used by Raised by Wolves
}

//____________________________________________________________________________
//
CKrakenAToken::CKrakenAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kraken"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Kraken), nID,
		_T(""),
		Power(9), Life(9))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
// BNG version: used by Kiora, the Crashing Wave
}

//____________________________________________________________________________
//
CBirdKToken::CBirdKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// BNG version: used by Aerie Worshippers, Ornitharch
}

//____________________________________________________________________________
//
CZombieOToken::CZombieOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// JOU version: used by Ritual of the Returned
}

//____________________________________________________________________________
//
CMinotaurAToken::CMinotaurAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Minotaur"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minotaur), nID,
		_T(""),
		Power(2), Life(3))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddHaste(FALSE);
// JOU version: used by Flurry of Horns
}

//____________________________________________________________________________
//
