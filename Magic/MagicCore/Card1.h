#pragma once

//____________________________________________________________________________
//
/*
	CTargetChgLifeSpellCard Example Card
	Lava Axe 4R Sorcery Lava Axe deals 5 damage to target player.
*/
class CORE_EXPORT CTargetChgLifeSpellCard : public CCard
{
protected:
	CTargetChgLifeSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					  AbilityType abilityType,
					  LPCTSTR strCostText,
					  CardComparer* pComparer,
					  BOOL bTargetPlayer,
					  Life nLifeDelta,
					  PreventableType preventable);
	virtual ~CTargetChgLifeSpellCard() {}

protected:
	CTargetChgLifeSpell* m_pTargetChgLifeSpell;
};

//____________________________________________________________________________
//
/*
	CChgPwrTghAttrSpellCard Example Card
	Giant Growth G Target creature gets +3/+3 until end of turn.
*/
class CORE_EXPORT CChgPwrTghAttrSpellCard : public CCard
{
protected:
	CChgPwrTghAttrSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
							AbilityType abilityType,
							LPCTSTR strCostText,
							Power nPowerDelta, Life nLifeDelta, 
							CreatureKeyword creatureKeywordToAdd, CreatureKeyword creatureKeywordToRemove,
							BOOL bThisTurnOnly,
							PreventableType preventable,
							CardComparer* pComparer = new AnyCreatureComparer);

	virtual ~CChgPwrTghAttrSpellCard() {}

protected:
	CTargetChgPwrTghAttrSpell* m_pTargetChgPwrTghAttrSpell;
};

//____________________________________________________________________________
//
/*
	CGlobalChgLifeSpellCard Example Card
	Pyroclasm 1R Pyroclasm deals 2 damage to each creature.
*/
class CORE_EXPORT CGlobalChgLifeSpellCard : public CCard
{
protected:
	CGlobalChgLifeSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
			 				AbilityType abilityType,
							LPCTSTR strCostText,
							Life nLifeDelta,
							CardComparer* pComparer, BOOL bAffectPlayer,
							PreventableType preventable,
							DamageType damageType = DamageType::SpellDamage | DamageType::NonCombatDamage);

	virtual ~CGlobalChgLifeSpellCard() {}

protected:
	CGlobalChgLifeSpell* m_pGlobalChgLifeSpell;
};

//____________________________________________________________________________
//
/*
	Used to implement Global Enchantments, Artifacts, Equipment.
	
	CInPlaySpellCard Example Cards
	Sol Ring 1 Artifact Tap: Add 2 to your mana pool.
	
	Pestilence 2BB Enchantment At the beginning of the end step, if no creatures are on the battlefield, sacrifice Pestilence.
	B: Pestilence deals 1 damage to each creature and each player.

*/
class CORE_EXPORT CInPlaySpellCard : public CCard
{
protected:
	CInPlaySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					 LPCTSTR strCostText, AbilityType abilityType);

	virtual ~CInPlaySpellCard() {}
};

//____________________________________________________________________________
//
/*
	CDoubleFacedInPlaySpellCard Example Card
	This code is currently the basis for Chalice of Life / Chalice of Death a double faced card.
	Face A - Chalice of Life 3 Artifact Tap: You gain 1 life. Then if you have at least 10 life more than 
	         your starting life total, transform Chalice of Life.
	Face B - Chalice of Death Artifact Tap: Target player loses 5 life.

*/
class CORE_EXPORT CDoubleFacedInPlaySpellCard : public CInPlaySpellCard
{
protected:
	CDoubleFacedInPlaySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					  LPCTSTR strCostText, LPCTSTR nFlipCardName, AbilityType abilityType);	

public:
	void Transform();
	BOOL CanPlaySecondFace(BOOL bIncludeTricks) const;
	BOOL CanPlayFirstFace(BOOL bIncludeTricks) const;

	void AddCardModifier(CCardModifier* pModifier) { m_CardModifiers.Add(pModifier); }

	CCardModifiers		GetCardModifiers()  {return m_CardModifiers;}

	OVERRIDE (DWORD, GetConvertedManaCost)() const;
	OVERRIDE (DWORD, GetManaCost)(CManaCostBase::Color manaCost, BOOL bMax = TRUE);
	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
	OVERRIDE (void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	LPCTSTR m_strDFCardName;

	CCardModifiers		m_CardModifiers;

private:
	friend CFaceTransformModifier;
	friend CGraveyardFaceTransformModifier;
	void FirstFace();
	void SecondFace();

	OVERRIDE (CString, GetPrintedCardName)() const;
	OVERRIDE (CString, GetSecondPrintedCardName)() const;
};

//____________________________________________________________________________
//
/*
	CBasicLandCard Example Card
	Forest Basic Land — Forest G
*/
class CORE_EXPORT CBasicLandCard : public CCard
{
protected:
	CBasicLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID,
				   LPCTSTR strPoolText, CardType landType);

	virtual ~CBasicLandCard() {}

public:
	CManaProductionAbility* GetBasicLandManaAbility() { return m_pBasicLandManaAbility; }
	CLandAbility* GetLandAbility() { return m_pBasicLandAbility; }

protected:
	CLandAbility*			m_pBasicLandAbility;
	CManaProductionAbility*	m_pBasicLandManaAbility;
};

//____________________________________________________________________________
//
/*
	CNonbasicLandCard Example Card
	Strip Mine Land Tap: Add 1 to your mana pool. Tap, Sacrifice Strip Mine: Destroy target land.
*/
class CORE_EXPORT CNonbasicLandCard : public CBasicLandCard
{
protected:
	CNonbasicLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID, CardType landType = CardType::NonbasicLand);
};

//____________________________________________________________________________
//
/*
	CDualLandCard Example Card
	Bayou (0) Land — Swamp Forest 
*/
class CORE_EXPORT CDualLandCard : public CNonbasicLandCard
{
protected:
	CDualLandCard(CGame* pGame, LPCTSTR strCardName, UINT uID, CardType landType,
				  LPCTSTR strPoolText1,
				  LPCTSTR strPoolText2);

	CManaProductionAbility*	m_pManaAbility1;
	CManaProductionAbility*	m_pManaAbility2;
};

//____________________________________________________________________________
//
//
/*
	CTargetMoveCardSpellCard Example Cards
	Raise Dead B Sorcery Return target creature card from your graveyard to your hand.
	Disenchant 1W Instant Destroy target artifact or enchantment.
*/
class CORE_EXPORT CTargetMoveCardSpellCard : public CCard
{
protected:
	CTargetMoveCardSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					   LPCTSTR strManaCost, AbilityType abilityType,
					   CardComparer* pComparer,
					   ZoneId fromZoneId, ZoneId toZoneId, BOOL bToOwner, MoveType moveType);

	virtual ~CTargetMoveCardSpellCard() {}

protected:
	CTargetMoveCardSpell* m_pTargetMoveCardSpell;
};

//____________________________________________________________________________
//
/*
	CSearchLibrarySpellCard Example Card
	Demonic Tutor 1B Sorcery Search your library for a card and put that card into your hand. 
	shuffle your library.
*/
class CORE_EXPORT CSearchLibrarySpellCard : public CCard
{
protected:
	CSearchLibrarySpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
							LPCTSTR strManaCost, AbilityType abilityType,
							const CCardFilter* pSearchCardFilter,
							ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped);

	virtual ~CSearchLibrarySpellCard() {}

protected:
	CSearchLibrarySpell* m_pSearchLibrarySpell;
};

//____________________________________________________________________________
//
/*
	CChgPwrTghAttrEnchantCard Example Card
	Unholy Strength B Enchantment - Aura Enchant creature Enchanted creature gets +2/+1.
*/
class CORE_EXPORT CChgPwrTghAttrEnchantCard : public CCard
{
protected:
	CChgPwrTghAttrEnchantCard(CGame* pGame, LPCTSTR strCardName, UINT uID,
							  LPCTSTR strCostText,
							  Power nPowerDelta, Life nLifeDelta,
							  CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	virtual ~CChgPwrTghAttrEnchantCard() {}

protected:
	CChgPwrTghAttrEnchant* m_pChgPwrTghAttrEnchant;
};

//____________________________________________________________________________
//
/*
	CEnchantCard Example Card
	Cursed Land 2BB Enchantment - Aura Enchant land At the beginning of the 
	upkeep of enchanted land's controller, Cursed Land deals 1 damage to that player.
*/
class CORE_EXPORT CEnchantCard : public CCard
{
protected:
	CEnchantCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
				LPCTSTR strCostText,
				CardComparer* pComparer);

	virtual ~CEnchantCard() {}

protected:
	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
/*
	CCounterSpellCard Example Card
	Counterspell UU Instant Counter target spell. 
*/
class CORE_EXPORT CCounterSpellCard : public CCard
{
protected:
	CCounterSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					  LPCTSTR strCostText, AbilityType abilityType,
					  CardComparer* pComparer);

	virtual ~CCounterSpellCard() {}

protected:
	CCounterSpell* m_pCounterSpell;
};
//____________________________________________________________________________
//
/*
	Tribal cards are from mainly the Lorwyn Block.
	CTribalCard Example Card
	Summon the School 3W Tribal Sorcery Merfolk
	Put two 1/1 blue Merfolk Wizard creature tokens onto the battlefield.
	Tap four untapped Merfolk you control: Return Summon the School from 
	your graveyard to your hand.
*/
class CORE_EXPORT CTribalCard : public CCard
{
protected:
	CTribalCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
							  const CreatureType& creatureType);

	virtual ~CTribalCard() {}

	CreatureType_					m_CreatureType;

public: 
	const CreatureType_& GetCreatureType() const;
	CreatureType_& GetCreatureType();
};

//____________________________________________________________________________
//
/*
	Tribal cards are mostly from the Lorwyn Block.
	CInPlayTribalSpellCard Example Card
	Militia's Pride 1W Tribal Enchantment Kithkin
	Whenever a nontoken creature you control attacks, you may pay W. If you do, 
	put a 1/1 white Kithkin Soldier creature token onto the battlefield tapped 
	and attacking.
*/
class CORE_EXPORT CInPlayTribalSpellCard : public CTribalCard
{
protected:
	CInPlayTribalSpellCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID,
					 LPCTSTR strCostText, AbilityType abilityType,  const CreatureType& creatureType);

	virtual ~CInPlayTribalSpellCard() {}
};

//____________________________________________________________________________
//
/*	
	Vanguard is a card type. Vanguard cards are a 4-series 8-card set of oversized cards that were used 
	to supplement Magic games.  These cards change the players' starting life total and cards in hand,
	and have additional effects as well.  Only four sets of avatar cards were made before the product 
	was discontinued. 
	All cards descended from CVanguardCard are located in CardVanguard.cpp, CardVanguard.h
	CVanguardCard Example Card
	Gerrard Vanguard At the beginning of your draw step, draw an additional card.
*/
class CORE_EXPORT CVanguardCard : public CCard
{
protected:
	CVanguardCard(CGame* pGame, LPCTSTR strCardName, UINT uID, 
							int pHandModifier, int pStartingLifeModifier);

	virtual ~CVanguardCard() {}

	int m_pHandModifier;
	int m_pStartingLifeModifier;

public: 
	int GetStartingLifeModifier() {return m_pStartingLifeModifier;}
	int GetStartingHandModifier() {return m_pHandModifier;}
};

//____________________________________________________________________________
//
/*	
	Archenemy is a new casual variant. In an Archenemy game, one player—the archenemy—takes 
	on the role of a merciless tyrant bent on total domination. The other players form a team 
	dedicated to stopping the archenemy at any cost, taking a shared turn Two-Headed Giant–style.
	
	The archenemy comes to the fight armed not only with a normal 60-card deck, but also with a 
	deck of 20 oversized scheme cards. 
	
	All cards descended from CSchemeCard are located in CardArchenemy.cpp, CardArchenemy.h
	CSchemeCard Example Card
	Approach My Molten Realm Scheme When you set this scheme in motion, until your next turn, 
	if a source would deal damage, it deals double that damage instead.
*/
class CORE_EXPORT CSchemeCard : public CCard
{
protected:
	CSchemeCard(CGame* pGame, LPCTSTR strCardName, UINT uID);

	virtual ~CSchemeCard() {}

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
};

//____________________________________________________________________________
//
/*	
	Not an actual card but is used when implementing some "effects" from cards.
	Example
		Pact of Negation 0 Instant Counter target spell. At the beginning of your next upkeep, 
		pay 3UU. If you don't, you lose the game.
	For this card the counterspell part of the card is implemented by using CCounterSpellCard
	and the effect "At the beginning of your next upkeep, pay 3UU. If you don't, you lose the game"
	uses a token derived from CEffectCard.

*/
class CEffectCard : public CCard
{
protected:
	 CEffectCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID)
		: CCard(pGame, strCardName, cardType, uID)
	{
	}

	virtual ~CEffectCard() {}

public:
	void SetUID(UINT pInt) {m_uID=pInt;}
	UINT GetUID() {return m_uID;}
	void SetTokenFullName(LPCTSTR pName) {m_strCardName = pName;}
	LPCTSTR GetTokenFullName() {return m_strCardName;}

	OVERRIDE (void, Move)(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);

protected:
	UINT	m_uID;
	LPCTSTR m_strCardName;
};

//____________________________________________________________________________
//
/*	
	Not an actual card but is used when implementing some "effects" from cards.
	Example 
	AEther Membrane 1RR Creature Wall 
	Defender; reach (This creature can block creatures with flying.)
	Whenever Æther Membrane blocks a creature, return that creature to its owner's 
	hand at end of combat. 0/5
	The Wall part of the card uses CCreatureCard, this card creates a token, 
	CEndOfCombatBounceEffectToken derived from CContainerEffectCard which is used to 
	implement the return that creature to its owner's hand at end of combat part.
*/
class CContainerEffectCard : public CEffectCard
{
protected:
	 CContainerEffectCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID)
		: CEffectCard(pGame, strCardName, cardType, uID)
	{
	}

	virtual ~CContainerEffectCard() {}

	CCountedCardContainer_ pCards;

public:
	void ReadData(CCountedCardContainer* Passed)
	{
		pCards.RemoveAll();
		for (int i = 0; i < Passed->GetSize(); ++i)
			pCards.AddCard(Passed->GetAt(i), CardPlacement::Top);
	}

	void WriteData(CCountedCardContainer* pOutput)
	{
		pOutput->RemoveAll();
		for (int i = 0; i < pCards.GetSize(); ++i)
			pOutput->AddCard(pCards.GetAt(i), CardPlacement::Top);
	}

	CCard* GetCard()
	{
		if (pCards.GetSize() == 0)
			return NULL;
		else
			return pCards.GetAt(0);
	}

//	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
};

//____________________________________________________________________________
//
/*	
	Not an actual card but is used when implementing some "effects" from cards.
	Example 
	Acidic Dagger 4 Artifact 4,Tap: Whenever target creature deals combat damage 
	to a non-Wall creature this turn, destroy that non-Wall creature. When the targeted 
	creature leaves the battlefield this turn, sacrifice Acidic Dagger. Activate this 
	ability only before blockers are declared.

	The main part of the card uses CInPlaySpellCard, this card creates a token, 
	AcidicDaggerEffectToken derived from CDoubleContainerEffectCard which is used to 
	implement the destroy creature ability and sacrifice acidic dagger ability.

*/
class CDoubleContainerEffectCard : public CEffectCard
{
protected:
	 CDoubleContainerEffectCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID)
		: CEffectCard(pGame, strCardName, cardType, uID)
	{
	}

	virtual ~CDoubleContainerEffectCard() {}

	CCountedCardContainer_ pCards1;
	CCountedCardContainer_ pCards2;

public:
	void ReadData(CCountedCardContainer* Passed1, CCountedCardContainer* Passed2)
	{
		pCards1.RemoveAll();
		for (int i = 0; i < Passed1->GetSize(); ++i)
			pCards1.AddCard(Passed1->GetAt(i), CardPlacement::Top);

		pCards2.RemoveAll();
		for (int i = 0; i < Passed2->GetSize(); ++i)
			pCards2.AddCard(Passed2->GetAt(i), CardPlacement::Top);
	}

	void WriteData(CCountedCardContainer* pOutput1, CCountedCardContainer* pOutput2)
	{
		pOutput1->RemoveAll();
		for (int i = 0; i < pCards1.GetSize(); ++i)
			pOutput1->AddCard(pCards1.GetAt(i), CardPlacement::Top);

		pOutput2->RemoveAll();
		for (int i = 0; i < pCards2.GetSize(); ++i)
			pOutput2->AddCard(pCards2.GetAt(i), CardPlacement::Top);
	}

	CCard* GetCard1()
	{
		if (pCards1.GetSize() == 0)
			return NULL;
		else
			return pCards1.GetAt(0);
	}

	CCard* GetCard2()
	{
		if (pCards2.GetSize() == 0)
			return NULL;
		else
			return pCards2.GetAt(0);
	}

//	OVERRIDE (CString, GetCardName)(BOOL bIncludeDetails = TRUE) const;
};

//____________________________________________________________________________
//
/*	
	Not an actual card but is used when implementing some "effects" from cards.
	Example 
	Mana Drain UU Interrupt Counter target spell. At the beginning of your next main phase, 
	add Variable Colorless to your mana pool, where X is that spell's converted mana cost.

	For this card the counterspell part of the card is implemented by using CCounterSpellCard
	and the effect "At the beginning of your next main phase, add Variable Colorless to your 
	mana pool, where X is that spell's converted mana cost." uses a token derived from 
	CNumberEffectCard.
*/
class CNumberEffectCard : public CEffectCard
{
protected:
	 CNumberEffectCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, UINT uID)
		: CEffectCard(pGame, strCardName, cardType, uID)
		, nNumber(0)
	{
	}

	virtual ~CNumberEffectCard() {}

	int_ nNumber;

public:
	void ReadData(int Passed)
	{
		nNumber = Passed;
	}

	int WriteData()
	{
		return nNumber;
	}

};

//____________________________________________________________________________
//
/*	
	Planechase decks contains ten unique Plane cards, these use CPlaneCard
	as their basis.
	Cards that are derived from CPlaneCard are all located in CardPlanechase.cpp
	CardPlanechase.h, CardPlanechase2.cpp and CardPlanechase2.h
	Example 
	Academy at Tolaria West Plane — Dominaria 
	At the beginning of your end step, if you have no cards in hand, draw seven cards.
	Whenever you roll [chaos], discard your hand.
*/
class CORE_EXPORT CPlaneCard : public CCard
{
protected:
	CPlaneCard(CGame* pGame, LPCTSTR strCardName, const PlaneType& subtype, UINT uID);

	virtual ~CPlaneCard() {}

public:
	OVERRIDE(void, Move)(CZone* pToZone,
					     const CPlayer* pByPlayer,
						 MoveType moveType,
					     CardPlacement cardPlacement = CardPlacement::Top, BOOL can_dredge = TRUE);
	
	PlaneType GetPlaneType()         {return m_Subtype;}
	const PlaneType GetPlaneType()    const      {return m_Subtype;}


protected:
	PlaneType		m_Subtype;
};

//____________________________________________________________________________
//
