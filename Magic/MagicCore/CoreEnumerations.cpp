#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CString CreatureKeyword::ToString(CreatureKeyword creatureKeyword)
{
	CString strText;

	if ((creatureKeyword & Monstrous).Any())
		strText += _T("monstrous, ");

	if ((creatureKeyword & CreatureKeyword::FirstStrike).Any())
		strText += _T("first strike, ");

	if ((creatureKeyword & CreatureKeyword::DoubleStrike).Any())
		strText += _T("double strike, ");


	if ((creatureKeyword & CreatureKeyword::Flying).Any())
		strText += _T("flying, ");

	if ((creatureKeyword & CreatureKeyword::Fear).Any())
		strText += _T("fear, ");

	if ((creatureKeyword & CreatureKeyword::Intimidate).Any())
		strText += _T("intimidate, ");

	if ((creatureKeyword & CreatureKeyword::Unleash).Any())
		strText += _T("unleash, ");

	if ((creatureKeyword & CreatureKeyword::Haste).Get() == CreatureKeyword::Haste)
		strText += _T("haste, ");
	else if ((creatureKeyword & CreatureKeyword::HasteCombat).Any())
		strText += _T("haste-like attack, ");
	else if ((creatureKeyword & CreatureKeyword::HasteTap).Any())
		strText += _T("haste-like activation, ");

	if ((creatureKeyword & CreatureKeyword::Unblockable).Any())
		strText += _T("unblockable, ");


	if ((creatureKeyword & CreatureKeyword::Reach).Any())
		strText += _T("reach, ");

	if ((creatureKeyword & CreatureKeyword::Vigilance).Any())
		strText += _T("vigilance, ");

	if ((creatureKeyword & CreatureKeyword::DefenderMayAttack).Any())
		strText += _T("can attack as though it didn't have defender, ");

	if ((creatureKeyword & CreatureKeyword::CantAttack).Any())
		strText += _T("can't attack, ");

	if ((creatureKeyword & CreatureKeyword::Defender).Any())
		strText += _T("defender, ");

	if ((creatureKeyword & CreatureKeyword::CantBlock).Any())
		strText += _T("can't block, ");

	if ((creatureKeyword & CreatureKeyword::CantBeBlockedByMultiple).Any())
		strText += _T("can't be blocked by more than one creature, ");

	if ((creatureKeyword & CreatureKeyword::CantBeBlockedBy1).Any())
		strText += _T("can't be blocked except by two or more creatures, ");

	if ((creatureKeyword & CreatureKeyword::CantBeBlockedBy1Or2).Any())
		strText += _T("can't be blocked except by three or more creatures, ");


	if ((creatureKeyword & CreatureKeyword::CanAssignCombatDamageToDefPlayer).Any())
		strText += _T("can assign its combat damage to defending player as though it weren't blocked, ");


	if ((creatureKeyword & CreatureKeyword::DealNoCombatDamage).Any())
		strText += _T("deal no combat damage, ");

	if ((creatureKeyword & CreatureKeyword::PreventAllCombatDamage).Any())
		strText += _T("prevent all combat damage, ");

	if ((creatureKeyword & CreatureKeyword::DealNoNoncombatDamage).Any())
		strText += _T("deal no non-combat damage, ");

	if ((creatureKeyword & CreatureKeyword::PreventAllNoncombatDamage).Any())
		strText += _T("prevent all non-combat damage, ");


	if ((creatureKeyword & CreatureKeyword::Trample).Any())
		strText += _T("trample, ");

	if ((creatureKeyword & CreatureKeyword::MustAttack).Any())
		strText += _T("attack each turn if able, ");

	if ((creatureKeyword & CreatureKeyword::CantRegenerate).Any())
		strText += _T("can't regenerate, ");


	if ((creatureKeyword & CreatureKeyword::Islandwalk).Any())
		strText += _T("islandwalk, ");

	if ((creatureKeyword & CreatureKeyword::Swampwalk).Any())
		strText += _T("swampwalk, ");

	if ((creatureKeyword & CreatureKeyword::Plainswalk).Any())
		strText += _T("plainswalk, ");

	if ((creatureKeyword & CreatureKeyword::Forestwalk).Any())
		strText += _T("forestwalk, ");

	if ((creatureKeyword & CreatureKeyword::Mountainwalk).Any())
		strText += _T("mountainwalk, ");

	if ((creatureKeyword & CreatureKeyword::NonBasicWalk).Any())
		strText += _T("special landwalk, ");

	if ((creatureKeyword & CreatureKeyword::OnlyBlockFlying).Any())
		strText += _T("can block only creatures with flying, ");


	if ((creatureKeyword & CreatureKeyword::Lure).Any())
		strText += _T("all creatures able to block this creature do so, ");


	if ((creatureKeyword & CreatureKeyword::CowardAttacker).Any())
		strText += _T("can't attack unless a creature with greater power also attacks, ");

	if ((creatureKeyword & CreatureKeyword::CowardBlocker).Any())
		strText += _T("can't block unless a creature with greater power also blocks, ");

	
	if ((creatureKeyword & CreatureKeyword::Shadow).Any())
		strText += _T("shadow, ");

	if ((creatureKeyword & CreatureKeyword::ShadowReach).Any())
		strText += _T("can block creatures with shadow as though they didn't have shadow, ");

	if ((creatureKeyword & CreatureKeyword::Horsemanship).Any())
		strText += _T("horsemanship, ");

	if ((creatureKeyword & CreatureKeyword::Flanking).Any())
		strText += _T("flanking, ");

	if ((creatureKeyword & CreatureKeyword::ReplacedDamage).Any())
		strText += _T("replaced damage, ");

	if ((creatureKeyword & CreatureKeyword::FullReplacedDamage).Any())
		strText += _T("full replaced damage, ");

	if ((creatureKeyword & CreatureKeyword::SwitchedPT).Any())
		strText += _T("switched power and toughness, ");

	if ((creatureKeyword & CreatureKeyword::Persist).Any())
		strText += _T("persist, ");

	if ((creatureKeyword & CreatureKeyword::TappedCanBlock).Any())
		strText += _T("can block as though it were untapped, ");

	if ((creatureKeyword & CreatureKeyword::Devour).Any())
		strText += _T("devour, ");

	if ((creatureKeyword & CreatureKeyword::Amplify).Any())
		strText += _T("amplify, ");

	if ((creatureKeyword & CreatureKeyword::Paired).Any())
		strText += _T("paired with a creature, ");

	if ((creatureKeyword & CreatureKeyword::Soulbond).Any())
		strText += _T("soulbond, ");

	if ((creatureKeyword & CreatureKeyword::MustAttackEachCombat).Any())
		strText += _T("attack each combat if able, ");

	if (!strText.IsEmpty())
		strText = strText.Left(strText.GetLength() - 2);


	return strText;
}

//____________________________________________________________________________
//
CString CardKeyword::ToString(CardKeyword cardKeyword)
{
	CString strText;

	if ((cardKeyword & NoUntapInUntapPhase).Any())
		strText += _T("no untap during untap step, ");
	
	if ((cardKeyword & CantBeCountered).Any())
		strText += _T("can't be countered, ");

	if ((cardKeyword & CantBeEnchanted).Any())
		strText += _T("can't be enchanted, ");

	if ((cardKeyword & Vanishing).Any())
		strText += _T("vanishing, ");
	
	if ((cardKeyword & Suspend).Any())
		strText += _T("suspend, ");


	if ((cardKeyword & Shroud).Any())
		strText += _T("shroud, ");

	if ((cardKeyword & Hexproof).Any())
		strText += _T("hexproof, ");

	if ((cardKeyword & CantGetCounters).Any())
		strText += _T("cannot get counters, ");

	if ((cardKeyword & UnpreventableDamage).Any())
		strText += _T("its damage cannot be prevented, ");

	if ((cardKeyword & Flash).Any())
		strText += _T("flash, ");

	if ((cardKeyword & Pflash).Any())
		strText += _T("pseudoflash, ");
		
	if ((cardKeyword & SplitSecond).Any())
		strText += _T("split second, ");

	if ((cardKeyword & Changeling).Any())
		strText += _T("changeling, ");

	if ((cardKeyword & Indestructible).Any())
		strText += _T("indestructible, ");

	if ((cardKeyword & NoUntapInNextContUntap).Any())
		strText += _T("no untap during next controller's untap step, ");

	if ((cardKeyword & CanChooseNotUntap).Any())
		strText += _T("You may choose not to untap during your untap step, ");

	if ((cardKeyword & CardKeyword::Deathtouch).Any())
		strText += _T("deathtouch, ");

	if ((cardKeyword & Lifelink).Any())
		strText += _T("lifelink, ");

	if ((cardKeyword & Wither).Any())
		strText += _T("wither, ");

	if ((cardKeyword & Dredge).Any())
		strText += _T("dredge, ");

	if ((cardKeyword & TotemArmor).Any())
		strText += _T("totem armor, ");

	if ((cardKeyword & MovementReplacement).Any())
		strText += _T("movement replacement, ");

	if ((cardKeyword & Infect).Any())
		strText += _T("infect, ");

	if ((cardKeyword & Emblem).Any())
		strText += _T("emblem, ");

	if ((cardKeyword & Freecast).Any())
		strText += _T("free cast, ");

	if ((cardKeyword & Madness).Any())
		strText += _T("madness, ");

	if ((cardKeyword & CardHaste).Any())
		strText += _T("haste, ");

	if ((cardKeyword & SpellCopy).Any())
		strText += _T("spell copy, ");

	if ((cardKeyword & Detain).Any())
		strText += _T("detain, ");

	if ((cardKeyword & ProtectionSpecial).Any())
		strText += _T("This card has special protection, ");

	if ((cardKeyword & ProtectionFromBlue).Any())
		strText += _T("protection from blue, ");

	if ((cardKeyword & ProtectionFromBlack).Any())
		strText += _T("protection from black, ");

	if ((cardKeyword & ProtectionFromWhite).Any())
		strText += _T("protection from white, ");

	if ((cardKeyword & ProtectionFromGreen).Any())
		strText += _T("protection from green, ");

	if ((cardKeyword & ProtectionFromRed).Any())
		strText += _T("protection from red, ");


	if (!strText.IsEmpty())
		strText = strText.Left(strText.GetLength() - 2);

	return strText;
}

//____________________________________________________________________________
//
CString UsagePatternItem::ToString(UsagePatternItem item)
{
	CString strText;
	strText.LoadString(item.Get());
	return strText;
}

//____________________________________________________________________________
//
const LPCTSTR SingleCreatureType::s_Text[SingleCreatureType::_SingleTypeCount] =
{
	_T("Invalid"),
	_T("Advisor"),
	_T("Ally"),
	_T("Angel"),
	_T("Anteater"),
	_T("Antelope"),
	_T("Ape"),
	_T("Archer"),
	_T("Archon"),
	_T("Artificer"),
	_T("Assassin"),
	_T("Assembly-Worker"),
	_T("Atog"),
	_T("Aurochs"),
	_T("Avatar"),
	_T("Badger"),
	_T("Barbarian"),
	_T("Basilisk"),
	_T("Bat"),
	_T("Bear"),
	_T("Beast"),
	_T("Beeble"),
	_T("Berserker"),
	_T("Bird"),
	_T("Blinkmoth"),
	_T("Boar"),
	_T("Bringer"),
	_T("Brushwagg"),
	_T("Camarid"),
	_T("Camel"),
	_T("Caribou"),
	_T("Carrier"),
	_T("Cat"),
	_T("Centaur"),
	_T("Cephalid"),
	_T("Chimera"),
	_T("Citizen"),
	_T("Cleric"),
	_T("Cockatrice"),
	_T("Construct"),
	_T("Coward"),
	_T("Crab"),
	_T("Crocodile"),
	_T("Cyclops"),
	_T("Dauthi"),
	_T("Demon"),
	_T("Deserter"),
	_T("Devil"),
	_T("Djinn"),
	_T("Dragon"),
	_T("Drake"),
	_T("Dreadnought"),
	_T("Drone"),
	_T("Druid"),
	_T("Dryad"),
	_T("Dwarf"),
	_T("Efreet"),
	_T("Elder"),
	_T("Eldrazi"),
	_T("Elemental"),
	_T("Elephant"),
	_T("Elf"),
	_T("Elk"),
	_T("Eye"),
	_T("Faerie"),
	_T("Ferret"),
	_T("Fish"),
	_T("Flagbearer"),
	_T("Fox"),
	_T("Frog"),
	_T("Fungus"),
	_T("Gamer"),
	_T("Gargoyle"),
	_T("Germ"),
	_T("Giant"),
	_T("Gnome"),
	_T("Goat"),
	_T("Goblin"),
	_T("God"),
	_T("Golem"),
	_T("Gorgon"),
	_T("Graveborn"),
	_T("Gremlin"),
	_T("Griffin"),
	_T("Hag"),
	_T("Harpy"),
	_T("Hellion"),
	_T("Hippo"),
	_T("Hippogriff"),
	_T("Homarid"),
	_T("Homunculus"),
	_T("Horror"),
	_T("Horse"),
	_T("Hound"),
	_T("Human"),
	_T("Hydra"),
	_T("Hyena"),
	_T("Illusion"),
	_T("Imp"),
	_T("Incarnation"),
	_T("Insect"),
	_T("Jellyfish"),
	_T("Juggernaut"),
	_T("Kavu"),
	_T("Kirin"),
	_T("Kithkin"),
	_T("Knight"),
	_T("Kobold"),
	_T("Kor"),
	_T("Kraken"),
	_T("Lammasu"),
	_T("Leech"),
	_T("Leviathan"),
	_T("Lhurgoyf"),
	_T("Licid"),
	_T("Lizard"),
	_T("Manticore"),
	_T("Masticore"),
	_T("Mercenary"),
	_T("Merfolk"),
	_T("Metathran"),
	_T("Minion"),
	_T("Minotaur"),
	_T("Monger"),
	_T("Mongoose"),
	_T("Monk"),
	_T("Moonfolk"),
	_T("Mutant"),
	_T("Myr"),
	_T("Mystic"),
	_T("Nautilus"),
	_T("Nephilim"),
	_T("Nightmare"),
	_T("Nightstalker"),
	_T("Ninja"),
	_T("Noggle"),
	_T("Nomad"),
	_T("Nymph"),
	_T("Octopus"),
	_T("Ogre"),
	_T("Ooze"),
	_T("Orb"),
	_T("Orc"),
	_T("Orgg"),
	_T("Ouphe"),
	_T("Ox"),
	_T("Oyster"),
	_T("Pegasus"),
	_T("Pentavite"),
	_T("Pest"),
	_T("Phelddagrif"),
	_T("Phoenix"),
	_T("Pincher"),
	_T("Pirate"),
	_T("Plant"),
	_T("Praetor"),
	_T("Prism"),
	_T("Rabbit"),
	_T("Rat"),
	_T("Rebel"),
	_T("Reflection"),
	_T("Rhino"),
	_T("Rigger"),
	_T("Rogue"),
	_T("Sable"),
	_T("Salamander"),
	_T("Samurai"),
	_T("Sand"),
	_T("Saproling"),
	_T("Satyr"),
	_T("Scarecrow"),
	_T("Scorpion"),
	_T("Scout"),
	_T("Serf"),
	_T("Serpent"),
	_T("Shade"),
	_T("Shaman"),
	_T("Shapeshifter"),
	_T("Sheep"),
	_T("Siren"),
	_T("Skeleton"),
	_T("Slith"),
	_T("Sliver"),
	_T("Slug"),
	_T("Snake"),
	_T("Soldier"),
	_T("Soltari"),
	_T("Spawn"),
	_T("Specter"),
	_T("Spellshaper"),
	_T("Sphinx"),
	_T("Spider"),
	_T("Spike"),
	_T("Spirit"),
	_T("Splinter"),
	_T("Sponge"),
	_T("Squid"),
	_T("Squirrel"),
	_T("Starfish"),
	_T("Surrakar"),
	_T("Survivor"),
	_T("Tetravite"),
	_T("Thalakos"),
	_T("Thopter"),
	_T("Thrull"),
	_T("Treefolk"),
	_T("Triskelavite"),
	_T("Troll"),
	_T("Turtle"),
	_T("Unicorn"),
	_T("Vampire"),
	_T("Vedalken"),
	_T("Viashino"),
	_T("Volver"),
	_T("Wall"),
	_T("Warrior"),
	_T("Weird"),
	_T("Werewolf"),
	_T("Whale"),
	_T("Wizard"),
	_T("Wolf"),
	_T("Wolverine"),
	_T("Wombat"),
	_T("Worm"),
	_T("Wraith"),
	_T("Wurm"),
	_T("Yeti"),
	_T("Zombie"),
	_T("Zubera")
};

//____________________________________________________________________________
//
const LPCTSTR PlaneswalkerType::s_Text[PlaneswalkerType::_SubtypeCount] =
{
	_T("Invalid"),
	_T("Ajani"),
	_T("Ashiok"),
	_T("Bolas"),
	_T("Chandra"),
	_T("Domri"),
	_T("Elspeth"),
	_T("Garruk"),
	_T("Gideon"),
	_T("Jace"),
	_T("Karn"),
	_T("Koth"),
	_T("Liliana"),
	_T("Nissa"),
	_T("Ral"),
	_T("Sarkhan"),
	_T("Sheila"),
	_T("Sorin"),
	_T("Tamiyo"),
	_T("Tezzeret"),
	_T("Tibalt"),
	_T("Venser"),
	_T("Vraska"),
	_T("Xenagos")
};
//____________________________________________________________________________
//
const LPCTSTR PlaneType::s_Text[PlaneType::_SubtypeCount] =
{
	_T("Null"),
	_T("Alara"),
	_T("Arkhos"),
	_T("Azgol"),
	_T("Belenon"),
	_T("Bolas's Meditation Realm"),
	_T("Dominaria"),
	_T("Equilor"),
	_T("Ergamon"),
	_T("Fabacin"),
	_T("Innistrad"),
	_T("Iquatana"),
	_T("Ir"),
	_T("Kaldheim"),
	_T("Kamigawa"),
	_T("Karsus"),
	_T("Kephalai"),
	_T("Kinshala"),
	_T("Kolbahan"),
	_T("Kyneth"),
	_T("Lorwyn"),
	_T("Luvion"),
	_T("Mercadia"),
	_T("Mirrodin"),
	_T("Moag"),
	_T("Monseng"),
	_T("Muraganda"),
	_T("New Phyrexia"),
	_T("Phenomenon"),
	_T("Phyrexia"),
	_T("Pyrulea"),
	_T("Rabiah"),
	_T("Ravnica"),
	_T("Regatha"),
	_T("Segovia"),
	_T("Serra's Realm"),
	_T("Shadowmoor"),
	_T("Shandalar"),
	_T("Ulgrotha"),
	_T("Valla"),
	_T("Vryn"),
	_T("Wildfire"),
	_T("Xerex"),
	_T("Zendikar")
};