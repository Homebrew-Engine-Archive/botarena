#include "stdafx.h"
#include "CardATokens.h"

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
		DEFINE_TOKEN(CAnimatedArtifactAToken);
		DEFINE_TOKEN(CAnimatedArtifactBToken);
		DEFINE_TOKEN(CAnimatedForestAToken);
		DEFINE_TOKEN(CAnimatedForestBToken);
		DEFINE_TOKEN(CAnimatedGideonJuraToken);
		DEFINE_TOKEN(CAnimatedGideonChampionOfJusticeToken);
		DEFINE_TOKEN(CAnimatedLandAToken);
		DEFINE_TOKEN(CAnimatedLandBToken);
		DEFINE_TOKEN(CAnimatedLandCToken);
		DEFINE_TOKEN(CAnimatedLandDToken);
		DEFINE_TOKEN(CAnimatedLandEToken);
		DEFINE_TOKEN(CAnimatedLandFToken);
		DEFINE_TOKEN(CAnimatedLandGToken);
		DEFINE_TOKEN(CAnimatedLandHToken);
		DEFINE_TOKEN(CAnimatedSwampToken);
		DEFINE_TOKEN(CAngelAAToken);
		DEFINE_TOKEN(CApeAAToken);
		DEFINE_TOKEN(CAssemblyWorkerAAToken);
		DEFINE_TOKEN(CAtogAAToken);
		DEFINE_TOKEN(CBeastAAToken);
		DEFINE_TOKEN(CBeastABToken);
		DEFINE_TOKEN(CBeastACToken);
		DEFINE_TOKEN(CBirdAAToken);
		DEFINE_TOKEN(CBirdABToken);
		DEFINE_TOKEN(CBlinkmothAAToken);
		DEFINE_TOKEN(CBlinkmothABToken);										
		DEFINE_TOKEN(CCentaurAAToken);
		DEFINE_TOKEN(CConstructAAToken);
		DEFINE_TOKEN(CConstructABToken);
		DEFINE_TOKEN(CConstructACToken);
		DEFINE_TOKEN(CConstructADToken);
		DEFINE_TOKEN(CConstructAEToken);
		DEFINE_TOKEN(CConstructAFToken);
		DEFINE_TOKEN(CCrabAAToken);
		DEFINE_TOKEN(CDevilAAToken);
		DEFINE_TOKEN(CDragonAAToken);
		DEFINE_TOKEN(CDragonABToken);
		DEFINE_TOKEN(CDragonACToken);
		DEFINE_TOKEN(CDragonADToken);
		DEFINE_TOKEN(CDragonAEToken);
		DEFINE_TOKEN(CElementalAAToken);
		DEFINE_TOKEN(CElementalABToken);
		DEFINE_TOKEN(CElementalACToken);
		DEFINE_TOKEN(CElementalADToken);
		DEFINE_TOKEN(CElementalAEToken);
		DEFINE_TOKEN(CElementalAFToken);
		DEFINE_TOKEN(CElementalAGToken);
		DEFINE_TOKEN(CElementalAHToken);
		DEFINE_TOKEN(CElementalAIToken);
		DEFINE_TOKEN(CElementalAJToken);
		DEFINE_TOKEN(CElementalAKToken);
		DEFINE_TOKEN(CElementalALToken);
		DEFINE_TOKEN(CElementalAMToken);
		DEFINE_TOKEN(CElementalANToken);
		DEFINE_TOKEN(CElementalAOToken);
		DEFINE_TOKEN(CElementalHorrorAAToken);
		DEFINE_TOKEN(CElfAAToken);
		DEFINE_TOKEN(CFaerieAAToken);
		DEFINE_TOKEN(CGiantAAToken);
		DEFINE_TOKEN(CGiantABToken);
		DEFINE_TOKEN(CGolemAAToken);
		DEFINE_TOKEN(CGolemABToken);
		DEFINE_TOKEN(CGolemACToken);
		DEFINE_TOKEN(CGolemADToken);
		DEFINE_TOKEN(CHorrorAAToken);
		DEFINE_TOKEN(CHorrorABToken);
		DEFINE_TOKEN(CInsectAAToken);
		DEFINE_TOKEN(CInsectMonkAAToken);
		DEFINE_TOKEN(CJuggernautAAToken);
		DEFINE_TOKEN(COozeAAToken);
		DEFINE_TOKEN(CPlantZombieAAToken);
		DEFINE_TOKEN(CShapeshifterAAToken);
		DEFINE_TOKEN(CSkeletonAAToken);
		DEFINE_TOKEN(CSoldierAAToken);
		DEFINE_TOKEN(CSoldierABToken);
		DEFINE_TOKEN(CSpiritAAToken);
		DEFINE_TOKEN(CSpiritABToken);
		DEFINE_TOKEN(CSpiritACToken);
		DEFINE_TOKEN(CSpiritADToken);
		DEFINE_TOKEN(CSpiritAEToken);
		DEFINE_TOKEN(CSpiritAFToken);
		DEFINE_TOKEN(CSpiritAGToken);
		DEFINE_TOKEN(CSpiritAHToken);
		DEFINE_TOKEN(CSpiritAIToken);
		DEFINE_TOKEN(CThrullAAToken);
		DEFINE_TOKEN(CTreefolkAAToken);
		DEFINE_TOKEN(CTreefolkABToken);
		DEFINE_TOKEN(CTreefolkACToken);
		DEFINE_TOKEN(CTreefolkWarriorAAToken);
		DEFINE_TOKEN(CTurtleAAToken);
		DEFINE_TOKEN(CWallAAToken);
		DEFINE_TOKEN(CWallABToken);
		DEFINE_TOKEN(CWarriorAAToken);
		DEFINE_TOKEN(CWarriorABToken);
		DEFINE_TOKEN(CWolfAAToken);
						
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
CAnimatedArtifactAToken::CAnimatedArtifactAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Artifact"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(5), Life(5))
{
// Used by Tezzeret the Seeker, Tezzeret, Agent of Bolas
}

//____________________________________________________________________________
//
CAnimatedForestAToken::CAnimatedForestAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Forest"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(3))
{
// Used by Thelonite Druid
}

//____________________________________________________________________________
//
CAnimatedForestBToken::CAnimatedForestBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Forest"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(1), Life(1))
{
// Used by Living Lands
}

//____________________________________________________________________________
//
CBirdAAToken::CBirdAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Bird), nID,
		_T("2"),
		Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of Glint Hawk Idol
}

//____________________________________________________________________________
//
CBirdABToken::CBirdABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Bird), nID,
		_T("3"),
		Power(2), Life(2))
{
	AddCardType(CardType::White | CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of Azorius Keyrune
}

//____________________________________________________________________________
//
CAnimatedGideonJuraToken::CAnimatedGideonJuraToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Gideon Jura"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE2(Human, Soldier), nID,
		_T("3") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(6), Life(6))
{
	Life prevent(PreventionType::PreventAllDamage);
	CDamagePreventionEntry entry(prevent);
	entry.SetOneTurnOnly(FALSE);

	GetDamagePrevention().AddDamagePreventionEntry(entry);

// Animation of Gideon Jura
}

//____________________________________________________________________________
//
CAnimatedGideonChampionOfJusticeToken::CAnimatedGideonChampionOfJusticeToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Gideon, Champion of Justice"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE2(Human, Soldier), nID,
		_T("2") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		Power(0), Life(0))
{
	Life prevent(PreventionType::PreventAllDamage);
	CDamagePreventionEntry entry(prevent);
	entry.SetOneTurnOnly(FALSE);

	GetDamagePrevention().AddDamagePreventionEntry(entry);
	GetCardKeyword()->AddIndestructible(FALSE);

	{
		counted_ptr<CCounterPwrTghAbility> cpAbility(
			::CreateObject<CCounterPwrTghAbility>(this, LOYALTY_COUNTER));

		AddAbility(cpAbility.GetPointer());
	}

// Animation of Gideon, Champion of Justice
}

//____________________________________________________________________________
//
CAnimatedLandAToken::CAnimatedLandAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	GetCreatureKeyword()->AddFirstStrike(FALSE);

// Used by Natural Emergence
}

//____________________________________________________________________________
//
CAnimatedLandBToken::CAnimatedLandBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
// Used by Balduvian Conjurer, Natural Affinity, Nature's Revolt, Spike Tiller, Verdant Touch
}

//____________________________________________________________________________
//
CAnimatedLandCToken::CAnimatedLandCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(1), Life(1))
{
// Used by Kamahl, Fist of Krosa; Life//Death, Living Plane
}

//____________________________________________________________________________
//
CAnimatedSwampToken::CAnimatedSwampToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Swamp"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Kormus Bell
}

//____________________________________________________________________________
//
CApeAAToken::CApeAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ape"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Ape), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);

// Animation of Treetop Village
}

//____________________________________________________________________________
//
CAngelAAToken::CAngelAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Angel), nID,
		_T("3"),
		Power(3), Life(3))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Angel's Tomb
}

//____________________________________________________________________________
//
CAssemblyWorkerAAToken::CAssemblyWorkerAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Assembly-Worker"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(AssemblyWorker), nID,
		_T(""),
		Power(2), Life(2))
{
// Animation of Mishra's Factory
}

//____________________________________________________________________________
//
CAtogAAToken::CAtogAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Atog"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Atog), nID,
		_T("3"),
		Power(1), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// Animation of Chronatog Totem
}

//____________________________________________________________________________
//
CBeastAAToken::CBeastAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Beast), nID,
		_T("2"),
		Power(2), Life(2))
{
	GetCardKeyword()->AddIndestructible(FALSE);

// Animation of Darksteel Brute
}

//____________________________________________________________________________
//
CBeastABToken::CBeastABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(4), Life(2))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);

// Used by Crushing Zendikon
}

//____________________________________________________________________________
//
CBeastACToken::CBeastACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::_ArtifactCreature/* | CardType::Token*/,
	CREATURE_TYPE(Beast), nID,
		_T("3"),
		Power(3), Life(2))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);

// Animation of Gruul Keyrune
}

//____________________________________________________________________________
//
CBlinkmothAAToken::CBlinkmothAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Blinkmoth"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Blinkmoth), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of Blinkmoth Nexus
}

//____________________________________________________________________________
//
CBlinkmothABToken::CBlinkmothABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Blinkmoth"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Blinkmoth), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddInfect(FALSE);

// Animation of Inkmoth Nexus
}

//____________________________________________________________________________
//
CCentaurAAToken::CCentaurAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Centaur"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Centaur), nID,
		_T("1") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		Power(4), Life(3))
{
// Animation of Still Life
}

//____________________________________________________________________________
//
CConstructAAToken::CConstructAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Construct), nID,
		_T("3"),
		Power(2), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of Chimeric Sphere
}

//____________________________________________________________________________
//
CConstructABToken::CConstructABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Construct), nID,
		_T("3"),
		Power(3), Life(2))
{
	GetCreatureKeyword()->RemoveFlying(FALSE);

// Animation of Chimeric Sphere
}

//____________________________________________________________________________
//
CConstructACToken::CConstructACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Construct), nID,
		_T("3"),
		Power(6), Life(6))
{
	GetCreatureKeyword()->AddTrample(FALSE);

// Animation of Chimeric Egg
}

//____________________________________________________________________________
//
CConstructADToken::CConstructADToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Construct), nID,
		_T(""),
		Power(0), Life(0))
{	
	counted_ptr<CCounterPwrTghAbility> cpAbility(
		::CreateObject<CCounterPwrTghAbility>(this, CHARGE_COUNTER));

	AddAbility(cpAbility.GetPointer());

// Animation of Chimeric Mass
}

//____________________________________________________________________________
//
CThrullAAToken::CThrullAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thrull"), CardType::_ArtifactCreature/* | CardType::Token*/,
	CREATURE_TYPE(Thrull), nID,
		_T("3"),
		Power(1), Life(4))
{
	AddCardType(CardType::White | CardType::Black, CardType::_ColorMask);

	GetCardKeyword()->AddLifelink(FALSE);

// Animation of Orzhov Keyrune
}

//____________________________________________________________________________
//
CCrabAAToken::CCrabAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Crab"), CardType::_ArtifactCreature/* | CardType::Token*/,
	CREATURE_TYPE(Crab), nID,
		_T("3"),
		Power(2), Life(3))
{
	AddCardType(CardType::Green | CardType::Blue, CardType::_ColorMask);

	GetCardKeyword()->AddHexproof(FALSE);

// Animation of Simic Keyrune
}

//____________________________________________________________________________
//
CHorrorAAToken::CHorrorAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Horror"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Horror), nID,
		_T("3"),
		Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);

// Animation of Phyrexian Totem
}

//____________________________________________________________________________
//
CHorrorABToken::CHorrorABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Horror"), CardType::_ArtifactCreature/* | CardType::Token*/,
	CREATURE_TYPE(Horror), nID,
		_T("3"),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue | CardType::Black, CardType::_ColorMask);

	GetCardKeyword()->AddHexproof(FALSE);

// Animation of Dimir Keyrune
}

//____________________________________________________________________________
//
CDevilAAToken::CDevilAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Devil"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Devil), nID,
		_T("3"),
		Power(3), Life(1))
{
	AddCardType(CardType::Black | CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFirstStrike(FALSE);

// Animation of Rakdos Keyrune
}

//____________________________________________________________________________
//
COozeAAToken::COozeAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Corrupted Zendikon
}

//____________________________________________________________________________
//
CElementalAAToken::CElementalAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Koth of the Hammer
}
//____________________________________________________________________________
//
CElementalABToken::CElementalABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White | CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddVigilance(FALSE);

// Animation of Celestial Colonnade
}

//____________________________________________________________________________
//
CElementalACToken::CElementalACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(2))
{
	AddCardType(CardType::Black | CardType::Blue, CardType::_ColorMask);

// Animation of Creeping Tar Pit
}

//____________________________________________________________________________
//
CElementalADToken::CElementalADToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(4))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddReach(FALSE);

// Animation of Stirring Wildwood
}

//____________________________________________________________________________
//
CElementalAEToken::CElementalAEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(6), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Vastwood Zendikon
}

//____________________________________________________________________________
//
CElementalAFToken::CElementalAFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Balduvian Frostwaker, Wind Zendikon
}

//____________________________________________________________________________
//
CElementalAGToken::CElementalAGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
// Animation of Stalking Stones
}

//____________________________________________________________________________
//
CElementalAHToken::CElementalAHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black | CardType::Red, CardType::_ColorMask);

	{
		counted_ptr<CExtraPumpAbility> cpAbility(
			::CreateObject<CExtraPumpAbility>(this, _T(""), Power(+1), Life(+0)));
		ATLASSERT(cpAbility);

		cpAbility->GetCost().SetExtraManaCost();
		cpAbility->SetExtraActionValueVector();

		AddAbility(cpAbility.GetPointer());
	}

// Animation of Lavaclaw Reaches
}

//____________________________________________________________________________
//
CElementalAIToken::CElementalAIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green | CardType::Red, CardType::_ColorMask);

	{
	typedef 
		TTriggeredAbility< CTriggeredModifyCardAbility, CWhenSelfAttackedBlocked,
						   CWhenSelfAttackedBlocked::AttackEventCallback,
						   &CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1));

		AddAbility(cpAbility.GetPointer());
	}

// Animation of Raging Ravine
}

//____________________________________________________________________________
//
CElementalAJToken::CElementalAJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T("3"),
		Power(2), Life(1))
{
	AddCardType(CardType::Blue | CardType::Red, CardType::_ColorMask);

// Animation of Izzet Keyrune
}

//____________________________________________________________________________
//
CElementalAKToken::CElementalAKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
// Used by Skarrg Guildmage
}

//____________________________________________________________________________
//
CElfAAToken::CElfAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elf"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elf), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

//Used by Ambush Commander
}

//____________________________________________________________________________
//
CFaerieAAToken::CFaerieAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Faerie"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Faerie), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of Faerie Conclave
}

//____________________________________________________________________________
//
CGiantAAToken::CGiantAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Giant"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Giant), nID,
		_T("3"),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
	SetMaxBlockingCount(2);

// Animation of Foriysian Totem
}

//____________________________________________________________________________
//
CGolemAAToken::CGolemAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Golem), nID,
		_T("2"),
		Power(2), Life(2))
{
// Animation of Guardian Idol
}

//____________________________________________________________________________
//
CGolemABToken::CGolemABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Golem), nID,
		_T("8"),
		Power(8), Life(8))
{
	GetCreatureKeyword()->AddTrample(FALSE);

// Animation of Xanthic Statue
}

//____________________________________________________________________________
//
CGolemACToken::CGolemACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Golem), nID,
		_T(""),
		Power(4), Life(2))
{
// Animation of Dread Statuary
}

//____________________________________________________________________________
//
CGolemADToken::CGolemADToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Golem), nID,
		_T("4"),
		Power(3), Life(6))
{
// Animation of Jade Statue
}

//____________________________________________________________________________
//
CAnimatedLandDToken::CAnimatedLandDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(3), Life(3))
{
// Used by Animate Land, Jolrael, Empress of Beasts; Lifespark Spellbomb, Soilshaper, Vivify
}

//____________________________________________________________________________
//
CAnimatedLandEToken::CAnimatedLandEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(3), Life(3))
{
// Used by Mishra's Groundbreaker
}

//____________________________________________________________________________
//
CAnimatedLandFToken::CAnimatedLandFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(4), Life(4))
{
// Used by Murasa
}

//____________________________________________________________________________
//
CAnimatedLandGToken::CAnimatedLandGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Quirion Druid
}

//____________________________________________________________________________
//
CTreefolkAAToken::CTreefolkAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Treefolk), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Elvish Branchbender
}

//____________________________________________________________________________
//
CElementalHorrorAAToken::CElementalHorrorAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental Horror"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE2(Elemental, Horror), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);

// Used by Woodwraith Corrupter
}

//____________________________________________________________________________
//
CElementalALToken::CElementalALToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Vastwood Animist
}

//____________________________________________________________________________
//
CTreefolkWarriorAAToken::CTreefolkWarriorAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk Warrior"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE2(Treefolk, Warrior), nID,
		_T(""),
		Power(3), Life(5))
{
// Used by Fendeep Summoner
}

//____________________________________________________________________________
//
CAnimatedLandHToken::CAnimatedLandHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Land"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Hunting Wilds
}

//____________________________________________________________________________
//
CAnimatedArtifactBToken::CAnimatedArtifactBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Animated Artifact"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Karn's Touch, Karn, Silver Golem; Toymaker, Xenic Poltergeist
}

//____________________________________________________________________________
//
CElementalAMToken::CElementalAMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Hydroform
}

//____________________________________________________________________________
//
CInsectAAToken::CInsectAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Insect), nID,
		_T("3"),
		Power(2), Life(2))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);

	GetCardKeyword()->AddDeathtouch(FALSE);

// Animation of Golgari Keyrune
}

//____________________________________________________________________________
//
CInsectMonkAAToken::CInsectMonkAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect Monk"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE2(Insect, Monk), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFirstStrike(FALSE);

// Animation of Nantuko Monastery
}

//____________________________________________________________________________
//
CJuggernautAAToken::CJuggernautAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Juggernaut"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Juggernaut), nID,
		_T("4"),
		Power(4), Life(4))
{
// Animation of Gruul War Plow
}

//____________________________________________________________________________
//
CPlantZombieAAToken::CPlantZombieAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Plant Zombie"), CardType::Creature,
	CREATURE_TYPE2(Plant, Zombie), nID,
	_T(""),
	Power(0), Life(0))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

		//cpAbility->StartListening(GetController()); //causes a crash

		AddAbility(cpAbility.GetPointer());
	}

// Animation of Svogthos, the Restless Tomb
}

void CPlantZombieAAToken::Move(CZone* pToZone,
					  const CPlayer* pByPlayer,
					  MoveType moveType,
					  CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (pToZone->GetZoneId() != ZoneId::Battlefield) return;

	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CTriggeredChgPwrTghWhenCardPlayedAbility* pCTriggeredChgPwrTghWhenCardPlayedAbility = dynamic_cast<CTriggeredChgPwrTghWhenCardPlayedAbility*>(GetAbility(i));
		if (!pCTriggeredChgPwrTghWhenCardPlayedAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pCTriggeredChgPwrTghWhenCardPlayedAbility->ForceStart(TRUE);
		
	}
}

//____________________________________________________________________________
//
CShapeshifterAAToken::CShapeshifterAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Shapeshifter"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Shapeshifter), nID,
		_T(""),
		Power(2), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);

// Animation of Mutavault
}

//____________________________________________________________________________
//
CSkeletonAAToken::CSkeletonAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Skeleton"), CardType::Creature/* | CardType::Token*/,
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

// Animation of Spawning Pool
}

//____________________________________________________________________________
//
CSoldierAAToken::CSoldierAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(5))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Animation of Forbidding Watchtower
}

//____________________________________________________________________________
//
CSoldierABToken::CSoldierABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::_ArtifactCreature/* | CardType::Token*/,
	CREATURE_TYPE(Soldier), nID,
		_T("3"),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddDoubleStrike(FALSE);

// Animation of Boros Keyrune
}

//____________________________________________________________________________
//
CSpiritAAToken::CSpiritAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Spirit), nID,
		_T("3"),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddFirstStrike(FALSE);

// Animation of Thunder Totem
}

//____________________________________________________________________________
//
CSpiritABToken::CSpiritABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T("3"),
		Power(1), Life(5))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of Ensouled Scimitar
}

//____________________________________________________________________________
//
CSpiritACToken::CSpiritACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Genju of the Cedars
}

//____________________________________________________________________________
//
CSpiritADToken::CSpiritADToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(3), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Genju of the Falls
}

//____________________________________________________________________________
//
CSpiritAEToken::CSpiritAEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());

// Used by Genju of the Fens
}

//____________________________________________________________________________
//
CSpiritAFToken::CSpiritAFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(2), Life(5))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, &CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpiritAFToken::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());

// Used by Genju of the Fields
}

bool CSpiritAFToken::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CSpiritAGToken::CSpiritAGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(6), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Genju of the Spires
}

//____________________________________________________________________________
//
CSpiritAHToken::CSpiritAHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Legendary | CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(8), Life(12))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CTreefolkABToken::CTreefolkABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Treefolk), nID,
		_T(""),
		Power(5), Life(6))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Living Terrain
}

//____________________________________________________________________________
//
CTreefolkACToken::CTreefolkACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Treefolk), nID,
		_T("3"),
		Power(5), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);

// Animation of Weatherseed Totem
}

//____________________________________________________________________________
//
CTurtleAAToken::CTurtleAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Turtle"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Turtle), nID,
		_T("3"),
		Power(3), Life(3))
{
// Animation of Chimeric Idol
}

//____________________________________________________________________________
//
CWallAAToken::CWallAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wall"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(2), Life(6))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddDefender(FALSE);

// Used by Guardian Zendikon
}

//____________________________________________________________________________
//
CWarriorAAToken::CWarriorAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFirstStrike(FALSE);

// Animation of Ghitu Encampment
}

//____________________________________________________________________________
//
CWolfAAToken::CWolfAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Wolf), nID,
		_T("3"),
		Power(3), Life(3))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);

// Animation of Selesnya Keyrune
}

//____________________________________________________________________________
//
CConstructAEToken::CConstructAEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Construct), nID,
		_T("4"),
		Power(0), Life(0))
{
// Animation of Chimeric Staff
}

//____________________________________________________________________________
//
CWallABToken::CWallABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wall"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddDefender(FALSE);

// Animation of Testament of Faith
}

//____________________________________________________________________________
//
CConstructAFToken::CConstructAFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Construct"), CardType::_ArtifactCreature/* | CardType::Token*/, 
		CREATURE_TYPE(Construct), nID,
		_T("1"),
		Power(0), Life(0))
{
// Animation of Chimeric Coils
}

//____________________________________________________________________________
//
CGiantABToken::CGiantABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Giant"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Giant), nID,
		_T(""),
		Power(7), Life(7))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Awaken the Ancient
}

//____________________________________________________________________________
//
CWarriorABToken::CWarriorABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(2), Life(2))
{
// Used by Anthousa, Setessan Hero
}

//____________________________________________________________________________
//
CSpiritAIToken::CSpiritAIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T("4"),
		Power(4), Life(4))
{
// Animation of Haunted Plate Mail
}

//____________________________________________________________________________
//
CDragonAAToken::CDragonAAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Dragon), nID,
		_T(""),							// not used
		Power(4), Life(4))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of DTK Atarka Monument
}

//____________________________________________________________________________
//
CDragonABToken::CDragonABToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Dragon), nID,
		_T(""),							// not used
		Power(4), Life(4))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of DTK Dromoka Monument
}

//____________________________________________________________________________
//
CDragonACToken::CDragonACToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Dragon), nID,
		_T(""),							// not used
		Power(4), Life(4))
{
	AddCardType(CardType::Black | CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of DTK Kolaghan Monument
}

//____________________________________________________________________________
//
CDragonADToken::CDragonADToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Dragon), nID,
		_T(""),							// not used
		Power(4), Life(4))
{
	AddCardType(CardType::White | CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of DTK Ojutai Monument
}

//____________________________________________________________________________
//
CDragonAEToken::CDragonAEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::_ArtifactCreature,
		CREATURE_TYPE(Dragon), nID,
		_T(""),							// not used
		Power(4), Life(4))
{
	AddCardType(CardType::Blue | CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Animation of DTK Silumgar Monument
}

//____________________________________________________________________________
//
CElementalANToken::CElementalANToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
	GetCreatureKeyword()->AddTrample(FALSE);

// Used by M15 Nissa, Worldwaker
}

//____________________________________________________________________________
//
CElementalAOToken::CElementalAOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
	GetCreatureKeyword()->AddHaste(FALSE);

// Used by OGW Embodiment of Insight
}

//____________________________________________________________________________
//