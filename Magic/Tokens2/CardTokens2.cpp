#include "stdafx.h"
#include "CardTokens2.h"

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
		DEFINE_TOKEN(CAngelJToken);
		DEFINE_TOKEN(CAngelKToken);
		DEFINE_TOKEN(CAshayaTheAwokenWorldToken);
		DEFINE_TOKEN(CBearCToken);
		DEFINE_TOKEN(CBeastOToken);
		DEFINE_TOKEN(CBeastPToken);
		DEFINE_TOKEN(CBirdLToken);
		DEFINE_TOKEN(CCatFToken);
		DEFINE_TOKEN(CClericBToken);
		DEFINE_TOKEN(CConstructAToken);
		DEFINE_TOKEN(CDemonDToken);
		DEFINE_TOKEN(CDemonEToken);
		DEFINE_TOKEN(CDjinnMonkAToken);
		DEFINE_TOKEN(CDragonHToken);
		DEFINE_TOKEN(CDragonIToken);
		DEFINE_TOKEN(CDragonJToken);
		DEFINE_TOKEN(CEldraziAToken);
		DEFINE_TOKEN(CEldraziScionAToken);
		DEFINE_TOKEN(CEldraziScionBToken);
		DEFINE_TOKEN(CEldraziScionCToken);
		DEFINE_TOKEN(CEldraziScionDToken);
		DEFINE_TOKEN(CEldraziScionEToken);
		DEFINE_TOKEN(CEldraziScionFToken);
		DEFINE_TOKEN(CElementalXToken);
		DEFINE_TOKEN(CElementalYToken);
		DEFINE_TOKEN(CElementalZToken);
		DEFINE_TOKEN(CElementalZAToken);
		DEFINE_TOKEN(CElementalZBToken);
		DEFINE_TOKEN(CElephantEToken);
		DEFINE_TOKEN(CElfWarriorDToken);
		DEFINE_TOKEN(CGoblinNToken);
		DEFINE_TOKEN(CGoblinOToken);
		DEFINE_TOKEN(CGoblinPToken);
		DEFINE_TOKEN(CGoblinQToken);
		DEFINE_TOKEN(CHydraAToken);
		DEFINE_TOKEN(CInsectIToken);
		DEFINE_TOKEN(CKnightAllyAToken);
		DEFINE_TOKEN(CKorAllyAToken);
		DEFINE_TOKEN(CKnightEToken);
		DEFINE_TOKEN(CMonkAToken);
		DEFINE_TOKEN(COctopusAToken);
		DEFINE_TOKEN(COgreAToken);
		DEFINE_TOKEN(CPlantBToken);
		DEFINE_TOKEN(CPlantCToken);
		DEFINE_TOKEN(CSliverDToken);
		DEFINE_TOKEN(CSnakeHToken);
		DEFINE_TOKEN(CSnakeIToken);
		DEFINE_TOKEN(CSoldierRToken);
		DEFINE_TOKEN(CSoldierSToken);
		DEFINE_TOKEN(CSphinxAToken);
		DEFINE_TOKEN(CSpiderDToken);
		DEFINE_TOKEN(CSpiritOToken);
		DEFINE_TOKEN(CSpiritPToken);
		DEFINE_TOKEN(CSpiritQToken);
		DEFINE_TOKEN(CSpiritRToken);
		DEFINE_TOKEN(CSpiritWarriorAToken);
		DEFINE_TOKEN(CSquidAToken);
		DEFINE_TOKEN(CSquirrelEToken);
		DEFINE_TOKEN(CThopterDToken);
		DEFINE_TOKEN(CThopterEToken);
		DEFINE_TOKEN(CTreefolkWarriorAToken)
		DEFINE_TOKEN(CVampireDToken);
		DEFINE_TOKEN(CWarriorAToken);
		DEFINE_TOKEN(CWarriorBToken);
		DEFINE_TOKEN(CWarriorCToken);
		DEFINE_TOKEN(CWarriorDToken);
		DEFINE_TOKEN(CWolfKToken);
		DEFINE_TOKEN(CZombieHorrorAToken);
		DEFINE_TOKEN(CZombiePToken);
		DEFINE_TOKEN(CZombieQToken);
		DEFINE_TOKEN(CZombieRToken);
		DEFINE_TOKEN(CZombieSToken);
		DEFINE_TOKEN(CZombieTToken);
		DEFINE_TOKEN(CZombieUToken);
	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
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
CSnakeHToken::CSnakeHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);
	GetCardKeyword()->AddDeathtouch(FALSE);
// JOU version: used by Pharika, God of Affliction
}

//____________________________________________________________________________
//
CSphinxAToken::CSphinxAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sphinx"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sphinx), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// JOU version: used by Hour of Need 
}

//____________________________________________________________________________
//
CSpiderDToken::CSpiderDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spider"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Spider), nID,
		_T(""),
		Power(1), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	GetCreatureKeyword()->AddReach(FALSE);
// JOU version: used by Renowned Weaver
}

//____________________________________________________________________________
//
CHydraAToken::CHydraAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hydra"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hydra), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// JOU version: used by Hydra Broodmaster
}

//____________________________________________________________________________
//
CConstructAToken::CConstructAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Construct), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->Defender();
// CNS version: used by Flamewright
}

//____________________________________________________________________________
//
CWolfKToken::CWolfKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// CNS version: used by Predator's Howl
}

//____________________________________________________________________________
//
CSquirrelEToken::CSquirrelEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Squirrel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Squirrel), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// CNS version: used by Squirrel Nest
}

//____________________________________________________________________________
//
CElephantEToken::CElephantEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elephant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elephant), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// CNS version: used by Selvala's Charge, Terastodon
}

//____________________________________________________________________________
//
COgreAToken::COgreAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ogre"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ogre), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
// CNS version: used by Grenzo's Rebuttal
}

//____________________________________________________________________________
//
CDemonDToken::CDemonDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// CNS version: used by Reign of the Pit
}

//____________________________________________________________________________
//
CSpiritOToken::CSpiritOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// CNS version: used by Custodi Soulbinders, Doomed Traveler
}

//____________________________________________________________________________
//
CZombiePToken::CZombiePToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// CNS version: used by Wakedancer
}

//____________________________________________________________________________
//
CBirdLToken::CBirdLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(3), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// KTK version: used by Wingmate Roc 
}

//____________________________________________________________________________
//
CSpiritPToken::CSpiritPToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// KTK version: used by Abzan Ascendancy
}

//____________________________________________________________________________
//
CWarriorAToken::CWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// KTK version: used by Herald of Anafenza, Mardu Charm,  Mardu Hordechief, Take Up Arms 
}

//____________________________________________________________________________
//
CWarriorBToken::CWarriorBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// KTK version: used by Herald of Anafenza, Mardu Charm,  Mardu Hordechief, Take Up Arms
}

//____________________________________________________________________________
//
CVampireDToken::CVampireDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Vampire"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Vampire), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// KTK version: used by Sorin, Solemn Visitor
}

//____________________________________________________________________________
//
CZombieQToken::CZombieQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// KTK version: used by Empty the Pits, Sidisi, Brood Tyrant
}

//____________________________________________________________________________
//
CBearCToken::CBearCToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Bear"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Bear), nID,
        _T(""),
        Power(4), Life(4))
{
    AddCardType(CardType::Green, CardType::_ColorMask);
// KTK version: used by Bear's Companion
}

//____________________________________________________________________________
//
CSnakeIToken::CSnakeIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// KTK version: used by Hooded Hydra, Rite of the Serpent
}

//____________________________________________________________________________
//
CGoblinNToken::CGoblinNToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
// KTK version: used by Goblinslide, Hordeling Outburst, Mardu Ascendancy, Ponyback Brigade
}

//____________________________________________________________________________
//
CSpiritWarriorAToken::CSpiritWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Spirit, Warrior), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green | CardType::Black, CardType::_ColorMask);
// KTK version: used by Kin-Tree Invocation
}

//____________________________________________________________________________
//
CSpiritQToken::CSpiritQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// FRF version: used by Sandsteppe Outcast
}

//____________________________________________________________________________
//
CWarriorCToken::CWarriorCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// FRF version: used by Mardu Strike Leader 
}

//____________________________________________________________________________
//
CMonkAToken::CMonkAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Monk"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	// prowess
	typedef
		TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSpellCast > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("non-creatures")));

	cpAbility->GetPowerModifier().SetPowerDelta(Power(+1));
	cpAbility->GetLifeModifier().SetLifeDelta(Life(+1));
	cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	AddAbility(cpAbility.GetPointer());
// FRF version: used by Monastery Mentor
}

//____________________________________________________________________________
//
CCatFToken::CCatFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cat), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// M14 version used by Ajani, Caller of the Pride and Ajani's Chosen
}

//____________________________________________________________________________
//
CClericBToken::CClericBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cleric"), CardType::Creature | CardType::GlobalEnchantment | CardType::Token,
		CREATURE_TYPE(Cleric), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// THS version: used by Heliod, God of the Sun 
}

//____________________________________________________________________________
//
CDragonHToken::CDragonHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// Dragons of Tarkir version: used by Descent of the Dragons, Dragon Whisperer and Sarkhan Unbroken.
}

//____________________________________________________________________________
//
CWarriorDToken::CWarriorDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// Dragons of Tarkir version: used by Secure the Wastes.
}

//____________________________________________________________________________
//
CDjinnMonkAToken::CDjinnMonkAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Djinn Monk"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Djinn, Monk), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// Dragons of Tarkir version: used by Ojutai's Summons and Skywise Teachings. 
}

//____________________________________________________________________________
//
CZombieRToken::CZombieRToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// Dragons of Tarkir version: used by Necromaster Dragon and Rakshasa Gravecaller.
}

//____________________________________________________________________________
//
CZombieHorrorAToken::CZombieHorrorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie Horror"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Zombie, Horror), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// Dragons of Tarkir version: used by Corpseweft.
}

//____________________________________________________________________________
//
CGoblinOToken::CGoblinOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
// Dragons of Tarkir version: used by Dragon Fodder.
}

//____________________________________________________________________________
//
CSliverDToken::CSliverDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sliver"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sliver), nID,
		_T(""),
		Power(1), Life(1))
{
// M15 version: used by Sliver Hive.
}

//____________________________________________________________________________
//
CSoldierRToken::CSoldierRToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// M15 version: used by First Response and Raise the Alarm.
}
//____________________________________________________________________________
//
CZombieSToken::CZombieSToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// M15 version: used by Necromancer's Stockpile and Waste Not. 
}

//____________________________________________________________________________
//
CGoblinPToken::CGoblinPToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddHaste(FALSE);
// M15 version: used by Goblin Rabblemaster.
}

//____________________________________________________________________________
//
CBeastOToken::CBeastOToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);
// M15 version: used by Feral Incarnation and Soul of Zendikar.
}

//____________________________________________________________________________
//
CBeastPToken::CBeastPToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Black, CardType::_ColorMask);
	GetCardKeyword()->AddDeathtouch(FALSE);
// M15 version: used by Garruk, Apex Predator.
}

//____________________________________________________________________________
//
CInsectIToken::CInsectIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);
// M15 version: used by Hornet Nest and Hornet Queen.
}

//____________________________________________________________________________
//
CSpiritRToken::CSpiritRToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// M15 version: used by Spirit Bonds and Triplicate Spirits.
}

//____________________________________________________________________________
//
CSquidAToken::CSquidAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Squid"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Islandwalk, FALSE);
// M15 version: used by Chasm Skulker and Coral Barrier.
}

//____________________________________________________________________________
//
CDragonIToken::CDragonIToken(CGame* pGame, UINT nID)
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
// M15 version: used by Brood Keeper.
}

//____________________________________________________________________________
//
CTreefolkWarriorAToken::CTreefolkWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Battlefield,
			new CardTypeComparer(CardType::Forest, false)));

	AddAbility(cpAbility.GetPointer());
// M15 version: used by Kalonian Twingrove.
}

//____________________________________________________________________________
//
CAshayaTheAwokenWorldToken::CAshayaTheAwokenWorldToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ashaya, the Awoken World"), CardType::_LegendaryCreature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// Origins version: used by Nissa, Sage Animist.
}

//____________________________________________________________________________
//
CAngelJToken::CAngelJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Origins version: used by Sigil of the Empty Throne.
}

//____________________________________________________________________________
//
CKnightEToken::CKnightEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Knight"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Knight), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddVigilance(FALSE);

// Origins version: used by Gideon's Phalanx and Knightly Valor.
}

//____________________________________________________________________________
//
CSoldierSToken::CSoldierSToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
// Origins version: used by Murder Investigation.
}
//____________________________________________________________________________
//
CDemonEToken::CDemonEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// Origins version: used by Priest of the Blood Rite.
}

//____________________________________________________________________________
//
CZombieTToken::CZombieTToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// Origins version: used by Undead Servant and Liliana, Heretical Healer.
}

//____________________________________________________________________________
//
CGoblinQToken::CGoblinQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
// Origins version: used by Dragon Fodder.
}

//____________________________________________________________________________
//
CElementalXToken::CElementalXToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// Origins version: used by Zendikar's Roil. 
}

//____________________________________________________________________________
//
CElfWarriorDToken::CElfWarriorDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elf Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elf, Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// Origins version: used by Dwynen's Elite. 
}

//____________________________________________________________________________
//
CThopterDToken::CThopterDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thopter"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Thopter), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Origins version: used by  Aspiring Aeronaut, Foundry of the Consuls, Ghirapur Gearcrafter, 
// Hangarback Walker, Pia and Kiran Nalaar, Thopter Engineer, Thopter Spy Network and Whirler Rogue. 
}

//____________________________________________________________________________
//
CThopterEToken::CThopterEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thopter"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Thopter), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Origins version: used by  Aspiring Aeronaut, Foundry of the Consuls, Ghirapur Gearcrafter, 
// Hangarback Walker, Pia and Kiran Nalaar, Thopter Engineer, Thopter Spy Network and Whirler Rogue. 
}

//____________________________________________________________________________
//
COctopusAToken::COctopusAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Octopus"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Octopus), nID,
		_T(""),
		Power(8), Life(8))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
// BFZ / OGW version: used by Kiora, Master of the Depths and Crush of Tentacles.
}

//____________________________________________________________________________
//
CEldraziScionAToken::CEldraziScionAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Scion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Scion), nID,
		_T(""),
		Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
// BFZ version: used by Adverse Conditions, Blight Herder, Blisterpod, Brood Butcher, Brood Monitor, 
// Call the Scions, Catacomb Sifter, Drowner of Hope, Eldrazi Skyspawner, Eyeless Watcher, From Beyond, 
// Grave Birthing, Incubator Drone, Spawning Bed and Void Attendant.
}

//____________________________________________________________________________
//
CEldraziScionBToken::CEldraziScionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Scion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Scion), nID,
		_T(""),
		Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
// BFZ version: used by Adverse Conditions, Blight Herder, Blisterpod, Brood Butcher, Brood Monitor, 
// Call the Scions, Catacomb Sifter, Drowner of Hope, Eldrazi Skyspawner, Eyeless Watcher, From Beyond, 
// Grave Birthing, Incubator Drone, Spawning Bed and Void Attendant.
}

//____________________________________________________________________________
//
CEldraziScionCToken::CEldraziScionCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Scion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Scion), nID,
		_T(""),
		Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
// BFZ version: used by Adverse Conditions, Blight Herder, Blisterpod, Brood Butcher, Brood Monitor, 
// Call the Scions, Catacomb Sifter, Drowner of Hope, Eldrazi Skyspawner, Eyeless Watcher, From Beyond, 
// Grave Birthing, Incubator Drone, Spawning Bed and Void Attendant.
}

//____________________________________________________________________________
//
CEldraziAToken::CEldraziAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Eldrazi), nID,
		_T(""),
		Power(10), Life(10))
{
// BFZ version: used by Desolation Twin. 
}

//____________________________________________________________________________
//
CKnightAllyAToken::CKnightAllyAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Knight Ally"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Knight, Ally), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// BFZ / OGW version: used by  Gideon, Ally of Zendikar and Allied Reinforcements.
}

//____________________________________________________________________________
//
CKorAllyAToken::CKorAllyAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kor Ally"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Kor, Ally), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// BFZ / OGW version: used by Retreat to Emeria, Unified Front, Captain's Claws and Oath of Gideon.
}

//____________________________________________________________________________
//
CDragonJToken::CDragonJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);
// BFZ version: used by Dragonmaster Outcast.
}

//____________________________________________________________________________
//
CElementalYToken::CElementalYToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);
// BFZ version: used by Akoum Stonewaker.
}

//____________________________________________________________________________
//
CPlantBToken::CPlantBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Plant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Plant), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// BFZ version: used by Grovetender Druids.
}

//____________________________________________________________________________
//
CElementalZToken::CElementalZToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);
// BFZ version: used by Omnath, Locus of Rage.
}

//____________________________________________________________________________
//
CPlantCToken::CPlantCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Plant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Plant), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// OGW version: used by Nissa, Voice of Zendikar.
}

//____________________________________________________________________________
//
CElementalZAToken::CElementalZAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
// OGW version: used by Seed Guardian.
}

//____________________________________________________________________________
//
CElementalZBToken::CElementalZBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	GetCreatureKeyword()->AddHaste(FALSE);
// OGW version: used by Chandra, Flamecaller.
}

//____________________________________________________________________________
//
CZombieUToken::CZombieUToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
// OGW version: used by Drana's Chosen, Kalitas, Traitor of Ghet and Null Caller.
}

//____________________________________________________________________________
//
CAngelKToken::CAngelKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// OGW version: used by Linvala, the Preserver.
}

//____________________________________________________________________________
//
CEldraziScionDToken::CEldraziScionDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Scion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Scion), nID,
		_T(""),
		Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
// OGW version: used by Abstruse Interference, Birthing Hulk, Scion Summoner, Sifter of Skulls, 
// Vile Redeemer and Warping Wail.
}

//____________________________________________________________________________
//
CEldraziScionEToken::CEldraziScionEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Scion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Scion), nID,
		_T(""),
		Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
// OGW version: used by Abstruse Interference, Birthing Hulk, Scion Summoner, Sifter of Skulls, 
// Vile Redeemer and Warping Wail.
}

//____________________________________________________________________________
//
CEldraziScionFToken::CEldraziScionFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Scion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Scion), nID,
		_T(""),
		Power(1), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
// OGW version: used by Abstruse Interference, Birthing Hulk, Scion Summoner, Sifter of Skulls, 
// Vile Redeemer and Warping Wail.
}

//____________________________________________________________________________
//
